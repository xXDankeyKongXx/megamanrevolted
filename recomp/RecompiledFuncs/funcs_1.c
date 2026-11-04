#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_800931F0_6E5F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800931F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800931F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800931F8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800931FC: jal         0x80093F20
    // 0x80093200: addiu       $a0, $a0, -0xE60
    ctx->r4 = ADD32(ctx->r4, -0XE60);
    func_80093F20_6F320(rdram, ctx);
        goto after_0;
    // 0x80093200: addiu       $a0, $a0, -0xE60
    ctx->r4 = ADD32(ctx->r4, -0XE60);
    after_0:
    // 0x80093204: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80093208: jr          $ra
    // 0x8009320C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8009320C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void coss(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80099D60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80099D64: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80099D68: addiu       $a0, $a0, 0x4000
    ctx->r4 = ADD32(ctx->r4, 0X4000);
    // 0x80099D6C: jal         0x80099F30
    // 0x80099D70: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    sins(rdram, ctx);
        goto after_0;
    // 0x80099D70: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    after_0:
    // 0x80099D74: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80099D78: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80099D7C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80099D80: jr          $ra
    // 0x80099D84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80099D84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006FAE8_4AEE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006FAE8: jr          $ra
    // 0x8006FAEC: nop

    TRACE_RETURN()
    return;
    // 0x8006FAEC: nop

;}
RECOMP_FUNC void func_8005CC60_38060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005CC60: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8005CC64: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8005CC68: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8005CC6C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8005CC70: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x8005CC74: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8005CC78: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x8005CC7C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8005CC80: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x8005CC84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8005CC88: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8005CC8C: addiu       $a1, $a1, 0x26E8
    ctx->r5 = ADD32(ctx->r5, 0X26E8);
    // 0x8005CC90: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8005CC94: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8005CC98: jal         0x8009A3B4
    // 0x8005CC9C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8005CC9C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x8005CCA0: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x8005CCA4: addiu       $s0, $s0, 0xB68
    ctx->r16 = ADD32(ctx->r16, 0XB68);
    // 0x8005CCA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8005CCAC: jal         0x8009A2B0
    // 0x8005CCB0: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x8005CCB0: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    after_1:
    // 0x8005CCB4: jal         0x80087AE8
    // 0x8005CCB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80087AE8_62EE8(rdram, ctx);
        goto after_2;
    // 0x8005CCB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8005CCBC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005CCC0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x8005CCC4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_8005CCC8:
    // 0x8005CCC8: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8005CCCC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8005CCD0: lbu         $v1, 0xB68($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB68);
    // 0x8005CCD4: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8005CCD8: bne         $v1, $v0, L_8005CCF4
    if (ctx->r3 != ctx->r2) {
        // 0x8005CCDC: nop
    
            goto L_8005CCF4;
    }
    // 0x8005CCDC: nop

    // 0x8005CCE0: beq         $a0, $a2, L_8005CD18
    if (ctx->r4 == ctx->r6) {
        // 0x8005CCE4: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8005CD18;
    }
    // 0x8005CCE4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8005CCE8: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x8005CCEC: bne         $v0, $zero, L_8005CCC8
    if (ctx->r2 != 0) {
        // 0x8005CCF0: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_8005CCC8;
    }
    // 0x8005CCF0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_8005CCF4:
    // 0x8005CCF4: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x8005CCF8: addiu       $s0, $s0, 0xB68
    ctx->r16 = ADD32(ctx->r16, 0XB68);
    // 0x8005CCFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8005CD00: jal         0x8009A2B0
    // 0x8005CD04: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    bzero_recomp(rdram, ctx);
        goto after_3;
    // 0x8005CD04: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    after_3:
    // 0x8005CD08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8005CD0C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8005CD10: jal         0x8009A3B4
    // 0x8005CD14: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8005CD14: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
L_8005CD18:
    // 0x8005CD18: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8005CD1C: addiu       $a0, $a0, 0xB68
    ctx->r4 = ADD32(ctx->r4, 0XB68);
    // 0x8005CD20: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x8005CD24: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8005CD28: sll         $v1, $s3, 16
    ctx->r3 = S32(ctx->r19 << 16);
    // 0x8005CD2C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8005CD30: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8005CD34: lbu         $a1, 0xB7C($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0XB7C);
    // 0x8005CD38: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8005CD3C: sllv        $v1, $v1, $s4
    ctx->r3 = S32(ctx->r3 << (ctx->r20 & 31));
    // 0x8005CD40: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    // 0x8005CD44: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8005CD48: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005CD4C: jal         0x800879A8
    // 0x8005CD50: sb          $a1, 0xB7C($at)
    MEM_B(0XB7C, ctx->r1) = ctx->r5;
    func_800879A8_62DA8(rdram, ctx);
        goto after_5;
    // 0x8005CD50: sb          $a1, 0xB7C($at)
    MEM_B(0XB7C, ctx->r1) = ctx->r5;
    after_5:
    // 0x8005CD54: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8005CD58: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8005CD5C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8005CD60: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8005CD64: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8005CD68: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8005CD6C: jr          $ra
    // 0x8005CD70: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8005CD70: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800922D0_6D6D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800922D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800922D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800922D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800922DC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x800922E0: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x800922E4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800922E8: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x800922EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800922F0: jal         0x80094460
    // 0x800922F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x800922F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800922F8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x800922FC: addiu       $a1, $a1, 0x5718
    ctx->r5 = ADD32(ctx->r5, 0X5718);
    // 0x80092300: sw          $s2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r18;
    // 0x80092304: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x80092308: addu        $v1, $s1, $zero
    ctx->r3 = ADD32(ctx->r17, 0);
    // 0x8009230C: andi        $s1, $s1, 0x2
    ctx->r17 = ctx->r17 & 0X2;
    // 0x80092310: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
    // 0x80092314: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x80092318: sw          $s0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r16;
    // 0x8009231C: beq         $s1, $zero, L_80092340
    if (ctx->r17 == 0) {
        // 0x80092320: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_80092340;
    }
    // 0x80092320: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80092324: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x80092328: lbu         $v0, 0x5474($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5474);
    // 0x8009232C: beq         $v0, $zero, L_80092340
    if (ctx->r2 == 0) {
        // 0x80092330: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80092340;
    }
    // 0x80092330: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80092334: addiu       $a1, $a1, -0x666
    ctx->r5 = ADD32(ctx->r5, -0X666);
    // 0x80092338: jal         0x8009A710
    // 0x8009233C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8009233C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
L_80092340:
    // 0x80092340: jal         0x80094460
    // 0x80092344: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    osSetIntMask_recomp(rdram, ctx);
        goto after_2;
    // 0x80092344: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80092348: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009234C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80092350: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80092354: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80092358: jr          $ra
    // 0x8009235C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8009235C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80062410_3D810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80062410: lhu         $v0, 0xC0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XC0);
    // 0x80062414: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80062418: sh          $v1, 0xC0($a0)
    MEM_H(0XC0, ctx->r4) = ctx->r3;
    // 0x8006241C: lw          $v1, 0x6C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X6C);
    // 0x80062420: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80062424: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80062428: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8006242C: sw          $v1, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r3;
    // 0x80062430: lw          $a1, 0x44($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X44);
    // 0x80062434: beq         $a1, $zero, L_8006246C
    if (ctx->r5 == 0) {
        // 0x80062438: nop
    
            goto L_8006246C;
    }
    // 0x80062438: nop

    // 0x8006243C: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x80062440: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x80062444: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80062448: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8006244C: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80062450: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x80062454: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80062458: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8006245C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80062460: addu        $v1, $a1, $v1
    ctx->r3 = ADD32(ctx->r5, ctx->r3);
    // 0x80062464: j           L_80062488
    // 0x80062468: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
        goto L_80062488;
    // 0x80062468: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
L_8006246C:
    // 0x8006246C: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x80062470: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x80062474: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80062478: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8006247C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80062480: lw          $v0, 0x27EC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X27EC);
    // 0x80062484: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
L_80062488:
    // 0x80062488: jr          $ra
    // 0x8006248C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8006248C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8004E318_29718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004E318: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8004E31C: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x8004E320: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8004E324: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x8004E328: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8004E32C: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x8004E330: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x8004E334: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x8004E338: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x8004E33C: sw          $ra, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r31;
    // 0x8004E340: jal         0x8002C654
    // 0x8004E344: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8004E344: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x8004E348: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8004E34C: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x8004E350: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x8004E354: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004E358: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x8004E35C: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x8004E360: lhu         $v1, 0x2($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X2);
    // 0x8004E364: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8004E368: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
    // 0x8004E36C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004E370: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x8004E374: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8004E378: lhu         $v1, 0x4($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X4);
    // 0x8004E37C: subu        $a0, $a0, $s0
    ctx->r4 = SUB32(ctx->r4, ctx->r16);
    // 0x8004E380: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8004E384: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004E388: jal         0x800319B4
    // 0x8004E38C: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8004E38C: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    after_1:
    // 0x8004E390: jal         0x80031E5C
    // 0x8004E394: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_80031E5C_D25C(rdram, ctx);
        goto after_2;
    // 0x8004E394: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x8004E398: jal         0x80031E94
    // 0x8004E39C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_80031E94_D294(rdram, ctx);
        goto after_3;
    // 0x8004E39C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x8004E3A0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8004E3A4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8004E3A8: jal         0x80032068
    // 0x8004E3AC: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    func_80032068_D468(rdram, ctx);
        goto after_4;
    // 0x8004E3AC: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_4:
    // 0x8004E3B0: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x8004E3B4: bgez        $a1, L_8004E3C4
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8004E3B8: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_8004E3C4;
    }
    // 0x8004E3B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8004E3BC: j           L_8004E408
    // 0x8004E3C0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
        goto L_8004E408;
    // 0x8004E3C0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
L_8004E3C4:
    // 0x8004E3C4: lh          $v1, 0x0($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X0);
    // 0x8004E3C8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8004E3CC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8004E3D0: bltz        $a0, L_8004E3F0
    if (SIGNED(ctx->r4) < 0) {
        // 0x8004E3D4: subu        $v1, $v0, $v1
        ctx->r3 = SUB32(ctx->r2, ctx->r3);
            goto L_8004E3F0;
    }
    // 0x8004E3D4: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x8004E3D8: sllv        $v0, $a0, $v1
    ctx->r2 = S32(ctx->r4 << (ctx->r3 & 31));
    // 0x8004E3DC: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8004E3E0: bnel        $v0, $zero, L_8004E408
    if (ctx->r2 != 0) {
        // 0x8004E3E4: ori         $a2, $a2, 0x2
        ctx->r6 = ctx->r6 | 0X2;
            goto L_8004E408;
    }
    goto skip_0;
    // 0x8004E3E4: ori         $a2, $a2, 0x2
    ctx->r6 = ctx->r6 | 0X2;
    skip_0:
    // 0x8004E3E8: j           L_8004E40C
    // 0x8004E3EC: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
        goto L_8004E40C;
    // 0x8004E3EC: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
L_8004E3F0:
    // 0x8004E3F0: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
    // 0x8004E3F4: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x8004E3F8: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8004E3FC: beq         $v0, $zero, L_8004E40C
    if (ctx->r2 == 0) {
        // 0x8004E400: addu        $v0, $a2, $zero
        ctx->r2 = ADD32(ctx->r6, 0);
            goto L_8004E40C;
    }
    // 0x8004E400: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x8004E404: ori         $a2, $a2, 0x2
    ctx->r6 = ctx->r6 | 0X2;
L_8004E408:
    // 0x8004E408: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
L_8004E40C:
    // 0x8004E40C: lw          $ra, 0x60($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X60);
    // 0x8004E410: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x8004E414: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x8004E418: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x8004E41C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x8004E420: jr          $ra
    // 0x8004E424: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x8004E424: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80065084_40484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80065084: lhu         $v1, 0xC0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XC0);
    // 0x80065088: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8006508C: lbu         $a1, 0x6B39($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X6B39);
    // 0x80065090: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80065094: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80065098: sh          $v0, 0xC0($a0)
    MEM_H(0XC0, ctx->r4) = ctx->r2;
    // 0x8006509C: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x800650A0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800650A4: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x800650A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800650AC: sw          $v0, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->r2;
    // 0x800650B0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800650B4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800650B8: lw          $v0, 0x28C4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X28C4);
    // 0x800650BC: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
    // 0x800650C0: jr          $ra
    // 0x800650C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x800650C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80077E70_53270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80077E70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80077E74: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80077E78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80077E7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80077E80: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80077E84: bne         $v0, $zero, L_80077F14
    if (ctx->r2 != 0) {
        // 0x80077E88: lui         $a0, 0x3D48
        ctx->r4 = S32(0X3D48 << 16);
            goto L_80077F14;
    }
    // 0x80077E88: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x80077E8C: ori         $a0, $a0, 0x2E
    ctx->r4 = ctx->r4 | 0X2E;
    // 0x80077E90: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80077E94: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x80077E98: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80077E9C: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    // 0x80077EA0: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x80077EA4: ori         $v0, $v0, 0x22
    ctx->r2 = ctx->r2 | 0X22;
    // 0x80077EA8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80077EAC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80077EB0: lbu         $v0, -0x3350($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3350);
    // 0x80077EB4: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x80077EB8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80077EBC: lbu         $v0, -0x334F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X334F);
    // 0x80077EC0: sb          $v0, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r2;
    // 0x80077EC4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80077EC8: lbu         $v0, -0x3344($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3344);
    // 0x80077ECC: jal         0x800A3450
    // 0x80077ED0: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80077ED0: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    after_0:
    // 0x80077ED4: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80077ED8: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80077EDC: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80077EE0: sh          $v0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r2;
    // 0x80077EE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80077EE8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80077EEC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80077EF0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80077EF4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80077EF8: beq         $a0, $zero, L_80077F9C
    if (ctx->r4 == 0) {
        // 0x80077EFC: sb          $v1, 0x8($s0)
        MEM_B(0X8, ctx->r16) = ctx->r3;
            goto L_80077F9C;
    }
    // 0x80077EFC: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80077F00: addiu       $a0, $zero, 0x9B
    ctx->r4 = ADD32(0, 0X9B);
    // 0x80077F04: jal         0x8002A33C
    // 0x80077F08: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80077F08: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    after_1:
    // 0x80077F0C: j           L_80077F9C
    // 0x80077F10: nop

        goto L_80077F9C;
    // 0x80077F10: nop

L_80077F14:
    // 0x80077F14: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80077F18: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80077F1C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80077F20: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80077F24: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80077F28: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80077F2C: bne         $v0, $zero, L_80077F9C
    if (ctx->r2 != 0) {
        // 0x80077F30: sb          $v1, 0x9($s0)
        MEM_B(0X9, ctx->r16) = ctx->r3;
            goto L_80077F9C;
    }
    // 0x80077F30: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x80077F34: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80077F38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80077F3C: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80077F40: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80077F44: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80077F48: bne         $v0, $zero, L_80077F60
    if (ctx->r2 != 0) {
        // 0x80077F4C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80077F60;
    }
    // 0x80077F4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80077F50: jal         0x8004F5C4
    // 0x80077F54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_2;
    // 0x80077F54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80077F58: j           L_80077F9C
    // 0x80077F5C: nop

        goto L_80077F9C;
    // 0x80077F5C: nop

L_80077F60:
    // 0x80077F60: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80077F64: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80077F68: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80077F6C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80077F70: lbu         $v0, -0x3350($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3350);
    // 0x80077F74: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x80077F78: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80077F7C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80077F80: lbu         $v0, -0x334F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X334F);
    // 0x80077F84: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80077F88: sb          $v0, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r2;
    // 0x80077F8C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80077F90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80077F94: lbu         $v0, -0x3344($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3344);
    // 0x80077F98: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80077F9C:
    // 0x80077F9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80077FA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80077FA4: jr          $ra
    // 0x80077FA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80077FA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80077FAC: nop

;}
RECOMP_FUNC void func_8002BE78_7278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002BE78: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8002BE7C: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x8002BE80: bne         $v0, $zero, L_8002BE90
    if (ctx->r2 != 0) {
        // 0x8002BE84: nop
    
            goto L_8002BE90;
    }
    // 0x8002BE84: nop

    // 0x8002BE88: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8002BE8C: sb          $a0, -0x7388($at)
    MEM_B(-0X7388, ctx->r1) = ctx->r4;
L_8002BE90:
    // 0x8002BE90: jr          $ra
    // 0x8002BE94: nop

    TRACE_RETURN()
    return;
    // 0x8002BE94: nop

;}
RECOMP_FUNC void _freePVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80099264: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80099268: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8009926C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80099270: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80099274: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80099278: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8009927C: jal         0x80098C4C
    // 0x80099280: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    alUnlink(rdram, ctx);
        goto after_0;
    // 0x80099280: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80099284: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80099288: jal         0x80098C2C
    // 0x8009928C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    alLink(rdram, ctx);
        goto after_1;
    // 0x8009928C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_1:
    // 0x80099290: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80099294: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80099298: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8009929C: jr          $ra
    // 0x800992A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800992A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80084EF8_602F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80084EF8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80084EFC: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80084F00: lbu         $s5, 0x43($sp)
    ctx->r21 = MEM_BU(ctx->r29, 0X43);
    // 0x80084F04: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80084F08: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x80084F0C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80084F10: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x80084F14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80084F18: lhu         $s0, 0x46($sp)
    ctx->r16 = MEM_HU(ctx->r29, 0X46);
    // 0x80084F1C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80084F20: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80084F24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80084F28: lhu         $s1, 0x4A($sp)
    ctx->r17 = MEM_HU(ctx->r29, 0X4A);
    // 0x80084F2C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80084F30: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80084F34: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80084F38: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80084F3C: jal         0x80087248
    // 0x80084F40: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_80087248_62648(rdram, ctx);
        goto after_0;
    // 0x80084F40: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x80084F44: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80084F48: beq         $s2, $zero, L_800851E8
    if (ctx->r18 == 0) {
        // 0x80084F4C: addiu       $s6, $zero, 0x10
        ctx->r22 = ADD32(0, 0X10);
            goto L_800851E8;
    }
    // 0x80084F4C: addiu       $s6, $zero, 0x10
    ctx->r22 = ADD32(0, 0X10);
    // 0x80084F50: beq         $s0, $zero, L_80085100
    if (ctx->r16 == 0) {
        // 0x80084F54: andi        $s1, $s1, 0xFFFF
        ctx->r17 = ctx->r17 & 0XFFFF;
            goto L_80085100;
    }
    // 0x80084F54: andi        $s1, $s1, 0xFFFF
    ctx->r17 = ctx->r17 & 0XFFFF;
    // 0x80084F58: xori        $v0, $s1, 0x1
    ctx->r2 = ctx->r17 ^ 0X1;
    // 0x80084F5C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80084F60: andi        $s0, $s3, 0xFF
    ctx->r16 = ctx->r19 & 0XFF;
    // 0x80084F64: sltiu       $s3, $s0, 0x81
    ctx->r19 = ctx->r16 < 0X81 ? 1 : 0;
    // 0x80084F68: xori        $v1, $s3, 0x1
    ctx->r3 = ctx->r19 ^ 0X1;
    // 0x80084F6C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80084F70: bne         $v0, $zero, L_80084F94
    if (ctx->r2 != 0) {
        // 0x80084F74: andi        $v0, $s4, 0xFF
        ctx->r2 = ctx->r20 & 0XFF;
            goto L_80084F94;
    }
    // 0x80084F74: andi        $v0, $s4, 0xFF
    ctx->r2 = ctx->r20 & 0XFF;
    // 0x80084F78: sltiu       $v0, $v0, 0x81
    ctx->r2 = ctx->r2 < 0X81 ? 1 : 0;
    // 0x80084F7C: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x80084F80: sltiu       $v1, $s5, 0x81
    ctx->r3 = ctx->r21 < 0X81 ? 1 : 0;
    // 0x80084F84: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x80084F88: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80084F8C: beq         $v0, $zero, L_80085104
    if (ctx->r2 == 0) {
        // 0x80084F90: andi        $v0, $s2, 0x7
        ctx->r2 = ctx->r18 & 0X7;
            goto L_80085104;
    }
    // 0x80084F90: andi        $v0, $s2, 0x7
    ctx->r2 = ctx->r18 & 0X7;
L_80084F94:
    // 0x80084F94: jal         0x800281C8
    // 0x80084F98: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_800281C8_35C8(rdram, ctx);
        goto after_1;
    // 0x80084F98: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_1:
    // 0x80084F9C: addu        $t3, $v0, $zero
    ctx->r11 = ADD32(ctx->r2, 0);
    // 0x80084FA0: beq         $t3, $zero, L_80085100
    if (ctx->r11 == 0) {
        // 0x80084FA4: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_80085100;
    }
    // 0x80084FA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80084FA8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80084FAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80084FB0: bne         $s1, $v0, L_80084FC4
    if (ctx->r17 != ctx->r2) {
        // 0x80084FB4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80084FC4;
    }
    // 0x80084FB4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80084FB8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80084FBC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80084FC0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_80084FC4:
    // 0x80084FC4: bne         $s3, $zero, L_80084FE4
    if (ctx->r19 != 0) {
        // 0x80084FC8: andi        $a3, $s4, 0xFF
        ctx->r7 = ctx->r20 & 0XFF;
            goto L_80084FE4;
    }
    // 0x80084FC8: andi        $a3, $s4, 0xFF
    ctx->r7 = ctx->r20 & 0XFF;
    // 0x80084FCC: addiu       $v0, $s0, -0x80
    ctx->r2 = ADD32(ctx->r16, -0X80);
    // 0x80084FD0: bltzl       $v0, L_80084FD8
    if (SIGNED(ctx->r2) < 0) {
        // 0x80084FD4: addiu       $v0, $s0, -0x79
        ctx->r2 = ADD32(ctx->r16, -0X79);
            goto L_80084FD8;
    }
    goto skip_0;
    // 0x80084FD4: addiu       $v0, $s0, -0x79
    ctx->r2 = ADD32(ctx->r16, -0X79);
    skip_0:
L_80084FD8:
    // 0x80084FD8: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x80084FDC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80084FE0: andi        $a3, $s4, 0xFF
    ctx->r7 = ctx->r20 & 0XFF;
L_80084FE4:
    // 0x80084FE4: sltiu       $v0, $a3, 0x81
    ctx->r2 = ctx->r7 < 0X81 ? 1 : 0;
    // 0x80084FE8: bne         $v0, $zero, L_80085008
    if (ctx->r2 != 0) {
        // 0x80084FEC: andi        $v1, $s5, 0xFF
        ctx->r3 = ctx->r21 & 0XFF;
            goto L_80085008;
    }
    // 0x80084FEC: andi        $v1, $s5, 0xFF
    ctx->r3 = ctx->r21 & 0XFF;
    // 0x80084FF0: addiu       $v0, $a3, -0x80
    ctx->r2 = ADD32(ctx->r7, -0X80);
    // 0x80084FF4: bltzl       $v0, L_80084FFC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80084FF8: addiu       $v0, $a3, -0x79
        ctx->r2 = ADD32(ctx->r7, -0X79);
            goto L_80084FFC;
    }
    goto skip_1;
    // 0x80084FF8: addiu       $v0, $a3, -0x79
    ctx->r2 = ADD32(ctx->r7, -0X79);
    skip_1:
L_80084FFC:
    // 0x80084FFC: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x80085000: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80085004: andi        $v1, $s5, 0xFF
    ctx->r3 = ctx->r21 & 0XFF;
L_80085008:
    // 0x80085008: sltiu       $v0, $v1, 0x81
    ctx->r2 = ctx->r3 < 0X81 ? 1 : 0;
    // 0x8008500C: bne         $v0, $zero, L_8008502C
    if (ctx->r2 != 0) {
        // 0x80085010: addu        $t2, $zero, $zero
        ctx->r10 = ADD32(0, 0);
            goto L_8008502C;
    }
    // 0x80085010: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
    // 0x80085014: addiu       $v0, $v1, -0x80
    ctx->r2 = ADD32(ctx->r3, -0X80);
    // 0x80085018: bltzl       $v0, L_80085020
    if (SIGNED(ctx->r2) < 0) {
        // 0x8008501C: addiu       $v0, $v1, -0x79
        ctx->r2 = ADD32(ctx->r3, -0X79);
            goto L_80085020;
    }
    goto skip_2;
    // 0x8008501C: addiu       $v0, $v1, -0x79
    ctx->r2 = ADD32(ctx->r3, -0X79);
    skip_2:
L_80085020:
    // 0x80085020: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x80085024: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80085028: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
L_8008502C:
    // 0x8008502C: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
    // 0x80085030: sra         $t6, $v0, 24
    ctx->r14 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80085034: sll         $v0, $a1, 24
    ctx->r2 = S32(ctx->r5 << 24);
    // 0x80085038: sra         $t5, $v0, 24
    ctx->r13 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8008503C: sll         $v0, $a2, 24
    ctx->r2 = S32(ctx->r6 << 24);
    // 0x80085040: sra         $t4, $v0, 24
    ctx->r12 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80085044: addu        $t1, $t3, $zero
    ctx->r9 = ADD32(ctx->r11, 0);
    // 0x80085048: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
L_8008504C:
    // 0x8008504C: lhu         $t0, 0x0($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X0);
    // 0x80085050: andi        $a0, $t0, 0xFFFF
    ctx->r4 = ctx->r8 & 0XFFFF;
    // 0x80085054: srl         $v1, $a0, 11
    ctx->r3 = S32(U32(ctx->r4) >> 11);
    // 0x80085058: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x8008505C: slti        $v0, $v1, 0x1F
    ctx->r2 = SIGNED(ctx->r3) < 0X1F ? 1 : 0;
    // 0x80085060: beql        $v0, $zero, L_80085068
    if (ctx->r2 == 0) {
        // 0x80085064: addiu       $v1, $zero, 0x1F
        ctx->r3 = ADD32(0, 0X1F);
            goto L_80085068;
    }
    goto skip_3;
    // 0x80085064: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    skip_3:
L_80085068:
    // 0x80085068: nor         $v0, $zero, $v1
    ctx->r2 = ~(0 | ctx->r3);
    // 0x8008506C: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80085070: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80085074: srl         $v1, $a0, 6
    ctx->r3 = S32(U32(ctx->r4) >> 6);
    // 0x80085078: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8008507C: addu        $v1, $v1, $t5
    ctx->r3 = ADD32(ctx->r3, ctx->r13);
    // 0x80085080: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    // 0x80085084: slti        $v0, $v1, 0x1F
    ctx->r2 = SIGNED(ctx->r3) < 0X1F ? 1 : 0;
    // 0x80085088: beql        $v0, $zero, L_80085090
    if (ctx->r2 == 0) {
        // 0x8008508C: addiu       $v1, $zero, 0x1F
        ctx->r3 = ADD32(0, 0X1F);
            goto L_80085090;
    }
    goto skip_4;
    // 0x8008508C: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    skip_4:
L_80085090:
    // 0x80085090: nor         $v0, $zero, $v1
    ctx->r2 = ~(0 | ctx->r3);
    // 0x80085094: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80085098: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8008509C: srl         $v1, $a0, 1
    ctx->r3 = S32(U32(ctx->r4) >> 1);
    // 0x800850A0: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x800850A4: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x800850A8: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    // 0x800850AC: slti        $v0, $v1, 0x1F
    ctx->r2 = SIGNED(ctx->r3) < 0X1F ? 1 : 0;
    // 0x800850B0: beql        $v0, $zero, L_800850B8
    if (ctx->r2 == 0) {
        // 0x800850B4: addiu       $v1, $zero, 0x1F
        ctx->r3 = ADD32(0, 0X1F);
            goto L_800850B8;
    }
    goto skip_5;
    // 0x800850B4: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    skip_5:
L_800850B8:
    // 0x800850B8: nor         $v0, $zero, $v1
    ctx->r2 = ~(0 | ctx->r3);
    // 0x800850BC: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x800850C0: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x800850C4: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x800850C8: andi        $v1, $t0, 0x1
    ctx->r3 = ctx->r8 & 0X1;
    // 0x800850CC: sll         $v0, $a3, 11
    ctx->r2 = S32(ctx->r7 << 11);
    // 0x800850D0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800850D4: sll         $v0, $a2, 6
    ctx->r2 = S32(ctx->r6 << 6);
    // 0x800850D8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800850DC: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x800850E0: or          $t0, $v1, $v0
    ctx->r8 = ctx->r3 | ctx->r2;
    // 0x800850E4: sh          $t0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r8;
    // 0x800850E8: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
    // 0x800850EC: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x800850F0: sltiu       $v0, $t2, 0x10
    ctx->r2 = ctx->r10 < 0X10 ? 1 : 0;
    // 0x800850F4: bne         $v0, $zero, L_8008504C
    if (ctx->r2 != 0) {
        // 0x800850F8: addiu       $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_8008504C;
    }
    // 0x800850F8: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x800850FC: addu        $s2, $t3, $zero
    ctx->r18 = ADD32(ctx->r11, 0);
L_80085100:
    // 0x80085100: andi        $v0, $s2, 0x7
    ctx->r2 = ctx->r18 & 0X7;
L_80085104:
    // 0x80085104: beq         $v0, $zero, L_8008513C
    if (ctx->r2 == 0) {
        // 0x80085108: sll         $v0, $s6, 16
        ctx->r2 = S32(ctx->r22 << 16);
            goto L_8008513C;
    }
    // 0x80085108: sll         $v0, $s6, 16
    ctx->r2 = S32(ctx->r22 << 16);
    // 0x8008510C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80085110: sll         $s1, $v0, 1
    ctx->r17 = S32(ctx->r2 << 1);
    // 0x80085114: jal         0x800281C8
    // 0x80085118: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800281C8_35C8(rdram, ctx);
        goto after_2;
    // 0x80085118: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8008511C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80085120: beq         $s0, $zero, L_800851E8
    if (ctx->r16 == 0) {
        // 0x80085124: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_800851E8;
    }
    // 0x80085124: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80085128: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8008512C: jal         0x8009A3B4
    // 0x80085130: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80085130: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_3:
    // 0x80085134: j           L_80085144
    // 0x80085138: lui         $a0, 0xF500
    ctx->r4 = S32(0XF500 << 16);
        goto L_80085144;
    // 0x80085138: lui         $a0, 0xF500
    ctx->r4 = S32(0XF500 << 16);
L_8008513C:
    // 0x8008513C: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    // 0x80085140: lui         $a0, 0xF500
    ctx->r4 = S32(0XF500 << 16);
L_80085144:
    // 0x80085144: ori         $a0, $a0, 0x100
    ctx->r4 = ctx->r4 | 0X100;
    // 0x80085148: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8008514C: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x80085150: lui         $a1, 0x703
    ctx->r5 = S32(0X703 << 16);
    // 0x80085154: ori         $a1, $a1, 0xC000
    ctx->r5 = ctx->r5 | 0XC000;
    // 0x80085158: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x8008515C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80085160: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x80085164: lui         $v1, 0xFD10
    ctx->r3 = S32(0XFD10 << 16);
    // 0x80085168: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x8008516C: addiu       $v1, $v0, 0x10
    ctx->r3 = ADD32(ctx->r2, 0X10);
    // 0x80085170: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80085174: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x80085178: lui         $v1, 0xE800
    ctx->r3 = S32(0XE800 << 16);
    // 0x8008517C: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x80085180: addiu       $v1, $v0, 0x18
    ctx->r3 = ADD32(ctx->r2, 0X18);
    // 0x80085184: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80085188: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8008518C: lui         $v1, 0x700
    ctx->r3 = S32(0X700 << 16);
    // 0x80085190: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x80085194: addiu       $v1, $v0, 0x20
    ctx->r3 = ADD32(ctx->r2, 0X20);
    // 0x80085198: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008519C: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x800851A0: lui         $v1, 0xE600
    ctx->r3 = S32(0XE600 << 16);
    // 0x800851A4: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x800851A8: addiu       $v1, $v0, 0x28
    ctx->r3 = ADD32(ctx->r2, 0X28);
    // 0x800851AC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800851B0: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x800851B4: lui         $v1, 0xF000
    ctx->r3 = S32(0XF000 << 16);
    // 0x800851B8: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x800851BC: addiu       $v1, $v0, 0x30
    ctx->r3 = ADD32(ctx->r2, 0X30);
    // 0x800851C0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800851C4: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x800851C8: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x800851CC: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x800851D0: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x800851D4: sw          $a0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r4;
    // 0x800851D8: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x800851DC: sw          $a1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r5;
    // 0x800851E0: sw          $v1, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r3;
    // 0x800851E4: sw          $zero, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = 0;
L_800851E8:
    // 0x800851E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800851EC: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x800851F0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x800851F4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x800851F8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x800851FC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80085200: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80085204: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80085208: jr          $ra
    // 0x8008520C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8008520C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8002891C_3D1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002891C: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80028920: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80028924: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80028928: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8002892C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80028930: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80028934: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80028938: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8002893C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80028940: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80028944: jr          $ra
    // 0x80028948: sb          $v1, 0x4898($at)
    MEM_B(0X4898, ctx->r1) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80028948: sb          $v1, 0x4898($at)
    MEM_B(0X4898, ctx->r1) = ctx->r3;
;}
RECOMP_FUNC void func_80072C8C_4E08C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80072C8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80072C90: lui         $t4, 0xFFFF
    ctx->r12 = S32(0XFFFF << 16);
    // 0x80072C94: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x80072C98: addiu       $t3, $t3, -0x3590
    ctx->r11 = ADD32(ctx->r11, -0X3590);
    // 0x80072C9C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80072CA0: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80072CA4: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80072CA8: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
L_80072CAC:
    // 0x80072CAC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80072CB0: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80072CB4: lw          $v0, 0x5088($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5088);
    // 0x80072CB8: beq         $v0, $zero, L_80072D74
    if (ctx->r2 == 0) {
        // 0x80072CBC: nop
    
            goto L_80072D74;
    }
    // 0x80072CBC: nop

    // 0x80072CC0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80072CC4: and         $v0, $v0, $t4
    ctx->r2 = ctx->r2 & ctx->r12;
    // 0x80072CC8: bnel        $v0, $a1, L_80072D68
    if (ctx->r2 != ctx->r5) {
        // 0x80072CCC: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_80072D68;
    }
    goto skip_0;
    // 0x80072CCC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_0:
    // 0x80072CD0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80072CD4: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80072CD8: lh          $v0, 0x5086($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X5086);
    // 0x80072CDC: bnel        $v0, $zero, L_80072D68
    if (ctx->r2 != 0) {
        // 0x80072CE0: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_80072D68;
    }
    goto skip_1;
    // 0x80072CE0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_1:
    // 0x80072CE4: bltz        $a2, L_80072D58
    if (SIGNED(ctx->r6) < 0) {
        // 0x80072CE8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80072D58;
    }
    // 0x80072CE8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80072CEC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80072CF0: lb          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC8);
    // 0x80072CF4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80072CF8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80072CFC: lb          $v1, 0x3580($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X3580);
    // 0x80072D00: bltz        $v1, L_80072D54
    if (SIGNED(ctx->r3) < 0) {
        // 0x80072D04: sll         $v1, $v1, 9
        ctx->r3 = S32(ctx->r3 << 9);
            goto L_80072D54;
    }
    // 0x80072D04: sll         $v1, $v1, 9
    ctx->r3 = S32(ctx->r3 << 9);
    // 0x80072D08: addu        $v1, $v1, $t3
    ctx->r3 = ADD32(ctx->r3, ctx->r11);
    // 0x80072D0C: sra         $v0, $a2, 4
    ctx->r2 = S32(SIGNED(ctx->r6) >> 4);
    // 0x80072D10: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80072D14: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80072D18: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80072D1C: andi        $v0, $a2, 0xF
    ctx->r2 = ctx->r6 & 0XF;
    // 0x80072D20: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80072D24: srlv        $v1, $v1, $v0
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r2 & 31));
    // 0x80072D28: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x80072D2C: beql        $v1, $t2, L_80072D58
    if (ctx->r3 == ctx->r10) {
        // 0x80072D30: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80072D58;
    }
    goto skip_2;
    // 0x80072D30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_2:
    // 0x80072D34: beql        $v1, $zero, L_80072D58
    if (ctx->r3 == 0) {
        // 0x80072D38: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80072D58;
    }
    goto skip_3;
    // 0x80072D38: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_3:
    // 0x80072D3C: beql        $v1, $t1, L_80072D58
    if (ctx->r3 == ctx->r9) {
        // 0x80072D40: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80072D58;
    }
    goto skip_4;
    // 0x80072D40: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_4:
    // 0x80072D44: beq         $v1, $t0, L_80072D58
    if (ctx->r3 == ctx->r8) {
        // 0x80072D48: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80072D58;
    }
    // 0x80072D48: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80072D4C: j           L_80072D58
    // 0x80072D50: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80072D58;
    // 0x80072D50: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80072D54:
    // 0x80072D54: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80072D58:
    // 0x80072D58: blezl       $v0, L_80072D68
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80072D5C: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_80072D68;
    }
    goto skip_5;
    // 0x80072D5C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_5:
    // 0x80072D60: j           L_80072D74
    // 0x80072D64: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
        goto L_80072D74;
    // 0x80072D64: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
L_80072D68:
    // 0x80072D68: sltiu       $v0, $a2, 0x6B0
    ctx->r2 = ctx->r6 < 0X6B0 ? 1 : 0;
    // 0x80072D6C: bne         $v0, $zero, L_80072CAC
    if (ctx->r2 != 0) {
        // 0x80072D70: addiu       $a3, $a3, 0xC
        ctx->r7 = ADD32(ctx->r7, 0XC);
            goto L_80072CAC;
    }
    // 0x80072D70: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
L_80072D74:
    // 0x80072D74: jr          $ra
    // 0x80072D78: nop

    TRACE_RETURN()
    return;
    // 0x80072D78: nop

;}
RECOMP_FUNC void func_80029554_4954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80029554: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x80029558: lb          $v1, 0x4($t0)
    ctx->r3 = MEM_B(ctx->r8, 0X4);
    // 0x8002955C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80029560: beq         $v1, $v0, L_8002987C
    if (ctx->r3 == ctx->r2) {
        // 0x80029564: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8002987C;
    }
    // 0x80029564: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80029568: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x8002956C: lw          $v0, 0x3C30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C30);
    // 0x80029570: lb          $a3, 0x5($t0)
    ctx->r7 = MEM_B(ctx->r8, 0X5);
    // 0x80029574: beq         $v0, $a0, L_800295C0
    if (ctx->r2 == ctx->r4) {
        // 0x80029578: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_800295C0;
    }
    // 0x80029578: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8002957C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80029580: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x80029584: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80029588: sw          $v0, 0x6F30($at)
    MEM_W(0X6F30, ctx->r1) = ctx->r2;
    // 0x8002958C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80029590: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80029594: sw          $a0, 0x3C30($at)
    MEM_W(0X3C30, ctx->r1) = ctx->r4;
    // 0x80029598: lui         $at, 0x8014
    ctx->r1 = S32(0X8014 << 16);
    // 0x8002959C: sb          $v0, -0x6FC0($at)
    MEM_B(-0X6FC0, ctx->r1) = ctx->r2;
    // 0x800295A0: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x800295A4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800295A8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800295AC: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x800295B0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x800295B4: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x800295B8: addiu       $v0, $v0, 0x50F0
    ctx->r2 = ADD32(ctx->r2, 0X50F0);
    // 0x800295BC: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_800295C0:
    // 0x800295C0: lui         $v0, 0x8014
    ctx->r2 = S32(0X8014 << 16);
    // 0x800295C4: lb          $v0, -0x6FC0($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X6FC0);
    // 0x800295C8: beq         $v0, $a3, L_8002968C
    if (ctx->r2 == ctx->r7) {
        // 0x800295CC: lui         $a1, 0xF500
        ctx->r5 = S32(0XF500 << 16);
            goto L_8002968C;
    }
    // 0x800295CC: lui         $a1, 0xF500
    ctx->r5 = S32(0XF500 << 16);
    // 0x800295D0: ori         $a1, $a1, 0x100
    ctx->r5 = ctx->r5 | 0X100;
    // 0x800295D4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800295D8: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x800295DC: lui         $a2, 0x703
    ctx->r6 = S32(0X703 << 16);
    // 0x800295E0: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x800295E4: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x800295E8: addiu       $a0, $a0, 0x4FF0
    ctx->r4 = ADD32(ctx->r4, 0X4FF0);
    // 0x800295EC: lui         $at, 0x8014
    ctx->r1 = S32(0X8014 << 16);
    // 0x800295F0: sb          $a3, -0x6FC0($at)
    MEM_B(-0X6FC0, ctx->r1) = ctx->r7;
    // 0x800295F4: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x800295F8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800295FC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80029600: lui         $v0, 0xFD10
    ctx->r2 = S32(0XFD10 << 16);
    // 0x80029604: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80029608: sll         $v0, $a3, 5
    ctx->r2 = S32(ctx->r7 << 5);
    // 0x8002960C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80029610: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x80029614: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x80029618: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002961C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80029620: lui         $v0, 0xE800
    ctx->r2 = S32(0XE800 << 16);
    // 0x80029624: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x80029628: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x8002962C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029630: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80029634: lui         $v0, 0x700
    ctx->r2 = S32(0X700 << 16);
    // 0x80029638: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
    // 0x8002963C: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x80029640: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029644: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80029648: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x8002964C: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x80029650: addiu       $v0, $v1, 0x28
    ctx->r2 = ADD32(ctx->r3, 0X28);
    // 0x80029654: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029658: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002965C: lui         $v0, 0xF000
    ctx->r2 = S32(0XF000 << 16);
    // 0x80029660: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80029664: addiu       $v0, $v1, 0x30
    ctx->r2 = ADD32(ctx->r3, 0X30);
    // 0x80029668: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002966C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80029670: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x80029674: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x80029678: sw          $a1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r5;
    // 0x8002967C: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x80029680: sw          $a2, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r6;
    // 0x80029684: sw          $v0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r2;
    // 0x80029688: sw          $zero, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = 0;
L_8002968C:
    // 0x8002968C: lh          $t5, 0x0($t0)
    ctx->r13 = MEM_H(ctx->r8, 0X0);
    // 0x80029690: lh          $t6, 0x2($t0)
    ctx->r14 = MEM_H(ctx->r8, 0X2);
    // 0x80029694: lbu         $a0, 0x4($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X4);
    // 0x80029698: addiu       $t7, $t5, 0x8
    ctx->r15 = ADD32(ctx->r13, 0X8);
    // 0x8002969C: addiu       $v0, $a0, -0x21
    ctx->r2 = ADD32(ctx->r4, -0X21);
    // 0x800296A0: sltiu       $v0, $v0, 0x3E
    ctx->r2 = ctx->r2 < 0X3E ? 1 : 0;
    // 0x800296A4: beq         $v0, $zero, L_800296C0
    if (ctx->r2 == 0) {
        // 0x800296A8: addiu       $t8, $t6, 0x8
        ctx->r24 = ADD32(ctx->r14, 0X8);
            goto L_800296C0;
    }
    // 0x800296A8: addiu       $t8, $t6, 0x8
    ctx->r24 = ADD32(ctx->r14, 0X8);
    // 0x800296AC: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
    // 0x800296B0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x800296B4: addiu       $t4, $v0, -0x21
    ctx->r12 = ADD32(ctx->r2, -0X21);
    // 0x800296B8: j           L_800296D0
    // 0x800296BC: addu        $t3, $zero, $zero
    ctx->r11 = ADD32(0, 0);
        goto L_800296D0;
    // 0x800296BC: addu        $t3, $zero, $zero
    ctx->r11 = ADD32(0, 0);
L_800296C0:
    // 0x800296C0: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
    // 0x800296C4: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x800296C8: addiu       $t4, $v0, -0x5F
    ctx->r12 = ADD32(ctx->r2, -0X5F);
    // 0x800296CC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_800296D0:
    // 0x800296D0: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x800296D4: lw          $v0, 0x6F30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6F30);
    // 0x800296D8: beq         $t3, $v0, L_800297DC
    if (ctx->r11 == ctx->r2) {
        // 0x800296DC: lui         $a1, 0x708
        ctx->r5 = S32(0X708 << 16);
            goto L_800297DC;
    }
    // 0x800296DC: lui         $a1, 0x708
    ctx->r5 = S32(0X708 << 16);
    // 0x800296E0: ori         $a1, $a1, 0x200
    ctx->r5 = ctx->r5 | 0X200;
    // 0x800296E4: lui         $a3, 0x73F
    ctx->r7 = S32(0X73F << 16);
    // 0x800296E8: ori         $a3, $a3, 0xF200
    ctx->r7 = ctx->r7 | 0XF200;
    // 0x800296EC: lui         $t2, 0xF540
    ctx->r10 = S32(0XF540 << 16);
    // 0x800296F0: ori         $t2, $t2, 0x800
    ctx->r10 = ctx->r10 | 0X800;
    // 0x800296F4: lui         $t1, 0x8
    ctx->r9 = S32(0X8 << 16);
    // 0x800296F8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800296FC: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x80029700: ori         $t1, $t1, 0x200
    ctx->r9 = ctx->r9 | 0X200;
    // 0x80029704: lui         $a0, 0xE700
    ctx->r4 = S32(0XE700 << 16);
    // 0x80029708: lui         $v1, 0xFD50
    ctx->r3 = S32(0XFD50 << 16);
    // 0x8002970C: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x80029710: sll         $v1, $t3, 2
    ctx->r3 = S32(ctx->r11 << 2);
    // 0x80029714: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x80029718: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8002971C: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x80029720: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
    // 0x80029724: lw          $t0, 0x6F34($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6F34);
    // 0x80029728: lui         $a2, 0xF
    ctx->r6 = S32(0XF << 16);
    // 0x8002972C: ori         $a2, $a2, 0xC0FC
    ctx->r6 = ctx->r6 | 0XC0FC;
    // 0x80029730: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80029734: sw          $t3, 0x6F30($at)
    MEM_W(0X6F30, ctx->r1) = ctx->r11;
    // 0x80029738: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x8002973C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029740: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x80029744: addiu       $v1, $v0, 0x10
    ctx->r3 = ADD32(ctx->r2, 0X10);
    // 0x80029748: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002974C: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x80029750: addiu       $v1, $v0, 0x18
    ctx->r3 = ADD32(ctx->r2, 0X18);
    // 0x80029754: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029758: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8002975C: lui         $v1, 0xF550
    ctx->r3 = S32(0XF550 << 16);
    // 0x80029760: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x80029764: addiu       $v1, $v0, 0x20
    ctx->r3 = ADD32(ctx->r2, 0X20);
    // 0x80029768: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002976C: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x80029770: lui         $v1, 0xE600
    ctx->r3 = S32(0XE600 << 16);
    // 0x80029774: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x80029778: addiu       $v1, $v0, 0x28
    ctx->r3 = ADD32(ctx->r2, 0X28);
    // 0x8002977C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029780: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x80029784: lui         $v1, 0xF300
    ctx->r3 = S32(0XF300 << 16);
    // 0x80029788: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x8002978C: addiu       $v1, $v0, 0x30
    ctx->r3 = ADD32(ctx->r2, 0X30);
    // 0x80029790: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029794: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x80029798: addiu       $v1, $v0, 0x38
    ctx->r3 = ADD32(ctx->r2, 0X38);
    // 0x8002979C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800297A0: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x800297A4: addiu       $v1, $v0, 0x40
    ctx->r3 = ADD32(ctx->r2, 0X40);
    // 0x800297A8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800297AC: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x800297B0: lui         $v1, 0xF200
    ctx->r3 = S32(0XF200 << 16);
    // 0x800297B4: sw          $a1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r5;
    // 0x800297B8: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x800297BC: sw          $a3, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r7;
    // 0x800297C0: sw          $a0, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r4;
    // 0x800297C4: sw          $zero, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = 0;
    // 0x800297C8: sw          $t2, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r10;
    // 0x800297CC: sw          $t1, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r9;
    // 0x800297D0: sw          $v1, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r3;
    // 0x800297D4: sw          $a2, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r6;
    // 0x800297D8: sw          $t0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r8;
L_800297DC:
    // 0x800297DC: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x800297E0: lw          $a1, -0x6F10($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6F10);
    // 0x800297E4: lui         $a2, 0x400
    ctx->r6 = S32(0X400 << 16);
    // 0x800297E8: ori         $a2, $a2, 0x400
    ctx->r6 = ctx->r6 | 0X400;
    // 0x800297EC: sll         $v1, $t8, 2
    ctx->r3 = S32(ctx->r24 << 2);
    // 0x800297F0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x800297F4: lui         $a0, 0xE400
    ctx->r4 = S32(0XE400 << 16);
    // 0x800297F8: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x800297FC: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x80029800: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029804: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80029808: sll         $v0, $t7, 2
    ctx->r2 = S32(ctx->r15 << 2);
    // 0x8002980C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80029810: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x80029814: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80029818: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8002981C: sll         $v0, $t5, 2
    ctx->r2 = S32(ctx->r13 << 2);
    // 0x80029820: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80029824: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x80029828: sll         $v1, $t6, 2
    ctx->r3 = S32(ctx->r14 << 2);
    // 0x8002982C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80029830: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80029834: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x80029838: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x8002983C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029840: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80029844: lui         $v0, 0xE100
    ctx->r2 = S32(0XE100 << 16);
    // 0x80029848: andi        $v1, $t4, 0x7
    ctx->r3 = ctx->r12 & 0X7;
    // 0x8002984C: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x80029850: andi        $v0, $t4, 0x38
    ctx->r2 = ctx->r12 & 0X38;
    // 0x80029854: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80029858: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8002985C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80029860: addiu       $v0, $a1, 0x18
    ctx->r2 = ADD32(ctx->r5, 0X18);
    // 0x80029864: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029868: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002986C: lui         $v0, 0xF100
    ctx->r2 = S32(0XF100 << 16);
    // 0x80029870: sw          $v1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r3;
    // 0x80029874: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    // 0x80029878: sw          $a2, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r6;
L_8002987C:
    // 0x8002987C: jr          $ra
    // 0x80029880: nop

    TRACE_RETURN()
    return;
    // 0x80029880: nop

;}
RECOMP_FUNC void func_8008EAB0_69EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008EAB0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8008EAB4: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x8008EAB8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8008EABC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8008EAC0: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8008EAC4: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8008EAC8: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x8008EACC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8008EAD0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8008EAD4: lw          $v0, 0x28($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X28);
    // 0x8008EAD8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8008EADC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8008EAE0: lw          $a0, 0x38($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X38);
    // 0x8008EAE4: lw          $a1, 0x3C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X3C);
    // 0x8008EAE8: jal         0x8008E4A0
    // 0x8008EAEC: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    func_8008E4A0_698A0(rdram, ctx);
        goto after_0;
    // 0x8008EAEC: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    after_0:
    // 0x8008EAF0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8008EAF4: sb          $s0, 0x34($sp)
    MEM_B(0X34, ctx->r29) = ctx->r16;
    // 0x8008EAF8: lw          $a0, 0x2C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X2C);
    // 0x8008EAFC: jal         0x80095860
    // 0x8008EB00: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    osAiSetFrequency_recomp(rdram, ctx);
        goto after_1;
    // 0x8008EB00: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    after_1:
    // 0x8008EB04: jal         0x8008EE04
    // 0x8008EB08: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    func_8008EE04_6A204(rdram, ctx);
        goto after_2;
    // 0x8008EB08: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_2:
    // 0x8008EB0C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8008EB10: addiu       $a0, $a0, 0x77F8
    ctx->r4 = ADD32(ctx->r4, 0X77F8);
    // 0x8008EB14: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8008EB18: jal         0x8008DC50
    // 0x8008EB1C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_8008DC50_69050(rdram, ctx);
        goto after_3;
    // 0x8008EB1C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_3:
    // 0x8008EB20: lw          $a0, 0x34($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X34);
    // 0x8008EB24: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8008EB28: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x8008EB2C: jal         0x8008EEB0
    // 0x8008EB30: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    func_8008EEB0_6A2B0(rdram, ctx);
        goto after_4;
    // 0x8008EB30: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    after_4:
    // 0x8008EB34: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    // 0x8008EB38: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8008EB3C: jal         0x8008EDBC
    // 0x8008EB40: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    func_8008EDBC_6A1BC(rdram, ctx);
        goto after_5;
    // 0x8008EB40: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    after_5:
    // 0x8008EB44: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008EB48: sw          $v0, 0x51E8($at)
    MEM_W(0X51E8, ctx->r1) = ctx->r2;
    // 0x8008EB4C: jal         0x8008EDBC
    // 0x8008EB50: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    func_8008EDBC_6A1BC(rdram, ctx);
        goto after_6;
    // 0x8008EB50: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_6:
    // 0x8008EB54: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008EB58: sw          $v0, 0x51E4($at)
    MEM_W(0X51E4, ctx->r1) = ctx->r2;
L_8008EB5C:
    // 0x8008EB5C: jal         0x8008EDBC
    // 0x8008EB60: sll         $a0, $s1, 2
    ctx->r4 = S32(ctx->r17 << 2);
    func_8008EDBC_6A1BC(rdram, ctx);
        goto after_7;
    // 0x8008EB60: sll         $a0, $s1, 2
    ctx->r4 = S32(ctx->r17 << 2);
    after_7:
    // 0x8008EB64: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008EB68: lw          $v1, 0x51E4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X51E4);
    // 0x8008EB6C: sll         $a0, $s0, 3
    ctx->r4 = S32(ctx->r16 << 3);
    // 0x8008EB70: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8008EB74: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8008EB78: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x8008EB7C: sltiu       $v0, $s0, 0x3
    ctx->r2 = ctx->r16 < 0X3 ? 1 : 0;
    // 0x8008EB80: bne         $v0, $zero, L_8008EB5C
    if (ctx->r2 != 0) {
        // 0x8008EB84: nop
    
            goto L_8008EB5C;
    }
    // 0x8008EB84: nop

    // 0x8008EB88: jal         0x8008EDBC
    // 0x8008EB8C: addiu       $a0, $zero, 0x2000
    ctx->r4 = ADD32(0, 0X2000);
    func_8008EDBC_6A1BC(rdram, ctx);
        goto after_8;
    // 0x8008EB8C: addiu       $a0, $zero, 0x2000
    ctx->r4 = ADD32(0, 0X2000);
    after_8:
    // 0x8008EB90: lui         $s0, 0x8018
    ctx->r16 = S32(0X8018 << 16);
    // 0x8008EB94: addiu       $s0, $s0, 0x5030
    ctx->r16 = ADD32(ctx->r16, 0X5030);
    // 0x8008EB98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8008EB9C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8008EBA0: addiu       $v1, $v0, 0x2000
    ctx->r3 = ADD32(ctx->r2, 0X2000);
    // 0x8008EBA4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8008EBA8: lw          $v1, 0xC($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XC);
    // 0x8008EBAC: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x8008EBB0: addiu       $a2, $a2, -0x1418
    ctx->r6 = ADD32(ctx->r6, -0X1418);
    // 0x8008EBB4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8008EBB8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008EBBC: sw          $v0, 0x51E0($at)
    MEM_W(0X51E0, ctx->r1) = ctx->r2;
    // 0x8008EBC0: jal         0x8009B750
    // 0x8008EBC4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    osCreateThread_recomp(rdram, ctx);
        goto after_9;
    // 0x8008EBC4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    after_9:
    // 0x8008EBC8: jal         0x8009B9F0
    // 0x8008EBCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_10;
    // 0x8008EBCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
    // 0x8008EBD0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8008EBD4: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8008EBD8: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8008EBDC: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8008EBE0: jr          $ra
    // 0x8008EBE4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8008EBE4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80066138_41538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80066138: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006613C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80066140: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80066144: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80066148: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x8006614C: addiu       $v0, $zero, 0xED
    ctx->r2 = ADD32(0, 0XED);
    // 0x80066150: sb          $v0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r2;
    // 0x80066154: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x80066158: lb          $v0, 0x73($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X73);
    // 0x8006615C: bne         $v1, $v0, L_800663CC
    if (ctx->r3 != ctx->r2) {
        // 0x80066160: sb          $zero, 0x78($s0)
        MEM_B(0X78, ctx->r16) = 0;
            goto L_800663CC;
    }
    // 0x80066160: sb          $zero, 0x78($s0)
    MEM_B(0X78, ctx->r16) = 0;
    // 0x80066164: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80066168: lui         $v1, 0xC0
    ctx->r3 = S32(0XC0 << 16);
    // 0x8006616C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80066170: bne         $v0, $zero, L_800663CC
    if (ctx->r2 != 0) {
        // 0x80066174: lui         $v0, 0x1A1F
        ctx->r2 = S32(0X1A1F << 16);
            goto L_800663CC;
    }
    // 0x80066174: lui         $v0, 0x1A1F
    ctx->r2 = S32(0X1A1F << 16);
    // 0x80066178: ori         $v0, $v0, 0x58D1
    ctx->r2 = ctx->r2 | 0X58D1;
    // 0x8006617C: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x80066180: addiu       $a1, $a1, -0x7790
    ctx->r5 = ADD32(ctx->r5, -0X7790);
    // 0x80066184: subu        $v1, $s0, $a1
    ctx->r3 = SUB32(ctx->r16, ctx->r5);
    // 0x80066188: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006618C: mflo        $v1
    ctx->r3 = lo;
    // 0x80066190: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x80066194: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80066198: lw          $a0, 0x77F0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X77F0);
    // 0x8006619C: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x800661A0: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x800661A4: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x800661A8: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x800661AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800661B0: sw          $a0, 0x77F0($at)
    MEM_W(0X77F0, ctx->r1) = ctx->r4;
    // 0x800661B4: lbu         $v0, 0x71($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X71);
    // 0x800661B8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x800661BC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x800661C0: bltz        $v1, L_8006631C
    if (SIGNED(ctx->r3) < 0) {
        // 0x800661C4: sra         $a2, $v0, 24
        ctx->r6 = S32(SIGNED(ctx->r2) >> 24);
            goto L_8006631C;
    }
    // 0x800661C4: sra         $a2, $v0, 24
    ctx->r6 = S32(SIGNED(ctx->r2) >> 24);
    // 0x800661C8: lhu         $a0, 0xBA($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XBA);
    // 0x800661CC: andi        $v0, $a0, 0x6000
    ctx->r2 = ctx->r4 & 0X6000;
    // 0x800661D0: bne         $v0, $zero, L_8006631C
    if (ctx->r2 != 0) {
        // 0x800661D4: andi        $v0, $a0, 0x10
        ctx->r2 = ctx->r4 & 0X10;
            goto L_8006631C;
    }
    // 0x800661D4: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x800661D8: beq         $v0, $zero, L_800661F0
    if (ctx->r2 == 0) {
        // 0x800661DC: lui         $v0, 0x10
        ctx->r2 = S32(0X10 << 16);
            goto L_800661F0;
    }
    // 0x800661DC: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x800661E0: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x800661E4: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x800661E8: j           L_800662D4
    // 0x800661EC: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
        goto L_800662D4;
    // 0x800661EC: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
L_800661F0:
    // 0x800661F0: lw          $a1, 0xB8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XB8);
    // 0x800661F4: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x800661F8: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x800661FC: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x80066200: bne         $v0, $v1, L_80066228
    if (ctx->r2 != ctx->r3) {
        // 0x80066204: andi        $v0, $a0, 0x40
        ctx->r2 = ctx->r4 & 0X40;
            goto L_80066228;
    }
    // 0x80066204: andi        $v0, $a0, 0x40
    ctx->r2 = ctx->r4 & 0X40;
    // 0x80066208: lhu         $v1, 0xBC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XBC);
    // 0x8006620C: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x80066210: bne         $v0, $zero, L_80066318
    if (ctx->r2 != 0) {
        // 0x80066214: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80066318;
    }
    // 0x80066214: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80066218: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x8006621C: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x80066220: j           L_8006630C
    // 0x80066224: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
        goto L_8006630C;
    // 0x80066224: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_80066228:
    // 0x80066228: beq         $v0, $zero, L_80066240
    if (ctx->r2 == 0) {
        // 0x8006622C: lui         $v0, 0x40
        ctx->r2 = S32(0X40 << 16);
            goto L_80066240;
    }
    // 0x8006622C: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x80066230: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80066234: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x80066238: j           L_800662D4
    // 0x8006623C: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
        goto L_800662D4;
    // 0x8006623C: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
L_80066240:
    // 0x80066240: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80066244: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x80066248: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x8006624C: bne         $v0, $v1, L_80066274
    if (ctx->r2 != ctx->r3) {
        // 0x80066250: andi        $v0, $a0, 0x80
        ctx->r2 = ctx->r4 & 0X80;
            goto L_80066274;
    }
    // 0x80066250: andi        $v0, $a0, 0x80
    ctx->r2 = ctx->r4 & 0X80;
    // 0x80066254: lhu         $v1, 0xBC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XBC);
    // 0x80066258: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x8006625C: bne         $v0, $zero, L_80066318
    if (ctx->r2 != 0) {
        // 0x80066260: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80066318;
    }
    // 0x80066260: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80066264: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80066268: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x8006626C: j           L_8006630C
    // 0x80066270: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
        goto L_8006630C;
    // 0x80066270: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_80066274:
    // 0x80066274: beq         $v0, $zero, L_8006628C
    if (ctx->r2 == 0) {
        // 0x80066278: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_8006628C;
    }
    // 0x80066278: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8006627C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80066280: lbu         $v0, 0x3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3);
    // 0x80066284: j           L_800662D4
    // 0x80066288: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
        goto L_800662D4;
    // 0x80066288: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
L_8006628C:
    // 0x8006628C: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80066290: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x80066294: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80066298: bne         $v0, $v1, L_800662C0
    if (ctx->r2 != ctx->r3) {
        // 0x8006629C: andi        $v0, $a0, 0x20
        ctx->r2 = ctx->r4 & 0X20;
            goto L_800662C0;
    }
    // 0x8006629C: andi        $v0, $a0, 0x20
    ctx->r2 = ctx->r4 & 0X20;
    // 0x800662A0: lhu         $v1, 0xBC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XBC);
    // 0x800662A4: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x800662A8: bne         $v0, $zero, L_80066318
    if (ctx->r2 != 0) {
        // 0x800662AC: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80066318;
    }
    // 0x800662AC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x800662B0: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x800662B4: lbu         $v1, 0x3($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X3);
    // 0x800662B8: j           L_8006630C
    // 0x800662BC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
        goto L_8006630C;
    // 0x800662BC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_800662C0:
    // 0x800662C0: beq         $v0, $zero, L_800662DC
    if (ctx->r2 == 0) {
        // 0x800662C4: lui         $v0, 0x20
        ctx->r2 = S32(0X20 << 16);
            goto L_800662DC;
    }
    // 0x800662C4: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x800662C8: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x800662CC: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x800662D0: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
L_800662D4:
    // 0x800662D4: j           L_8006631C
    // 0x800662D8: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
        goto L_8006631C;
    // 0x800662D8: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
L_800662DC:
    // 0x800662DC: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x800662E0: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x800662E4: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x800662E8: bne         $v0, $v1, L_8006631C
    if (ctx->r2 != ctx->r3) {
        // 0x800662EC: nop
    
            goto L_8006631C;
    }
    // 0x800662EC: nop

    // 0x800662F0: lhu         $v1, 0xBC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XBC);
    // 0x800662F4: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x800662F8: bne         $v0, $zero, L_80066318
    if (ctx->r2 != 0) {
        // 0x800662FC: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80066318;
    }
    // 0x800662FC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80066300: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80066304: lbu         $v1, 0x4($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4);
    // 0x80066308: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_8006630C:
    // 0x8006630C: sh          $v0, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r2;
    // 0x80066310: j           L_8006631C
    // 0x80066314: sb          $v1, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r3;
        goto L_8006631C;
    // 0x80066314: sb          $v1, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r3;
L_80066318:
    // 0x80066318: sh          $v0, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r2;
L_8006631C:
    // 0x8006631C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80066320: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80066324: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x80066328: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006632C: bne         $v0, $zero, L_80066340
    if (ctx->r2 != 0) {
        // 0x80066330: addiu       $v0, $zero, 0xED
        ctx->r2 = ADD32(0, 0XED);
            goto L_80066340;
    }
    // 0x80066330: addiu       $v0, $zero, 0xED
    ctx->r2 = ADD32(0, 0XED);
    // 0x80066334: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x80066338: j           L_80066344
    // 0x8006633C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
        goto L_80066344;
    // 0x8006633C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
L_80066340:
    // 0x80066340: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
L_80066344:
    // 0x80066344: sb          $v0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r2;
    // 0x80066348: lbu         $v0, 0x78($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X78);
    // 0x8006634C: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x80066350: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80066354: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x80066358: addiu       $v1, $v1, 0x5
    ctx->r3 = ADD32(ctx->r3, 0X5);
    // 0x8006635C: sb          $v0, 0x78($s0)
    MEM_B(0X78, ctx->r16) = ctx->r2;
    // 0x80066360: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80066364: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80066368: sw          $v1, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r3;
    // 0x8006636C: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x80066370: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80066374: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80066378: beq         $v0, $v1, L_800663CC
    if (ctx->r2 == ctx->r3) {
        // 0x8006637C: sw          $a0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r4;
            goto L_800663CC;
    }
    // 0x8006637C: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x80066380: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x80066384: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80066388: jal         0x8002A2F8
    // 0x8006638C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x8006638C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80066390: lui         $v1, 0x1A1F
    ctx->r3 = S32(0X1A1F << 16);
    // 0x80066394: ori         $v1, $v1, 0x58D1
    ctx->r3 = ctx->r3 | 0X58D1;
    // 0x80066398: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8006639C: addiu       $v0, $v0, -0x7790
    ctx->r2 = ADD32(ctx->r2, -0X7790);
    // 0x800663A0: subu        $v0, $s0, $v0
    ctx->r2 = SUB32(ctx->r16, ctx->r2);
    // 0x800663A4: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800663A8: mflo        $v0
    ctx->r2 = lo;
    // 0x800663AC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800663B0: lw          $a0, 0x77F0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X77F0);
    // 0x800663B4: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x800663B8: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x800663BC: sllv        $v1, $v1, $v0
    ctx->r3 = S32(ctx->r3 << (ctx->r2 & 31));
    // 0x800663C0: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x800663C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800663C8: sw          $a0, 0x77F0($at)
    MEM_W(0X77F0, ctx->r1) = ctx->r4;
L_800663CC:
    // 0x800663CC: lbu         $v0, 0x73($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X73);
    // 0x800663D0: lbu         $v1, 0x78($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X78);
    // 0x800663D4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x800663D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800663DC: addiu       $v1, $v1, 0x50
    ctx->r3 = ADD32(ctx->r3, 0X50);
    // 0x800663E0: addiu       $a0, $a0, 0x5
    ctx->r4 = ADD32(ctx->r4, 0X5);
    // 0x800663E4: sb          $v1, 0x78($s0)
    MEM_B(0X78, ctx->r16) = ctx->r3;
    // 0x800663E8: sb          $v0, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r2;
    // 0x800663EC: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    // 0x800663F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800663F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800663F8: jr          $ra
    // 0x800663FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800663FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008EDEC_6A1EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008EDEC: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008EDF0: lw          $v1, 0x51F4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X51F4);
    // 0x8008EDF4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008EDF8: lw          $v0, 0x51F0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51F0);
    // 0x8008EDFC: jr          $ra
    // 0x8008EE00: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    TRACE_RETURN()
    return;
    // 0x8008EE00: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
;}
RECOMP_FUNC void func_80092360_6D760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80092360: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80092364: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80092368: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8009236C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80092370: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80092374: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80092378: jal         0x80094460
    // 0x8009237C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x8009237C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80092380: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80092384: jal         0x80094460
    // 0x80092388: sh          $s0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r16;
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x80092388: sh          $s0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r16;
    after_1:
    // 0x8009238C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80092390: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80092394: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80092398: jr          $ra
    // 0x8009239C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8009239C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80030518_B918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80030518: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003051C: beq         $a0, $zero, L_80030534
    if (ctx->r4 == 0) {
        // 0x80030520: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80030534;
    }
    // 0x80030520: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80030524: jal         0x80093090
    // 0x80030528: nop

    func_80093090_6E490(rdram, ctx);
        goto after_0;
    // 0x80030528: nop

    after_0:
    // 0x8003052C: j           L_8003053C
    // 0x80030530: nop

        goto L_8003053C;
    // 0x80030530: nop

L_80030534:
    // 0x80030534: jal         0x80093060
    // 0x80030538: nop

    func_80093060_6E460(rdram, ctx);
        goto after_1;
    // 0x80030538: nop

    after_1:
L_8003053C:
    // 0x8003053C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80030540: jr          $ra
    // 0x80030544: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80030544: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80048814_23C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80048814: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80048818: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x8004881C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80048820: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x80048824: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x80048828: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x8004882C: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x80048830: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x80048834: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x80048838: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8004883C: beq         $v0, $zero, L_80048974
    if (ctx->r2 == 0) {
        // 0x80048840: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_80048974;
    }
    // 0x80048840: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80048844: addiu       $s3, $sp, 0x30
    ctx->r19 = ADD32(ctx->r29, 0X30);
    // 0x80048848: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8004884C: addiu       $s4, $s1, 0x428
    ctx->r20 = ADD32(ctx->r17, 0X428);
    // 0x80048850: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80048854: jal         0x8009A3B4
    // 0x80048858: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80048858: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x8004885C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80048860: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80048864: jal         0x8009A3B4
    // 0x80048868: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80048868: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8004886C: addiu       $s2, $sp, 0x50
    ctx->r18 = ADD32(ctx->r29, 0X50);
    // 0x80048870: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80048874: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80048878: jal         0x8009A3B4
    // 0x8004887C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8004887C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80048880: lw          $v0, 0x54($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X54);
    // 0x80048884: lui         $v1, 0xFFF
    ctx->r3 = S32(0XFFF << 16);
    // 0x80048888: ori         $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 | 0XFFF;
    // 0x8004888C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80048890: beq         $v0, $zero, L_80048908
    if (ctx->r2 == 0) {
        // 0x80048894: addiu       $a0, $sp, 0x68
        ctx->r4 = ADD32(ctx->r29, 0X68);
            goto L_80048908;
    }
    // 0x80048894: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80048898: lhu         $v0, 0x5C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X5C);
    // 0x8004889C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800488A0: sh          $v0, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r2;
    // 0x800488A4: lhu         $v0, 0x5E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X5E);
    // 0x800488A8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800488AC: sh          $v0, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = ctx->r2;
    // 0x800488B0: lhu         $v0, 0x60($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X60);
    // 0x800488B4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x800488B8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800488BC: jal         0x80031428
    // 0x800488C0: sh          $v0, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r2;
    func_80031428_C828(rdram, ctx);
        goto after_3;
    // 0x800488C0: sh          $v0, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r2;
    after_3:
    // 0x800488C4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x800488C8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x800488CC: jal         0x8004DD50
    // 0x800488D0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_8004DD50_29150(rdram, ctx);
        goto after_4;
    // 0x800488D0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_4:
    // 0x800488D4: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x800488D8: sh          $v0, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r2;
    // 0x800488DC: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x800488E0: sh          $v0, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r2;
    // 0x800488E4: lhu         $v0, 0x58($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X58);
    // 0x800488E8: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x800488EC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x800488F0: jal         0x80031600
    // 0x800488F4: sh          $v0, 0x64($sp)
    MEM_H(0X64, ctx->r29) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_5;
    // 0x800488F4: sh          $v0, 0x64($sp)
    MEM_H(0X64, ctx->r29) = ctx->r2;
    after_5:
    // 0x800488F8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x800488FC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80048900: jal         0x8004DD50
    // 0x80048904: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_8004DD50_29150(rdram, ctx);
        goto after_6;
    // 0x80048904: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_6:
L_80048908:
    // 0x80048908: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x8004890C: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80048910: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80048914: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80048918: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8004891C: sw          $v0, 0x428($s1)
    MEM_W(0X428, ctx->r17) = ctx->r2;
    // 0x80048920: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x80048924: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x80048928: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x8004892C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80048930: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80048934: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80048938: sw          $v0, 0x42C($s1)
    MEM_W(0X42C, ctx->r17) = ctx->r2;
    // 0x8004893C: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x80048940: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x80048944: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x80048948: addiu       $a1, $s1, 0x438
    ctx->r5 = ADD32(ctx->r17, 0X438);
    // 0x8004894C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80048950: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x80048954: jal         0x8004DD04
    // 0x80048958: sw          $v0, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_7;
    // 0x80048958: sw          $v0, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r2;
    after_7:
    // 0x8004895C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80048960: lhu         $a0, 0x5E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X5E);
    // 0x80048964: lhu         $v0, 0x442($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X442);
    // 0x80048968: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8004896C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80048970: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
L_80048974:
    // 0x80048974: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x80048978: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x8004897C: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x80048980: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x80048984: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x80048988: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x8004898C: jr          $ra
    // 0x80048990: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x80048990: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void __osSumcalc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009E6C0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8009E6C4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x8009E6C8: blez        $a1, L_8009E6E8
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8009E6CC: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_8009E6E8;
    }
    // 0x8009E6CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_8009E6D0:
    // 0x8009E6D0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8009E6D4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8009E6D8: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8009E6DC: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8009E6E0: bne         $v0, $zero, L_8009E6D0
    if (ctx->r2 != 0) {
        // 0x8009E6E4: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8009E6D0;
    }
    // 0x8009E6E4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_8009E6E8:
    // 0x8009E6E8: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x8009E6EC: jr          $ra
    // 0x8009E6F0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8009E6F0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8002FC1C_B01C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002FC1C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8002FC20: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8002FC24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8002FC28: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8002FC2C: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x8002FC30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8002FC34: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8002FC38: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x8002FC3C: jal         0x8009A3B4
    // 0x8002FC40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8002FC40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8002FC44: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8002FC48: sb          $v0, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r2;
    // 0x8002FC4C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8002FC50: sb          $v0, 0x15($sp)
    MEM_B(0X15, ctx->r29) = ctx->r2;
    // 0x8002FC54: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8002FC58: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    // 0x8002FC5C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8002FC60: sb          $v0, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r2;
    // 0x8002FC64: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8002FC68: sb          $v0, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r2;
    // 0x8002FC6C: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8002FC70: sb          $v0, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r2;
    // 0x8002FC74: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8002FC78: sb          $v0, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r2;
    // 0x8002FC7C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8002FC80: sb          $v0, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r2;
    // 0x8002FC84: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8002FC88: sb          $v0, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r2;
    // 0x8002FC8C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8002FC90: sb          $v0, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r2;
    // 0x8002FC94: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8002FC98: sb          $v0, 0x2D($sp)
    MEM_B(0X2D, ctx->r29) = ctx->r2;
    // 0x8002FC9C: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8002FCA0: sb          $v0, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = ctx->r2;
    // 0x8002FCA4: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8002FCA8: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x8002FCAC: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x8002FCB0: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x8002FCB4: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8002FCB8: lhu         $v1, 0xC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XC);
    // 0x8002FCBC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8002FCC0: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8002FCC4: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x8002FCC8: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8002FCCC: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8002FCD0: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x8002FCD4: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x8002FCD8: lhu         $v1, 0xE($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XE);
    // 0x8002FCDC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8002FCE0: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8002FCE4: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8002FCE8: lhu         $v1, 0xC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XC);
    // 0x8002FCEC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8002FCF0: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x8002FCF4: lhu         $v1, 0xA($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XA);
    // 0x8002FCF8: lhu         $a1, 0xE($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XE);
    // 0x8002FCFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8002FD00: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8002FD04: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002FD08: sb          $v0, -0x77B8($at)
    MEM_B(-0X77B8, ctx->r1) = ctx->r2;
    // 0x8002FD0C: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8002FD10: jal         0x8002ED90
    // 0x8002FD14: sh          $v1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r3;
    func_8002ED90_A190(rdram, ctx);
        goto after_1;
    // 0x8002FD14: sh          $v1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r3;
    after_1:
    // 0x8002FD18: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x8002FD1C: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8002FD20: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8002FD24: jr          $ra
    // 0x8002FD28: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8002FD28: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8002FD2C: nop

;}
RECOMP_FUNC void func_8007818C_5358C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007818C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80078190: lbu         $v1, 0x3($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X3);
    // 0x80078194: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80078198: beq         $v1, $v0, L_800781CC
    if (ctx->r3 == ctx->r2) {
        // 0x8007819C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_800781CC;
    }
    // 0x8007819C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x800781A0: beq         $v0, $zero, L_800781E8
    if (ctx->r2 == 0) {
        // 0x800781A4: lui         $a1, 0xFFFB
        ctx->r5 = S32(0XFFFB << 16);
            goto L_800781E8;
    }
    // 0x800781A4: lui         $a1, 0xFFFB
    ctx->r5 = S32(0XFFFB << 16);
    // 0x800781A8: bne         $v1, $zero, L_800781E8
    if (ctx->r3 != 0) {
        // 0x800781AC: nop
    
            goto L_800781E8;
    }
    // 0x800781AC: nop

    // 0x800781B0: ori         $a1, $a1, 0xFBFC
    ctx->r5 = ctx->r5 | 0XFBFC;
    // 0x800781B4: lhu         $v0, 0x1E($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X1E);
    // 0x800781B8: lhu         $v1, 0x24($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X24);
    // 0x800781BC: lw          $a0, 0x18($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X18);
    // 0x800781C0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800781C4: j           L_80078200
    // 0x800781C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
        goto L_80078200;
    // 0x800781C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_800781CC:
    // 0x800781CC: lui         $v0, 0xFFFB
    ctx->r2 = S32(0XFFFB << 16);
    // 0x800781D0: lhu         $v1, 0x24($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X24);
    // 0x800781D4: lw          $a0, 0x18($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X18);
    // 0x800781D8: ori         $v0, $v0, 0xFBFC
    ctx->r2 = ctx->r2 | 0XFBFC;
    // 0x800781DC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x800781E0: j           L_80078208
    // 0x800781E4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
        goto L_80078208;
    // 0x800781E4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
L_800781E8:
    // 0x800781E8: lhu         $v0, 0x1E($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X1E);
    // 0x800781EC: lhu         $v1, 0x24($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X24);
    // 0x800781F0: lw          $a0, 0x18($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X18);
    // 0x800781F4: ori         $a1, $a1, 0xFBFC
    ctx->r5 = ctx->r5 | 0XFBFC;
    // 0x800781F8: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x800781FC: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
L_80078200:
    // 0x80078200: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80078204: sh          $v0, 0x1E($a2)
    MEM_H(0X1E, ctx->r6) = ctx->r2;
L_80078208:
    // 0x80078208: sh          $v1, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r3;
    // 0x8007820C: sw          $a0, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r4;
    // 0x80078210: lbu         $v0, 0xB($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0XB);
    // 0x80078214: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80078218: sb          $v0, 0xB($a2)
    MEM_B(0XB, ctx->r6) = ctx->r2;
    // 0x8007821C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80078220: bne         $v0, $zero, L_80078254
    if (ctx->r2 != 0) {
        // 0x80078224: nop
    
            goto L_80078254;
    }
    // 0x80078224: nop

    // 0x80078228: lbu         $v0, 0x3($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X3);
    // 0x8007822C: lbu         $v1, 0x8($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X8);
    // 0x80078230: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80078234: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x80078238: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8007823C: lbu         $a0, -0x332E($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X332E);
    // 0x80078240: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80078244: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80078248: sb          $v1, 0x8($a2)
    MEM_B(0X8, ctx->r6) = ctx->r3;
    // 0x8007824C: sb          $v0, 0x22($a2)
    MEM_B(0X22, ctx->r6) = ctx->r2;
    // 0x80078250: sb          $a0, 0xB($a2)
    MEM_B(0XB, ctx->r6) = ctx->r4;
L_80078254:
    // 0x80078254: jr          $ra
    // 0x80078258: nop

    TRACE_RETURN()
    return;
    // 0x80078258: nop

;}
RECOMP_FUNC void func_80049124_24524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80049124: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80049128: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8004912C: lbu         $v0, 0xF($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XF);
    // 0x80049130: bne         $v0, $zero, L_800491E8
    if (ctx->r2 != 0) {
        // 0x80049134: nop
    
            goto L_800491E8;
    }
    // 0x80049134: nop

    // 0x80049138: lbu         $v0, 0xD($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD);
    // 0x8004913C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80049140: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80049144: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80049148: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8004914C: beq         $v0, $zero, L_800491A8
    if (ctx->r2 == 0) {
        // 0x80049150: nop
    
            goto L_800491A8;
    }
    // 0x80049150: nop

    // 0x80049154: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x80049158: lbu         $v1, 0xC($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XC);
    // 0x8004915C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80049160: beq         $v1, $zero, L_80049178
    if (ctx->r3 == 0) {
        // 0x80049164: sh          $v0, 0x18($a0)
        MEM_H(0X18, ctx->r4) = ctx->r2;
            goto L_80049178;
    }
    // 0x80049164: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x80049168: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8004916C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80049170: j           L_8004917C
    // 0x80049174: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
        goto L_8004917C;
    // 0x80049174: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80049178:
    // 0x80049178: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
L_8004917C:
    // 0x8004917C: lw          $v1, 0x14($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X14);
    // 0x80049180: lw          $v0, 0x2C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X2C);
    // 0x80049184: bnel        $v1, $v0, L_800491A8
    if (ctx->r3 != ctx->r2) {
        // 0x80049188: sb          $zero, 0xB($a0)
        MEM_B(0XB, ctx->r4) = 0;
            goto L_800491A8;
    }
    goto skip_0;
    // 0x80049188: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
    skip_0:
    // 0x8004918C: lh          $v1, 0x18($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X18);
    // 0x80049190: lh          $v0, 0x30($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X30);
    // 0x80049194: bnel        $v1, $v0, L_800491A8
    if (ctx->r3 != ctx->r2) {
        // 0x80049198: sb          $zero, 0xB($a0)
        MEM_B(0XB, ctx->r4) = 0;
            goto L_800491A8;
    }
    goto skip_1;
    // 0x80049198: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
    skip_1:
    // 0x8004919C: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x800491A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800491A4: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
L_800491A8:
    // 0x800491A8: lh          $v0, 0x18($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X18);
    // 0x800491AC: slti        $v0, $v0, 0x96
    ctx->r2 = SIGNED(ctx->r2) < 0X96 ? 1 : 0;
    // 0x800491B0: beq         $v0, $zero, L_800491E0
    if (ctx->r2 == 0) {
        // 0x800491B4: nop
    
            goto L_800491E0;
    }
    // 0x800491B4: nop

    // 0x800491B8: lb          $v1, 0xB($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XB);
    // 0x800491BC: slti        $v0, $v1, 0x5A
    ctx->r2 = SIGNED(ctx->r3) < 0X5A ? 1 : 0;
    // 0x800491C0: beq         $v0, $zero, L_800491E0
    if (ctx->r2 == 0) {
        // 0x800491C4: nop
    
            goto L_800491E0;
    }
    // 0x800491C4: nop

    // 0x800491C8: lb          $v0, 0xA($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA);
    // 0x800491CC: slti        $v0, $v0, 0x3C
    ctx->r2 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x800491D0: bne         $v0, $zero, L_800491E8
    if (ctx->r2 != 0) {
        // 0x800491D4: slti        $v0, $v1, 0x3C
        ctx->r2 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
            goto L_800491E8;
    }
    // 0x800491D4: slti        $v0, $v1, 0x3C
    ctx->r2 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
    // 0x800491D8: bne         $v0, $zero, L_800491E8
    if (ctx->r2 != 0) {
        // 0x800491DC: nop
    
            goto L_800491E8;
    }
    // 0x800491DC: nop

L_800491E0:
    // 0x800491E0: jal         0x80049F14
    // 0x800491E4: nop

    func_80049F14_25314(rdram, ctx);
        goto after_0;
    // 0x800491E4: nop

    after_0:
L_800491E8:
    // 0x800491E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800491EC: jr          $ra
    // 0x800491F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800491F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80056608_31A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80056608: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8005660C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80056610: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80056614: addiu       $a0, $zero, 0x526
    ctx->r4 = ADD32(0, 0X526);
    // 0x80056618: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8005661C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80056620: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80056624: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80056628: jal         0x8006033C
    // 0x8005662C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8005662C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x80056630: lui         $s4, 0x8020
    ctx->r20 = S32(0X8020 << 16);
    // 0x80056634: addiu       $s4, $s4, 0x49B0
    ctx->r20 = ADD32(ctx->r20, 0X49B0);
    // 0x80056638: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8005663C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80056640: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80056644: sb          $zero, 0x14($s2)
    MEM_B(0X14, ctx->r18) = 0;
    // 0x80056648: sb          $zero, 0x11($s2)
    MEM_B(0X11, ctx->r18) = 0;
    // 0x8005664C: sb          $zero, 0x1C($s2)
    MEM_B(0X1C, ctx->r18) = 0;
    // 0x80056650: sb          $zero, 0x19($s2)
    MEM_B(0X19, ctx->r18) = 0;
    // 0x80056654: sb          $zero, 0x24($s2)
    MEM_B(0X24, ctx->r18) = 0;
    // 0x80056658: sb          $zero, 0x21($s2)
    MEM_B(0X21, ctx->r18) = 0;
    // 0x8005665C: sb          $zero, 0x2C($s2)
    MEM_B(0X2C, ctx->r18) = 0;
    // 0x80056660: sb          $zero, 0x29($s2)
    MEM_B(0X29, ctx->r18) = 0;
    // 0x80056664: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80056668: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x8005666C: ori         $s3, $v0, 0x2
    ctx->r19 = ctx->r2 | 0X2;
    // 0x80056670: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80056674: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80056678: beql        $v1, $zero, L_800566CC
    if (ctx->r3 == 0) {
        // 0x8005667C: lui         $v1, 0x1
        ctx->r3 = S32(0X1 << 16);
            goto L_800566CC;
    }
    goto skip_0;
    // 0x8005667C: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    skip_0:
    // 0x80056680: beq         $s3, $zero, L_80056798
    if (ctx->r19 == 0) {
        // 0x80056684: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_80056798;
    }
    // 0x80056684: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80056688: addu        $v0, $s4, $s1
    ctx->r2 = ADD32(ctx->r20, ctx->r17);
L_8005668C:
    // 0x8005668C: lbu         $s0, 0x450($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0X450);
    // 0x80056690: beql        $s0, $zero, L_800566B8
    if (ctx->r16 == 0) {
        // 0x80056694: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800566B8;
    }
    goto skip_1;
    // 0x80056694: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x80056698: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8005669C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800566A0: jal         0x80056518
    // 0x800566A4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80056518_31918(rdram, ctx);
        goto after_1;
    // 0x800566A4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x800566A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x800566AC: jal         0x80056428
    // 0x800566B0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80056428_31828(rdram, ctx);
        goto after_2;
    // 0x800566B0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x800566B4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800566B8:
    // 0x800566B8: slt         $v0, $s1, $s3
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x800566BC: bne         $v0, $zero, L_8005668C
    if (ctx->r2 != 0) {
        // 0x800566C0: addu        $v0, $s4, $s1
        ctx->r2 = ADD32(ctx->r20, ctx->r17);
            goto L_8005668C;
    }
    // 0x800566C0: addu        $v0, $s4, $s1
    ctx->r2 = ADD32(ctx->r20, ctx->r17);
    // 0x800566C4: j           L_80056798
    // 0x800566C8: nop

        goto L_80056798;
    // 0x800566C8: nop

L_800566CC:
    // 0x800566CC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800566D0: lw          $v0, 0x77F0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X77F0);
    // 0x800566D4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800566D8: beq         $v0, $zero, L_8005673C
    if (ctx->r2 == 0) {
        // 0x800566DC: nop
    
            goto L_8005673C;
    }
    // 0x800566DC: nop

    // 0x800566E0: beq         $s3, $zero, L_80056798
    if (ctx->r19 == 0) {
        // 0x800566E4: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_80056798;
    }
    // 0x800566E4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x800566E8: addu        $v0, $s4, $s1
    ctx->r2 = ADD32(ctx->r20, ctx->r17);
L_800566EC:
    // 0x800566EC: lbu         $s0, 0x450($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0X450);
    // 0x800566F0: beq         $s0, $zero, L_80056700
    if (ctx->r16 == 0) {
        // 0x800566F4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80056700;
    }
    // 0x800566F4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x800566F8: jal         0x80056518
    // 0x800566FC: addiu       $a1, $s0, -0x1
    ctx->r5 = ADD32(ctx->r16, -0X1);
    func_80056518_31918(rdram, ctx);
        goto after_3;
    // 0x800566FC: addiu       $a1, $s0, -0x1
    ctx->r5 = ADD32(ctx->r16, -0X1);
    after_3:
L_80056700:
    // 0x80056700: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80056704: lbu         $v0, -0x72EE($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X72EE);
    // 0x80056708: beql        $s1, $v0, L_80056728
    if (ctx->r17 == ctx->r2) {
        // 0x8005670C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80056728;
    }
    goto skip_2;
    // 0x8005670C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x80056710: beql        $s0, $zero, L_80056728
    if (ctx->r16 == 0) {
        // 0x80056714: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80056728;
    }
    goto skip_3;
    // 0x80056714: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_3:
    // 0x80056718: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8005671C: jal         0x80056428
    // 0x80056720: addiu       $a1, $s0, -0x1
    ctx->r5 = ADD32(ctx->r16, -0X1);
    func_80056428_31828(rdram, ctx);
        goto after_4;
    // 0x80056720: addiu       $a1, $s0, -0x1
    ctx->r5 = ADD32(ctx->r16, -0X1);
    after_4:
    // 0x80056724: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80056728:
    // 0x80056728: slt         $v0, $s1, $s3
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8005672C: bne         $v0, $zero, L_800566EC
    if (ctx->r2 != 0) {
        // 0x80056730: addu        $v0, $s4, $s1
        ctx->r2 = ADD32(ctx->r20, ctx->r17);
            goto L_800566EC;
    }
    // 0x80056730: addu        $v0, $s4, $s1
    ctx->r2 = ADD32(ctx->r20, ctx->r17);
    // 0x80056734: j           L_80056798
    // 0x80056738: nop

        goto L_80056798;
    // 0x80056738: nop

L_8005673C:
    // 0x8005673C: beq         $s3, $zero, L_80056798
    if (ctx->r19 == 0) {
        // 0x80056740: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_80056798;
    }
    // 0x80056740: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80056744: addu        $v0, $s4, $s1
    ctx->r2 = ADD32(ctx->r20, ctx->r17);
L_80056748:
    // 0x80056748: lbu         $s0, 0x450($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0X450);
    // 0x8005674C: beq         $s0, $zero, L_8005675C
    if (ctx->r16 == 0) {
        // 0x80056750: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8005675C;
    }
    // 0x80056750: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80056754: jal         0x80056518
    // 0x80056758: addiu       $a1, $s0, -0x1
    ctx->r5 = ADD32(ctx->r16, -0X1);
    func_80056518_31918(rdram, ctx);
        goto after_5;
    // 0x80056758: addiu       $a1, $s0, -0x1
    ctx->r5 = ADD32(ctx->r16, -0X1);
    after_5:
L_8005675C:
    // 0x8005675C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80056760: lbu         $v0, -0x72EE($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X72EE);
    // 0x80056764: bne         $s1, $v0, L_80056774
    if (ctx->r17 != ctx->r2) {
        // 0x80056768: nop
    
            goto L_80056774;
    }
    // 0x80056768: nop

    // 0x8005676C: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80056770: lbu         $s0, 0x77F2($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0X77F2);
L_80056774:
    // 0x80056774: beql        $s0, $zero, L_8005678C
    if (ctx->r16 == 0) {
        // 0x80056778: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8005678C;
    }
    goto skip_4;
    // 0x80056778: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_4:
    // 0x8005677C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80056780: jal         0x80056428
    // 0x80056784: addiu       $a1, $s0, -0x1
    ctx->r5 = ADD32(ctx->r16, -0X1);
    func_80056428_31828(rdram, ctx);
        goto after_6;
    // 0x80056784: addiu       $a1, $s0, -0x1
    ctx->r5 = ADD32(ctx->r16, -0X1);
    after_6:
    // 0x80056788: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8005678C:
    // 0x8005678C: slt         $v0, $s1, $s3
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80056790: bne         $v0, $zero, L_80056748
    if (ctx->r2 != 0) {
        // 0x80056794: addu        $v0, $s4, $s1
        ctx->r2 = ADD32(ctx->r20, ctx->r17);
            goto L_80056748;
    }
    // 0x80056794: addu        $v0, $s4, $s1
    ctx->r2 = ADD32(ctx->r20, ctx->r17);
L_80056798:
    // 0x80056798: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8005679C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x800567A0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x800567A4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x800567A8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x800567AC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800567B0: jr          $ra
    // 0x800567B4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x800567B4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80087508_62908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80087508: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008750C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80087510: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x80087514: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x80087518: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008751C: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x80087520: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80087524: andi        $a3, $a2, 0xFF
    ctx->r7 = ctx->r6 & 0XFF;
    // 0x80087528: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008752C: jal         0x80028794
    // 0x80087530: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    func_80028794_3B94(rdram, ctx);
        goto after_0;
    // 0x80087530: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    after_0:
    // 0x80087534: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80087538: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008753C: sll         $s0, $s0, 24
    ctx->r16 = S32(ctx->r16 << 24);
    // 0x80087540: jal         0x800287CC
    // 0x80087544: sra         $a2, $s0, 24
    ctx->r6 = S32(SIGNED(ctx->r16) >> 24);
    func_800287CC_3BCC(rdram, ctx);
        goto after_1;
    // 0x80087544: sra         $a2, $s0, 24
    ctx->r6 = S32(SIGNED(ctx->r16) >> 24);
    after_1:
    // 0x80087548: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008754C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80087550: jal         0x800287CC
    // 0x80087554: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800287CC_3BCC(rdram, ctx);
        goto after_2;
    // 0x80087554: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80087558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008755C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80087560: jr          $ra
    // 0x80087564: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80087564: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80087568: nop

    // 0x8008756C: nop

;}
RECOMP_FUNC void func_80075484_50884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80075484: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80075488: lb          $v1, -0x3B96($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3B96);
    // 0x8007548C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80075490: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80075494: sh          $v0, -0x3BB8($at)
    MEM_H(-0X3BB8, ctx->r1) = ctx->r2;
    // 0x80075498: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8007549C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800754A0: sb          $v0, -0x3B9F($at)
    MEM_B(-0X3B9F, ctx->r1) = ctx->r2;
    // 0x800754A4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800754A8: sb          $v0, -0x3B9E($at)
    MEM_B(-0X3B9E, ctx->r1) = ctx->r2;
    // 0x800754AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800754B0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800754B4: addiu       $a0, $a0, 0x47B8
    ctx->r4 = ADD32(ctx->r4, 0X47B8);
    // 0x800754B8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800754BC: sw          $zero, -0x3C0C($at)
    MEM_W(-0X3C0C, ctx->r1) = 0;
    // 0x800754C0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800754C4: sw          $zero, -0x3BFC($at)
    MEM_W(-0X3BFC, ctx->r1) = 0;
    // 0x800754C8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800754CC: sw          $zero, -0x3BF8($at)
    MEM_W(-0X3BF8, ctx->r1) = 0;
    // 0x800754D0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800754D4: sw          $zero, -0x3BF4($at)
    MEM_W(-0X3BF4, ctx->r1) = 0;
    // 0x800754D8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800754DC: sw          $zero, -0x3BF0($at)
    MEM_W(-0X3BF0, ctx->r1) = 0;
    // 0x800754E0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800754E4: sw          $zero, -0x3BEC($at)
    MEM_W(-0X3BEC, ctx->r1) = 0;
    // 0x800754E8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800754EC: sw          $zero, -0x3BE8($at)
    MEM_W(-0X3BE8, ctx->r1) = 0;
    // 0x800754F0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800754F4: sw          $zero, -0x3BE4($at)
    MEM_W(-0X3BE4, ctx->r1) = 0;
    // 0x800754F8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800754FC: sw          $zero, -0x3BE0($at)
    MEM_W(-0X3BE0, ctx->r1) = 0;
    // 0x80075500: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80075504: sw          $zero, -0x3BDC($at)
    MEM_W(-0X3BDC, ctx->r1) = 0;
    // 0x80075508: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8007550C: sh          $zero, -0x3BD8($at)
    MEM_H(-0X3BD8, ctx->r1) = 0;
    // 0x80075510: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80075514: sh          $zero, -0x3BD6($at)
    MEM_H(-0X3BD6, ctx->r1) = 0;
    // 0x80075518: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8007551C: sh          $zero, -0x3BD4($at)
    MEM_H(-0X3BD4, ctx->r1) = 0;
    // 0x80075520: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80075524: sh          $zero, -0x3BD2($at)
    MEM_H(-0X3BD2, ctx->r1) = 0;
    // 0x80075528: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8007552C: sh          $zero, -0x3BD0($at)
    MEM_H(-0X3BD0, ctx->r1) = 0;
    // 0x80075530: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80075534: sh          $zero, -0x3BCE($at)
    MEM_H(-0X3BCE, ctx->r1) = 0;
    // 0x80075538: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8007553C: sw          $zero, -0x3BCC($at)
    MEM_W(-0X3BCC, ctx->r1) = 0;
    // 0x80075540: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80075544: sb          $zero, -0x3BA0($at)
    MEM_B(-0X3BA0, ctx->r1) = 0;
    // 0x80075548: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8007554C: sb          $zero, -0x3B9D($at)
    MEM_B(-0X3B9D, ctx->r1) = 0;
    // 0x80075550: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80075554: sb          $zero, -0x3B9C($at)
    MEM_B(-0X3B9C, ctx->r1) = 0;
    // 0x80075558: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8007555C: sb          $zero, -0x3B9B($at)
    MEM_B(-0X3B9B, ctx->r1) = 0;
    // 0x80075560: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80075564: sh          $zero, -0x3BB6($at)
    MEM_H(-0X3BB6, ctx->r1) = 0;
    // 0x80075568: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8007556C: sw          $zero, -0x3BB4($at)
    MEM_W(-0X3BB4, ctx->r1) = 0;
    // 0x80075570: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80075574: sb          $v0, -0x3BBE($at)
    MEM_B(-0X3BBE, ctx->r1) = ctx->r2;
    // 0x80075578: andi        $v1, $v1, 0x80
    ctx->r3 = ctx->r3 & 0X80;
    // 0x8007557C: bne         $v1, $zero, L_800755A0
    if (ctx->r3 != 0) {
        // 0x80075580: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_800755A0;
    }
    // 0x80075580: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80075584: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80075588: lw          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BC8);
    // 0x8007558C: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80075590: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80075594: bne         $v0, $zero, L_800755A0
    if (ctx->r2 != 0) {
        // 0x80075598: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800755A0;
    }
    // 0x80075598: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8007559C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_800755A0:
    // 0x800755A0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800755A4: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x800755A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800755AC: jr          $ra
    // 0x800755B0: sb          $v0, 0x15($a0)
    MEM_B(0X15, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x800755B0: sb          $v0, 0x15($a0)
    MEM_B(0X15, ctx->r4) = ctx->r2;
    // 0x800755B4: nop

    // 0x800755B8: nop

    // 0x800755BC: nop

;}
RECOMP_FUNC void func_8004B738_26B38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004B738: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004B73C: lhu         $v0, 0x49AC($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49AC);
    // 0x8004B740: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004B744: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004B748: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8004B74C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8004B750: bne         $v0, $zero, L_8004B7A0
    if (ctx->r2 != 0) {
        // 0x8004B754: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8004B7A0;
    }
    // 0x8004B754: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8004B758: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x8004B75C: addiu       $s0, $s0, 0x53E0
    ctx->r16 = ADD32(ctx->r16, 0X53E0);
    // 0x8004B760: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8004B764: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8004B768: addiu       $s2, $s2, -0x2E90
    ctx->r18 = ADD32(ctx->r18, -0X2E90);
L_8004B76C:
    // 0x8004B76C: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x8004B770: beql        $v0, $zero, L_8004B794
    if (ctx->r2 == 0) {
        // 0x8004B774: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8004B794;
    }
    goto skip_0;
    // 0x8004B774: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x8004B778: lb          $v0, 0x2($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2);
    // 0x8004B77C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8004B780: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8004B784: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8004B788: jalr        $v0
    // 0x8004B78C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8004B78C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8004B790: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8004B794:
    // 0x8004B794: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x8004B798: bne         $v0, $zero, L_8004B76C
    if (ctx->r2 != 0) {
        // 0x8004B79C: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_8004B76C;
    }
    // 0x8004B79C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
L_8004B7A0:
    // 0x8004B7A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004B7A4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8004B7A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8004B7AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004B7B0: jr          $ra
    // 0x8004B7B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8004B7B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void __umoddi3_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800A3A00: bne         $a2, $zero, L_800A3A24
    if (ctx->r6 != 0) {
        // 0x800A3A04: nop
    
            goto L_800A3A24;
    }
    // 0x800A3A04: nop

    // 0x800A3A08: addu        $t5, $ra, $zero
    ctx->r13 = ADD32(ctx->r31, 0);
    // 0x800A3A0C: jal         0x800A37A4
    // 0x800A3A10: nop

    func_800A37A4_7EBA4(rdram, ctx);
        goto after_0;
    // 0x800A3A10: nop

    after_0:
    // 0x800A3A14: addu        $ra, $t5, $zero
    ctx->r31 = ADD32(ctx->r13, 0);
    // 0x800A3A18: addu        $v1, $t1, $zero
    ctx->r3 = ADD32(ctx->r9, 0);
    // 0x800A3A1C: jr          $ra
    // 0x800A3A20: xor         $v0, $v0, $v0
    ctx->r2 = ctx->r2 ^ ctx->r2;
    TRACE_RETURN()
    return;
    // 0x800A3A20: xor         $v0, $v0, $v0
    ctx->r2 = ctx->r2 ^ ctx->r2;
L_800A3A24:
    // 0x800A3A24: addu        $t5, $ra, $zero
    ctx->r13 = ADD32(ctx->r31, 0);
    // 0x800A3A28: jal         0x800A36A8
    // 0x800A3A2C: nop

    func_800A36A8_7EAA8(rdram, ctx);
        goto after_1;
    // 0x800A3A2C: nop

    after_1:
    // 0x800A3A30: addu        $ra, $t5, $zero
    ctx->r31 = ADD32(ctx->r13, 0);
    // 0x800A3A34: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x800A3A38: jr          $ra
    // 0x800A3A3C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    TRACE_RETURN()
    return;
    // 0x800A3A3C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_8005D6E8_38AE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005D6E8: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x8005D6EC: jr          $ra
    // 0x8005D6F0: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x8005D6F0: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8006323C_3E63C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006323C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80063240: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80063244: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80063248: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x8006324C: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80063250: and         $v0, $v1, $a0
    ctx->r2 = ctx->r3 & ctx->r4;
    // 0x80063254: bne         $v0, $zero, L_80063268
    if (ctx->r2 != 0) {
        // 0x80063258: or          $v0, $v1, $a0
        ctx->r2 = ctx->r3 | ctx->r4;
            goto L_80063268;
    }
    // 0x80063258: or          $v0, $v1, $a0
    ctx->r2 = ctx->r3 | ctx->r4;
    // 0x8006325C: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x80063260: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80063264: sh          $v0, 0x4($a3)
    MEM_H(0X4, ctx->r7) = ctx->r2;
L_80063268:
    // 0x80063268: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x8006326C: lh          $a0, 0x4($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X4);
    // 0x80063270: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x80063274: or          $v1, $v0, $v1
    ctx->r3 = ctx->r2 | ctx->r3;
    // 0x80063278: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x8006327C: bgtz        $a0, L_80063304
    if (SIGNED(ctx->r4) > 0) {
        // 0x80063280: sw          $v1, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r3;
            goto L_80063304;
    }
    // 0x80063280: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x80063284: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x80063288: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8006328C: bne         $v0, $zero, L_800632CC
    if (ctx->r2 != 0) {
        // 0x80063290: lui         $a2, 0xFEFF
        ctx->r6 = S32(0XFEFF << 16);
            goto L_800632CC;
    }
    // 0x80063290: lui         $a2, 0xFEFF
    ctx->r6 = S32(0XFEFF << 16);
    // 0x80063294: lhu         $v0, 0xB8($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0XB8);
    // 0x80063298: andi        $v0, $v0, 0xE000
    ctx->r2 = ctx->r2 & 0XE000;
    // 0x8006329C: bne         $v0, $zero, L_800632D0
    if (ctx->r2 != 0) {
        // 0x800632A0: ori         $a2, $a2, 0xFFFF
        ctx->r6 = ctx->r6 | 0XFFFF;
            goto L_800632D0;
    }
    // 0x800632A0: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x800632A4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800632A8: lw          $v0, -0xC78($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XC78);
    // 0x800632AC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x800632B0: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x800632B4: beq         $v0, $zero, L_8006330C
    if (ctx->r2 == 0) {
        // 0x800632B8: nop
    
            goto L_8006330C;
    }
    // 0x800632B8: nop

    // 0x800632BC: jal         0x80063110
    // 0x800632C0: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    func_80063110_3E510(rdram, ctx);
        goto after_0;
    // 0x800632C0: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    after_0:
    // 0x800632C4: j           L_8006330C
    // 0x800632C8: nop

        goto L_8006330C;
    // 0x800632C8: nop

L_800632CC:
    // 0x800632CC: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
L_800632D0:
    // 0x800632D0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800632D4: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x800632D8: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x800632DC: lw          $a1, 0x6C($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X6C);
    // 0x800632E0: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x800632E4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800632E8: and         $a0, $a0, $a2
    ctx->r4 = ctx->r4 & ctx->r6;
    // 0x800632EC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800632F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800632F4: sw          $v1, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r3;
    // 0x800632F8: sw          $a0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r4;
    // 0x800632FC: j           L_8006330C
    // 0x80063300: sw          $a1, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->r5;
        goto L_8006330C;
    // 0x80063300: sw          $a1, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->r5;
L_80063304:
    // 0x80063304: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80063308: sh          $v0, 0x4($a3)
    MEM_H(0X4, ctx->r7) = ctx->r2;
L_8006330C:
    // 0x8006330C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80063310: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80063314: jr          $ra
    // 0x80063318: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80063318: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80032F24_E324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80032F24: lhu         $v0, 0xA($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XA);
    // 0x80032F28: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x80032F2C: bne         $v0, $zero, L_80032F70
    if (ctx->r2 != 0) {
        // 0x80032F30: addu        $a2, $a0, $a2
        ctx->r6 = ADD32(ctx->r4, ctx->r6);
            goto L_80032F70;
    }
    // 0x80032F30: addu        $a2, $a0, $a2
    ctx->r6 = ADD32(ctx->r4, ctx->r6);
    // 0x80032F34: lhu         $v0, 0x6($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X6);
    // 0x80032F38: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x80032F3C: bne         $v0, $a1, L_80032F70
    if (ctx->r2 != ctx->r5) {
        // 0x80032F40: nop
    
            goto L_80032F70;
    }
    // 0x80032F40: nop

    // 0x80032F44: lbu         $v0, 0x14($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X14);
    // 0x80032F48: bne         $v0, $zero, L_80032F5C
    if (ctx->r2 != 0) {
        // 0x80032F4C: sb          $zero, 0x1C($a2)
        MEM_B(0X1C, ctx->r6) = 0;
            goto L_80032F5C;
    }
    // 0x80032F4C: sb          $zero, 0x1C($a2)
    MEM_B(0X1C, ctx->r6) = 0;
    // 0x80032F50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80032F54: j           L_80032FAC
    // 0x80032F58: sb          $v0, 0x14($a2)
    MEM_B(0X14, ctx->r6) = ctx->r2;
        goto L_80032FAC;
    // 0x80032F58: sb          $v0, 0x14($a2)
    MEM_B(0X14, ctx->r6) = ctx->r2;
L_80032F5C:
    // 0x80032F5C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80032F60: sb          $v0, 0x14($a2)
    MEM_B(0X14, ctx->r6) = ctx->r2;
    // 0x80032F64: lhu         $v0, 0xA($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XA);
    // 0x80032F68: j           L_80032FA8
    // 0x80032F6C: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
        goto L_80032FA8;
    // 0x80032F6C: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
L_80032F70:
    // 0x80032F70: lbu         $v1, 0x14($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X14);
    // 0x80032F74: beq         $v1, $zero, L_80032FAC
    if (ctx->r3 == 0) {
        // 0x80032F78: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80032FAC;
    }
    // 0x80032F78: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80032F7C: beql        $v1, $v0, L_80032F9C
    if (ctx->r3 == ctx->r2) {
        // 0x80032F80: sb          $zero, 0x14($a2)
        MEM_B(0X14, ctx->r6) = 0;
            goto L_80032F9C;
    }
    goto skip_0;
    // 0x80032F80: sb          $zero, 0x14($a2)
    MEM_B(0X14, ctx->r6) = 0;
    skip_0:
    // 0x80032F84: lbu         $v0, 0x1C($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X1C);
    // 0x80032F88: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80032F8C: sltiu       $v0, $v0, 0x6
    ctx->r2 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x80032F90: bne         $v0, $zero, L_80032FAC
    if (ctx->r2 != 0) {
        // 0x80032F94: sb          $v1, 0x1C($a2)
        MEM_B(0X1C, ctx->r6) = ctx->r3;
            goto L_80032FAC;
    }
    // 0x80032F94: sb          $v1, 0x1C($a2)
    MEM_B(0X1C, ctx->r6) = ctx->r3;
    // 0x80032F98: sb          $zero, 0x14($a2)
    MEM_B(0X14, ctx->r6) = 0;
L_80032F9C:
    // 0x80032F9C: lhu         $v0, 0xA($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XA);
    // 0x80032FA0: nor         $v1, $zero, $a1
    ctx->r3 = ~(0 | ctx->r5);
    // 0x80032FA4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_80032FA8:
    // 0x80032FA8: sh          $v0, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r2;
L_80032FAC:
    // 0x80032FAC: jr          $ra
    // 0x80032FB0: nop

    TRACE_RETURN()
    return;
    // 0x80032FB0: nop

    // 0x80032FB4: nop

    // 0x80032FB8: nop

    // 0x80032FBC: nop

;}
RECOMP_FUNC void func_80059528_34928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80059528: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005952C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80059530: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80059534: addiu       $s0, $s0, -0x3E3F
    ctx->r16 = ADD32(ctx->r16, -0X3E3F);
    // 0x80059538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005953C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80059540: bne         $v0, $zero, L_80059590
    if (ctx->r2 != 0) {
        // 0x80059544: nop
    
            goto L_80059590;
    }
    // 0x80059544: nop

    // 0x80059548: jal         0x8006033C
    // 0x8005954C: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8005954C: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_0:
    // 0x80059550: beq         $v0, $zero, L_80059570
    if (ctx->r2 == 0) {
        // 0x80059554: lui         $v0, 0x500
        ctx->r2 = S32(0X500 << 16);
            goto L_80059570;
    }
    // 0x80059554: lui         $v0, 0x500
    ctx->r2 = S32(0X500 << 16);
    // 0x80059558: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005955C: sw          $v0, -0x3E40($at)
    MEM_W(-0X3E40, ctx->r1) = ctx->r2;
    // 0x80059560: jal         0x80060590
    // 0x80059564: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    func_80060590_3B990(rdram, ctx);
        goto after_1;
    // 0x80059564: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_1:
    // 0x80059568: j           L_800595B8
    // 0x8005956C: nop

        goto L_800595B8;
    // 0x8005956C: nop

L_80059570:
    // 0x80059570: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80059574: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80059578: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005957C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80059580: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80059584: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80059588: jal         0x80061510
    // 0x8005958C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_80061510_3C910(rdram, ctx);
        goto after_2;
    // 0x8005958C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_2:
L_80059590:
    // 0x80059590: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80059594: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80059598: bltz        $v0, L_800595B8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8005959C: andi        $v0, $v0, 0xFF
        ctx->r2 = ctx->r2 & 0XFF;
            goto L_800595B8;
    }
    // 0x8005959C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x800595A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800595A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800595A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800595AC: lw          $v0, -0x13F8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X13F8);
    // 0x800595B0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800595B4: sw          $v0, -0x3E40($at)
    MEM_W(-0X3E40, ctx->r1) = ctx->r2;
L_800595B8:
    // 0x800595B8: jal         0x800596DC
    // 0x800595BC: nop

    func_800596DC_34ADC(rdram, ctx);
        goto after_3;
    // 0x800595BC: nop

    after_3:
    // 0x800595C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800595C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800595C8: jr          $ra
    // 0x800595CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800595CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003B830_16C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B830: jr          $ra
    // 0x8003B834: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    TRACE_RETURN()
    return;
    // 0x8003B834: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_8002609C_149C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002609C: jr          $ra
    // 0x800260A0: nop

    TRACE_RETURN()
    return;
    // 0x800260A0: nop

;}
RECOMP_FUNC void func_80073F80_4F380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80073F80: jr          $ra
    // 0x80073F84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x80073F84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8008D660_68A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D660: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D664: sb          $v0, 0xB9($a0)
    MEM_B(0XB9, ctx->r4) = ctx->r2;
    // 0x8008D668: jr          $ra
    // 0x8008D66C: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    TRACE_RETURN()
    return;
    // 0x8008D66C: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
;}
RECOMP_FUNC void func_800353E0_107E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800353E0: jr          $ra
    // 0x800353E4: nop

    TRACE_RETURN()
    return;
    // 0x800353E4: nop

;}
RECOMP_FUNC void func_8005DDD8_391D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005DDD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005DDDC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8005DDE0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8005DDE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005DDE8: lb          $v1, 0x1($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X1);
    // 0x8005DDEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005DDF0: beq         $v1, $v0, L_8005DE5C
    if (ctx->r3 == ctx->r2) {
        // 0x8005DDF4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8005DE5C;
    }
    // 0x8005DDF4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8005DDF8: beql        $v0, $zero, L_8005DE10
    if (ctx->r2 == 0) {
        // 0x8005DDFC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8005DE10;
    }
    goto skip_0;
    // 0x8005DDFC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8005DE00: beq         $v1, $zero, L_8005DE20
    if (ctx->r3 == 0) {
        // 0x8005DE04: nop
    
            goto L_8005DE20;
    }
    // 0x8005DE04: nop

    // 0x8005DE08: j           L_8005DF28
    // 0x8005DE0C: nop

        goto L_8005DF28;
    // 0x8005DE0C: nop

L_8005DE10:
    // 0x8005DE10: beq         $v1, $v0, L_8005DE98
    if (ctx->r3 == ctx->r2) {
        // 0x8005DE14: lui         $v1, 0x4000
        ctx->r3 = S32(0X4000 << 16);
            goto L_8005DE98;
    }
    // 0x8005DE14: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x8005DE18: j           L_8005DF28
    // 0x8005DE1C: nop

        goto L_8005DF28;
    // 0x8005DE1C: nop

L_8005DE20:
    // 0x8005DE20: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005DE24: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8005DE28: beq         $v0, $zero, L_8005DE48
    if (ctx->r2 == 0) {
        // 0x8005DE2C: nop
    
            goto L_8005DE48;
    }
    // 0x8005DE2C: nop

    // 0x8005DE30: jal         0x8005DF8C
    // 0x8005DE34: nop

    func_8005DF8C_3938C(rdram, ctx);
        goto after_0;
    // 0x8005DE34: nop

    after_0:
    // 0x8005DE38: jal         0x8005E5D8
    // 0x8005DE3C: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    func_8005E5D8_399D8(rdram, ctx);
        goto after_1;
    // 0x8005DE3C: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    after_1:
    // 0x8005DE40: j           L_8005DF28
    // 0x8005DE44: nop

        goto L_8005DF28;
    // 0x8005DE44: nop

L_8005DE48:
    // 0x8005DE48: jal         0x80036E48
    // 0x8005DE4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x8005DE4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8005DE50: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8005DE54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005DE58: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_8005DE5C:
    // 0x8005DE5C: jal         0x80061724
    // 0x8005DE60: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_3;
    // 0x8005DE60: nop

    after_3:
    // 0x8005DE64: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8005DE68: lw          $a1, 0x2884($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2884);
    // 0x8005DE6C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005DE70: jal         0x80061510
    // 0x8005DE74: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_4;
    // 0x8005DE74: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_4:
    // 0x8005DE78: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8005DE7C: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8005DE80: addiu       $a0, $a0, 0x5448
    ctx->r4 = ADD32(ctx->r4, 0X5448);
    // 0x8005DE84: addiu       $v0, $zero, 0x384
    ctx->r2 = ADD32(0, 0X384);
    // 0x8005DE88: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8005DE8C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8005DE90: j           L_8005DEFC
    // 0x8005DE94: sb          $v1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r3;
        goto L_8005DEFC;
    // 0x8005DE94: sb          $v1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r3;
L_8005DE98:
    // 0x8005DE98: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005DE9C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8005DEA0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8005DEA4: bne         $v0, $zero, L_8005DEC0
    if (ctx->r2 != 0) {
        // 0x8005DEA8: nop
    
            goto L_8005DEC0;
    }
    // 0x8005DEA8: nop

    // 0x8005DEAC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8005DEB0: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x8005DEB4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8005DEB8: beq         $v0, $zero, L_8005DEF4
    if (ctx->r2 == 0) {
        // 0x8005DEBC: nop
    
            goto L_8005DEF4;
    }
    // 0x8005DEBC: nop

L_8005DEC0:
    // 0x8005DEC0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8005DEC4: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x8005DEC8: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8005DECC: beq         $v0, $zero, L_8005DEE0
    if (ctx->r2 == 0) {
        // 0x8005DED0: addiu       $a0, $zero, 0x83
        ctx->r4 = ADD32(0, 0X83);
            goto L_8005DEE0;
    }
    // 0x8005DED0: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x8005DED4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005DED8: jal         0x8002A2F8
    // 0x8005DEDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_5;
    // 0x8005DEDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
L_8005DEE0:
    // 0x8005DEE0: jal         0x80036E48
    // 0x8005DEE4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80036E48_12248(rdram, ctx);
        goto after_6;
    // 0x8005DEE4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_6:
    // 0x8005DEE8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8005DEEC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8005DEF0: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
L_8005DEF4:
    // 0x8005DEF4: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8005DEF8: addiu       $a0, $a0, 0x5448
    ctx->r4 = ADD32(ctx->r4, 0X5448);
L_8005DEFC:
    // 0x8005DEFC: jal         0x8005F2CC
    // 0x8005DF00: nop

    func_8005F2CC_3A6CC(rdram, ctx);
        goto after_7;
    // 0x8005DF00: nop

    after_7:
    // 0x8005DF04: jal         0x8004BFB0
    // 0x8005DF08: nop

    func_8004BFB0_273B0(rdram, ctx);
        goto after_8;
    // 0x8005DF08: nop

    after_8:
    // 0x8005DF0C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8005DF10: addiu       $a0, $a0, -0x13A8
    ctx->r4 = ADD32(ctx->r4, -0X13A8);
    // 0x8005DF14: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8005DF18: jal         0x80033358
    // 0x8005DF1C: addiu       $a1, $a1, -0x1398
    ctx->r5 = ADD32(ctx->r5, -0X1398);
    func_80033358_E758(rdram, ctx);
        goto after_9;
    // 0x8005DF1C: addiu       $a1, $a1, -0x1398
    ctx->r5 = ADD32(ctx->r5, -0X1398);
    after_9:
    // 0x8005DF20: jal         0x8003A7CC
    // 0x8005DF24: nop

    func_8003A7CC_15BCC(rdram, ctx);
        goto after_10;
    // 0x8005DF24: nop

    after_10:
L_8005DF28:
    // 0x8005DF28: jal         0x800572DC
    // 0x8005DF2C: nop

    func_800572DC_326DC(rdram, ctx);
        goto after_11;
    // 0x8005DF2C: nop

    after_11:
    // 0x8005DF30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005DF34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8005DF38: jr          $ra
    // 0x8005DF3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005DF3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002BBBC_6FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002BBBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002BBC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8002BBC4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8002BBC8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002BBCC: lw          $a0, 0x22D0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D0);
    // 0x8002BBD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002BBD4: jal         0x8008ADE8
    // 0x8002BBD8: nop

    func_8008ADE8_661E8(rdram, ctx);
        goto after_0;
    // 0x8002BBD8: nop

    after_0:
    // 0x8002BBDC: beq         $v0, $zero, L_8002BC44
    if (ctx->r2 == 0) {
        // 0x8002BBE0: nop
    
            goto L_8002BC44;
    }
    // 0x8002BBE0: nop

    // 0x8002BBE4: lh          $v1, 0xA($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XA);
    // 0x8002BBE8: lh          $v0, 0x12($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X12);
    // 0x8002BBEC: addiu       $v1, $v1, -0xE
    ctx->r3 = ADD32(ctx->r3, -0XE);
    // 0x8002BBF0: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002BBF4: mflo        $v1
    ctx->r3 = lo;
    // 0x8002BBF8: lui         $v0, 0x8102
    ctx->r2 = S32(0X8102 << 16);
    // 0x8002BBFC: ori         $v0, $v0, 0x409
    ctx->r2 = ctx->r2 | 0X409;
    // 0x8002BC00: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002BC04: mfhi        $a2
    ctx->r6 = hi;
    // 0x8002BC08: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x8002BC0C: sra         $v0, $v0, 6
    ctx->r2 = S32(SIGNED(ctx->r2) >> 6);
    // 0x8002BC10: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8002BC14: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8002BC18: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8002BC1C: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002BC20: blez        $a1, L_8002BC3C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8002BC24: nop
    
            goto L_8002BC3C;
    }
    // 0x8002BC24: nop

    // 0x8002BC28: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002BC2C: jal         0x8008AE40
    // 0x8002BC30: lw          $a0, 0x22D0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D0);
    func_8008AE40_66240(rdram, ctx);
        goto after_1;
    // 0x8002BC30: lw          $a0, 0x22D0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D0);
    after_1:
    // 0x8002BC34: j           L_8002BC44
    // 0x8002BC38: nop

        goto L_8002BC44;
    // 0x8002BC38: nop

L_8002BC3C:
    // 0x8002BC3C: jal         0x8002BF14
    // 0x8002BC40: nop

    func_8002BF14_7314(rdram, ctx);
        goto after_2;
    // 0x8002BC40: nop

    after_2:
L_8002BC44:
    // 0x8002BC44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002BC48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8002BC4C: jr          $ra
    // 0x8002BC50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002BC50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008DB90_68F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008DB90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008DB94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008DB98: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8008DB9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008DBA0: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8008DBA4: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008DBA8: lw          $v1, 0x4FB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4FB0);
    // 0x8008DBAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008DBB0: bne         $v1, $v0, L_8008DBC0
    if (ctx->r3 != ctx->r2) {
        // 0x8008DBB4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8008DBC0;
    }
    // 0x8008DBB4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8008DBB8: jal         0x8008E440
    // 0x8008DBBC: nop

    func_8008E440_69840(rdram, ctx);
        goto after_0;
    // 0x8008DBBC: nop

    after_0:
L_8008DBC0:
    // 0x8008DBC0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x8008DBC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008DBC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008DBCC: jr          $ra
    // 0x8008DBD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8008DBD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003216C_D56C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003216C: lw          $a3, 0x4($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X4);
    // 0x80032170: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x80032174: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80032178: mflo        $a3
    ctx->r7 = lo;
    // 0x8003217C: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x80032180: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80032184: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80032188: mflo        $v0
    ctx->r2 = lo;
    // 0x8003218C: subu        $a3, $a3, $v0
    ctx->r7 = SUB32(ctx->r7, ctx->r2);
    // 0x80032190: sw          $a3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r7;
    // 0x80032194: lw          $a3, 0x8($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X8);
    // 0x80032198: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8003219C: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800321A0: mflo        $a3
    ctx->r7 = lo;
    // 0x800321A4: lw          $v1, 0x8($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X8);
    // 0x800321A8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800321AC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800321B0: mflo        $v0
    ctx->r2 = lo;
    // 0x800321B4: subu        $a3, $a3, $v0
    ctx->r7 = SUB32(ctx->r7, ctx->r2);
    // 0x800321B8: sw          $a3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r7;
    // 0x800321BC: lw          $a3, 0x0($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X0);
    // 0x800321C0: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x800321C4: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800321C8: mflo        $a3
    ctx->r7 = lo;
    // 0x800321CC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x800321D0: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x800321D4: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800321D8: mflo        $v0
    ctx->r2 = lo;
    // 0x800321DC: subu        $a3, $a3, $v0
    ctx->r7 = SUB32(ctx->r7, ctx->r2);
    // 0x800321E0: nop

    // 0x800321E4: jr          $ra
    // 0x800321E8: sw          $a3, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r7;
    TRACE_RETURN()
    return;
    // 0x800321E8: sw          $a3, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r7;
;}
RECOMP_FUNC void func_8006C6D8_47AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006C6D8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8006C6DC: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8006C6E0: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x8006C6E4: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8006C6E8: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x8006C6EC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8006C6F0: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8006C6F4: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8006C6F8: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8006C6FC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8006C700: jal         0x8003516C
    // 0x8006C704: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    func_8003516C_1056C(rdram, ctx);
        goto after_0;
    // 0x8006C704: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    after_0:
    // 0x8006C708: bne         $v0, $zero, L_8006C9B4
    if (ctx->r2 != 0) {
        // 0x8006C70C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006C9B4;
    }
    // 0x8006C70C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006C710: lb          $v0, 0x174($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X174);
    // 0x8006C714: andi        $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 & 0XC0;
    // 0x8006C718: bne         $v0, $zero, L_8006C9B4
    if (ctx->r2 != 0) {
        // 0x8006C71C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006C9B4;
    }
    // 0x8006C71C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006C720: lb          $v0, 0x177($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X177);
    // 0x8006C724: bne         $v0, $zero, L_8006C9B4
    if (ctx->r2 != 0) {
        // 0x8006C728: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006C9B4;
    }
    // 0x8006C728: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006C72C: lhu         $s0, 0x11C($s4)
    ctx->r16 = MEM_HU(ctx->r20, 0X11C);
    // 0x8006C730: sh          $zero, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = 0;
    // 0x8006C734: sh          $zero, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = 0;
    // 0x8006C738: sh          $zero, 0x18($sp)
    MEM_H(0X18, ctx->r29) = 0;
    // 0x8006C73C: lh          $a0, 0x56($s4)
    ctx->r4 = MEM_H(ctx->r20, 0X56);
    // 0x8006C740: jal         0x800324B4
    // 0x8006C744: addiu       $s3, $zero, 0x7FFF
    ctx->r19 = ADD32(0, 0X7FFF);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x8006C744: addiu       $s3, $zero, 0x7FFF
    ctx->r19 = ADD32(0, 0X7FFF);
    after_1:
    // 0x8006C748: lh          $a0, 0x56($s4)
    ctx->r4 = MEM_H(ctx->r20, 0X56);
    // 0x8006C74C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8006C750: jal         0x80032498
    // 0x8006C754: sh          $v0, -0x39A4($at)
    MEM_H(-0X39A4, ctx->r1) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x8006C754: sh          $v0, -0x39A4($at)
    MEM_H(-0X39A4, ctx->r1) = ctx->r2;
    after_2:
    // 0x8006C758: lhu         $v1, 0x136($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X136);
    // 0x8006C75C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8006C760: sh          $v0, -0x260C($at)
    MEM_H(-0X260C, ctx->r1) = ctx->r2;
    // 0x8006C764: and         $v1, $v1, $s0
    ctx->r3 = ctx->r3 & ctx->r16;
    // 0x8006C768: beql        $v1, $zero, L_8006C9B0
    if (ctx->r3 == 0) {
        // 0x8006C76C: sw          $zero, 0x184($s4)
        MEM_W(0X184, ctx->r20) = 0;
            goto L_8006C9B0;
    }
    goto skip_0;
    // 0x8006C76C: sw          $zero, 0x184($s4)
    MEM_W(0X184, ctx->r20) = 0;
    skip_0:
    // 0x8006C770: lb          $v0, 0x74($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X74);
    // 0x8006C774: bnel        $v0, $zero, L_8006C9B0
    if (ctx->r2 != 0) {
        // 0x8006C778: sw          $zero, 0x184($s4)
        MEM_W(0X184, ctx->r20) = 0;
            goto L_8006C9B0;
    }
    goto skip_1;
    // 0x8006C778: sw          $zero, 0x184($s4)
    MEM_W(0X184, ctx->r20) = 0;
    skip_1:
    // 0x8006C77C: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8006C780: addiu       $s0, $s0, -0x420
    ctx->r16 = ADD32(ctx->r16, -0X420);
    // 0x8006C784: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8006C788: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x8006C78C: addiu       $s2, $sp, 0x20
    ctx->r18 = ADD32(ctx->r29, 0X20);
L_8006C790:
    // 0x8006C790: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8006C794: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8006C798: bnel        $v0, $s6, L_8006C7F4
    if (ctx->r2 != ctx->r22) {
        // 0x8006C79C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8006C7F4;
    }
    goto skip_2;
    // 0x8006C79C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x8006C7A0: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x8006C7A4: beql        $a1, $zero, L_8006C7F4
    if (ctx->r5 == 0) {
        // 0x8006C7A8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8006C7F4;
    }
    goto skip_3;
    // 0x8006C7A8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_3:
    // 0x8006C7AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8006C7B0: jal         0x8009A3B4
    // 0x8006C7B4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8006C7B4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_3:
    // 0x8006C7B8: jal         0x8006C5D8
    // 0x8006C7BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8006C5D8_479D8(rdram, ctx);
        goto after_4;
    // 0x8006C7BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x8006C7C0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8006C7C4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8006C7C8: addiu       $a2, $s0, 0x54
    ctx->r6 = ADD32(ctx->r16, 0X54);
    // 0x8006C7CC: jal         0x8006C384
    // 0x8006C7D0: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_8006C384_47784(rdram, ctx);
        goto after_5;
    // 0x8006C7D0: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_5:
    // 0x8006C7D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8006C7D8: beq         $v1, $zero, L_8006C7F4
    if (ctx->r3 == 0) {
        // 0x8006C7DC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8006C7F4;
    }
    // 0x8006C7DC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8006C7E0: sltu        $v0, $v1, $s3
    ctx->r2 = ctx->r3 < ctx->r19 ? 1 : 0;
    // 0x8006C7E4: beq         $v0, $zero, L_8006C7F4
    if (ctx->r2 == 0) {
        // 0x8006C7E8: nop
    
            goto L_8006C7F4;
    }
    // 0x8006C7E8: nop

    // 0x8006C7EC: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x8006C7F0: addu        $s5, $s0, $zero
    ctx->r21 = ADD32(ctx->r16, 0);
L_8006C7F4:
    // 0x8006C7F4: slti        $v0, $s1, 0x12
    ctx->r2 = SIGNED(ctx->r17) < 0X12 ? 1 : 0;
    // 0x8006C7F8: bne         $v0, $zero, L_8006C790
    if (ctx->r2 != 0) {
        // 0x8006C7FC: addiu       $s0, $s0, 0x3C8
        ctx->r16 = ADD32(ctx->r16, 0X3C8);
            goto L_8006C790;
    }
    // 0x8006C7FC: addiu       $s0, $s0, 0x3C8
    ctx->r16 = ADD32(ctx->r16, 0X3C8);
    // 0x8006C800: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8006C804: addiu       $s0, $s0, -0x5F40
    ctx->r16 = ADD32(ctx->r16, -0X5F40);
    // 0x8006C808: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8006C80C: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
L_8006C810:
    // 0x8006C810: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8006C814: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8006C818: bnel        $v0, $s2, L_8006C85C
    if (ctx->r2 != ctx->r18) {
        // 0x8006C81C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8006C85C;
    }
    goto skip_4;
    // 0x8006C81C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_4:
    // 0x8006C820: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x8006C824: beql        $a3, $zero, L_8006C85C
    if (ctx->r7 == 0) {
        // 0x8006C828: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8006C85C;
    }
    goto skip_5;
    // 0x8006C828: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_5:
    // 0x8006C82C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8006C830: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8006C834: jal         0x8006C384
    // 0x8006C838: addiu       $a2, $s0, 0x54
    ctx->r6 = ADD32(ctx->r16, 0X54);
    func_8006C384_47784(rdram, ctx);
        goto after_6;
    // 0x8006C838: addiu       $a2, $s0, 0x54
    ctx->r6 = ADD32(ctx->r16, 0X54);
    after_6:
    // 0x8006C83C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8006C840: beq         $v1, $zero, L_8006C85C
    if (ctx->r3 == 0) {
        // 0x8006C844: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8006C85C;
    }
    // 0x8006C844: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8006C848: sltu        $v0, $v1, $s3
    ctx->r2 = ctx->r3 < ctx->r19 ? 1 : 0;
    // 0x8006C84C: beq         $v0, $zero, L_8006C85C
    if (ctx->r2 == 0) {
        // 0x8006C850: nop
    
            goto L_8006C85C;
    }
    // 0x8006C850: nop

    // 0x8006C854: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x8006C858: addu        $s5, $s0, $zero
    ctx->r21 = ADD32(ctx->r16, 0);
L_8006C85C:
    // 0x8006C85C: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x8006C860: bne         $v0, $zero, L_8006C810
    if (ctx->r2 != 0) {
        // 0x8006C864: addiu       $s0, $s0, 0x5AC
        ctx->r16 = ADD32(ctx->r16, 0X5AC);
            goto L_8006C810;
    }
    // 0x8006C864: addiu       $s0, $s0, 0x5AC
    ctx->r16 = ADD32(ctx->r16, 0X5AC);
    // 0x8006C868: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x8006C86C: addiu       $s0, $s0, -0x2100
    ctx->r16 = ADD32(ctx->r16, -0X2100);
    // 0x8006C870: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8006C874: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
L_8006C878:
    // 0x8006C878: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8006C87C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8006C880: bnel        $v0, $s2, L_8006C8D4
    if (ctx->r2 != ctx->r18) {
        // 0x8006C884: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8006C8D4;
    }
    goto skip_6;
    // 0x8006C884: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_6:
    // 0x8006C888: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8006C88C: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8006C890: beql        $v0, $zero, L_8006C8D4
    if (ctx->r2 == 0) {
        // 0x8006C894: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8006C8D4;
    }
    goto skip_7;
    // 0x8006C894: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_7:
    // 0x8006C898: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x8006C89C: beql        $a3, $zero, L_8006C8D4
    if (ctx->r7 == 0) {
        // 0x8006C8A0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8006C8D4;
    }
    goto skip_8;
    // 0x8006C8A0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_8:
    // 0x8006C8A4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8006C8A8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8006C8AC: jal         0x8006C384
    // 0x8006C8B0: addiu       $a2, $s0, 0x54
    ctx->r6 = ADD32(ctx->r16, 0X54);
    func_8006C384_47784(rdram, ctx);
        goto after_7;
    // 0x8006C8B0: addiu       $a2, $s0, 0x54
    ctx->r6 = ADD32(ctx->r16, 0X54);
    after_7:
    // 0x8006C8B4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8006C8B8: beq         $v1, $zero, L_8006C8D4
    if (ctx->r3 == 0) {
        // 0x8006C8BC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8006C8D4;
    }
    // 0x8006C8BC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8006C8C0: sltu        $v0, $v1, $s3
    ctx->r2 = ctx->r3 < ctx->r19 ? 1 : 0;
    // 0x8006C8C4: beq         $v0, $zero, L_8006C8D4
    if (ctx->r2 == 0) {
        // 0x8006C8C8: nop
    
            goto L_8006C8D4;
    }
    // 0x8006C8C8: nop

    // 0x8006C8CC: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x8006C8D0: addu        $s5, $s0, $zero
    ctx->r21 = ADD32(ctx->r16, 0);
L_8006C8D4:
    // 0x8006C8D4: slti        $v0, $s1, 0x20
    ctx->r2 = SIGNED(ctx->r17) < 0X20 ? 1 : 0;
    // 0x8006C8D8: bne         $v0, $zero, L_8006C878
    if (ctx->r2 != 0) {
        // 0x8006C8DC: addiu       $s0, $s0, 0x118
        ctx->r16 = ADD32(ctx->r16, 0X118);
            goto L_8006C878;
    }
    // 0x8006C8DC: addiu       $s0, $s0, 0x118
    ctx->r16 = ADD32(ctx->r16, 0X118);
    // 0x8006C8E0: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8006C8E4: addiu       $s2, $s2, 0x6B70
    ctx->r18 = ADD32(ctx->r18, 0X6B70);
    // 0x8006C8E8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8006C8EC: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x8006C8F0: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_8006C8F4:
    // 0x8006C8F4: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x8006C8F8: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x8006C8FC: bnel        $v0, $s6, L_8006C984
    if (ctx->r2 != ctx->r22) {
        // 0x8006C900: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8006C984;
    }
    goto skip_9;
    // 0x8006C900: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_9:
    // 0x8006C904: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8006C908: beql        $v0, $zero, L_8006C984
    if (ctx->r2 == 0) {
        // 0x8006C90C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8006C984;
    }
    goto skip_10;
    // 0x8006C90C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_10:
    // 0x8006C910: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x8006C914: beq         $v0, $zero, L_8006C938
    if (ctx->r2 == 0) {
        // 0x8006C918: nop
    
            goto L_8006C938;
    }
    // 0x8006C918: nop

    // 0x8006C91C: lhu         $v0, 0x38($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X38);
    // 0x8006C920: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8006C924: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
    // 0x8006C928: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8006C92C: lhu         $v0, 0x3C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3C);
    // 0x8006C930: j           L_8006C950
    // 0x8006C934: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
        goto L_8006C950;
    // 0x8006C934: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
L_8006C938:
    // 0x8006C938: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x8006C93C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8006C940: lhu         $v0, 0x1E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1E);
    // 0x8006C944: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8006C948: lhu         $v0, 0x20($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X20);
    // 0x8006C94C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
L_8006C950:
    // 0x8006C950: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8006C954: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x8006C958: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8006C95C: jal         0x8006C384
    // 0x8006C960: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_8006C384_47784(rdram, ctx);
        goto after_8;
    // 0x8006C960: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_8:
    // 0x8006C964: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8006C968: beq         $v1, $zero, L_8006C984
    if (ctx->r3 == 0) {
        // 0x8006C96C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8006C984;
    }
    // 0x8006C96C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8006C970: sltu        $v0, $v1, $s3
    ctx->r2 = ctx->r3 < ctx->r19 ? 1 : 0;
    // 0x8006C974: beq         $v0, $zero, L_8006C984
    if (ctx->r2 == 0) {
        // 0x8006C978: nop
    
            goto L_8006C984;
    }
    // 0x8006C978: nop

    // 0x8006C97C: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x8006C980: addu        $s5, $s0, $zero
    ctx->r21 = ADD32(ctx->r16, 0);
L_8006C984:
    // 0x8006C984: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
    // 0x8006C988: slti        $v0, $s1, 0x20
    ctx->r2 = SIGNED(ctx->r17) < 0X20 ? 1 : 0;
    // 0x8006C98C: bne         $v0, $zero, L_8006C8F4
    if (ctx->r2 != 0) {
        // 0x8006C990: addiu       $s2, $s2, 0x5C
        ctx->r18 = ADD32(ctx->r18, 0X5C);
            goto L_8006C8F4;
    }
    // 0x8006C990: addiu       $s2, $s2, 0x5C
    ctx->r18 = ADD32(ctx->r18, 0X5C);
    // 0x8006C994: sltiu       $v0, $s3, 0x820
    ctx->r2 = ctx->r19 < 0X820 ? 1 : 0;
    // 0x8006C998: beq         $v0, $zero, L_8006C9AC
    if (ctx->r2 == 0) {
        // 0x8006C99C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006C9AC;
    }
    // 0x8006C99C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006C9A0: sh          $s3, 0x182($s4)
    MEM_H(0X182, ctx->r20) = ctx->r19;
    // 0x8006C9A4: j           L_8006C9B4
    // 0x8006C9A8: sw          $s5, 0x184($s4)
    MEM_W(0X184, ctx->r20) = ctx->r21;
        goto L_8006C9B4;
    // 0x8006C9A8: sw          $s5, 0x184($s4)
    MEM_W(0X184, ctx->r20) = ctx->r21;
L_8006C9AC:
    // 0x8006C9AC: sw          $zero, 0x184($s4)
    MEM_W(0X184, ctx->r20) = 0;
L_8006C9B0:
    // 0x8006C9B0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8006C9B4:
    // 0x8006C9B4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8006C9B8: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8006C9BC: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8006C9C0: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8006C9C4: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8006C9C8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8006C9CC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8006C9D0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8006C9D4: jr          $ra
    // 0x8006C9D8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8006C9D8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80029C7C_507C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80029C7C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80029C80: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80029C84: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x80029C88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80029C8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80029C90: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80029C94: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80029C98: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80029C9C: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x80029CA0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80029CA4: jal         0x800281C8
    // 0x80029CA8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_800281C8_35C8(rdram, ctx);
        goto after_0;
    // 0x80029CA8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_0:
    // 0x80029CAC: beq         $v0, $zero, L_80029CD8
    if (ctx->r2 == 0) {
        // 0x80029CB0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80029CD8;
    }
    // 0x80029CB0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80029CB4: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x80029CB8: lui         $a2, 0x8003
    ctx->r6 = S32(0X8003 << 16);
    // 0x80029CBC: addiu       $a2, $a2, -0x677C
    ctx->r6 = ADD32(ctx->r6, -0X677C);
    // 0x80029CC0: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80029CC4: sh          $s0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r16;
    // 0x80029CC8: sh          $s1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r17;
    // 0x80029CCC: sb          $s2, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r18;
    // 0x80029CD0: jal         0x800283A8
    // 0x80029CD4: sw          $s3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r19;
    func_800283A8_37A8(rdram, ctx);
        goto after_1;
    // 0x80029CD4: sw          $s3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r19;
    after_1:
L_80029CD8:
    // 0x80029CD8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80029CDC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80029CE0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80029CE4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80029CE8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80029CEC: jr          $ra
    // 0x80029CF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80029CF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8007BA60_56E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007BA60: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8007BA64: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8007BA68: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8007BA6C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8007BA70: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x8007BA74: jal         0x80071110
    // 0x8007BA78: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    func_80071110_4C510(rdram, ctx);
        goto after_0;
    // 0x8007BA78: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x8007BA7C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8007BA80: bne         $v1, $zero, L_8007BA94
    if (ctx->r3 != 0) {
        // 0x8007BA84: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_8007BA94;
    }
    // 0x8007BA84: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8007BA88: lh          $v0, 0x7C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X7C);
    // 0x8007BA8C: beq         $v0, $zero, L_8007BAB8
    if (ctx->r2 == 0) {
        // 0x8007BA90: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_8007BAB8;
    }
    // 0x8007BA90: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_8007BA94:
    // 0x8007BA94: bne         $v1, $v0, L_8007BAA4
    if (ctx->r3 != ctx->r2) {
        // 0x8007BA98: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8007BAA4;
    }
    // 0x8007BA98: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8007BA9C: j           L_8007BAA8
    // 0x8007BAA0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_8007BAA8;
    // 0x8007BAA0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8007BAA4:
    // 0x8007BAA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8007BAA8:
    // 0x8007BAA8: jal         0x8007BD7C
    // 0x8007BAAC: nop

    func_8007BD7C_5717C(rdram, ctx);
        goto after_1;
    // 0x8007BAAC: nop

    after_1:
    // 0x8007BAB0: j           L_8007BD30
    // 0x8007BAB4: nop

        goto L_8007BD30;
    // 0x8007BAB4: nop

L_8007BAB8:
    // 0x8007BAB8: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x8007BABC: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8007BAC0: jal         0x8009A3B4
    // 0x8007BAC4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8007BAC4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8007BAC8: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x8007BACC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8007BAD0: jal         0x8009A3B4
    // 0x8007BAD4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8007BAD4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8007BAD8: lbu         $s0, 0xB($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XB);
    // 0x8007BADC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8007BAE0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8007BAE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8007BAE8: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8007BAEC: andi        $s0, $s0, 0xFF
    ctx->r16 = ctx->r16 & 0XFF;
    // 0x8007BAF0: jal         0x800710B8
    // 0x8007BAF4: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    func_800710B8_4C4B8(rdram, ctx);
        goto after_4;
    // 0x8007BAF4: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    after_4:
    // 0x8007BAF8: slt         $s0, $s0, $v0
    ctx->r16 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8007BAFC: beq         $s0, $zero, L_8007BD30
    if (ctx->r16 == 0) {
        // 0x8007BB00: nop
    
            goto L_8007BD30;
    }
    // 0x8007BB00: nop

    // 0x8007BB04: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8007BB08: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8007BB0C: bne         $v0, $zero, L_8007BCC0
    if (ctx->r2 != 0) {
        // 0x8007BB10: nop
    
            goto L_8007BCC0;
    }
    // 0x8007BB10: nop

    // 0x8007BB14: lw          $v0, 0xC0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC0);
    // 0x8007BB18: lw          $v1, 0xC4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XC4);
    // 0x8007BB1C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8007BB20: beq         $v0, $zero, L_8007BCB0
    if (ctx->r2 == 0) {
        // 0x8007BB24: ori         $a1, $zero, 0xD0FC
        ctx->r5 = 0 | 0XD0FC;
            goto L_8007BCB0;
    }
    // 0x8007BB24: ori         $a1, $zero, 0xD0FC
    ctx->r5 = 0 | 0XD0FC;
    // 0x8007BB28: lh          $v1, 0xC0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XC0);
    // 0x8007BB2C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8007BB30: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8007BB34: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x8007BB38: lh          $a0, 0xC2($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XC2);
    // 0x8007BB3C: lh          $v0, 0x16($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X16);
    // 0x8007BB40: subu        $a2, $a0, $v0
    ctx->r6 = SUB32(ctx->r4, ctx->r2);
    // 0x8007BB44: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x8007BB48: lh          $a0, 0xC4($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XC4);
    // 0x8007BB4C: lh          $v0, 0x18($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X18);
    // 0x8007BB50: addiu       $v1, $v1, 0x687E
    ctx->r3 = ADD32(ctx->r3, 0X687E);
    // 0x8007BB54: sltu        $v1, $a1, $v1
    ctx->r3 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x8007BB58: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8007BB5C: bne         $v1, $zero, L_8007BB80
    if (ctx->r3 != 0) {
        // 0x8007BB60: sw          $a0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r4;
            goto L_8007BB80;
    }
    // 0x8007BB60: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8007BB64: addiu       $v0, $a2, 0x687E
    ctx->r2 = ADD32(ctx->r6, 0X687E);
    // 0x8007BB68: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8007BB6C: bne         $v0, $zero, L_8007BB80
    if (ctx->r2 != 0) {
        // 0x8007BB70: addiu       $v0, $a0, 0x687E
        ctx->r2 = ADD32(ctx->r4, 0X687E);
            goto L_8007BB80;
    }
    // 0x8007BB70: addiu       $v0, $a0, 0x687E
    ctx->r2 = ADD32(ctx->r4, 0X687E);
    // 0x8007BB74: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8007BB78: beq         $v0, $zero, L_8007BBA8
    if (ctx->r2 == 0) {
        // 0x8007BB7C: addiu       $a0, $sp, 0x28
        ctx->r4 = ADD32(ctx->r29, 0X28);
            goto L_8007BBA8;
    }
    // 0x8007BB7C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
L_8007BB80:
    // 0x8007BB80: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x8007BB84: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x8007BB88: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8007BB8C: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8007BB90: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x8007BB94: sra         $a0, $a0, 2
    ctx->r4 = S32(SIGNED(ctx->r4) >> 2);
    // 0x8007BB98: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8007BB9C: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x8007BBA0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8007BBA4: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
L_8007BBA8:
    // 0x8007BBA8: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x8007BBAC: jal         0x80032308
    // 0x8007BBB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80032308_D708(rdram, ctx);
        goto after_5;
    // 0x8007BBB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8007BBB4: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x8007BBB8: sltiu       $v0, $v1, 0x4
    ctx->r2 = ctx->r3 < 0X4 ? 1 : 0;
    // 0x8007BBBC: beq         $v0, $zero, L_8007BBE8
    if (ctx->r2 == 0) {
        // 0x8007BBC0: lui         $v0, 0xF74
        ctx->r2 = S32(0XF74 << 16);
            goto L_8007BBE8;
    }
    // 0x8007BBC0: lui         $v0, 0xF74
    ctx->r2 = S32(0XF74 << 16);
    // 0x8007BBC4: ori         $v0, $v0, 0x6EA4
    ctx->r2 = ctx->r2 | 0X6EA4;
    // 0x8007BBC8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8007BBCC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8007BBD0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8007BBD4: addiu       $a2, $s1, 0xA4
    ctx->r6 = ADD32(ctx->r17, 0XA4);
    // 0x8007BBD8: jal         0x80051B48
    // 0x8007BBDC: addiu       $a3, $zero, 0x424
    ctx->r7 = ADD32(0, 0X424);
    func_80051B48_2CF48(rdram, ctx);
        goto after_6;
    // 0x8007BBDC: addiu       $a3, $zero, 0x424
    ctx->r7 = ADD32(0, 0X424);
    after_6:
    // 0x8007BBE0: j           L_8007BC4C
    // 0x8007BBE4: addiu       $a0, $s1, 0xA4
    ctx->r4 = ADD32(ctx->r17, 0XA4);
        goto L_8007BC4C;
    // 0x8007BBE4: addiu       $a0, $s1, 0xA4
    ctx->r4 = ADD32(ctx->r17, 0XA4);
L_8007BBE8:
    // 0x8007BBE8: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x8007BBEC: beq         $v0, $zero, L_8007BC18
    if (ctx->r2 == 0) {
        // 0x8007BBF0: lui         $v0, 0xFFD
        ctx->r2 = S32(0XFFD << 16);
            goto L_8007BC18;
    }
    // 0x8007BBF0: lui         $v0, 0xFFD
    ctx->r2 = S32(0XFFD << 16);
    // 0x8007BBF4: ori         $v0, $v0, 0x813C
    ctx->r2 = ctx->r2 | 0X813C;
    // 0x8007BBF8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8007BBFC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8007BC00: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8007BC04: addiu       $a2, $s1, 0xA4
    ctx->r6 = ADD32(ctx->r17, 0XA4);
    // 0x8007BC08: jal         0x80051B48
    // 0x8007BC0C: addiu       $a3, $zero, 0x8F
    ctx->r7 = ADD32(0, 0X8F);
    func_80051B48_2CF48(rdram, ctx);
        goto after_7;
    // 0x8007BC0C: addiu       $a3, $zero, 0x8F
    ctx->r7 = ADD32(0, 0X8F);
    after_7:
    // 0x8007BC10: j           L_8007BC4C
    // 0x8007BC14: addiu       $a0, $s1, 0xA4
    ctx->r4 = ADD32(ctx->r17, 0XA4);
        goto L_8007BC4C;
    // 0x8007BC14: addiu       $a0, $s1, 0xA4
    ctx->r4 = ADD32(ctx->r17, 0XA4);
L_8007BC18:
    // 0x8007BC18: lui         $v0, 0xFFF
    ctx->r2 = S32(0XFFF << 16);
    // 0x8007BC1C: ori         $v0, $v0, 0x604C
    ctx->r2 = ctx->r2 | 0X604C;
    // 0x8007BC20: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8007BC24: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8007BC28: addiu       $a2, $s1, 0xA4
    ctx->r6 = ADD32(ctx->r17, 0XA4);
    // 0x8007BC2C: addiu       $a3, $zero, 0x47
    ctx->r7 = ADD32(0, 0X47);
    // 0x8007BC30: jal         0x80051B48
    // 0x8007BC34: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80051B48_2CF48(rdram, ctx);
        goto after_8;
    // 0x8007BC34: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_8:
    // 0x8007BC38: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    // 0x8007BC3C: jal         0x800530E8
    // 0x8007BC40: nop

    func_800530E8_2E4E8(rdram, ctx);
        goto after_9;
    // 0x8007BC40: nop

    after_9:
    // 0x8007BC44: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    // 0x8007BC48: addiu       $a0, $s1, 0xA4
    ctx->r4 = ADD32(ctx->r17, 0XA4);
L_8007BC4C:
    // 0x8007BC4C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8007BC50: jal         0x8009A3B4
    // 0x8007BC54: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x8007BC54: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x8007BC58: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8007BC5C: lb          $v0, 0x4EAE($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4EAE);
    // 0x8007BC60: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x8007BC64: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007BC68: lbu         $v1, -0x2CDC($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X2CDC);
    // 0x8007BC6C: lh          $v0, 0x18($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X18);
    // 0x8007BC70: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007BC74: mflo        $v0
    ctx->r2 = lo;
    // 0x8007BC78: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8007BC7C: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8007BC80: lh          $v0, 0x1A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1A);
    // 0x8007BC84: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007BC88: mflo        $v0
    ctx->r2 = lo;
    // 0x8007BC8C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8007BC90: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x8007BC94: lh          $v0, 0x1C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1C);
    // 0x8007BC98: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007BC9C: mflo        $v0
    ctx->r2 = lo;
    // 0x8007BCA0: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8007BCA4: nop

    // 0x8007BCA8: j           L_8007BCC0
    // 0x8007BCAC: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
        goto L_8007BCC0;
    // 0x8007BCAC: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
L_8007BCB0:
    // 0x8007BCB0: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    // 0x8007BCB4: jal         0x800530E8
    // 0x8007BCB8: nop

    func_800530E8_2E4E8(rdram, ctx);
        goto after_11;
    // 0x8007BCB8: nop

    after_11:
    // 0x8007BCBC: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
L_8007BCC0:
    // 0x8007BCC0: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x8007BCC4: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x8007BCC8: lh          $a0, 0x48($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X48);
    // 0x8007BCCC: lw          $a1, 0x24($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X24);
    // 0x8007BCD0: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8007BCD4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007BCD8: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x8007BCDC: sw          $v1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r3;
    // 0x8007BCE0: lw          $v1, 0x20($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X20);
    // 0x8007BCE4: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8007BCE8: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x8007BCEC: sw          $a1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r5;
    // 0x8007BCF0: lhu         $a1, 0x24($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X24);
    // 0x8007BCF4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8007BCF8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007BCFC: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x8007BD00: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x8007BD04: lhu         $a0, 0x20($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X20);
    // 0x8007BD08: lhu         $v0, 0x9A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X9A);
    // 0x8007BD0C: sh          $a1, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r5;
    // 0x8007BD10: sh          $a1, 0x94($s1)
    MEM_H(0X94, ctx->r17) = ctx->r5;
    // 0x8007BD14: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
    // 0x8007BD18: sh          $v0, 0x9A($s1)
    MEM_H(0X9A, ctx->r17) = ctx->r2;
    // 0x8007BD1C: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    // 0x8007BD20: sh          $v1, 0x90($s1)
    MEM_H(0X90, ctx->r17) = ctx->r3;
    // 0x8007BD24: sh          $a0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r4;
    // 0x8007BD28: j           L_8007BD58
    // 0x8007BD2C: sh          $a0, 0x92($s1)
    MEM_H(0X92, ctx->r17) = ctx->r4;
        goto L_8007BD58;
    // 0x8007BD2C: sh          $a0, 0x92($s1)
    MEM_H(0X92, ctx->r17) = ctx->r4;
L_8007BD30:
    // 0x8007BD30: jal         0x8004F568
    // 0x8007BD34: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_12;
    // 0x8007BD34: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_12:
    // 0x8007BD38: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8007BD3C: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8007BD40: bne         $v0, $zero, L_8007BD60
    if (ctx->r2 != 0) {
        // 0x8007BD44: nop
    
            goto L_8007BD60;
    }
    // 0x8007BD44: nop

    // 0x8007BD48: jal         0x800530E8
    // 0x8007BD4C: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    func_800530E8_2E4E8(rdram, ctx);
        goto after_13;
    // 0x8007BD4C: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    after_13:
    // 0x8007BD50: j           L_8007BD60
    // 0x8007BD54: nop

        goto L_8007BD60;
    // 0x8007BD54: nop

L_8007BD58:
    // 0x8007BD58: jal         0x8007BDE8
    // 0x8007BD5C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8007BDE8_571E8(rdram, ctx);
        goto after_14;
    // 0x8007BD5C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_14:
L_8007BD60:
    // 0x8007BD60: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x8007BD64: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8007BD68: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8007BD6C: jr          $ra
    // 0x8007BD70: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8007BD70: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80045D48_21148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80045D48: lui         $a3, 0x801C
    ctx->r7 = S32(0X801C << 16);
    // 0x80045D4C: lh          $a3, -0x3FAC($a3)
    ctx->r7 = MEM_H(ctx->r7, -0X3FAC);
    // 0x80045D50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80045D54: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80045D58: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x80045D5C: subu        $v1, $a3, $v0
    ctx->r3 = SUB32(ctx->r7, ctx->r2);
    // 0x80045D60: bltzl       $v1, L_80045D68
    if (SIGNED(ctx->r3) < 0) {
        // 0x80045D64: subu        $v1, $v0, $a3
        ctx->r3 = SUB32(ctx->r2, ctx->r7);
            goto L_80045D68;
    }
    goto skip_0;
    // 0x80045D64: subu        $v1, $v0, $a3
    ctx->r3 = SUB32(ctx->r2, ctx->r7);
    skip_0:
L_80045D68:
    // 0x80045D68: lui         $t0, 0x801E
    ctx->r8 = S32(0X801E << 16);
    // 0x80045D6C: lh          $t0, -0x72D0($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X72D0);
    // 0x80045D70: subu        $a3, $t0, $v0
    ctx->r7 = SUB32(ctx->r8, ctx->r2);
    // 0x80045D74: bltz        $a3, L_80045D90
    if (SIGNED(ctx->r7) < 0) {
        // 0x80045D78: subu        $v0, $v0, $t0
        ctx->r2 = SUB32(ctx->r2, ctx->r8);
            goto L_80045D90;
    }
    // 0x80045D78: subu        $v0, $v0, $t0
    ctx->r2 = SUB32(ctx->r2, ctx->r8);
    // 0x80045D7C: slt         $v0, $v1, $a3
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80045D80: beq         $v0, $zero, L_80045DA8
    if (ctx->r2 == 0) {
        // 0x80045D84: nop
    
            goto L_80045DA8;
    }
    // 0x80045D84: nop

    // 0x80045D88: j           L_80045D9C
    // 0x80045D8C: nop

        goto L_80045D9C;
    // 0x80045D8C: nop

L_80045D90:
    // 0x80045D90: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80045D94: beq         $v0, $zero, L_80045DA8
    if (ctx->r2 == 0) {
        // 0x80045D98: nop
    
            goto L_80045DA8;
    }
    // 0x80045D98: nop

L_80045D9C:
    // 0x80045D9C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80045DA0: j           L_80045DB0
    // 0x80045DA4: lhu         $v0, -0x3FAC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAC);
        goto L_80045DB0;
    // 0x80045DA4: lhu         $v0, -0x3FAC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAC);
L_80045DA8:
    // 0x80045DA8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80045DAC: lhu         $v0, -0x72D0($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X72D0);
L_80045DB0:
    // 0x80045DB0: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80045DB4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80045DB8: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80045DBC: lui         $a3, 0x801C
    ctx->r7 = S32(0X801C << 16);
    // 0x80045DC0: lh          $a3, -0x3FA8($a3)
    ctx->r7 = MEM_H(ctx->r7, -0X3FA8);
    // 0x80045DC4: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x80045DC8: subu        $v1, $a3, $v0
    ctx->r3 = SUB32(ctx->r7, ctx->r2);
    // 0x80045DCC: bltzl       $v1, L_80045DD4
    if (SIGNED(ctx->r3) < 0) {
        // 0x80045DD0: subu        $v1, $v0, $a3
        ctx->r3 = SUB32(ctx->r2, ctx->r7);
            goto L_80045DD4;
    }
    goto skip_1;
    // 0x80045DD0: subu        $v1, $v0, $a3
    ctx->r3 = SUB32(ctx->r2, ctx->r7);
    skip_1:
L_80045DD4:
    // 0x80045DD4: lui         $t0, 0x801E
    ctx->r8 = S32(0X801E << 16);
    // 0x80045DD8: lh          $t0, -0x72CC($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X72CC);
    // 0x80045DDC: subu        $a3, $t0, $v0
    ctx->r7 = SUB32(ctx->r8, ctx->r2);
    // 0x80045DE0: bltz        $a3, L_80045DFC
    if (SIGNED(ctx->r7) < 0) {
        // 0x80045DE4: subu        $v0, $v0, $t0
        ctx->r2 = SUB32(ctx->r2, ctx->r8);
            goto L_80045DFC;
    }
    // 0x80045DE4: subu        $v0, $v0, $t0
    ctx->r2 = SUB32(ctx->r2, ctx->r8);
    // 0x80045DE8: slt         $v0, $v1, $a3
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80045DEC: beq         $v0, $zero, L_80045E14
    if (ctx->r2 == 0) {
        // 0x80045DF0: nop
    
            goto L_80045E14;
    }
    // 0x80045DF0: nop

    // 0x80045DF4: j           L_80045E08
    // 0x80045DF8: nop

        goto L_80045E08;
    // 0x80045DF8: nop

L_80045DFC:
    // 0x80045DFC: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80045E00: beq         $v0, $zero, L_80045E14
    if (ctx->r2 == 0) {
        // 0x80045E04: nop
    
            goto L_80045E14;
    }
    // 0x80045E04: nop

L_80045E08:
    // 0x80045E08: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80045E0C: j           L_80045E1C
    // 0x80045E10: lhu         $v0, -0x3FA8($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FA8);
        goto L_80045E1C;
    // 0x80045E10: lhu         $v0, -0x3FA8($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FA8);
L_80045E14:
    // 0x80045E14: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80045E18: lhu         $v0, -0x72CC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X72CC);
L_80045E1C:
    // 0x80045E1C: lhu         $v1, 0x4($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X4);
    // 0x80045E20: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80045E24: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x80045E28: andi        $v0, $a2, 0x2
    ctx->r2 = ctx->r6 & 0X2;
    // 0x80045E2C: beq         $v0, $zero, L_80045E40
    if (ctx->r2 == 0) {
        // 0x80045E30: nop
    
            goto L_80045E40;
    }
    // 0x80045E30: nop

    // 0x80045E34: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80045E38: j           L_80045EA0
    // 0x80045E3C: lhu         $v0, -0x3FAA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAA);
        goto L_80045EA0;
    // 0x80045E3C: lhu         $v0, -0x3FAA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAA);
L_80045E40:
    // 0x80045E40: lui         $a3, 0x801C
    ctx->r7 = S32(0X801C << 16);
    // 0x80045E44: lh          $a3, -0x3FAA($a3)
    ctx->r7 = MEM_H(ctx->r7, -0X3FAA);
    // 0x80045E48: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    // 0x80045E4C: subu        $v1, $a3, $v0
    ctx->r3 = SUB32(ctx->r7, ctx->r2);
    // 0x80045E50: bltzl       $v1, L_80045E58
    if (SIGNED(ctx->r3) < 0) {
        // 0x80045E54: subu        $v1, $v0, $a3
        ctx->r3 = SUB32(ctx->r2, ctx->r7);
            goto L_80045E58;
    }
    goto skip_2;
    // 0x80045E54: subu        $v1, $v0, $a3
    ctx->r3 = SUB32(ctx->r2, ctx->r7);
    skip_2:
L_80045E58:
    // 0x80045E58: lui         $t0, 0x801E
    ctx->r8 = S32(0X801E << 16);
    // 0x80045E5C: lh          $t0, -0x72CE($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X72CE);
    // 0x80045E60: subu        $a3, $t0, $v0
    ctx->r7 = SUB32(ctx->r8, ctx->r2);
    // 0x80045E64: bltz        $a3, L_80045E80
    if (SIGNED(ctx->r7) < 0) {
        // 0x80045E68: subu        $v0, $v0, $t0
        ctx->r2 = SUB32(ctx->r2, ctx->r8);
            goto L_80045E80;
    }
    // 0x80045E68: subu        $v0, $v0, $t0
    ctx->r2 = SUB32(ctx->r2, ctx->r8);
    // 0x80045E6C: slt         $v0, $v1, $a3
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80045E70: beq         $v0, $zero, L_80045E98
    if (ctx->r2 == 0) {
        // 0x80045E74: nop
    
            goto L_80045E98;
    }
    // 0x80045E74: nop

    // 0x80045E78: j           L_80045E8C
    // 0x80045E7C: nop

        goto L_80045E8C;
    // 0x80045E7C: nop

L_80045E80:
    // 0x80045E80: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80045E84: beq         $v0, $zero, L_80045E98
    if (ctx->r2 == 0) {
        // 0x80045E88: nop
    
            goto L_80045E98;
    }
    // 0x80045E88: nop

L_80045E8C:
    // 0x80045E8C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80045E90: j           L_80045EA0
    // 0x80045E94: lhu         $v0, -0x3FAA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAA);
        goto L_80045EA0;
    // 0x80045E94: lhu         $v0, -0x3FAA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAA);
L_80045E98:
    // 0x80045E98: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80045E9C: lhu         $v0, -0x72CE($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X72CE);
L_80045EA0:
    // 0x80045EA0: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x80045EA4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80045EA8: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80045EAC: andi        $v0, $a2, 0x1
    ctx->r2 = ctx->r6 & 0X1;
    // 0x80045EB0: beq         $v0, $zero, L_80045F94
    if (ctx->r2 == 0) {
        // 0x80045EB4: nop
    
            goto L_80045F94;
    }
    // 0x80045EB4: nop

    // 0x80045EB8: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x80045EBC: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x80045EC0: lh          $a2, 0x14($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X14);
    // 0x80045EC4: bgez        $v0, L_80045ED0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80045EC8: addu        $a3, $v0, $zero
        ctx->r7 = ADD32(ctx->r2, 0);
            goto L_80045ED0;
    }
    // 0x80045EC8: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80045ECC: negu        $a3, $a3
    ctx->r7 = SUB32(0, ctx->r7);
L_80045ED0:
    // 0x80045ED0: bltzl       $v1, L_80045ED8
    if (SIGNED(ctx->r3) < 0) {
        // 0x80045ED4: negu        $v1, $v1
        ctx->r3 = SUB32(0, ctx->r3);
            goto L_80045ED8;
    }
    goto skip_3;
    // 0x80045ED4: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    skip_3:
L_80045ED8:
    // 0x80045ED8: bltz        $a2, L_80045EF0
    if (SIGNED(ctx->r6) < 0) {
        // 0x80045EDC: slt         $v0, $v1, $a2
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_80045EF0;
    }
    // 0x80045EDC: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80045EE0: beq         $v0, $zero, L_80045F14
    if (ctx->r2 == 0) {
        // 0x80045EE4: nop
    
            goto L_80045F14;
    }
    // 0x80045EE4: nop

    // 0x80045EE8: j           L_80045F00
    // 0x80045EEC: nop

        goto L_80045F00;
    // 0x80045EEC: nop

L_80045EF0:
    // 0x80045EF0: negu        $v0, $a2
    ctx->r2 = SUB32(0, ctx->r6);
    // 0x80045EF4: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80045EF8: beq         $v0, $zero, L_80045F14
    if (ctx->r2 == 0) {
        // 0x80045EFC: nop
    
            goto L_80045F14;
    }
    // 0x80045EFC: nop

L_80045F00:
    // 0x80045F00: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x80045F04: bltzl       $v0, L_80045F20
    if (SIGNED(ctx->r2) < 0) {
        // 0x80045F08: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80045F20;
    }
    goto skip_4;
    // 0x80045F08: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_4:
    // 0x80045F0C: j           L_80045F24
    // 0x80045F10: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
        goto L_80045F24;
    // 0x80045F10: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
L_80045F14:
    // 0x80045F14: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x80045F18: bltzl       $v0, L_80045F34
    if (SIGNED(ctx->r2) < 0) {
        // 0x80045F1C: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80045F34;
    }
    goto skip_5;
    // 0x80045F1C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_5:
L_80045F20:
    // 0x80045F20: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
L_80045F24:
    // 0x80045F24: beq         $v0, $zero, L_80045F94
    if (ctx->r2 == 0) {
        // 0x80045F28: nop
    
            goto L_80045F94;
    }
    // 0x80045F28: nop

    // 0x80045F2C: j           L_80045F40
    // 0x80045F30: nop

        goto L_80045F40;
    // 0x80045F30: nop

L_80045F34:
    // 0x80045F34: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80045F38: beq         $v0, $zero, L_80045F94
    if (ctx->r2 == 0) {
        // 0x80045F3C: nop
    
            goto L_80045F94;
    }
    // 0x80045F3C: nop

L_80045F40:
    // 0x80045F40: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80045F44: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x80045F48: andi        $v0, $v0, 0x30
    ctx->r2 = ctx->r2 & 0X30;
    // 0x80045F4C: bne         $v0, $zero, L_80045F94
    if (ctx->r2 != 0) {
        // 0x80045F50: nop
    
            goto L_80045F94;
    }
    // 0x80045F50: nop

    // 0x80045F54: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x80045F58: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x80045F5C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80045F60: sh          $v0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r2;
    // 0x80045F64: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x80045F68: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x80045F6C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80045F70: sh          $v0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r2;
    // 0x80045F74: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x80045F78: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80045F7C: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80045F80: sh          $v0, -0x26B8($at)
    MEM_H(-0X26B8, ctx->r1) = ctx->r2;
    // 0x80045F84: jal         0x8004643C
    // 0x80045F88: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_8004643C_2183C(rdram, ctx);
        goto after_0;
    // 0x80045F88: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x80045F8C: j           L_800460CC
    // 0x80045F90: nop

        goto L_800460CC;
    // 0x80045F90: nop

L_80045F94:
    // 0x80045F94: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x80045F98: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x80045F9C: bgez        $v0, L_80045FA8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80045FA0: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_80045FA8;
    }
    // 0x80045FA0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80045FA4: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
L_80045FA8:
    // 0x80045FA8: bltz        $v1, L_80045FC0
    if (SIGNED(ctx->r3) < 0) {
        // 0x80045FAC: slt         $v0, $v1, $a2
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_80045FC0;
    }
    // 0x80045FAC: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80045FB0: beq         $v0, $zero, L_80045FD0
    if (ctx->r2 == 0) {
        // 0x80045FB4: nop
    
            goto L_80045FD0;
    }
    // 0x80045FB4: nop

    // 0x80045FB8: j           L_80045FE4
    // 0x80045FBC: nop

        goto L_80045FE4;
    // 0x80045FBC: nop

L_80045FC0:
    // 0x80045FC0: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x80045FC4: slt         $v0, $v0, $a2
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80045FC8: bne         $v0, $zero, L_80045FE4
    if (ctx->r2 != 0) {
        // 0x80045FCC: nop
    
            goto L_80045FE4;
    }
    // 0x80045FCC: nop

L_80045FD0:
    // 0x80045FD0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80045FD4: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x80045FD8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80045FDC: beq         $v0, $zero, L_80046070
    if (ctx->r2 == 0) {
        // 0x80045FE0: nop
    
            goto L_80046070;
    }
    // 0x80045FE0: nop

L_80045FE4:
    // 0x80045FE4: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x80045FE8: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x80045FEC: bgez        $v0, L_80045FF8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80045FF0: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_80045FF8;
    }
    // 0x80045FF0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80045FF4: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
L_80045FF8:
    // 0x80045FF8: bltz        $v1, L_80046010
    if (SIGNED(ctx->r3) < 0) {
        // 0x80045FFC: slt         $v0, $a2, $v1
        ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_80046010;
    }
    // 0x80045FFC: slt         $v0, $a2, $v1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80046000: beq         $v0, $zero, L_80046020
    if (ctx->r2 == 0) {
        // 0x80046004: nop
    
            goto L_80046020;
    }
    // 0x80046004: nop

    // 0x80046008: j           L_80046034
    // 0x8004600C: nop

        goto L_80046034;
    // 0x8004600C: nop

L_80046010:
    // 0x80046010: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x80046014: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80046018: bne         $v0, $zero, L_80046034
    if (ctx->r2 != 0) {
        // 0x8004601C: nop
    
            goto L_80046034;
    }
    // 0x8004601C: nop

L_80046020:
    // 0x80046020: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80046024: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x80046028: andi        $v0, $v0, 0xC
    ctx->r2 = ctx->r2 & 0XC;
    // 0x8004602C: beq         $v0, $zero, L_800460A0
    if (ctx->r2 == 0) {
        // 0x80046030: nop
    
            goto L_800460A0;
    }
    // 0x80046030: nop

L_80046034:
    // 0x80046034: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x80046038: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x8004603C: bgez        $v0, L_80046048
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80046040: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_80046048;
    }
    // 0x80046040: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80046044: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
L_80046048:
    // 0x80046048: bltz        $v1, L_80046060
    if (SIGNED(ctx->r3) < 0) {
        // 0x8004604C: slt         $v0, $a2, $v1
        ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_80046060;
    }
    // 0x8004604C: slt         $v0, $a2, $v1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80046050: beq         $v0, $zero, L_800460A0
    if (ctx->r2 == 0) {
        // 0x80046054: nop
    
            goto L_800460A0;
    }
    // 0x80046054: nop

    // 0x80046058: j           L_80046070
    // 0x8004605C: nop

        goto L_80046070;
    // 0x8004605C: nop

L_80046060:
    // 0x80046060: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x80046064: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80046068: beq         $v0, $zero, L_800460A0
    if (ctx->r2 == 0) {
        // 0x8004606C: nop
    
            goto L_800460A0;
    }
    // 0x8004606C: nop

L_80046070:
    // 0x80046070: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80046074: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x80046078: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004607C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80046080: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80046084: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x80046088: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8004608C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80046090: jal         0x800463CC
    // 0x80046094: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    func_800463CC_217CC(rdram, ctx);
        goto after_1;
    // 0x80046094: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    after_1:
    // 0x80046098: j           L_800460CC
    // 0x8004609C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_800460CC;
    // 0x8004609C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800460A0:
    // 0x800460A0: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x800460A4: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x800460A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800460AC: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x800460B0: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x800460B4: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x800460B8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x800460BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800460C0: jal         0x80046404
    // 0x800460C4: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    func_80046404_21804(rdram, ctx);
        goto after_2;
    // 0x800460C4: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    after_2:
    // 0x800460C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800460CC:
    // 0x800460CC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x800460D0: jr          $ra
    // 0x800460D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800460D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004A400_25800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A400: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8004A404: lhu         $v1, 0x4A60($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4A60);
    // 0x8004A408: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004A40C: lbu         $v0, -0x3993($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3993);
    // 0x8004A410: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A414: sb          $zero, -0x3991($at)
    MEM_B(-0X3991, ctx->r1) = 0;
    // 0x8004A418: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8004A41C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8004A420: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004A424: sh          $v1, 0x4A1E($at)
    MEM_H(0X4A1E, ctx->r1) = ctx->r3;
    // 0x8004A428: beq         $v0, $zero, L_8004A444
    if (ctx->r2 == 0) {
        // 0x8004A42C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8004A444;
    }
    // 0x8004A42C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8004A430: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A434: sb          $v0, -0x3993($at)
    MEM_B(-0X3993, ctx->r1) = ctx->r2;
    // 0x8004A438: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8004A43C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A440: sb          $v0, -0x3997($at)
    MEM_B(-0X3997, ctx->r1) = ctx->r2;
L_8004A444:
    // 0x8004A444: jr          $ra
    // 0x8004A448: nop

    TRACE_RETURN()
    return;
    // 0x8004A448: nop

;}
RECOMP_FUNC void func_80079700_54B00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80079700: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80079704: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80079708: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8007970C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80079710: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80079714: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80079718: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8007971C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80079720: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x80079724: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80079728: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8007972C: xori        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 ^ 0X2;
    // 0x80079730: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
    // 0x80079734: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x80079738: bne         $v1, $zero, L_8007974C
    if (ctx->r3 != 0) {
        // 0x8007973C: sb          $v0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r2;
            goto L_8007974C;
    }
    // 0x8007973C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80079740: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80079744: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80079748: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8007974C:
    // 0x8007974C: addiu       $s2, $s1, 0x38
    ctx->r18 = ADD32(ctx->r17, 0X38);
    // 0x80079750: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80079754: lbu         $a1, 0x3($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X3);
    // 0x80079758: lh          $a2, 0x2E($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X2E);
    // 0x8007975C: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    // 0x80079760: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80079764: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x80079768: addiu       $s4, $s4, -0x2ED4
    ctx->r20 = ADD32(ctx->r20, -0X2ED4);
    // 0x8007976C: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x80079770: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80079774: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80079778: sll         $a1, $v1, 1
    ctx->r5 = S32(ctx->r3 << 1);
    // 0x8007977C: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80079780: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80079784: addu        $a1, $a1, $s4
    ctx->r5 = ADD32(ctx->r5, ctx->r20);
    // 0x80079788: jal         0x8003E964
    // 0x8007978C: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    func_8003E964_19D64(rdram, ctx);
        goto after_0;
    // 0x8007978C: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    after_0:
    // 0x80079790: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80079794: addiu       $s3, $sp, 0x10
    ctx->r19 = ADD32(ctx->r29, 0X10);
    // 0x80079798: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8007979C: lbu         $a2, 0x3($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X3);
    // 0x800797A0: sll         $a1, $v1, 1
    ctx->r5 = S32(ctx->r3 << 1);
    // 0x800797A4: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x800797A8: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x800797AC: sll         $v1, $a2, 1
    ctx->r3 = S32(ctx->r6 << 1);
    // 0x800797B0: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x800797B4: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x800797B8: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x800797BC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x800797C0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x800797C4: lh          $v1, -0x2ECA($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X2ECA);
    // 0x800797C8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x800797CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x800797D0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800797D4: jal         0x8009A3B4
    // 0x800797D8: subu        $s0, $v0, $v1
    ctx->r16 = SUB32(ctx->r2, ctx->r3);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x800797D8: subu        $s0, $v0, $v1
    ctx->r16 = SUB32(ctx->r2, ctx->r3);
    after_1:
    // 0x800797DC: lh          $v0, 0x3A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3A);
    // 0x800797E0: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800797E4: beql        $v0, $zero, L_8007980C
    if (ctx->r2 == 0) {
        // 0x800797E8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8007980C;
    }
    goto skip_0;
    // 0x800797E8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x800797EC: lhu         $v0, 0x2E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2E);
    // 0x800797F0: lhu         $a0, 0x34($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X34);
    // 0x800797F4: lhu         $v1, 0x3A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3A);
    // 0x800797F8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800797FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80079800: sh          $v0, 0x2E($s1)
    MEM_H(0X2E, ctx->r17) = ctx->r2;
    // 0x80079804: sh          $v1, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r3;
    // 0x80079808: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_8007980C:
    // 0x8007980C: lbu         $a3, 0x3($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X3);
    // 0x80079810: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80079814: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80079818: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8007981C: sll         $v0, $a3, 1
    ctx->r2 = S32(ctx->r7 << 1);
    // 0x80079820: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80079824: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80079828: sll         $a3, $v1, 1
    ctx->r7 = S32(ctx->r3 << 1);
    // 0x8007982C: addu        $a3, $a3, $v1
    ctx->r7 = ADD32(ctx->r7, ctx->r3);
    // 0x80079830: sll         $a3, $a3, 2
    ctx->r7 = S32(ctx->r7 << 2);
    // 0x80079834: addu        $a3, $a3, $s4
    ctx->r7 = ADD32(ctx->r7, ctx->r20);
    // 0x80079838: jal         0x800410F0
    // 0x8007983C: addu        $a3, $v0, $a3
    ctx->r7 = ADD32(ctx->r2, ctx->r7);
    func_800410F0_1C4F0(rdram, ctx);
        goto after_2;
    // 0x8007983C: addu        $a3, $v0, $a3
    ctx->r7 = ADD32(ctx->r2, ctx->r7);
    after_2:
    // 0x80079840: jal         0x80079AC8
    // 0x80079844: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80079AC8_54EC8(rdram, ctx);
        goto after_3;
    // 0x80079844: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x80079848: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8007984C: bne         $v0, $zero, L_8007985C
    if (ctx->r2 != 0) {
        // 0x80079850: nop
    
            goto L_8007985C;
    }
    // 0x80079850: nop

    // 0x80079854: jal         0x80079A68
    // 0x80079858: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80079A68_54E68(rdram, ctx);
        goto after_4;
    // 0x80079858: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
L_8007985C:
    // 0x8007985C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80079860: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80079864: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80079868: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8007986C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80079870: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80079874: jr          $ra
    // 0x80079878: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80079878: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8006FAC0_4AEC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006FAC0: jr          $ra
    // 0x8006FAC4: nop

    TRACE_RETURN()
    return;
    // 0x8006FAC4: nop

;}
