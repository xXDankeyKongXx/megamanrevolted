#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8023385C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023385C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233860: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233864: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233868: jal         0x8004F144
    // 0x8023386C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8023386C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80233870: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80233874: beql        $a1, $zero, L_802338A8
    if (ctx->r5 == 0) {
        // 0x80233878: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_802338A8;
    }
    goto skip_0;
    // 0x80233878: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_0:
    // 0x8023387C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80233880: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233884: beq         $v0, $zero, L_8023389C
    if (ctx->r2 == 0) {
        // 0x80233888: nop
    
            goto L_8023389C;
    }
    // 0x80233888: nop

    // 0x8023388C: jal         0x802338C0
    // 0x80233890: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802338C0_ovl31(rdram, ctx);
        goto after_1;
    // 0x80233890: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80233894: j           L_802338A8
    // 0x80233898: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_802338A8;
    // 0x80233898: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_8023389C:
    // 0x8023389C: jal         0x80233900
    // 0x802338A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80233900_ovl31(rdram, ctx);
        goto after_2;
    // 0x802338A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802338A4: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_802338A8:
    // 0x802338A8: jal         0x8004F4F8
    // 0x802338AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_3;
    // 0x802338AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802338B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802338B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802338B8: jr          $ra
    // 0x802338BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802338BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233930_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233930: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233934: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233938: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023393C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233940: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233944: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233948: lw          $v0, -0x7980($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7980);
    // 0x8023394C: jalr        $v0
    // 0x80233950: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80233950: nop

    after_0:
    // 0x80233954: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233958: jr          $ra
    // 0x8023395C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023395C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802354C4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802354C4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802354C8: lb          $v1, 0x47CC($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X47CC);
    // 0x802354CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802354D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802354D4: bne         $v1, $v0, L_802354E4
    if (ctx->r3 != ctx->r2) {
        // 0x802354D8: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_802354E4;
    }
    // 0x802354D8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802354DC: jal         0x8004F684
    // 0x802354E0: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x802354E0: nop

    after_0:
L_802354E4:
    // 0x802354E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802354E8: jr          $ra
    // 0x802354EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802354EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232518_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232518: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023251C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232520: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80232524: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232528: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023252C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232530: lw          $v0, -0x79F0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X79F0);
    // 0x80232534: jalr        $v0
    // 0x80232538: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80232538: nop

    after_0:
    // 0x8023253C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80232540: jr          $ra
    // 0x80232544: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232544: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B12C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B12C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B130: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B134: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B138: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B13C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B140: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B144: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B148: beq         $v1, $v0, L_8022B234
    if (ctx->r3 == ctx->r2) {
        // 0x8022B14C: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022B234;
    }
    // 0x8022B14C: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022B150: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022B154: beql        $v0, $zero, L_8022B16C
    if (ctx->r2 == 0) {
        // 0x8022B158: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022B16C;
    }
    goto skip_0;
    // 0x8022B158: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022B15C: beq         $v1, $zero, L_8022B184
    if (ctx->r3 == 0) {
        // 0x8022B160: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B184;
    }
    // 0x8022B160: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B164: j           L_8022B3B0
    // 0x8022B168: nop

        goto L_8022B3B0;
    // 0x8022B168: nop

L_8022B16C:
    // 0x8022B16C: beq         $v1, $v0, L_8022B244
    if (ctx->r3 == ctx->r2) {
        // 0x8022B170: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022B244;
    }
    // 0x8022B170: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B174: beq         $v1, $v0, L_8022B360
    if (ctx->r3 == ctx->r2) {
        // 0x8022B178: nop
    
            goto L_8022B360;
    }
    // 0x8022B178: nop

    // 0x8022B17C: j           L_8022B3B0
    // 0x8022B180: nop

        goto L_8022B3B0;
    // 0x8022B180: nop

L_8022B184:
    // 0x8022B184: lhu         $v1, 0x328($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X328);
    // 0x8022B188: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8022B18C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B190: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022B194: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B198: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x8022B19C: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x8022B1A0: andi        $a0, $a0, 0x40
    ctx->r4 = ctx->r4 & 0X40;
    // 0x8022B1A4: beq         $a0, $zero, L_8022B200
    if (ctx->r4 == 0) {
        // 0x8022B1A8: sh          $v1, 0x328($s0)
        MEM_H(0X328, ctx->r16) = ctx->r3;
            goto L_8022B200;
    }
    // 0x8022B1A8: sh          $v1, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r3;
    // 0x8022B1AC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022B1B0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022B1B4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022B1B8: addiu       $v0, $v0, -0x7D84
    ctx->r2 = ADD32(ctx->r2, -0X7D84);
    // 0x8022B1BC: sw          $v0, 0x364($s0)
    MEM_W(0X364, ctx->r16) = ctx->r2;
    // 0x8022B1C0: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8022B1C4: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022B1C8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8022B1CC: lw          $a1, 0x298($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X298);
    // 0x8022B1D0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022B1D4: sh          $v0, 0x32A($s0)
    MEM_H(0X32A, ctx->r16) = ctx->r2;
    // 0x8022B1D8: lh          $v0, 0x32E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X32E);
    // 0x8022B1DC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022B1E0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022B1E4: sh          $a0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r4;
    // 0x8022B1E8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022B1EC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022B1F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B1F4: lbu         $v0, 0xB($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB);
    // 0x8022B1F8: j           L_8022B21C
    // 0x8022B1FC: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
        goto L_8022B21C;
    // 0x8022B1FC: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
L_8022B200:
    // 0x8022B200: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022B204: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022B208: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022B20C: addiu       $v0, $v0, -0x7D90
    ctx->r2 = ADD32(ctx->r2, -0X7D90);
    // 0x8022B210: sw          $v0, 0x364($s0)
    MEM_W(0X364, ctx->r16) = ctx->r2;
    // 0x8022B214: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022B218: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
L_8022B21C:
    // 0x8022B21C: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8022B220: bgtz        $v0, L_8022B234
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022B224: nop
    
            goto L_8022B234;
    }
    // 0x8022B224: nop

    // 0x8022B228: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B22C: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022B230: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022B234:
    // 0x8022B234: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8022B238: bgez        $v0, L_8022B244
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B23C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022B244;
    }
    // 0x8022B23C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B240: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022B244:
    // 0x8022B244: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x8022B248: lw          $a2, 0x3C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X3C);
    // 0x8022B24C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B250: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022B254: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022B258: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022B25C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022B260: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022B264: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022B268: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x8022B26C: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022B270: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022B274: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022B278: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x8022B27C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022B280: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022B284: jal         0x8004DA90
    // 0x8022B288: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022B288: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022B28C: jal         0x80040F30
    // 0x8022B290: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022B290: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022B294: beq         $v0, $zero, L_8022B3B0
    if (ctx->r2 == 0) {
        // 0x8022B298: sw          $v0, 0x48($s1)
        MEM_W(0X48, ctx->r17) = ctx->r2;
            goto L_8022B3B0;
    }
    // 0x8022B298: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    // 0x8022B29C: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022B2A0: bnel        $v0, $zero, L_8022B2A8
    if (ctx->r2 != 0) {
        // 0x8022B2A4: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022B2A8;
    }
    goto skip_1;
    // 0x8022B2A4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_8022B2A8:
    // 0x8022B2A8: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x8022B2AC: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8022B2B0: beq         $v0, $zero, L_8022B3B0
    if (ctx->r2 == 0) {
        // 0x8022B2B4: addiu       $a0, $zero, 0xDE
        ctx->r4 = ADD32(0, 0XDE);
            goto L_8022B3B0;
    }
    // 0x8022B2B4: addiu       $a0, $zero, 0xDE
    ctx->r4 = ADD32(0, 0XDE);
    // 0x8022B2B8: jal         0x8002A33C
    // 0x8022B2BC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022B2BC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8022B2C0: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022B2C4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022B2C8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8022B2CC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B2D0: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x8022B2D4: beq         $v0, $zero, L_8022B32C
    if (ctx->r2 == 0) {
        // 0x8022B2D8: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022B32C;
    }
    // 0x8022B2D8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022B2DC: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022B2E0: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8022B2E4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022B2E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B2EC: andi        $a0, $a0, 0x40
    ctx->r4 = ctx->r4 & 0X40;
    // 0x8022B2F0: beq         $a0, $zero, L_8022B300
    if (ctx->r4 == 0) {
        // 0x8022B2F4: sb          $v0, 0xAC($s0)
        MEM_B(0XAC, ctx->r16) = ctx->r2;
            goto L_8022B300;
    }
    // 0x8022B2F4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B2F8: j           L_8022B304
    // 0x8022B2FC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022B304;
    // 0x8022B2FC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022B300:
    // 0x8022B300: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8022B304:
    // 0x8022B304: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022B308: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8022B30C: lw          $v0, 0x3C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C);
    // 0x8022B310: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B314: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B318: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022B31C: ori         $v1, $v1, 0x8
    ctx->r3 = ctx->r3 | 0X8;
    // 0x8022B320: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    // 0x8022B324: j           L_8022B3B0
    // 0x8022B328: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022B3B0;
    // 0x8022B328: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022B32C:
    // 0x8022B32C: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8022B330: bgtz        $v0, L_8022B348
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022B334: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022B348;
    }
    // 0x8022B334: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B338: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B33C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022B340: j           L_8022B3B0
    // 0x8022B344: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8022B3B0;
    // 0x8022B344: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022B348:
    // 0x8022B348: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B34C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022B350: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B354: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8022B358: j           L_8022B3B0
    // 0x8022B35C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022B3B0;
    // 0x8022B35C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022B360:
    // 0x8022B360: lhu         $v0, 0x32C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32C);
    // 0x8022B364: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B368: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x8022B36C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B370: bgez        $v0, L_8022B388
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B374: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022B388;
    }
    // 0x8022B374: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B378: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022B37C: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x8022B380: j           L_8022B3B0
    // 0x8022B384: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
        goto L_8022B3B0;
    // 0x8022B384: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_8022B388:
    // 0x8022B388: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B38C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022B390: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022B394: jal         0x8004F820
    // 0x8022B398: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022B398: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_3:
    // 0x8022B39C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B3A0: sh          $v0, 0x36C($s0)
    MEM_H(0X36C, ctx->r16) = ctx->r2;
    // 0x8022B3A4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B3A8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B3AC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022B3B0:
    // 0x8022B3B0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B3B4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B3B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B3BC: jr          $ra
    // 0x8022B3C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B3C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225E34_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E34: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80225E38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80225E3C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225E40: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80225E44: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80225E48: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80225E4C: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80225E50: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80225E54: bne         $v0, $zero, L_80226698
    if (ctx->r2 != 0) {
        // 0x80225E58: addiu       $s1, $s0, 0x3E0
        ctx->r17 = ADD32(ctx->r16, 0X3E0);
            goto L_80226698;
    }
    // 0x80225E58: addiu       $s1, $s0, 0x3E0
    ctx->r17 = ADD32(ctx->r16, 0X3E0);
    // 0x80225E5C: lbu         $a0, 0x439($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X439);
    // 0x80225E60: jal         0x80053ED8
    // 0x80225E64: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x80225E64: nop

    after_0:
    // 0x80225E68: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x80225E6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225E70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225E74: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80225E78: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80225E7C: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x80225E80: jal         0x8004DA90
    // 0x80225E84: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80225E84: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_1:
    // 0x80225E88: lh          $v1, 0x42C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X42C);
    // 0x80225E8C: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80225E90: bne         $v1, $v0, L_80225EB8
    if (ctx->r3 != ctx->r2) {
        // 0x80225E94: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_80225EB8;
    }
    // 0x80225E94: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80225E98: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80225E9C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225EA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225EA4: sh          $zero, 0x42C($s0)
    MEM_H(0X42C, ctx->r16) = 0;
    // 0x80225EA8: jal         0x80050294
    // 0x80225EAC: sb          $zero, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80225EAC: sb          $zero, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = 0;
    after_2:
    // 0x80225EB0: j           L_80225ED0
    // 0x80225EB4: nop

        goto L_80225ED0;
    // 0x80225EB4: nop

L_80225EB8:
    // 0x80225EB8: addiu       $v0, $a0, -0x100
    ctx->r2 = ADD32(ctx->r4, -0X100);
    // 0x80225EBC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80225EC0: sltiu       $v0, $v0, 0x40
    ctx->r2 = ctx->r2 < 0X40 ? 1 : 0;
    // 0x80225EC4: beq         $v0, $zero, L_80225ED0
    if (ctx->r2 == 0) {
        // 0x80225EC8: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80225ED0;
    }
    // 0x80225EC8: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80225ECC: sh          $v0, 0x42C($s0)
    MEM_H(0X42C, ctx->r16) = ctx->r2;
L_80225ED0:
    // 0x80225ED0: lh          $v0, 0x64($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X64);
    // 0x80225ED4: bne         $v0, $zero, L_802262E8
    if (ctx->r2 != 0) {
        // 0x80225ED8: addiu       $v0, $zero, -0xF
        ctx->r2 = ADD32(0, -0XF);
            goto L_802262E8;
    }
    // 0x80225ED8: addiu       $v0, $zero, -0xF
    ctx->r2 = ADD32(0, -0XF);
    // 0x80225EDC: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x80225EE0: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80225EE4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80225EE8: sll         $a0, $v1, 1
    ctx->r4 = S32(ctx->r3 << 1);
    // 0x80225EEC: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80225EF0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80225EF4: lbu         $v1, -0x7F40($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X7F40);
    // 0x80225EF8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225EFC: bne         $v1, $v0, L_80225FAC
    if (ctx->r3 != ctx->r2) {
        // 0x80225F00: nop
    
            goto L_80225FAC;
    }
    // 0x80225F00: nop

    // 0x80225F04: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x80225F08: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80225F0C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80225F10: lh          $v1, -0x7F46($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7F46);
    // 0x80225F14: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80225F18: bne         $v0, $zero, L_80226698
    if (ctx->r2 != 0) {
        // 0x80225F1C: nop
    
            goto L_80226698;
    }
    // 0x80225F1C: nop

    // 0x80225F20: lhu         $v0, 0x52($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X52);
    // 0x80225F24: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80225F28: beq         $v0, $zero, L_80225F70
    if (ctx->r2 == 0) {
        // 0x80225F2C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80225F70;
    }
    // 0x80225F2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225F30: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80225F34: jal         0x802278C4
    // 0x80225F38: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    func_802278C4_ovl31(rdram, ctx);
        goto after_3;
    // 0x80225F38: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    after_3:
    // 0x80225F3C: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x80225F40: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80225F44: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80225F48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225F4C: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x80225F50: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80225F54: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225F58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225F5C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80225F60: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80225F64: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80225F68: j           L_80226688
    // 0x80225F6C: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
        goto L_80226688;
    // 0x80225F6C: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_80225F70:
    // 0x80225F70: jal         0x802278C4
    // 0x80225F74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802278C4_ovl31(rdram, ctx);
        goto after_4;
    // 0x80225F74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80225F78: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x80225F7C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80225F80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225F84: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x80225F88: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80225F8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225F90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225F94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225F98: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80225F9C: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x80225FA0: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x80225FA4: j           L_80226690
    // 0x80225FA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80226690;
    // 0x80225FA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80225FAC:
    // 0x80225FAC: bne         $v1, $zero, L_80226008
    if (ctx->r3 != 0) {
        // 0x80225FB0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80226008;
    }
    // 0x80225FB0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225FB4: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80225FB8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80225FBC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80225FC0: lh          $v1, -0x7F48($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7F48);
    // 0x80225FC4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80225FC8: bne         $v0, $zero, L_80226698
    if (ctx->r2 != 0) {
        // 0x80225FCC: nop
    
            goto L_80226698;
    }
    // 0x80225FCC: nop

    // 0x80225FD0: jal         0x802278C4
    // 0x80225FD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802278C4_ovl31(rdram, ctx);
        goto after_5;
    // 0x80225FD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80225FD8: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x80225FDC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80225FE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225FE4: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x80225FE8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80225FEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225FF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225FF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225FF8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80225FFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226000: j           L_80226690
    // 0x80226004: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
        goto L_80226690;
    // 0x80226004: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
L_80226008:
    // 0x80226008: bne         $v1, $v0, L_80226068
    if (ctx->r3 != ctx->r2) {
        // 0x8022600C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226068;
    }
    // 0x8022600C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226010: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x80226014: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226018: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022601C: lh          $v0, -0x7F46($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7F46);
    // 0x80226020: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80226024: bne         $v0, $zero, L_80226698
    if (ctx->r2 != 0) {
        // 0x80226028: nop
    
            goto L_80226698;
    }
    // 0x80226028: nop

    // 0x8022602C: jal         0x802278C4
    // 0x80226030: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802278C4_ovl31(rdram, ctx);
        goto after_6;
    // 0x80226030: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80226034: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x80226038: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022603C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226040: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x80226044: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226048: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022604C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226050: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226054: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80226058: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022605C: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x80226060: j           L_80226690
    // 0x80226064: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80226690;
    // 0x80226064: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80226068:
    // 0x80226068: bne         $v1, $v0, L_802260E4
    if (ctx->r3 != ctx->r2) {
        // 0x8022606C: nop
    
            goto L_802260E4;
    }
    // 0x8022606C: nop

    // 0x80226070: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80226074: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226078: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022607C: lh          $v0, -0x7F48($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7F48);
    // 0x80226080: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80226084: bne         $v0, $zero, L_802260E4
    if (ctx->r2 != 0) {
        // 0x80226088: nop
    
            goto L_802260E4;
    }
    // 0x80226088: nop

    // 0x8022608C: lhu         $v0, 0x52($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X52);
    // 0x80226090: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80226094: beq         $v0, $zero, L_802260A8
    if (ctx->r2 == 0) {
        // 0x80226098: nop
    
            goto L_802260A8;
    }
    // 0x80226098: nop

    // 0x8022609C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x802260A0: j           L_80226698
    // 0x802260A4: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
        goto L_80226698;
    // 0x802260A4: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
L_802260A8:
    // 0x802260A8: jal         0x802278C4
    // 0x802260AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802278C4_ovl31(rdram, ctx);
        goto after_7;
    // 0x802260AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x802260B0: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x802260B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802260B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802260BC: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x802260C0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802260C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802260C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802260CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802260D0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802260D4: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802260D8: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x802260DC: j           L_80226690
    // 0x802260E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80226690;
    // 0x802260E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802260E4:
    // 0x802260E4: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x802260E8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802260EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802260F0: sll         $a0, $v1, 1
    ctx->r4 = S32(ctx->r3 << 1);
    // 0x802260F4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802260F8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802260FC: lbu         $v1, -0x7F40($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X7F40);
    // 0x80226100: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80226104: bne         $v1, $v0, L_80226164
    if (ctx->r3 != ctx->r2) {
        // 0x80226108: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80226164;
    }
    // 0x80226108: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022610C: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80226110: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226114: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80226118: lh          $v0, -0x7F48($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7F48);
    // 0x8022611C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80226120: bne         $v0, $zero, L_80226698
    if (ctx->r2 != 0) {
        // 0x80226124: nop
    
            goto L_80226698;
    }
    // 0x80226124: nop

    // 0x80226128: jal         0x802278C4
    // 0x8022612C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802278C4_ovl31(rdram, ctx);
        goto after_8;
    // 0x8022612C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80226130: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x80226134: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80226138: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022613C: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x80226140: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226144: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226148: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022614C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226150: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80226154: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80226158: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x8022615C: j           L_80226690
    // 0x80226160: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80226690;
    // 0x80226160: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80226164:
    // 0x80226164: bne         $v1, $v0, L_802261C4
    if (ctx->r3 != ctx->r2) {
        // 0x80226168: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_802261C4;
    }
    // 0x80226168: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022616C: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x80226170: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226174: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80226178: lh          $v1, -0x7F46($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7F46);
    // 0x8022617C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80226180: bne         $v0, $zero, L_80226698
    if (ctx->r2 != 0) {
        // 0x80226184: nop
    
            goto L_80226698;
    }
    // 0x80226184: nop

    // 0x80226188: jal         0x802278C4
    // 0x8022618C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802278C4_ovl31(rdram, ctx);
        goto after_9;
    // 0x8022618C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80226190: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x80226194: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80226198: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022619C: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x802261A0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802261A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802261A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802261AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802261B0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802261B4: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x802261B8: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x802261BC: j           L_80226690
    // 0x802261C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80226690;
    // 0x802261C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802261C4:
    // 0x802261C4: bne         $v1, $v0, L_80226238
    if (ctx->r3 != ctx->r2) {
        // 0x802261C8: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80226238;
    }
    // 0x802261C8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802261CC: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x802261D0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802261D4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802261D8: lh          $v1, -0x7F48($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7F48);
    // 0x802261DC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802261E0: bne         $v0, $zero, L_80226698
    if (ctx->r2 != 0) {
        // 0x802261E4: nop
    
            goto L_80226698;
    }
    // 0x802261E4: nop

    // 0x802261E8: lhu         $v0, 0x52($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X52);
    // 0x802261EC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802261F0: beq         $v0, $zero, L_80226230
    if (ctx->r2 == 0) {
        // 0x802261F4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226230;
    }
    // 0x802261F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802261F8: jal         0x802278C4
    // 0x802261FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802278C4_ovl31(rdram, ctx);
        goto after_10;
    // 0x802261FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
    // 0x80226200: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x80226204: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80226208: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022620C: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x80226210: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226214: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226218: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022621C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226220: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80226224: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226228: j           L_80226690
    // 0x8022622C: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
        goto L_80226690;
    // 0x8022622C: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
L_80226230:
    // 0x80226230: j           L_80226698
    // 0x80226234: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
        goto L_80226698;
    // 0x80226234: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
L_80226238:
    // 0x80226238: bne         $v1, $v0, L_80226698
    if (ctx->r3 != ctx->r2) {
        // 0x8022623C: nop
    
            goto L_80226698;
    }
    // 0x8022623C: nop

    // 0x80226240: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x80226244: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226248: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022624C: lh          $v0, -0x7F46($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7F46);
    // 0x80226250: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80226254: bne         $v0, $zero, L_80226698
    if (ctx->r2 != 0) {
        // 0x80226258: nop
    
            goto L_80226698;
    }
    // 0x80226258: nop

    // 0x8022625C: lhu         $v0, 0x52($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X52);
    // 0x80226260: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80226264: beq         $v0, $zero, L_802262AC
    if (ctx->r2 == 0) {
        // 0x80226268: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802262AC;
    }
    // 0x80226268: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022626C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80226270: jal         0x802278C4
    // 0x80226274: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    func_802278C4_ovl31(rdram, ctx);
        goto after_11;
    // 0x80226274: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    after_11:
    // 0x80226278: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x8022627C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80226280: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80226284: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226288: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x8022628C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80226290: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226294: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226298: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022629C: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x802262A0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802262A4: j           L_80226688
    // 0x802262A8: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
        goto L_80226688;
    // 0x802262A8: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_802262AC:
    // 0x802262AC: jal         0x802278C4
    // 0x802262B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802278C4_ovl31(rdram, ctx);
        goto after_12;
    // 0x802262B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x802262B4: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x802262B8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802262BC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802262C0: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x802262C4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802262C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802262CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802262D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802262D4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802262D8: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x802262DC: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x802262E0: j           L_80226690
    // 0x802262E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80226690;
    // 0x802262E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802262E8:
    // 0x802262E8: lbu         $v1, 0x58($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X58);
    // 0x802262EC: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x802262F0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802262F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802262F8: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x802262FC: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226300: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80226304: lbu         $v1, -0x7F40($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X7F40);
    // 0x80226308: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022630C: bne         $v1, $v0, L_802263B8
    if (ctx->r3 != ctx->r2) {
        // 0x80226310: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802263B8;
    }
    // 0x80226310: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226314: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x80226318: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022631C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80226320: lh          $v0, -0x7F46($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7F46);
    // 0x80226324: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80226328: bne         $v0, $zero, L_80226698
    if (ctx->r2 != 0) {
        // 0x8022632C: nop
    
            goto L_80226698;
    }
    // 0x8022632C: nop

    // 0x80226330: lhu         $v0, 0x52($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X52);
    // 0x80226334: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80226338: beq         $v0, $zero, L_80226384
    if (ctx->r2 == 0) {
        // 0x8022633C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226384;
    }
    // 0x8022633C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226340: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80226344: jal         0x802278C4
    // 0x80226348: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    func_802278C4_ovl31(rdram, ctx);
        goto after_13;
    // 0x80226348: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    after_13:
    // 0x8022634C: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x80226350: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80226354: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226358: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x8022635C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226360: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226364: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226368: sh          $zero, 0x64($s0)
    MEM_H(0X64, ctx->r16) = 0;
    // 0x8022636C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226370: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80226374: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80226378: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x8022637C: j           L_80226690
    // 0x80226380: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80226690;
    // 0x80226380: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80226384:
    // 0x80226384: jal         0x802278C4
    // 0x80226388: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802278C4_ovl31(rdram, ctx);
        goto after_14;
    // 0x80226388: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_14:
    // 0x8022638C: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x80226390: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80226394: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226398: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x8022639C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802263A0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802263A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802263A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802263AC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802263B0: j           L_80226688
    // 0x802263B4: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
        goto L_80226688;
    // 0x802263B4: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
L_802263B8:
    // 0x802263B8: bne         $v1, $v0, L_80226410
    if (ctx->r3 != ctx->r2) {
        // 0x802263BC: nop
    
            goto L_80226410;
    }
    // 0x802263BC: nop

    // 0x802263C0: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x802263C4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802263C8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802263CC: lh          $v1, -0x7F48($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7F48);
    // 0x802263D0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802263D4: bne         $v0, $zero, L_80226698
    if (ctx->r2 != 0) {
        // 0x802263D8: nop
    
            goto L_80226698;
    }
    // 0x802263D8: nop

    // 0x802263DC: jal         0x802278C4
    // 0x802263E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802278C4_ovl31(rdram, ctx);
        goto after_15;
    // 0x802263E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_15:
    // 0x802263E4: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x802263E8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802263EC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802263F0: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x802263F4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802263F8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802263FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226400: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226404: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80226408: j           L_80226688
    // 0x8022640C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
        goto L_80226688;
    // 0x8022640C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
L_80226410:
    // 0x80226410: bne         $v1, $zero, L_8022644C
    if (ctx->r3 != 0) {
        // 0x80226414: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022644C;
    }
    // 0x80226414: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226418: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x8022641C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226420: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80226424: lh          $v1, -0x7F46($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7F46);
    // 0x80226428: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022642C: bne         $v0, $zero, L_80226698
    if (ctx->r2 != 0) {
        // 0x80226430: nop
    
            goto L_80226698;
    }
    // 0x80226430: nop

    // 0x80226434: jal         0x802278C4
    // 0x80226438: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802278C4_ovl31(rdram, ctx);
        goto after_16;
    // 0x80226438: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
    // 0x8022643C: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x80226440: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80226444: j           L_8022666C
    // 0x80226448: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        goto L_8022666C;
    // 0x80226448: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_8022644C:
    // 0x8022644C: bne         $v1, $v0, L_802264C0
    if (ctx->r3 != ctx->r2) {
        // 0x80226450: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802264C0;
    }
    // 0x80226450: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226454: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80226458: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022645C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80226460: lh          $v0, -0x7F48($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7F48);
    // 0x80226464: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80226468: bne         $v0, $zero, L_80226698
    if (ctx->r2 != 0) {
        // 0x8022646C: nop
    
            goto L_80226698;
    }
    // 0x8022646C: nop

    // 0x80226470: lhu         $v0, 0x52($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X52);
    // 0x80226474: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80226478: beq         $v0, $zero, L_802264B8
    if (ctx->r2 == 0) {
        // 0x8022647C: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_802264B8;
    }
    // 0x8022647C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80226480: jal         0x802278C4
    // 0x80226484: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802278C4_ovl31(rdram, ctx);
        goto after_17;
    // 0x80226484: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_17:
    // 0x80226488: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x8022648C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80226490: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226494: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x80226498: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022649C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802264A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802264A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802264A8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802264AC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802264B0: j           L_80226690
    // 0x802264B4: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
        goto L_80226690;
    // 0x802264B4: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
L_802264B8:
    // 0x802264B8: j           L_80226698
    // 0x802264BC: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
        goto L_80226698;
    // 0x802264BC: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
L_802264C0:
    // 0x802264C0: bne         $v1, $v0, L_8022651C
    if (ctx->r3 != ctx->r2) {
        // 0x802264C4: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8022651C;
    }
    // 0x802264C4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802264C8: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x802264CC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802264D0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802264D4: lh          $v0, -0x7F48($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7F48);
    // 0x802264D8: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802264DC: bne         $v0, $zero, L_80226698
    if (ctx->r2 != 0) {
        // 0x802264E0: nop
    
            goto L_80226698;
    }
    // 0x802264E0: nop

    // 0x802264E4: jal         0x802278C4
    // 0x802264E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802278C4_ovl31(rdram, ctx);
        goto after_18;
    // 0x802264E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_18:
    // 0x802264EC: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x802264F0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802264F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802264F8: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x802264FC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226500: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80226504: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226508: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022650C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80226510: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226514: j           L_80226690
    // 0x80226518: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
        goto L_80226690;
    // 0x80226518: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
L_8022651C:
    // 0x8022651C: bne         $v1, $v0, L_80226574
    if (ctx->r3 != ctx->r2) {
        // 0x80226520: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80226574;
    }
    // 0x80226520: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226524: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x80226528: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022652C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80226530: lh          $v0, -0x7F46($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7F46);
    // 0x80226534: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80226538: bne         $v0, $zero, L_80226698
    if (ctx->r2 != 0) {
        // 0x8022653C: nop
    
            goto L_80226698;
    }
    // 0x8022653C: nop

    // 0x80226540: jal         0x802278C4
    // 0x80226544: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802278C4_ovl31(rdram, ctx);
        goto after_19;
    // 0x80226544: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_19:
    // 0x80226548: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x8022654C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80226550: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226554: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x80226558: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022655C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80226560: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226564: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226568: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022656C: j           L_80226688
    // 0x80226570: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
        goto L_80226688;
    // 0x80226570: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
L_80226574:
    // 0x80226574: bne         $v1, $v0, L_802265E4
    if (ctx->r3 != ctx->r2) {
        // 0x80226578: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_802265E4;
    }
    // 0x80226578: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022657C: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80226580: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226584: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80226588: lh          $v1, -0x7F48($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7F48);
    // 0x8022658C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80226590: bne         $v0, $zero, L_80226698
    if (ctx->r2 != 0) {
        // 0x80226594: nop
    
            goto L_80226698;
    }
    // 0x80226594: nop

    // 0x80226598: lhu         $v0, 0x52($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X52);
    // 0x8022659C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802265A0: beql        $v0, $zero, L_802265DC
    if (ctx->r2 == 0) {
        // 0x802265A4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802265DC;
    }
    goto skip_0;
    // 0x802265A4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    skip_0:
    // 0x802265A8: jal         0x802278C4
    // 0x802265AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802278C4_ovl31(rdram, ctx);
        goto after_20;
    // 0x802265AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_20:
    // 0x802265B0: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x802265B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802265B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802265BC: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x802265C0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802265C4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802265C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802265CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802265D0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802265D4: j           L_80226688
    // 0x802265D8: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
        goto L_80226688;
    // 0x802265D8: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
L_802265DC:
    // 0x802265DC: j           L_80226698
    // 0x802265E0: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
        goto L_80226698;
    // 0x802265E0: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
L_802265E4:
    // 0x802265E4: bne         $v1, $v0, L_80226698
    if (ctx->r3 != ctx->r2) {
        // 0x802265E8: nop
    
            goto L_80226698;
    }
    // 0x802265E8: nop

    // 0x802265EC: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x802265F0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802265F4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802265F8: lh          $v1, -0x7F46($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7F46);
    // 0x802265FC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80226600: bne         $v0, $zero, L_80226698
    if (ctx->r2 != 0) {
        // 0x80226604: nop
    
            goto L_80226698;
    }
    // 0x80226604: nop

    // 0x80226608: lhu         $v0, 0x52($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X52);
    // 0x8022660C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80226610: beq         $v0, $zero, L_80226658
    if (ctx->r2 == 0) {
        // 0x80226614: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226658;
    }
    // 0x80226614: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226618: jal         0x802278C4
    // 0x8022661C: sb          $zero, 0x58($s1)
    MEM_B(0X58, ctx->r17) = 0;
    func_802278C4_ovl31(rdram, ctx);
        goto after_21;
    // 0x8022661C: sb          $zero, 0x58($s1)
    MEM_B(0X58, ctx->r17) = 0;
    after_21:
    // 0x80226620: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x80226624: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80226628: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022662C: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x80226630: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226634: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226638: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022663C: sh          $zero, 0x64($s0)
    MEM_H(0X64, ctx->r16) = 0;
    // 0x80226640: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226644: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80226648: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x8022664C: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x80226650: j           L_80226690
    // 0x80226654: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80226690;
    // 0x80226654: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80226658:
    // 0x80226658: jal         0x802278C4
    // 0x8022665C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802278C4_ovl31(rdram, ctx);
        goto after_22;
    // 0x8022665C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_22:
    // 0x80226660: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x80226664: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80226668: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022666C:
    // 0x8022666C: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x80226670: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226674: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80226678: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022667C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226680: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80226684: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
L_80226688:
    // 0x80226688: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x8022668C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80226690:
    // 0x80226690: jal         0x80050294
    // 0x80226694: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_23;
    // 0x80226694: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    after_23:
L_80226698:
    // 0x80226698: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022669C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802266A0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802266A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802266A8: jr          $ra
    // 0x802266AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802266AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802371C4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802371C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802371C8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802371CC: jal         0x8004F418
    // 0x802371D0: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x802371D0: nop

    after_0:
    // 0x802371D4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802371D8: jr          $ra
    // 0x802371DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802371DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237314_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237314: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80237318: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x8023731C: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x80237320: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x80237324: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80237328: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8023732C: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x80237330: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x80237334: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x80237338: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x8023733C: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80237340: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x80237344: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80237348: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8023734C: bgez        $v0, L_80237360
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80237350: addu        $s2, $v1, $zero
        ctx->r18 = ADD32(ctx->r3, 0);
            goto L_80237360;
    }
    // 0x80237350: addu        $s2, $v1, $zero
    ctx->r18 = ADD32(ctx->r3, 0);
    // 0x80237354: negu        $s3, $a2
    ctx->r19 = SUB32(0, ctx->r6);
    // 0x80237358: negu        $s2, $v1
    ctx->r18 = SUB32(0, ctx->r3);
    // 0x8023735C: addiu       $s1, $s1, 0x800
    ctx->r17 = ADD32(ctx->r17, 0X800);
L_80237360:
    // 0x80237360: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x80237364: jal         0x8002C654
    // 0x80237368: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x80237368: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8023736C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237370: jal         0x800319B4
    // 0x80237374: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x80237374: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237378: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023737C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80237380: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x80237384: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80237388: negu        $v0, $s3
    ctx->r2 = SUB32(0, ctx->r19);
    // 0x8023738C: sh          $s2, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r18;
    // 0x80237390: sh          $s4, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r20;
    // 0x80237394: jal         0x80031270
    // 0x80237398: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_80031270_C670(rdram, ctx);
        goto after_2;
    // 0x80237398: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_2:
    // 0x8023739C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x802373A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802373A4: jal         0x8009A3B4
    // 0x802373A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x802373A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x802373AC: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x802373B0: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x802373B4: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x802373B8: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x802373BC: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x802373C0: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x802373C4: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x802373C8: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x802373CC: jr          $ra
    // 0x802373D0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x802373D0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80227190_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227190: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80227194: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80227198: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022719C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802271A0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802271A4: lh          $v0, 0x430($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X430);
    // 0x802271A8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802271AC: slti        $v0, $v0, 0x3C
    ctx->r2 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x802271B0: bne         $v0, $zero, L_80227230
    if (ctx->r2 != 0) {
        // 0x802271B4: addiu       $s1, $s0, 0x3E0
        ctx->r17 = ADD32(ctx->r16, 0X3E0);
            goto L_80227230;
    }
    // 0x802271B4: addiu       $s1, $s0, 0x3E0
    ctx->r17 = ADD32(ctx->r16, 0X3E0);
    // 0x802271B8: lbu         $a0, 0x43A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X43A);
    // 0x802271BC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802271C0: bne         $a0, $v0, L_802271EC
    if (ctx->r4 != ctx->r2) {
        // 0x802271C4: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_802271EC;
    }
    // 0x802271C4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802271C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802271CC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802271D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802271D4: jal         0x80050294
    // 0x802271D8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802271D8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x802271DC: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x802271E0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802271E4: j           L_8022721C
    // 0x802271E8: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
        goto L_8022721C;
    // 0x802271E8: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_802271EC:
    // 0x802271EC: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x802271F0: beq         $v0, $a0, L_80227204
    if (ctx->r2 == ctx->r4) {
        // 0x802271F4: nop
    
            goto L_80227204;
    }
    // 0x802271F4: nop

    // 0x802271F8: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x802271FC: bnel        $v0, $a0, L_80227220
    if (ctx->r2 != ctx->r4) {
        // 0x80227200: sh          $zero, 0x50($s1)
        MEM_H(0X50, ctx->r17) = 0;
            goto L_80227220;
    }
    goto skip_0;
    // 0x80227200: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
    skip_0:
L_80227204:
    // 0x80227204: jal         0x80053ED8
    // 0x80227208: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_1;
    // 0x80227208: nop

    after_1:
    // 0x8022720C: lbu         $v1, 0xE($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XE);
    // 0x80227210: andi        $v1, $v1, 0xEF
    ctx->r3 = ctx->r3 & 0XEF;
    // 0x80227214: ori         $v1, $v1, 0x22
    ctx->r3 = ctx->r3 | 0X22;
    // 0x80227218: sb          $v1, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r3;
L_8022721C:
    // 0x8022721C: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
L_80227220:
    // 0x80227220: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227224: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227228: j           L_80227238
    // 0x8022722C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80227238;
    // 0x8022722C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227230:
    // 0x80227230: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80227234: sh          $v0, 0x430($s0)
    MEM_H(0X430, ctx->r16) = ctx->r2;
L_80227238:
    // 0x80227238: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022723C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80227240: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80227244: jr          $ra
    // 0x80227248: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80227248: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80233618_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233618: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023361C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80233620: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233624: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80233628: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8023362C: lbu         $a1, 0xF($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XF);
    // 0x80233630: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x80233634: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x80233638: bne         $v0, $zero, L_80233654
    if (ctx->r2 != 0) {
        // 0x8023363C: sb          $v1, 0xB($s0)
        MEM_B(0XB, ctx->r16) = ctx->r3;
            goto L_80233654;
    }
    // 0x8023363C: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
    // 0x80233640: lhu         $v0, 0x9A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X9A);
    // 0x80233644: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80233648: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8023364C: j           L_802336F8
    // 0x80233650: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
        goto L_802336F8;
    // 0x80233650: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
L_80233654:
    // 0x80233654: lui         $a0, 0x2AAA
    ctx->r4 = S32(0X2AAA << 16);
    // 0x80233658: ori         $a0, $a0, 0xAAAB
    ctx->r4 = ctx->r4 | 0XAAAB;
    // 0x8023365C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x80233660: addiu       $v1, $zero, 0xF0
    ctx->r3 = ADD32(0, 0XF0);
    // 0x80233664: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80233668: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023366C: sra         $v0, $v1, 31
    ctx->r2 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80233670: mfhi        $t2
    ctx->r10 = hi;
    // 0x80233674: subu        $a0, $t2, $v0
    ctx->r4 = SUB32(ctx->r10, ctx->r2);
    // 0x80233678: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8023367C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80233680: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80233684: subu        $a0, $v1, $v0
    ctx->r4 = SUB32(ctx->r3, ctx->r2);
    // 0x80233688: andi        $v0, $a1, 0x8
    ctx->r2 = ctx->r5 & 0X8;
    // 0x8023368C: bne         $v0, $zero, L_802336B8
    if (ctx->r2 != 0) {
        // 0x80233690: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_802336B8;
    }
    // 0x80233690: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80233694: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80233698: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023369C: lbu         $v1, -0x79B0($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X79B0);
    // 0x802336A0: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x802336A4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802336A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802336AC: lbu         $v0, -0x79AF($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X79AF);
    // 0x802336B0: j           L_802336D8
    // 0x802336B4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_802336D8;
    // 0x802336B4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_802336B8:
    // 0x802336B8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802336BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802336C0: lbu         $v1, -0x79A4($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X79A4);
    // 0x802336C4: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x802336C8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802336CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802336D0: lbu         $v0, -0x79A3($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X79A3);
    // 0x802336D4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_802336D8:
    // 0x802336D8: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x802336DC: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802336E0: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x802336E4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802336E8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x802336EC: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802336F0: jal         0x8003B6B8
    // 0x802336F4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B6B8_16AB8(rdram, ctx);
        goto after_0;
    // 0x802336F4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
L_802336F8:
    // 0x802336F8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802336FC: beql        $v0, $zero, L_802337A4
    if (ctx->r2 == 0) {
        // 0x80233700: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_802337A4;
    }
    goto skip_0;
    // 0x80233700: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_0:
    // 0x80233704: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80233708: bgezl       $v0, L_802337A4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023370C: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_802337A4;
    }
    goto skip_1;
    // 0x8023370C: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_1:
    // 0x80233710: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80233714: lhu         $v1, 0x4C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4C);
    // 0x80233718: lhu         $t0, 0x4E($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X4E);
    // 0x8023371C: lhu         $t1, 0x50($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X50);
    // 0x80233720: lw          $a3, 0x1C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X1C);
    // 0x80233724: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233728: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8023372C: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80233730: lhu         $v1, 0x48($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X48);
    // 0x80233734: lh          $a2, 0x44($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X44);
    // 0x80233738: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8023373C: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x80233740: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80233744: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80233748: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x8023374C: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x80233750: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x80233754: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80233758: lh          $a2, 0x48($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X48);
    // 0x8023375C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80233760: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80233764: sw          $a3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r7;
    // 0x80233768: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    // 0x8023376C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80233770: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233774: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x80233778: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x8023377C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80233780: jal         0x8004DD04
    // 0x80233784: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80233784: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    after_1:
    // 0x80233788: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8023378C: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80233790: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x80233794: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
    // 0x80233798: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    // 0x8023379C: j           L_802337AC
    // 0x802337A0: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
        goto L_802337AC;
    // 0x802337A0: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
L_802337A4:
    // 0x802337A4: jal         0x8004F4F8
    // 0x802337A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x802337A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_802337AC:
    // 0x802337AC: lw          $v0, 0xC0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC0);
    // 0x802337B0: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x802337B4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802337B8: beq         $v0, $zero, L_802337D4
    if (ctx->r2 == 0) {
        // 0x802337BC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802337D4;
    }
    // 0x802337BC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802337C0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802337C4: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x802337C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802337CC: j           L_8023384C
    // 0x802337D0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8023384C;
    // 0x802337D0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802337D4:
    // 0x802337D4: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x802337D8: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x802337DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802337E0: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x802337E4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802337E8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x802337EC: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x802337F0: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x802337F4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802337F8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802337FC: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80233800: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80233804: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80233808: jal         0x80051E18
    // 0x8023380C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x8023380C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_3:
    // 0x80233810: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233814: jal         0x8003F754
    // 0x80233818: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    func_8003F754_1AB54(rdram, ctx);
        goto after_4;
    // 0x80233818: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    after_4:
    // 0x8023381C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80233820: beq         $a0, $zero, L_80233834
    if (ctx->r4 == 0) {
        // 0x80233824: nop
    
            goto L_80233834;
    }
    // 0x80233824: nop

    // 0x80233828: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023382C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233830: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80233834:
    // 0x80233834: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80233838: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8023383C: bne         $v0, $zero, L_8023384C
    if (ctx->r2 != 0) {
        // 0x80233840: nop
    
            goto L_8023384C;
    }
    // 0x80233840: nop

    // 0x80233844: jal         0x800711A8
    // 0x80233848: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_800711A8_4C5A8(rdram, ctx);
        goto after_5;
    // 0x80233848: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_5:
L_8023384C:
    // 0x8023384C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80233850: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80233854: jr          $ra
    // 0x80233858: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80233858: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022A270_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A270: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A274: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A278: jal         0x8004F418
    // 0x8022A27C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022A27C: nop

    after_0:
    // 0x8022A280: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A284: jr          $ra
    // 0x8022A288: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A288: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236400_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236400: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236404: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236408: jal         0x8004F62C
    // 0x8023640C: nop

    func_8004F62C_2AA2C(rdram, ctx);
        goto after_0;
    // 0x8023640C: nop

    after_0:
    // 0x80236410: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236414: jr          $ra
    // 0x80236418: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236418: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234F50_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234F50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234F54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234F58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234F5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234F60: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80234F64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234F68: bne         $v1, $v0, L_80234F88
    if (ctx->r3 != ctx->r2) {
        // 0x80234F6C: nop
    
            goto L_80234F88;
    }
    // 0x80234F6C: nop

    // 0x80234F70: jal         0x802354FC
    // 0x80234F74: nop

    func_802354FC_ovl31(rdram, ctx);
        goto after_0;
    // 0x80234F74: nop

    after_0:
    // 0x80234F78: jal         0x8004F684
    // 0x80234F7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_1;
    // 0x80234F7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80234F80: j           L_8023500C
    // 0x80234F84: nop

        goto L_8023500C;
    // 0x80234F84: nop

L_80234F88:
    // 0x80234F88: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80234F8C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234F90: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234F94: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234F98: lw          $v0, -0x7600($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7600);
    // 0x80234F9C: jalr        $v0
    // 0x80234FA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80234FA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80234FA4: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80234FA8: bnel        $v1, $zero, L_80234FD4
    if (ctx->r3 != 0) {
        // 0x80234FAC: sll         $v1, $v1, 10
        ctx->r3 = S32(ctx->r3 << 10);
            goto L_80234FD4;
    }
    goto skip_0;
    // 0x80234FAC: sll         $v1, $v1, 10
    ctx->r3 = S32(ctx->r3 << 10);
    skip_0:
    // 0x80234FB0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80234FB4: lhu         $v0, 0x4A06($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A06);
    // 0x80234FB8: addiu       $v0, $v0, -0x3AC
    ctx->r2 = ADD32(ctx->r2, -0X3AC);
    // 0x80234FBC: sltiu       $v0, $v0, 0x8A9
    ctx->r2 = ctx->r2 < 0X8A9 ? 1 : 0;
    // 0x80234FC0: bnel        $v0, $zero, L_80235004
    if (ctx->r2 != 0) {
        // 0x80234FC4: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80235004;
    }
    goto skip_1;
    // 0x80234FC4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    skip_1:
    // 0x80234FC8: lui         $v0, 0x240
    ctx->r2 = S32(0X240 << 16);
    // 0x80234FCC: j           L_80235008
    // 0x80234FD0: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
        goto L_80235008;
    // 0x80234FD0: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
L_80234FD4:
    // 0x80234FD4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80234FD8: lhu         $v0, 0x4A06($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A06);
    // 0x80234FDC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80234FE0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80234FE4: bltzl       $v0, L_80234FEC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80234FE8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80234FEC;
    }
    goto skip_2;
    // 0x80234FE8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
L_80234FEC:
    // 0x80234FEC: slti        $v0, $v0, 0x3AC
    ctx->r2 = SIGNED(ctx->r2) < 0X3AC ? 1 : 0;
    // 0x80234FF0: beq         $v0, $zero, L_80235000
    if (ctx->r2 == 0) {
        // 0x80234FF4: lui         $v0, 0x240
        ctx->r2 = S32(0X240 << 16);
            goto L_80235000;
    }
    // 0x80234FF4: lui         $v0, 0x240
    ctx->r2 = S32(0X240 << 16);
    // 0x80234FF8: j           L_80235008
    // 0x80234FFC: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
        goto L_80235008;
    // 0x80234FFC: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
L_80235000:
    // 0x80235000: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_80235004:
    // 0x80235004: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_80235008:
    // 0x80235008: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
L_8023500C:
    // 0x8023500C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235010: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235014: jr          $ra
    // 0x80235018: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235018: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C538_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C538: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C53C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C540: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C544: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022C548: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C54C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C550: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C554: beq         $v1, $v0, L_8022C5F4
    if (ctx->r3 == ctx->r2) {
        // 0x8022C558: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022C5F4;
    }
    // 0x8022C558: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022C55C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022C560: beql        $v0, $zero, L_8022C578
    if (ctx->r2 == 0) {
        // 0x8022C564: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C578;
    }
    goto skip_0;
    // 0x8022C564: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022C568: beq         $v1, $zero, L_8022C588
    if (ctx->r3 == 0) {
        // 0x8022C56C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C588;
    }
    // 0x8022C56C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C570: j           L_8022C704
    // 0x8022C574: nop

        goto L_8022C704;
    // 0x8022C574: nop

L_8022C578:
    // 0x8022C578: beq         $v1, $v0, L_8022C6C0
    if (ctx->r3 == ctx->r2) {
        // 0x8022C57C: nop
    
            goto L_8022C6C0;
    }
    // 0x8022C57C: nop

    // 0x8022C580: j           L_8022C704
    // 0x8022C584: nop

        goto L_8022C704;
    // 0x8022C584: nop

L_8022C588:
    // 0x8022C588: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C58C: addiu       $v0, $zero, -0x1E
    ctx->r2 = ADD32(0, -0X1E);
    // 0x8022C590: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022C594: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C598: jal         0x8004F144
    // 0x8022C59C: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022C59C: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022C5A0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C5A4: beq         $v1, $zero, L_8022C5D0
    if (ctx->r3 == 0) {
        // 0x8022C5A8: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8022C5D0;
    }
    // 0x8022C5A8: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022C5AC: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    // 0x8022C5B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C5B4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022C5B8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022C5BC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022C5C0: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022C5C4: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8022C5C8: jal         0x8009A3B4
    // 0x8022C5CC: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022C5CC: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_1:
L_8022C5D0:
    // 0x8022C5D0: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022C5D4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8022C5D8: sb          $v1, 0xFB($s0)
    MEM_B(0XFB, ctx->r16) = ctx->r3;
    // 0x8022C5DC: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x8022C5E0: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x8022C5E4: sh          $v1, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r3;
    // 0x8022C5E8: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022C5EC: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8022C5F0: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_8022C5F4:
    // 0x8022C5F4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022C5F8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C5FC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022C600: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C604: bgez        $v0, L_8022C688
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C608: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C688;
    }
    // 0x8022C608: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C60C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C610: lbu         $a0, 0xF($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XF);
    // 0x8022C614: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022C618: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022C61C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022C620: ori         $a0, $a0, 0x4
    ctx->r4 = ctx->r4 | 0X4;
    // 0x8022C624: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022C628: jal         0x8004F144
    // 0x8022C62C: sb          $a0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r4;
    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x8022C62C: sb          $a0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r4;
    after_2:
    // 0x8022C630: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C634: beq         $v1, $zero, L_8022C660
    if (ctx->r3 == 0) {
        // 0x8022C638: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8022C660;
    }
    // 0x8022C638: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022C63C: addiu       $a1, $s0, 0x188
    ctx->r5 = ADD32(ctx->r16, 0X188);
    // 0x8022C640: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C644: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022C648: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022C64C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022C650: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022C654: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022C658: jal         0x8009A3B4
    // 0x8022C65C: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022C65C: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_3:
L_8022C660:
    // 0x8022C660: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C664: jal         0x8007A1B8
    // 0x8022C668: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_4;
    // 0x8022C668: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    after_4:
    // 0x8022C66C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022C670: andi        $v0, $v0, 0x42
    ctx->r2 = ctx->r2 & 0X42;
    // 0x8022C674: bne         $v0, $zero, L_8022C6C0
    if (ctx->r2 != 0) {
        // 0x8022C678: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022C6C0;
    }
    // 0x8022C678: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022C67C: lw          $v1, 0x4C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4C);
    // 0x8022C680: j           L_8022C6C0
    // 0x8022C684: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
        goto L_8022C6C0;
    // 0x8022C684: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
L_8022C688:
    // 0x8022C688: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022C68C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C690: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022C694: sll         $a2, $a2, 20
    ctx->r6 = S32(ctx->r6 << 20);
    // 0x8022C698: jal         0x8004DA90
    // 0x8022C69C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x8022C69C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_5:
    // 0x8022C6A0: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022C6A4: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022C6A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C6AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C6B0: jal         0x80040F30
    // 0x8022C6B4: sh          $v0, 0x46($a0)
    MEM_H(0X46, ctx->r4) = ctx->r2;
    func_80040F30_1C330(rdram, ctx);
        goto after_6;
    // 0x8022C6B4: sh          $v0, 0x46($a0)
    MEM_H(0X46, ctx->r4) = ctx->r2;
    after_6:
    // 0x8022C6B8: j           L_8022C704
    // 0x8022C6BC: nop

        goto L_8022C704;
    // 0x8022C6BC: nop

L_8022C6C0:
    // 0x8022C6C0: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x8022C6C4: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x8022C6C8: bne         $v0, $zero, L_8022C6FC
    if (ctx->r2 != 0) {
        // 0x8022C6CC: andi        $v0, $v1, 0x2
        ctx->r2 = ctx->r3 & 0X2;
            goto L_8022C6FC;
    }
    // 0x8022C6CC: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x8022C6D0: beq         $v0, $zero, L_8022C704
    if (ctx->r2 == 0) {
        // 0x8022C6D4: nop
    
            goto L_8022C704;
    }
    // 0x8022C6D4: nop

    // 0x8022C6D8: jal         0x8004F418
    // 0x8022C6DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_7;
    // 0x8022C6DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022C6E0: lw          $a0, 0x50($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X50);
    // 0x8022C6E4: jal         0x8004F5C4
    // 0x8022C6E8: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_8;
    // 0x8022C6E8: nop

    after_8:
    // 0x8022C6EC: jal         0x8004F5C4
    // 0x8022C6F0: lw          $a0, 0x54($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X54);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_9;
    // 0x8022C6F0: lw          $a0, 0x54($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X54);
    after_9:
    // 0x8022C6F4: j           L_8022C704
    // 0x8022C6F8: nop

        goto L_8022C704;
    // 0x8022C6F8: nop

L_8022C6FC:
    // 0x8022C6FC: jal         0x8004F418
    // 0x8022C700: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_10;
    // 0x8022C700: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
L_8022C704:
    // 0x8022C704: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C708: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C70C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C710: jr          $ra
    // 0x8022C714: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C714: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022DDCC_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DDCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022DDD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022DDD4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DDD8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022DDDC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022DDE0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022DDE4: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x8022DDE8: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022DDEC: bne         $v0, $zero, L_8022DE00
    if (ctx->r2 != 0) {
        // 0x8022DDF0: addiu       $s1, $s0, 0xC4
        ctx->r17 = ADD32(ctx->r16, 0XC4);
            goto L_8022DE00;
    }
    // 0x8022DDF0: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    // 0x8022DDF4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022DDF8: jal         0x8022D7E4
    // 0x8022DDFC: sh          $v0, 0x382($s0)
    MEM_H(0X382, ctx->r16) = ctx->r2;
    func_8022D7E4_ovl31(rdram, ctx);
        goto after_0;
    // 0x8022DDFC: sh          $v0, 0x382($s0)
    MEM_H(0X382, ctx->r16) = ctx->r2;
    after_0:
L_8022DE00:
    // 0x8022DE00: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022DE04: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DE08: bne         $v1, $v0, L_8022DE98
    if (ctx->r3 != ctx->r2) {
        // 0x8022DE0C: nop
    
            goto L_8022DE98;
    }
    // 0x8022DE0C: nop

    // 0x8022DE10: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x8022DE14: lbu         $v1, 0x65($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X65);
    // 0x8022DE18: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x8022DE1C: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x8022DE20: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022DE24: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8022DE28: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8022DE2C: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x8022DE30: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022DE34: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8022DE38: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8022DE3C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022DE40: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x8022DE44: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8022DE48: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x8022DE4C: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x8022DE50: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x8022DE54: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x8022DE58: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x8022DE5C: bne         $v1, $zero, L_8022DE98
    if (ctx->r3 != 0) {
        // 0x8022DE60: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_8022DE98;
    }
    // 0x8022DE60: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022DE64: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x8022DE68: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x8022DE6C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022DE70: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022DE74: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x8022DE78: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022DE7C: beq         $v1, $v0, L_8022DE98
    if (ctx->r3 == ctx->r2) {
        // 0x8022DE80: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8022DE98;
    }
    // 0x8022DE80: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8022DE84: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x8022DE88: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x8022DE8C: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x8022DE90: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022DE94: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_8022DE98:
    // 0x8022DE98: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022DE9C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022DEA0: bne         $v1, $v0, L_8022DEF8
    if (ctx->r3 != ctx->r2) {
        // 0x8022DEA4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022DEF8;
    }
    // 0x8022DEA4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DEA8: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022DEAC: beq         $v1, $v0, L_8022DEF0
    if (ctx->r3 == ctx->r2) {
        // 0x8022DEB0: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022DEF0;
    }
    // 0x8022DEB0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022DEB4: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8022DEB8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022DEBC: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x8022DEC0: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8022DEC4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022DEC8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022DECC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022DED0: sh          $v0, 0x3A($s2)
    MEM_H(0X3A, ctx->r18) = ctx->r2;
    // 0x8022DED4: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022DED8: sb          $v0, 0x3E($s2)
    MEM_B(0X3E, ctx->r18) = ctx->r2;
    // 0x8022DEDC: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8022DEE0: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
    // 0x8022DEE4: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8022DEE8: j           L_8022DEF8
    // 0x8022DEEC: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
        goto L_8022DEF8;
    // 0x8022DEEC: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_8022DEF0:
    // 0x8022DEF0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022DEF4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022DEF8:
    // 0x8022DEF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022DEFC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022DF00: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022DF04: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022DF08: jr          $ra
    // 0x8022DF0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022DF0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022EDF0_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EDF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EDF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EDF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EDFC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022EE00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EE04: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022EE08: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022EE0C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022EE10: jal         0x8009A3B4
    // 0x8022EE14: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022EE14: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022EE18: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022EE1C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022EE20: jal         0x8009A3B4
    // 0x8022EE24: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022EE24: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022EE28: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022EE2C: jal         0x800A3450
    // 0x8022EE30: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8022EE30: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022EE34: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    // 0x8022EE38: jal         0x80053ED8
    // 0x8022EE3C: sh          $v0, 0x34E($s0)
    MEM_H(0X34E, ctx->r16) = ctx->r2;
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_3;
    // 0x8022EE3C: sh          $v0, 0x34E($s0)
    MEM_H(0X34E, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022EE40: addiu       $a0, $v0, 0x14
    ctx->r4 = ADD32(ctx->r2, 0X14);
    // 0x8022EE44: jal         0x8004EC38
    // 0x8022EE48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004EC38_2A038(rdram, ctx);
        goto after_4;
    // 0x8022EE48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8022EE4C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022EE50: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022EE54: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EE58: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022EE5C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022EE60: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022EE64: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022EE68: lw          $v0, -0x7B50($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7B50);
    // 0x8022EE6C: jalr        $v0
    // 0x8022EE70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8022EE70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022EE74: sw          $zero, 0x320($s0)
    MEM_W(0X320, ctx->r16) = 0;
    // 0x8022EE78: sw          $zero, 0x328($s0)
    MEM_W(0X328, ctx->r16) = 0;
    // 0x8022EE7C: sw          $zero, 0x330($s0)
    MEM_W(0X330, ctx->r16) = 0;
    // 0x8022EE80: sw          $zero, 0x338($s0)
    MEM_W(0X338, ctx->r16) = 0;
    // 0x8022EE84: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022EE88: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022EE8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EE90: jr          $ra
    // 0x8022EE94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022EE94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232C7C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232C7C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80232C80: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80232C84: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232C88: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80232C8C: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80232C90: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80232C94: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80232C98: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80232C9C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232CA0: bne         $v1, $v0, L_80232D30
    if (ctx->r3 != ctx->r2) {
        // 0x80232CA4: addiu       $s1, $s0, 0xC4
        ctx->r17 = ADD32(ctx->r16, 0XC4);
            goto L_80232D30;
    }
    // 0x80232CA4: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    // 0x80232CA8: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x80232CAC: lbu         $v1, 0x65($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X65);
    // 0x80232CB0: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x80232CB4: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x80232CB8: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80232CBC: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80232CC0: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80232CC4: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80232CC8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80232CCC: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80232CD0: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80232CD4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80232CD8: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x80232CDC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80232CE0: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x80232CE4: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x80232CE8: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x80232CEC: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x80232CF0: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80232CF4: bne         $v1, $zero, L_80232D30
    if (ctx->r3 != 0) {
        // 0x80232CF8: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_80232D30;
    }
    // 0x80232CF8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80232CFC: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x80232D00: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x80232D04: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80232D08: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80232D0C: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80232D10: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80232D14: beq         $v1, $v0, L_80232D30
    if (ctx->r3 == ctx->r2) {
        // 0x80232D18: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_80232D30;
    }
    // 0x80232D18: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80232D1C: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x80232D20: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x80232D24: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x80232D28: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80232D2C: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_80232D30:
    // 0x80232D30: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80232D34: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80232D38: beq         $v0, $zero, L_80232E84
    if (ctx->r2 == 0) {
        // 0x80232D3C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80232E84;
    }
    // 0x80232D3C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80232D40: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232D44: addu        $at, $at, $v0
    gpr jr_addend_80232D4C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232D48: lw          $v0, -0x7128($at)
    ctx->r2 = ADD32(ctx->r1, -0X7128);
    // 0x80232D4C: jr          $v0
    // 0x80232D50: nop

    switch (jr_addend_80232D4C >> 2) {
        case 0: goto L_80232D54; break;
        case 1: goto L_80232D74; break;
        case 2: goto L_80232DAC; break;
        case 3: goto L_80232DDC; break;
        case 4: goto L_80232DDC; break;
        default: switch_error(__func__, 0x80232D4C, 0x80238ED8);
    }
    // 0x80232D50: nop

L_80232D54:
    // 0x80232D54: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232D58: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x80232D5C: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80232D60: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232D64: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80232D68: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80232D6C: j           L_80232D8C
    // 0x80232D70: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
        goto L_80232D8C;
    // 0x80232D70: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
L_80232D74:
    // 0x80232D74: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x80232D78: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x80232D7C: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80232D80: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232D84: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80232D88: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
L_80232D8C:
    // 0x80232D8C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x80232D90: jal         0x8004DBA0
    // 0x80232D94: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_0;
    // 0x80232D94: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x80232D98: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80232D9C: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x80232DA0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232DA4: j           L_80232E84
    // 0x80232DA8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_80232E84;
    // 0x80232DA8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_80232DAC:
    // 0x80232DAC: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80232DB0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80232DB4: bne         $v1, $v0, L_80232E84
    if (ctx->r3 != ctx->r2) {
        // 0x80232DB8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232E84;
    }
    // 0x80232DB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232DBC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80232DC0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232DC4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80232DC8: jal         0x80050294
    // 0x80232DCC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80232DCC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x80232DD0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80232DD4: j           L_80232E84
    // 0x80232DD8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80232E84;
    // 0x80232DD8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80232DDC:
    // 0x80232DDC: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80232DE0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80232DE4: bne         $v1, $v0, L_80232E50
    if (ctx->r3 != ctx->r2) {
        // 0x80232DE8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80232E50;
    }
    // 0x80232DE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232DEC: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80232DF0: bne         $v1, $v0, L_80232E10
    if (ctx->r3 != ctx->r2) {
        // 0x80232DF4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232E10;
    }
    // 0x80232DF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232DF8: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80232DFC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80232E00: beq         $v0, $zero, L_80232E10
    if (ctx->r2 == 0) {
        // 0x80232E04: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80232E10;
    }
    // 0x80232E04: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80232E08: j           L_80232E28
    // 0x80232E0C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80232E28;
    // 0x80232E0C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80232E10:
    // 0x80232E10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80232E14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232E18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232E1C: jal         0x80050294
    // 0x80232E20: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80232E20: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x80232E24: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80232E28:
    // 0x80232E28: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80232E2C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80232E30: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80232E34: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80232E38: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80232E3C: sb          $v0, 0x3D($s2)
    MEM_B(0X3D, ctx->r18) = ctx->r2;
    // 0x80232E40: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80232E44: sb          $zero, 0x3C($s2)
    MEM_B(0X3C, ctx->r18) = 0;
    // 0x80232E48: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    // 0x80232E4C: sb          $v0, 0x395($s0)
    MEM_B(0X395, ctx->r16) = ctx->r2;
L_80232E50:
    // 0x80232E50: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80232E54: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80232E58: bne         $v1, $v0, L_80232E84
    if (ctx->r3 != ctx->r2) {
        // 0x80232E5C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80232E84;
    }
    // 0x80232E5C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232E60: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232E64: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80232E68: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80232E6C: jal         0x8004F820
    // 0x80232E70: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80232E70: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_3:
    // 0x80232E74: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80232E78: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232E7C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80232E80: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80232E84:
    // 0x80232E84: jal         0x8005044C
    // 0x80232E88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x80232E88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80232E8C: jal         0x80040F30
    // 0x80232E90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x80232E90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80232E94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232E98: jal         0x8003E934
    // 0x80232E9C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x80232E9C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    after_6:
    // 0x80232EA0: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x80232EA4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80232EA8: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80232EAC: andi        $v1, $v1, 0x3000
    ctx->r3 = ctx->r3 & 0X3000;
    // 0x80232EB0: bne         $v1, $v0, L_80232F0C
    if (ctx->r3 != ctx->r2) {
        // 0x80232EB4: nop
    
            goto L_80232F0C;
    }
    // 0x80232EB4: nop

    // 0x80232EB8: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80232EBC: bne         $a0, $v0, L_80232F0C
    if (ctx->r4 != ctx->r2) {
        // 0x80232EC0: nop
    
            goto L_80232F0C;
    }
    // 0x80232EC0: nop

    // 0x80232EC4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232EC8: bne         $v0, $zero, L_80232EE4
    if (ctx->r2 != 0) {
        // 0x80232ECC: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80232EE4;
    }
    // 0x80232ECC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80232ED0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80232ED4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80232ED8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232EDC: j           L_80232EF0
    // 0x80232EE0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
        goto L_80232EF0;
    // 0x80232EE0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
L_80232EE4:
    // 0x80232EE4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80232EE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232EEC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
L_80232EF0:
    // 0x80232EF0: jal         0x80050294
    // 0x80232EF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x80232EF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80232EF8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232EFC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80232F00: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80232F04: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80232F08: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_80232F0C:
    // 0x80232F0C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80232F10: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80232F14: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80232F18: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80232F1C: jr          $ra
    // 0x80232F20: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80232F20: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022D7E4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D7E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D7E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D7EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D7F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D7F4: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022D7F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D7FC: bne         $v1, $v0, L_8022D898
    if (ctx->r3 != ctx->r2) {
        // 0x8022D800: addiu       $a0, $s0, 0x348
        ctx->r4 = ADD32(ctx->r16, 0X348);
            goto L_8022D898;
    }
    // 0x8022D800: addiu       $a0, $s0, 0x348
    ctx->r4 = ADD32(ctx->r16, 0X348);
    // 0x8022D804: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8022D808: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8022D80C: ori         $v1, $v1, 0xFF00
    ctx->r3 = ctx->r3 | 0XFF00;
    // 0x8022D810: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022D814: addiu       $v1, $zero, 0x600
    ctx->r3 = ADD32(0, 0X600);
    // 0x8022D818: bne         $v0, $v1, L_8022D898
    if (ctx->r2 != ctx->r3) {
        // 0x8022D81C: nop
    
            goto L_8022D898;
    }
    // 0x8022D81C: nop

    // 0x8022D820: lbu         $v0, 0xCB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCB);
    // 0x8022D824: sltiu       $v0, $v0, 0xB4
    ctx->r2 = ctx->r2 < 0XB4 ? 1 : 0;
    // 0x8022D828: beq         $v0, $zero, L_8022D87C
    if (ctx->r2 == 0) {
        // 0x8022D82C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D87C;
    }
    // 0x8022D82C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D830: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D834: lh          $a3, 0x382($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X382);
    // 0x8022D838: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022D83C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022D840: jal         0x8004F820
    // 0x8022D844: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022D844: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022D848: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D84C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022D850: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D854: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D858: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022D85C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D860: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022D864: jal         0x8004DA90
    // 0x8022D868: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022D868: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_1:
    // 0x8022D86C: lbu         $v0, 0xCB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCB);
    // 0x8022D870: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D874: j           L_8022D8D4
    // 0x8022D878: sb          $v0, 0xCB($s0)
    MEM_B(0XCB, ctx->r16) = ctx->r2;
        goto L_8022D8D4;
    // 0x8022D878: sb          $v0, 0xCB($s0)
    MEM_B(0XCB, ctx->r16) = ctx->r2;
L_8022D87C:
    // 0x8022D87C: lbu         $v1, 0xCA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022D880: sb          $zero, 0xCB($s0)
    MEM_B(0XCB, ctx->r16) = 0;
    // 0x8022D884: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022D888: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022D88C: andi        $v1, $v1, 0x7F
    ctx->r3 = ctx->r3 & 0X7F;
    // 0x8022D890: j           L_8022D8D4
    // 0x8022D894: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
        goto L_8022D8D4;
    // 0x8022D894: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
L_8022D898:
    // 0x8022D898: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D89C: lh          $a3, 0x3A($a0)
    ctx->r7 = MEM_H(ctx->r4, 0X3A);
    // 0x8022D8A0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022D8A4: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022D8A8: jal         0x8004F820
    // 0x8022D8AC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022D8AC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8022D8B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D8B4: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x8022D8B8: lhu         $v1, 0x56($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X56);
    // 0x8022D8BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D8C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022D8C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D8C8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022D8CC: jal         0x8004DA90
    // 0x8022D8D0: sh          $v1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022D8D0: sh          $v1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r3;
    after_3:
L_8022D8D4:
    // 0x8022D8D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D8D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D8DC: jr          $ra
    // 0x8022D8E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D8E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E99C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E99C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E9A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022E9A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E9A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022E9AC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E9B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E9B4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E9B8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E9BC: lw          $v0, -0x7B68($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7B68);
    // 0x8022E9C0: jalr        $v0
    // 0x8022E9C4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E9C4: nop

    after_0:
    // 0x8022E9C8: lb          $v0, 0x387($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X387);
    // 0x8022E9CC: bne         $v0, $zero, L_8022EA64
    if (ctx->r2 != 0) {
        // 0x8022E9D0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022EA64;
    }
    // 0x8022E9D0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E9D4: lbu         $v1, 0x64($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X64);
    // 0x8022E9D8: lbu         $a0, 0x65($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X65);
    // 0x8022E9DC: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x8022E9E0: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x8022E9E4: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8022E9E8: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8022E9EC: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x8022E9F0: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8022E9F4: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x8022E9F8: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8022E9FC: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
    // 0x8022EA00: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x8022EA04: lb          $a0, 0x64($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X64);
    // 0x8022EA08: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x8022EA0C: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8022EA10: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022EA14: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8022EA18: bgez        $a0, L_8022EA34
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8022EA1C: sb          $v0, 0x65($s0)
        MEM_B(0X65, ctx->r16) = ctx->r2;
            goto L_8022EA34;
    }
    // 0x8022EA1C: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
    // 0x8022EA20: lhu         $v0, 0x15E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X15E);
    // 0x8022EA24: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x8022EA28: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x8022EA2C: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x8022EA30: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8022EA34:
    // 0x8022EA34: lh          $v0, 0x15E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X15E);
    // 0x8022EA38: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x8022EA3C: beq         $v0, $zero, L_8022EA74
    if (ctx->r2 == 0) {
        // 0x8022EA40: nop
    
            goto L_8022EA74;
    }
    // 0x8022EA40: nop

    // 0x8022EA44: lbu         $v0, 0x66($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X66);
    // 0x8022EA48: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022EA4C: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x8022EA50: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022EA54: bltzl       $v0, L_8022EA74
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022EA58: sb          $zero, 0x66($s0)
        MEM_B(0X66, ctx->r16) = 0;
            goto L_8022EA74;
    }
    goto skip_0;
    // 0x8022EA58: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    skip_0:
    // 0x8022EA5C: j           L_8022EA74
    // 0x8022EA60: nop

        goto L_8022EA74;
    // 0x8022EA60: nop

L_8022EA64:
    // 0x8022EA64: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022EA68: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x8022EA6C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022EA70: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8022EA74:
    // 0x8022EA74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022EA78: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022EA7C: jr          $ra
    // 0x8022EA80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022EA80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022AF18_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AF18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022AF1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AF20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AF24: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022AF28: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022AF2C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022AF30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AF34: beq         $v1, $v0, L_8022AFB0
    if (ctx->r3 == ctx->r2) {
        // 0x8022AF38: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022AFB0;
    }
    // 0x8022AF38: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022AF3C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022AF40: beql        $v0, $zero, L_8022AF58
    if (ctx->r2 == 0) {
        // 0x8022AF44: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022AF58;
    }
    goto skip_0;
    // 0x8022AF44: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022AF48: beq         $v1, $zero, L_8022AF70
    if (ctx->r3 == 0) {
        // 0x8022AF4C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022AF70;
    }
    // 0x8022AF4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AF50: j           L_8022B118
    // 0x8022AF54: nop

        goto L_8022B118;
    // 0x8022AF54: nop

L_8022AF58:
    // 0x8022AF58: beq         $v1, $v0, L_8022AFC0
    if (ctx->r3 == ctx->r2) {
        // 0x8022AF5C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022AFC0;
    }
    // 0x8022AF5C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022AF60: beq         $v1, $v0, L_8022B0C8
    if (ctx->r3 == ctx->r2) {
        // 0x8022AF64: nop
    
            goto L_8022B0C8;
    }
    // 0x8022AF64: nop

    // 0x8022AF68: j           L_8022B118
    // 0x8022AF6C: nop

        goto L_8022B118;
    // 0x8022AF6C: nop

L_8022AF70:
    // 0x8022AF70: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022AF74: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022AF78: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022AF7C: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x8022AF80: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022AF84: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022AF88: lbu         $v0, -0x7D9C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7D9C);
    // 0x8022AF8C: lhu         $a0, 0x328($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X328);
    // 0x8022AF90: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x8022AF94: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x8022AF98: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x8022AF9C: andi        $v0, $a0, 0xFFF7
    ctx->r2 = ctx->r4 & 0XFFF7;
    // 0x8022AFA0: bgtz        $v1, L_8022AFB0
    if (SIGNED(ctx->r3) > 0) {
        // 0x8022AFA4: sh          $v0, 0x328($s0)
        MEM_H(0X328, ctx->r16) = ctx->r2;
            goto L_8022AFB0;
    }
    // 0x8022AFA4: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    // 0x8022AFA8: andi        $v0, $a0, 0xFFF3
    ctx->r2 = ctx->r4 & 0XFFF3;
    // 0x8022AFAC: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_8022AFB0:
    // 0x8022AFB0: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8022AFB4: bgez        $v0, L_8022AFC0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022AFB8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022AFC0;
    }
    // 0x8022AFB8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022AFBC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022AFC0:
    // 0x8022AFC0: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x8022AFC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AFC8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022AFCC: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022AFD0: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022AFD4: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022AFD8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022AFDC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022AFE0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022AFE4: lbu         $v0, -0x7D9B($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X7D9B);
    // 0x8022AFE8: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022AFEC: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022AFF0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022AFF4: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x8022AFF8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022AFFC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022B000: jal         0x8004DA90
    // 0x8022B004: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022B004: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022B008: jal         0x80040F30
    // 0x8022B00C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022B00C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022B010: beq         $v0, $zero, L_8022B118
    if (ctx->r2 == 0) {
        // 0x8022B014: sw          $v0, 0x48($s1)
        MEM_W(0X48, ctx->r17) = ctx->r2;
            goto L_8022B118;
    }
    // 0x8022B014: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    // 0x8022B018: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022B01C: bnel        $v0, $zero, L_8022B024
    if (ctx->r2 != 0) {
        // 0x8022B020: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022B024;
    }
    goto skip_1;
    // 0x8022B020: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_8022B024:
    // 0x8022B024: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x8022B028: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8022B02C: beq         $v0, $zero, L_8022B118
    if (ctx->r2 == 0) {
        // 0x8022B030: addiu       $a0, $zero, 0xDE
        ctx->r4 = ADD32(0, 0XDE);
            goto L_8022B118;
    }
    // 0x8022B030: addiu       $a0, $zero, 0xDE
    ctx->r4 = ADD32(0, 0XDE);
    // 0x8022B034: jal         0x8002A33C
    // 0x8022B038: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022B038: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8022B03C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022B040: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022B044: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8022B048: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B04C: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x8022B050: beq         $v0, $zero, L_8022B094
    if (ctx->r2 == 0) {
        // 0x8022B054: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B094;
    }
    // 0x8022B054: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B058: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022B05C: lbu         $a0, 0xB($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XB);
    // 0x8022B060: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B064: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x8022B068: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022B06C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022B070: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022B074: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B078: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022B07C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022B080: lbu         $v1, -0x7D9C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X7D9C);
    // 0x8022B084: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8022B088: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022B08C: j           L_8022B118
    // 0x8022B090: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8022B118;
    // 0x8022B090: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022B094:
    // 0x8022B094: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8022B098: bgtz        $v0, L_8022B0B0
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022B09C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022B0B0;
    }
    // 0x8022B09C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B0A0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B0A4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022B0A8: j           L_8022B118
    // 0x8022B0AC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8022B118;
    // 0x8022B0AC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022B0B0:
    // 0x8022B0B0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B0B4: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022B0B8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B0BC: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8022B0C0: j           L_8022B118
    // 0x8022B0C4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022B118;
    // 0x8022B0C4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022B0C8:
    // 0x8022B0C8: lhu         $v0, 0x32C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32C);
    // 0x8022B0CC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B0D0: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x8022B0D4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B0D8: bgez        $v0, L_8022B0F0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B0DC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022B0F0;
    }
    // 0x8022B0DC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B0E0: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022B0E4: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x8022B0E8: j           L_8022B118
    // 0x8022B0EC: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
        goto L_8022B118;
    // 0x8022B0EC: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_8022B0F0:
    // 0x8022B0F0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B0F4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022B0F8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022B0FC: jal         0x8004F820
    // 0x8022B100: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022B100: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_3:
    // 0x8022B104: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B108: sh          $v0, 0x36C($s0)
    MEM_H(0X36C, ctx->r16) = ctx->r2;
    // 0x8022B10C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B110: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B114: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022B118:
    // 0x8022B118: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B11C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B120: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B124: jr          $ra
    // 0x8022B128: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B128: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233900_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233900: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80233904: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80233908: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x8023390C: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80233910: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x80233914: lhu         $v1, 0x14($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X14);
    // 0x80233918: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023391C: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x80233920: sh          $v1, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r3;
    // 0x80233924: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x80233928: jr          $ra
    // 0x8023392C: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8023392C: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_8022D338_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D338: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D33C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D340: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D344: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D348: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D34C: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022D350: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x8022D354: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022D358: beq         $v0, $zero, L_8022D37C
    if (ctx->r2 == 0) {
        // 0x8022D35C: addiu       $s1, $s0, 0x64
        ctx->r17 = ADD32(ctx->r16, 0X64);
            goto L_8022D37C;
    }
    // 0x8022D35C: addiu       $s1, $s0, 0x64
    ctx->r17 = ADD32(ctx->r16, 0X64);
    // 0x8022D360: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022D364: lw          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BC8);
    // 0x8022D368: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8022D36C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022D370: lui         $v1, 0x1D02
    ctx->r3 = S32(0X1D02 << 16);
    // 0x8022D374: bne         $v0, $v1, L_8022D3B8
    if (ctx->r2 != ctx->r3) {
        // 0x8022D378: nop
    
            goto L_8022D3B8;
    }
    // 0x8022D378: nop

L_8022D37C:
    // 0x8022D37C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D380: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D384: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022D388: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022D38C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022D390: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022D394: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022D398: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D39C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022D3A0: jal         0x80050294
    // 0x8022D3A4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022D3A4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022D3A8: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022D3AC: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8022D3B0: j           L_8022D3C0
    // 0x8022D3B4: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
        goto L_8022D3C0;
    // 0x8022D3B4: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
L_8022D3B8:
    // 0x8022D3B8: jal         0x8005044C
    // 0x8022D3BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8022D3BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022D3C0:
    // 0x8022D3C0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022D3C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D3C8: bne         $v1, $v0, L_8022D3E0
    if (ctx->r3 != ctx->r2) {
        // 0x8022D3CC: addiu       $v0, $zero, -0x8000
        ctx->r2 = ADD32(0, -0X8000);
            goto L_8022D3E0;
    }
    // 0x8022D3CC: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x8022D3D0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022D3D4: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
    // 0x8022D3D8: sb          $zero, 0x1($s1)
    MEM_B(0X1, ctx->r17) = 0;
    // 0x8022D3DC: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_8022D3E0:
    // 0x8022D3E0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D3E4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D3E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D3EC: jr          $ra
    // 0x8022D3F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D3F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D604_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D604: lb          $v0, 0xE($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XE);
    // 0x8022D608: bne         $v0, $zero, L_8022D630
    if (ctx->r2 != 0) {
        // 0x8022D60C: addiu       $sp, $sp, -0x10
        ctx->r29 = ADD32(ctx->r29, -0X10);
            goto L_8022D630;
    }
    // 0x8022D60C: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8022D610: lh          $v1, 0x56($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X56);
    // 0x8022D614: lh          $v0, 0x380($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X380);
    // 0x8022D618: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    // 0x8022D61C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D620: beq         $v1, $v0, L_8022D648
    if (ctx->r3 == ctx->r2) {
        // 0x8022D624: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8022D648;
    }
    // 0x8022D624: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8022D628: j           L_8022D660
    // 0x8022D62C: addiu       $v0, $a1, -0x40
    ctx->r2 = ADD32(ctx->r5, -0X40);
        goto L_8022D660;
    // 0x8022D62C: addiu       $v0, $a1, -0x40
    ctx->r2 = ADD32(ctx->r5, -0X40);
L_8022D630:
    // 0x8022D630: lh          $v1, 0x56($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X56);
    // 0x8022D634: lh          $v0, 0x380($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X380);
    // 0x8022D638: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x8022D63C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D640: bne         $v1, $v0, L_8022D65C
    if (ctx->r3 != ctx->r2) {
        // 0x8022D644: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8022D65C;
    }
    // 0x8022D644: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_8022D648:
    // 0x8022D648: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D64C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022D650: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022D654: j           L_8022D664
    // 0x8022D658: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
        goto L_8022D664;
    // 0x8022D658: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
L_8022D65C:
    // 0x8022D65C: addiu       $v0, $a1, 0x40
    ctx->r2 = ADD32(ctx->r5, 0X40);
L_8022D660:
    // 0x8022D660: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
L_8022D664:
    // 0x8022D664: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x8022D668: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D66C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x8022D670: jr          $ra
    // 0x8022D674: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8022D674: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8022BC10_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BC10: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8022BC14: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022BC18: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022BC1C: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x8022BC20: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8022BC24: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x8022BC28: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x8022BC2C: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x8022BC30: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x8022BC34: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8022BC38: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8022BC3C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022BC40: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022BC44: lbu         $v0, 0xAC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022BC48: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022BC4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022BC50: jal         0x8009A3B4
    // 0x8022BC54: sb          $v0, 0xAD($s2)
    MEM_B(0XAD, ctx->r18) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022BC54: sb          $v0, 0xAD($s2)
    MEM_B(0XAD, ctx->r18) = ctx->r2;
    after_0:
    // 0x8022BC58: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x8022BC5C: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8022BC60: jal         0x8009A3B4
    // 0x8022BC64: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022BC64: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022BC68: addiu       $a0, $s2, 0x5C
    ctx->r4 = ADD32(ctx->r18, 0X5C);
    // 0x8022BC6C: addiu       $a1, $s2, 0x54
    ctx->r5 = ADD32(ctx->r18, 0X54);
    // 0x8022BC70: jal         0x8009A3B4
    // 0x8022BC74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022BC74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022BC78: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022BC7C: jal         0x800A3450
    // 0x8022BC80: sh          $v0, 0x15E($s2)
    MEM_H(0X15E, ctx->r18) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022BC80: sh          $v0, 0x15E($s2)
    MEM_H(0X15E, ctx->r18) = ctx->r2;
    after_3:
    // 0x8022BC84: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x8022BC88: sh          $v0, 0x32A($s2)
    MEM_H(0X32A, ctx->r18) = ctx->r2;
    // 0x8022BC8C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022BC90: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022BC94: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BC98: lw          $v0, -0x7D60($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7D60);
    // 0x8022BC9C: jalr        $v0
    // 0x8022BCA0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8022BCA0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x8022BCA4: addiu       $a0, $s2, 0x35C
    ctx->r4 = ADD32(ctx->r18, 0X35C);
    // 0x8022BCA8: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8022BCAC: addiu       $a1, $a1, -0x3D98
    ctx->r5 = ADD32(ctx->r5, -0X3D98);
    // 0x8022BCB0: jal         0x8003BD00
    // 0x8022BCB4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8003BD00_17100(rdram, ctx);
        goto after_5;
    // 0x8022BCB4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_5:
    // 0x8022BCB8: jal         0x80051248
    // 0x8022BCBC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_6;
    // 0x8022BCBC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x8022BCC0: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022BCC4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022BCC8: beq         $v0, $zero, L_8022BCE4
    if (ctx->r2 == 0) {
        // 0x8022BCCC: addiu       $s6, $s2, 0x328
        ctx->r22 = ADD32(ctx->r18, 0X328);
            goto L_8022BCE4;
    }
    // 0x8022BCCC: addiu       $s6, $s2, 0x328
    ctx->r22 = ADD32(ctx->r18, 0X328);
    // 0x8022BCD0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022BCD4: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022BCD8: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022BCDC: jal         0x8003B564
    // 0x8022BCE0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x8022BCE0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
L_8022BCE4:
    // 0x8022BCE4: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022BCE8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022BCEC: beql        $v0, $zero, L_8022BEA8
    if (ctx->r2 == 0) {
        // 0x8022BCF0: sw          $zero, 0x14($s6)
        MEM_W(0X14, ctx->r22) = 0;
            goto L_8022BEA8;
    }
    goto skip_0;
    // 0x8022BCF0: sw          $zero, 0x14($s6)
    MEM_W(0X14, ctx->r22) = 0;
    skip_0:
    // 0x8022BCF4: lhu         $v0, 0x328($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X328);
    // 0x8022BCF8: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8022BCFC: beq         $v0, $zero, L_8022BD54
    if (ctx->r2 == 0) {
        // 0x8022BD00: addiu       $s0, $s2, 0x334
        ctx->r16 = ADD32(ctx->r18, 0X334);
            goto L_8022BD54;
    }
    // 0x8022BD00: addiu       $s0, $s2, 0x334
    ctx->r16 = ADD32(ctx->r18, 0X334);
    // 0x8022BD04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BD08: addiu       $a1, $s2, 0x188
    ctx->r5 = ADD32(ctx->r18, 0X188);
    // 0x8022BD0C: jal         0x8009A3B4
    // 0x8022BD10: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022BD10: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8022BD14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BD18: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8022BD1C: lbu         $v1, 0x1($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X1);
    // 0x8022BD20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BD24: addiu       $v0, $s2, 0x33C
    ctx->r2 = ADD32(ctx->r18, 0X33C);
    // 0x8022BD28: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022BD2C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022BD30: lhu         $v1, 0x330($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X330);
    // 0x8022BD34: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022BD38: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022BD3C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022BD40: lui         $v0, 0x488
    ctx->r2 = S32(0X488 << 16);
    // 0x8022BD44: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022BD48: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022BD4C: jal         0x80051E18
    // 0x8022BD50: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_9;
    // 0x8022BD50: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_9:
L_8022BD54:
    // 0x8022BD54: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022BD58: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022BD5C: beql        $v0, $zero, L_8022BEA8
    if (ctx->r2 == 0) {
        // 0x8022BD60: sw          $zero, 0x14($s6)
        MEM_W(0X14, ctx->r22) = 0;
            goto L_8022BEA8;
    }
    goto skip_1;
    // 0x8022BD60: sw          $zero, 0x14($s6)
    MEM_W(0X14, ctx->r22) = 0;
    skip_1:
    // 0x8022BD64: lbu         $v1, 0xF($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XF);
    // 0x8022BD68: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x8022BD6C: bnel        $v0, $zero, L_8022BEA8
    if (ctx->r2 != 0) {
        // 0x8022BD70: sw          $zero, 0x14($s6)
        MEM_W(0X14, ctx->r22) = 0;
            goto L_8022BEA8;
    }
    goto skip_2;
    // 0x8022BD70: sw          $zero, 0x14($s6)
    MEM_W(0X14, ctx->r22) = 0;
    skip_2:
    // 0x8022BD74: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x8022BD78: bne         $v0, $zero, L_8022BD94
    if (ctx->r2 != 0) {
        // 0x8022BD7C: andi        $v0, $v1, 0x1
        ctx->r2 = ctx->r3 & 0X1;
            goto L_8022BD94;
    }
    // 0x8022BD7C: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8022BD80: lw          $a0, 0x374($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X374);
    // 0x8022BD84: jal         0x80227A70
    // 0x8022BD88: nop

    func_80227A70_ovl31(rdram, ctx);
        goto after_10;
    // 0x8022BD88: nop

    after_10:
    // 0x8022BD8C: lbu         $v1, 0xF($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XF);
    // 0x8022BD90: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
L_8022BD94:
    // 0x8022BD94: beq         $v0, $zero, L_8022BDC0
    if (ctx->r2 == 0) {
        // 0x8022BD98: andi        $v0, $v1, 0x4
        ctx->r2 = ctx->r3 & 0X4;
            goto L_8022BDC0;
    }
    // 0x8022BD98: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x8022BD9C: bne         $v0, $zero, L_8022BDB4
    if (ctx->r2 != 0) {
        // 0x8022BDA0: nop
    
            goto L_8022BDB4;
    }
    // 0x8022BDA0: nop

    // 0x8022BDA4: lw          $v0, 0x378($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X378);
    // 0x8022BDA8: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x8022BDAC: lw          $v0, 0x37C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X37C);
    // 0x8022BDB0: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
L_8022BDB4:
    // 0x8022BDB4: lbu         $v0, 0xF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XF);
    // 0x8022BDB8: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x8022BDBC: sb          $v0, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r2;
L_8022BDC0:
    // 0x8022BDC0: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8022BDC4: lui         $fp, 0x8024
    ctx->r30 = S32(0X8024 << 16);
    // 0x8022BDC8: addiu       $fp, $fp, -0x6F90
    ctx->r30 = ADD32(ctx->r30, -0X6F90);
    // 0x8022BDCC: addiu       $s5, $s2, 0x14
    ctx->r21 = ADD32(ctx->r18, 0X14);
    // 0x8022BDD0: lui         $s7, 0x8024
    ctx->r23 = S32(0X8024 << 16);
    // 0x8022BDD4: addiu       $s7, $s7, -0x6F88
    ctx->r23 = ADD32(ctx->r23, -0X6F88);
    // 0x8022BDD8: addiu       $s4, $s2, 0x1C
    ctx->r20 = ADD32(ctx->r18, 0X1C);
L_8022BDDC:
    // 0x8022BDDC: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    // 0x8022BDE0: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8022BDE4: jal         0x8009A3B4
    // 0x8022BDE8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x8022BDE8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_11:
    // 0x8022BDEC: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x8022BDF0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8022BDF4: jal         0x8009A3B4
    // 0x8022BDF8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x8022BDF8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_12:
    // 0x8022BDFC: lhu         $s1, 0x56($s2)
    ctx->r17 = MEM_HU(ctx->r18, 0X56);
    // 0x8022BE00: lhu         $v0, 0x46($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X46);
    // 0x8022BE04: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022BE08: sll         $s0, $s3, 16
    ctx->r16 = S32(ctx->r19 << 16);
    // 0x8022BE0C: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8022BE10: lui         $t0, 0x8024
    ctx->r8 = S32(0X8024 << 16);
    // 0x8022BE14: addiu       $t0, $t0, -0x7D3C
    ctx->r8 = ADD32(ctx->r8, -0X7D3C);
    // 0x8022BE18: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022BE1C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022BE20: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x8022BE24: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x8022BE28: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8022BE2C: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x8022BE30: addiu       $a2, $zero, -0x8A0
    ctx->r6 = ADD32(0, -0X8A0);
    // 0x8022BE34: jal         0x8004DA90
    // 0x8022BE38: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_13;
    // 0x8022BE38: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_13:
    // 0x8022BE3C: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x8022BE40: addu        $s0, $s0, $s6
    ctx->r16 = ADD32(ctx->r16, ctx->r22);
    // 0x8022BE44: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x8022BE48: lhu         $v0, 0x14($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X14);
    // 0x8022BE4C: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x8022BE50: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x8022BE54: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x8022BE58: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022BE5C: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x8022BE60: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x8022BE64: lhu         $v0, 0x18($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X18);
    // 0x8022BE68: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    // 0x8022BE6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022BE70: jal         0x8009A3B4
    // 0x8022BE74: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x8022BE74: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    after_14:
    // 0x8022BE78: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022BE7C: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x8022BE80: jal         0x8009A3B4
    // 0x8022BE84: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x8022BE84: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_15:
    // 0x8022BE88: addiu       $v0, $s3, 0x1
    ctx->r2 = ADD32(ctx->r19, 0X1);
    // 0x8022BE8C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8022BE90: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BE94: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BE98: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8022BE9C: bne         $v0, $zero, L_8022BDDC
    if (ctx->r2 != 0) {
        // 0x8022BEA0: sh          $s1, 0x56($s2)
        MEM_H(0X56, ctx->r18) = ctx->r17;
            goto L_8022BDDC;
    }
    // 0x8022BEA0: sh          $s1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r17;
    // 0x8022BEA4: sw          $zero, 0x14($s6)
    MEM_W(0X14, ctx->r22) = 0;
L_8022BEA8:
    // 0x8022BEA8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8022BEAC: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x8022BEB0: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x8022BEB4: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8022BEB8: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8022BEBC: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8022BEC0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8022BEC4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022BEC8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022BECC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022BED0: jr          $ra
    // 0x8022BED4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8022BED4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80227E78_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227E78: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80227E7C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80227E80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227E84: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80227E88: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80227E8C: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x80227E90: lhu         $v0, 0x364($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X364);
    // 0x80227E94: addiu       $a0, $s0, 0x34C
    ctx->r4 = ADD32(ctx->r16, 0X34C);
    // 0x80227E98: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80227E9C: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80227EA0: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80227EA4: jal         0x800540EC
    // 0x80227EA8: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_800540EC_2F4EC(rdram, ctx);
        goto after_0;
    // 0x80227EA8: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_0:
    // 0x80227EAC: beq         $v0, $zero, L_80227EC0
    if (ctx->r2 == 0) {
        // 0x80227EB0: nop
    
            goto L_80227EC0;
    }
    // 0x80227EB0: nop

    // 0x80227EB4: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x80227EB8: j           L_80227EC8
    // 0x80227EBC: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
        goto L_80227EC8;
    // 0x80227EBC: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
L_80227EC0:
    // 0x80227EC0: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x80227EC4: andi        $v0, $v0, 0xFEFF
    ctx->r2 = ctx->r2 & 0XFEFF;
L_80227EC8:
    // 0x80227EC8: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    // 0x80227ECC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80227ED0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80227ED4: beq         $v0, $zero, L_80227EE4
    if (ctx->r2 == 0) {
        // 0x80227ED8: nop
    
            goto L_80227EE4;
    }
    // 0x80227ED8: nop

    // 0x80227EDC: jal         0x80229AE8
    // 0x80227EE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80229AE8_ovl31(rdram, ctx);
        goto after_1;
    // 0x80227EE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80227EE4:
    // 0x80227EE4: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x80227EE8: lhu         $v0, 0x3C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3C);
    // 0x80227EEC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227EF0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80227EF4: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80227EF8: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x80227EFC: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80227F00: jal         0x8004F820
    // 0x80227F04: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80227F04: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_2:
    // 0x80227F08: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80227F0C: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
    // 0x80227F10: lhu         $a0, 0x3C($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X3C);
    // 0x80227F14: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80227F18: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227F1C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80227F20: addiu       $v0, $v0, 0x500
    ctx->r2 = ADD32(ctx->r2, 0X500);
    // 0x80227F24: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227F28: slti        $v0, $v0, 0xA00
    ctx->r2 = SIGNED(ctx->r2) < 0XA00 ? 1 : 0;
    // 0x80227F2C: beq         $v0, $zero, L_80227F38
    if (ctx->r2 == 0) {
        // 0x80227F30: addu        $v0, $a0, $v1
        ctx->r2 = ADD32(ctx->r4, ctx->r3);
            goto L_80227F38;
    }
    // 0x80227F30: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x80227F34: sh          $v0, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r2;
L_80227F38:
    // 0x80227F38: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227F3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227F40: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227F44: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227F48: lw          $v0, -0x7E3C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7E3C);
    // 0x80227F4C: jalr        $v0
    // 0x80227F50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80227F50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80227F54: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80227F58: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80227F5C: beq         $v0, $zero, L_80227FE8
    if (ctx->r2 == 0) {
        // 0x80227F60: nop
    
            goto L_80227FE8;
    }
    // 0x80227F60: nop

    // 0x80227F64: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80227F68: sltiu       $v0, $v1, 0xE
    ctx->r2 = ctx->r3 < 0XE ? 1 : 0;
    // 0x80227F6C: beq         $v0, $zero, L_80227FD4
    if (ctx->r2 == 0) {
        // 0x80227F70: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80227FD4;
    }
    // 0x80227F70: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227F74: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227F78: addu        $at, $at, $v0
    gpr jr_addend_80227F80 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227F7C: lw          $v0, -0x7238($at)
    ctx->r2 = ADD32(ctx->r1, -0X7238);
    // 0x80227F80: jr          $v0
    // 0x80227F84: nop

    switch (jr_addend_80227F80 >> 2) {
        case 0: goto L_80227FB8; break;
        case 1: goto L_80227FD4; break;
        case 2: goto L_80227FD4; break;
        case 3: goto L_80227FB8; break;
        case 4: goto L_80227FA0; break;
        case 5: goto L_80227FD4; break;
        case 6: goto L_80227F88; break;
        case 7: goto L_80227F94; break;
        case 8: goto L_80227FC8; break;
        case 9: goto L_80227FC8; break;
        case 10: goto L_80227FD4; break;
        case 11: goto L_80227FB8; break;
        case 12: goto L_80227FAC; break;
        case 13: goto L_80227FB8; break;
        default: switch_error(__func__, 0x80227F80, 0x80238DC8);
    }
    // 0x80227F84: nop

L_80227F88:
    // 0x80227F88: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80227F8C: j           L_80227FD8
    // 0x80227F90: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80227FD8;
    // 0x80227F90: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227F94:
    // 0x80227F94: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80227F98: j           L_80227FD8
    // 0x80227F9C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80227FD8;
    // 0x80227F9C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227FA0:
    // 0x80227FA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227FA4: j           L_80227FD8
    // 0x80227FA8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80227FD8;
    // 0x80227FA8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227FAC:
    // 0x80227FAC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227FB0: j           L_80227FD8
    // 0x80227FB4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80227FD8;
    // 0x80227FB4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227FB8:
    // 0x80227FB8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80227FBC: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x80227FC0: beql        $v0, $zero, L_80227FD8
    if (ctx->r2 == 0) {
        // 0x80227FC4: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_80227FD8;
    }
    goto skip_0;
    // 0x80227FC4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_0:
L_80227FC8:
    // 0x80227FC8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227FCC: j           L_80227FD8
    // 0x80227FD0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80227FD8;
    // 0x80227FD0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227FD4:
    // 0x80227FD4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80227FD8:
    // 0x80227FD8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80227FDC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80227FE0: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80227FE4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80227FE8:
    // 0x80227FE8: lh          $v0, 0x34($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X34);
    // 0x80227FEC: beq         $v0, $zero, L_80227FFC
    if (ctx->r2 == 0) {
        // 0x80227FF0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80227FFC;
    }
    // 0x80227FF0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80227FF4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80227FF8: sh          $v0, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r2;
L_80227FFC:
    // 0x80227FFC: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x80228000: beq         $v0, $zero, L_80228010
    if (ctx->r2 == 0) {
        // 0x80228004: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80228010;
    }
    // 0x80228004: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228008: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022800C: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_80228010:
    // 0x80228010: lh          $v0, 0x36($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X36);
    // 0x80228014: beq         $v0, $zero, L_80228024
    if (ctx->r2 == 0) {
        // 0x80228018: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80228024;
    }
    // 0x80228018: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022801C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80228020: sh          $v0, 0x36($s1)
    MEM_H(0X36, ctx->r17) = ctx->r2;
L_80228024:
    // 0x80228024: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80228028: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x8022802C: beq         $v0, $zero, L_802280E0
    if (ctx->r2 == 0) {
        // 0x80228030: nop
    
            goto L_802280E0;
    }
    // 0x80228030: nop

    // 0x80228034: lhu         $v0, 0x38($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X38);
    // 0x80228038: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022803C: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    // 0x80228040: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228044: bgez        $v0, L_802280E0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228048: nop
    
            goto L_802280E0;
    }
    // 0x80228048: nop

    // 0x8022804C: jal         0x8004F144
    // 0x80228050: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x80228050: nop

    after_4:
    // 0x80228054: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228058: beq         $v1, $zero, L_80228094
    if (ctx->r3 == 0) {
        // 0x8022805C: sw          $v1, 0x50($s1)
        MEM_W(0X50, ctx->r17) = ctx->r3;
            goto L_80228094;
    }
    // 0x8022805C: sw          $v1, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r3;
    // 0x80228060: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228064: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80228068: lw          $v1, 0x50($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X50);
    // 0x8022806C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80228070: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80228074: lw          $v1, 0x50($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X50);
    // 0x80228078: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8022807C: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80228080: lw          $a0, 0x50($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X50);
    // 0x80228084: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80228088: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022808C: jal         0x8009A3B4
    // 0x80228090: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80228090: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    after_5:
L_80228094:
    // 0x80228094: jal         0x8004F418
    // 0x80228098: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_6;
    // 0x80228098: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022809C: lw          $a0, 0x44($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X44);
    // 0x802280A0: jal         0x8004F5C4
    // 0x802280A4: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_7;
    // 0x802280A4: nop

    after_7:
    // 0x802280A8: jal         0x8004F5C4
    // 0x802280AC: lw          $a0, 0x48($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X48);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_8;
    // 0x802280AC: lw          $a0, 0x48($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X48);
    after_8:
    // 0x802280B0: lw          $v0, 0x40($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X40);
    // 0x802280B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802280B8: addiu       $s0, $a0, 0x180
    ctx->r16 = ADD32(ctx->r4, 0X180);
    // 0x802280BC: lbu         $v1, 0xF($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XF);
    // 0x802280C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802280C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802280C8: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802280CC: jal         0x8007A290
    // 0x802280D0: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    func_8007A290_55690(rdram, ctx);
        goto after_9;
    // 0x802280D0: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    after_9:
    // 0x802280D4: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    // 0x802280D8: jal         0x8002A33C
    // 0x802280DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x802280DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
L_802280E0:
    // 0x802280E0: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x802280E4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802280E8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802280EC: jr          $ra
    // 0x802280F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802280F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80228E9C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228E9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228EA0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228EA4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228EA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228EAC: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80228EB0: sltiu       $v0, $a0, 0x5
    ctx->r2 = ctx->r4 < 0X5 ? 1 : 0;
    // 0x80228EB4: beq         $v0, $zero, L_80229008
    if (ctx->r2 == 0) {
        // 0x80228EB8: addiu       $v1, $s0, 0x328
        ctx->r3 = ADD32(ctx->r16, 0X328);
            goto L_80229008;
    }
    // 0x80228EB8: addiu       $v1, $s0, 0x328
    ctx->r3 = ADD32(ctx->r16, 0X328);
    // 0x80228EBC: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80228EC0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228EC4: addu        $at, $at, $v0
    gpr jr_addend_80228ECC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228EC8: lw          $v0, -0x71D0($at)
    ctx->r2 = ADD32(ctx->r1, -0X71D0);
    // 0x80228ECC: jr          $v0
    // 0x80228ED0: nop

    switch (jr_addend_80228ECC >> 2) {
        case 0: goto L_80228ED4; break;
        case 1: goto L_80228EF0; break;
        case 2: goto L_80228F14; break;
        case 3: goto L_80228F38; break;
        case 4: goto L_80228FE4; break;
        default: switch_error(__func__, 0x80228ECC, 0x80238E30);
    }
    // 0x80228ED0: nop

L_80228ED4:
    // 0x80228ED4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228ED8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228EDC: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x80228EE0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228EE4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80228EE8: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x80228EEC: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
L_80228EF0:
    // 0x80228EF0: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x80228EF4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228EF8: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x80228EFC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228F00: bgez        $v0, L_80229008
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228F04: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229008;
    }
    // 0x80228F04: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228F08: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228F0C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80228F10: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
L_80228F14:
    // 0x80228F14: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x80228F18: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228F1C: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x80228F20: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228F24: bgez        $v0, L_80229008
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228F28: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80229008;
    }
    // 0x80228F28: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228F2C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228F30: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80228F34: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
L_80228F38:
    // 0x80228F38: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x80228F3C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228F40: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x80228F44: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228F48: bgez        $v0, L_80228F64
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228F4C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228F64;
    }
    // 0x80228F4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228F50: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80228F54: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228F58: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80228F5C: j           L_80228FE4
    // 0x80228F60: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
        goto L_80228FE4;
    // 0x80228F60: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
L_80228F64:
    // 0x80228F64: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x80228F68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228F6C: jal         0x8004DA90
    // 0x80228F70: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80228F70: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80228F74: jal         0x80040F30
    // 0x80228F78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x80228F78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80228F7C: jal         0x8003E934
    // 0x80228F80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x80228F80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80228F84: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80228F88: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80228F8C: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80228F90: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228F94: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80228F98: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80228F9C: bltz        $v0, L_80228FB4
    if (SIGNED(ctx->r2) < 0) {
        // 0x80228FA0: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_80228FB4;
    }
    // 0x80228FA0: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80228FA4: beq         $v0, $zero, L_80228FC4
    if (ctx->r2 == 0) {
        // 0x80228FA8: nop
    
            goto L_80228FC4;
    }
    // 0x80228FA8: nop

    // 0x80228FAC: j           L_80229008
    // 0x80228FB0: nop

        goto L_80229008;
    // 0x80228FB0: nop

L_80228FB4:
    // 0x80228FB4: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x80228FB8: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80228FBC: bne         $v0, $zero, L_80229008
    if (ctx->r2 != 0) {
        // 0x80228FC0: nop
    
            goto L_80229008;
    }
    // 0x80228FC0: nop

L_80228FC4:
    // 0x80228FC4: lhu         $v0, 0x2E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2E);
    // 0x80228FC8: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x80228FCC: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x80228FD0: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x80228FD4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80228FD8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80228FDC: j           L_80229008
    // 0x80228FE0: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
        goto L_80229008;
    // 0x80228FE0: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
L_80228FE4:
    // 0x80228FE4: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x80228FE8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228FEC: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x80228FF0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228FF4: bgez        $v0, L_80229008
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228FF8: nop
    
            goto L_80229008;
    }
    // 0x80228FF8: nop

    // 0x80228FFC: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80229000: ori         $v0, $v0, 0x21
    ctx->r2 = ctx->r2 | 0X21;
    // 0x80229004: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_80229008:
    // 0x80229008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022900C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229010: jr          $ra
    // 0x80229014: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229014: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C274_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C274: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C278: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022C27C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C280: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C284: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022C288: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022C28C: beq         $v0, $zero, L_8022C29C
    if (ctx->r2 == 0) {
        // 0x8022C290: nop
    
            goto L_8022C29C;
    }
    // 0x8022C290: nop

    // 0x8022C294: jal         0x8022C718
    // 0x8022C298: nop

    func_8022C718_ovl31(rdram, ctx);
        goto after_0;
    // 0x8022C298: nop

    after_0:
L_8022C29C:
    // 0x8022C29C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022C2A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C2A4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022C2A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C2AC: lw          $v0, -0x7D54($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7D54);
    // 0x8022C2B0: jalr        $v0
    // 0x8022C2B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022C2B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022C2B8: lh          $v0, 0x332($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X332);
    // 0x8022C2BC: beq         $v0, $zero, L_8022C2CC
    if (ctx->r2 == 0) {
        // 0x8022C2C0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022C2CC;
    }
    // 0x8022C2C0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C2C4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022C2C8: sh          $v0, 0x332($s0)
    MEM_H(0X332, ctx->r16) = ctx->r2;
L_8022C2CC:
    // 0x8022C2CC: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022C2D0: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022C2D4: bne         $v0, $zero, L_8022C2EC
    if (ctx->r2 != 0) {
        // 0x8022C2D8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C2EC;
    }
    // 0x8022C2D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C2DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022C2E0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022C2E4: jal         0x80047284
    // 0x8022C2E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_2;
    // 0x8022C2E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
L_8022C2EC:
    // 0x8022C2EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C2F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022C2F4: jr          $ra
    // 0x8022C2F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C2F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023308C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023308C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233090: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233094: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233098: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023309C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802330A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802330A4: lhu         $v0, 0x1DA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1DA);
    // 0x802330A8: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x802330AC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802330B0: beq         $v0, $zero, L_802330DC
    if (ctx->r2 == 0) {
        // 0x802330B4: addiu       $s1, $s0, 0x64
        ctx->r17 = ADD32(ctx->r16, 0X64);
            goto L_802330DC;
    }
    // 0x802330B4: addiu       $s1, $s0, 0x64
    ctx->r17 = ADD32(ctx->r16, 0X64);
    // 0x802330B8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x802330BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802330C0: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x802330C4: jal         0x80050294
    // 0x802330C8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802330C8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x802330CC: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802330D0: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x802330D4: j           L_80233104
    // 0x802330D8: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
        goto L_80233104;
    // 0x802330D8: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
L_802330DC:
    // 0x802330DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802330E0: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x802330E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802330E8: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x802330EC: jal         0x80050294
    // 0x802330F0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802330F0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x802330F4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802330F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802330FC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80233100: sh          $v1, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r3;
L_80233104:
    // 0x80233104: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233108: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023310C: sb          $v0, 0x3F($s2)
    MEM_B(0X3F, ctx->r18) = ctx->r2;
    // 0x80233110: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80233114: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80233118: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
    // 0x8023311C: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80233120: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80233124: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80233128: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023312C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233130: jr          $ra
    // 0x80233134: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233134: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80235298_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235298: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023529C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802352A0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802352A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802352A8: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x802352AC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802352B0: jal         0x8002C678
    // 0x802352B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x802352B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802352B8: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x802352BC: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x802352C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802352C4: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x802352C8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802352CC: jal         0x800319B4
    // 0x802352D0: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x802352D0: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    after_1:
    // 0x802352D4: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x802352D8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802352DC: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x802352E0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802352E4: bne         $v0, $zero, L_8023532C
    if (ctx->r2 != 0) {
        // 0x802352E8: nop
    
            goto L_8023532C;
    }
    // 0x802352E8: nop

    // 0x802352EC: jal         0x8002A46C
    // 0x802352F0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_8002A46C_586C(rdram, ctx);
        goto after_2;
    // 0x802352F0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_2:
    // 0x802352F4: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x802352F8: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x802352FC: lw          $a0, 0x44($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X44);
    // 0x80235300: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235304: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80235308: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8023530C: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80235310: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x80235314: lw          $v1, 0x30($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X30);
    // 0x80235318: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023531C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235320: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80235324: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235328: sw          $v1, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = ctx->r3;
L_8023532C:
    // 0x8023532C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80235330: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235334: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235338: jr          $ra
    // 0x8023533C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023533C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230CF0_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230CF0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80230CF4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80230CF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230CFC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80230D00: jal         0x80053ED8
    // 0x80230D04: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x80230D04: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    after_0:
    // 0x80230D08: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80230D0C: lh          $v0, 0x6E($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X6E);
    // 0x80230D10: bltz        $v0, L_80230DA0
    if (SIGNED(ctx->r2) < 0) {
        // 0x80230D14: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80230DA0;
    }
    // 0x80230D14: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230D18: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    // 0x80230D1C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80230D20: bne         $v0, $zero, L_80230D30
    if (ctx->r2 != 0) {
        // 0x80230D24: nop
    
            goto L_80230D30;
    }
    // 0x80230D24: nop

    // 0x80230D28: jal         0x8005044C
    // 0x80230D2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80230D2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80230D30:
    // 0x80230D30: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80230D34: blez        $v0, L_80230D64
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80230D38: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_80230D64;
    }
    // 0x80230D38: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80230D3C: jal         0x80053ED8
    // 0x80230D40: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_2;
    // 0x80230D40: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    after_2:
    // 0x80230D44: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80230D48: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x80230D4C: lh          $v0, 0x6E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X6E);
    // 0x80230D50: bltz        $v0, L_80230D64
    if (SIGNED(ctx->r2) < 0) {
        // 0x80230D54: addiu       $a1, $s0, 0x188
        ctx->r5 = ADD32(ctx->r16, 0X188);
            goto L_80230D64;
    }
    // 0x80230D54: addiu       $a1, $s0, 0x188
    ctx->r5 = ADD32(ctx->r16, 0X188);
    // 0x80230D58: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80230D5C: jal         0x8009A3B4
    // 0x80230D60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80230D60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
L_80230D64:
    // 0x80230D64: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80230D68: blez        $v0, L_80230DA4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80230D6C: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_80230DA4;
    }
    // 0x80230D6C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80230D70: jal         0x80053ED8
    // 0x80230D74: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_4;
    // 0x80230D74: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    after_4:
    // 0x80230D78: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80230D7C: sw          $a0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r4;
    // 0x80230D80: lh          $v0, 0x6E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X6E);
    // 0x80230D84: bltz        $v0, L_80230DA4
    if (SIGNED(ctx->r2) < 0) {
        // 0x80230D88: addiu       $a0, $a0, 0x14
        ctx->r4 = ADD32(ctx->r4, 0X14);
            goto L_80230DA4;
    }
    // 0x80230D88: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80230D8C: addiu       $a1, $s0, 0x190
    ctx->r5 = ADD32(ctx->r16, 0X190);
    // 0x80230D90: jal         0x8009A3B4
    // 0x80230D94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80230D94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80230D98: j           L_80230DA4
    // 0x80230D9C: nop

        goto L_80230DA4;
    // 0x80230D9C: nop

L_80230DA0:
    // 0x80230DA0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80230DA4:
    // 0x80230DA4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80230DA8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80230DAC: jr          $ra
    // 0x80230DB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80230DB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80229858_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229858: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022985C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229860: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229864: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229868: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022986C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80229870: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229874: addiu       $v0, $v0, 0x49B0
    ctx->r2 = ADD32(ctx->r2, 0X49B0);
    // 0x80229878: sw          $v0, 0x380($s0)
    MEM_W(0X380, ctx->r16) = ctx->r2;
    // 0x8022987C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229880: beq         $v1, $v0, L_802298E8
    if (ctx->r3 == ctx->r2) {
        // 0x80229884: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_802298E8;
    }
    // 0x80229884: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80229888: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022988C: beql        $v0, $zero, L_802298A4
    if (ctx->r2 == 0) {
        // 0x80229890: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802298A4;
    }
    goto skip_0;
    // 0x80229890: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80229894: beq         $v1, $zero, L_802298BC
    if (ctx->r3 == 0) {
        // 0x80229898: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_802298BC;
    }
    // 0x80229898: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022989C: j           L_80229A6C
    // 0x802298A0: nop

        goto L_80229A6C;
    // 0x802298A0: nop

L_802298A4:
    // 0x802298A4: beq         $v1, $v0, L_802299B4
    if (ctx->r3 == ctx->r2) {
        // 0x802298A8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802299B4;
    }
    // 0x802298A8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802298AC: beq         $v1, $v0, L_80229A14
    if (ctx->r3 == ctx->r2) {
        // 0x802298B0: nop
    
            goto L_80229A14;
    }
    // 0x802298B0: nop

    // 0x802298B4: j           L_80229A6C
    // 0x802298B8: nop

        goto L_80229A6C;
    // 0x802298B8: nop

L_802298BC:
    // 0x802298BC: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x802298C0: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x802298C4: beq         $v0, $zero, L_802298D4
    if (ctx->r2 == 0) {
        // 0x802298C8: sb          $v1, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r3;
            goto L_802298D4;
    }
    // 0x802298C8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x802298CC: j           L_802298D8
    // 0x802298D0: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
        goto L_802298D8;
    // 0x802298D0: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
L_802298D4:
    // 0x802298D4: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
L_802298D8:
    // 0x802298D8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802298DC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802298E0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802298E4: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
L_802298E8:
    // 0x802298E8: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802298EC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802298F0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802298F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802298F8: bgez        $v0, L_80229914
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802298FC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229914;
    }
    // 0x802298FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229900: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229904: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229908: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022990C: j           L_802299B4
    // 0x80229910: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_802299B4;
    // 0x80229910: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80229914:
    // 0x80229914: addiu       $a1, $zero, 0x180
    ctx->r5 = ADD32(0, 0X180);
    // 0x80229918: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022991C: jal         0x8004DA90
    // 0x80229920: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80229920: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80229924: jal         0x80040F30
    // 0x80229928: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x80229928: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022992C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229930: jal         0x8003E934
    // 0x80229934: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x80229934: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    after_2:
    // 0x80229938: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022993C: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80229940: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80229944: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229948: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022994C: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80229950: bltz        $v0, L_80229968
    if (SIGNED(ctx->r2) < 0) {
        // 0x80229954: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_80229968;
    }
    // 0x80229954: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80229958: beq         $v0, $zero, L_80229978
    if (ctx->r2 == 0) {
        // 0x8022995C: nop
    
            goto L_80229978;
    }
    // 0x8022995C: nop

    // 0x80229960: j           L_80229998
    // 0x80229964: nop

        goto L_80229998;
    // 0x80229964: nop

L_80229968:
    // 0x80229968: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022996C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80229970: bne         $v0, $zero, L_80229998
    if (ctx->r2 != 0) {
        // 0x80229974: nop
    
            goto L_80229998;
    }
    // 0x80229974: nop

L_80229978:
    // 0x80229978: lhu         $v0, 0x2E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2E);
    // 0x8022997C: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x80229980: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x80229984: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x80229988: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022998C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229990: j           L_80229A6C
    // 0x80229994: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
        goto L_80229A6C;
    // 0x80229994: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
L_80229998:
    // 0x80229998: lw          $v0, 0x5C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X5C);
    // 0x8022999C: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x802299A0: beq         $v0, $zero, L_80229A6C
    if (ctx->r2 == 0) {
        // 0x802299A4: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80229A6C;
    }
    // 0x802299A4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802299A8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802299AC: j           L_80229A6C
    // 0x802299B0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80229A6C;
    // 0x802299B0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_802299B4:
    // 0x802299B4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802299B8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802299BC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802299C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802299C4: bgez        $v0, L_80229A6C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802299C8: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80229A6C;
    }
    // 0x802299C8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802299CC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802299D0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802299D4: lw          $a1, 0x58($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X58);
    // 0x802299D8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802299DC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x802299E0: jal         0x8004F820
    // 0x802299E4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x802299E4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_3:
    // 0x802299E8: lui         $a0, 0x5555
    ctx->r4 = S32(0X5555 << 16);
    // 0x802299EC: ori         $a0, $a0, 0x5556
    ctx->r4 = ctx->r4 | 0X5556;
    // 0x802299F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802299F4: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802299F8: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802299FC: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80229A00: mfhi        $t0
    ctx->r8 = hi;
    // 0x80229A04: subu        $v0, $t0, $v0
    ctx->r2 = SUB32(ctx->r8, ctx->r2);
    // 0x80229A08: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x80229A0C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229A10: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80229A14:
    // 0x80229A14: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80229A18: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229A1C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80229A20: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229A24: bgez        $v0, L_80229A38
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229A28: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80229A38;
    }
    // 0x80229A28: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229A2C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229A30: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80229A34: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80229A38:
    // 0x80229A38: lw          $a1, 0x58($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X58);
    // 0x80229A3C: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x80229A40: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229A44: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x80229A48: bltzl       $a3, L_80229A50
    if (SIGNED(ctx->r7) < 0) {
        // 0x80229A4C: negu        $a3, $a3
        ctx->r7 = SUB32(0, ctx->r7);
            goto L_80229A50;
    }
    goto skip_1;
    // 0x80229A4C: negu        $a3, $a3
    ctx->r7 = SUB32(0, ctx->r7);
    skip_1:
L_80229A50:
    // 0x80229A50: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80229A54: jal         0x8004F820
    // 0x80229A58: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x80229A58: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    after_4:
    // 0x80229A5C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80229A60: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229A64: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229A68: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80229A6C:
    // 0x80229A6C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229A70: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229A74: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229A78: jr          $ra
    // 0x80229A7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229A7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FEF4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FEF4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8022FEF8: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8022FEFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FF00: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8022FF04: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x8022FF08: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8022FF0C: lbu         $v0, 0x3B4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3B4);
    // 0x8022FF10: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022FF14: bne         $v0, $zero, L_8022FF28
    if (ctx->r2 != 0) {
        // 0x8022FF18: addiu       $s1, $s0, 0x1D8
        ctx->r17 = ADD32(ctx->r16, 0X1D8);
            goto L_8022FF28;
    }
    // 0x8022FF18: addiu       $s1, $s0, 0x1D8
    ctx->r17 = ADD32(ctx->r16, 0X1D8);
    // 0x8022FF1C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022FF20: beql        $v0, $zero, L_80230358
    if (ctx->r2 == 0) {
        // 0x8022FF24: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_80230358;
    }
    goto skip_0;
    // 0x8022FF24: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_0:
L_8022FF28:
    // 0x8022FF28: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022FF2C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022FF30: beq         $v0, $zero, L_8022FF60
    if (ctx->r2 == 0) {
        // 0x8022FF34: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022FF60;
    }
    // 0x8022FF34: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022FF38: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FF3C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022FF40: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022FF44: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x8022FF48: jal         0x8004F820
    // 0x8022FF4C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022FF4C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_0:
    // 0x8022FF50: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FF54: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FF58: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022FF5C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022FF60:
    // 0x8022FF60: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022FF64: bne         $v0, $zero, L_8022FF7C
    if (ctx->r2 != 0) {
        // 0x8022FF68: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022FF7C;
    }
    // 0x8022FF68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FF6C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022FF70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FF74: jal         0x8004DA90
    // 0x8022FF78: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022FF78: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
L_8022FF7C:
    // 0x8022FF7C: lh          $v0, 0x1D8($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1D8);
    // 0x8022FF80: bne         $v0, $zero, L_8023034C
    if (ctx->r2 != 0) {
        // 0x8022FF84: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023034C;
    }
    // 0x8022FF84: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022FF88: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022FF8C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022FF90: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FF94: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022FF98: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FF9C: lw          $v0, -0x7ABC($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7ABC);
    // 0x8022FFA0: jalr        $v0
    // 0x8022FFA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8022FFA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022FFA8: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8022FFAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FFB0: bne         $v1, $v0, L_80230060
    if (ctx->r3 != ctx->r2) {
        // 0x8022FFB4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80230060;
    }
    // 0x8022FFB4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022FFB8: lbu         $v0, 0xA6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA6);
    // 0x8022FFBC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022FFC0: beq         $v0, $zero, L_8022FFCC
    if (ctx->r2 == 0) {
        // 0x8022FFC4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022FFCC;
    }
    // 0x8022FFC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FFC8: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8022FFCC:
    // 0x8022FFCC: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022FFD0: bne         $v0, $v1, L_80230028
    if (ctx->r2 != ctx->r3) {
        // 0x8022FFD4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80230028;
    }
    // 0x8022FFD4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022FFD8: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x8022FFDC: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    // 0x8022FFE0: beq         $v0, $s2, L_80230020
    if (ctx->r2 == ctx->r18) {
        // 0x8022FFE4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80230020;
    }
    // 0x8022FFE4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022FFE8: lb          $v0, 0x1DC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X1DC);
    // 0x8022FFEC: bne         $v0, $zero, L_80230014
    if (ctx->r2 != 0) {
        // 0x8022FFF0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80230014;
    }
    // 0x8022FFF0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022FFF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FFF8: jal         0x80230788
    // 0x8022FFFC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80230788_ovl31(rdram, ctx);
        goto after_3;
    // 0x8022FFFC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x80230000: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80230004: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80230008: subu        $v0, $s2, $v0
    ctx->r2 = SUB32(ctx->r18, ctx->r2);
    // 0x8023000C: j           L_80230058
    // 0x80230010: sb          $v0, 0x1DC($s0)
    MEM_B(0X1DC, ctx->r16) = ctx->r2;
        goto L_80230058;
    // 0x80230010: sb          $v0, 0x1DC($s0)
    MEM_B(0X1DC, ctx->r16) = ctx->r2;
L_80230014:
    // 0x80230014: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80230018: j           L_80230058
    // 0x8023001C: sb          $v0, 0x1DC($s0)
    MEM_B(0X1DC, ctx->r16) = ctx->r2;
        goto L_80230058;
    // 0x8023001C: sb          $v0, 0x1DC($s0)
    MEM_B(0X1DC, ctx->r16) = ctx->r2;
L_80230020:
    // 0x80230020: j           L_80230058
    // 0x80230024: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_80230058;
    // 0x80230024: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80230028:
    // 0x80230028: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8023002C: bne         $v1, $v0, L_80230058
    if (ctx->r3 != ctx->r2) {
        // 0x80230030: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80230058;
    }
    // 0x80230030: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230034: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80230038: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023003C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230040: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230044: jal         0x80050294
    // 0x80230048: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80230048: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_4:
    // 0x8023004C: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x80230050: sh          $v0, 0x1D8($s0)
    MEM_H(0X1D8, ctx->r16) = ctx->r2;
    // 0x80230054: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80230058:
    // 0x80230058: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8023005C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80230060:
    // 0x80230060: bne         $v1, $v0, L_80230150
    if (ctx->r3 != ctx->r2) {
        // 0x80230064: nop
    
            goto L_80230150;
    }
    // 0x80230064: nop

    // 0x80230068: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8023006C: bne         $v1, $zero, L_802300B0
    if (ctx->r3 != 0) {
        // 0x80230070: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802300B0;
    }
    // 0x80230070: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230074: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80230078: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023007C: bne         $v1, $v0, L_80230150
    if (ctx->r3 != ctx->r2) {
        // 0x80230080: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80230150;
    }
    // 0x80230080: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80230084: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80230088: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023008C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230090: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230094: jal         0x80050294
    // 0x80230098: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80230098: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_5:
    // 0x8023009C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802300A0: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x802300A4: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x802300A8: j           L_80230150
    // 0x802300AC: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
        goto L_80230150;
    // 0x802300AC: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_802300B0:
    // 0x802300B0: bne         $v1, $v0, L_80230120
    if (ctx->r3 != ctx->r2) {
        // 0x802300B4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80230120;
    }
    // 0x802300B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802300B8: lh          $v0, 0x2($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X2);
    // 0x802300BC: beq         $v0, $zero, L_802300FC
    if (ctx->r2 == 0) {
        // 0x802300C0: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802300FC;
    }
    // 0x802300C0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802300C4: lb          $v0, 0x4($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X4);
    // 0x802300C8: bne         $v0, $zero, L_802300E4
    if (ctx->r2 != 0) {
        // 0x802300CC: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802300E4;
    }
    // 0x802300CC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802300D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802300D4: jal         0x80230788
    // 0x802300D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80230788_ovl31(rdram, ctx);
        goto after_6;
    // 0x802300D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x802300DC: j           L_802300E8
    // 0x802300E0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_802300E8;
    // 0x802300E0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802300E4:
    // 0x802300E4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
L_802300E8:
    // 0x802300E8: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    // 0x802300EC: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x802300F0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802300F4: j           L_80230150
    // 0x802300F8: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
        goto L_80230150;
    // 0x802300F8: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_802300FC:
    // 0x802300FC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80230100: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80230104: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230108: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023010C: jal         0x80050294
    // 0x80230110: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x80230110: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_7:
    // 0x80230114: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230118: j           L_80230150
    // 0x8023011C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_80230150;
    // 0x8023011C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80230120:
    // 0x80230120: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80230124: bne         $v1, $v0, L_80230150
    if (ctx->r3 != ctx->r2) {
        // 0x80230128: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80230150;
    }
    // 0x80230128: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023012C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80230130: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80230134: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230138: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023013C: jal         0x80050294
    // 0x80230140: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_8;
    // 0x80230140: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_8:
    // 0x80230144: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x80230148: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8023014C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80230150:
    // 0x80230150: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x80230154: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80230158: bne         $v1, $v0, L_80230360
    if (ctx->r3 != ctx->r2) {
        // 0x8023015C: nop
    
            goto L_80230360;
    }
    // 0x8023015C: nop

    // 0x80230160: lbu         $v1, 0xA6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA6);
    // 0x80230164: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x80230168: bne         $v0, $zero, L_80230188
    if (ctx->r2 != 0) {
        // 0x8023016C: addiu       $a0, $zero, 0x1BF
        ctx->r4 = ADD32(0, 0X1BF);
            goto L_80230188;
    }
    // 0x8023016C: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    // 0x80230170: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x80230174: bne         $v0, $zero, L_80230188
    if (ctx->r2 != 0) {
        // 0x80230178: addiu       $a0, $zero, 0x1C0
        ctx->r4 = ADD32(0, 0X1C0);
            goto L_80230188;
    }
    // 0x80230178: addiu       $a0, $zero, 0x1C0
    ctx->r4 = ADD32(0, 0X1C0);
    // 0x8023017C: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x80230180: beq         $v0, $zero, L_80230190
    if (ctx->r2 == 0) {
        // 0x80230184: addiu       $a0, $zero, 0x1C1
        ctx->r4 = ADD32(0, 0X1C1);
            goto L_80230190;
    }
    // 0x80230184: addiu       $a0, $zero, 0x1C1
    ctx->r4 = ADD32(0, 0X1C1);
L_80230188:
    // 0x80230188: jal         0x8002A33C
    // 0x8023018C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_9;
    // 0x8023018C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_9:
L_80230190:
    // 0x80230190: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80230194: bne         $v1, $zero, L_802301EC
    if (ctx->r3 != 0) {
        // 0x80230198: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802301EC;
    }
    // 0x80230198: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023019C: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802301A0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802301A4: bne         $v1, $v0, L_80230360
    if (ctx->r3 != ctx->r2) {
        // 0x802301A8: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80230360;
    }
    // 0x802301A8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802301AC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802301B0: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802301B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802301B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802301BC: jal         0x80050294
    // 0x802301C0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_10;
    // 0x802301C0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_10:
    // 0x802301C4: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802301C8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802301CC: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x802301D0: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    // 0x802301D4: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802301D8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802301DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802301E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802301E4: j           L_80230360
    // 0x802301E8: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
        goto L_80230360;
    // 0x802301E8: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_802301EC:
    // 0x802301EC: bne         $v1, $v0, L_80230318
    if (ctx->r3 != ctx->r2) {
        // 0x802301F0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80230318;
    }
    // 0x802301F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802301F4: lh          $v0, 0x2($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X2);
    // 0x802301F8: beq         $v0, $zero, L_802302F0
    if (ctx->r2 == 0) {
        // 0x802301FC: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_802302F0;
    }
    // 0x802301FC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80230200: beq         $v0, $v1, L_802302CC
    if (ctx->r2 == ctx->r3) {
        // 0x80230204: nop
    
            goto L_802302CC;
    }
    // 0x80230204: nop

    // 0x80230208: lb          $v0, 0x4($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X4);
    // 0x8023020C: bne         $v0, $zero, L_802302E4
    if (ctx->r2 != 0) {
        // 0x80230210: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802302E4;
    }
    // 0x80230210: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80230214: addiu       $a0, $zero, 0x1C2
    ctx->r4 = ADD32(0, 0X1C2);
    // 0x80230218: jal         0x8002A33C
    // 0x8023021C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_11;
    // 0x8023021C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_11:
    // 0x80230220: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230224: jal         0x80230788
    // 0x80230228: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80230788_ovl31(rdram, ctx);
        goto after_12;
    // 0x80230228: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_12:
    // 0x8023022C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230230: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x80230234: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x80230238: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8023023C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80230240: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80230244: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x80230248: jal         0x80230788
    // 0x8023024C: sb          $v1, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r3;
    func_80230788_ovl31(rdram, ctx);
        goto after_13;
    // 0x8023024C: sb          $v1, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r3;
    after_13:
    // 0x80230250: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230254: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x80230258: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x8023025C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80230260: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80230264: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80230268: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x8023026C: jal         0x80230788
    // 0x80230270: sb          $v1, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r3;
    func_80230788_ovl31(rdram, ctx);
        goto after_14;
    // 0x80230270: sb          $v1, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r3;
    after_14:
    // 0x80230274: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230278: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x8023027C: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x80230280: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80230284: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80230288: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023028C: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x80230290: jal         0x80230788
    // 0x80230294: sb          $v1, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r3;
    func_80230788_ovl31(rdram, ctx);
        goto after_15;
    // 0x80230294: sb          $v1, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r3;
    after_15:
    // 0x80230298: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8023029C: lhu         $v1, 0x2($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2);
    // 0x802302A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802302A4: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x802302A8: lbu         $a0, 0x6($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X6);
    // 0x802302AC: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802302B0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x802302B4: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    // 0x802302B8: sltiu       $a0, $a0, 0x10
    ctx->r4 = ctx->r4 < 0X10 ? 1 : 0;
    // 0x802302BC: bne         $a0, $zero, L_80230360
    if (ctx->r4 != 0) {
        // 0x802302C0: sh          $v1, 0x2($s1)
        MEM_H(0X2, ctx->r17) = ctx->r3;
            goto L_80230360;
    }
    // 0x802302C0: sh          $v1, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r3;
    // 0x802302C4: j           L_80230360
    // 0x802302C8: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
        goto L_80230360;
    // 0x802302C8: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
L_802302CC:
    // 0x802302CC: lb          $v0, 0x4($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X4);
    // 0x802302D0: bne         $v0, $zero, L_802302E4
    if (ctx->r2 != 0) {
        // 0x802302D4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802302E4;
    }
    // 0x802302D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802302D8: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x802302DC: j           L_80230360
    // 0x802302E0: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
        goto L_80230360;
    // 0x802302E0: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_802302E4:
    // 0x802302E4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802302E8: j           L_80230360
    // 0x802302EC: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
        goto L_80230360;
    // 0x802302EC: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
L_802302F0:
    // 0x802302F0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802302F4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802302F8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802302FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230300: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230304: jal         0x80050294
    // 0x80230308: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_16;
    // 0x80230308: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_16:
    // 0x8023030C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230310: j           L_80230360
    // 0x80230314: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_80230360;
    // 0x80230314: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80230318:
    // 0x80230318: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8023031C: bne         $v1, $v0, L_80230360
    if (ctx->r3 != ctx->r2) {
        // 0x80230320: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80230360;
    }
    // 0x80230320: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230324: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80230328: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023032C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230330: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230334: jal         0x80050294
    // 0x80230338: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_17;
    // 0x80230338: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_17:
    // 0x8023033C: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x80230340: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80230344: j           L_80230360
    // 0x80230348: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_80230360;
    // 0x80230348: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8023034C:
    // 0x8023034C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80230350: j           L_80230360
    // 0x80230354: sh          $v0, 0x1D8($s0)
    MEM_H(0X1D8, ctx->r16) = ctx->r2;
        goto L_80230360;
    // 0x80230354: sh          $v0, 0x1D8($s0)
    MEM_H(0X1D8, ctx->r16) = ctx->r2;
L_80230358:
    // 0x80230358: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023035C: sh          $zero, 0x1D8($s0)
    MEM_H(0X1D8, ctx->r16) = 0;
L_80230360:
    // 0x80230360: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80230364: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x80230368: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8023036C: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80230370: jr          $ra
    // 0x80230374: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80230374: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8022A28C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A28C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A290: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A294: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A298: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A29C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A2A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A2A4: beq         $v1, $v0, L_8022A30C
    if (ctx->r3 == ctx->r2) {
        // 0x8022A2A8: addiu       $a0, $s0, 0x328
        ctx->r4 = ADD32(ctx->r16, 0X328);
            goto L_8022A30C;
    }
    // 0x8022A2A8: addiu       $a0, $s0, 0x328
    ctx->r4 = ADD32(ctx->r16, 0X328);
    // 0x8022A2AC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022A2B0: beql        $v0, $zero, L_8022A2C8
    if (ctx->r2 == 0) {
        // 0x8022A2B4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022A2C8;
    }
    goto skip_0;
    // 0x8022A2B4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022A2B8: beq         $v1, $zero, L_8022A2D8
    if (ctx->r3 == 0) {
        // 0x8022A2BC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022A2D8;
    }
    // 0x8022A2BC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022A2C0: j           L_8022A398
    // 0x8022A2C4: nop

        goto L_8022A398;
    // 0x8022A2C4: nop

L_8022A2C8:
    // 0x8022A2C8: beq         $v1, $v0, L_8022A334
    if (ctx->r3 == ctx->r2) {
        // 0x8022A2CC: nop
    
            goto L_8022A334;
    }
    // 0x8022A2CC: nop

    // 0x8022A2D0: j           L_8022A398
    // 0x8022A2D4: nop

        goto L_8022A398;
    // 0x8022A2D4: nop

L_8022A2D8:
    // 0x8022A2D8: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022A2DC: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022A2E0: beq         $v0, $zero, L_8022A2F0
    if (ctx->r2 == 0) {
        // 0x8022A2E4: sb          $v1, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r3;
            goto L_8022A2F0;
    }
    // 0x8022A2E4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022A2E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022A2EC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022A2F0:
    // 0x8022A2F0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022A2F4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022A2F8: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022A2FC: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x8022A300: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x8022A304: andi        $v1, $v1, 0x7F
    ctx->r3 = ctx->r3 & 0X7F;
    // 0x8022A308: sb          $v1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r3;
L_8022A30C:
    // 0x8022A30C: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x8022A310: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A314: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x8022A318: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A31C: bgez        $v0, L_8022A398
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A320: nop
    
            goto L_8022A398;
    }
    // 0x8022A320: nop

    // 0x8022A324: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8022A328: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022A32C: j           L_8022A398
    // 0x8022A330: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
        goto L_8022A398;
    // 0x8022A330: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_8022A334:
    // 0x8022A334: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022A338: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022A33C: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8022A340: andi        $v1, $v1, 0x20
    ctx->r3 = ctx->r3 & 0X20;
    // 0x8022A344: beq         $v1, $zero, L_8022A360
    if (ctx->r3 == 0) {
        // 0x8022A348: sh          $v0, 0x328($s0)
        MEM_H(0X328, ctx->r16) = ctx->r2;
            goto L_8022A360;
    }
    // 0x8022A348: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    // 0x8022A34C: lhu         $a0, 0x362($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X362);
    // 0x8022A350: jal         0x8006033C
    // 0x8022A354: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022A354: nop

    after_0:
    // 0x8022A358: j           L_8022A384
    // 0x8022A35C: nop

        goto L_8022A384;
    // 0x8022A35C: nop

L_8022A360:
    // 0x8022A360: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022A364: lui         $v0, 0x31
    ctx->r2 = S32(0X31 << 16);
    // 0x8022A368: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022A36C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022A370: beq         $v0, $zero, L_8022A38C
    if (ctx->r2 == 0) {
        // 0x8022A374: lui         $v1, 0xFF
        ctx->r3 = S32(0XFF << 16);
            goto L_8022A38C;
    }
    // 0x8022A374: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8022A378: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x8022A37C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8022A380: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_8022A384:
    // 0x8022A384: beq         $v0, $zero, L_8022A398
    if (ctx->r2 == 0) {
        // 0x8022A388: nop
    
            goto L_8022A398;
    }
    // 0x8022A388: nop

L_8022A38C:
    // 0x8022A38C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A390: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022A394: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022A398:
    // 0x8022A398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A39C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A3A0: jr          $ra
    // 0x8022A3A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A3A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B798_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B798: lhu         $v0, 0x32A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X32A);
    // 0x8022B79C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B7A0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x8022B7A4: andi        $a2, $v0, 0xF
    ctx->r6 = ctx->r2 & 0XF;
    // 0x8022B7A8: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_8022B7AC:
    // 0x8022B7AC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B7B0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B7B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B7B8: lbu         $v0, -0x7D78($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X7D78);
    // 0x8022B7BC: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8022B7C0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022B7C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B7C8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B7CC: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022B7D0: bne         $v0, $zero, L_8022B7F0
    if (ctx->r2 != 0) {
        // 0x8022B7D4: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022B7F0;
    }
    // 0x8022B7D4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022B7D8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B7DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B7E0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B7E4: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8022B7E8: bne         $v0, $zero, L_8022B7AC
    if (ctx->r2 != 0) {
        // 0x8022B7EC: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8022B7AC;
    }
    // 0x8022B7EC: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_8022B7F0:
    // 0x8022B7F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B7F4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8022B7F8: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022B7FC: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B800: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B804: beq         $v1, $v0, L_8022B838
    if (ctx->r3 == ctx->r2) {
        // 0x8022B808: sh          $zero, 0xA($a0)
        MEM_H(0XA, ctx->r4) = 0;
            goto L_8022B838;
    }
    // 0x8022B808: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
    // 0x8022B80C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022B810: beql        $v0, $zero, L_8022B828
    if (ctx->r2 == 0) {
        // 0x8022B814: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022B828;
    }
    goto skip_0;
    // 0x8022B814: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022B818: beql        $v1, $zero, L_8022B848
    if (ctx->r3 == 0) {
        // 0x8022B81C: sh          $zero, 0x66($a0)
        MEM_H(0X66, ctx->r4) = 0;
            goto L_8022B848;
    }
    goto skip_1;
    // 0x8022B81C: sh          $zero, 0x66($a0)
    MEM_H(0X66, ctx->r4) = 0;
    skip_1:
    // 0x8022B820: j           L_8022B848
    // 0x8022B824: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
        goto L_8022B848;
    // 0x8022B824: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_8022B828:
    // 0x8022B828: beql        $v1, $v0, L_8022B844
    if (ctx->r3 == ctx->r2) {
        // 0x8022B82C: addiu       $v0, $zero, -0x10
        ctx->r2 = ADD32(0, -0X10);
            goto L_8022B844;
    }
    goto skip_2;
    // 0x8022B82C: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    skip_2:
    // 0x8022B830: j           L_8022B848
    // 0x8022B834: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
        goto L_8022B848;
    // 0x8022B834: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_8022B838:
    // 0x8022B838: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022B83C: j           L_8022B848
    // 0x8022B840: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
        goto L_8022B848;
    // 0x8022B840: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
L_8022B844:
    // 0x8022B844: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
L_8022B848:
    // 0x8022B848: jr          $ra
    // 0x8022B84C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8022B84C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8022F568_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F568: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F56C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F570: jal         0x8004F418
    // 0x8022F574: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022F574: nop

    after_0:
    // 0x8022F578: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F57C: jr          $ra
    // 0x8022F580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A060_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A060: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022A064: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022A068: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A06C: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022A070: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022A074: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022A078: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8022A07C: bne         $v0, $zero, L_8022A0A8
    if (ctx->r2 != 0) {
        // 0x8022A080: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022A0A8;
    }
    // 0x8022A080: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022A084: addiu       $a0, $s0, 0x34C
    ctx->r4 = ADD32(ctx->r16, 0X34C);
    // 0x8022A088: jal         0x800540D0
    // 0x8022A08C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x8022A08C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022A090: beq         $v0, $zero, L_8022A0A8
    if (ctx->r2 == 0) {
        // 0x8022A094: nop
    
            goto L_8022A0A8;
    }
    // 0x8022A094: nop

    // 0x8022A098: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022A09C: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8022A0A0: j           L_8022A0B4
    // 0x8022A0A4: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
        goto L_8022A0B4;
    // 0x8022A0A4: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_8022A0A8:
    // 0x8022A0A8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A0AC: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
    // 0x8022A0B0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022A0B4:
    // 0x8022A0B4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A0B8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022A0BC: beq         $v0, $zero, L_8022A0CC
    if (ctx->r2 == 0) {
        // 0x8022A0C0: nop
    
            goto L_8022A0CC;
    }
    // 0x8022A0C0: nop

    // 0x8022A0C4: jal         0x8022B970
    // 0x8022A0C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B970_ovl31(rdram, ctx);
        goto after_1;
    // 0x8022A0C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022A0CC:
    // 0x8022A0CC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022A0D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A0D4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A0D8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A0DC: lw          $v0, -0x7DD4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7DD4);
    // 0x8022A0E0: jalr        $v0
    // 0x8022A0E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8022A0E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022A0E8: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A0EC: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
    // 0x8022A0F0: beq         $v0, $zero, L_8022A188
    if (ctx->r2 == 0) {
        // 0x8022A0F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A188;
    }
    // 0x8022A0F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A0F8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022A0FC: beq         $v1, $v0, L_8022A114
    if (ctx->r3 == ctx->r2) {
        // 0x8022A100: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022A114;
    }
    // 0x8022A100: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022A104: beq         $v1, $v0, L_8022A120
    if (ctx->r3 == ctx->r2) {
        // 0x8022A108: nop
    
            goto L_8022A120;
    }
    // 0x8022A108: nop

    // 0x8022A10C: j           L_8022A14C
    // 0x8022A110: nop

        goto L_8022A14C;
    // 0x8022A110: nop

L_8022A114:
    // 0x8022A114: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022A118: j           L_8022A16C
    // 0x8022A11C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022A16C;
    // 0x8022A11C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022A120:
    // 0x8022A120: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8022A124: slti        $v0, $v0, 0x33
    ctx->r2 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x8022A128: beq         $v0, $zero, L_8022A138
    if (ctx->r2 == 0) {
        // 0x8022A12C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022A138;
    }
    // 0x8022A12C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022A130: j           L_8022A16C
    // 0x8022A134: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022A16C;
    // 0x8022A134: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022A138:
    // 0x8022A138: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x8022A13C: bne         $v0, $zero, L_8022A15C
    if (ctx->r2 != 0) {
        // 0x8022A140: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8022A15C;
    }
    // 0x8022A140: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022A144: j           L_8022A164
    // 0x8022A148: nop

        goto L_8022A164;
    // 0x8022A148: nop

L_8022A14C:
    // 0x8022A14C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A150: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022A154: beq         $v0, $zero, L_8022A164
    if (ctx->r2 == 0) {
        // 0x8022A158: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8022A164;
    }
    // 0x8022A158: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022A15C:
    // 0x8022A15C: j           L_8022A16C
    // 0x8022A160: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022A16C;
    // 0x8022A160: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022A164:
    // 0x8022A164: jal         0x8022B798
    // 0x8022A168: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B798_ovl31(rdram, ctx);
        goto after_3;
    // 0x8022A168: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8022A16C:
    // 0x8022A16C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022A170: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022A174: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022A178: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022A17C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A180: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8022A184: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022A188:
    // 0x8022A188: lh          $v0, 0x34($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X34);
    // 0x8022A18C: beq         $v0, $zero, L_8022A19C
    if (ctx->r2 == 0) {
        // 0x8022A190: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022A19C;
    }
    // 0x8022A190: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A194: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022A198: sh          $v0, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r2;
L_8022A19C:
    // 0x8022A19C: lh          $v0, 0x36($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X36);
    // 0x8022A1A0: beq         $v0, $zero, L_8022A1B0
    if (ctx->r2 == 0) {
        // 0x8022A1A4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022A1B0;
    }
    // 0x8022A1A4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A1A8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022A1AC: sh          $v0, 0x36($s1)
    MEM_H(0X36, ctx->r17) = ctx->r2;
L_8022A1B0:
    // 0x8022A1B0: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x8022A1B4: beq         $v0, $zero, L_8022A1C4
    if (ctx->r2 == 0) {
        // 0x8022A1B8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022A1C4;
    }
    // 0x8022A1B8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A1BC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022A1C0: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_8022A1C4:
    // 0x8022A1C4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A1C8: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022A1CC: beq         $v0, $zero, L_8022A25C
    if (ctx->r2 == 0) {
        // 0x8022A1D0: nop
    
            goto L_8022A25C;
    }
    // 0x8022A1D0: nop

    // 0x8022A1D4: lhu         $v0, 0x38($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X38);
    // 0x8022A1D8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A1DC: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    // 0x8022A1E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A1E4: bgez        $v0, L_8022A25C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A1E8: nop
    
            goto L_8022A25C;
    }
    // 0x8022A1E8: nop

    // 0x8022A1EC: jal         0x8004F144
    // 0x8022A1F0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x8022A1F0: nop

    after_4:
    // 0x8022A1F4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A1F8: beq         $v1, $zero, L_8022A234
    if (ctx->r3 == 0) {
        // 0x8022A1FC: sw          $v1, 0x40($s1)
        MEM_W(0X40, ctx->r17) = ctx->r3;
            goto L_8022A234;
    }
    // 0x8022A1FC: sw          $v1, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r3;
    // 0x8022A200: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022A204: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022A208: lw          $v1, 0x40($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X40);
    // 0x8022A20C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022A210: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022A214: lw          $v1, 0x40($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X40);
    // 0x8022A218: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8022A21C: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x8022A220: lw          $a0, 0x40($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X40);
    // 0x8022A224: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022A228: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A22C: jal         0x8009A3B4
    // 0x8022A230: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022A230: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    after_5:
L_8022A234:
    // 0x8022A234: jal         0x8004F418
    // 0x8022A238: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_6;
    // 0x8022A238: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022A23C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A240: lh          $a2, 0x6($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X6);
    // 0x8022A244: addiu       $s0, $a0, 0x180
    ctx->r16 = ADD32(ctx->r4, 0X180);
    // 0x8022A248: jal         0x8007A290
    // 0x8022A24C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8007A290_55690(rdram, ctx);
        goto after_7;
    // 0x8022A24C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022A250: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    // 0x8022A254: jal         0x8002A33C
    // 0x8022A258: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x8022A258: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
L_8022A25C:
    // 0x8022A25C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022A260: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022A264: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022A268: jr          $ra
    // 0x8022A26C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022A26C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80232548_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232548: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023254C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232550: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232554: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232558: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023255C: lh          $a3, 0x382($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X382);
    // 0x80232560: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80232564: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80232568: jal         0x8004F820
    // 0x8023256C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8023256C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80232570: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80232574: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232578: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023257C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232580: bne         $v0, $zero, L_802325D4
    if (ctx->r2 != 0) {
        // 0x80232584: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_802325D4;
    }
    // 0x80232584: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80232588: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023258C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80232590: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80232594: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x80232598: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023259C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802325A0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802325A4: jal         0x80050294
    // 0x802325A8: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802325A8: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    after_1:
    // 0x802325AC: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x802325B0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802325B4: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x802325B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802325BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802325C0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802325C4: lbu         $v1, 0xB($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XB);
    // 0x802325C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802325CC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802325D0: sh          $v1, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r3;
L_802325D4:
    // 0x802325D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802325D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802325DC: jr          $ra
    // 0x802325E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802325E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230DD0_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230DD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230DD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230DD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230DDC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80230DE0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80230DE4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80230DE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80230DEC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80230DF0: jal         0x8009A3B4
    // 0x80230DF4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80230DF4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80230DF8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80230DFC: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80230E00: jal         0x8009A3B4
    // 0x80230E04: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230E04: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80230E08: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80230E0C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80230E10: jal         0x8009A3B4
    // 0x80230E14: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80230E14: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80230E18: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80230E1C: jal         0x800A3450
    // 0x80230E20: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80230E20: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x80230E24: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80230E28: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80230E2C: sh          $v0, 0x1DA($s0)
    MEM_H(0X1DA, ctx->r16) = ctx->r2;
    // 0x80230E30: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230E34: bne         $v1, $v0, L_80230E54
    if (ctx->r3 != ctx->r2) {
        // 0x80230E38: addiu       $s1, $s0, 0x64
        ctx->r17 = ADD32(ctx->r16, 0X64);
            goto L_80230E54;
    }
    // 0x80230E38: addiu       $s1, $s0, 0x64
    ctx->r17 = ADD32(ctx->r16, 0X64);
    // 0x80230E3C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230E40: beq         $v0, $zero, L_80230E5C
    if (ctx->r2 == 0) {
        // 0x80230E44: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_80230E5C;
    }
    // 0x80230E44: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230E48: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230E4C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80230E50: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80230E54:
    // 0x80230E54: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230E58: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80230E5C:
    // 0x80230E5C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230E60: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230E64: lw          $v0, -0x7A54($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7A54);
    // 0x80230E68: jalr        $v0
    // 0x80230E6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80230E6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80230E70: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80230E74: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230E78: bnel        $v1, $v0, L_80230F30
    if (ctx->r3 != ctx->r2) {
        // 0x80230E7C: sw          $zero, 0x8($s2)
        MEM_W(0X8, ctx->r18) = 0;
            goto L_80230F30;
    }
    goto skip_0;
    // 0x80230E7C: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    skip_0:
    // 0x80230E80: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230E84: beq         $v0, $zero, L_80230F08
    if (ctx->r2 == 0) {
        // 0x80230E88: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80230F08;
    }
    // 0x80230E88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230E8C: lb          $v0, 0x3($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X3);
    // 0x80230E90: beq         $v0, $zero, L_80230EBC
    if (ctx->r2 == 0) {
        // 0x80230E94: nop
    
            goto L_80230EBC;
    }
    // 0x80230E94: nop

    // 0x80230E98: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x80230E9C: bne         $v0, $zero, L_80230EB0
    if (ctx->r2 != 0) {
        // 0x80230EA0: addiu       $a0, $zero, 0x190
        ctx->r4 = ADD32(0, 0X190);
            goto L_80230EB0;
    }
    // 0x80230EA0: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    // 0x80230EA4: jal         0x8002A33C
    // 0x80230EA8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x80230EA8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_5:
    // 0x80230EAC: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
L_80230EB0:
    // 0x80230EB0: lb          $v0, 0x3($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X3);
    // 0x80230EB4: bne         $v0, $zero, L_80230ED8
    if (ctx->r2 != 0) {
        // 0x80230EB8: nop
    
            goto L_80230ED8;
    }
    // 0x80230EB8: nop

L_80230EBC:
    // 0x80230EBC: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x80230EC0: blez        $v0, L_80230ED8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80230EC4: addiu       $a0, $zero, 0x191
        ctx->r4 = ADD32(0, 0X191);
            goto L_80230ED8;
    }
    // 0x80230EC4: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    // 0x80230EC8: jal         0x8002A33C
    // 0x80230ECC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x80230ECC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_6:
    // 0x80230ED0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230ED4: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
L_80230ED8:
    // 0x80230ED8: lh          $v0, 0x15E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X15E);
    // 0x80230EDC: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x80230EE0: beq         $v0, $zero, L_80230F00
    if (ctx->r2 == 0) {
        // 0x80230EE4: nop
    
            goto L_80230F00;
    }
    // 0x80230EE4: nop

    // 0x80230EE8: lb          $v0, 0x2($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2);
    // 0x80230EEC: bne         $v0, $zero, L_80230F00
    if (ctx->r2 != 0) {
        // 0x80230EF0: nop
    
            goto L_80230F00;
    }
    // 0x80230EF0: nop

    // 0x80230EF4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230EF8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80230EFC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80230F00:
    // 0x80230F00: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80230F04: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80230F08:
    // 0x80230F08: bnel        $v1, $v0, L_80230F30
    if (ctx->r3 != ctx->r2) {
        // 0x80230F0C: sw          $zero, 0x8($s2)
        MEM_W(0X8, ctx->r18) = 0;
            goto L_80230F30;
    }
    goto skip_1;
    // 0x80230F0C: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    skip_1:
    // 0x80230F10: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x80230F14: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80230F18: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80230F1C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230F20: beq         $v0, $zero, L_80230F2C
    if (ctx->r2 == 0) {
        // 0x80230F24: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_80230F2C;
    }
    // 0x80230F24: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80230F28: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_80230F2C:
    // 0x80230F2C: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
L_80230F30:
    // 0x80230F30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80230F34: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80230F38: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230F3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230F40: jr          $ra
    // 0x80230F44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230F44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225560_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225560: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225564: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225568: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022556C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80225570: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80225574: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225578: jal         0x8009A3B4
    // 0x8022557C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022557C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80225580: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80225584: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80225588: jal         0x8009A3B4
    // 0x8022558C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022558C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80225590: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80225594: jal         0x800A3450
    // 0x80225598: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80225598: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022559C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802255A0: sh          $v0, 0x432($s0)
    MEM_H(0X432, ctx->r16) = ctx->r2;
    // 0x802255A4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802255A8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802255AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802255B0: lw          $v0, -0x7F90($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7F90);
    // 0x802255B4: jalr        $v0
    // 0x802255B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802255B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802255BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802255C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802255C4: jr          $ra
    // 0x802255C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802255C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235C44_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235C44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235C48: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80235C4C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80235C50: lbu         $v0, 0xB($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XB);
    // 0x80235C54: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80235C58: sb          $v0, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r2;
    // 0x80235C5C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80235C60: bne         $v0, $zero, L_80235C78
    if (ctx->r2 != 0) {
        // 0x80235C64: lui         $v0, 0xFFDF
        ctx->r2 = S32(0XFFDF << 16);
            goto L_80235C78;
    }
    // 0x80235C64: lui         $v0, 0xFFDF
    ctx->r2 = S32(0XFFDF << 16);
    // 0x80235C68: jal         0x8004F5C4
    // 0x80235C6C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80235C6C: nop

    after_0:
    // 0x80235C70: j           L_80235C94
    // 0x80235C74: nop

        goto L_80235C94;
    // 0x80235C74: nop

L_80235C78:
    // 0x80235C78: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x80235C7C: lhu         $a0, 0x24($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X24);
    // 0x80235C80: ori         $v0, $v0, 0xDFE0
    ctx->r2 = ctx->r2 | 0XDFE0;
    // 0x80235C84: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235C88: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80235C8C: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x80235C90: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
L_80235C94:
    // 0x80235C94: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80235C98: jr          $ra
    // 0x80235C9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235C9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D4C8_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D4C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D4CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022D4D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D4D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022D4D8: lw          $v0, 0xC4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC4);
    // 0x8022D4DC: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022D4E0: beq         $v0, $zero, L_8022D540
    if (ctx->r2 == 0) {
        // 0x8022D4E4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D540;
    }
    // 0x8022D4E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D4E8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D4EC: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x8022D4F0: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022D4F4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D4F8: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
    // 0x8022D4FC: lh          $v0, 0x380($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X380);
    // 0x8022D500: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022D504: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022D508: beq         $v0, $zero, L_8022D518
    if (ctx->r2 == 0) {
        // 0x8022D50C: sb          $v1, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r3;
            goto L_8022D518;
    }
    // 0x8022D50C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022D510: j           L_8022D51C
    // 0x8022D514: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
        goto L_8022D51C;
    // 0x8022D514: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
L_8022D518:
    // 0x8022D518: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_8022D51C:
    // 0x8022D51C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D520: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D524: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D528: jal         0x80050294
    // 0x8022D52C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022D52C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022D530: jal         0x8022D754
    // 0x8022D534: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022D754_ovl31(rdram, ctx);
        goto after_1;
    // 0x8022D534: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022D538: j           L_8022D5F4
    // 0x8022D53C: nop

        goto L_8022D5F4;
    // 0x8022D53C: nop

L_8022D540:
    // 0x8022D540: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022D544: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D548: jal         0x8004DA90
    // 0x8022D54C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022D54C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022D550: lb          $v0, 0x385($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X385);
    // 0x8022D554: bne         $v0, $zero, L_8022D5EC
    if (ctx->r2 != 0) {
        // 0x8022D558: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022D5EC;
    }
    // 0x8022D558: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022D55C: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x8022D560: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D564: bne         $v1, $v0, L_8022D5F4
    if (ctx->r3 != ctx->r2) {
        // 0x8022D568: nop
    
            goto L_8022D5F4;
    }
    // 0x8022D568: nop

    // 0x8022D56C: lhu         $v0, 0x1DA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1DA);
    // 0x8022D570: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022D574: bne         $v0, $zero, L_8022D5B0
    if (ctx->r2 != 0) {
        // 0x8022D578: addiu       $a0, $s0, 0x378
        ctx->r4 = ADD32(ctx->r16, 0X378);
            goto L_8022D5B0;
    }
    // 0x8022D578: addiu       $a0, $s0, 0x378
    ctx->r4 = ADD32(ctx->r16, 0X378);
    // 0x8022D57C: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8022D580: bne         $v0, $zero, L_8022D594
    if (ctx->r2 != 0) {
        // 0x8022D584: nop
    
            goto L_8022D594;
    }
    // 0x8022D584: nop

    // 0x8022D588: lbu         $v0, 0x384($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X384);
    // 0x8022D58C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D590: sb          $v0, 0x384($s0)
    MEM_B(0X384, ctx->r16) = ctx->r2;
L_8022D594:
    // 0x8022D594: lbu         $v0, 0x384($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X384);
    // 0x8022D598: beq         $v0, $v1, L_8022D5AC
    if (ctx->r2 == ctx->r3) {
        // 0x8022D59C: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_8022D5AC;
    }
    // 0x8022D59C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022D5A0: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x8022D5A4: j           L_8022D5F4
    // 0x8022D5A8: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
        goto L_8022D5F4;
    // 0x8022D5A8: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
L_8022D5AC:
    // 0x8022D5AC: addiu       $a0, $s0, 0x378
    ctx->r4 = ADD32(ctx->r16, 0X378);
L_8022D5B0:
    // 0x8022D5B0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022D5B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D5B8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022D5BC: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x8022D5C0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022D5C4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8022D5C8: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8022D5CC: jal         0x8009A3B4
    // 0x8022D5D0: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022D5D0: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    after_3:
    // 0x8022D5D4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D5D8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022D5DC: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x8022D5E0: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x8022D5E4: j           L_8022D5F4
    // 0x8022D5E8: sh          $v1, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r3;
        goto L_8022D5F4;
    // 0x8022D5E8: sh          $v1, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r3;
L_8022D5EC:
    // 0x8022D5EC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022D5F0: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
L_8022D5F4:
    // 0x8022D5F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D5F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022D5FC: jr          $ra
    // 0x8022D600: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D600: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802286E4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802286E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802286E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802286EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802286F0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802286F4: addiu       $v0, $v0, 0x49B0
    ctx->r2 = ADD32(ctx->r2, 0X49B0);
    // 0x802286F8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802286FC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80228700: sw          $v0, 0x380($s0)
    MEM_W(0X380, ctx->r16) = ctx->r2;
    // 0x80228704: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x80228708: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022870C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228710: beq         $v0, $zero, L_8022871C
    if (ctx->r2 == 0) {
        // 0x80228714: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022871C;
    }
    // 0x80228714: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80228718: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
L_8022871C:
    // 0x8022871C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228720: beq         $v1, $zero, L_80228738
    if (ctx->r3 == 0) {
        // 0x80228724: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228738;
    }
    // 0x80228724: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228728: beq         $v1, $v0, L_80228768
    if (ctx->r3 == ctx->r2) {
        // 0x8022872C: nop
    
            goto L_80228768;
    }
    // 0x8022872C: nop

    // 0x80228730: j           L_802288D4
    // 0x80228734: nop

        goto L_802288D4;
    // 0x80228734: nop

L_80228738:
    // 0x80228738: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022873C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228740: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228744: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228748: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022874C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80228750: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80228754: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228758: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022875C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80228760: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x80228764: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
L_80228768:
    // 0x80228768: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x8022876C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228770: bne         $v1, $v0, L_80228780
    if (ctx->r3 != ctx->r2) {
        // 0x80228774: addiu       $a0, $zero, 0xB6
        ctx->r4 = ADD32(0, 0XB6);
            goto L_80228780;
    }
    // 0x80228774: addiu       $a0, $zero, 0xB6
    ctx->r4 = ADD32(0, 0XB6);
    // 0x80228778: jal         0x8002A33C
    // 0x8022877C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022877C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
L_80228780:
    // 0x80228780: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x80228784: andi        $v0, $v1, 0x100
    ctx->r2 = ctx->r3 & 0X100;
    // 0x80228788: bne         $v0, $zero, L_80228798
    if (ctx->r2 != 0) {
        // 0x8022878C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228798;
    }
    // 0x8022878C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228790: j           L_802288D0
    // 0x80228794: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
        goto L_802288D0;
    // 0x80228794: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
L_80228798:
    // 0x80228798: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x8022879C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802287A0: jal         0x8004DA90
    // 0x802287A4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x802287A4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x802287A8: jal         0x80040F30
    // 0x802287AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x802287AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802287B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802287B4: jal         0x8003E934
    // 0x802287B8: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x802287B8: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    after_3:
    // 0x802287BC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802287C0: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x802287C4: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x802287C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802287CC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802287D0: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x802287D4: bltz        $v0, L_802287EC
    if (SIGNED(ctx->r2) < 0) {
        // 0x802287D8: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_802287EC;
    }
    // 0x802287D8: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x802287DC: beq         $v0, $zero, L_802287FC
    if (ctx->r2 == 0) {
        // 0x802287E0: nop
    
            goto L_802287FC;
    }
    // 0x802287E0: nop

    // 0x802287E4: j           L_8022881C
    // 0x802287E8: nop

        goto L_8022881C;
    // 0x802287E8: nop

L_802287EC:
    // 0x802287EC: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x802287F0: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x802287F4: bne         $v0, $zero, L_8022881C
    if (ctx->r2 != 0) {
        // 0x802287F8: nop
    
            goto L_8022881C;
    }
    // 0x802287F8: nop

L_802287FC:
    // 0x802287FC: lhu         $v0, 0x2E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2E);
    // 0x80228800: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x80228804: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x80228808: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022880C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80228810: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80228814: j           L_802288D4
    // 0x80228818: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
        goto L_802288D4;
    // 0x80228818: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
L_8022881C:
    // 0x8022881C: lw          $v0, 0x5C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X5C);
    // 0x80228820: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80228824: bne         $v0, $zero, L_80228840
    if (ctx->r2 != 0) {
        // 0x80228828: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80228840;
    }
    // 0x80228828: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022882C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x80228830: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80228834: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228838: beq         $v0, $zero, L_8022886C
    if (ctx->r2 == 0) {
        // 0x8022883C: lui         $v0, 0x48
        ctx->r2 = S32(0X48 << 16);
            goto L_8022886C;
    }
    // 0x8022883C: lui         $v0, 0x48
    ctx->r2 = S32(0X48 << 16);
L_80228840:
    // 0x80228840: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80228844: jal         0x8009A3B4
    // 0x80228848: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80228848: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022884C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80228850: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80228854: jal         0x8009A3B4
    // 0x80228858: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80228858: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x8022885C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80228860: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80228864: j           L_802288D4
    // 0x80228868: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_802288D4;
    // 0x80228868: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022886C:
    // 0x8022886C: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80228870: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80228874: beq         $v0, $zero, L_802288D4
    if (ctx->r2 == 0) {
        // 0x80228878: addiu       $a2, $zero, 0x800
        ctx->r6 = ADD32(0, 0X800);
            goto L_802288D4;
    }
    // 0x80228878: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    // 0x8022887C: lw          $a0, 0x58($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X58);
    // 0x80228880: lh          $v0, 0x56($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X56);
    // 0x80228884: lh          $a1, 0x56($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X56);
    // 0x80228888: addiu       $a3, $s0, 0x1C
    ctx->r7 = ADD32(ctx->r16, 0X1C);
    // 0x8022888C: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    // 0x80228890: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80228894: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80228898: jal         0x8004FC28
    // 0x8022889C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8004FC28_2B028(rdram, ctx);
        goto after_6;
    // 0x8022889C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_6:
    // 0x802288A0: beq         $v0, $zero, L_802288D4
    if (ctx->r2 == 0) {
        // 0x802288A4: addiu       $v1, $zero, 0xD
        ctx->r3 = ADD32(0, 0XD);
            goto L_802288D4;
    }
    // 0x802288A4: addiu       $v1, $zero, 0xD
    ctx->r3 = ADD32(0, 0XD);
    // 0x802288A8: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x802288AC: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x802288B0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802288B4: bne         $v0, $v1, L_802288C8
    if (ctx->r2 != ctx->r3) {
        // 0x802288B8: sh          $zero, 0xA($s0)
        MEM_H(0XA, ctx->r16) = 0;
            goto L_802288C8;
    }
    // 0x802288B8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802288BC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802288C0: j           L_802288D0
    // 0x802288C4: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
        goto L_802288D0;
    // 0x802288C4: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
L_802288C8:
    // 0x802288C8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802288CC: andi        $v0, $v0, 0xFFF7
    ctx->r2 = ctx->r2 & 0XFFF7;
L_802288D0:
    // 0x802288D0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_802288D4:
    // 0x802288D4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802288D8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802288DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802288E0: jr          $ra
    // 0x802288E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802288E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80226B24_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226B28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80226B2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226B30: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80226B34: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80226B38: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80226B3C: bgez        $v0, L_80226B74
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226B40: addiu       $s1, $s0, 0x3E0
        ctx->r17 = ADD32(ctx->r16, 0X3E0);
            goto L_80226B74;
    }
    // 0x80226B40: addiu       $s1, $s0, 0x3E0
    ctx->r17 = ADD32(ctx->r16, 0X3E0);
    // 0x80226B44: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80226B48: bgezl       $v0, L_80226B78
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226B4C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226B78;
    }
    goto skip_0;
    // 0x80226B4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x80226B50: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226B54: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226B58: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80226B5C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226B60: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226B64: jal         0x80050294
    // 0x80226B68: sb          $v0, 0x43A($s0)
    MEM_B(0X43A, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80226B68: sb          $v0, 0x43A($s0)
    MEM_B(0X43A, ctx->r16) = ctx->r2;
    after_0:
    // 0x80226B6C: j           L_80226BE8
    // 0x80226B70: nop

        goto L_80226BE8;
    // 0x80226B70: nop

L_80226B74:
    // 0x80226B74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80226B78:
    // 0x80226B78: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226B7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226B80: jal         0x80050294
    // 0x80226B84: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80226B84: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    after_1:
    // 0x80226B88: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80226B8C: blez        $v0, L_80226BC8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80226B90: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80226BC8;
    }
    // 0x80226B90: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226B94: sb          $v1, 0x5A($s1)
    MEM_B(0X5A, ctx->r17) = ctx->r3;
    // 0x80226B98: jal         0x80053ED8
    // 0x80226B9C: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_2;
    // 0x80226B9C: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    after_2:
    // 0x80226BA0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226BA4: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x80226BA8: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x80226BAC: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80226BB0: jal         0x80053ED8
    // 0x80226BB4: lbu         $a0, 0xD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XD);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_3;
    // 0x80226BB4: lbu         $a0, 0xD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XD);
    after_3:
    // 0x80226BB8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226BBC: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x80226BC0: j           L_80226BE4
    // 0x80226BC4: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
        goto L_80226BE4;
    // 0x80226BC4: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
L_80226BC8:
    // 0x80226BC8: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80226BCC: sb          $v0, 0x5A($s1)
    MEM_B(0X5A, ctx->r17) = ctx->r2;
    // 0x80226BD0: jal         0x80053ED8
    // 0x80226BD4: lbu         $a0, 0xD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XD);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_4;
    // 0x80226BD4: lbu         $a0, 0xD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XD);
    after_4:
    // 0x80226BD8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226BDC: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x80226BE0: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
L_80226BE4:
    // 0x80226BE4: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_80226BE8:
    // 0x80226BE8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226BEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226BF0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226BF4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80226BF8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80226BFC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80226C00: jr          $ra
    // 0x80226C04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80226C04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022D6D4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D6D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D6D8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D6DC: lhu         $v1, 0x1DA($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X1DA);
    // 0x8022D6E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022D6E4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022D6E8: sb          $a1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r5;
    // 0x8022D6EC: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x8022D6F0: beq         $v1, $zero, L_8022D704
    if (ctx->r3 == 0) {
        // 0x8022D6F4: sb          $v0, 0x385($a0)
        MEM_B(0X385, ctx->r4) = ctx->r2;
            goto L_8022D704;
    }
    // 0x8022D6F4: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
    // 0x8022D6F8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022D6FC: j           L_8022D70C
    // 0x8022D700: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
        goto L_8022D70C;
    // 0x8022D700: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
L_8022D704:
    // 0x8022D704: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022D708: sb          $a1, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r5;
L_8022D70C:
    // 0x8022D70C: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022D710: lbu         $a1, 0xAC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XAC);
    // 0x8022D714: jal         0x80050294
    // 0x8022D718: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022D718: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022D71C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D720: jr          $ra
    // 0x8022D724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022ECD8_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ECD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022ECDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022ECE0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022ECE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022ECE8: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x8022ECEC: lh          $v0, 0x380($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X380);
    // 0x8022ECF0: bne         $a0, $v0, L_8022ED3C
    if (ctx->r4 != ctx->r2) {
        // 0x8022ECF4: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_8022ED3C;
    }
    // 0x8022ECF4: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x8022ECF8: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022ECFC: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
    // 0x8022ED00: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022ED04: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022ED08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022ED0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022ED10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022ED14: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022ED18: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022ED1C: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8022ED20: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x8022ED24: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022ED28: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x8022ED2C: jal         0x80050294
    // 0x8022ED30: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022ED30: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022ED34: j           L_8022ED50
    // 0x8022ED38: nop

        goto L_8022ED50;
    // 0x8022ED38: nop

L_8022ED3C:
    // 0x8022ED3C: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022ED40: bne         $v0, $zero, L_8022ED4C
    if (ctx->r2 != 0) {
        // 0x8022ED44: addiu       $v0, $v1, -0x80
        ctx->r2 = ADD32(ctx->r3, -0X80);
            goto L_8022ED4C;
    }
    // 0x8022ED44: addiu       $v0, $v1, -0x80
    ctx->r2 = ADD32(ctx->r3, -0X80);
    // 0x8022ED48: addiu       $v0, $v1, 0x80
    ctx->r2 = ADD32(ctx->r3, 0X80);
L_8022ED4C:
    // 0x8022ED4C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022ED50:
    // 0x8022ED50: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022ED54: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022ED58: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022ED5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022ED60: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022ED64: jr          $ra
    // 0x8022ED68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022ED68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232B88_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232B88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232B8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232B90: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232B94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232B98: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80232B9C: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80232BA0: jal         0x8004DA90
    // 0x80232BA4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80232BA4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80232BA8: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80232BAC: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x80232BB0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232BB4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80232BB8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232BBC: bltz        $v0, L_80232C00
    if (SIGNED(ctx->r2) < 0) {
        // 0x80232BC0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80232C00;
    }
    // 0x80232BC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232BC4: lbu         $v1, 0x1DC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1DC);
    // 0x80232BC8: bne         $v1, $v0, L_80232BF4
    if (ctx->r3 != ctx->r2) {
        // 0x80232BCC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80232BF4;
    }
    // 0x80232BCC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232BD0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232BD4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80232BD8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80232BDC: jal         0x8004F820
    // 0x80232BE0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80232BE0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_1:
    // 0x80232BE4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80232BE8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232BEC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80232BF0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80232BF4:
    // 0x80232BF4: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x80232BF8: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80232BFC: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
L_80232C00:
    // 0x80232C00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232C04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232C08: jr          $ra
    // 0x80232C0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232C0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802255CC_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802255CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802255D0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802255D4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802255D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802255DC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802255E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802255E4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802255E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802255EC: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x802255F0: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x802255F4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802255F8: jal         0x8004D5D4
    // 0x802255FC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802255FC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_0:
    // 0x80225600: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80225604: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225608: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022560C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80225610: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80225614: sh          $v0, 0x15C($s1)
    MEM_H(0X15C, ctx->r17) = ctx->r2;
    // 0x80225618: sh          $v0, 0x15A($s1)
    MEM_H(0X15A, ctx->r17) = ctx->r2;
    // 0x8022561C: sh          $v0, 0x158($s1)
    MEM_H(0X158, ctx->r17) = ctx->r2;
    // 0x80225620: sh          $zero, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = 0;
    // 0x80225624: sb          $s2, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r18;
    // 0x80225628: jal         0x80050294
    // 0x8022562C: sb          $zero, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022562C: sb          $zero, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = 0;
    after_1:
    // 0x80225630: lbu         $v1, 0x2($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2);
    // 0x80225634: lui         $a1, 0x8019
    ctx->r5 = S32(0X8019 << 16);
    // 0x80225638: lw          $a1, 0x3C60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3C60);
    // 0x8022563C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80225640: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    // 0x80225644: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80225648: lw          $v0, 0x298($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X298);
    // 0x8022564C: sw          $zero, 0x78($s1)
    MEM_W(0X78, ctx->r17) = 0;
    // 0x80225650: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80225654: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80225658: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022565C: lw          $a0, 0x120($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X120);
    // 0x80225660: lbu         $v0, 0x8($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X8);
    // 0x80225664: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x80225668: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8022566C: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80225670: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x80225674: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80225678: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8022567C: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80225680: sh          $v0, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r2;
    // 0x80225684: sh          $v0, 0xB0($s1)
    MEM_H(0XB0, ctx->r17) = ctx->r2;
    // 0x80225688: sh          $v0, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = ctx->r2;
    // 0x8022568C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80225690: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80225694: lbu         $v1, 0xA($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XA);
    // 0x80225698: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022569C: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x802256A0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802256A4: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x802256A8: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x802256AC: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802256B0: sh          $v0, 0x42E($s1)
    MEM_H(0X42E, ctx->r17) = ctx->r2;
    // 0x802256B4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802256B8: sb          $v0, 0x43A($s1)
    MEM_B(0X43A, ctx->r17) = ctx->r2;
    // 0x802256BC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802256C0: sb          $v0, 0x43C($s1)
    MEM_B(0X43C, ctx->r17) = ctx->r2;
    // 0x802256C4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x802256C8: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x802256CC: addiu       $v0, $zero, 0xA00
    ctx->r2 = ADD32(0, 0XA00);
    // 0x802256D0: sh          $zero, 0x42C($s1)
    MEM_H(0X42C, ctx->r17) = 0;
    // 0x802256D4: sb          $zero, 0x43B($s1)
    MEM_B(0X43B, ctx->r17) = 0;
    // 0x802256D8: sh          $zero, 0x422($s1)
    MEM_H(0X422, ctx->r17) = 0;
    // 0x802256DC: sb          $zero, 0x438($s1)
    MEM_B(0X438, ctx->r17) = 0;
    // 0x802256E0: sh          $v0, 0x42A($s1)
    MEM_H(0X42A, ctx->r17) = ctx->r2;
    // 0x802256E4: sb          $zero, 0x438($s1)
    MEM_B(0X438, ctx->r17) = 0;
    // 0x802256E8: sh          $zero, 0x64($s1)
    MEM_H(0X64, ctx->r17) = 0;
    // 0x802256EC: jal         0x8004EEAC
    // 0x802256F0: sb          $v1, 0x73($s1)
    MEM_B(0X73, ctx->r17) = ctx->r3;
    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_2;
    // 0x802256F0: sb          $v1, 0x73($s1)
    MEM_B(0X73, ctx->r17) = ctx->r3;
    after_2:
    // 0x802256F4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802256F8: beq         $s0, $zero, L_8022576C
    if (ctx->r16 == 0) {
        // 0x802256FC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022576C;
    }
    // 0x802256FC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80225700: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x80225704: sb          $v0, 0x439($s1)
    MEM_B(0X439, ctx->r17) = ctx->r2;
    // 0x80225708: addiu       $v0, $zero, 0x59
    ctx->r2 = ADD32(0, 0X59);
    // 0x8022570C: sb          $s2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r18;
    // 0x80225710: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80225714: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x80225718: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x8022571C: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80225720: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x80225724: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80225728: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x8022572C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80225730: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80225734: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80225738: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8022573C: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80225740: jal         0x8009A3B4
    // 0x80225744: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80225744: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    after_3:
    // 0x80225748: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022574C: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80225750: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80225754: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225758: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022575C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80225760: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80225764: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80225768: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
L_8022576C:
    // 0x8022576C: lui         $v0, 0x2C58
    ctx->r2 = S32(0X2C58 << 16);
    // 0x80225770: ori         $v0, $v0, 0x48
    ctx->r2 = ctx->r2 | 0X48;
    // 0x80225774: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80225778: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022577C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225780: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
    // 0x80225784: jal         0x8004A00C
    // 0x80225788: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004A00C_2540C(rdram, ctx);
        goto after_4;
    // 0x80225788: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_4:
    // 0x8022578C: sw          $zero, 0x3F8($s1)
    MEM_W(0X3F8, ctx->r17) = 0;
    // 0x80225790: sw          $zero, 0x400($s1)
    MEM_W(0X400, ctx->r17) = 0;
    // 0x80225794: sw          $zero, 0x408($s1)
    MEM_W(0X408, ctx->r17) = 0;
    // 0x80225798: sw          $zero, 0x410($s1)
    MEM_W(0X410, ctx->r17) = 0;
    // 0x8022579C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802257A0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802257A4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802257A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802257AC: jr          $ra
    // 0x802257B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802257B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80231DF8_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231DF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231DFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231E00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231E04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231E08: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80231E0C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231E10: bne         $v1, $v0, L_80231EAC
    if (ctx->r3 != ctx->r2) {
        // 0x80231E14: addiu       $a0, $s0, 0x348
        ctx->r4 = ADD32(ctx->r16, 0X348);
            goto L_80231EAC;
    }
    // 0x80231E14: addiu       $a0, $s0, 0x348
    ctx->r4 = ADD32(ctx->r16, 0X348);
    // 0x80231E18: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80231E1C: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80231E20: ori         $v1, $v1, 0xFF00
    ctx->r3 = ctx->r3 | 0XFF00;
    // 0x80231E24: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80231E28: addiu       $v1, $zero, 0x600
    ctx->r3 = ADD32(0, 0X600);
    // 0x80231E2C: bne         $v0, $v1, L_80231EAC
    if (ctx->r2 != ctx->r3) {
        // 0x80231E30: nop
    
            goto L_80231EAC;
    }
    // 0x80231E30: nop

    // 0x80231E34: lbu         $v0, 0xCB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCB);
    // 0x80231E38: sltiu       $v0, $v0, 0xB4
    ctx->r2 = ctx->r2 < 0XB4 ? 1 : 0;
    // 0x80231E3C: beq         $v0, $zero, L_80231E90
    if (ctx->r2 == 0) {
        // 0x80231E40: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231E90;
    }
    // 0x80231E40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231E44: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80231E48: lh          $a3, 0x382($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X382);
    // 0x80231E4C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80231E50: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80231E54: jal         0x8004F820
    // 0x80231E58: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80231E58: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80231E5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231E60: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80231E64: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80231E68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231E6C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80231E70: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231E74: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80231E78: jal         0x8004DA90
    // 0x80231E7C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80231E7C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_1:
    // 0x80231E80: lbu         $v0, 0xCB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCB);
    // 0x80231E84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231E88: j           L_80231EE8
    // 0x80231E8C: sb          $v0, 0xCB($s0)
    MEM_B(0XCB, ctx->r16) = ctx->r2;
        goto L_80231EE8;
    // 0x80231E8C: sb          $v0, 0xCB($s0)
    MEM_B(0XCB, ctx->r16) = ctx->r2;
L_80231E90:
    // 0x80231E90: lbu         $v1, 0xCA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XCA);
    // 0x80231E94: sb          $zero, 0xCB($s0)
    MEM_B(0XCB, ctx->r16) = 0;
    // 0x80231E98: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80231E9C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80231EA0: andi        $v1, $v1, 0x7F
    ctx->r3 = ctx->r3 & 0X7F;
    // 0x80231EA4: j           L_80231EE8
    // 0x80231EA8: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
        goto L_80231EE8;
    // 0x80231EA8: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
L_80231EAC:
    // 0x80231EAC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80231EB0: lh          $a3, 0x3A($a0)
    ctx->r7 = MEM_H(ctx->r4, 0X3A);
    // 0x80231EB4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80231EB8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80231EBC: jal         0x8004F820
    // 0x80231EC0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80231EC0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x80231EC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231EC8: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80231ECC: lhu         $v1, 0x56($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X56);
    // 0x80231ED0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231ED4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80231ED8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231EDC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80231EE0: jal         0x8004DA90
    // 0x80231EE4: sh          $v1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x80231EE4: sh          $v1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r3;
    after_3:
L_80231EE8:
    // 0x80231EE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231EEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231EF0: jr          $ra
    // 0x80231EF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231EF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802338C0_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802338C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802338C4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802338C8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802338CC: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x802338D0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802338D4: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x802338D8: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x802338DC: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x802338E0: addiu       $v0, $a0, 0x14
    ctx->r2 = ADD32(ctx->r4, 0X14);
    // 0x802338E4: addiu       $a0, $a1, 0x38
    ctx->r4 = ADD32(ctx->r5, 0X38);
    // 0x802338E8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802338EC: jal         0x8009A3B4
    // 0x802338F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802338F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802338F4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802338F8: jr          $ra
    // 0x802338FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802338FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F6DC_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F6DC: lb          $v1, 0xA7($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XA7);
    // 0x8022F6E0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022F6E4: bne         $v1, $v0, L_8022F6F4
    if (ctx->r3 != ctx->r2) {
        // 0x8022F6E8: nop
    
            goto L_8022F6F4;
    }
    // 0x8022F6E8: nop

    // 0x8022F6EC: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x8022F6F0: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_8022F6F4:
    // 0x8022F6F4: jr          $ra
    // 0x8022F6F8: nop

    TRACE_RETURN()
    return;
    // 0x8022F6F8: nop

;}
