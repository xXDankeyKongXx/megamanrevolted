#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022F26C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F26C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F270: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F274: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F278: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F27C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F280: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022F284: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8022F288: lw          $s1, -0x3A2C($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3A2C);
    // 0x8022F28C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F290: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022F294: jal         0x8009A3B4
    // 0x8022F298: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022F298: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_0:
    // 0x8022F29C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022F2A0: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022F2A4: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022F2A8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8022F2AC: addiu       $v0, $v0, 0x39A
    ctx->r2 = ADD32(ctx->r2, 0X39A);
    // 0x8022F2B0: jal         0x8009A3B4
    // 0x8022F2B4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022F2B4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022F2B8: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x8022F2BC: addiu       $v0, $v0, 0x39A
    ctx->r2 = ADD32(ctx->r2, 0X39A);
    // 0x8022F2C0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022F2C4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F2C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F2CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F2D0: jr          $ra
    // 0x8022F2D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F2D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022F2D8: nop

    // 0x8022F2DC: nop

;}
RECOMP_FUNC void func_8022F228_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F228: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F22C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F230: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F234: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F238: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F23C: bne         $v0, $zero, L_8022F25C
    if (ctx->r2 != 0) {
        // 0x8022F240: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_8022F25C;
    }
    // 0x8022F240: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022F244: jal         0x80050294
    // 0x8022F248: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022F248: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022F24C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F250: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022F254: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F258: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022F25C:
    // 0x8022F25C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F260: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F264: jr          $ra
    // 0x8022F268: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F268: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802254C4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802254C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802254C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802254CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802254D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802254D4: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802254D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802254DC: beq         $v1, $v0, L_80225554
    if (ctx->r3 == ctx->r2) {
        // 0x802254E0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80225554;
    }
    // 0x802254E0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802254E4: beq         $v0, $zero, L_80225574
    if (ctx->r2 == 0) {
        // 0x802254E8: nop
    
            goto L_80225574;
    }
    // 0x802254E8: nop

    // 0x802254EC: bne         $v1, $zero, L_80225574
    if (ctx->r3 != 0) {
        // 0x802254F0: nop
    
            goto L_80225574;
    }
    // 0x802254F0: nop

    // 0x802254F4: jal         0x8006033C
    // 0x802254F8: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802254F8: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    after_0:
    // 0x802254FC: beq         $v0, $zero, L_80225530
    if (ctx->r2 == 0) {
        // 0x80225500: nop
    
            goto L_80225530;
    }
    // 0x80225500: nop

    // 0x80225504: jal         0x8006033C
    // 0x80225508: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80225508: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    after_1:
    // 0x8022550C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225510: beq         $v0, $zero, L_80225520
    if (ctx->r2 == 0) {
        // 0x80225514: addiu       $a0, $a0, -0x3BEC
        ctx->r4 = ADD32(ctx->r4, -0X3BEC);
            goto L_80225520;
    }
    // 0x80225514: addiu       $a0, $a0, -0x3BEC
    ctx->r4 = ADD32(ctx->r4, -0X3BEC);
    // 0x80225518: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022551C: addiu       $a0, $a0, -0x3BF4
    ctx->r4 = ADD32(ctx->r4, -0X3BF4);
L_80225520:
    // 0x80225520: jal         0x800607C4
    // 0x80225524: nop

    func_800607C4_3BBC4(rdram, ctx);
        goto after_2;
    // 0x80225524: nop

    after_2:
    // 0x80225528: j           L_80225570
    // 0x8022552C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_80225570;
    // 0x8022552C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225530:
    // 0x80225530: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225534: jal         0x800607C4
    // 0x80225538: addiu       $a0, $a0, -0x3BF4
    ctx->r4 = ADD32(ctx->r4, -0X3BF4);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_3;
    // 0x80225538: addiu       $a0, $a0, -0x3BF4
    ctx->r4 = ADD32(ctx->r4, -0X3BF4);
    after_3:
    // 0x8022553C: jal         0x8006033C
    // 0x80225540: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80225540: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    after_4:
    // 0x80225544: bne         $v0, $zero, L_80225570
    if (ctx->r2 != 0) {
        // 0x80225548: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225570;
    }
    // 0x80225548: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022554C: j           L_80225570
    // 0x80225550: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80225570;
    // 0x80225550: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80225554:
    // 0x80225554: jal         0x8006033C
    // 0x80225558: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80225558: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    after_5:
    // 0x8022555C: beq         $v0, $zero, L_80225574
    if (ctx->r2 == 0) {
        // 0x80225560: nop
    
            goto L_80225574;
    }
    // 0x80225560: nop

    // 0x80225564: jal         0x80060690
    // 0x80225568: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    func_80060690_3BA90(rdram, ctx);
        goto after_6;
    // 0x80225568: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    after_6:
    // 0x8022556C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225570:
    // 0x80225570: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225574:
    // 0x80225574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225578: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022557C: jr          $ra
    // 0x80225580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236868_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236868: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023686C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80236870: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80236874: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80236878: lbu         $s4, 0x4F($sp)
    ctx->r20 = MEM_BU(ctx->r29, 0X4F);
    // 0x8023687C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80236880: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236884: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80236888: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8023688C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80236890: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x80236894: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80236898: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x8023689C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802368A0: jal         0x8004F144
    // 0x802368A4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802368A4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x802368A8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802368AC: beq         $s1, $zero, L_80236934
    if (ctx->r17 == 0) {
        // 0x802368B0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236934;
    }
    // 0x802368B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802368B4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x802368B8: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
    // 0x802368BC: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    // 0x802368C0: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x802368C4: sb          $s2, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r18;
    // 0x802368C8: sb          $s3, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r19;
    // 0x802368CC: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x802368D0: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x802368D4: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x802368D8: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    // 0x802368DC: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x802368E0: sh          $s5, 0x26($s1)
    MEM_H(0X26, ctx->r17) = ctx->r21;
    // 0x802368E4: beq         $s4, $zero, L_802368F8
    if (ctx->r20 == 0) {
        // 0x802368E8: sh          $v0, 0x20($s1)
        MEM_H(0X20, ctx->r17) = ctx->r2;
            goto L_802368F8;
    }
    // 0x802368E8: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x802368EC: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802368F0: j           L_80236900
    // 0x802368F4: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
        goto L_80236900;
    // 0x802368F4: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
L_802368F8:
    // 0x802368F8: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802368FC: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
L_80236900:
    // 0x80236900: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x80236904: sw          $s6, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r22;
    // 0x80236908: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x8023690C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80236910: blez        $v0, L_80236934
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80236914: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80236934;
    }
    // 0x80236914: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80236918: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
L_8023691C:
    // 0x8023691C: jal         0x802366D8
    // 0x80236920: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_802366D8_ovl3(rdram, ctx);
        goto after_1;
    // 0x80236920: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80236924: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80236928: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x8023692C: bne         $v0, $zero, L_8023691C
    if (ctx->r2 != 0) {
        // 0x80236930: nop
    
            goto L_8023691C;
    }
    // 0x80236930: nop

L_80236934:
    // 0x80236934: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x80236938: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8023693C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80236940: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80236944: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80236948: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023694C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80236950: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80236954: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80236958: jr          $ra
    // 0x8023695C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023695C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80238204_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238204: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80238208: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8023820C: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x80238210: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x80238214: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80238218: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x8023821C: subu        $v0, $v0, $s2
    ctx->r2 = SUB32(ctx->r2, ctx->r18);
    // 0x80238220: div         $zero, $v0, $s6
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r22)));
    // 0x80238224: bne         $s6, $zero, L_80238230
    if (ctx->r22 != 0) {
        // 0x80238228: nop
    
            goto L_80238230;
    }
    // 0x80238228: nop

    // 0x8023822C: break       7
    do_break(2149810732);
L_80238230:
    // 0x80238230: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80238234: bne         $s6, $at, L_80238248
    if (ctx->r22 != ctx->r1) {
        // 0x80238238: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80238248;
    }
    // 0x80238238: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023823C: bne         $v0, $at, L_80238248
    if (ctx->r2 != ctx->r1) {
        // 0x80238240: nop
    
            goto L_80238248;
    }
    // 0x80238240: nop

    // 0x80238244: break       6
    do_break(2149810756);
L_80238248:
    // 0x80238248: mflo        $t0
    ctx->r8 = lo;
    // 0x8023824C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80238250: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x80238254: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80238258: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x8023825C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80238260: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x80238264: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80238268: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8023826C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80238270: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80238274: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80238278: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8023827C: blez        $s6, L_802383AC
    if (SIGNED(ctx->r22) <= 0) {
        // 0x80238280: sw          $t0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r8;
            goto L_802383AC;
    }
    // 0x80238280: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80238284: sll         $v0, $s5, 2
    ctx->r2 = S32(ctx->r21 << 2);
    // 0x80238288: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x8023828C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80238290: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80238294: sll         $fp, $s5, 4
    ctx->r30 = S32(ctx->r21 << 4);
L_80238298:
    // 0x80238298: jal         0x8004F144
    // 0x8023829C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8023829C: nop

    after_0:
    // 0x802382A0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802382A4: beq         $s0, $zero, L_80238388
    if (ctx->r16 == 0) {
        // 0x802382A8: lui         $v1, 0x2E80
        ctx->r3 = S32(0X2E80 << 16);
            goto L_80238388;
    }
    // 0x802382A8: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x802382AC: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x802382B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802382B4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802382B8: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x802382BC: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x802382C0: sb          $s7, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r23;
    // 0x802382C4: sb          $s5, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r21;
    // 0x802382C8: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x802382CC: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x802382D0: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x802382D4: lhu         $v0, 0x2($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X2);
    // 0x802382D8: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x802382DC: lhu         $v0, 0x4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X4);
    // 0x802382E0: beq         $s7, $zero, L_80238314
    if (ctx->r23 == 0) {
        // 0x802382E4: sh          $v0, 0x20($s0)
        MEM_H(0X20, ctx->r16) = ctx->r2;
            goto L_80238314;
    }
    // 0x802382E4: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x802382E8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x802382EC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802382F0: addiu       $v0, $v0, -0x15C0
    ctx->r2 = ADD32(ctx->r2, -0X15C0);
    // 0x802382F4: addu        $s1, $t0, $v0
    ctx->r17 = ADD32(ctx->r8, ctx->r2);
    // 0x802382F8: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x802382FC: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x80238300: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x80238304: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x80238308: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x8023830C: j           L_80238338
    // 0x80238310: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
        goto L_80238338;
    // 0x80238310: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
L_80238314:
    // 0x80238314: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80238318: addiu       $v0, $v0, -0x1660
    ctx->r2 = ADD32(ctx->r2, -0X1660);
    // 0x8023831C: addu        $s1, $fp, $v0
    ctx->r17 = ADD32(ctx->r30, ctx->r2);
    // 0x80238320: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x80238324: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80238328: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x8023832C: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x80238330: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x80238334: sb          $v0, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r2;
L_80238338:
    // 0x80238338: jal         0x800324B4
    // 0x8023833C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x8023833C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x80238340: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x80238344: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80238348: mflo        $v0
    ctx->r2 = lo;
    // 0x8023834C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80238350: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80238354: jal         0x80032498
    // 0x80238358: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x80238358: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    after_2:
    // 0x8023835C: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x80238360: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80238364: mflo        $v0
    ctx->r2 = lo;
    // 0x80238368: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8023836C: sh          $v0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r2;
    // 0x80238370: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x80238374: sh          $v0, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r2;
    // 0x80238378: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8023837C: sh          $v0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r2;
    // 0x80238380: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x80238384: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80238388:
    // 0x80238388: jal         0x800A3450
    // 0x8023838C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8023838C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    after_3:
    // 0x80238390: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x80238394: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80238398: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x8023839C: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
    // 0x802383A0: slt         $v0, $s3, $s6
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x802383A4: bne         $v0, $zero, L_80238298
    if (ctx->r2 != 0) {
        // 0x802383A8: nop
    
            goto L_80238298;
    }
    // 0x802383A8: nop

L_802383AC:
    // 0x802383AC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x802383B0: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x802383B4: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x802383B8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x802383BC: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x802383C0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x802383C4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x802383C8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802383CC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802383D0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802383D4: jr          $ra
    // 0x802383D8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x802383D8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x802383DC: nop

;}
RECOMP_FUNC void func_8022F0B0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F0B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F0B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F0B8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022F0BC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F0C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F0C4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022F0C8: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x8022F0CC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022F0D0: jal         0x8004D5D4
    // 0x8022F0D4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022F0D4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022F0D8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022F0DC: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x8022F0E0: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8022F0E4: addiu       $s0, $s0, -0x3A50
    ctx->r16 = ADD32(ctx->r16, -0X3A50);
    // 0x8022F0E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F0EC: beq         $v1, $v0, L_8022F150
    if (ctx->r3 == ctx->r2) {
        // 0x8022F0F0: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_8022F150;
    }
    // 0x8022F0F0: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x8022F0F4: beql        $v0, $zero, L_8022F10C
    if (ctx->r2 == 0) {
        // 0x8022F0F8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022F10C;
    }
    goto skip_0;
    // 0x8022F0F8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    skip_0:
    // 0x8022F0FC: beq         $v1, $zero, L_8022F124
    if (ctx->r3 == 0) {
        // 0x8022F100: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022F124;
    }
    // 0x8022F100: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F104: j           L_8022F1C4
    // 0x8022F108: nop

        goto L_8022F1C4;
    // 0x8022F108: nop

L_8022F10C:
    // 0x8022F10C: beq         $v1, $v0, L_8022F150
    if (ctx->r3 == ctx->r2) {
        // 0x8022F110: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022F150;
    }
    // 0x8022F110: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022F114: beq         $v1, $v0, L_8022F154
    if (ctx->r3 == ctx->r2) {
        // 0x8022F118: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022F154;
    }
    // 0x8022F118: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F11C: j           L_8022F1C4
    // 0x8022F120: nop

        goto L_8022F1C4;
    // 0x8022F120: nop

L_8022F124:
    // 0x8022F124: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022F128: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F12C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022F130: sh          $v0, 0x15C($s1)
    MEM_H(0X15C, ctx->r17) = ctx->r2;
    // 0x8022F134: sh          $v0, 0x15A($s1)
    MEM_H(0X15A, ctx->r17) = ctx->r2;
    // 0x8022F138: sh          $v0, 0x158($s1)
    MEM_H(0X158, ctx->r17) = ctx->r2;
    // 0x8022F13C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022F140: jal         0x80050294
    // 0x8022F144: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022F144: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022F148: j           L_8022F1C0
    // 0x8022F14C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022F1C0;
    // 0x8022F14C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022F150:
    // 0x8022F150: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_8022F154:
    // 0x8022F154: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F158: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F15C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022F160: sh          $v0, 0x15C($s1)
    MEM_H(0X15C, ctx->r17) = ctx->r2;
    // 0x8022F164: sh          $v0, 0x15A($s1)
    MEM_H(0X15A, ctx->r17) = ctx->r2;
    // 0x8022F168: sh          $v0, 0x158($s1)
    MEM_H(0X158, ctx->r17) = ctx->r2;
    // 0x8022F16C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022F170: jal         0x80050294
    // 0x8022F174: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022F174: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    after_2:
    // 0x8022F178: lw          $s0, 0x24($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X24);
    // 0x8022F17C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022F180: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022F184: jal         0x8009A3B4
    // 0x8022F188: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022F188: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x8022F18C: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022F190: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x8022F194: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022F198: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8022F19C: addiu       $v0, $v0, 0x39A
    ctx->r2 = ADD32(ctx->r2, 0X39A);
    // 0x8022F1A0: jal         0x8009A3B4
    // 0x8022F1A4: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022F1A4: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    after_4:
    // 0x8022F1A8: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x8022F1AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F1B0: addiu       $v0, $v0, 0x39A
    ctx->r2 = ADD32(ctx->r2, 0X39A);
    // 0x8022F1B4: jal         0x8005044C
    // 0x8022F1B8: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8022F1B8: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    after_5:
    // 0x8022F1BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022F1C0:
    // 0x8022F1C0: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8022F1C4:
    // 0x8022F1C4: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x8022F1C8: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x8022F1CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F1D0: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x8022F1D4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F1D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F1DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F1E0: jr          $ra
    // 0x8022F1E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F1E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802269B4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802269B4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802269B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802269BC: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x802269C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802269C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802269C8: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x802269CC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802269D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802269D4: sb          $a0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r4;
    // 0x802269D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802269DC: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x802269E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802269E4: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x802269E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802269EC: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x802269F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802269F4: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x802269F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802269FC: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80226A00: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226A04: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226A08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226A0C: jr          $ra
    // 0x80226A10: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80226A10: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_80236600_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236600: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236604: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x80236608: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023660C: lbu         $v0, 0x8($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X8);
    // 0x80236610: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236614: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236618: addu        $at, $at, $v0
    gpr jr_addend_80236620 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023661C: lw          $v0, -0x1780($at)
    ctx->r2 = ADD32(ctx->r1, -0X1780);
    // 0x80236620: jr          $v0
    // 0x80236624: nop

    switch (jr_addend_80236620 >> 2) {
        case 0: goto L_80236628; break;
        case 1: goto L_80236640; break;
        case 2: goto L_802366C4; break;
        default: switch_error(__func__, 0x80236620, 0x8023E880);
    }
    // 0x80236624: nop

L_80236628:
    // 0x80236628: lbu         $v1, 0x8($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X8);
    // 0x8023662C: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x80236630: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80236634: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80236638: sb          $v0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r2;
    // 0x8023663C: sb          $v1, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r3;
L_80236640:
    // 0x80236640: lbu         $v0, 0xD($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0XD);
    // 0x80236644: lw          $v1, 0x2C($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X2C);
    // 0x80236648: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023664C: sb          $v0, 0xD($t0)
    MEM_B(0XD, ctx->r8) = ctx->r2;
    // 0x80236650: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236654: beq         $v0, $zero, L_80236668
    if (ctx->r2 == 0) {
        // 0x80236658: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80236668;
    }
    // 0x80236658: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023665C: lbu         $v1, 0x8($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X8);
    // 0x80236660: bne         $v1, $v0, L_80236678
    if (ctx->r3 != ctx->r2) {
        // 0x80236664: nop
    
            goto L_80236678;
    }
    // 0x80236664: nop

L_80236668:
    // 0x80236668: lbu         $v0, 0x8($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X8);
    // 0x8023666C: sb          $zero, 0xD($t0)
    MEM_B(0XD, ctx->r8) = 0;
    // 0x80236670: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236674: sb          $v0, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r2;
L_80236678:
    // 0x80236678: lbu         $a2, 0xF($t0)
    ctx->r6 = MEM_BU(ctx->r8, 0XF);
    // 0x8023667C: lb          $v1, 0xD($t0)
    ctx->r3 = MEM_B(ctx->r8, 0XD);
    // 0x80236680: lhu         $a0, 0x24($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X24);
    // 0x80236684: lw          $a3, 0x28($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X28);
    // 0x80236688: lhu         $a1, 0x1E($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X1E);
    // 0x8023668C: sll         $a2, $a2, 24
    ctx->r6 = S32(ctx->r6 << 24);
    // 0x80236690: sra         $a2, $a2, 24
    ctx->r6 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80236694: sll         $v0, $v1, 8
    ctx->r2 = S32(ctx->r3 << 8);
    // 0x80236698: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8023669C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802366A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802366A4: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x802366A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802366AC: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x802366B0: addu        $a1, $a1, $a3
    ctx->r5 = ADD32(ctx->r5, ctx->r7);
    // 0x802366B4: sw          $v0, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r2;
    // 0x802366B8: sh          $a0, 0x24($t0)
    MEM_H(0X24, ctx->r8) = ctx->r4;
    // 0x802366BC: j           L_802366CC
    // 0x802366C0: sh          $a1, 0x1E($t0)
    MEM_H(0X1E, ctx->r8) = ctx->r5;
        goto L_802366CC;
    // 0x802366C0: sh          $a1, 0x1E($t0)
    MEM_H(0X1E, ctx->r8) = ctx->r5;
L_802366C4:
    // 0x802366C4: jal         0x8004F5C4
    // 0x802366C8: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x802366C8: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    after_0:
L_802366CC:
    // 0x802366CC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802366D0: jr          $ra
    // 0x802366D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802366D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F3F0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F3F0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8022F3F4: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8022F3F8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022F3FC: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x8022F400: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022F404: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022F408: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8022F40C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8022F410: jal         0x8009A3B4
    // 0x8022F414: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022F414: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022F418: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x8022F41C: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022F420: jal         0x8009A3B4
    // 0x8022F424: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022F424: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022F428: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x8022F42C: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x8022F430: jal         0x8009A3B4
    // 0x8022F434: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022F434: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022F438: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022F43C: jal         0x800A3450
    // 0x8022F440: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022F440: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    after_3:
    // 0x8022F444: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F448: addiu       $a1, $zero, 0x4210
    ctx->r5 = ADD32(0, 0X4210);
    // 0x8022F44C: jal         0x8022F798
    // 0x8022F450: sh          $v0, 0x31E($s1)
    MEM_H(0X31E, ctx->r17) = ctx->r2;
    func_8022F798_ovl3(rdram, ctx);
        goto after_4;
    // 0x8022F450: sh          $v0, 0x31E($s1)
    MEM_H(0X31E, ctx->r17) = ctx->r2;
    after_4:
    // 0x8022F454: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022F458: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F45C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F460: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F464: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F468: lw          $v0, -0x2020($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2020);
    // 0x8022F46C: addiu       $s2, $s1, 0x308
    ctx->r18 = ADD32(ctx->r17, 0X308);
    // 0x8022F470: jalr        $v0
    // 0x8022F474: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8022F474: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_5:
    // 0x8022F478: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022F47C: bne         $v0, $zero, L_8022F4EC
    if (ctx->r2 != 0) {
        // 0x8022F480: nop
    
            goto L_8022F4EC;
    }
    // 0x8022F480: nop

    // 0x8022F484: lhu         $v0, 0x31C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X31C);
    // 0x8022F488: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8022F48C: beq         $v0, $zero, L_8022F4EC
    if (ctx->r2 == 0) {
        // 0x8022F490: nop
    
            goto L_8022F4EC;
    }
    // 0x8022F490: nop

    // 0x8022F494: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x8022F498: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022F49C: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8022F4A0: addiu       $s0, $s0, -0x3D78
    ctx->r16 = ADD32(ctx->r16, -0X3D78);
    // 0x8022F4A4: beq         $v0, $a1, L_8022F4BC
    if (ctx->r2 == ctx->r5) {
        // 0x8022F4A8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022F4BC;
    }
    // 0x8022F4A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F4AC: jal         0x800502EC
    // 0x8022F4B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800502EC_2B6EC(rdram, ctx);
        goto after_6;
    // 0x8022F4B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x8022F4B4: j           L_8022F4C4
    // 0x8022F4B8: nop

        goto L_8022F4C4;
    // 0x8022F4B8: nop

L_8022F4BC:
    // 0x8022F4BC: jal         0x800504EC
    // 0x8022F4C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_7;
    // 0x8022F4C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
L_8022F4C4:
    // 0x8022F4C4: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x8022F4C8: lhu         $v0, 0x1A($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1A);
    // 0x8022F4CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F4D0: addiu       $v1, $v1, -0x800
    ctx->r3 = ADD32(ctx->r3, -0X800);
    // 0x8022F4D4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022F4D8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022F4DC: jal         0x80051248
    // 0x8022F4E0: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    func_80051248_2C648(rdram, ctx);
        goto after_8;
    // 0x8022F4E0: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    after_8:
    // 0x8022F4E4: j           L_8022F518
    // 0x8022F4E8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
        goto L_8022F518;
    // 0x8022F4E8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
L_8022F4EC:
    // 0x8022F4EC: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022F4F0: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x8022F4F4: beq         $a1, $v0, L_8022F50C
    if (ctx->r5 == ctx->r2) {
        // 0x8022F4F8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022F50C;
    }
    // 0x8022F4F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F4FC: jal         0x80050294
    // 0x8022F500: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_9;
    // 0x8022F500: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x8022F504: j           L_8022F518
    // 0x8022F508: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
        goto L_8022F518;
    // 0x8022F508: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
L_8022F50C:
    // 0x8022F50C: jal         0x8005044C
    // 0x8022F510: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_10;
    // 0x8022F510: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x8022F514: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
L_8022F518:
    // 0x8022F518: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x8022F51C: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8022F520: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022F524: jal         0x8004DC2C
    // 0x8022F528: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8004DC2C_2902C(rdram, ctx);
        goto after_11;
    // 0x8022F528: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x8022F52C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8022F530: addiu       $s0, $s2, 0x2C
    ctx->r16 = ADD32(ctx->r18, 0X2C);
    // 0x8022F534: jal         0x8004DD04
    // 0x8022F538: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DD04_29104(rdram, ctx);
        goto after_12;
    // 0x8022F538: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_12:
    // 0x8022F53C: lhu         $v0, 0x2C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2C);
    // 0x8022F540: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x8022F544: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F548: sh          $v0, 0x2C($s2)
    MEM_H(0X2C, ctx->r18) = ctx->r2;
    // 0x8022F54C: lhu         $v0, 0x30($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X30);
    // 0x8022F550: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x8022F554: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F558: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F55C: sh          $v0, 0x30($s2)
    MEM_H(0X30, ctx->r18) = ctx->r2;
    // 0x8022F560: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x8022F564: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022F568: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F56C: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x8022F570: sh          $v0, 0x2E($s2)
    MEM_H(0X2E, ctx->r18) = ctx->r2;
    // 0x8022F574: lhu         $v0, 0x14($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X14);
    // 0x8022F578: lbu         $t0, 0x1($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X1);
    // 0x8022F57C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022F580: addiu       $v1, $s2, 0x34
    ctx->r3 = ADD32(ctx->r18, 0X34);
    // 0x8022F584: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x8022F588: lui         $v1, 0x488
    ctx->r3 = S32(0X488 << 16);
    // 0x8022F58C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x8022F590: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022F594: andi        $v0, $v0, 0xC00
    ctx->r2 = ctx->r2 & 0XC00;
    // 0x8022F598: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8022F59C: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x8022F5A0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022F5A4: jal         0x80051E18
    // 0x8022F5A8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80051E18_2D218(rdram, ctx);
        goto after_13;
    // 0x8022F5A8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_13:
    // 0x8022F5AC: sw          $zero, 0x34($s2)
    MEM_W(0X34, ctx->r18) = 0;
    // 0x8022F5B0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8022F5B4: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8022F5B8: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8022F5BC: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8022F5C0: jr          $ra
    // 0x8022F5C4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8022F5C4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8022F5C8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F5C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F5CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F5D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F5D4: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x8022F5D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F5DC: sh          $zero, 0x14($a3)
    MEM_H(0X14, ctx->r7) = 0;
    // 0x8022F5E0: sh          $zero, 0x18($a3)
    MEM_H(0X18, ctx->r7) = 0;
    // 0x8022F5E4: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F5E8: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022F5EC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022F5F0: sh          $v0, 0x1A($a3)
    MEM_H(0X1A, ctx->r7) = ctx->r2;
    // 0x8022F5F4: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022F5F8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022F5FC: sh          $v0, 0x1E($a3)
    MEM_H(0X1E, ctx->r7) = ctx->r2;
    // 0x8022F600: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022F604: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022F608: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F60C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022F610: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F614: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F618: sh          $v0, 0x1C($a3)
    MEM_H(0X1C, ctx->r7) = ctx->r2;
    // 0x8022F61C: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x8022F620: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8022F624: beql        $v0, $zero, L_8022F638
    if (ctx->r2 == 0) {
        // 0x8022F628: andi        $v0, $v1, 0x2
        ctx->r2 = ctx->r3 & 0X2;
            goto L_8022F638;
    }
    goto skip_0;
    // 0x8022F628: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    skip_0:
    // 0x8022F62C: lhu         $v0, 0x14($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X14);
    // 0x8022F630: j           L_8022F648
    // 0x8022F634: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
        goto L_8022F648;
    // 0x8022F634: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
L_8022F638:
    // 0x8022F638: beq         $v0, $zero, L_8022F64C
    if (ctx->r2 == 0) {
        // 0x8022F63C: nop
    
            goto L_8022F64C;
    }
    // 0x8022F63C: nop

    // 0x8022F640: lhu         $v0, 0x14($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X14);
    // 0x8022F644: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
L_8022F648:
    // 0x8022F648: sh          $v0, 0x14($a3)
    MEM_H(0X14, ctx->r7) = ctx->r2;
L_8022F64C:
    // 0x8022F64C: lhu         $v0, 0x14($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X14);
    // 0x8022F650: andi        $v0, $v0, 0x180
    ctx->r2 = ctx->r2 & 0X180;
    // 0x8022F654: beql        $v0, $zero, L_8022F690
    if (ctx->r2 == 0) {
        // 0x8022F658: sh          $zero, 0x20($a3)
        MEM_H(0X20, ctx->r7) = 0;
            goto L_8022F690;
    }
    goto skip_1;
    // 0x8022F658: sh          $zero, 0x20($a3)
    MEM_H(0X20, ctx->r7) = 0;
    skip_1:
    // 0x8022F65C: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022F660: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8022F664: beq         $v0, $zero, L_8022F67C
    if (ctx->r2 == 0) {
        // 0x8022F668: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F67C;
    }
    // 0x8022F668: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F66C: sh          $v0, 0x20($a3)
    MEM_H(0X20, ctx->r7) = ctx->r2;
    // 0x8022F670: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022F674: j           L_8022F694
    // 0x8022F678: sh          $v0, 0x22($a3)
    MEM_H(0X22, ctx->r7) = ctx->r2;
        goto L_8022F694;
    // 0x8022F678: sh          $v0, 0x22($a3)
    MEM_H(0X22, ctx->r7) = ctx->r2;
L_8022F67C:
    // 0x8022F67C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F680: sh          $v0, 0x20($a3)
    MEM_H(0X20, ctx->r7) = ctx->r2;
    // 0x8022F684: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8022F688: j           L_8022F694
    // 0x8022F68C: sh          $v0, 0x22($a3)
    MEM_H(0X22, ctx->r7) = ctx->r2;
        goto L_8022F694;
    // 0x8022F68C: sh          $v0, 0x22($a3)
    MEM_H(0X22, ctx->r7) = ctx->r2;
L_8022F690:
    // 0x8022F690: sh          $zero, 0x22($a3)
    MEM_H(0X22, ctx->r7) = 0;
L_8022F694:
    // 0x8022F694: addiu       $a0, $a3, 0x3C
    ctx->r4 = ADD32(ctx->r7, 0X3C);
    // 0x8022F698: lb          $a2, 0xF($s0)
    ctx->r6 = MEM_B(ctx->r16, 0XF);
    // 0x8022F69C: lhu         $v1, 0x14($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X14);
    // 0x8022F6A0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8022F6A4: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x8022F6A8: sh          $v0, 0x24($a3)
    MEM_H(0X24, ctx->r7) = ctx->r2;
    // 0x8022F6AC: sh          $zero, 0x26($a3)
    MEM_H(0X26, ctx->r7) = 0;
    // 0x8022F6B0: sw          $zero, 0x34($a3)
    MEM_W(0X34, ctx->r7) = 0;
    // 0x8022F6B4: sw          $zero, 0x38($a3)
    MEM_W(0X38, ctx->r7) = 0;
    // 0x8022F6B8: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x8022F6BC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022F6C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F6C4: ori         $v1, $v1, 0x8
    ctx->r3 = ctx->r3 | 0X8;
    // 0x8022F6C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F6CC: sh          $v0, 0x28($a3)
    MEM_H(0X28, ctx->r7) = ctx->r2;
    // 0x8022F6D0: jal         0x800540BC
    // 0x8022F6D4: sh          $v1, 0x14($a3)
    MEM_H(0X14, ctx->r7) = ctx->r3;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_0;
    // 0x8022F6D4: sh          $v1, 0x14($a3)
    MEM_H(0X14, ctx->r7) = ctx->r3;
    after_0:
    // 0x8022F6D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F6DC: jal         0x8004D5D4
    // 0x8022F6E0: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022F6E0: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    after_1:
    // 0x8022F6E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F6E8: addiu       $a1, $zero, 0x4210
    ctx->r5 = ADD32(0, 0X4210);
    // 0x8022F6EC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022F6F0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022F6F4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022F6F8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022F6FC: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
    // 0x8022F700: jal         0x8022F798
    // 0x8022F704: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    func_8022F798_ovl3(rdram, ctx);
        goto after_2;
    // 0x8022F704: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    after_2:
    // 0x8022F708: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022F70C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F710: bne         $v1, $v0, L_8022F724
    if (ctx->r3 != ctx->r2) {
        // 0x8022F714: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022F724;
    }
    // 0x8022F714: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022F718: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022F71C: sb          $v0, 0x107($s0)
    MEM_B(0X107, ctx->r16) = ctx->r2;
    // 0x8022F720: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022F724:
    // 0x8022F724: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022F728: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022F72C: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022F730: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022F734: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022F738: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F73C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F740: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022F744: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x8022F748: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022F74C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022F750: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022F754: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022F758: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022F75C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022F760: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x8022F764: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022F768: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F76C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022F770: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F774: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022F778: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022F77C: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x8022F780: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x8022F784: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8022F788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F78C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F790: jr          $ra
    // 0x8022F794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EB84_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EB84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EB88: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EB8C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022EB90: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EB94: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022EB98: jal         0x8003B878
    // 0x8022EB9C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x8022EB9C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022EBA0: lbu         $a0, 0x5($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X5);
    // 0x8022EBA4: lui         $a1, 0x3D48
    ctx->r5 = S32(0X3D48 << 16);
    // 0x8022EBA8: sll         $v1, $a0, 8
    ctx->r3 = S32(ctx->r4 << 8);
    // 0x8022EBAC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022EBB0: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x8022EBB4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022EBB8: subu        $s0, $s0, $v1
    ctx->r16 = SUB32(ctx->r16, ctx->r3);
    // 0x8022EBBC: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x8022EBC0: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
    // 0x8022EBC4: lhu         $a0, 0xC($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XC);
    // 0x8022EBC8: ori         $a1, $a1, 0x40
    ctx->r5 = ctx->r5 | 0X40;
    // 0x8022EBCC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022EBD0: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8022EBD4: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8022EBD8: lh          $a0, 0xE($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XE);
    // 0x8022EBDC: lui         $v1, 0x4E
    ctx->r3 = S32(0X4E << 16);
    // 0x8022EBE0: ori         $v1, $v1, 0x5F
    ctx->r3 = ctx->r3 | 0X5F;
    // 0x8022EBE4: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x8022EBE8: addiu       $v1, $zero, 0x1F40
    ctx->r3 = ADD32(0, 0X1F40);
    // 0x8022EBEC: sw          $v1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r3;
    // 0x8022EBF0: addiu       $v1, $zero, 0x1F5F
    ctx->r3 = ADD32(0, 0X1F5F);
    // 0x8022EBF4: sw          $a1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r5;
    // 0x8022EBF8: sw          $v1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r3;
    // 0x8022EBFC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022EC00: sw          $a0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r4;
    // 0x8022EC04: lhu         $a0, 0x8($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X8);
    // 0x8022EC08: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022EC0C: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x8022EC10: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
    // 0x8022EC14: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022EC18: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022EC1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EC20: jr          $ra
    // 0x8022EC24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022EC24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802364F0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802364F0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802364F4: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x802364F8: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x802364FC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80236500: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x80236504: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80236508: lui         $s4, 0x2E80
    ctx->r20 = S32(0X2E80 << 16);
    // 0x8023650C: ori         $s4, $s4, 0x8080
    ctx->r20 = ctx->r20 | 0X8080;
    // 0x80236510: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x80236514: lui         $fp, 0x3DC8
    ctx->r30 = S32(0X3DC8 << 16);
    // 0x80236518: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8023651C: lui         $s7, 0x2A
    ctx->r23 = S32(0X2A << 16);
    // 0x80236520: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80236524: addiu       $s6, $zero, 0x64
    ctx->r22 = ADD32(0, 0X64);
    // 0x80236528: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8023652C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80236530: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236534: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236538: addiu       $s2, $s3, 0x1
    ctx->r18 = ADD32(ctx->r19, 0X1);
L_8023653C:
    // 0x8023653C: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
    // 0x80236540: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x80236544: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x80236548: lbu         $s1, -0x1794($s1)
    ctx->r17 = MEM_BU(ctx->r17, -0X1794);
    // 0x8023654C: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80236550: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80236554: jal         0x8003B878
    // 0x80236558: lbu         $s0, -0x1793($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X1793);
    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x80236558: lbu         $s0, -0x1793($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X1793);
    after_0:
    // 0x8023655C: sll         $v1, $s3, 3
    ctx->r3 = S32(ctx->r19 << 3);
    // 0x80236560: addu        $v1, $v1, $s5
    ctx->r3 = ADD32(ctx->r3, ctx->r21);
    // 0x80236564: sw          $s4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r20;
    // 0x80236568: lw          $a0, 0xD0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XD0);
    // 0x8023656C: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    // 0x80236570: sw          $a0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r4;
    // 0x80236574: lw          $a2, 0xD4($v1)
    ctx->r6 = MEM_W(ctx->r3, 0XD4);
    // 0x80236578: sll         $a0, $s0, 8
    ctx->r4 = S32(ctx->r16 << 8);
    // 0x8023657C: or          $v1, $s1, $fp
    ctx->r3 = ctx->r17 | ctx->r30;
    // 0x80236580: or          $v1, $a0, $v1
    ctx->r3 = ctx->r4 | ctx->r3;
    // 0x80236584: addiu       $a1, $s1, 0x1F
    ctx->r5 = ADD32(ctx->r17, 0X1F);
    // 0x80236588: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x8023658C: or          $v1, $a1, $s7
    ctx->r3 = ctx->r5 | ctx->r23;
    // 0x80236590: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x80236594: addiu       $s0, $s0, 0x1F
    ctx->r16 = ADD32(ctx->r16, 0X1F);
    // 0x80236598: sll         $s0, $s0, 8
    ctx->r16 = S32(ctx->r16 << 8);
    // 0x8023659C: or          $s1, $s0, $s1
    ctx->r17 = ctx->r16 | ctx->r17;
    // 0x802365A0: or          $s0, $s0, $a1
    ctx->r16 = ctx->r16 | ctx->r5;
    // 0x802365A4: sw          $a0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r4;
    // 0x802365A8: sw          $s1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r17;
    // 0x802365AC: sw          $s0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r16;
    // 0x802365B0: sw          $s6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r22;
    // 0x802365B4: sw          $a2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r6;
    // 0x802365B8: slti        $v0, $s3, 0x5
    ctx->r2 = SIGNED(ctx->r19) < 0X5 ? 1 : 0;
    // 0x802365BC: bne         $v0, $zero, L_8023653C
    if (ctx->r2 != 0) {
        // 0x802365C0: addiu       $s2, $s3, 0x1
        ctx->r18 = ADD32(ctx->r19, 0X1);
            goto L_8023653C;
    }
    // 0x802365C0: addiu       $s2, $s3, 0x1
    ctx->r18 = ADD32(ctx->r19, 0X1);
    // 0x802365C4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802365C8: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x802365CC: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x802365D0: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x802365D4: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x802365D8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x802365DC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802365E0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802365E4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802365E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802365EC: jr          $ra
    // 0x802365F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802365F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802365F4: nop

    // 0x802365F8: nop

    // 0x802365FC: nop

;}
RECOMP_FUNC void func_802319F4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802319F4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802319F8: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x802319FC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80231A00: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80231A04: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80231A08: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80231A0C: lbu         $v1, 0xA($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XA);
    // 0x80231A10: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80231A14: beq         $v1, $a0, L_80231B00
    if (ctx->r3 == ctx->r4) {
        // 0x80231A18: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_80231B00;
    }
    // 0x80231A18: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80231A1C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80231A20: beql        $v0, $zero, L_80231A38
    if (ctx->r2 == 0) {
        // 0x80231A24: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80231A38;
    }
    goto skip_0;
    // 0x80231A24: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80231A28: beq         $v1, $zero, L_80231A50
    if (ctx->r3 == 0) {
        // 0x80231A2C: nop
    
            goto L_80231A50;
    }
    // 0x80231A2C: nop

    // 0x80231A30: j           L_80231D48
    // 0x80231A34: nop

        goto L_80231D48;
    // 0x80231A34: nop

L_80231A38:
    // 0x80231A38: beq         $v1, $v0, L_80231BA8
    if (ctx->r3 == ctx->r2) {
        // 0x80231A3C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80231BA8;
    }
    // 0x80231A3C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80231A40: beq         $v1, $v0, L_80231D3C
    if (ctx->r3 == ctx->r2) {
        // 0x80231A44: nop
    
            goto L_80231D3C;
    }
    // 0x80231A44: nop

    // 0x80231A48: j           L_80231D48
    // 0x80231A4C: nop

        goto L_80231D48;
    // 0x80231A4C: nop

L_80231A50:
    // 0x80231A50: jal         0x8004F144
    // 0x80231A54: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80231A54: nop

    after_0:
    // 0x80231A58: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80231A5C: beq         $s0, $zero, L_80231A88
    if (ctx->r16 == 0) {
        // 0x80231A60: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_80231A88;
    }
    // 0x80231A60: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80231A64: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80231A68: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80231A6C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231A70: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80231A74: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80231A78: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80231A7C: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80231A80: jal         0x8009A3B4
    // 0x80231A84: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80231A84: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_1:
L_80231A88:
    // 0x80231A88: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    // 0x80231A8C: jal         0x8002A33C
    // 0x80231A90: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80231A90: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_2:
    // 0x80231A94: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x80231A98: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80231A9C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80231AA0: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x80231AA4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80231AA8: sh          $v0, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r2;
    // 0x80231AAC: sh          $zero, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = 0;
    // 0x80231AB0: ori         $v1, $v1, 0x100
    ctx->r3 = ctx->r3 | 0X100;
    // 0x80231AB4: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    // 0x80231AB8: lh          $a1, 0x56($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X56);
    // 0x80231ABC: addiu       $a2, $zero, 0x3C00
    ctx->r6 = ADD32(0, 0X3C00);
    // 0x80231AC0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80231AC4: jal         0x8004DC2C
    // 0x80231AC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8004DC2C_2902C(rdram, ctx);
        goto after_3;
    // 0x80231AC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x80231ACC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80231AD0: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x80231AD4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231AD8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80231ADC: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80231AE0: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x80231AE4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80231AE8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80231AEC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231AF0: jal         0x8004DD04
    // 0x80231AF4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_4;
    // 0x80231AF4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_4:
    // 0x80231AF8: j           L_80231B98
    // 0x80231AFC: nop

        goto L_80231B98;
    // 0x80231AFC: nop

L_80231B00:
    // 0x80231B00: lh          $v1, 0x1C($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X1C);
    // 0x80231B04: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80231B08: bne         $v1, $v0, L_80231B20
    if (ctx->r3 != ctx->r2) {
        // 0x80231B0C: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_80231B20;
    }
    // 0x80231B0C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80231B10: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80231B14: sh          $v0, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r2;
    // 0x80231B18: lh          $v1, 0x1C($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X1C);
    // 0x80231B1C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
L_80231B20:
    // 0x80231B20: bne         $v1, $v0, L_80231B30
    if (ctx->r3 != ctx->r2) {
        // 0x80231B24: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_80231B30;
    }
    // 0x80231B24: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80231B28: j           L_80231B38
    // 0x80231B2C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
        goto L_80231B38;
    // 0x80231B2C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_80231B30:
    // 0x80231B30: bne         $v1, $v0, L_80231B3C
    if (ctx->r3 != ctx->r2) {
        // 0x80231B34: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80231B3C;
    }
    // 0x80231B34: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_80231B38:
    // 0x80231B38: sh          $v0, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r2;
L_80231B3C:
    // 0x80231B3C: lh          $v0, 0x1C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1C);
    // 0x80231B40: slti        $v0, $v0, 0x3C
    ctx->r2 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x80231B44: beq         $v0, $zero, L_80231B5C
    if (ctx->r2 == 0) {
        // 0x80231B48: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80231B5C;
    }
    // 0x80231B48: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80231B4C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80231B50: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231B54: jal         0x8004DA90
    // 0x80231B58: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x80231B58: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
L_80231B5C:
    // 0x80231B5C: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x80231B60: lhu         $v1, 0x24($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X24);
    // 0x80231B64: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231B68: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    // 0x80231B6C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231B70: sw          $v0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r2;
    // 0x80231B74: lw          $v0, 0x2C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X2C);
    // 0x80231B78: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x80231B7C: bnel        $v0, $zero, L_80231B98
    if (ctx->r2 != 0) {
        // 0x80231B80: sh          $zero, 0x18($s1)
        MEM_H(0X18, ctx->r17) = 0;
            goto L_80231B98;
    }
    goto skip_1;
    // 0x80231B80: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    skip_1:
    // 0x80231B84: lw          $v1, 0x30($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X30);
    // 0x80231B88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231B8C: bne         $v1, $v0, L_80231D48
    if (ctx->r3 != ctx->r2) {
        // 0x80231B90: nop
    
            goto L_80231D48;
    }
    // 0x80231B90: nop

    // 0x80231B94: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
L_80231B98:
    // 0x80231B98: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x80231B9C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231BA0: j           L_80231D48
    // 0x80231BA4: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
        goto L_80231D48;
    // 0x80231BA4: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
L_80231BA8:
    // 0x80231BA8: lw          $v0, 0x34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X34);
    // 0x80231BAC: bne         $v0, $a0, L_80231C30
    if (ctx->r2 != ctx->r4) {
        // 0x80231BB0: nop
    
            goto L_80231C30;
    }
    // 0x80231BB0: nop

    // 0x80231BB4: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x80231BB8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80231BBC: bne         $v0, $zero, L_80231CF8
    if (ctx->r2 != 0) {
        // 0x80231BC0: nop
    
            goto L_80231CF8;
    }
    // 0x80231BC0: nop

    // 0x80231BC4: jal         0x8004F144
    // 0x80231BC8: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_6;
    // 0x80231BC8: nop

    after_6:
    // 0x80231BCC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80231BD0: beq         $s0, $zero, L_80231C28
    if (ctx->r16 == 0) {
        // 0x80231BD4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80231C28;
    }
    // 0x80231BD4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231BD8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80231BDC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80231BE0: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80231BE4: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x80231BE8: jal         0x800A3450
    // 0x80231BEC: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_7;
    // 0x80231BEC: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_7:
    // 0x80231BF0: lhu         $v1, 0x14($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X14);
    // 0x80231BF4: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80231BF8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231BFC: jal         0x800A3450
    // 0x80231C00: sh          $v1, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x80231C00: sh          $v1, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r3;
    after_8:
    // 0x80231C04: lhu         $v1, 0x16($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X16);
    // 0x80231C08: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80231C0C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231C10: jal         0x800A3450
    // 0x80231C14: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_9;
    // 0x80231C14: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    after_9:
    // 0x80231C18: lhu         $v1, 0x18($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X18);
    // 0x80231C1C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80231C20: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231C24: sh          $v1, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r3;
L_80231C28:
    // 0x80231C28: j           L_80231CF0
    // 0x80231C2C: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
        goto L_80231CF0;
    // 0x80231C2C: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
L_80231C30:
    // 0x80231C30: lh          $v0, 0x18($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X18);
    // 0x80231C34: bne         $v0, $zero, L_80231CF8
    if (ctx->r2 != 0) {
        // 0x80231C38: nop
    
            goto L_80231CF8;
    }
    // 0x80231C38: nop

    // 0x80231C3C: jal         0x8004F144
    // 0x80231C40: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_10;
    // 0x80231C40: nop

    after_10:
    // 0x80231C44: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80231C48: beq         $s0, $zero, L_80231CA0
    if (ctx->r16 == 0) {
        // 0x80231C4C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80231CA0;
    }
    // 0x80231C4C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231C50: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80231C54: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80231C58: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80231C5C: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x80231C60: jal         0x800A3450
    // 0x80231C64: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_11;
    // 0x80231C64: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_11:
    // 0x80231C68: lhu         $v1, 0x14($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X14);
    // 0x80231C6C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80231C70: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231C74: jal         0x800A3450
    // 0x80231C78: sh          $v1, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_12;
    // 0x80231C78: sh          $v1, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r3;
    after_12:
    // 0x80231C7C: lhu         $v1, 0x16($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X16);
    // 0x80231C80: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80231C84: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231C88: jal         0x800A3450
    // 0x80231C8C: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_13;
    // 0x80231C8C: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    after_13:
    // 0x80231C90: lhu         $v1, 0x18($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X18);
    // 0x80231C94: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80231C98: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231C9C: sh          $v1, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r3;
L_80231CA0:
    // 0x80231CA0: jal         0x8004F144
    // 0x80231CA4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_14;
    // 0x80231CA4: nop

    after_14:
    // 0x80231CA8: beq         $v0, $zero, L_80231CEC
    if (ctx->r2 == 0) {
        // 0x80231CAC: sw          $v0, 0x4($s1)
        MEM_W(0X4, ctx->r17) = ctx->r2;
            goto L_80231CEC;
    }
    // 0x80231CAC: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x80231CB0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80231CB4: sb          $a0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r4;
    // 0x80231CB8: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x80231CBC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80231CC0: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80231CC4: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80231CC8: sb          $a0, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r4;
    // 0x80231CCC: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x80231CD0: lhu         $v0, 0x14($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X14);
    // 0x80231CD4: sh          $v0, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r2;
    // 0x80231CD8: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80231CDC: sh          $zero, 0x3A($v0)
    MEM_H(0X3A, ctx->r2) = 0;
    // 0x80231CE0: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x80231CE4: lhu         $v0, 0x18($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X18);
    // 0x80231CE8: sh          $v0, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r2;
L_80231CEC:
    // 0x80231CEC: addiu       $a0, $zero, 0x14D
    ctx->r4 = ADD32(0, 0X14D);
L_80231CF0:
    // 0x80231CF0: jal         0x8002A33C
    // 0x80231CF4: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_15;
    // 0x80231CF4: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_15:
L_80231CF8:
    // 0x80231CF8: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x80231CFC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231D00: bne         $v1, $v0, L_80231D18
    if (ctx->r3 != ctx->r2) {
        // 0x80231D04: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80231D18;
    }
    // 0x80231D04: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80231D08: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80231D0C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80231D10: j           L_80231D2C
    // 0x80231D14: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
        goto L_80231D2C;
    // 0x80231D14: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
L_80231D18:
    // 0x80231D18: bne         $v1, $v0, L_80231D2C
    if (ctx->r3 != ctx->r2) {
        // 0x80231D1C: nop
    
            goto L_80231D2C;
    }
    // 0x80231D1C: nop

    // 0x80231D20: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x80231D24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231D28: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
L_80231D2C:
    // 0x80231D2C: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x80231D30: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231D34: j           L_80231D48
    // 0x80231D38: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
        goto L_80231D48;
    // 0x80231D38: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
L_80231D3C:
    // 0x80231D3C: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80231D40: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80231D44: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
L_80231D48:
    // 0x80231D48: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x80231D4C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80231D50: beq         $v0, $zero, L_80231DBC
    if (ctx->r2 == 0) {
        // 0x80231D54: nop
    
            goto L_80231DBC;
    }
    // 0x80231D54: nop

    // 0x80231D58: jal         0x8004F144
    // 0x80231D5C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_16;
    // 0x80231D5C: nop

    after_16:
    // 0x80231D60: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80231D64: beq         $s0, $zero, L_80231DBC
    if (ctx->r16 == 0) {
        // 0x80231D68: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231DBC;
    }
    // 0x80231D68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231D6C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80231D70: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80231D74: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80231D78: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80231D7C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80231D80: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80231D84: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80231D88: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80231D8C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80231D90: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80231D94: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x80231D98: lhu         $v0, 0x14($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X14);
    // 0x80231D9C: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x80231DA0: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x80231DA4: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x80231DA8: lhu         $v0, 0x18($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X18);
    // 0x80231DAC: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x80231DB0: lbu         $v0, 0x17($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X17);
    // 0x80231DB4: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80231DB8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80231DBC:
    // 0x80231DBC: lhu         $v0, 0x1C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1C);
    // 0x80231DC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231DC4: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x80231DC8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80231DCC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80231DD0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80231DD4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80231DD8: jr          $ra
    // 0x80231DDC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80231DDC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80229A18_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229A18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229A1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229A20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229A24: jal         0x8004F488
    // 0x80229A28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x80229A28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80229A2C: lw          $a0, 0x450($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X450);
    // 0x80229A30: jal         0x8004F418
    // 0x80229A34: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x80229A34: nop

    after_1:
    // 0x80229A38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229A3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229A40: jr          $ra
    // 0x80229A44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229A44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237318_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237318: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023731C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237320: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237324: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237328: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8023732C: blez        $v0, L_802373B4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80237330: nop
    
            goto L_802373B4;
    }
    // 0x80237330: nop

    // 0x80237334: jal         0x800A3450
    // 0x80237338: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80237338: nop

    after_0:
    // 0x8023733C: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x80237340: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80237344: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80237348: jal         0x800A3450
    // 0x8023734C: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8023734C: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_1:
    // 0x80237350: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x80237354: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80237358: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023735C: jal         0x800A3450
    // 0x80237360: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80237360: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x80237364: lui         $t0, 0xFFFE
    ctx->r8 = S32(0XFFFE << 16);
    // 0x80237368: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x8023736C: ori         $t0, $t0, 0xFEFF
    ctx->r8 = ctx->r8 | 0XFEFF;
    // 0x80237370: lbu         $a3, 0xE($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XE);
    // 0x80237374: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80237378: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x8023737C: lhu         $a1, 0x24($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X24);
    // 0x80237380: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x80237384: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80237388: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8023738C: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x80237390: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237394: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80237398: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8023739C: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x802373A0: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    // 0x802373A4: sh          $a1, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r5;
    // 0x802373A8: sw          $a2, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r6;
    // 0x802373AC: j           L_802373BC
    // 0x802373B0: sb          $a3, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r7;
        goto L_802373BC;
    // 0x802373B0: sb          $a3, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r7;
L_802373B4:
    // 0x802373B4: jal         0x8004F5C4
    // 0x802373B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_3;
    // 0x802373B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_802373BC:
    // 0x802373BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802373C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802373C4: jr          $ra
    // 0x802373C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802373C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802373CC: nop

;}
RECOMP_FUNC void func_802288EC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802288EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802288F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802288F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802288F8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802288FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228900: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228904: bne         $v0, $zero, L_80228938
    if (ctx->r2 != 0) {
        // 0x80228908: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80228938;
    }
    // 0x80228908: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022890C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80228910: jal         0x80050294
    // 0x80228914: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228914: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228918: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022891C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228920: jal         0x80228C84
    // 0x80228924: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80228C84_ovl3(rdram, ctx);
        goto after_1;
    // 0x80228924: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x80228928: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022892C: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80228930: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228934: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228938:
    // 0x80228938: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022893C: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80228940: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80228944: beq         $v1, $v0, L_8022895C
    if (ctx->r3 == ctx->r2) {
        // 0x80228948: addiu       $v0, $zero, 0xC3
        ctx->r2 = ADD32(0, 0XC3);
            goto L_8022895C;
    }
    // 0x80228948: addiu       $v0, $zero, 0xC3
    ctx->r2 = ADD32(0, 0XC3);
    // 0x8022894C: beq         $v1, $v0, L_8022896C
    if (ctx->r3 == ctx->r2) {
        // 0x80228950: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022896C;
    }
    // 0x80228950: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228954: j           L_8022897C
    // 0x80228958: nop

        goto L_8022897C;
    // 0x80228958: nop

L_8022895C:
    // 0x8022895C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228960: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228964: j           L_80228974
    // 0x80228968: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
        goto L_80228974;
    // 0x80228968: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_8022896C:
    // 0x8022896C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228970: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
L_80228974:
    // 0x80228974: jal         0x80228C84
    // 0x80228978: nop

    func_80228C84_ovl3(rdram, ctx);
        goto after_2;
    // 0x80228978: nop

    after_2:
L_8022897C:
    // 0x8022897C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228980: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228984: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228988: jr          $ra
    // 0x8022898C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022898C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023B300_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B300: jr          $ra
    // 0x8023B304: nop

    TRACE_RETURN()
    return;
    // 0x8023B304: nop

;}
RECOMP_FUNC void func_80228BEC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228BEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228BF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228BF4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228BF8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228BFC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228C00: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228C04: bne         $v0, $zero, L_80228C70
    if (ctx->r2 != 0) {
        // 0x80228C08: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80228C70;
    }
    // 0x80228C08: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80228C0C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80228C10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228C14: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80228C18: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80228C1C: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80228C20: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80228C24: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80228C28: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80228C2C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80228C30: jal         0x8004D5FC
    // 0x80228C34: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5FC_289FC(rdram, ctx);
        goto after_0;
    // 0x80228C34: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80228C38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228C3C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228C40: jal         0x80050294
    // 0x80228C44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80228C44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80228C48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228C4C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228C50: jal         0x80228C84
    // 0x80228C54: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80228C84_ovl3(rdram, ctx);
        goto after_2;
    // 0x80228C54: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80228C58: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80228C5C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228C60: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228C64: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228C68: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80228C6C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80228C70:
    // 0x80228C70: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228C74: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228C78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228C7C: jr          $ra
    // 0x80228C80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228C80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023AC38_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AC38: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8023AC3C: lh          $v0, -0x3BBC($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3BBC);
    // 0x8023AC40: bne         $v0, $zero, L_8023AC50
    if (ctx->r2 != 0) {
        // 0x8023AC44: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8023AC50;
    }
    // 0x8023AC44: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023AC48: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8023AC4C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
L_8023AC50:
    // 0x8023AC50: jr          $ra
    // 0x8023AC54: nop

    TRACE_RETURN()
    return;
    // 0x8023AC54: nop

;}
RECOMP_FUNC void func_8022D148_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D148: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D14C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D150: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D154: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D158: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D15C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022D160: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022D164: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022D168: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022D16C: bne         $v0, $zero, L_8022D1C8
    if (ctx->r2 != 0) {
        // 0x8022D170: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022D1C8;
    }
    // 0x8022D170: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022D174: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D178: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022D17C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D180: jal         0x8004F820
    // 0x8022D184: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022D184: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x8022D188: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D18C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022D190: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x8022D194: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D198: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022D19C: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8022D1A0: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x8022D1A4: beq         $a0, $zero, L_8022D1C8
    if (ctx->r4 == 0) {
        // 0x8022D1A8: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022D1C8;
    }
    // 0x8022D1A8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022D1AC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D1B0: jal         0x8022DB70
    // 0x8022D1B4: nop

    func_8022DB70_ovl3(rdram, ctx);
        goto after_1;
    // 0x8022D1B4: nop

    after_1:
    // 0x8022D1B8: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022D1BC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D1C0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022D1C4: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_8022D1C8:
    // 0x8022D1C8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022D1CC: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022D1D0: bne         $v0, $zero, L_8022D1F4
    if (ctx->r2 != 0) {
        // 0x8022D1D4: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022D1F4;
    }
    // 0x8022D1D4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022D1D8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022D1DC: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x8022D1E0: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022D1E4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022D1E8: jal         0x8022DC08
    // 0x8022D1EC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022DC08_ovl3(rdram, ctx);
        goto after_2;
    // 0x8022D1EC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x8022D1F0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022D1F4:
    // 0x8022D1F4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D1F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D1FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D200: jr          $ra
    // 0x8022D204: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D204: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802390C4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802390C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802390C8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x802390CC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802390D0: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802390D4: lbu         $v0, 0xB($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XB);
    // 0x802390D8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802390DC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802390E0: sb          $v0, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r2;
    // 0x802390E4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802390E8: bne         $v0, $zero, L_8023918C
    if (ctx->r2 != 0) {
        // 0x802390EC: sb          $v1, 0x9($a1)
        MEM_B(0X9, ctx->r5) = ctx->r3;
            goto L_8023918C;
    }
    // 0x802390EC: sb          $v1, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r3;
    // 0x802390F0: lbu         $v0, 0xA($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XA);
    // 0x802390F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802390F8: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x802390FC: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
    // 0x80239100: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80239104: bne         $v0, $zero, L_8023911C
    if (ctx->r2 != 0) {
        // 0x80239108: nop
    
            goto L_8023911C;
    }
    // 0x80239108: nop

    // 0x8023910C: jal         0x8004F5C4
    // 0x80239110: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80239110: nop

    after_0:
    // 0x80239114: j           L_8023918C
    // 0x80239118: nop

        goto L_8023918C;
    // 0x80239118: nop

L_8023911C:
    // 0x8023911C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80239120: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80239124: lbu         $v0, -0x1534($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1534);
    // 0x80239128: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8023912C: sb          $v0, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r2;
    // 0x80239130: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80239134: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80239138: lbu         $v0, -0x1540($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1540);
    // 0x8023913C: sb          $v0, 0x22($a1)
    MEM_B(0X22, ctx->r5) = ctx->r2;
    // 0x80239140: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80239144: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80239148: lbu         $v0, -0x153F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X153F);
    // 0x8023914C: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80239150: sb          $v0, 0x23($a1)
    MEM_B(0X23, ctx->r5) = ctx->r2;
    // 0x80239154: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80239158: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8023915C: lbu         $a0, -0x152C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X152C);
    // 0x80239160: lbu         $v0, 0xD($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XD);
    // 0x80239164: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80239168: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
    // 0x8023916C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239170: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80239174: lbu         $v1, -0x152C($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X152C);
    // 0x80239178: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023917C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80239180: srl         $v1, $v1, 1
    ctx->r3 = S32(U32(ctx->r3) >> 1);
    // 0x80239184: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80239188: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
L_8023918C:
    // 0x8023918C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80239190: jr          $ra
    // 0x80239194: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80239194: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80239198: nop

    // 0x8023919C: nop

;}
RECOMP_FUNC void func_80229DAC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229DAC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80229DB0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80229DB4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229DB8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80229DBC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80229DC0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80229DC4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80229DC8: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80229DCC: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80229DD0: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80229DD4: beq         $v1, $zero, L_80229DF0
    if (ctx->r3 == 0) {
        // 0x80229DD8: addiu       $s1, $s0, 0x380
        ctx->r17 = ADD32(ctx->r16, 0X380);
            goto L_80229DF0;
    }
    // 0x80229DD8: addiu       $s1, $s0, 0x380
    ctx->r17 = ADD32(ctx->r16, 0X380);
    // 0x80229DDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229DE0: beq         $v1, $v0, L_80229E24
    if (ctx->r3 == ctx->r2) {
        // 0x80229DE4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80229E24;
    }
    // 0x80229DE4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229DE8: j           L_80229EC4
    // 0x80229DEC: nop

        goto L_80229EC4;
    // 0x80229DEC: nop

L_80229DF0:
    // 0x80229DF0: lhu         $v1, 0x380($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X380);
    // 0x80229DF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229DF8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229DFC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229E00: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229E04: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80229E08: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80229E0C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80229E10: sh          $v0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r2;
    // 0x80229E14: sw          $zero, 0x3E4($s0)
    MEM_W(0X3E4, ctx->r16) = 0;
    // 0x80229E18: ori         $v1, $v1, 0x200
    ctx->r3 = ctx->r3 | 0X200;
    // 0x80229E1C: sh          $v1, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r3;
    // 0x80229E20: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80229E24:
    // 0x80229E24: jal         0x8004DF38
    // 0x80229E28: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8004DF38_29338(rdram, ctx);
        goto after_0;
    // 0x80229E28: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_0:
    // 0x80229E2C: lui         $v1, 0x7F
    ctx->r3 = S32(0X7F << 16);
    // 0x80229E30: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80229E34: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80229E38: bne         $v1, $zero, L_80229E54
    if (ctx->r3 != 0) {
        // 0x80229E3C: nop
    
            goto L_80229E54;
    }
    // 0x80229E3C: nop

    // 0x80229E40: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x80229E44: beq         $v0, $zero, L_80229E6C
    if (ctx->r2 == 0) {
        // 0x80229E48: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80229E6C;
    }
    // 0x80229E48: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80229E4C: j           L_80229E68
    // 0x80229E50: addiu       $v0, $v1, -0x20
    ctx->r2 = ADD32(ctx->r3, -0X20);
        goto L_80229E68;
    // 0x80229E50: addiu       $v0, $v1, -0x20
    ctx->r2 = ADD32(ctx->r3, -0X20);
L_80229E54:
    // 0x80229E54: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x80229E58: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80229E5C: slti        $v0, $v0, 0x100
    ctx->r2 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x80229E60: beq         $v0, $zero, L_80229E6C
    if (ctx->r2 == 0) {
        // 0x80229E64: addiu       $v0, $v1, 0x10
        ctx->r2 = ADD32(ctx->r3, 0X10);
            goto L_80229E6C;
    }
    // 0x80229E64: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
L_80229E68:
    // 0x80229E68: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_80229E6C:
    // 0x80229E6C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229E70: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229E74: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80229E78: jal         0x8004F820
    // 0x80229E7C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80229E7C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_1:
    // 0x80229E80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229E84: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80229E88: lhu         $v1, 0x56($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X56);
    // 0x80229E8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229E90: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80229E94: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229E98: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229E9C: jal         0x8004DA90
    // 0x80229EA0: sh          $v1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80229EA0: sh          $v1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r3;
    after_2:
    // 0x80229EA4: lw          $v0, 0x64($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X64);
    // 0x80229EA8: sltiu       $v0, $v0, 0x5AB
    ctx->r2 = ctx->r2 < 0X5AB ? 1 : 0;
    // 0x80229EAC: bne         $v0, $zero, L_80229EC4
    if (ctx->r2 != 0) {
        // 0x80229EB0: nop
    
            goto L_80229EC4;
    }
    // 0x80229EB0: nop

    // 0x80229EB4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229EB8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80229EBC: andi        $v0, $v0, 0xFBFF
    ctx->r2 = ctx->r2 & 0XFBFF;
    // 0x80229EC0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80229EC4:
    // 0x80229EC4: lw          $v0, 0x64($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X64);
    // 0x80229EC8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229ECC: sw          $v0, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->r2;
    // 0x80229ED0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80229ED4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80229ED8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80229EDC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80229EE0: jr          $ra
    // 0x80229EE4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80229EE4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022DB70_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DB70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DB74: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8022DB78: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022DB7C: beq         $a0, $v0, L_8022DBE4
    if (ctx->r4 == ctx->r2) {
        // 0x8022DB80: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8022DBE4;
    }
    // 0x8022DB80: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022DB84: slti        $v0, $a0, 0x2B
    ctx->r2 = SIGNED(ctx->r4) < 0X2B ? 1 : 0;
    // 0x8022DB88: beql        $v0, $zero, L_8022DBA8
    if (ctx->r2 == 0) {
        // 0x8022DB8C: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_8022DBA8;
    }
    goto skip_0;
    // 0x8022DB8C: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    skip_0:
    // 0x8022DB90: beq         $a0, $zero, L_8022DBDC
    if (ctx->r4 == 0) {
        // 0x8022DB94: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_8022DBDC;
    }
    // 0x8022DB94: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022DB98: beq         $a0, $v0, L_8022DBFC
    if (ctx->r4 == ctx->r2) {
        // 0x8022DB9C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022DBFC;
    }
    // 0x8022DB9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DBA0: j           L_8022DBFC
    // 0x8022DBA4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022DBFC;
    // 0x8022DBA4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022DBA8:
    // 0x8022DBA8: beq         $a0, $v0, L_8022DBDC
    if (ctx->r4 == ctx->r2) {
        // 0x8022DBAC: slti        $v0, $a0, 0x51
        ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
            goto L_8022DBDC;
    }
    // 0x8022DBAC: slti        $v0, $a0, 0x51
    ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
    // 0x8022DBB0: beq         $v0, $zero, L_8022DBC8
    if (ctx->r2 == 0) {
        // 0x8022DBB4: addiu       $v0, $zero, 0x39
        ctx->r2 = ADD32(0, 0X39);
            goto L_8022DBC8;
    }
    // 0x8022DBB4: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x8022DBB8: beq         $a0, $v0, L_8022DBFC
    if (ctx->r4 == ctx->r2) {
        // 0x8022DBBC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022DBFC;
    }
    // 0x8022DBBC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022DBC0: j           L_8022DBFC
    // 0x8022DBC4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022DBFC;
    // 0x8022DBC4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022DBC8:
    // 0x8022DBC8: addiu       $v0, $zero, 0x53
    ctx->r2 = ADD32(0, 0X53);
    // 0x8022DBCC: beq         $a0, $v0, L_8022DBEC
    if (ctx->r4 == ctx->r2) {
        // 0x8022DBD0: nop
    
            goto L_8022DBEC;
    }
    // 0x8022DBD0: nop

    // 0x8022DBD4: j           L_8022DBFC
    // 0x8022DBD8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022DBFC;
    // 0x8022DBD8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022DBDC:
    // 0x8022DBDC: j           L_8022DBFC
    // 0x8022DBE0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022DBFC;
    // 0x8022DBE0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022DBE4:
    // 0x8022DBE4: j           L_8022DBFC
    // 0x8022DBE8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_8022DBFC;
    // 0x8022DBE8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022DBEC:
    // 0x8022DBEC: jal         0x800A3450
    // 0x8022DBF0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022DBF0: nop

    after_0:
    // 0x8022DBF4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022DBF8: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
L_8022DBFC:
    // 0x8022DBFC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022DC00: jr          $ra
    // 0x8022DC04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DC04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BD14_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BD14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BD18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BD1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BD20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BD24: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022BD28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BD2C: jal         0x8004DA90
    // 0x8022BD30: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022BD30: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022BD34: lhu         $v0, 0x35E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X35E);
    // 0x8022BD38: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022BD3C: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    // 0x8022BD40: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BD44: bne         $v0, $zero, L_8022BD7C
    if (ctx->r2 != 0) {
        // 0x8022BD48: nop
    
            goto L_8022BD7C;
    }
    // 0x8022BD48: nop

    // 0x8022BD4C: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x8022BD50: beq         $v0, $zero, L_8022BD64
    if (ctx->r2 == 0) {
        // 0x8022BD54: nop
    
            goto L_8022BD64;
    }
    // 0x8022BD54: nop

    // 0x8022BD58: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022BD5C: j           L_8022BD6C
    // 0x8022BD60: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
        goto L_8022BD6C;
    // 0x8022BD60: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
L_8022BD64:
    // 0x8022BD64: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022BD68: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
L_8022BD6C:
    // 0x8022BD6C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022BD70: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022BD74: j           L_8022BDCC
    // 0x8022BD78: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8022BDCC;
    // 0x8022BD78: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022BD7C:
    // 0x8022BD7C: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022BD80: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022BD84: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022BD88: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BD8C: bne         $v0, $zero, L_8022BD9C
    if (ctx->r2 != 0) {
        // 0x8022BD90: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022BD9C;
    }
    // 0x8022BD90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BD94: j           L_8022BDCC
    // 0x8022BD98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022BDCC;
    // 0x8022BD98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022BD9C:
    // 0x8022BD9C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022BDA0: jal         0x8022DCA4
    // 0x8022BDA4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022DCA4_ovl3(rdram, ctx);
        goto after_1;
    // 0x8022BDA4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x8022BDA8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022BDAC: beq         $v0, $zero, L_8022BDD0
    if (ctx->r2 == 0) {
        // 0x8022BDB0: nop
    
            goto L_8022BDD0;
    }
    // 0x8022BDB0: nop

    // 0x8022BDB4: jal         0x8022DC08
    // 0x8022BDB8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022DC08_ovl3(rdram, ctx);
        goto after_2;
    // 0x8022BDB8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x8022BDBC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022BDC0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022BDC4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022BDC8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022BDCC:
    // 0x8022BDCC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022BDD0:
    // 0x8022BDD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BDD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BDD8: jr          $ra
    // 0x8022BDDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BDDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238940_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238940: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80238944: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80238948: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023894C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80238950: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80238954: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80238958: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023895C: lbu         $a0, 0xC($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XC);
    // 0x80238960: jal         0x80053ED8
    // 0x80238964: addiu       $s0, $s1, 0x28
    ctx->r16 = ADD32(ctx->r17, 0X28);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x80238964: addiu       $s0, $s1, 0x28
    ctx->r16 = ADD32(ctx->r17, 0X28);
    after_0:
    // 0x80238968: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8023896C: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80238970: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80238974: bne         $v0, $zero, L_8023898C
    if (ctx->r2 != 0) {
        // 0x80238978: nop
    
            goto L_8023898C;
    }
    // 0x80238978: nop

    // 0x8023897C: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80238980: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238984: j           L_80238AA4
    // 0x80238988: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_80238AA4;
    // 0x80238988: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8023898C:
    // 0x8023898C: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80238990: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80238994: slti        $v0, $v0, 0x40
    ctx->r2 = SIGNED(ctx->r2) < 0X40 ? 1 : 0;
    // 0x80238998: beq         $v0, $zero, L_802389A4
    if (ctx->r2 == 0) {
        // 0x8023899C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_802389A4;
    }
    // 0x8023899C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x802389A0: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
L_802389A4:
    // 0x802389A4: lhu         $v0, 0x14($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X14);
    // 0x802389A8: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x802389AC: lhu         $v0, 0x16($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X16);
    // 0x802389B0: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    // 0x802389B4: lhu         $v0, 0x18($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X18);
    // 0x802389B8: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x802389BC: lhu         $a0, 0x56($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X56);
    // 0x802389C0: jal         0x800324B4
    // 0x802389C4: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x802389C4: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    after_1:
    // 0x802389C8: sll         $v1, $v0, 5
    ctx->r3 = S32(ctx->r2 << 5);
    // 0x802389CC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802389D0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802389D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802389D8: lhu         $v0, 0x1C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1C);
    // 0x802389DC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802389E0: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x802389E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802389E8: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x802389EC: lhu         $a0, 0x56($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X56);
    // 0x802389F0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x802389F4: jal         0x80032498
    // 0x802389F8: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x802389F8: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    after_2:
    // 0x802389FC: sll         $v1, $v0, 5
    ctx->r3 = S32(ctx->r2 << 5);
    // 0x80238A00: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80238A04: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80238A08: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238A0C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80238A10: lhu         $v0, 0x20($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X20);
    // 0x80238A14: lhu         $a0, 0x1E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X1E);
    // 0x80238A18: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80238A1C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80238A20: addiu       $a0, $a0, -0x60
    ctx->r4 = ADD32(ctx->r4, -0X60);
    // 0x80238A24: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x80238A28: sh          $a0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r4;
L_80238A2C:
    // 0x80238A2C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80238A30: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80238A34: beq         $v0, $zero, L_80238A74
    if (ctx->r2 == 0) {
        // 0x80238A38: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80238A74;
    }
    // 0x80238A38: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80238A3C: lhu         $a1, 0x56($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X56);
    // 0x80238A40: lb          $a2, 0x1($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X1);
    // 0x80238A44: jal         0x80238AC0
    // 0x80238A48: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    func_80238AC0_ovl3(rdram, ctx);
        goto after_3;
    // 0x80238A48: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    after_3:
    // 0x80238A4C: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x80238A50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238A54: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    // 0x80238A58: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80238A5C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80238A60: slti        $v0, $v0, 0xD
    ctx->r2 = SIGNED(ctx->r2) < 0XD ? 1 : 0;
    // 0x80238A64: beql        $v0, $zero, L_80238A94
    if (ctx->r2 == 0) {
        // 0x80238A68: sb          $zero, 0x1($s0)
        MEM_B(0X1, ctx->r16) = 0;
            goto L_80238A94;
    }
    goto skip_0;
    // 0x80238A68: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    skip_0:
    // 0x80238A6C: j           L_80238A98
    // 0x80238A70: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_80238A98;
    // 0x80238A70: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80238A74:
    // 0x80238A74: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x80238A78: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80238A7C: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x80238A80: sltu        $v0, $s2, $v0
    ctx->r2 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x80238A84: beql        $v0, $zero, L_80238A98
    if (ctx->r2 == 0) {
        // 0x80238A88: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80238A98;
    }
    goto skip_1;
    // 0x80238A88: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x80238A8C: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x80238A90: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80238A94:
    // 0x80238A94: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80238A98:
    // 0x80238A98: sltiu       $v0, $s2, 0x6
    ctx->r2 = ctx->r18 < 0X6 ? 1 : 0;
    // 0x80238A9C: bne         $v0, $zero, L_80238A2C
    if (ctx->r2 != 0) {
        // 0x80238AA0: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_80238A2C;
    }
    // 0x80238AA0: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_80238AA4:
    // 0x80238AA4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80238AA8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80238AAC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80238AB0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80238AB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80238AB8: jr          $ra
    // 0x80238ABC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80238ABC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022AD14_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AD14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AD18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AD1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AD20: jal         0x8004F144
    // 0x8022AD24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022AD24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022AD28: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022AD2C: beq         $a0, $zero, L_8022AD68
    if (ctx->r4 == 0) {
        // 0x8022AD30: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022AD68;
    }
    // 0x8022AD30: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022AD34: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8022AD38: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022AD3C: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8022AD40: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x8022AD44: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x8022AD48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AD4C: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8022AD50: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022AD54: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x8022AD58: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    // 0x8022AD5C: addiu       $a1, $s0, 0x1A0
    ctx->r5 = ADD32(ctx->r16, 0X1A0);
    // 0x8022AD60: jal         0x8009A3B4
    // 0x8022AD64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022AD64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
L_8022AD68:
    // 0x8022AD68: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022AD6C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8022AD70: sb          $v1, 0x107($s0)
    MEM_B(0X107, ctx->r16) = ctx->r3;
    // 0x8022AD74: sb          $v1, 0x10B($s0)
    MEM_B(0X10B, ctx->r16) = ctx->r3;
    // 0x8022AD78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AD7C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8022AD80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AD84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AD88: jr          $ra
    // 0x8022AD8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AD8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802264A0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802264A0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802264A4: bne         $v0, $zero, L_802264BC
    if (ctx->r2 != 0) {
        // 0x802264A8: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_802264BC;
    }
    // 0x802264A8: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802264AC: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x802264B0: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x802264B4: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x802264B8: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
L_802264BC:
    // 0x802264BC: jr          $ra
    // 0x802264C0: nop

    TRACE_RETURN()
    return;
    // 0x802264C0: nop

;}
RECOMP_FUNC void func_80231700_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231700: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80231704: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80231708: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023170C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80231710: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80231714: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80231718: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023171C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80231720: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x80231724: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x80231728: bne         $v0, $zero, L_8023177C
    if (ctx->r2 != 0) {
        // 0x8023172C: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_8023177C;
    }
    // 0x8023172C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80231730: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80231734: lui         $v1, 0x6666
    ctx->r3 = S32(0X6666 << 16);
    // 0x80231738: ori         $v1, $v1, 0x6667
    ctx->r3 = ctx->r3 | 0X6667;
    // 0x8023173C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231740: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231744: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80231748: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8023174C: mfhi        $t0
    ctx->r8 = hi;
    // 0x80231750: sra         $v1, $t0, 4
    ctx->r3 = S32(SIGNED(ctx->r8) >> 4);
    // 0x80231754: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80231758: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023175C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231760: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80231764: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80231768: addiu       $a0, $a0, 0x5A
    ctx->r4 = ADD32(ctx->r4, 0X5A);
    // 0x8023176C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
    // 0x80231770: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80231774: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231778: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8023177C:
    // 0x8023177C: addiu       $a0, $s0, 0x40
    ctx->r4 = ADD32(ctx->r16, 0X40);
    // 0x80231780: jal         0x800540D0
    // 0x80231784: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x80231784: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80231788: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023178C: addiu       $a1, $zero, 0x300
    ctx->r5 = ADD32(0, 0X300);
    // 0x80231790: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231794: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80231798: jal         0x8004DA90
    // 0x8023179C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8023179C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    after_1:
    // 0x802317A0: lh          $v0, 0x26($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X26);
    // 0x802317A4: bltz        $v0, L_802317B4
    if (SIGNED(ctx->r2) < 0) {
        // 0x802317A8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802317B4;
    }
    // 0x802317A8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802317AC: addiu       $v0, $v1, -0x30
    ctx->r2 = ADD32(ctx->r3, -0X30);
    // 0x802317B0: sh          $v0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r2;
L_802317B4:
    // 0x802317B4: beq         $s2, $zero, L_802317C8
    if (ctx->r18 == 0) {
        // 0x802317B8: nop
    
            goto L_802317C8;
    }
    // 0x802317B8: nop

    // 0x802317BC: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x802317C0: j           L_80231830
    // 0x802317C4: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
        goto L_80231830;
    // 0x802317C4: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
L_802317C8:
    // 0x802317C8: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x802317CC: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
    // 0x802317D0: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x802317D4: lb          $v1, 0xC($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XC);
    // 0x802317D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802317DC: bne         $v1, $v0, L_8023183C
    if (ctx->r3 != ctx->r2) {
        // 0x802317E0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023183C;
    }
    // 0x802317E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802317E4: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x802317E8: bgez        $v0, L_8023183C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802317EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023183C;
    }
    // 0x802317EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802317F0: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x802317F4: bne         $v0, $zero, L_8023183C
    if (ctx->r2 != 0) {
        // 0x802317F8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023183C;
    }
    // 0x802317F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802317FC: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80231800: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80231804: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x80231808: jal         0x8004F820
    // 0x8023180C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8023180C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80231810: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231814: blez        $v0, L_80231828
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80231818: nop
    
            goto L_80231828;
    }
    // 0x80231818: nop

    // 0x8023181C: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80231820: j           L_80231830
    // 0x80231824: ori         $v0, $v0, 0x11
    ctx->r2 = ctx->r2 | 0X11;
        goto L_80231830;
    // 0x80231824: ori         $v0, $v0, 0x11
    ctx->r2 = ctx->r2 | 0X11;
L_80231828:
    // 0x80231828: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8023182C: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
L_80231830:
    // 0x80231830: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80231834: lb          $v1, 0xC($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XC);
    // 0x80231838: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023183C:
    // 0x8023183C: bne         $v1, $v0, L_80231860
    if (ctx->r3 != ctx->r2) {
        // 0x80231840: nop
    
            goto L_80231860;
    }
    // 0x80231840: nop

    // 0x80231844: lh          $v0, 0x26($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X26);
    // 0x80231848: bgez        $v0, L_80231860
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023184C: nop
    
            goto L_80231860;
    }
    // 0x8023184C: nop

    // 0x80231850: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80231854: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
    // 0x80231858: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x8023185C: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_80231860:
    // 0x80231860: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80231864: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231868: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8023186C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80231870: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80231874: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80231878: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023187C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80231880: jr          $ra
    // 0x80231884: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80231884: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022AF74_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AF74: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022AF78: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022AF7C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8022AF80: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022AF84: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x8022AF88: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022AF8C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022AF90: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022AF94: jal         0x8004EFE4
    // 0x8022AF98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8022AF98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022AF9C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022AFA0: beq         $s0, $zero, L_8022B0F8
    if (ctx->r16 == 0) {
        // 0x8022AFA4: addiu       $s1, $s3, 0x380
        ctx->r17 = ADD32(ctx->r19, 0X380);
            goto L_8022B0F8;
    }
    // 0x8022AFA4: addiu       $s1, $s3, 0x380
    ctx->r17 = ADD32(ctx->r19, 0X380);
    // 0x8022AFA8: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x8022AFAC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022AFB0: addiu       $a1, $s3, 0x190
    ctx->r5 = ADD32(ctx->r19, 0X190);
    // 0x8022AFB4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022AFB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AFBC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022AFC0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022AFC4: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022AFC8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022AFCC: addiu       $v0, $v0, 0x4D58
    ctx->r2 = ADD32(ctx->r2, 0X4D58);
    // 0x8022AFD0: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x8022AFD4: jal         0x8009A3B4
    // 0x8022AFD8: sw          $v0, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022AFD8: sw          $v0, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022AFDC: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022AFE0: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022AFE4: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022AFE8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AFEC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022AFF0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022AFF4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022AFF8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022AFFC: beq         $s4, $zero, L_8022B04C
    if (ctx->r20 == 0) {
        // 0x8022B000: sw          $a0, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r4;
            goto L_8022B04C;
    }
    // 0x8022B000: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022B004: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022B008: lh          $a2, 0x56($s3)
    ctx->r6 = MEM_H(ctx->r19, 0X56);
    // 0x8022B00C: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x8022B010: lhu         $a3, -0x286C($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X286C);
    // 0x8022B014: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022B018: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022B01C: lhu         $v0, -0x286A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X286A);
    // 0x8022B020: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022B024: lhu         $v1, -0x2868($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X2868);
    // 0x8022B028: sll         $a3, $a3, 20
    ctx->r7 = S32(ctx->r7 << 20);
    // 0x8022B02C: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8022B030: sll         $v0, $v0, 20
    ctx->r2 = S32(ctx->r2 << 20);
    // 0x8022B034: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B038: sll         $v1, $v1, 20
    ctx->r3 = S32(ctx->r3 << 20);
    // 0x8022B03C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022B040: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022B044: j           L_8022B094
    // 0x8022B048: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
        goto L_8022B094;
    // 0x8022B048: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
L_8022B04C:
    // 0x8022B04C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022B050: lh          $a2, 0x56($s3)
    ctx->r6 = MEM_H(ctx->r19, 0X56);
    // 0x8022B054: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x8022B058: lhu         $a3, -0x286C($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X286C);
    // 0x8022B05C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022B060: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022B064: lhu         $v1, -0x286A($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X286A);
    // 0x8022B068: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022B06C: lhu         $v0, -0x2868($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X2868);
    // 0x8022B070: sll         $a3, $a3, 20
    ctx->r7 = S32(ctx->r7 << 20);
    // 0x8022B074: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8022B078: sll         $v1, $v1, 20
    ctx->r3 = S32(ctx->r3 << 20);
    // 0x8022B07C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022B080: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022B084: sll         $v0, $v0, 20
    ctx->r2 = S32(ctx->r2 << 20);
    // 0x8022B088: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B08C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022B090: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
L_8022B094:
    // 0x8022B094: jal         0x8004DBA0
    // 0x8022B098: addiu       $s0, $s0, 0x8C
    ctx->r16 = ADD32(ctx->r16, 0X8C);
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_2;
    // 0x8022B098: addiu       $s0, $s0, 0x8C
    ctx->r16 = ADD32(ctx->r16, 0X8C);
    after_2:
    // 0x8022B09C: addiu       $a0, $s1, 0x48
    ctx->r4 = ADD32(ctx->r17, 0X48);
    // 0x8022B0A0: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x8022B0A4: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
    // 0x8022B0A8: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
    // 0x8022B0AC: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x8022B0B0: lhu         $v0, 0x56($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X56);
    // 0x8022B0B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022B0B8: sh          $zero, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = 0;
    // 0x8022B0BC: jal         0x80031600
    // 0x8022B0C0: sh          $v0, 0x4A($s1)
    MEM_H(0X4A, ctx->r17) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_3;
    // 0x8022B0C0: sh          $v0, 0x4A($s1)
    MEM_H(0X4A, ctx->r17) = ctx->r2;
    after_3:
    // 0x8022B0C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B0C8: addiu       $a1, $s1, 0x50
    ctx->r5 = ADD32(ctx->r17, 0X50);
    // 0x8022B0CC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022B0D0: sw          $v0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r2;
    // 0x8022B0D4: sw          $v0, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->r2;
    // 0x8022B0D8: sw          $v0, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->r2;
    // 0x8022B0DC: jal         0x80031DA8
    // 0x8022B0E0: sw          $zero, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = 0;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_4;
    // 0x8022B0E0: sw          $zero, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = 0;
    after_4:
    // 0x8022B0E4: addiu       $a0, $zero, 0x144
    ctx->r4 = ADD32(0, 0X144);
    // 0x8022B0E8: jal         0x8002A33C
    // 0x8022B0EC: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8022B0EC: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    after_5:
    // 0x8022B0F0: j           L_8022B0FC
    // 0x8022B0F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022B0FC;
    // 0x8022B0F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022B0F8:
    // 0x8022B0F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022B0FC:
    // 0x8022B0FC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B100: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022B104: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022B108: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022B10C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B110: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B114: jr          $ra
    // 0x8022B118: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022B118: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80237F80_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237F80: addu        $t4, $a0, $zero
    ctx->r12 = ADD32(ctx->r4, 0);
    // 0x80237F84: lhu         $v0, 0x30($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X30);
    // 0x80237F88: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80237F8C: sh          $v0, 0x30($t4)
    MEM_H(0X30, ctx->r12) = ctx->r2;
    // 0x80237F90: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80237F94: bne         $v0, $zero, L_80237FA8
    if (ctx->r2 != 0) {
        // 0x80237F98: nop
    
            goto L_80237FA8;
    }
    // 0x80237F98: nop

    // 0x80237F9C: lbu         $v0, 0x8($t4)
    ctx->r2 = MEM_BU(ctx->r12, 0X8);
    // 0x80237FA0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237FA4: sb          $v0, 0x8($t4)
    MEM_B(0X8, ctx->r12) = ctx->r2;
L_80237FA8:
    // 0x80237FA8: lh          $v1, 0x30($t4)
    ctx->r3 = MEM_H(ctx->r12, 0X30);
    // 0x80237FAC: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80237FB0: lhu         $a1, 0x1C($t4)
    ctx->r5 = MEM_HU(ctx->r12, 0X1C);
    // 0x80237FB4: lhu         $t0, 0x28($t4)
    ctx->r8 = MEM_HU(ctx->r12, 0X28);
    // 0x80237FB8: lhu         $t1, 0x2E($t4)
    ctx->r9 = MEM_HU(ctx->r12, 0X2E);
    // 0x80237FBC: lhu         $a2, 0x1E($t4)
    ctx->r6 = MEM_HU(ctx->r12, 0X1E);
    // 0x80237FC0: lhu         $a3, 0x20($t4)
    ctx->r7 = MEM_HU(ctx->r12, 0X20);
    // 0x80237FC4: lhu         $t2, 0x2C($t4)
    ctx->r10 = MEM_HU(ctx->r12, 0X2C);
    // 0x80237FC8: sll         $t3, $v1, 3
    ctx->r11 = S32(ctx->r3 << 3);
    // 0x80237FCC: sll         $a0, $v1, 19
    ctx->r4 = S32(ctx->r3 << 19);
    // 0x80237FD0: sll         $v1, $v1, 11
    ctx->r3 = S32(ctx->r3 << 11);
    // 0x80237FD4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80237FD8: lhu         $v0, 0x2A($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X2A);
    // 0x80237FDC: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x80237FE0: or          $a0, $a0, $t3
    ctx->r4 = ctx->r4 | ctx->r11;
    // 0x80237FE4: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x80237FE8: addu        $a3, $a3, $t2
    ctx->r7 = ADD32(ctx->r7, ctx->r10);
    // 0x80237FEC: sw          $a0, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->r4;
    // 0x80237FF0: sh          $a1, 0x1C($t4)
    MEM_H(0X1C, ctx->r12) = ctx->r5;
    // 0x80237FF4: sh          $a3, 0x20($t4)
    MEM_H(0X20, ctx->r12) = ctx->r7;
    // 0x80237FF8: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x80237FFC: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80238000: sh          $v0, 0x2A($t4)
    MEM_H(0X2A, ctx->r12) = ctx->r2;
    // 0x80238004: jr          $ra
    // 0x80238008: sh          $a2, 0x1E($t4)
    MEM_H(0X1E, ctx->r12) = ctx->r6;
    TRACE_RETURN()
    return;
    // 0x80238008: sh          $a2, 0x1E($t4)
    MEM_H(0X1E, ctx->r12) = ctx->r6;
;}
RECOMP_FUNC void func_8022F3A4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F3A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F3A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F3AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F3B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F3B4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F3B8: bne         $v0, $zero, L_8022F3D4
    if (ctx->r2 != 0) {
        // 0x8022F3BC: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_8022F3D4;
    }
    // 0x8022F3BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022F3C0: jal         0x80050294
    // 0x8022F3C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022F3C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022F3C8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F3CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F3D0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022F3D4:
    // 0x8022F3D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F3D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F3DC: jr          $ra
    // 0x8022F3E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F3E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022F3E4: nop

    // 0x8022F3E8: nop

    // 0x8022F3EC: nop

;}
RECOMP_FUNC void func_8022F060_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F064: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F068: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F06C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F070: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022F074: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F078: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F07C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F080: lw          $v0, -0x2040($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2040);
    // 0x8022F084: jalr        $v0
    // 0x8022F088: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F088: nop

    after_0:
    // 0x8022F08C: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022F090: bne         $v0, $zero, L_8022F0A0
    if (ctx->r2 != 0) {
        // 0x8022F094: nop
    
            goto L_8022F0A0;
    }
    // 0x8022F094: nop

    // 0x8022F098: jal         0x8005044C
    // 0x8022F09C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8022F09C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022F0A0:
    // 0x8022F0A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F0A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F0A8: jr          $ra
    // 0x8022F0AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F0AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FA4C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FA4C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022FA50: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022FA54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FA58: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022FA5C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022FA60: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8022FA64: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022FA68: beq         $v0, $zero, L_8022FC64
    if (ctx->r2 == 0) {
        // 0x8022FA6C: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_8022FC64;
    }
    // 0x8022FA6C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8022FA70: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022FA74: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022FA78: addu        $at, $at, $v0
    gpr jr_addend_8022FA80 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FA7C: lw          $v0, -0xA58($at)
    ctx->r2 = ADD32(ctx->r1, -0XA58);
    // 0x8022FA80: jr          $v0
    // 0x8022FA84: nop

    switch (jr_addend_8022FA80 >> 2) {
        case 0: goto L_8022FA88; break;
        case 1: goto L_8022FAF0; break;
        case 2: goto L_8022FB80; break;
        case 3: goto L_8022FC20; break;
        case 4: goto L_8022FC54; break;
        default: switch_error(__func__, 0x8022FA80, 0x8023F5A8);
    }
    // 0x8022FA84: nop

L_8022FA88:
    // 0x8022FA88: lh          $v0, 0x1E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1E);
    // 0x8022FA8C: beq         $v0, $zero, L_8022FAA0
    if (ctx->r2 == 0) {
        // 0x8022FA90: nop
    
            goto L_8022FAA0;
    }
    // 0x8022FA90: nop

    // 0x8022FA94: lh          $v0, 0x1C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1C);
    // 0x8022FA98: bne         $v0, $zero, L_8022FAD4
    if (ctx->r2 != 0) {
        // 0x8022FA9C: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022FAD4;
    }
    // 0x8022FA9C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022FAA0:
    // 0x8022FAA0: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x8022FAA4: andi        $v0, $v1, 0x180
    ctx->r2 = ctx->r3 & 0X180;
    // 0x8022FAA8: beq         $v0, $zero, L_8022FAC4
    if (ctx->r2 == 0) {
        // 0x8022FAAC: addiu       $a0, $zero, 0x97
        ctx->r4 = ADD32(0, 0X97);
            goto L_8022FAC4;
    }
    // 0x8022FAAC: addiu       $a0, $zero, 0x97
    ctx->r4 = ADD32(0, 0X97);
    // 0x8022FAB0: lh          $v0, 0x20($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X20);
    // 0x8022FAB4: ori         $v1, $v1, 0x1000
    ctx->r3 = ctx->r3 | 0X1000;
    // 0x8022FAB8: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    // 0x8022FABC: j           L_8022FB68
    // 0x8022FAC0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8022FB68;
    // 0x8022FAC0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8022FAC4:
    // 0x8022FAC4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022FAC8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022FACC: j           L_8022FC64
    // 0x8022FAD0: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8022FC64;
    // 0x8022FAD0: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8022FAD4:
    // 0x8022FAD4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022FAD8: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8022FADC: ori         $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 | 0X1000;
    // 0x8022FAE0: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x8022FAE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FAE8: j           L_8022FC64
    // 0x8022FAEC: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8022FC64;
    // 0x8022FAEC: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8022FAF0:
    // 0x8022FAF0: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x8022FAF4: lh          $v1, 0x1E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X1E);
    // 0x8022FAF8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022FAFC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022FB00: beq         $v0, $zero, L_8022FB14
    if (ctx->r2 == 0) {
        // 0x8022FB04: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8022FB14;
    }
    // 0x8022FB04: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8022FB08: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x8022FB0C: j           L_8022FB18
    // 0x8022FB10: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_8022FB18;
    // 0x8022FB10: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022FB14:
    // 0x8022FB14: sh          $a0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r4;
L_8022FB18:
    // 0x8022FB18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FB1C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022FB20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FB24: jal         0x8004DA90
    // 0x8022FB28: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022FB28: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022FB2C: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8022FB30: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x8022FB34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FB38: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x8022FB3C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022FB40: sh          $v1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r3;
    // 0x8022FB44: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022FB48: bgtz        $v1, L_8022FC64
    if (SIGNED(ctx->r3) > 0) {
        // 0x8022FB4C: nop
    
            goto L_8022FC64;
    }
    // 0x8022FB4C: nop

    // 0x8022FB50: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8022FB54: andi        $v0, $v0, 0x180
    ctx->r2 = ctx->r2 & 0X180;
    // 0x8022FB58: beq         $v0, $zero, L_8022FC14
    if (ctx->r2 == 0) {
        // 0x8022FB5C: addiu       $a0, $zero, 0x97
        ctx->r4 = ADD32(0, 0X97);
            goto L_8022FC14;
    }
    // 0x8022FB5C: addiu       $a0, $zero, 0x97
    ctx->r4 = ADD32(0, 0X97);
    // 0x8022FB60: lh          $v1, 0x20($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X20);
    // 0x8022FB64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022FB68:
    // 0x8022FB68: beql        $v1, $v0, L_8022FB70
    if (ctx->r3 == ctx->r2) {
        // 0x8022FB6C: addiu       $a0, $zero, 0xFB
        ctx->r4 = ADD32(0, 0XFB);
            goto L_8022FB70;
    }
    goto skip_0;
    // 0x8022FB6C: addiu       $a0, $zero, 0xFB
    ctx->r4 = ADD32(0, 0XFB);
    skip_0:
L_8022FB70:
    // 0x8022FB70: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022FB74: sh          $a0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r4;
    // 0x8022FB78: j           L_8022FC64
    // 0x8022FB7C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8022FC64;
    // 0x8022FB7C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8022FB80:
    // 0x8022FB80: lh          $v0, 0x20($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X20);
    // 0x8022FB84: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022FB88: bne         $v0, $a0, L_8022FB94
    if (ctx->r2 != ctx->r4) {
        // 0x8022FB8C: addiu       $v1, $zero, 0x97
        ctx->r3 = ADD32(0, 0X97);
            goto L_8022FB94;
    }
    // 0x8022FB8C: addiu       $v1, $zero, 0x97
    ctx->r3 = ADD32(0, 0X97);
    // 0x8022FB90: addiu       $v1, $zero, 0xFB
    ctx->r3 = ADD32(0, 0XFB);
L_8022FB94:
    // 0x8022FB94: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022FB98: lh          $v0, 0x22($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X22);
    // 0x8022FB9C: blez        $v0, L_8022FC18
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022FBA0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022FC18;
    }
    // 0x8022FBA0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022FBA4: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8022FBA8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022FBAC: beq         $v0, $zero, L_8022FBCC
    if (ctx->r2 == 0) {
        // 0x8022FBB0: nop
    
            goto L_8022FBCC;
    }
    // 0x8022FBB0: nop

    // 0x8022FBB4: lh          $v0, 0x20($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X20);
    // 0x8022FBB8: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x8022FBBC: bne         $v0, $a0, L_8022FBE0
    if (ctx->r2 != ctx->r4) {
        // 0x8022FBC0: addiu       $v0, $v1, 0x8
        ctx->r2 = ADD32(ctx->r3, 0X8);
            goto L_8022FBE0;
    }
    // 0x8022FBC0: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8022FBC4: j           L_8022FBE0
    // 0x8022FBC8: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
        goto L_8022FBE0;
    // 0x8022FBC8: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
L_8022FBCC:
    // 0x8022FBCC: lh          $v0, 0x20($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X20);
    // 0x8022FBD0: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x8022FBD4: bne         $v0, $a0, L_8022FBE0
    if (ctx->r2 != ctx->r4) {
        // 0x8022FBD8: addiu       $v0, $v1, -0x8
        ctx->r2 = ADD32(ctx->r3, -0X8);
            goto L_8022FBE0;
    }
    // 0x8022FBD8: addiu       $v0, $v1, -0x8
    ctx->r2 = ADD32(ctx->r3, -0X8);
    // 0x8022FBDC: addiu       $v0, $v1, -0x2
    ctx->r2 = ADD32(ctx->r3, -0X2);
L_8022FBE0:
    // 0x8022FBE0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022FBE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FBE8: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022FBEC: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FBF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FBF4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022FBF8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022FBFC: jal         0x8004DA90
    // 0x8022FC00: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022FC00: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022FC04: lhu         $v0, 0x22($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X22);
    // 0x8022FC08: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022FC0C: j           L_8022FC64
    // 0x8022FC10: sh          $v0, 0x22($s1)
    MEM_H(0X22, ctx->r17) = ctx->r2;
        goto L_8022FC64;
    // 0x8022FC10: sh          $v0, 0x22($s1)
    MEM_H(0X22, ctx->r17) = ctx->r2;
L_8022FC14:
    // 0x8022FC14: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022FC18:
    // 0x8022FC18: j           L_8022FC64
    // 0x8022FC1C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8022FC64;
    // 0x8022FC1C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8022FC20:
    // 0x8022FC20: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022FC24: bgtz        $a1, L_8022FC38
    if (SIGNED(ctx->r5) > 0) {
        // 0x8022FC28: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022FC38;
    }
    // 0x8022FC28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FC2C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022FC30: j           L_8022FC64
    // 0x8022FC34: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8022FC64;
    // 0x8022FC34: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8022FC38:
    // 0x8022FC38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FC3C: jal         0x8004DA90
    // 0x8022FC40: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022FC40: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022FC44: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8022FC48: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x8022FC4C: j           L_8022FC64
    // 0x8022FC50: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_8022FC64;
    // 0x8022FC50: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022FC54:
    // 0x8022FC54: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8022FC58: andi        $v0, $v0, 0xFFBF
    ctx->r2 = ctx->r2 & 0XFFBF;
    // 0x8022FC5C: ori         $v0, $v0, 0x201
    ctx->r2 = ctx->r2 | 0X201;
    // 0x8022FC60: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
L_8022FC64:
    // 0x8022FC64: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8022FC68: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8022FC6C: beq         $v0, $zero, L_8022FCE4
    if (ctx->r2 == 0) {
        // 0x8022FC70: nop
    
            goto L_8022FCE4;
    }
    // 0x8022FC70: nop

    // 0x8022FC74: jal         0x8004F144
    // 0x8022FC78: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x8022FC78: nop

    after_3:
    // 0x8022FC7C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022FC80: beq         $a0, $zero, L_8022FCA4
    if (ctx->r4 == 0) {
        // 0x8022FC84: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022FCA4;
    }
    // 0x8022FC84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FC88: addiu       $v1, $zero, 0x15
    ctx->r3 = ADD32(0, 0X15);
    // 0x8022FC8C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8022FC90: sb          $v1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r3;
    // 0x8022FC94: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
    // 0x8022FC98: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022FC9C: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x8022FCA0: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
L_8022FCA4:
    // 0x8022FCA4: jal         0x8004F144
    // 0x8022FCA8: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x8022FCA8: nop

    after_4:
    // 0x8022FCAC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022FCB0: beq         $a0, $zero, L_8022FCD8
    if (ctx->r4 == 0) {
        // 0x8022FCB4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022FCD8;
    }
    // 0x8022FCB4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022FCB8: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x8022FCBC: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8022FCC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022FCC4: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x8022FCC8: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x8022FCCC: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8022FCD0: sb          $v1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r3;
    // 0x8022FCD4: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
L_8022FCD8:
    // 0x8022FCD8: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8022FCDC: andi        $v0, $v0, 0xEFFF
    ctx->r2 = ctx->r2 & 0XEFFF;
    // 0x8022FCE0: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
L_8022FCE4:
    // 0x8022FCE4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022FCE8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022FCEC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022FCF0: jr          $ra
    // 0x8022FCF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022FCF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80237810_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237810: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237814: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80237818: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023781C: lbu         $v0, 0x9($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X9);
    // 0x80237820: bne         $v0, $zero, L_80237838
    if (ctx->r2 != 0) {
        // 0x80237824: lui         $a2, 0xFFF5
        ctx->r6 = S32(0XFFF5 << 16);
            goto L_80237838;
    }
    // 0x80237824: lui         $a2, 0xFFF5
    ctx->r6 = S32(0XFFF5 << 16);
    // 0x80237828: jal         0x8004F5C4
    // 0x8023782C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8023782C: nop

    after_0:
    // 0x80237830: j           L_8023786C
    // 0x80237834: nop

        goto L_8023786C;
    // 0x80237834: nop

L_80237838:
    // 0x80237838: lbu         $a0, 0xC($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0XC);
    // 0x8023783C: ori         $a2, $a2, 0xF5F6
    ctx->r6 = ctx->r6 | 0XF5F6;
    // 0x80237840: lbu         $a1, 0x9($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0X9);
    // 0x80237844: lw          $v0, 0x18($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X18);
    // 0x80237848: lhu         $v1, 0x24($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X24);
    // 0x8023784C: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80237850: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80237854: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80237858: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8023785C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80237860: sw          $v0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r2;
    // 0x80237864: sh          $v1, 0x24($a3)
    MEM_H(0X24, ctx->r7) = ctx->r3;
    // 0x80237868: sb          $a1, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r5;
L_8023786C:
    // 0x8023786C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80237870: jr          $ra
    // 0x80237874: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237874: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80237878: nop

    // 0x8023787C: nop

;}
RECOMP_FUNC void func_80228504_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228504: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80228508: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022850C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80228510: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80228514: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80228518: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022851C: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x80228520: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x80228524: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80228528: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022852C: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x80228530: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x80228534: beq         $v1, $v0, L_80228550
    if (ctx->r3 == ctx->r2) {
        // 0x80228538: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_80228550;
    }
    // 0x80228538: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022853C: bne         $v1, $v0, L_8022854C
    if (ctx->r3 != ctx->r2) {
        // 0x80228540: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022854C;
    }
    // 0x80228540: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80228544: j           L_80228550
    // 0x80228548: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
        goto L_80228550;
    // 0x80228548: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
L_8022854C:
    // 0x8022854C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80228550:
    // 0x80228550: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x80228554: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x80228558: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022855C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228560: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80228564: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x80228568: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x8022856C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228570: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228574: beq         $a0, $v1, L_8022859C
    if (ctx->r4 == ctx->r3) {
        // 0x80228578: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_8022859C;
    }
    // 0x80228578: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x8022857C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80228580: jal         0x8003B85C
    // 0x80228584: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80228584: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x80228588: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8022858C: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80228590: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80228594: jal         0x8003B840
    // 0x80228598: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80228598: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_8022859C:
    // 0x8022859C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x802285A0: lh          $a0, 0xA($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XA);
    // 0x802285A4: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802285A8: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x802285AC: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x802285B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802285B4: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x802285B8: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x802285BC: beq         $v1, $v0, L_802285D8
    if (ctx->r3 == ctx->r2) {
        // 0x802285C0: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_802285D8;
    }
    // 0x802285C0: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x802285C4: bne         $v1, $v0, L_802285D4
    if (ctx->r3 != ctx->r2) {
        // 0x802285C8: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802285D4;
    }
    // 0x802285C8: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802285CC: j           L_802285D8
    // 0x802285D0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_802285D8;
    // 0x802285D0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_802285D4:
    // 0x802285D4: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
L_802285D8:
    // 0x802285D8: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
    // 0x802285DC: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802285E0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802285E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802285E8: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x802285EC: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x802285F0: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x802285F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802285F8: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802285FC: beq         $a0, $v1, L_80228624
    if (ctx->r4 == ctx->r3) {
        // 0x80228600: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80228624;
    }
    // 0x80228600: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80228604: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80228608: jal         0x8003B85C
    // 0x8022860C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x8022860C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x80228610: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80228614: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x80228618: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x8022861C: jal         0x8003B840
    // 0x80228620: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80228620: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_80228624:
    // 0x80228624: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x80228628: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022862C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80228630: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80228634: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80228638: jr          $ra
    // 0x8022863C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022863C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022A7BC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A7BC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022A7C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022A7C4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022A7C8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022A7CC: addiu       $s3, $s2, 0x380
    ctx->r19 = ADD32(ctx->r18, 0X380);
    // 0x8022A7D0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022A7D4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022A7D8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022A7DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022A7E0: lbu         $a0, 0x43D($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X43D);
    // 0x8022A7E4: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x8022A7E8: addiu       $t0, $t0, 0x49B0
    ctx->r8 = ADD32(ctx->r8, 0X49B0);
    // 0x8022A7EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A7F0: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022A7F4: beq         $v1, $v0, L_8022A838
    if (ctx->r3 == ctx->r2) {
        // 0x8022A7F8: addiu       $s4, $s2, 0x43C
        ctx->r20 = ADD32(ctx->r18, 0X43C);
            goto L_8022A838;
    }
    // 0x8022A7F8: addiu       $s4, $s2, 0x43C
    ctx->r20 = ADD32(ctx->r18, 0X43C);
    // 0x8022A7FC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022A800: beql        $v0, $zero, L_8022A818
    if (ctx->r2 == 0) {
        // 0x8022A804: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022A818;
    }
    goto skip_0;
    // 0x8022A804: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022A808: beq         $v1, $zero, L_8022A830
    if (ctx->r3 == 0) {
        // 0x8022A80C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022A830;
    }
    // 0x8022A80C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022A810: j           L_8022AA4C
    // 0x8022A814: nop

        goto L_8022AA4C;
    // 0x8022A814: nop

L_8022A818:
    // 0x8022A818: beq         $v1, $v0, L_8022A92C
    if (ctx->r3 == ctx->r2) {
        // 0x8022A81C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022A92C;
    }
    // 0x8022A81C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A820: beq         $v1, $v0, L_8022AA28
    if (ctx->r3 == ctx->r2) {
        // 0x8022A824: nop
    
            goto L_8022AA28;
    }
    // 0x8022A824: nop

    // 0x8022A828: j           L_8022AA4C
    // 0x8022A82C: nop

        goto L_8022AA4C;
    // 0x8022A82C: nop

L_8022A830:
    // 0x8022A830: sb          $v0, 0x43D($s2)
    MEM_B(0X43D, ctx->r18) = ctx->r2;
    // 0x8022A834: sb          $zero, 0x43E($s2)
    MEM_B(0X43E, ctx->r18) = 0;
L_8022A838:
    // 0x8022A838: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8022A83C: lw          $a0, 0xD0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XD0);
    // 0x8022A840: lhu         $a1, 0x56($s2)
    ctx->r5 = MEM_HU(ctx->r18, 0X56);
    // 0x8022A844: addiu       $a3, $t0, 0x14
    ctx->r7 = ADD32(ctx->r8, 0X14);
    // 0x8022A848: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022A84C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022A850: lh          $v0, 0x56($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X56);
    // 0x8022A854: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x8022A858: addiu       $a1, $a1, 0x800
    ctx->r5 = ADD32(ctx->r5, 0X800);
    // 0x8022A85C: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    // 0x8022A860: jal         0x8004FD60
    // 0x8022A864: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004FD60_2B160(rdram, ctx);
        goto after_0;
    // 0x8022A864: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x8022A868: beq         $v0, $zero, L_8022AA4C
    if (ctx->r2 == 0) {
        // 0x8022A86C: nop
    
            goto L_8022AA4C;
    }
    // 0x8022A86C: nop

    // 0x8022A870: jal         0x8004EFE4
    // 0x8022A874: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_1;
    // 0x8022A874: nop

    after_1:
    // 0x8022A878: beq         $v0, $zero, L_8022AA4C
    if (ctx->r2 == 0) {
        // 0x8022A87C: sw          $v0, 0x60($s3)
        MEM_W(0X60, ctx->r19) = ctx->r2;
            goto L_8022AA4C;
    }
    // 0x8022A87C: sw          $v0, 0x60($s3)
    MEM_W(0X60, ctx->r19) = ctx->r2;
    // 0x8022A880: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022A884: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022A888: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A88C: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022A890: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A894: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022A898: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022A89C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x8022A8A0: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022A8A4: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x8022A8A8: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x8022A8AC: jal         0x8009A3B4
    // 0x8022A8B0: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022A8B0: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022A8B4: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    // 0x8022A8B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A8BC: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8022A8C0: jal         0x8009A3B4
    // 0x8022A8C4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022A8C4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x8022A8C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A8CC: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022A8D0: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x8022A8D4: lhu         $a3, -0x287C($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X287C);
    // 0x8022A8D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022A8DC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022A8E0: lhu         $v0, -0x287A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X287A);
    // 0x8022A8E4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022A8E8: lhu         $v1, -0x2878($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X2878);
    // 0x8022A8EC: sll         $a3, $a3, 20
    ctx->r7 = S32(ctx->r7 << 20);
    // 0x8022A8F0: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8022A8F4: sll         $v0, $v0, 20
    ctx->r2 = S32(ctx->r2 << 20);
    // 0x8022A8F8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A8FC: sll         $v1, $v1, 20
    ctx->r3 = S32(ctx->r3 << 20);
    // 0x8022A900: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022A904: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022A908: jal         0x8004DBA0
    // 0x8022A90C: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_4;
    // 0x8022A90C: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    after_4:
    // 0x8022A910: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8022A914: ori         $v0, $v0, 0x800
    ctx->r2 = ctx->r2 | 0X800;
    // 0x8022A918: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
    // 0x8022A91C: lbu         $v0, 0x1($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1);
    // 0x8022A920: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A924: j           L_8022AA4C
    // 0x8022A928: sb          $v0, 0x1($s4)
    MEM_B(0X1, ctx->r20) = ctx->r2;
        goto L_8022AA4C;
    // 0x8022A928: sb          $v0, 0x1($s4)
    MEM_B(0X1, ctx->r20) = ctx->r2;
L_8022A92C:
    // 0x8022A92C: lhu         $v0, 0x380($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X380);
    // 0x8022A930: lw          $s0, 0x3E0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X3E0);
    // 0x8022A934: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x8022A938: beq         $v0, $zero, L_8022AA00
    if (ctx->r2 == 0) {
        // 0x8022A93C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022AA00;
    }
    // 0x8022A93C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022A940: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022A944: beq         $v0, $zero, L_8022A988
    if (ctx->r2 == 0) {
        // 0x8022A948: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022A988;
    }
    // 0x8022A948: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022A94C: sb          $v0, 0x43D($s2)
    MEM_B(0X43D, ctx->r18) = ctx->r2;
    // 0x8022A950: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022A954: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x8022A958: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022A95C: lbu         $v0, 0x2($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X2);
    // 0x8022A960: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8022A964: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8022A968: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A96C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A970: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8022A974: lhu         $v0, 0x380($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X380);
    // 0x8022A978: lbu         $v1, 0xD($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XD);
    // 0x8022A97C: andi        $v0, $v0, 0xF7FF
    ctx->r2 = ctx->r2 & 0XF7FF;
    // 0x8022A980: sh          $v0, 0x380($s2)
    MEM_H(0X380, ctx->r18) = ctx->r2;
    // 0x8022A984: sh          $v1, 0x442($s2)
    MEM_H(0X442, ctx->r18) = ctx->r3;
L_8022A988:
    // 0x8022A988: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022A98C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A990: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022A994: jal         0x8009A3B4
    // 0x8022A998: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022A998: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022A99C: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    // 0x8022A9A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A9A4: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8022A9A8: jal         0x8009A3B4
    // 0x8022A9AC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022A9AC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x8022A9B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A9B4: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022A9B8: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x8022A9BC: lhu         $a3, -0x287C($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X287C);
    // 0x8022A9C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022A9C4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022A9C8: lhu         $v0, -0x287A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X287A);
    // 0x8022A9CC: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022A9D0: lhu         $v1, -0x2878($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X2878);
    // 0x8022A9D4: sll         $a3, $a3, 20
    ctx->r7 = S32(ctx->r7 << 20);
    // 0x8022A9D8: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8022A9DC: sll         $v0, $v0, 20
    ctx->r2 = S32(ctx->r2 << 20);
    // 0x8022A9E0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A9E4: sll         $v1, $v1, 20
    ctx->r3 = S32(ctx->r3 << 20);
    // 0x8022A9E8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022A9EC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022A9F0: jal         0x8004DBA0
    // 0x8022A9F4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_7;
    // 0x8022A9F4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    after_7:
    // 0x8022A9F8: j           L_8022AA4C
    // 0x8022A9FC: nop

        goto L_8022AA4C;
    // 0x8022A9FC: nop

L_8022AA00:
    // 0x8022AA00: sb          $v0, 0x43D($s2)
    MEM_B(0X43D, ctx->r18) = ctx->r2;
    // 0x8022AA04: lbu         $v0, 0x2($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X2);
    // 0x8022AA08: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8022AA0C: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8022AA10: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AA14: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022AA18: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022AA1C: lbu         $v0, 0xD($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XD);
    // 0x8022AA20: j           L_8022AA4C
    // 0x8022AA24: sh          $v0, 0x442($s2)
    MEM_H(0X442, ctx->r18) = ctx->r2;
        goto L_8022AA4C;
    // 0x8022AA24: sh          $v0, 0x442($s2)
    MEM_H(0X442, ctx->r18) = ctx->r2;
L_8022AA28:
    // 0x8022AA28: lhu         $v0, 0x442($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X442);
    // 0x8022AA2C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022AA30: sh          $v0, 0x442($s2)
    MEM_H(0X442, ctx->r18) = ctx->r2;
    // 0x8022AA34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AA38: bgez        $v0, L_8022AA4C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022AA3C: nop
    
            goto L_8022AA4C;
    }
    // 0x8022AA3C: nop

    // 0x8022AA40: sb          $zero, 0x43D($s2)
    MEM_B(0X43D, ctx->r18) = 0;
    // 0x8022AA44: sb          $zero, 0x43E($s2)
    MEM_B(0X43E, ctx->r18) = 0;
    // 0x8022AA48: sh          $zero, 0x45E($s2)
    MEM_H(0X45E, ctx->r18) = 0;
L_8022AA4C:
    // 0x8022AA4C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022AA50: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022AA54: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022AA58: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022AA5C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022AA60: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022AA64: jr          $ra
    // 0x8022AA68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022AA68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80227130_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227130: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80227134: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80227138: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8022713C: lbu         $a1, 0x6($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X6);
    // 0x80227140: lw          $s0, 0x24($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X24);
    // 0x80227144: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x80227148: beq         $v1, $zero, L_80227160
    if (ctx->r3 == 0) {
        // 0x8022714C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227160;
    }
    // 0x8022714C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227150: beq         $v1, $v0, L_80227190
    if (ctx->r3 == ctx->r2) {
        // 0x80227154: nop
    
            goto L_80227190;
    }
    // 0x80227154: nop

    // 0x80227158: j           L_802271B0
    // 0x8022715C: nop

        goto L_802271B0;
    // 0x8022715C: nop

L_80227160:
    // 0x80227160: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227164: lh          $v0, -0x930($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X930);
    // 0x80227168: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022716C: slti        $v0, $v0, 0xC9
    ctx->r2 = SIGNED(ctx->r2) < 0XC9 ? 1 : 0;
    // 0x80227170: beq         $v0, $zero, L_802271A8
    if (ctx->r2 == 0) {
        // 0x80227174: addiu       $v0, $v1, -0x8
        ctx->r2 = ADD32(ctx->r3, -0X8);
            goto L_802271A8;
    }
    // 0x80227174: addiu       $v0, $v1, -0x8
    ctx->r2 = ADD32(ctx->r3, -0X8);
    // 0x80227178: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8022717C: slti        $v0, $v0, 0x74
    ctx->r2 = SIGNED(ctx->r2) < 0X74 ? 1 : 0;
    // 0x80227180: bne         $v0, $zero, L_802271B0
    if (ctx->r2 != 0) {
        // 0x80227184: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_802271B0;
    }
    // 0x80227184: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80227188: j           L_802271B0
    // 0x8022718C: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
        goto L_802271B0;
    // 0x8022718C: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
L_80227190:
    // 0x80227190: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227194: lh          $v0, -0x930($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X930);
    // 0x80227198: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022719C: slti        $v0, $v0, 0x3C0
    ctx->r2 = SIGNED(ctx->r2) < 0X3C0 ? 1 : 0;
    // 0x802271A0: beq         $v0, $zero, L_802271B0
    if (ctx->r2 == 0) {
        // 0x802271A4: addiu       $v0, $v1, 0x10
        ctx->r2 = ADD32(ctx->r3, 0X10);
            goto L_802271B0;
    }
    // 0x802271A4: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
L_802271A8:
    // 0x802271A8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802271AC: sh          $v0, -0x930($at)
    MEM_H(-0X930, ctx->r1) = ctx->r2;
L_802271B0:
    // 0x802271B0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802271B4: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x802271B8: lh          $a2, -0x930($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X930);
    // 0x802271BC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x802271C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802271C4: jal         0x8004DC2C
    // 0x802271C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8004DC2C_2902C(rdram, ctx);
        goto after_0;
    // 0x802271C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x802271CC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x802271D0: jal         0x8004DD04
    // 0x802271D4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x802271D4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x802271D8: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x802271DC: lhu         $v1, 0x28($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X28);
    // 0x802271E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802271E4: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x802271E8: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x802271EC: lhu         $v1, 0x2C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2C);
    // 0x802271F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802271F4: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x802271F8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802271FC: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80227200: jr          $ra
    // 0x80227204: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80227204: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_802267F8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802267F8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802267FC: bne         $v0, $zero, L_80226814
    if (ctx->r2 != 0) {
        // 0x80226800: nop
    
            goto L_80226814;
    }
    // 0x80226800: nop

    // 0x80226804: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80226808: lbu         $v0, 0xD($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XD);
    // 0x8022680C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226810: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
L_80226814:
    // 0x80226814: jr          $ra
    // 0x80226818: nop

    TRACE_RETURN()
    return;
    // 0x80226818: nop

;}
RECOMP_FUNC void func_80225E1C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E1C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80225E20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80225E24: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x80225E28: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x80225E2C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80225E30: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    // 0x80225E34: sll         $a3, $a3, 5
    ctx->r7 = S32(ctx->r7 << 5);
    // 0x80225E38: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80225E3C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80225E40: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    // 0x80225E44: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x80225E48: ori         $a3, $a3, 0xF
    ctx->r7 = ctx->r7 | 0XF;
    // 0x80225E4C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225E50: sb          $a1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r5;
    // 0x80225E54: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225E58: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80225E5C: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80225E60: sb          $a0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r4;
    // 0x80225E64: sb          $a2, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r6;
    // 0x80225E68: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x80225E6C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80225E70: sb          $v1, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r3;
    // 0x80225E74: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x80225E78: lw          $s1, -0x5858($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X5858);
    // 0x80225E7C: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x80225E80: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225E84: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80225E88: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x80225E8C: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x80225E90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80225E94: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
    // 0x80225E98: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80225E9C: sw          $s1, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r17;
    // 0x80225EA0: jal         0x8003055C
    // 0x80225EA4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003055C_B95C(rdram, ctx);
        goto after_0;
    // 0x80225EA4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80225EA8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225EAC: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80225EB0: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80225EB4: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x80225EB8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80225EBC: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x80225EC0: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80225EC4: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x80225EC8: jal         0x8002FD30
    // 0x80225ECC: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_1;
    // 0x80225ECC: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_1:
    // 0x80225ED0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225ED4: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80225ED8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80225EDC: jal         0x8002FD30
    // 0x80225EE0: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_2;
    // 0x80225EE0: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_2:
    // 0x80225EE4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80225EE8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80225EEC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80225EF0: jr          $ra
    // 0x80225EF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80225EF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80225EF8: nop

    // 0x80225EFC: nop

;}
RECOMP_FUNC void func_802300A4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802300A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802300A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802300AC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802300B0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802300B4: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x802300B8: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x802300BC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802300C0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802300C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802300C8: lbu         $a0, 0xA($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XA);
    // 0x802300CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802300D0: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802300D4: beq         $v1, $v0, L_80230118
    if (ctx->r3 == ctx->r2) {
        // 0x802300D8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80230118;
    }
    // 0x802300D8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802300DC: beql        $v0, $zero, L_802300F4
    if (ctx->r2 == 0) {
        // 0x802300E0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802300F4;
    }
    goto skip_0;
    // 0x802300E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802300E4: beq         $v1, $zero, L_80230104
    if (ctx->r3 == 0) {
        // 0x802300E8: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80230104;
    }
    // 0x802300E8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802300EC: j           L_802301A4
    // 0x802300F0: nop

        goto L_802301A4;
    // 0x802300F0: nop

L_802300F4:
    // 0x802300F4: beq         $v1, $v0, L_80230188
    if (ctx->r3 == ctx->r2) {
        // 0x802300F8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80230188;
    }
    // 0x802300F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802300FC: j           L_802301A4
    // 0x80230100: nop

        goto L_802301A4;
    // 0x80230100: nop

L_80230104:
    // 0x80230104: lbu         $v1, 0xA4($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA4);
    // 0x80230108: bne         $v1, $v0, L_802301A4
    if (ctx->r3 != ctx->r2) {
        // 0x8023010C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802301A4;
    }
    // 0x8023010C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80230110: j           L_802301A4
    // 0x80230114: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_802301A4;
    // 0x80230114: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80230118:
    // 0x80230118: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8023011C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x80230120: addiu       $s4, $zero, 0x20
    ctx->r20 = ADD32(0, 0X20);
    // 0x80230124: addiu       $s2, $zero, -0x100
    ctx->r18 = ADD32(0, -0X100);
L_80230128:
    // 0x80230128: jal         0x8004EFE4
    // 0x8023012C: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8023012C: nop

    after_0:
    // 0x80230130: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80230134: beq         $s0, $zero, L_8023015C
    if (ctx->r16 == 0) {
        // 0x80230138: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8023015C;
    }
    // 0x80230138: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023013C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80230140: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80230144: sb          $s5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r21;
    // 0x80230148: jal         0x8009A3B4
    // 0x8023014C: sb          $s4, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r20;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023014C: sb          $s4, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r20;
    after_1:
    // 0x80230150: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x80230154: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80230158: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8023015C:
    // 0x8023015C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80230160: slti        $v0, $s3, 0x2
    ctx->r2 = SIGNED(ctx->r19) < 0X2 ? 1 : 0;
    // 0x80230164: bne         $v0, $zero, L_80230128
    if (ctx->r2 != 0) {
        // 0x80230168: addiu       $s2, $s2, 0x200
        ctx->r18 = ADD32(ctx->r18, 0X200);
            goto L_80230128;
    }
    // 0x80230168: addiu       $s2, $s2, 0x200
    ctx->r18 = ADD32(ctx->r18, 0X200);
    // 0x8023016C: addiu       $a0, $zero, 0x14A
    ctx->r4 = ADD32(0, 0X14A);
    // 0x80230170: jal         0x8002A33C
    // 0x80230174: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80230174: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x80230178: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8023017C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230180: j           L_802301A4
    // 0x80230184: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_802301A4;
    // 0x80230184: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80230188:
    // 0x80230188: lb          $v1, 0xA7($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XA7);
    // 0x8023018C: bne         $v1, $v0, L_802301A4
    if (ctx->r3 != ctx->r2) {
        // 0x80230190: nop
    
            goto L_802301A4;
    }
    // 0x80230190: nop

    // 0x80230194: lhu         $v0, 0x14($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X14);
    // 0x80230198: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8023019C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802301A0: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
L_802301A4:
    // 0x802301A4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802301A8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x802301AC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x802301B0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802301B4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802301B8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802301BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802301C0: jr          $ra
    // 0x802301C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802301C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80236960_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236960: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236964: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236968: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8023696C: bne         $v0, $zero, L_8023698C
    if (ctx->r2 != 0) {
        // 0x80236970: nop
    
            goto L_8023698C;
    }
    // 0x80236970: nop

    // 0x80236974: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80236978: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023697C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236980: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236984: j           L_802369A0
    // 0x80236988: lw          $v0, -0x1768($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1768);
        goto L_802369A0;
    // 0x80236988: lw          $v0, -0x1768($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1768);
L_8023698C:
    // 0x8023698C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80236990: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236994: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236998: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023699C: lw          $v0, -0x1770($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1770);
L_802369A0:
    // 0x802369A0: jalr        $v0
    // 0x802369A4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802369A4: nop

    after_0:
    // 0x802369A8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802369AC: jr          $ra
    // 0x802369B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802369B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EE64_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EE64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EE68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EE6C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EE70: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EE74: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8022EE78: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022EE7C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022EE80: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022EE84: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022EE88: jal         0x8004D5D4
    // 0x8022EE8C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022EE8C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022EE90: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022EE94: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8022EE98: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022EE9C: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022EEA0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022EEA4: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022EEA8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022EEAC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022EEB0: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8022EEB4: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022EEB8: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022EEBC: beq         $v1, $zero, L_8022EED4
    if (ctx->r3 == 0) {
        // 0x8022EEC0: sb          $v0, 0xE($s0)
        MEM_B(0XE, ctx->r16) = ctx->r2;
            goto L_8022EED4;
    }
    // 0x8022EEC0: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8022EEC4: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x8022EEC8: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022EECC: j           L_8022EEE0
    // 0x8022EED0: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
        goto L_8022EEE0;
    // 0x8022EED0: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
L_8022EED4:
    // 0x8022EED4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022EED8: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022EEDC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8022EEE0:
    // 0x8022EEE0: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x8022EEE4: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8022EEE8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022EEEC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022EEF0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022EEF4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022EEF8: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022EEFC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022EF00: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022EF04: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022EF08: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x8022EF0C: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022EF10: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022EF14: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022EF18: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022EF1C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022EF20: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022EF24: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x8022EF28: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022EF2C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022EF30: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
    // 0x8022EF34: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022EF38: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
    // 0x8022EF3C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022EF40: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022EF44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EF48: jr          $ra
    // 0x8022EF4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022EF4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C1BC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C1BC: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x8022C1C0: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8022C1C4: sh          $zero, 0x35C($a0)
    MEM_H(0X35C, ctx->r4) = 0;
    // 0x8022C1C8: sh          $zero, 0x35E($a0)
    MEM_H(0X35E, ctx->r4) = 0;
    // 0x8022C1CC: sh          $zero, 0x362($a0)
    MEM_H(0X362, ctx->r4) = 0;
    // 0x8022C1D0: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x8022C1D4: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
    // 0x8022C1D8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022C1DC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022C1E0: sh          $v0, 0x366($a0)
    MEM_H(0X366, ctx->r4) = ctx->r2;
    // 0x8022C1E4: sh          $v0, 0x360($a0)
    MEM_H(0X360, ctx->r4) = ctx->r2;
    // 0x8022C1E8: jr          $ra
    // 0x8022C1EC: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8022C1EC: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80235E10_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235E10: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80235E14: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80235E18: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80235E1C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80235E20: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x80235E24: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80235E28: addiu       $s3, $sp, 0x10
    ctx->r19 = ADD32(ctx->r29, 0X10);
    // 0x80235E2C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80235E30: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80235E34: addiu       $a1, $a1, -0xA30
    ctx->r5 = ADD32(ctx->r5, -0XA30);
    // 0x80235E38: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80235E3C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80235E40: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80235E44: jal         0x8009A3B4
    // 0x80235E48: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80235E48: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x80235E4C: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80235E50: addiu       $s2, $s1, 0x14
    ctx->r18 = ADD32(ctx->r17, 0X14);
    // 0x80235E54: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80235E58: jal         0x8009A3B4
    // 0x80235E5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80235E5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80235E60: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80235E64: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80235E68: jal         0x8009A3B4
    // 0x80235E6C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80235E6C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80235E70: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x80235E74: addiu       $s0, $s1, 0x54
    ctx->r16 = ADD32(ctx->r17, 0X54);
    // 0x80235E78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80235E7C: jal         0x8009A3B4
    // 0x80235E80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80235E80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80235E84: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80235E88: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235E8C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235E90: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235E94: lw          $v0, -0x1838($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1838);
    // 0x80235E98: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80235E9C: jalr        $v0
    // 0x80235EA0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80235EA0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_4:
    // 0x80235EA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235EA8: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x80235EAC: jal         0x80031600
    // 0x80235EB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_5;
    // 0x80235EB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80235EB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235EB8: jal         0x80031DA8
    // 0x80235EBC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_6;
    // 0x80235EBC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_6:
    // 0x80235EC0: addiu       $a0, $s1, 0xAC
    ctx->r4 = ADD32(ctx->r17, 0XAC);
    // 0x80235EC4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80235EC8: jal         0x8009A3B4
    // 0x80235ECC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80235ECC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x80235ED0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80235ED4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80235ED8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80235EDC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80235EE0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80235EE4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80235EE8: jr          $ra
    // 0x80235EEC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80235EEC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80237694_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237694: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237698: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8023769C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802376A0: lbu         $v0, 0xB($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XB);
    // 0x802376A4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802376A8: sb          $v0, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r2;
    // 0x802376AC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802376B0: bne         $v0, $zero, L_802376C8
    if (ctx->r2 != 0) {
        // 0x802376B4: lui         $v0, 0xFFDF
        ctx->r2 = S32(0XFFDF << 16);
            goto L_802376C8;
    }
    // 0x802376B4: lui         $v0, 0xFFDF
    ctx->r2 = S32(0XFFDF << 16);
    // 0x802376B8: jal         0x8004F5C4
    // 0x802376BC: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x802376BC: nop

    after_0:
    // 0x802376C0: j           L_802376E4
    // 0x802376C4: nop

        goto L_802376E4;
    // 0x802376C4: nop

L_802376C8:
    // 0x802376C8: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x802376CC: lhu         $a0, 0x24($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X24);
    // 0x802376D0: ori         $v0, $v0, 0xDFE0
    ctx->r2 = ctx->r2 | 0XDFE0;
    // 0x802376D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802376D8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x802376DC: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x802376E0: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
L_802376E4:
    // 0x802376E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802376E8: jr          $ra
    // 0x802376EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802376EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230ED4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230ED4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230ED8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230EDC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80230EE0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230EE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230EE8: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80230EEC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80230EF0: beq         $v0, $zero, L_80230F00
    if (ctx->r2 == 0) {
        // 0x80230EF4: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_80230F00;
    }
    // 0x80230EF4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230EF8: jal         0x802310A8
    // 0x80230EFC: nop

    func_802310A8_ovl3(rdram, ctx);
        goto after_0;
    // 0x80230EFC: nop

    after_0:
L_80230F00:
    // 0x80230F00: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80230F04: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80230F08: bne         $v0, $zero, L_80230F30
    if (ctx->r2 != 0) {
        // 0x80230F0C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230F30;
    }
    // 0x80230F0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230F10: jal         0x8023115C
    // 0x80230F14: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8023115C_ovl3(rdram, ctx);
        goto after_1;
    // 0x80230F14: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80230F18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230F1C: jal         0x802314A0
    // 0x80230F20: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_802314A0_ovl3(rdram, ctx);
        goto after_2;
    // 0x80230F20: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80230F24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230F28: jal         0x802315C8
    // 0x80230F2C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_802315C8_ovl3(rdram, ctx);
        goto after_3;
    // 0x80230F2C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
L_80230F30:
    // 0x80230F30: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x80230F34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230F38: beq         $v1, $v0, L_80230F94
    if (ctx->r3 == ctx->r2) {
        // 0x80230F3C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80230F94;
    }
    // 0x80230F3C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80230F40: beql        $v0, $zero, L_80230F58
    if (ctx->r2 == 0) {
        // 0x80230F44: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80230F58;
    }
    goto skip_0;
    // 0x80230F44: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80230F48: beq         $v1, $zero, L_80230F68
    if (ctx->r3 == 0) {
        // 0x80230F4C: nop
    
            goto L_80230F68;
    }
    // 0x80230F4C: nop

    // 0x80230F50: j           L_80230FF0
    // 0x80230F54: nop

        goto L_80230FF0;
    // 0x80230F54: nop

L_80230F58:
    // 0x80230F58: beq         $v1, $v0, L_80230FE0
    if (ctx->r3 == ctx->r2) {
        // 0x80230F5C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80230FE0;
    }
    // 0x80230F5C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230F60: j           L_80230FF0
    // 0x80230F64: nop

        goto L_80230FF0;
    // 0x80230F64: nop

L_80230F68:
    // 0x80230F68: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80230F6C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80230F70: beq         $v0, $zero, L_80230F7C
    if (ctx->r2 == 0) {
        // 0x80230F74: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80230F7C;
    }
    // 0x80230F74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230F78: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80230F7C:
    // 0x80230F7C: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80230F80: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x80230F84: beq         $v0, $zero, L_80230FF0
    if (ctx->r2 == 0) {
        // 0x80230F88: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80230FF0;
    }
    // 0x80230F88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230F8C: j           L_80230FF0
    // 0x80230F90: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80230FF0;
    // 0x80230F90: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80230F94:
    // 0x80230F94: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80230F98: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230F9C: bne         $v1, $v0, L_80230FC8
    if (ctx->r3 != ctx->r2) {
        // 0x80230FA0: nop
    
            goto L_80230FC8;
    }
    // 0x80230FA0: nop

    // 0x80230FA4: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80230FA8: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80230FAC: beq         $v0, $zero, L_80230FC4
    if (ctx->r2 == 0) {
        // 0x80230FB0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80230FC4;
    }
    // 0x80230FB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230FB4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80230FB8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80230FBC: j           L_80230FC8
    // 0x80230FC0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
        goto L_80230FC8;
    // 0x80230FC0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
L_80230FC4:
    // 0x80230FC4: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
L_80230FC8:
    // 0x80230FC8: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80230FCC: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x80230FD0: beq         $v0, $zero, L_80230FF0
    if (ctx->r2 == 0) {
        // 0x80230FD4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80230FF0;
    }
    // 0x80230FD4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230FD8: j           L_80230FF0
    // 0x80230FDC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80230FF0;
    // 0x80230FDC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80230FE0:
    // 0x80230FE0: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80230FE4: bne         $v1, $v0, L_80230FF0
    if (ctx->r3 != ctx->r2) {
        // 0x80230FE8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80230FF0;
    }
    // 0x80230FE8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80230FEC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80230FF0:
    // 0x80230FF0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80230FF4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230FF8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230FFC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231000: lw          $v0, -0x1FD4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1FD4);
    // 0x80231004: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231008: jalr        $v0
    // 0x8023100C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8023100C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80231010: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x80231014: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
    // 0x80231018: beq         $v0, $zero, L_80231094
    if (ctx->r2 == 0) {
        // 0x8023101C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231094;
    }
    // 0x8023101C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231020: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80231024: beq         $v1, $v0, L_80231068
    if (ctx->r3 == ctx->r2) {
        // 0x80231028: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80231068;
    }
    // 0x80231028: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023102C: beql        $v0, $zero, L_80231044
    if (ctx->r2 == 0) {
        // 0x80231030: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80231044;
    }
    goto skip_1;
    // 0x80231030: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x80231034: beq         $v1, $zero, L_80231054
    if (ctx->r3 == 0) {
        // 0x80231038: andi        $v0, $a0, 0x80
        ctx->r2 = ctx->r4 & 0X80;
            goto L_80231054;
    }
    // 0x80231038: andi        $v0, $a0, 0x80
    ctx->r2 = ctx->r4 & 0X80;
    // 0x8023103C: j           L_80231088
    // 0x80231040: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80231088;
    // 0x80231040: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80231044:
    // 0x80231044: beq         $v1, $v0, L_8023107C
    if (ctx->r3 == ctx->r2) {
        // 0x80231048: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023107C;
    }
    // 0x80231048: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023104C: j           L_80231088
    // 0x80231050: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80231088;
    // 0x80231050: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80231054:
    // 0x80231054: bne         $v0, $zero, L_80231074
    if (ctx->r2 != 0) {
        // 0x80231058: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80231074;
    }
    // 0x80231058: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023105C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231060: j           L_80231084
    // 0x80231064: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80231084;
    // 0x80231064: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80231068:
    // 0x80231068: andi        $v0, $a0, 0x80
    ctx->r2 = ctx->r4 & 0X80;
    // 0x8023106C: beq         $v0, $zero, L_80231080
    if (ctx->r2 == 0) {
        // 0x80231070: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80231080;
    }
    // 0x80231070: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80231074:
    // 0x80231074: j           L_80231084
    // 0x80231078: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80231084;
    // 0x80231078: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023107C:
    // 0x8023107C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80231080:
    // 0x80231080: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80231084:
    // 0x80231084: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80231088:
    // 0x80231088: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8023108C: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80231090: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
L_80231094:
    // 0x80231094: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231098: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023109C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802310A0: jr          $ra
    // 0x802310A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802310A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802391D0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802391D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802391D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802391D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802391DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802391E0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802391E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802391E8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802391EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802391F0: lw          $v0, -0x1358($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1358);
    // 0x802391F4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802391F8: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x802391FC: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80239200: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x80239204: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80239208: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8023920C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80239210: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80239214: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80239218: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8023921C: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x80239220: jal         0x80239674
    // 0x80239224: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    func_80239674_ovl3(rdram, ctx);
        goto after_0;
    // 0x80239224: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    after_0:
    // 0x80239228: beq         $v0, $zero, L_8023923C
    if (ctx->r2 == 0) {
        // 0x8023922C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023923C;
    }
    // 0x8023922C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239230: jal         0x8004F62C
    // 0x80239234: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x80239234: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80239238: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023923C:
    // 0x8023923C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80239240: jal         0x802392BC
    // 0x80239244: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802392BC_ovl3(rdram, ctx);
        goto after_2;
    // 0x80239244: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80239248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023924C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239250: jr          $ra
    // 0x80239254: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239254: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C344_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C344: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C348: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C34C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C350: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022C354: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C358: lh          $v0, 0x362($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X362);
    // 0x8022C35C: bne         $v0, $zero, L_8022C39C
    if (ctx->r2 != 0) {
        // 0x8022C360: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022C39C;
    }
    // 0x8022C360: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022C364: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x8022C368: bne         $v0, $zero, L_8022C390
    if (ctx->r2 != 0) {
        // 0x8022C36C: nop
    
            goto L_8022C390;
    }
    // 0x8022C36C: nop

    // 0x8022C370: lh          $v1, 0x360($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X360);
    // 0x8022C374: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x8022C378: bne         $v1, $v0, L_8022C390
    if (ctx->r3 != ctx->r2) {
        // 0x8022C37C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022C390;
    }
    // 0x8022C37C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C380: lhu         $v0, 0x352($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X352);
    // 0x8022C384: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x8022C388: j           L_8022C3CC
    // 0x8022C38C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
        goto L_8022C3CC;
    // 0x8022C38C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_8022C390:
    // 0x8022C390: lh          $v0, 0x1A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1A);
    // 0x8022C394: beq         $v0, $zero, L_8022C3FC
    if (ctx->r2 == 0) {
        // 0x8022C398: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C3FC;
    }
    // 0x8022C398: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022C39C:
    // 0x8022C39C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022C3A0: bne         $v0, $zero, L_8022C3FC
    if (ctx->r2 != 0) {
        // 0x8022C3A4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C3FC;
    }
    // 0x8022C3A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C3A8: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x8022C3AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C3B0: bne         $v1, $v0, L_8022C3FC
    if (ctx->r3 != ctx->r2) {
        // 0x8022C3B4: addiu       $a1, $s1, 0xC
        ctx->r5 = ADD32(ctx->r17, 0XC);
            goto L_8022C3FC;
    }
    // 0x8022C3B4: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    // 0x8022C3B8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C3BC: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x8022C3C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C3C4: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022C3C8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_8022C3CC:
    // 0x8022C3CC: jal         0x8009A3B4
    // 0x8022C3D0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022C3D0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022C3D4: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022C3D8: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022C3DC: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022C3E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C3E4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022C3E8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022C3EC: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022C3F0: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022C3F4: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022C3F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022C3FC:
    // 0x8022C3FC: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022C400: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C404: jal         0x8004DA90
    // 0x8022C408: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022C408: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022C40C: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x8022C410: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C414: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x8022C418: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C41C: bne         $v0, $zero, L_8022C44C
    if (ctx->r2 != 0) {
        // 0x8022C420: nop
    
            goto L_8022C44C;
    }
    // 0x8022C420: nop

    // 0x8022C424: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C428: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022C42C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C430: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022C434: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x8022C438: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C43C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022C440: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022C444: j           L_8022C49C
    // 0x8022C448: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022C49C;
    // 0x8022C448: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022C44C:
    // 0x8022C44C: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022C450: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C454: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022C458: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C45C: bne         $v0, $zero, L_8022C46C
    if (ctx->r2 != 0) {
        // 0x8022C460: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C46C;
    }
    // 0x8022C460: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C464: j           L_8022C49C
    // 0x8022C468: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022C49C;
    // 0x8022C468: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022C46C:
    // 0x8022C46C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022C470: jal         0x8022DCA4
    // 0x8022C474: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022DCA4_ovl3(rdram, ctx);
        goto after_2;
    // 0x8022C474: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_2:
    // 0x8022C478: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022C47C: beq         $v0, $zero, L_8022C4A0
    if (ctx->r2 == 0) {
        // 0x8022C480: nop
    
            goto L_8022C4A0;
    }
    // 0x8022C480: nop

    // 0x8022C484: jal         0x8022DC08
    // 0x8022C488: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022DC08_ovl3(rdram, ctx);
        goto after_3;
    // 0x8022C488: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_3:
    // 0x8022C48C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C490: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022C494: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022C498: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8022C49C:
    // 0x8022C49C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022C4A0:
    // 0x8022C4A0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C4A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C4A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C4AC: jr          $ra
    // 0x8022C4B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C4B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C60C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C60C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C610: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C614: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C618: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C61C: lh          $a0, 0x364($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X364);
    // 0x8022C620: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022C624: jal         0x8004FA7C
    // 0x8022C628: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022C628: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    after_0:
    // 0x8022C62C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022C630: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022C634: bne         $v0, $zero, L_8022C680
    if (ctx->r2 != 0) {
        // 0x8022C638: nop
    
            goto L_8022C680;
    }
    // 0x8022C638: nop

    // 0x8022C63C: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x8022C640: beq         $v0, $zero, L_8022C654
    if (ctx->r2 == 0) {
        // 0x8022C644: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C654;
    }
    // 0x8022C644: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C648: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x8022C64C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022C650: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_8022C654:
    // 0x8022C654: lhu         $a0, 0x362($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X362);
    // 0x8022C658: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x8022C65C: lhu         $a1, 0x360($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X360);
    // 0x8022C660: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C664: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C668: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C66C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022C670: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8022C674: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022C678: sh          $v0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r2;
    // 0x8022C67C: sh          $v1, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r3;
L_8022C680:
    // 0x8022C680: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C684: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022C688: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C68C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022C690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C694: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C698: jr          $ra
    // 0x8022C69C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C69C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B4FC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B4FC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8023B500: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023B504: bne         $v0, $zero, L_8023B5AC
    if (ctx->r2 != 0) {
        // 0x8023B508: addiu       $a1, $a1, 0x49B0
        ctx->r5 = ADD32(ctx->r5, 0X49B0);
            goto L_8023B5AC;
    }
    // 0x8023B508: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8023B50C: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x8023B510: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023B514: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023B518: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023B51C: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x8023B520: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023B524: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023B528: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023B52C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023B530: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8023B534: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8023B538: bne         $v1, $v0, L_8023B558
    if (ctx->r3 != ctx->r2) {
        // 0x8023B53C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023B558;
    }
    // 0x8023B53C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023B540: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023B544: lbu         $v1, -0x3BC8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3BC8);
    // 0x8023B548: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B54C: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8023B550: j           L_8023B56C
    // 0x8023B554: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_8023B56C;
    // 0x8023B554: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8023B558:
    // 0x8023B558: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023B55C: lbu         $v1, -0x3BC8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3BC8);
    // 0x8023B560: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B564: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8023B568: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8023B56C:
    // 0x8023B56C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B570: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x8023B574: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023B578: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B57C: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8023B580: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B584: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8023B588: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B58C: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8023B590: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B594: sb          $v1, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r3;
    // 0x8023B598: sw          $zero, 0x428($a1)
    MEM_W(0X428, ctx->r5) = 0;
    // 0x8023B59C: sw          $zero, 0x430($a1)
    MEM_W(0X430, ctx->r5) = 0;
    // 0x8023B5A0: sw          $zero, 0x42C($a1)
    MEM_W(0X42C, ctx->r5) = 0;
    // 0x8023B5A4: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
    // 0x8023B5A8: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
L_8023B5AC:
    // 0x8023B5AC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8023B5B0: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8023B5B4: bne         $v1, $v0, L_8023B5E4
    if (ctx->r3 != ctx->r2) {
        // 0x8023B5B8: addiu       $v0, $zero, 0x46
        ctx->r2 = ADD32(0, 0X46);
            goto L_8023B5E4;
    }
    // 0x8023B5B8: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x8023B5BC: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x8023B5C0: lbu         $v0, 0x9($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X9);
    // 0x8023B5C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B5C8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8023B5CC: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x8023B5D0: lbu         $v0, 0x9($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X9);
    // 0x8023B5D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B5D8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8023B5DC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8023B5E0: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
L_8023B5E4:
    // 0x8023B5E4: bne         $v1, $v0, L_8023B5F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023B5E8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023B5F4;
    }
    // 0x8023B5E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023B5EC: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x8023B5F0: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
L_8023B5F4:
    // 0x8023B5F4: jr          $ra
    // 0x8023B5F8: nop

    TRACE_RETURN()
    return;
    // 0x8023B5F8: nop

;}
