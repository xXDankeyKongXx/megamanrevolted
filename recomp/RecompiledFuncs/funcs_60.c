#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80232208_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232208: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023220C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232210: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232214: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80232218: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023221C: lh          $a0, 0x5E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X5E);
    // 0x80232220: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80232224: jal         0x8004FA7C
    // 0x80232228: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80232228: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    after_0:
    // 0x8023222C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80232230: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80232234: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80232238: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023223C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80232240: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232244: bne         $v0, $zero, L_802322C8
    if (ctx->r2 != 0) {
        // 0x80232248: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_802322C8;
    }
    // 0x80232248: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8023224C: jal         0x8003516C
    // 0x80232250: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x80232250: nop

    after_1:
    // 0x80232254: bne         $v0, $zero, L_802322C8
    if (ctx->r2 != 0) {
        // 0x80232258: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802322C8;
    }
    // 0x80232258: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023225C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232260: jal         0x80050294
    // 0x80232264: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80232264: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80232268: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8023226C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80232270: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80232274: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80232278: addiu       $a0, $zero, 0x23D
    ctx->r4 = ADD32(0, 0X23D);
    // 0x8023227C: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80232280: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80232284: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232288: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x8023228C: jal         0x80060590
    // 0x80232290: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x80232290: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    after_3:
    // 0x80232294: jal         0x80060590
    // 0x80232298: addiu       $a0, $zero, 0x23E
    ctx->r4 = ADD32(0, 0X23E);
    func_80060590_3B990(rdram, ctx);
        goto after_4;
    // 0x80232298: addiu       $a0, $zero, 0x23E
    ctx->r4 = ADD32(0, 0X23E);
    after_4:
    // 0x8023229C: jal         0x80060590
    // 0x802322A0: addiu       $a0, $zero, 0x23F
    ctx->r4 = ADD32(0, 0X23F);
    func_80060590_3B990(rdram, ctx);
        goto after_5;
    // 0x802322A0: addiu       $a0, $zero, 0x23F
    ctx->r4 = ADD32(0, 0X23F);
    after_5:
    // 0x802322A4: jal         0x80060590
    // 0x802322A8: addiu       $a0, $zero, 0x240
    ctx->r4 = ADD32(0, 0X240);
    func_80060590_3B990(rdram, ctx);
        goto after_6;
    // 0x802322A8: addiu       $a0, $zero, 0x240
    ctx->r4 = ADD32(0, 0X240);
    after_6:
    // 0x802322AC: jal         0x80060590
    // 0x802322B0: addiu       $a0, $zero, 0x241
    ctx->r4 = ADD32(0, 0X241);
    func_80060590_3B990(rdram, ctx);
        goto after_7;
    // 0x802322B0: addiu       $a0, $zero, 0x241
    ctx->r4 = ADD32(0, 0X241);
    after_7:
    // 0x802322B4: jal         0x80060590
    // 0x802322B8: addiu       $a0, $zero, 0x242
    ctx->r4 = ADD32(0, 0X242);
    func_80060590_3B990(rdram, ctx);
        goto after_8;
    // 0x802322B8: addiu       $a0, $zero, 0x242
    ctx->r4 = ADD32(0, 0X242);
    after_8:
    // 0x802322BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802322C0: j           L_802322D0
    // 0x802322C4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_802322D0;
    // 0x802322C4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802322C8:
    // 0x802322C8: jal         0x8005044C
    // 0x802322CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_9;
    // 0x802322CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_802322D0:
    // 0x802322D0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802322D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802322D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802322DC: jr          $ra
    // 0x802322E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802322E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023DE08_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023DE08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023DE0C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8023DE10: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023DE14: addiu       $a0, $zero, 0x141
    ctx->r4 = ADD32(0, 0X141);
    // 0x8023DE18: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023DE1C: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x8023DE20: jal         0x8002A33C
    // 0x8023DE24: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8023DE24: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x8023DE28: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023DE2C: jr          $ra
    // 0x8023DE30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023DE30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802389EC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802389EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802389F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802389F4: jal         0x8004F418
    // 0x802389F8: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x802389F8: nop

    after_0:
    // 0x802389FC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80238A00: jr          $ra
    // 0x80238A04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238A04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80240350_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80240350: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80240354: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80240358: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024035C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80240360: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80240364: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80240368: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8024036C: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
    // 0x80240370: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80240374: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80240378: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024037C: lw          $v0, 0x6DA0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6DA0);
    // 0x80240380: jalr        $v0
    // 0x80240384: addiu       $a1, $s0, 0xD0
    ctx->r5 = ADD32(ctx->r16, 0XD0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80240384: addiu       $a1, $s0, 0xD0
    ctx->r5 = ADD32(ctx->r16, 0XD0);
    after_0:
    // 0x80240388: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8024038C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80240390: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x80240394: addiu       $v0, $s0, 0xE0
    ctx->r2 = ADD32(ctx->r16, 0XE0);
    // 0x80240398: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8024039C: lui         $v0, 0x488
    ctx->r2 = S32(0X488 << 16);
    // 0x802403A0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x802403A4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802403A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802403AC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x802403B0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802403B4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802403B8: jal         0x80051E18
    // 0x802403BC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x802403BC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x802403C0: sw          $zero, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = 0;
    // 0x802403C4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802403C8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802403CC: jr          $ra
    // 0x802403D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802403D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80225CCC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225CCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225CD0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225CD4: jal         0x8006036C
    // 0x80225CD8: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x80225CD8: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_0:
    // 0x80225CDC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225CE0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80225CE4: jr          $ra
    // 0x80225CE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225CE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802283F0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802283F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802283F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802283F8: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x802283FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228400: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228404: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228408: lw          $v0, 0x4470($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4470);
    // 0x8022840C: jalr        $v0
    // 0x80228410: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228410: nop

    after_0:
    // 0x80228414: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228418: jr          $ra
    // 0x8022841C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022841C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236BEC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236BEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236BF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236BF4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236BF8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80236BFC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236C00: lh          $a0, 0x5E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X5E);
    // 0x80236C04: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80236C08: jal         0x8004FA7C
    // 0x80236C0C: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80236C0C: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    after_0:
    // 0x80236C10: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80236C14: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80236C18: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80236C1C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236C20: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80236C24: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236C28: bne         $v0, $zero, L_80236C7C
    if (ctx->r2 != 0) {
        // 0x80236C2C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80236C7C;
    }
    // 0x80236C2C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80236C30: jal         0x8003516C
    // 0x80236C34: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x80236C34: nop

    after_1:
    // 0x80236C38: bne         $v0, $zero, L_80236C7C
    if (ctx->r2 != 0) {
        // 0x80236C3C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236C7C;
    }
    // 0x80236C3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236C40: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80236C44: jal         0x80050294
    // 0x80236C48: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80236C48: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80236C4C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80236C50: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80236C54: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80236C58: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80236C5C: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80236C60: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80236C64: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80236C68: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x80236C6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236C70: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x80236C74: j           L_80236C84
    // 0x80236C78: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80236C84;
    // 0x80236C78: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80236C7C:
    // 0x80236C7C: jal         0x8005044C
    // 0x80236C80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x80236C80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80236C84:
    // 0x80236C84: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80236C88: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236C8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236C90: jr          $ra
    // 0x80236C94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236C94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80236C98: nop

    // 0x80236C9C: nop

;}
RECOMP_FUNC void func_8022E094_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E094: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E098: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E09C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022E0A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E0A4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E0A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E0AC: lw          $v0, 0x5B34($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5B34);
    // 0x8022E0B0: jalr        $v0
    // 0x8022E0B4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E0B4: nop

    after_0:
    // 0x8022E0B8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E0BC: jr          $ra
    // 0x8022E0C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E0C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023531C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023531C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80235320: bne         $v0, $zero, L_80235330
    if (ctx->r2 != 0) {
        // 0x80235324: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80235330;
    }
    // 0x80235324: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235328: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8023532C: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_80235330:
    // 0x80235330: jr          $ra
    // 0x80235334: nop

    TRACE_RETURN()
    return;
    // 0x80235334: nop

;}
RECOMP_FUNC void func_80233934_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233934: lw          $v1, 0x328($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X328);
    // 0x80233938: lhu         $v0, 0x14($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X14);
    // 0x8023393C: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x80233940: lhu         $v0, 0x16($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X16);
    // 0x80233944: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x80233948: lhu         $v0, 0x18($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X18);
    // 0x8023394C: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x80233950: lw          $v0, 0x1C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C);
    // 0x80233954: sw          $v0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r2;
    // 0x80233958: lw          $v0, 0x20($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X20);
    // 0x8023395C: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x80233960: lw          $v0, 0x24($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X24);
    // 0x80233964: sw          $v0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r2;
    // 0x80233968: lhu         $v0, 0x56($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X56);
    // 0x8023396C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x80233970: lhu         $v1, 0x44($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X44);
    // 0x80233974: lhu         $v0, 0x32C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X32C);
    // 0x80233978: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x8023397C: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x80233980: andi        $v0, $v0, 0xFFF7
    ctx->r2 = ctx->r2 & 0XFFF7;
    // 0x80233984: sh          $v0, 0x32C($a0)
    MEM_H(0X32C, ctx->r4) = ctx->r2;
    // 0x80233988: jr          $ra
    // 0x8023398C: sh          $v1, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8023398C: sh          $v1, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80226D28_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226D2C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226D30: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226D34: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80226D38: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80226D3C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226D40: lw          $v1, 0x3310($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3310);
    // 0x80226D44: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x80226D48: srlv        $v0, $v0, $a0
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r4 & 31));
    // 0x80226D4C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226D50: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80226D54: beq         $v1, $zero, L_80226E04
    if (ctx->r3 == 0) {
        // 0x80226D58: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_80226E04;
    }
    // 0x80226D58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226D5C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80226D60: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80226D64: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80226D68: lw          $s0, 0x7948($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X7948);
    // 0x80226D6C: jal         0x8004DA68
    // 0x80226D70: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    func_8004DA68_28E68(rdram, ctx);
        goto after_0;
    // 0x80226D70: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    after_0:
    // 0x80226D74: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226D78: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80226D7C: beq         $v1, $v0, L_80226D94
    if (ctx->r3 == ctx->r2) {
        // 0x80226D80: addiu       $v0, $zero, 0x60
        ctx->r2 = ADD32(0, 0X60);
            goto L_80226D94;
    }
    // 0x80226D80: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80226D84: beq         $v1, $v0, L_80226DC0
    if (ctx->r3 == ctx->r2) {
        // 0x80226D88: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226DC0;
    }
    // 0x80226D88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226D8C: j           L_80226DE8
    // 0x80226D90: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
        goto L_80226DE8;
    // 0x80226D90: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
L_80226D94:
    // 0x80226D94: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80226D98: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226D9C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80226DA0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226DA4: lw          $v0, 0x4020($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4020);
    // 0x80226DA8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80226DAC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226DB0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226DB4: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80226DB8: j           L_80226DD4
    // 0x80226DBC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_80226DD4;
    // 0x80226DBC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80226DC0:
    // 0x80226DC0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80226DC4: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80226DC8: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80226DCC: lw          $v1, -0x26A8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X26A8);
    // 0x80226DD0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80226DD4:
    // 0x80226DD4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226DD8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80226DDC: jalr        $v0
    // 0x80226DE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80226DE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80226DE4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
L_80226DE8:
    // 0x80226DE8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226DEC: lw          $v1, 0x3310($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3310);
    // 0x80226DF0: srlv        $v0, $v0, $s1
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r17 & 31));
    // 0x80226DF4: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80226DF8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80226DFC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226E00: sw          $v1, 0x3310($at)
    MEM_W(0X3310, ctx->r1) = ctx->r3;
L_80226E04:
    // 0x80226E04: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226E08: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226E0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226E10: jr          $ra
    // 0x80226E14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226E14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022883C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022883C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80228840: bne         $v0, $zero, L_80228858
    if (ctx->r2 != 0) {
        // 0x80228844: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80228858;
    }
    // 0x80228844: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80228848: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x8022884C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80228850: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80228854: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
L_80228858:
    // 0x80228858: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8022885C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80228860: bne         $v1, $v0, L_80228878
    if (ctx->r3 != ctx->r2) {
        // 0x80228864: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80228878;
    }
    // 0x80228864: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80228868: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x8022886C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80228870: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80228874: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
L_80228878:
    // 0x80228878: jr          $ra
    // 0x8022887C: nop

    TRACE_RETURN()
    return;
    // 0x8022887C: nop

;}
RECOMP_FUNC void func_8023B7D0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B7D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023B7D4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023B7D8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023B7DC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023B7E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023B7E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B7E8: lbu         $a1, 0x9($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X9);
    // 0x8023B7EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B7F0: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x8023B7F4: beq         $v1, $v0, L_8023B914
    if (ctx->r3 == ctx->r2) {
        // 0x8023B7F8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023B914;
    }
    // 0x8023B7F8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023B7FC: beql        $v0, $zero, L_8023B814
    if (ctx->r2 == 0) {
        // 0x8023B800: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023B814;
    }
    goto skip_0;
    // 0x8023B800: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023B804: beq         $v1, $zero, L_8023B824
    if (ctx->r3 == 0) {
        // 0x8023B808: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_8023B824;
    }
    // 0x8023B808: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8023B80C: j           L_8023B954
    // 0x8023B810: nop

        goto L_8023B954;
    // 0x8023B810: nop

L_8023B814:
    // 0x8023B814: beq         $v1, $v0, L_8023B930
    if (ctx->r3 == ctx->r2) {
        // 0x8023B818: nop
    
            goto L_8023B930;
    }
    // 0x8023B818: nop

    // 0x8023B81C: j           L_8023B954
    // 0x8023B820: nop

        goto L_8023B954;
    // 0x8023B820: nop

L_8023B824:
    // 0x8023B824: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8023B828: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8023B82C: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8023B830: addiu       $s0, $s0, 0x64E0
    ctx->r16 = ADD32(ctx->r16, 0X64E0);
    // 0x8023B834: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x8023B838: addiu       $s3, $s3, 0x7528
    ctx->r19 = ADD32(ctx->r19, 0X7528);
    // 0x8023B83C: addu        $s2, $s3, $zero
    ctx->r18 = ADD32(ctx->r19, 0);
L_8023B840:
    // 0x8023B840: jal         0x8004EEAC
    // 0x8023B844: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x8023B844: nop

    after_0:
    // 0x8023B848: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023B84C: beql        $v1, $zero, L_8023B8FC
    if (ctx->r3 == 0) {
        // 0x8023B850: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_8023B8FC;
    }
    goto skip_1;
    // 0x8023B850: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    skip_1:
    // 0x8023B854: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
    // 0x8023B858: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023B85C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023B860: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8023B864: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8023B868: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8023B86C: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x8023B870: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8023B874: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x8023B878: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x8023B87C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8023B880: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x8023B884: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    // 0x8023B888: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8023B88C: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x8023B890: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8023B894: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x8023B898: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x8023B89C: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x8023B8A0: lhu         $v0, 0xC($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC);
    // 0x8023B8A4: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x8023B8A8: lh          $v0, 0x8($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X8);
    // 0x8023B8AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023B8B0: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x8023B8B4: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
    // 0x8023B8B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023B8BC: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x8023B8C0: lh          $v0, 0xC($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XC);
    // 0x8023B8C4: sh          $zero, 0x54($v1)
    MEM_H(0X54, ctx->r3) = 0;
    // 0x8023B8C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023B8CC: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x8023B8D0: lhu         $v0, 0xE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE);
    // 0x8023B8D4: sh          $zero, 0x58($v1)
    MEM_H(0X58, ctx->r3) = 0;
    // 0x8023B8D8: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x8023B8DC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023B8E0: beq         $s1, $v0, L_8023B8F0
    if (ctx->r17 == ctx->r2) {
        // 0x8023B8E4: nop
    
            goto L_8023B8F0;
    }
    // 0x8023B8E4: nop

    // 0x8023B8E8: j           L_8023B8F8
    // 0x8023B8EC: sw          $zero, 0x328($v1)
    MEM_W(0X328, ctx->r3) = 0;
        goto L_8023B8F8;
    // 0x8023B8EC: sw          $zero, 0x328($v1)
    MEM_W(0X328, ctx->r3) = 0;
L_8023B8F0:
    // 0x8023B8F0: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x8023B8F4: sw          $v0, 0x328($v1)
    MEM_W(0X328, ctx->r3) = ctx->r2;
L_8023B8F8:
    // 0x8023B8F8: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
L_8023B8FC:
    // 0x8023B8FC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8023B900: slti        $v0, $s1, 0x7
    ctx->r2 = SIGNED(ctx->r17) < 0X7 ? 1 : 0;
    // 0x8023B904: bne         $v0, $zero, L_8023B840
    if (ctx->r2 != 0) {
        // 0x8023B908: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_8023B840;
    }
    // 0x8023B908: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8023B90C: j           L_8023B954
    // 0x8023B910: nop

        goto L_8023B954;
    // 0x8023B910: nop

L_8023B914:
    // 0x8023B914: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8023B918: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x8023B91C: beq         $v0, $zero, L_8023B954
    if (ctx->r2 == 0) {
        // 0x8023B920: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_8023B954;
    }
    // 0x8023B920: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8023B924: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8023B928: j           L_8023B954
    // 0x8023B92C: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
        goto L_8023B954;
    // 0x8023B92C: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
L_8023B930:
    // 0x8023B930: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8023B934: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x8023B938: bne         $v0, $zero, L_8023B954
    if (ctx->r2 != 0) {
        // 0x8023B93C: nop
    
            goto L_8023B954;
    }
    // 0x8023B93C: nop

    // 0x8023B940: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023B944: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8023B948: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
    // 0x8023B94C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B950: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_8023B954:
    // 0x8023B954: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023B958: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023B95C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023B960: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023B964: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B968: jr          $ra
    // 0x8023B96C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023B96C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802350A0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802350A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802350A4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802350A8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802350AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802350B0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802350B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802350B8: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x802350BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802350C0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802350C4: jal         0x8004D5D4
    // 0x802350C8: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802350C8: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    after_0:
    // 0x802350CC: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x802350D0: addiu       $s1, $s1, 0x74B0
    ctx->r17 = ADD32(ctx->r17, 0X74B0);
    // 0x802350D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802350D8: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x802350DC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x802350E0: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x802350E4: sh          $v0, 0x15C($s2)
    MEM_H(0X15C, ctx->r18) = ctx->r2;
    // 0x802350E8: sh          $v0, 0x15A($s2)
    MEM_H(0X15A, ctx->r18) = ctx->r2;
    // 0x802350EC: sh          $v0, 0x158($s2)
    MEM_H(0X158, ctx->r18) = ctx->r2;
    // 0x802350F0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802350F4: sh          $v0, 0x15E($s2)
    MEM_H(0X15E, ctx->r18) = ctx->r2;
    // 0x802350F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802350FC: sh          $v0, 0x348($s2)
    MEM_H(0X348, ctx->r18) = ctx->r2;
    // 0x80235100: jal         0x8009A3B4
    // 0x80235104: sw          $zero, 0x34C($s2)
    MEM_W(0X34C, ctx->r18) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80235104: sw          $zero, 0x34C($s2)
    MEM_W(0X34C, ctx->r18) = 0;
    after_1:
    // 0x80235108: addiu       $s0, $s2, 0x354
    ctx->r16 = ADD32(ctx->r18, 0X354);
    // 0x8023510C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235110: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80235114: jal         0x8009A3B4
    // 0x80235118: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80235118: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8023511C: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80235120: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235124: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235128: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x8023512C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80235130: jal         0x8004DBA0
    // 0x80235134: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x80235134: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x80235138: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8023513C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80235140: sh          $v0, 0x6E($s2)
    MEM_H(0X6E, ctx->r18) = ctx->r2;
    // 0x80235144: sh          $v0, 0xB0($s2)
    MEM_H(0XB0, ctx->r18) = ctx->r2;
    // 0x80235148: sh          $v0, 0xB2($s2)
    MEM_H(0XB2, ctx->r18) = ctx->r2;
    // 0x8023514C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235150: addiu       $v0, $v0, 0x5EAC
    ctx->r2 = ADD32(ctx->r2, 0X5EAC);
    // 0x80235154: sw          $v0, 0x78($s2)
    MEM_W(0X78, ctx->r18) = ctx->r2;
    // 0x80235158: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023515C: addiu       $v0, $v0, 0x5EB8
    ctx->r2 = ADD32(ctx->r2, 0X5EB8);
    // 0x80235160: sh          $zero, 0x352($s2)
    MEM_H(0X352, ctx->r18) = 0;
    // 0x80235164: sh          $zero, 0x54($s2)
    MEM_H(0X54, ctx->r18) = 0;
    // 0x80235168: sh          $zero, 0x58($s2)
    MEM_H(0X58, ctx->r18) = 0;
    // 0x8023516C: sw          $zero, 0x44($s2)
    MEM_W(0X44, ctx->r18) = 0;
    // 0x80235170: sw          $zero, 0x48($s2)
    MEM_W(0X48, ctx->r18) = 0;
    // 0x80235174: beq         $v1, $zero, L_80235188
    if (ctx->r3 == 0) {
        // 0x80235178: sw          $v0, 0x10($s2)
        MEM_W(0X10, ctx->r18) = ctx->r2;
            goto L_80235188;
    }
    // 0x80235178: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x8023517C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235180: j           L_8023518C
    // 0x80235184: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
        goto L_8023518C;
    // 0x80235184: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_80235188:
    // 0x80235188: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
L_8023518C:
    // 0x8023518C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80235190: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80235194: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80235198: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023519C: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x802351A0: jal         0x80050294
    // 0x802351A4: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x802351A4: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    after_4:
    // 0x802351A8: jal         0x802351C8
    // 0x802351AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_802351C8_ovl5(rdram, ctx);
        goto after_5;
    // 0x802351AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
    // 0x802351B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802351B4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802351B8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802351BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802351C0: jr          $ra
    // 0x802351C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802351C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023EAD0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023EAD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023EAD4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8023EAD8: lbu         $v0, 0xDE($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XDE);
    // 0x8023EADC: lw          $v1, 0xD0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XD0);
    // 0x8023EAE0: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x8023EAE4: lh          $a0, 0x14($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X14);
    // 0x8023EAE8: addiu       $t1, $a1, 0xD0
    ctx->r9 = ADD32(ctx->r5, 0XD0);
    // 0x8023EAEC: lbu         $a3, 0xDF($a1)
    ctx->r7 = MEM_BU(ctx->r5, 0XDF);
    // 0x8023EAF0: lhu         $t0, 0xE0($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0XE0);
    // 0x8023EAF4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023EAF8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023EAFC: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8023EB00: lbu         $a2, 0x2($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X2);
    // 0x8023EB04: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x8023EB08: addiu       $v1, $v1, -0x40
    ctx->r3 = ADD32(ctx->r3, -0X40);
    // 0x8023EB0C: sll         $v1, $v1, 9
    ctx->r3 = S32(ctx->r3 << 9);
    // 0x8023EB10: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8023EB14: bltzl       $v1, L_8023EB1C
    if (SIGNED(ctx->r3) < 0) {
        // 0x8023EB18: negu        $v1, $v1
        ctx->r3 = SUB32(0, ctx->r3);
            goto L_8023EB1C;
    }
    goto skip_0;
    // 0x8023EB18: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    skip_0:
L_8023EB1C:
    // 0x8023EB1C: lh          $a0, 0x18($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X18);
    // 0x8023EB20: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x8023EB24: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8023EB28: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8023EB2C: bltzl       $v0, L_8023EB34
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023EB30: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8023EB34;
    }
    goto skip_1;
    // 0x8023EB30: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_1:
L_8023EB34:
    // 0x8023EB34: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023EB38: addiu       $v0, $v1, 0x1FF
    ctx->r2 = ADD32(ctx->r3, 0X1FF);
    // 0x8023EB3C: sh          $v0, 0xE4($a1)
    MEM_H(0XE4, ctx->r5) = ctx->r2;
    // 0x8023EB40: andi        $v0, $a3, 0x4
    ctx->r2 = ctx->r7 & 0X4;
    // 0x8023EB44: beq         $v0, $zero, L_8023EB50
    if (ctx->r2 == 0) {
        // 0x8023EB48: addu        $t2, $v1, $zero
        ctx->r10 = ADD32(ctx->r3, 0);
            goto L_8023EB50;
    }
    // 0x8023EB48: addu        $t2, $v1, $zero
    ctx->r10 = ADD32(ctx->r3, 0);
    // 0x8023EB4C: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
L_8023EB50:
    // 0x8023EB50: andi        $v0, $a3, 0x11
    ctx->r2 = ctx->r7 & 0X11;
    // 0x8023EB54: bne         $v0, $zero, L_8023EC08
    if (ctx->r2 != 0) {
        // 0x8023EB58: andi        $a2, $a2, 0xE0
        ctx->r6 = ctx->r6 & 0XE0;
            goto L_8023EC08;
    }
    // 0x8023EB58: andi        $a2, $a2, 0xE0
    ctx->r6 = ctx->r6 & 0XE0;
    // 0x8023EB5C: beq         $a2, $zero, L_8023EBC8
    if (ctx->r6 == 0) {
        // 0x8023EB60: nop
    
            goto L_8023EBC8;
    }
    // 0x8023EB60: nop

    // 0x8023EB64: lhu         $v0, 0x44($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X44);
    // 0x8023EB68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023EB6C: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023EB70: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x8023EB74: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x8023EB78: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023EB7C: mflo        $v0
    ctx->r2 = lo;
    // 0x8023EB80: sra         $v1, $v0, 4
    ctx->r3 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023EB84: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8023EB88: bne         $a2, $v0, L_8023EB98
    if (ctx->r6 != ctx->r2) {
        // 0x8023EB8C: addiu       $a0, $v1, 0x180
        ctx->r4 = ADD32(ctx->r3, 0X180);
            goto L_8023EB98;
    }
    // 0x8023EB8C: addiu       $a0, $v1, 0x180
    ctx->r4 = ADD32(ctx->r3, 0X180);
    // 0x8023EB90: j           L_8023EBA4
    // 0x8023EB94: addiu       $a0, $v1, 0x380
    ctx->r4 = ADD32(ctx->r3, 0X380);
        goto L_8023EBA4;
    // 0x8023EB94: addiu       $a0, $v1, 0x380
    ctx->r4 = ADD32(ctx->r3, 0X380);
L_8023EB98:
    // 0x8023EB98: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8023EB9C: beql        $a2, $v0, L_8023EBA4
    if (ctx->r6 == ctx->r2) {
        // 0x8023EBA0: addiu       $a0, $v1, 0x580
        ctx->r4 = ADD32(ctx->r3, 0X580);
            goto L_8023EBA4;
    }
    goto skip_2;
    // 0x8023EBA0: addiu       $a0, $v1, 0x580
    ctx->r4 = ADD32(ctx->r3, 0X580);
    skip_2:
L_8023EBA4:
    // 0x8023EBA4: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
    // 0x8023EBA8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023EBAC: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023EBB0: bne         $v0, $zero, L_8023EC08
    if (ctx->r2 != 0) {
        // 0x8023EBB4: nop
    
            goto L_8023EC08;
    }
    // 0x8023EBB4: nop

    // 0x8023EBB8: lbu         $v0, 0xF($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0XF);
    // 0x8023EBBC: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8023EBC0: j           L_8023EC04
    // 0x8023EBC4: sb          $v0, 0xF($t1)
    MEM_B(0XF, ctx->r9) = ctx->r2;
        goto L_8023EC04;
    // 0x8023EBC4: sb          $v0, 0xF($t1)
    MEM_B(0XF, ctx->r9) = ctx->r2;
L_8023EBC8:
    // 0x8023EBC8: lh          $v0, 0x44($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X44);
    // 0x8023EBCC: addiu       $a0, $v0, -0x140
    ctx->r4 = ADD32(ctx->r2, -0X140);
    // 0x8023EBD0: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023EBD4: mflo        $v0
    ctx->r2 = lo;
    // 0x8023EBD8: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x8023EBDC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8023EBE0: addiu       $a0, $v0, 0x400
    ctx->r4 = ADD32(ctx->r2, 0X400);
    // 0x8023EBE4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8023EBE8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023EBEC: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023EBF0: bne         $v0, $zero, L_8023EC08
    if (ctx->r2 != 0) {
        // 0x8023EBF4: ori         $v0, $a3, 0x1
        ctx->r2 = ctx->r7 | 0X1;
            goto L_8023EC08;
    }
    // 0x8023EBF4: ori         $v0, $a3, 0x1
    ctx->r2 = ctx->r7 | 0X1;
    // 0x8023EBF8: lh          $v1, 0x4C($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4C);
    // 0x8023EBFC: blez        $v1, L_8023EC08
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8023EC00: sb          $v0, 0xDF($a1)
        MEM_B(0XDF, ctx->r5) = ctx->r2;
            goto L_8023EC08;
    }
    // 0x8023EC00: sb          $v0, 0xDF($a1)
    MEM_B(0XDF, ctx->r5) = ctx->r2;
L_8023EC04:
    // 0x8023EC04: sh          $zero, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = 0;
L_8023EC08:
    // 0x8023EC08: lh          $v1, 0x44($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X44);
    // 0x8023EC0C: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x8023EC10: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023EC14: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8023EC18: beq         $v0, $zero, L_8023ECB4
    if (ctx->r2 == 0) {
        // 0x8023EC1C: slt         $v0, $a0, $v1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8023ECB4;
    }
    // 0x8023EC1C: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023EC20: lh          $v0, 0x4C($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4C);
    // 0x8023EC24: bltzl       $v0, L_8023EC2C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023EC28: sh          $zero, 0x4C($a1)
        MEM_H(0X4C, ctx->r5) = 0;
            goto L_8023EC2C;
    }
    goto skip_3;
    // 0x8023EC28: sh          $zero, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = 0;
    skip_3:
L_8023EC2C:
    // 0x8023EC2C: lh          $v0, 0x44($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X44);
    // 0x8023EC30: addiu       $v1, $a0, -0xD
    ctx->r3 = ADD32(ctx->r4, -0XD);
    // 0x8023EC34: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023EC38: beq         $v0, $zero, L_8023EC5C
    if (ctx->r2 == 0) {
        // 0x8023EC3C: nop
    
            goto L_8023EC5C;
    }
    // 0x8023EC3C: nop

    // 0x8023EC40: lh          $v0, 0x4C($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4C);
    // 0x8023EC44: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023EC48: slt         $v0, $v0, $t3
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8023EC4C: beq         $v0, $zero, L_8023EC80
    if (ctx->r2 == 0) {
        // 0x8023EC50: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8023EC80;
    }
    // 0x8023EC50: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8023EC54: j           L_8023EC80
    // 0x8023EC58: sh          $v0, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = ctx->r2;
        goto L_8023EC80;
    // 0x8023EC58: sh          $v0, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = ctx->r2;
L_8023EC5C:
    // 0x8023EC5C: lh          $v0, 0x4C($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4C);
    // 0x8023EC60: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023EC64: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8023EC68: bnel        $v0, $zero, L_8023EC7C
    if (ctx->r2 != 0) {
        // 0x8023EC6C: sh          $t0, 0x44($a1)
        MEM_H(0X44, ctx->r5) = ctx->r8;
            goto L_8023EC7C;
    }
    goto skip_4;
    // 0x8023EC6C: sh          $t0, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r8;
    skip_4:
    // 0x8023EC70: addiu       $v0, $v1, -0x2
    ctx->r2 = ADD32(ctx->r3, -0X2);
    // 0x8023EC74: j           L_8023EC80
    // 0x8023EC78: sh          $v0, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = ctx->r2;
        goto L_8023EC80;
    // 0x8023EC78: sh          $v0, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = ctx->r2;
L_8023EC7C:
    // 0x8023EC7C: sh          $zero, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = 0;
L_8023EC80:
    // 0x8023EC80: lhu         $v0, 0x44($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X44);
    // 0x8023EC84: lhu         $v1, 0x4C($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4C);
    // 0x8023EC88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023EC8C: sh          $v0, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r2;
    // 0x8023EC90: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023EC94: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023EC98: sll         $v1, $t0, 16
    ctx->r3 = S32(ctx->r8 << 16);
    // 0x8023EC9C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023ECA0: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023ECA4: beq         $v1, $zero, L_8023ED50
    if (ctx->r3 == 0) {
        // 0x8023ECA8: nop
    
            goto L_8023ED50;
    }
    // 0x8023ECA8: nop

    // 0x8023ECAC: j           L_8023ED4C
    // 0x8023ECB0: sh          $t0, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r8;
        goto L_8023ED4C;
    // 0x8023ECB0: sh          $t0, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r8;
L_8023ECB4:
    // 0x8023ECB4: beq         $v0, $zero, L_8023ED50
    if (ctx->r2 == 0) {
        // 0x8023ECB8: nop
    
            goto L_8023ED50;
    }
    // 0x8023ECB8: nop

    // 0x8023ECBC: lh          $v0, 0x4C($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4C);
    // 0x8023ECC0: bgtzl       $v0, L_8023ECC8
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023ECC4: sh          $zero, 0x4C($a1)
        MEM_H(0X4C, ctx->r5) = 0;
            goto L_8023ECC8;
    }
    goto skip_5;
    // 0x8023ECC4: sh          $zero, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = 0;
    skip_5:
L_8023ECC8:
    // 0x8023ECC8: lh          $v1, 0x44($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X44);
    // 0x8023ECCC: addiu       $v0, $a0, 0xD
    ctx->r2 = ADD32(ctx->r4, 0XD);
    // 0x8023ECD0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023ECD4: beq         $v0, $zero, L_8023ECF8
    if (ctx->r2 == 0) {
        // 0x8023ECD8: negu        $v0, $t3
        ctx->r2 = SUB32(0, ctx->r11);
            goto L_8023ECF8;
    }
    // 0x8023ECD8: negu        $v0, $t3
    ctx->r2 = SUB32(0, ctx->r11);
    // 0x8023ECDC: lh          $v1, 0x4C($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4C);
    // 0x8023ECE0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023ECE4: beq         $v0, $zero, L_8023ED1C
    if (ctx->r2 == 0) {
        // 0x8023ECE8: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8023ED1C;
    }
    // 0x8023ECE8: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8023ECEC: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x8023ECF0: j           L_8023ED1C
    // 0x8023ECF4: sh          $v0, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = ctx->r2;
        goto L_8023ED1C;
    // 0x8023ECF4: sh          $v0, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = ctx->r2;
L_8023ECF8:
    // 0x8023ECF8: lh          $v0, 0x4C($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4C);
    // 0x8023ECFC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023ED00: slti        $v0, $v0, -0x2
    ctx->r2 = SIGNED(ctx->r2) < -0X2 ? 1 : 0;
    // 0x8023ED04: beq         $v0, $zero, L_8023ED14
    if (ctx->r2 == 0) {
        // 0x8023ED08: addiu       $v0, $v1, 0x2
        ctx->r2 = ADD32(ctx->r3, 0X2);
            goto L_8023ED14;
    }
    // 0x8023ED08: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x8023ED0C: j           L_8023ED1C
    // 0x8023ED10: sh          $v0, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = ctx->r2;
        goto L_8023ED1C;
    // 0x8023ED10: sh          $v0, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = ctx->r2;
L_8023ED14:
    // 0x8023ED14: sh          $t0, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r8;
    // 0x8023ED18: sh          $zero, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = 0;
L_8023ED1C:
    // 0x8023ED1C: lhu         $v0, 0x44($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X44);
    // 0x8023ED20: lhu         $v1, 0x4C($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4C);
    // 0x8023ED24: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023ED28: sh          $v0, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r2;
    // 0x8023ED2C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023ED30: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023ED34: sll         $v1, $t0, 16
    ctx->r3 = S32(ctx->r8 << 16);
    // 0x8023ED38: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023ED3C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023ED40: beq         $v0, $zero, L_8023ED50
    if (ctx->r2 == 0) {
        // 0x8023ED44: nop
    
            goto L_8023ED50;
    }
    // 0x8023ED44: nop

    // 0x8023ED48: sh          $t0, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r8;
L_8023ED4C:
    // 0x8023ED4C: sh          $zero, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = 0;
L_8023ED50:
    // 0x8023ED50: jr          $ra
    // 0x8023ED54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023ED54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229FA0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229FA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229FA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229FA8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80229FAC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229FB0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229FB4: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80229FB8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80229FBC: bne         $v1, $v0, L_80229FDC
    if (ctx->r3 != ctx->r2) {
        // 0x80229FC0: addiu       $v0, $zero, 0x1F
        ctx->r2 = ADD32(0, 0X1F);
            goto L_80229FDC;
    }
    // 0x80229FC0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x80229FC4: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    // 0x80229FC8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229FCC: jal         0x8002A2F8
    // 0x80229FD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x80229FD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80229FD4: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80229FD8: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
L_80229FDC:
    // 0x80229FDC: bne         $v1, $v0, L_8022A030
    if (ctx->r3 != ctx->r2) {
        // 0x80229FE0: addiu       $a0, $zero, 0x18D
        ctx->r4 = ADD32(0, 0X18D);
            goto L_8022A030;
    }
    // 0x80229FE0: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    // 0x80229FE4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229FE8: jal         0x8002A2F8
    // 0x80229FEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_1;
    // 0x80229FEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80229FF0: lw          $v1, 0x30($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X30);
    // 0x80229FF4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229FF8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80229FFC: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x8022A000: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
    // 0x8022A004: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x8022A008: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8022A00C: jal         0x800616FC
    // 0x8022A010: sb          $s0, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r16;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_2;
    // 0x8022A010: sb          $s0, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r16;
    after_2:
    // 0x8022A014: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x8022A018: sb          $s0, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r16;
    // 0x8022A01C: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x8022A020: sb          $s0, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r16;
    // 0x8022A024: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022A028: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A02C: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
L_8022A030:
    // 0x8022A030: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x8022A034: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022A038: sltiu       $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 < 0X1F ? 1 : 0;
    // 0x8022A03C: beq         $v0, $zero, L_8022A068
    if (ctx->r2 == 0) {
        // 0x8022A040: nop
    
            goto L_8022A068;
    }
    // 0x8022A040: nop

    // 0x8022A044: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022A048: addiu       $v1, $v1, 0x4DF2
    ctx->r3 = ADD32(ctx->r3, 0X4DF2);
    // 0x8022A04C: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8022A050: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x8022A054: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x8022A058: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x8022A05C: lhu         $v0, 0x56($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X56);
    // 0x8022A060: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x8022A064: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
L_8022A068:
    // 0x8022A068: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022A06C: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
    // 0x8022A070: bne         $v1, $v0, L_8022A098
    if (ctx->r3 != ctx->r2) {
        // 0x8022A074: nop
    
            goto L_8022A098;
    }
    // 0x8022A074: nop

    // 0x8022A078: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x8022A07C: sb          $zero, 0xE($v0)
    MEM_B(0XE, ctx->r2) = 0;
    // 0x8022A080: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x8022A084: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A088: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x8022A08C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022A090: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A094: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
L_8022A098:
    // 0x8022A098: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x8022A09C: slti        $v0, $v0, 0x4A
    ctx->r2 = SIGNED(ctx->r2) < 0X4A ? 1 : 0;
    // 0x8022A0A0: bne         $v0, $zero, L_8022A0C4
    if (ctx->r2 != 0) {
        // 0x8022A0A4: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8022A0C4;
    }
    // 0x8022A0A4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022A0A8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A0AC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022A0B0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A0B4: bne         $v0, $zero, L_8022A0C4
    if (ctx->r2 != 0) {
        // 0x8022A0B8: nop
    
            goto L_8022A0C4;
    }
    // 0x8022A0B8: nop

    // 0x8022A0BC: jal         0x800600F8
    // 0x8022A0C0: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_3;
    // 0x8022A0C0: nop

    after_3:
L_8022A0C4:
    // 0x8022A0C4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022A0C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A0CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A0D0: jr          $ra
    // 0x8022A0D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A0D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802381E0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802381E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802381E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802381E8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802381EC: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x802381F0: sh          $v1, 0x15E($a0)
    MEM_H(0X15E, ctx->r4) = ctx->r3;
    // 0x802381F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802381F8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802381FC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238200: lw          $v0, 0x60D0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X60D0);
    // 0x80238204: jalr        $v0
    // 0x80238208: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80238208: nop

    after_0:
    // 0x8023820C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80238210: jr          $ra
    // 0x80238214: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238214: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802417C4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802417C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802417C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802417CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802417D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802417D4: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x802417D8: sll         $v1, $v0, 24
    ctx->r3 = S32(ctx->r2 << 24);
    // 0x802417DC: sra         $a0, $v1, 24
    ctx->r4 = S32(SIGNED(ctx->r3) >> 24);
    // 0x802417E0: blez        $a0, L_802418D4
    if (SIGNED(ctx->r4) <= 0) {
        // 0x802417E4: lui         $v0, 0x5555
        ctx->r2 = S32(0X5555 << 16);
            goto L_802418D4;
    }
    // 0x802417E4: lui         $v0, 0x5555
    ctx->r2 = S32(0X5555 << 16);
    // 0x802417E8: ori         $v0, $v0, 0x5556
    ctx->r2 = ctx->r2 | 0X5556;
    // 0x802417EC: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802417F0: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x802417F4: mfhi        $a1
    ctx->r5 = hi;
    // 0x802417F8: subu        $v1, $a1, $v1
    ctx->r3 = SUB32(ctx->r5, ctx->r3);
    // 0x802417FC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80241800: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80241804: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80241808: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8024180C: bne         $v0, $zero, L_8024182C
    if (ctx->r2 != 0) {
        // 0x80241810: nop
    
            goto L_8024182C;
    }
    // 0x80241810: nop

    // 0x80241814: lbu         $v1, 0x22($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X22);
    // 0x80241818: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8024181C: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x80241820: beq         $v0, $zero, L_8024182C
    if (ctx->r2 == 0) {
        // 0x80241824: addiu       $v0, $v1, 0x20
        ctx->r2 = ADD32(ctx->r3, 0X20);
            goto L_8024182C;
    }
    // 0x80241824: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x80241828: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
L_8024182C:
    // 0x8024182C: jal         0x800A3450
    // 0x80241830: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80241830: nop

    after_0:
    // 0x80241834: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x80241838: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8024183C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80241840: jal         0x800A3450
    // 0x80241844: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80241844: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_1:
    // 0x80241848: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x8024184C: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x80241850: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241854: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80241858: andi        $a0, $a0, 0x1
    ctx->r4 = ctx->r4 & 0X1;
    // 0x8024185C: bne         $a0, $zero, L_8024187C
    if (ctx->r4 != 0) {
        // 0x80241860: sh          $v1, 0x20($s0)
        MEM_H(0X20, ctx->r16) = ctx->r3;
            goto L_8024187C;
    }
    // 0x80241860: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x80241864: jal         0x800A3450
    // 0x80241868: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80241868: nop

    after_2:
    // 0x8024186C: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x80241870: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241874: j           L_80241890
    // 0x80241878: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
        goto L_80241890;
    // 0x80241878: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
L_8024187C:
    // 0x8024187C: jal         0x800A3450
    // 0x80241880: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80241880: nop

    after_3:
    // 0x80241884: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x80241888: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8024188C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_80241890:
    // 0x80241890: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80241894: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x80241898: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8024189C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802418A0: bne         $v0, $zero, L_802418B4
    if (ctx->r2 != 0) {
        // 0x802418A4: lui         $a0, 0xFFFD
        ctx->r4 = S32(0XFFFD << 16);
            goto L_802418B4;
    }
    // 0x802418A4: lui         $a0, 0xFFFD
    ctx->r4 = S32(0XFFFD << 16);
    // 0x802418A8: lhu         $v0, 0x24($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X24);
    // 0x802418AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802418B0: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_802418B4:
    // 0x802418B4: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x802418B8: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x802418BC: ori         $a0, $a0, 0xFDFE
    ctx->r4 = ctx->r4 | 0XFDFE;
    // 0x802418C0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x802418C4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802418C8: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x802418CC: j           L_802418DC
    // 0x802418D0: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
        goto L_802418DC;
    // 0x802418D0: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_802418D4:
    // 0x802418D4: jal         0x8004F5C4
    // 0x802418D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_4;
    // 0x802418D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_802418DC:
    // 0x802418DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802418E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802418E4: jr          $ra
    // 0x802418E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802418E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802304FC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802304FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230500: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230504: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230508: lhu         $v1, 0x362($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X362);
    // 0x8023050C: bne         $a1, $zero, L_8023053C
    if (ctx->r5 != 0) {
        // 0x80230510: addiu       $s0, $a0, 0x348
        ctx->r16 = ADD32(ctx->r4, 0X348);
            goto L_8023053C;
    }
    // 0x80230510: addiu       $s0, $a0, 0x348
    ctx->r16 = ADD32(ctx->r4, 0X348);
    // 0x80230514: jal         0x800A3450
    // 0x80230518: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80230518: nop

    after_0:
    // 0x8023051C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80230520: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x80230524: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80230528: mflo        $v0
    ctx->r2 = lo;
    // 0x8023052C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80230530: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x80230534: j           L_80230560
    // 0x80230538: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
        goto L_80230560;
    // 0x80230538: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
L_8023053C:
    // 0x8023053C: sra         $a1, $a1, 12
    ctx->r5 = S32(SIGNED(ctx->r5) >> 12);
    // 0x80230540: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x80230544: bnel        $v0, $zero, L_8023054C
    if (ctx->r2 != 0) {
        // 0x80230548: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_8023054C;
    }
    goto skip_0;
    // 0x80230548: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    skip_0:
L_8023054C:
    // 0x8023054C: andi        $v0, $a1, 0x2
    ctx->r2 = ctx->r5 & 0X2;
    // 0x80230550: beq         $v0, $zero, L_80230560
    if (ctx->r2 == 0) {
        // 0x80230554: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_80230560;
    }
    // 0x80230554: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80230558: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023055C: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_80230560:
    // 0x80230560: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x80230564: sh          $v1, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r3;
    // 0x80230568: sh          $zero, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = 0;
    // 0x8023056C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230570: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230574: jr          $ra
    // 0x80230578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232E40_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232E40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232E44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232E48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232E4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232E50: lhu         $v0, 0x32C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32C);
    // 0x80232E54: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80232E58: beq         $v0, $zero, L_80232E68
    if (ctx->r2 == 0) {
        // 0x80232E5C: nop
    
            goto L_80232E68;
    }
    // 0x80232E5C: nop

    // 0x80232E60: jal         0x80233F24
    // 0x80232E64: nop

    func_80233F24_ovl5(rdram, ctx);
        goto after_0;
    // 0x80232E64: nop

    after_0:
L_80232E68:
    // 0x80232E68: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80232E6C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232E70: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232E74: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232E78: lw          $v0, 0x5D50($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5D50);
    // 0x80232E7C: jalr        $v0
    // 0x80232E80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80232E80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80232E84: sw          $zero, 0x340($s0)
    MEM_W(0X340, ctx->r16) = 0;
    // 0x80232E88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232E8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232E90: jr          $ra
    // 0x80232E94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232E94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232450_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232450: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232454: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232458: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023245C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80232460: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80232464: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232468: jal         0x8009A3B4
    // 0x8023246C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023246C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80232470: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80232474: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80232478: jal         0x8009A3B4
    // 0x8023247C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023247C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80232480: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80232484: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80232488: jal         0x8009A3B4
    // 0x8023248C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023248C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80232490: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80232494: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232498: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023249C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802324A0: lw          $v0, 0x5D00($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5D00);
    // 0x802324A4: jalr        $v0
    // 0x802324A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802324A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802324AC: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x802324B0: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802324B4: beq         $v0, $a1, L_802324CC
    if (ctx->r2 == ctx->r5) {
        // 0x802324B8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802324CC;
    }
    // 0x802324B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802324BC: jal         0x80050294
    // 0x802324C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x802324C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x802324C4: j           L_802324D4
    // 0x802324C8: nop

        goto L_802324D4;
    // 0x802324C8: nop

L_802324CC:
    // 0x802324CC: jal         0x8005044C
    // 0x802324D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x802324D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_802324D4:
    // 0x802324D4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802324D8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802324DC: beq         $v0, $zero, L_802324F4
    if (ctx->r2 == 0) {
        // 0x802324E0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802324F4;
    }
    // 0x802324E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802324E4: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x802324E8: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802324EC: jal         0x8003B564
    // 0x802324F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_6;
    // 0x802324F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
L_802324F4:
    // 0x802324F4: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x802324F8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802324FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232500: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232504: jr          $ra
    // 0x80232508: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232508: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226018_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226018: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022601C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226020: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226028: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x8022602C: sltiu       $v0, $v1, 0x17
    ctx->r2 = ctx->r3 < 0X17 ? 1 : 0;
    // 0x80226030: beq         $v0, $zero, L_80226470
    if (ctx->r2 == 0) {
        // 0x80226034: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80226470;
    }
    // 0x80226034: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226038: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022603C: addu        $at, $at, $v0
    gpr jr_addend_80226044 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226040: lw          $v0, 0x6EE0($at)
    ctx->r2 = ADD32(ctx->r1, 0X6EE0);
    // 0x80226044: jr          $v0
    // 0x80226048: nop

    switch (jr_addend_80226044 >> 2) {
        case 0: goto L_8022604C; break;
        case 1: goto L_802260BC; break;
        case 2: goto L_802260E8; break;
        case 3: goto L_80226104; break;
        case 4: goto L_80226148; break;
        case 5: goto L_80226188; break;
        case 6: goto L_802261A4; break;
        case 7: goto L_802261E8; break;
        case 8: goto L_80226228; break;
        case 9: goto L_80226244; break;
        case 10: goto L_80226258; break;
        case 11: goto L_80226274; break;
        case 12: goto L_80226288; break;
        case 13: goto L_802262A4; break;
        case 14: goto L_802262E8; break;
        case 15: goto L_80226314; break;
        case 16: goto L_80226330; break;
        case 17: goto L_80226378; break;
        case 18: goto L_802263A4; break;
        case 19: goto L_802263C0; break;
        case 20: goto L_802263EC; break;
        case 21: goto L_8022640C; break;
        case 22: goto L_8022642C; break;
        default: switch_error(__func__, 0x80226044, 0x80246EE0);
    }
    // 0x80226048: nop

L_8022604C:
    // 0x8022604C: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80226050: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80226054: jalr        $v0
    // 0x80226058: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226058: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022605C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80226060: lb          $v1, -0x3C17($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C17);
    // 0x80226064: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226068: bne         $v1, $v0, L_80226470
    if (ctx->r3 != ctx->r2) {
        // 0x8022606C: nop
    
            goto L_80226470;
    }
    // 0x8022606C: nop

    // 0x80226070: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80226074: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x80226078: beq         $v0, $zero, L_80226470
    if (ctx->r2 == 0) {
        // 0x8022607C: nop
    
            goto L_80226470;
    }
    // 0x8022607C: nop

    // 0x80226080: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x80226084: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x80226088: beq         $v0, $zero, L_80226470
    if (ctx->r2 == 0) {
        // 0x8022608C: nop
    
            goto L_80226470;
    }
    // 0x8022608C: nop

    // 0x80226090: jal         0x80060170
    // 0x80226094: nop

    func_80060170_3B570(rdram, ctx);
        goto after_1;
    // 0x80226094: nop

    after_1:
    // 0x80226098: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022609C: lw          $v0, 0x32F8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X32F8);
    // 0x802260A0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802260A4: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x802260A8: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x802260AC: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802260B0: addiu       $v1, $v1, 0x31B8
    ctx->r3 = ADD32(ctx->r3, 0X31B8);
    // 0x802260B4: j           L_80226420
    // 0x802260B8: sw          $v1, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r3;
        goto L_80226420;
    // 0x802260B8: sw          $v1, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r3;
L_802260BC:
    // 0x802260BC: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x802260C0: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x802260C4: jalr        $v0
    // 0x802260C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x802260C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802260CC: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x802260D0: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x802260D4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802260D8: beq         $v1, $v0, L_8022641C
    if (ctx->r3 == ctx->r2) {
        // 0x802260DC: nop
    
            goto L_8022641C;
    }
    // 0x802260DC: nop

    // 0x802260E0: j           L_80226470
    // 0x802260E4: nop

        goto L_80226470;
    // 0x802260E4: nop

L_802260E8:
    // 0x802260E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802260EC: jal         0x800616FC
    // 0x802260F0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x802260F0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_3:
    // 0x802260F4: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x802260F8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802260FC: j           L_80226420
    // 0x80226100: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_80226420;
    // 0x80226100: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80226104:
    // 0x80226104: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226108: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022610C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80226110: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226114: bne         $v0, $zero, L_80226470
    if (ctx->r2 != 0) {
        // 0x80226118: nop
    
            goto L_80226470;
    }
    // 0x80226118: nop

    // 0x8022611C: jal         0x80060170
    // 0x80226120: nop

    func_80060170_3B570(rdram, ctx);
        goto after_4;
    // 0x80226120: nop

    after_4:
    // 0x80226124: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226128: lw          $v0, 0x32FC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X32FC);
    // 0x8022612C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226130: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80226134: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80226138: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022613C: addiu       $v1, $v1, 0x31B8
    ctx->r3 = ADD32(ctx->r3, 0X31B8);
    // 0x80226140: j           L_80226420
    // 0x80226144: sw          $v1, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r3;
        goto L_80226420;
    // 0x80226144: sw          $v1, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r3;
L_80226148:
    // 0x80226148: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022614C: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x80226150: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226154: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80226158: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022615C: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80226160: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80226164: jalr        $v0
    // 0x80226168: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x80226168: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022616C: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80226170: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80226174: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226178: beq         $v1, $v0, L_8022641C
    if (ctx->r3 == ctx->r2) {
        // 0x8022617C: nop
    
            goto L_8022641C;
    }
    // 0x8022617C: nop

    // 0x80226180: j           L_80226470
    // 0x80226184: nop

        goto L_80226470;
    // 0x80226184: nop

L_80226188:
    // 0x80226188: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022618C: jal         0x800616FC
    // 0x80226190: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_6;
    // 0x80226190: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_6:
    // 0x80226194: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80226198: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022619C: j           L_80226420
    // 0x802261A0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_80226420;
    // 0x802261A0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_802261A4:
    // 0x802261A4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802261A8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802261AC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802261B0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802261B4: bne         $v0, $zero, L_80226470
    if (ctx->r2 != 0) {
        // 0x802261B8: nop
    
            goto L_80226470;
    }
    // 0x802261B8: nop

    // 0x802261BC: jal         0x80060170
    // 0x802261C0: nop

    func_80060170_3B570(rdram, ctx);
        goto after_7;
    // 0x802261C0: nop

    after_7:
    // 0x802261C4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802261C8: lw          $v0, 0x3300($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3300);
    // 0x802261CC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802261D0: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x802261D4: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x802261D8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802261DC: addiu       $v1, $v1, 0x31B8
    ctx->r3 = ADD32(ctx->r3, 0X31B8);
    // 0x802261E0: j           L_80226420
    // 0x802261E4: sw          $v1, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r3;
        goto L_80226420;
    // 0x802261E4: sw          $v1, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r3;
L_802261E8:
    // 0x802261E8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802261EC: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x802261F0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802261F4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802261F8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802261FC: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80226200: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80226204: jalr        $v0
    // 0x80226208: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x80226208: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8022620C: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80226210: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80226214: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226218: beq         $v1, $v0, L_8022641C
    if (ctx->r3 == ctx->r2) {
        // 0x8022621C: nop
    
            goto L_8022641C;
    }
    // 0x8022621C: nop

    // 0x80226220: j           L_80226470
    // 0x80226224: nop

        goto L_80226470;
    // 0x80226224: nop

L_80226228:
    // 0x80226228: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022622C: jal         0x800616FC
    // 0x80226230: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_9;
    // 0x80226230: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_9:
    // 0x80226234: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80226238: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022623C: j           L_80226420
    // 0x80226240: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_80226420;
    // 0x80226240: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80226244:
    // 0x80226244: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226248: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022624C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80226250: j           L_80226414
    // 0x80226254: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
        goto L_80226414;
    // 0x80226254: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_80226258:
    // 0x80226258: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022625C: jal         0x800616FC
    // 0x80226260: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_10;
    // 0x80226260: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_10:
    // 0x80226264: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80226268: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022626C: j           L_80226420
    // 0x80226270: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_80226420;
    // 0x80226270: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80226274:
    // 0x80226274: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226278: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022627C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80226280: j           L_80226414
    // 0x80226284: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
        goto L_80226414;
    // 0x80226284: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_80226288:
    // 0x80226288: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022628C: jal         0x800616FC
    // 0x80226290: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_11;
    // 0x80226290: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_11:
    // 0x80226294: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80226298: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022629C: j           L_80226420
    // 0x802262A0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_80226420;
    // 0x802262A0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_802262A4:
    // 0x802262A4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802262A8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802262AC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802262B0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802262B4: bne         $v0, $zero, L_80226470
    if (ctx->r2 != 0) {
        // 0x802262B8: nop
    
            goto L_80226470;
    }
    // 0x802262B8: nop

    // 0x802262BC: jal         0x80060170
    // 0x802262C0: nop

    func_80060170_3B570(rdram, ctx);
        goto after_12;
    // 0x802262C0: nop

    after_12:
    // 0x802262C4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802262C8: lw          $v0, 0x3304($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3304);
    // 0x802262CC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802262D0: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x802262D4: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x802262D8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802262DC: addiu       $v1, $v1, 0x31B8
    ctx->r3 = ADD32(ctx->r3, 0X31B8);
    // 0x802262E0: j           L_80226420
    // 0x802262E4: sw          $v1, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r3;
        goto L_80226420;
    // 0x802262E4: sw          $v1, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r3;
L_802262E8:
    // 0x802262E8: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x802262EC: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x802262F0: jalr        $v0
    // 0x802262F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x802262F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_13:
    // 0x802262F8: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x802262FC: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80226300: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226304: beq         $v1, $v0, L_8022641C
    if (ctx->r3 == ctx->r2) {
        // 0x80226308: nop
    
            goto L_8022641C;
    }
    // 0x80226308: nop

    // 0x8022630C: j           L_80226470
    // 0x80226310: nop

        goto L_80226470;
    // 0x80226310: nop

L_80226314:
    // 0x80226314: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226318: jal         0x800616FC
    // 0x8022631C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_14;
    // 0x8022631C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_14:
    // 0x80226320: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80226324: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80226328: j           L_80226420
    // 0x8022632C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_80226420;
    // 0x8022632C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80226330:
    // 0x80226330: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226334: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80226338: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022633C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226340: bne         $v0, $zero, L_80226470
    if (ctx->r2 != 0) {
        // 0x80226344: nop
    
            goto L_80226470;
    }
    // 0x80226344: nop

    // 0x80226348: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022634C: jal         0x80060170
    // 0x80226350: sb          $zero, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = 0;
    func_80060170_3B570(rdram, ctx);
        goto after_15;
    // 0x80226350: sb          $zero, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = 0;
    after_15:
    // 0x80226354: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226358: lw          $v0, 0x32F8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X32F8);
    // 0x8022635C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226360: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80226364: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80226368: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022636C: addiu       $v1, $v1, 0x31B8
    ctx->r3 = ADD32(ctx->r3, 0X31B8);
    // 0x80226370: j           L_80226420
    // 0x80226374: sw          $v1, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r3;
        goto L_80226420;
    // 0x80226374: sw          $v1, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r3;
L_80226378:
    // 0x80226378: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x8022637C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80226380: jalr        $v0
    // 0x80226384: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_16;
    // 0x80226384: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
    // 0x80226388: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x8022638C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80226390: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226394: beq         $v1, $v0, L_8022641C
    if (ctx->r3 == ctx->r2) {
        // 0x80226398: nop
    
            goto L_8022641C;
    }
    // 0x80226398: nop

    // 0x8022639C: j           L_80226470
    // 0x802263A0: nop

        goto L_80226470;
    // 0x802263A0: nop

L_802263A4:
    // 0x802263A4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802263A8: jal         0x800616FC
    // 0x802263AC: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_17;
    // 0x802263AC: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_17:
    // 0x802263B0: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x802263B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802263B8: j           L_80226420
    // 0x802263BC: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_80226420;
    // 0x802263BC: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_802263C0:
    // 0x802263C0: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802263C4: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x802263C8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802263CC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802263D0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802263D4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802263D8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802263DC: bne         $v0, $zero, L_80226470
    if (ctx->r2 != 0) {
        // 0x802263E0: addiu       $v0, $zero, 0x15
        ctx->r2 = ADD32(0, 0X15);
            goto L_80226470;
    }
    // 0x802263E0: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x802263E4: j           L_80226470
    // 0x802263E8: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80226470;
    // 0x802263E8: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_802263EC:
    // 0x802263EC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802263F0: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802263F4: bne         $v0, $zero, L_80226470
    if (ctx->r2 != 0) {
        // 0x802263F8: nop
    
            goto L_80226470;
    }
    // 0x802263F8: nop

    // 0x802263FC: jal         0x80036E48
    // 0x80226400: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80036E48_12248(rdram, ctx);
        goto after_18;
    // 0x80226400: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_18:
    // 0x80226404: j           L_8022641C
    // 0x80226408: nop

        goto L_8022641C;
    // 0x80226408: nop

L_8022640C:
    // 0x8022640C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226410: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
L_80226414:
    // 0x80226414: bne         $v0, $zero, L_80226470
    if (ctx->r2 != 0) {
        // 0x80226418: nop
    
            goto L_80226470;
    }
    // 0x80226418: nop

L_8022641C:
    // 0x8022641C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
L_80226420:
    // 0x80226420: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226424: j           L_80226470
    // 0x80226428: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80226470;
    // 0x80226428: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_8022642C:
    // 0x8022642C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226430: jal         0x80070050
    // 0x80226434: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_19;
    // 0x80226434: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_19:
    // 0x80226438: jal         0x80054578
    // 0x8022643C: nop

    func_80054578_2F978(rdram, ctx);
        goto after_20;
    // 0x8022643C: nop

    after_20:
    // 0x80226440: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226444: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226448: jal         0x80034844
    // 0x8022644C: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_21;
    // 0x8022644C: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_21:
    // 0x80226450: jal         0x8004F418
    // 0x80226454: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    func_8004F418_2A818(rdram, ctx);
        goto after_22;
    // 0x80226454: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    after_22:
    // 0x80226458: jal         0x8004F418
    // 0x8022645C: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    func_8004F418_2A818(rdram, ctx);
        goto after_23;
    // 0x8022645C: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    after_23:
    // 0x80226460: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80226464: jal         0x80225CEC
    // 0x80226468: addiu       $a0, $a0, 0x3180
    ctx->r4 = ADD32(ctx->r4, 0X3180);
    func_80225CEC_ovl5(rdram, ctx);
        goto after_24;
    // 0x80226468: addiu       $a0, $a0, 0x3180
    ctx->r4 = ADD32(ctx->r4, 0X3180);
    after_24:
    // 0x8022646C: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_80226470:
    // 0x80226470: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226474: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80226478: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x8022647C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226480: beq         $v0, $zero, L_802264C8
    if (ctx->r2 == 0) {
        // 0x80226484: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802264C8;
    }
    // 0x80226484: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226488: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022648C: bne         $v1, $v0, L_802264AC
    if (ctx->r3 != ctx->r2) {
        // 0x80226490: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802264AC;
    }
    // 0x80226490: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226494: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80226498: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022649C: sb          $v0, 0xAC($v1)
    MEM_B(0XAC, ctx->r3) = ctx->r2;
    // 0x802264A0: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x802264A4: j           L_802264C4
    // 0x802264A8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_802264C4;
    // 0x802264A8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802264AC:
    // 0x802264AC: bne         $v1, $v0, L_802264C8
    if (ctx->r3 != ctx->r2) {
        // 0x802264B0: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_802264C8;
    }
    // 0x802264B0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802264B4: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x802264B8: sb          $v0, 0xAC($v1)
    MEM_B(0XAC, ctx->r3) = ctx->r2;
    // 0x802264BC: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x802264C0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802264C4:
    // 0x802264C4: sb          $v0, 0xAD($v1)
    MEM_B(0XAD, ctx->r3) = ctx->r2;
L_802264C8:
    // 0x802264C8: jal         0x8006072C
    // 0x802264CC: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_25;
    // 0x802264CC: nop

    after_25:
    // 0x802264D0: beq         $v0, $zero, L_80226534
    if (ctx->r2 == 0) {
        // 0x802264D4: nop
    
            goto L_80226534;
    }
    // 0x802264D4: nop

    // 0x802264D8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802264DC: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802264E0: bne         $v0, $zero, L_80226534
    if (ctx->r2 != 0) {
        // 0x802264E4: nop
    
            goto L_80226534;
    }
    // 0x802264E4: nop

    // 0x802264E8: jal         0x80036E48
    // 0x802264EC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80036E48_12248(rdram, ctx);
        goto after_26;
    // 0x802264EC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_26:
    // 0x802264F0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802264F4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802264F8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802264FC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226500: beq         $v0, $zero, L_80226520
    if (ctx->r2 == 0) {
        // 0x80226504: nop
    
            goto L_80226520;
    }
    // 0x80226504: nop

    // 0x80226508: jal         0x80061798
    // 0x8022650C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_27;
    // 0x8022650C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_27:
    // 0x80226510: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226514: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226518: jal         0x80036B00
    // 0x8022651C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_28;
    // 0x8022651C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_28:
L_80226520:
    // 0x80226520: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80226524: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x80226528: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
    // 0x8022652C: ori         $v0, $v0, 0x81
    ctx->r2 = ctx->r2 | 0X81;
    // 0x80226530: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_80226534:
    // 0x80226534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226538: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022653C: jr          $ra
    // 0x80226540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226E80_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E80: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226E84: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80226E88: addiu       $a0, $a0, 0x73D0
    ctx->r4 = ADD32(ctx->r4, 0X73D0);
    // 0x80226E8C: addiu       $v1, $a0, 0x3
    ctx->r3 = ADD32(ctx->r4, 0X3);
L_80226E90:
    // 0x80226E90: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x80226E94: sb          $a1, -0x2($v1)
    MEM_B(-0X2, ctx->r3) = ctx->r5;
    // 0x80226E98: sb          $zero, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = 0;
    // 0x80226E9C: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x80226EA0: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x80226EA4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80226EA8: slti        $v0, $a1, 0x8
    ctx->r2 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x80226EAC: bne         $v0, $zero, L_80226E90
    if (ctx->r2 != 0) {
        // 0x80226EB0: addiu       $a0, $a0, 0xC
        ctx->r4 = ADD32(ctx->r4, 0XC);
            goto L_80226E90;
    }
    // 0x80226EB0: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x80226EB4: jr          $ra
    // 0x80226EB8: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x80226EB8: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x80226EBC: nop

;}
RECOMP_FUNC void func_80231304_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231304: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231308: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023130C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231310: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231314: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80231318: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023131C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80231320: jal         0x8004D5D4
    // 0x80231324: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80231324: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80231328: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8023132C: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80231330: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80231334: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x80231338: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8023133C: lhu         $a2, 0x54($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X54);
    // 0x80231340: lhu         $a3, 0x56($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X56);
    // 0x80231344: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80231348: lhu         $t0, 0x58($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X58);
    // 0x8023134C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231350: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80231354: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x80231358: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023135C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80231360: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x80231364: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80231368: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8023136C: lw          $t3, 0x24($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X24);
    // 0x80231370: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80231374: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x80231378: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8023137C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80231380: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80231384: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80231388: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8023138C: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80231390: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80231394: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80231398: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8023139C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802313A0: sh          $a1, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r5;
    // 0x802313A4: sh          $a2, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r6;
    // 0x802313A8: sh          $a3, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r7;
    // 0x802313AC: sh          $t0, 0x60($s0)
    MEM_H(0X60, ctx->r16) = ctx->r8;
    // 0x802313B0: sh          $v1, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r3;
    // 0x802313B4: sh          $a0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r4;
    // 0x802313B8: sw          $t1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r9;
    // 0x802313BC: sw          $t2, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r10;
    // 0x802313C0: sw          $t3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r11;
    // 0x802313C4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802313C8: lb          $a1, 0xE($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XE);
    // 0x802313CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802313D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802313D4: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x802313D8: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x802313DC: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x802313E0: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x802313E4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802313E8: jal         0x80050294
    // 0x802313EC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802313EC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_1:
    // 0x802313F0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802313F4: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x802313F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802313FC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80231400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231404: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231408: jr          $ra
    // 0x8023140C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023140C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802416D4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802416D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802416D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802416DC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802416E0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802416E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802416E8: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x802416EC: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x802416F0: beq         $v0, $zero, L_802417A8
    if (ctx->r2 == 0) {
        // 0x802416F4: andi        $v0, $v1, 0x3
        ctx->r2 = ctx->r3 & 0X3;
            goto L_802417A8;
    }
    // 0x802416F4: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x802416F8: bne         $v0, $zero, L_8024178C
    if (ctx->r2 != 0) {
        // 0x802416FC: nop
    
            goto L_8024178C;
    }
    // 0x802416FC: nop

    // 0x80241700: jal         0x8004F144
    // 0x80241704: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80241704: nop

    after_0:
    // 0x80241708: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8024170C: beq         $s0, $zero, L_8024178C
    if (ctx->r16 == 0) {
        // 0x80241710: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8024178C;
    }
    // 0x80241710: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80241714: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80241718: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8024171C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80241720: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80241724: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80241728: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x8024172C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80241730: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80241734: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80241738: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8024173C: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x80241740: lhu         $v0, 0x20($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X20);
    // 0x80241744: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x80241748: lhu         $v0, 0x1C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1C);
    // 0x8024174C: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x80241750: ori         $v1, $v1, 0x4E
    ctx->r3 = ctx->r3 | 0X4E;
    // 0x80241754: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x80241758: lhu         $a0, 0x1E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X1E);
    // 0x8024175C: lui         $v0, 0x2E40
    ctx->r2 = S32(0X2E40 << 16);
    // 0x80241760: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
    // 0x80241764: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80241768: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8024176C: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    // 0x80241770: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x80241774: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x80241778: jal         0x800A3450
    // 0x8024177C: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8024177C: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    after_1:
    // 0x80241780: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241784: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80241788: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_8024178C:
    // 0x8024178C: jal         0x800A3450
    // 0x80241790: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80241790: nop

    after_2:
    // 0x80241794: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80241798: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8024179C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802417A0: j           L_802417B0
    // 0x802417A4: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
        goto L_802417B0;
    // 0x802417A4: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
L_802417A8:
    // 0x802417A8: jal         0x8004F5C4
    // 0x802417AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_3;
    // 0x802417AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
L_802417B0:
    // 0x802417B0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802417B4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802417B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802417BC: jr          $ra
    // 0x802417C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802417C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802364CC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802364CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802364D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802364D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802364D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802364DC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802364E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802364E4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802364E8: jal         0x8004D5D4
    // 0x802364EC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802364EC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x802364F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802364F4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802364F8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802364FC: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80236500: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80236504: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80236508: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8023650C: jal         0x8003E934
    // 0x80236510: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80236510: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x80236514: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80236518: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023651C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80236520: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80236524: addiu       $v0, $v0, 0x5F58
    ctx->r2 = ADD32(ctx->r2, 0X5F58);
    // 0x80236528: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8023652C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80236530: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80236534: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80236538: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8023653C: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80236540: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80236544: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236548: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023654C: jr          $ra
    // 0x80236550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227DD0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227DD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227DD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227DD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227DDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227DE0: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80227DE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227DE8: beq         $v1, $v0, L_80227E3C
    if (ctx->r3 == ctx->r2) {
        // 0x80227DEC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80227E3C;
    }
    // 0x80227DEC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80227DF0: beql        $v0, $zero, L_80227E08
    if (ctx->r2 == 0) {
        // 0x80227DF4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227E08;
    }
    goto skip_0;
    // 0x80227DF4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80227DF8: beq         $v1, $zero, L_80227E18
    if (ctx->r3 == 0) {
        // 0x80227DFC: nop
    
            goto L_80227E18;
    }
    // 0x80227DFC: nop

    // 0x80227E00: j           L_80227E7C
    // 0x80227E04: nop

        goto L_80227E7C;
    // 0x80227E04: nop

L_80227E08:
    // 0x80227E08: beq         $v1, $v0, L_80227E64
    if (ctx->r3 == ctx->r2) {
        // 0x80227E0C: nop
    
            goto L_80227E64;
    }
    // 0x80227E0C: nop

    // 0x80227E10: j           L_80227E7C
    // 0x80227E14: nop

        goto L_80227E7C;
    // 0x80227E14: nop

L_80227E18:
    // 0x80227E18: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80227E1C: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80227E20: bne         $v0, $zero, L_80227E7C
    if (ctx->r2 != 0) {
        // 0x80227E24: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_80227E7C;
    }
    // 0x80227E24: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80227E28: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227E2C: jal         0x8002A2F8
    // 0x80227E30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x80227E30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80227E34: j           L_80227E54
    // 0x80227E38: nop

        goto L_80227E54;
    // 0x80227E38: nop

L_80227E3C:
    // 0x80227E3C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80227E40: slti        $v0, $v0, 0x65
    ctx->r2 = SIGNED(ctx->r2) < 0X65 ? 1 : 0;
    // 0x80227E44: bne         $v0, $zero, L_80227E7C
    if (ctx->r2 != 0) {
        // 0x80227E48: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_80227E7C;
    }
    // 0x80227E48: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80227E4C: jal         0x80036B1C
    // 0x80227E50: ori         $a0, $a0, 0x3700
    ctx->r4 = ctx->r4 | 0X3700;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_1;
    // 0x80227E50: ori         $a0, $a0, 0x3700
    ctx->r4 = ctx->r4 | 0X3700;
    after_1:
L_80227E54:
    // 0x80227E54: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80227E58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227E5C: j           L_80227E7C
    // 0x80227E60: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_80227E7C;
    // 0x80227E60: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80227E64:
    // 0x80227E64: jal         0x80036B7C
    // 0x80227E68: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_2;
    // 0x80227E68: nop

    after_2:
    // 0x80227E6C: beq         $v0, $zero, L_80227E7C
    if (ctx->r2 == 0) {
        // 0x80227E70: nop
    
            goto L_80227E7C;
    }
    // 0x80227E70: nop

    // 0x80227E74: jal         0x800600F8
    // 0x80227E78: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_3;
    // 0x80227E78: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    after_3:
L_80227E7C:
    // 0x80227E7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227E80: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227E84: jr          $ra
    // 0x80227E88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227E88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238F3C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238F3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80238F40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238F44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238F48: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80238F4C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80238F50: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80238F54: bne         $v0, $zero, L_80238F8C
    if (ctx->r2 != 0) {
        // 0x80238F58: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80238F8C;
    }
    // 0x80238F58: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80238F5C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80238F60: jal         0x80050294
    // 0x80238F64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80238F64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80238F68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238F6C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238F70: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x80238F74: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80238F78: jal         0x80239590
    // 0x80238F7C: sb          $v0, 0x118($s0)
    MEM_B(0X118, ctx->r16) = ctx->r2;
    func_80239590_ovl5(rdram, ctx);
        goto after_1;
    // 0x80238F7C: sb          $v0, 0x118($s0)
    MEM_B(0X118, ctx->r16) = ctx->r2;
    after_1:
    // 0x80238F80: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80238F84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238F88: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80238F8C:
    // 0x80238F8C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80238F90: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80238F94: addiu       $v0, $zero, 0xF2
    ctx->r2 = ADD32(0, 0XF2);
    // 0x80238F98: bne         $v1, $v0, L_80238FAC
    if (ctx->r3 != ctx->r2) {
        // 0x80238F9C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238FAC;
    }
    // 0x80238F9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238FA0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238FA4: jal         0x80239590
    // 0x80238FA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80239590_ovl5(rdram, ctx);
        goto after_2;
    // 0x80238FA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
L_80238FAC:
    // 0x80238FAC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80238FB0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80238FB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238FB8: jr          $ra
    // 0x80238FBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80238FBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802360D4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802360D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802360D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802360DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802360E0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802360E4: lh          $a0, 0x74D0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X74D0);
    // 0x802360E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802360EC: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802360F0: jal         0x8004FA7C
    // 0x802360F4: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x802360F4: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    after_0:
    // 0x802360F8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802360FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236100: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80236104: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236108: bne         $v0, $zero, L_80236158
    if (ctx->r2 != 0) {
        // 0x8023610C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80236158;
    }
    // 0x8023610C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80236110: jal         0x8003516C
    // 0x80236114: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x80236114: nop

    after_1:
    // 0x80236118: bne         $v0, $zero, L_80236158
    if (ctx->r2 != 0) {
        // 0x8023611C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80236158;
    }
    // 0x8023611C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80236120: lb          $a3, 0xC($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XC);
    // 0x80236124: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80236128: jal         0x800610AC
    // 0x8023612C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_2;
    // 0x8023612C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80236130: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236134: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80236138: jal         0x80050294
    // 0x8023613C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8023613C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80236140: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80236144: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80236148: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8023614C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236150: j           L_80236160
    // 0x80236154: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80236160;
    // 0x80236154: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80236158:
    // 0x80236158: jal         0x8005044C
    // 0x8023615C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x8023615C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80236160:
    // 0x80236160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236164: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236168: jr          $ra
    // 0x8023616C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023616C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228C98_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C98: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80228C9C: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80228CA0: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x80228CA4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80228CA8: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80228CAC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80228CB0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80228CB4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228CB8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228CBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228CC0: lw          $v0, 0x10($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X10);
    // 0x80228CC4: bne         $v0, $zero, L_80228DE4
    if (ctx->r2 != 0) {
        // 0x80228CC8: addiu       $v0, $zero, -0x4E
        ctx->r2 = ADD32(0, -0X4E);
            goto L_80228DE4;
    }
    // 0x80228CC8: addiu       $v0, $zero, -0x4E
    ctx->r2 = ADD32(0, -0X4E);
    // 0x80228CCC: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80228CD0: addiu       $s0, $s0, 0x4990
    ctx->r16 = ADD32(ctx->r16, 0X4990);
    // 0x80228CD4: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80228CD8: addiu       $s3, $zero, -0x51
    ctx->r19 = ADD32(0, -0X51);
    // 0x80228CDC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228CE0: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x80228CE4: lui         $v0, 0xFFB2
    ctx->r2 = S32(0XFFB2 << 16);
    // 0x80228CE8: lui         $s4, 0xFFFF
    ctx->r20 = S32(0XFFFF << 16);
    // 0x80228CEC: lui         $s5, 0xFFAF
    ctx->r21 = S32(0XFFAF << 16);
    // 0x80228CF0: addiu       $s1, $zero, 0x800
    ctx->r17 = ADD32(0, 0X800);
    // 0x80228CF4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228CF8: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x80228CFC: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80228D00: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228D04: sh          $s2, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r18;
    // 0x80228D08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228D0C: sh          $s3, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r19;
    // 0x80228D10: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228D14: sw          $s4, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r20;
    // 0x80228D18: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228D1C: sw          $s5, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r21;
    // 0x80228D20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228D24: sh          $s1, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r17;
    // 0x80228D28: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228D2C: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80228D30: jal         0x8005FA7C
    // 0x80228D34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x80228D34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80228D38: lw          $v0, 0x24($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X24);
    // 0x80228D3C: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x80228D40: lw          $v1, 0x24($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X24);
    // 0x80228D44: addiu       $v0, $zero, 0x51
    ctx->r2 = ADD32(0, 0X51);
    // 0x80228D48: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x80228D4C: lw          $v0, 0x24($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X24);
    // 0x80228D50: sh          $s2, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r18;
    // 0x80228D54: lw          $v0, 0x24($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X24);
    // 0x80228D58: sh          $s3, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r19;
    // 0x80228D5C: lw          $v1, 0x24($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X24);
    // 0x80228D60: lui         $v0, 0x51
    ctx->r2 = S32(0X51 << 16);
    // 0x80228D64: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80228D68: lw          $v0, 0x24($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X24);
    // 0x80228D6C: sw          $s4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r20;
    // 0x80228D70: lw          $v0, 0x24($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X24);
    // 0x80228D74: sw          $s5, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r21;
    // 0x80228D78: lw          $v0, 0x24($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X24);
    // 0x80228D7C: sh          $s1, 0x56($v0)
    MEM_H(0X56, ctx->r2) = ctx->r17;
    // 0x80228D80: lw          $v0, 0x24($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X24);
    // 0x80228D84: sb          $zero, 0xE($v0)
    MEM_B(0XE, ctx->r2) = 0;
    // 0x80228D88: lw          $v1, 0x24($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X24);
    // 0x80228D8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228D90: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x80228D94: lw          $v0, 0x24($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X24);
    // 0x80228D98: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228D9C: jal         0x8005FA7C
    // 0x80228DA0: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x80228DA0: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
    after_1:
    // 0x80228DA4: jal         0x8005FA7C
    // 0x80228DA8: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x80228DA8: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    after_2:
    // 0x80228DAC: jal         0x8005FA7C
    // 0x80228DB0: addiu       $a0, $s0, 0x3C
    ctx->r4 = ADD32(ctx->r16, 0X3C);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_3;
    // 0x80228DB0: addiu       $a0, $s0, 0x3C
    ctx->r4 = ADD32(ctx->r16, 0X3C);
    after_3:
    // 0x80228DB4: lw          $v0, 0x28($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X28);
    // 0x80228DB8: sh          $zero, 0x56($v0)
    MEM_H(0X56, ctx->r2) = 0;
    // 0x80228DBC: lw          $v0, 0x28($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X28);
    // 0x80228DC0: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
    // 0x80228DC4: lw          $v0, 0x2C($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X2C);
    // 0x80228DC8: sh          $zero, 0x56($v0)
    MEM_H(0X56, ctx->r2) = 0;
    // 0x80228DCC: lw          $v0, 0x2C($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X2C);
    // 0x80228DD0: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
    // 0x80228DD4: lw          $v0, 0x30($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X30);
    // 0x80228DD8: sh          $s1, 0x56($v0)
    MEM_H(0X56, ctx->r2) = ctx->r17;
    // 0x80228DDC: lw          $v0, 0x30($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X30);
    // 0x80228DE0: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
L_80228DE4:
    // 0x80228DE4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80228DE8: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80228DEC: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80228DF0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80228DF4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80228DF8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228DFC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228E00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228E04: jr          $ra
    // 0x80228E08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80228E08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802382D0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802382D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802382D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802382D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802382DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802382E0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802382E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802382E8: jal         0x8004DA90
    // 0x802382EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x802382EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x802382F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802382F4: lh          $v1, 0x46($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X46);
    // 0x802382F8: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x802382FC: lhu         $a1, 0x44($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X44);
    // 0x80238300: lhu         $t0, 0x4C($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X4C);
    // 0x80238304: lhu         $a2, 0x46($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X46);
    // 0x80238308: lhu         $t1, 0x4E($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X4E);
    // 0x8023830C: lhu         $a3, 0x48($a0)
    ctx->r7 = MEM_HU(ctx->r4, 0X48);
    // 0x80238310: lhu         $t2, 0x50($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X50);
    // 0x80238314: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x80238318: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023831C: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x80238320: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80238324: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x80238328: addu        $a2, $a2, $t1
    ctx->r6 = ADD32(ctx->r6, ctx->r9);
    // 0x8023832C: addu        $a3, $a3, $t2
    ctx->r7 = ADD32(ctx->r7, ctx->r10);
    // 0x80238330: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x80238334: sh          $a1, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r5;
    // 0x80238338: sh          $a2, 0x46($a0)
    MEM_H(0X46, ctx->r4) = ctx->r6;
    // 0x8023833C: jal         0x8005044C
    // 0x80238340: sh          $a3, 0x48($a0)
    MEM_H(0X48, ctx->r4) = ctx->r7;
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80238340: sh          $a3, 0x48($a0)
    MEM_H(0X48, ctx->r4) = ctx->r7;
    after_1:
    // 0x80238344: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238348: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023834C: jr          $ra
    // 0x80238350: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238350: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BF00_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BF00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BF04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BF08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BF0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BF10: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022BF14: sltiu       $v0, $v1, 0xC
    ctx->r2 = ctx->r3 < 0XC ? 1 : 0;
    // 0x8022BF18: beq         $v0, $zero, L_8022C110
    if (ctx->r2 == 0) {
        // 0x8022BF1C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022C110;
    }
    // 0x8022BF1C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022BF20: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022BF24: addu        $at, $at, $v0
    gpr jr_addend_8022BF2C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BF28: lw          $v0, 0x7100($at)
    ctx->r2 = ADD32(ctx->r1, 0X7100);
    // 0x8022BF2C: jr          $v0
    // 0x8022BF30: nop

    switch (jr_addend_8022BF2C >> 2) {
        case 0: goto L_8022BF34; break;
        case 1: goto L_8022BFD0; break;
        case 2: goto L_8022C004; break;
        case 3: goto L_8022C110; break;
        case 4: goto L_8022C110; break;
        case 5: goto L_8022C110; break;
        case 6: goto L_8022C110; break;
        case 7: goto L_8022C110; break;
        case 8: goto L_8022C110; break;
        case 9: goto L_8022C110; break;
        case 10: goto L_8022C090; break;
        case 11: goto L_8022C0D8; break;
        default: switch_error(__func__, 0x8022BF2C, 0x80247100);
    }
    // 0x8022BF30: nop

L_8022BF34:
    // 0x8022BF34: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022BF38: jal         0x8006FF84
    // 0x8022BF3C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8022BF3C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x8022BF40: beq         $v0, $zero, L_8022C110
    if (ctx->r2 == 0) {
        // 0x8022BF44: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022C110;
    }
    // 0x8022BF44: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022BF48: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022BF4C: jal         0x8005F6B4
    // 0x8022BF50: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_1;
    // 0x8022BF50: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022BF54: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022BF58: addiu       $a0, $a0, 0x5390
    ctx->r4 = ADD32(ctx->r4, 0X5390);
    // 0x8022BF5C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022BF60: addiu       $v0, $v0, 0x52D0
    ctx->r2 = ADD32(ctx->r2, 0X52D0);
    // 0x8022BF64: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022BF68: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x8022BF6C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022BF70: addiu       $v0, $v0, 0x53E0
    ctx->r2 = ADD32(ctx->r2, 0X53E0);
    // 0x8022BF74: jal         0x8005FA7C
    // 0x8022BF78: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x8022BF78: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022BF7C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022BF80: jal         0x8005FA7C
    // 0x8022BF84: addiu       $a0, $a0, 0x53A4
    ctx->r4 = ADD32(ctx->r4, 0X53A4);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_3;
    // 0x8022BF84: addiu       $a0, $a0, 0x53A4
    ctx->r4 = ADD32(ctx->r4, 0X53A4);
    after_3:
    // 0x8022BF88: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022BF8C: jal         0x8005FA7C
    // 0x8022BF90: addiu       $a0, $a0, 0x53B8
    ctx->r4 = ADD32(ctx->r4, 0X53B8);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_4;
    // 0x8022BF90: addiu       $a0, $a0, 0x53B8
    ctx->r4 = ADD32(ctx->r4, 0X53B8);
    after_4:
    // 0x8022BF94: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022BF98: jal         0x8005FA7C
    // 0x8022BF9C: addiu       $a0, $a0, 0x53CC
    ctx->r4 = ADD32(ctx->r4, 0X53CC);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_5;
    // 0x8022BF9C: addiu       $a0, $a0, 0x53CC
    ctx->r4 = ADD32(ctx->r4, 0X53CC);
    after_5:
    // 0x8022BFA0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022BFA4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022BFA8: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x8022BFAC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022BFB0: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x8022BFB4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022BFB8: jal         0x8005FB90
    // 0x8022BFBC: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
    func_8005FB90_3AF90(rdram, ctx);
        goto after_6;
    // 0x8022BFBC: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
    after_6:
    // 0x8022BFC0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022BFC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BFC8: j           L_8022C110
    // 0x8022BFCC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_8022C110;
    // 0x8022BFCC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022BFD0:
    // 0x8022BFD0: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x8022BFD4: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8022BFD8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022BFDC: bne         $v1, $v0, L_8022BFF0
    if (ctx->r3 != ctx->r2) {
        // 0x8022BFE0: nop
    
            goto L_8022BFF0;
    }
    // 0x8022BFE0: nop

    // 0x8022BFE4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022BFE8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BFEC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022BFF0:
    // 0x8022BFF0: jal         0x8006072C
    // 0x8022BFF4: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_7;
    // 0x8022BFF4: nop

    after_7:
    // 0x8022BFF8: beq         $v0, $zero, L_8022C004
    if (ctx->r2 == 0) {
        // 0x8022BFFC: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022C004;
    }
    // 0x8022BFFC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022C000: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022C004:
    // 0x8022C004: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C008: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022C00C: beq         $v1, $v0, L_8022C024
    if (ctx->r3 == ctx->r2) {
        // 0x8022C010: nop
    
            goto L_8022C024;
    }
    // 0x8022C010: nop

    // 0x8022C014: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x8022C018: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x8022C01C: jalr        $v0
    // 0x8022C020: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x8022C020: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_8022C024:
    // 0x8022C024: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022C028: lb          $v0, 0x49BC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X49BC);
    // 0x8022C02C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C030: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022C034: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C038: lw          $v0, 0x5400($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5400);
    // 0x8022C03C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022C040: jalr        $v0
    // 0x8022C044: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x8022C044: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_9:
    // 0x8022C048: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022C04C: addiu       $a0, $a0, 0x4DD8
    ctx->r4 = ADD32(ctx->r4, 0X4DD8);
    // 0x8022C050: jal         0x8004DD04
    // 0x8022C054: addiu       $a1, $a0, 0x10
    ctx->r5 = ADD32(ctx->r4, 0X10);
    func_8004DD04_29104(rdram, ctx);
        goto after_10;
    // 0x8022C054: addiu       $a1, $a0, 0x10
    ctx->r5 = ADD32(ctx->r4, 0X10);
    after_10:
    // 0x8022C058: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022C05C: addiu       $a0, $a0, 0x49CC
    ctx->r4 = ADD32(ctx->r4, 0X49CC);
    // 0x8022C060: jal         0x8004DD04
    // 0x8022C064: addiu       $a1, $a0, -0x8
    ctx->r5 = ADD32(ctx->r4, -0X8);
    func_8004DD04_29104(rdram, ctx);
        goto after_11;
    // 0x8022C064: addiu       $a1, $a0, -0x8
    ctx->r5 = ADD32(ctx->r4, -0X8);
    after_11:
    // 0x8022C068: jal         0x8005FB90
    // 0x8022C06C: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_12;
    // 0x8022C06C: nop

    after_12:
    // 0x8022C070: jal         0x80060018
    // 0x8022C074: nop

    func_80060018_3B418(rdram, ctx);
        goto after_13;
    // 0x8022C074: nop

    after_13:
    // 0x8022C078: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022C07C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C080: bne         $v1, $v0, L_8022C110
    if (ctx->r3 != ctx->r2) {
        // 0x8022C084: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_8022C110;
    }
    // 0x8022C084: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022C088: j           L_8022C110
    // 0x8022C08C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_8022C110;
    // 0x8022C08C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022C090:
    // 0x8022C090: jal         0x80061798
    // 0x8022C094: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_14;
    // 0x8022C094: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_14:
    // 0x8022C098: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022C09C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022C0A0: jal         0x80036B00
    // 0x8022C0A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_15;
    // 0x8022C0A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_15:
    // 0x8022C0A8: jal         0x80054578
    // 0x8022C0AC: nop

    func_80054578_2F978(rdram, ctx);
        goto after_16;
    // 0x8022C0AC: nop

    after_16:
    // 0x8022C0B0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022C0B4: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x8022C0B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C0BC: jal         0x8004F418
    // 0x8022C0C0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    func_8004F418_2A818(rdram, ctx);
        goto after_17;
    // 0x8022C0C0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    after_17:
    // 0x8022C0C4: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x8022C0C8: jal         0x8004F418
    // 0x8022C0CC: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_18;
    // 0x8022C0CC: nop

    after_18:
    // 0x8022C0D0: j           L_8022C110
    // 0x8022C0D4: nop

        goto L_8022C110;
    // 0x8022C0D4: nop

L_8022C0D8:
    // 0x8022C0D8: jal         0x8004F418
    // 0x8022C0DC: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    func_8004F418_2A818(rdram, ctx);
        goto after_19;
    // 0x8022C0DC: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_19:
    // 0x8022C0E0: jal         0x8004F418
    // 0x8022C0E4: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    func_8004F418_2A818(rdram, ctx);
        goto after_20;
    // 0x8022C0E4: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    after_20:
    // 0x8022C0E8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022C0EC: jal         0x80070050
    // 0x8022C0F0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_21;
    // 0x8022C0F0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_21:
    // 0x8022C0F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C0F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022C0FC: jal         0x80034844
    // 0x8022C100: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_22;
    // 0x8022C100: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_22:
    // 0x8022C104: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x8022C108: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022C10C: sb          $zero, -0x359C($at)
    MEM_B(-0X359C, ctx->r1) = 0;
L_8022C110:
    // 0x8022C110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C114: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C118: jr          $ra
    // 0x8022C11C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C11C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236554_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236554: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80236558: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8023655C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80236560: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236564: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80236568: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023656C: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x80236570: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x80236574: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80236578: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023657C: bne         $v0, $s1, L_80236660
    if (ctx->r2 != ctx->r17) {
        // 0x80236580: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_80236660;
    }
    // 0x80236580: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236584: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80236588: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023658C: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80236590: addiu       $s2, $s3, 0x14
    ctx->r18 = ADD32(ctx->r19, 0X14);
    // 0x80236594: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80236598: jal         0x8004F820
    // 0x8023659C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8023659C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_0:
    // 0x802365A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802365A4: bgez        $v0, L_802365D0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802365A8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802365D0;
    }
    // 0x802365A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802365AC: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x802365B0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802365B4: jal         0x8004F820
    // 0x802365B8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x802365B8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x802365BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802365C0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802365C4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802365C8: j           L_802365E8
    // 0x802365CC: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_802365E8;
    // 0x802365CC: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_802365D0:
    // 0x802365D0: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x802365D4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802365D8: jal         0x8004F820
    // 0x802365DC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x802365DC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x802365E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802365E4: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_802365E8:
    // 0x802365E8: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
    // 0x802365EC: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x802365F0: lbu         $v1, 0xBD($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XBD);
    // 0x802365F4: sw          $zero, 0x184($s3)
    MEM_W(0X184, ctx->r19) = 0;
    // 0x802365F8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x802365FC: ori         $v1, $v1, 0x80
    ctx->r3 = ctx->r3 | 0X80;
    // 0x80236600: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x80236604: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    // 0x80236608: lh          $v0, 0x180($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X180);
    // 0x8023660C: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80236610: addiu       $s0, $s0, 0x74E0
    ctx->r16 = ADD32(ctx->r16, 0X74E0);
    // 0x80236614: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80236618: lh          $v0, 0x182($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X182);
    // 0x8023661C: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x80236620: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236624: sw          $v0, 0x74E4($at)
    MEM_W(0X74E4, ctx->r1) = ctx->r2;
    // 0x80236628: lh          $v0, 0x184($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X184);
    // 0x8023662C: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x80236630: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236634: sw          $v0, 0x74E8($at)
    MEM_W(0X74E8, ctx->r1) = ctx->r2;
    // 0x80236638: jal         0x8004EC38
    // 0x8023663C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x8023663C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x80236640: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236644: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80236648: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x8023664C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80236650: jal         0x80034FCC
    // 0x80236654: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_4;
    // 0x80236654: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_4:
    // 0x80236658: j           L_80236664
    // 0x8023665C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80236664;
    // 0x8023665C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80236660:
    // 0x80236660: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80236664:
    // 0x80236664: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80236668: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023666C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80236670: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236674: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236678: jr          $ra
    // 0x8023667C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023667C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80240D30_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80240D30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80240D34: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80240D38: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80240D3C: lw          $s1, -0x3A2C($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3A2C);
    // 0x80240D40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80240D44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80240D48: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80240D4C: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x80240D50: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80240D54: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80240D58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80240D5C: jal         0x8009A3B4
    // 0x80240D60: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80240D60: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_0:
    // 0x80240D64: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80240D68: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80240D6C: jal         0x8009A3B4
    // 0x80240D70: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80240D70: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80240D74: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80240D78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80240D7C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80240D80: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80240D84: jal         0x8004D5D4
    // 0x80240D88: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_2;
    // 0x80240D88: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_2:
    // 0x80240D8C: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80240D90: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80240D94: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80240D98: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x80240D9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80240DA0: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
    // 0x80240DA4: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80240DA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240DAC: jal         0x8002C654
    // 0x80240DB0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_3;
    // 0x80240DB0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_3:
    // 0x80240DB4: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80240DB8: addiu       $a1, $a1, 0x6E0C
    ctx->r5 = ADD32(ctx->r5, 0X6E0C);
    // 0x80240DBC: jal         0x80031DA8
    // 0x80240DC0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_4;
    // 0x80240DC0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80240DC4: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80240DC8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80240DCC: jal         0x8009A3B4
    // 0x80240DD0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80240DD0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80240DD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80240DD8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80240DDC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80240DE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80240DE4: jr          $ra
    // 0x80240DE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80240DE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D7E8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D7E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D7EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D7F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D7F4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D7F8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D7FC: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x8022D800: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022D804: jal         0x8004FA7C
    // 0x8022D808: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022D808: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8022D80C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022D810: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022D814: bne         $v0, $zero, L_8022D838
    if (ctx->r2 != 0) {
        // 0x8022D818: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8022D838;
    }
    // 0x8022D818: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022D81C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D820: jal         0x8022F578
    // 0x8022D824: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    func_8022F578_ovl5(rdram, ctx);
        goto after_1;
    // 0x8022D824: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022D828: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D82C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D830: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022D834: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022D838:
    // 0x8022D838: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D83C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022D840: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D844: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022D848: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D84C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D850: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D854: jr          $ra
    // 0x8022D858: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D858: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D1C4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D1C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D1C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D1CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D1D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022D1D4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D1D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D1DC: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D1E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D1E4: lhu         $a2, 0x368($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X368);
    // 0x8022D1E8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022D1EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D1F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D1F4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022D1F8: addiu       $v1, $v1, 0x5460
    ctx->r3 = ADD32(ctx->r3, 0X5460);
    // 0x8022D1FC: jal         0x8022F614
    // 0x8022D200: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    func_8022F614_ovl5(rdram, ctx);
        goto after_0;
    // 0x8022D200: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    after_0:
    // 0x8022D204: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022D208: beq         $v0, $zero, L_8022D318
    if (ctx->r2 == 0) {
        // 0x8022D20C: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022D318;
    }
    // 0x8022D20C: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022D210: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022D214: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D218: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022D21C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D220: jal         0x8009A3B4
    // 0x8022D224: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022D224: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022D228: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022D22C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022D230: jal         0x8009A3B4
    // 0x8022D234: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022D234: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8022D238: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022D23C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022D240: jal         0x8009A3B4
    // 0x8022D244: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022D244: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022D248: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022D24C: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8022D250: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022D254: beq         $v0, $zero, L_8022D264
    if (ctx->r2 == 0) {
        // 0x8022D258: sh          $v1, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r3;
            goto L_8022D264;
    }
    // 0x8022D258: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022D25C: jal         0x8022F47C
    // 0x8022D260: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022F47C_ovl5(rdram, ctx);
        goto after_4;
    // 0x8022D260: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_8022D264:
    // 0x8022D264: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D268: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D26C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D270: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D274: lw          $v0, 0x59C8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X59C8);
    // 0x8022D278: jalr        $v0
    // 0x8022D27C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8022D27C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022D280: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022D284: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8022D288: bne         $v0, $zero, L_8022D2A4
    if (ctx->r2 != 0) {
        // 0x8022D28C: nop
    
            goto L_8022D2A4;
    }
    // 0x8022D28C: nop

    // 0x8022D290: jal         0x8003E934
    // 0x8022D294: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x8022D294: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022D298: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022D29C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D2A0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022D2A4:
    // 0x8022D2A4: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022D2A8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D2AC: beq         $v0, $a1, L_8022D2C4
    if (ctx->r2 == ctx->r5) {
        // 0x8022D2B0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D2C4;
    }
    // 0x8022D2B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D2B4: jal         0x80050294
    // 0x8022D2B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x8022D2B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8022D2BC: j           L_8022D2CC
    // 0x8022D2C0: nop

        goto L_8022D2CC;
    // 0x8022D2C0: nop

L_8022D2C4:
    // 0x8022D2C4: jal         0x8005044C
    // 0x8022D2C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x8022D2C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_8022D2CC:
    // 0x8022D2CC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022D2D0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022D2D4: beq         $v0, $zero, L_8022D2F0
    if (ctx->r2 == 0) {
        // 0x8022D2D8: nop
    
            goto L_8022D2F0;
    }
    // 0x8022D2D8: nop

    // 0x8022D2DC: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8022D2E0: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x8022D2E4: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x8022D2E8: jal         0x8003B564
    // 0x8022D2EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x8022D2EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_8022D2F0:
    // 0x8022D2F0: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022D2F4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022D2F8: beq         $v0, $zero, L_8022D308
    if (ctx->r2 == 0) {
        // 0x8022D2FC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D308;
    }
    // 0x8022D2FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D300: j           L_8022D30C
    // 0x8022D304: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8022D30C;
    // 0x8022D304: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022D308:
    // 0x8022D308: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_8022D30C:
    // 0x8022D30C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022D310: jal         0x80047284
    // 0x8022D314: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_10;
    // 0x8022D314: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_8022D318:
    // 0x8022D318: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D31C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D320: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D324: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D328: jr          $ra
    // 0x8022D32C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D32C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023C72C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C72C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8023C730: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x8023C734: addiu       $t1, $t0, 0xD0
    ctx->r9 = ADD32(ctx->r8, 0XD0);
    // 0x8023C738: lbu         $v1, 0xDC($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0XDC);
    // 0x8023C73C: addiu       $t5, $a1, 0xD0
    ctx->r13 = ADD32(ctx->r5, 0XD0);
    // 0x8023C740: lbu         $a0, 0xDD($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0XDD);
    // 0x8023C744: lbu         $v0, 0xDD($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XDD);
    // 0x8023C748: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8023C74C: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x8023C750: lbu         $v1, 0xDC($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XDC);
    // 0x8023C754: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8023C758: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8023C75C: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x8023C760: or          $a2, $a0, $v1
    ctx->r6 = ctx->r4 | ctx->r3;
    // 0x8023C764: andi        $v0, $a2, 0x1
    ctx->r2 = ctx->r6 & 0X1;
    // 0x8023C768: beq         $v0, $zero, L_8023C7D8
    if (ctx->r2 == 0) {
        // 0x8023C76C: addu        $t2, $a2, $zero
        ctx->r10 = ADD32(ctx->r6, 0);
            goto L_8023C7D8;
    }
    // 0x8023C76C: addu        $t2, $a2, $zero
    ctx->r10 = ADD32(ctx->r6, 0);
    // 0x8023C770: lhu         $v0, 0x18($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X18);
    // 0x8023C774: lhu         $v1, 0x18($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X18);
    // 0x8023C778: lbu         $a0, 0x9($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X9);
    // 0x8023C77C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023C780: sra         $t3, $v0, 25
    ctx->r11 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8023C784: addiu       $t4, $t3, 0x40
    ctx->r12 = ADD32(ctx->r11, 0X40);
    // 0x8023C788: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023C78C: sra         $v1, $v1, 25
    ctx->r3 = S32(SIGNED(ctx->r3) >> 25);
    // 0x8023C790: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023C794: bne         $a0, $v0, L_8023C7AC
    if (ctx->r4 != ctx->r2) {
        // 0x8023C798: addiu       $a3, $v1, 0x40
        ctx->r7 = ADD32(ctx->r3, 0X40);
            goto L_8023C7AC;
    }
    // 0x8023C798: addiu       $a3, $v1, 0x40
    ctx->r7 = ADD32(ctx->r3, 0X40);
    // 0x8023C79C: andi        $v1, $a2, 0xC
    ctx->r3 = ctx->r6 & 0XC;
    // 0x8023C7A0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023C7A4: beql        $v1, $v0, L_8023C7AC
    if (ctx->r3 == ctx->r2) {
        // 0x8023C7A8: addiu       $t4, $t3, 0x41
        ctx->r12 = ADD32(ctx->r11, 0X41);
            goto L_8023C7AC;
    }
    goto skip_0;
    // 0x8023C7A8: addiu       $t4, $t3, 0x41
    ctx->r12 = ADD32(ctx->r11, 0X41);
    skip_0:
L_8023C7AC:
    // 0x8023C7AC: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8023C7B0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023C7B4: bnel        $v1, $v0, L_8023C858
    if (ctx->r3 != ctx->r2) {
        // 0x8023C7B8: sll         $v1, $t4, 16
        ctx->r3 = S32(ctx->r12 << 16);
            goto L_8023C858;
    }
    goto skip_1;
    // 0x8023C7B8: sll         $v1, $t4, 16
    ctx->r3 = S32(ctx->r12 << 16);
    skip_1:
    // 0x8023C7BC: andi        $v0, $t2, 0x30
    ctx->r2 = ctx->r10 & 0X30;
    // 0x8023C7C0: beq         $v0, $zero, L_8023C850
    if (ctx->r2 == 0) {
        // 0x8023C7C4: andi        $v0, $t2, 0xF3
        ctx->r2 = ctx->r10 & 0XF3;
            goto L_8023C850;
    }
    // 0x8023C7C4: andi        $v0, $t2, 0xF3
    ctx->r2 = ctx->r10 & 0XF3;
    // 0x8023C7C8: xori        $v1, $v0, 0xB3
    ctx->r3 = ctx->r2 ^ 0XB3;
    // 0x8023C7CC: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8023C7D0: j           L_8023C840
    // 0x8023C7D4: xori        $v0, $v0, 0x91
    ctx->r2 = ctx->r2 ^ 0X91;
        goto L_8023C840;
    // 0x8023C7D4: xori        $v0, $v0, 0x91
    ctx->r2 = ctx->r2 ^ 0X91;
L_8023C7D8:
    // 0x8023C7D8: lhu         $v0, 0x14($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X14);
    // 0x8023C7DC: lhu         $v1, 0x14($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X14);
    // 0x8023C7E0: lbu         $a0, 0x9($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X9);
    // 0x8023C7E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023C7E8: sra         $t3, $v0, 25
    ctx->r11 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8023C7EC: addiu       $t4, $t3, 0x40
    ctx->r12 = ADD32(ctx->r11, 0X40);
    // 0x8023C7F0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023C7F4: sra         $v1, $v1, 25
    ctx->r3 = S32(SIGNED(ctx->r3) >> 25);
    // 0x8023C7F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023C7FC: bne         $a0, $v0, L_8023C814
    if (ctx->r4 != ctx->r2) {
        // 0x8023C800: addiu       $a3, $v1, 0x40
        ctx->r7 = ADD32(ctx->r3, 0X40);
            goto L_8023C814;
    }
    // 0x8023C800: addiu       $a3, $v1, 0x40
    ctx->r7 = ADD32(ctx->r3, 0X40);
    // 0x8023C804: andi        $v1, $a2, 0xC
    ctx->r3 = ctx->r6 & 0XC;
    // 0x8023C808: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8023C80C: beql        $v1, $v0, L_8023C814
    if (ctx->r3 == ctx->r2) {
        // 0x8023C810: addiu       $t4, $t3, 0x41
        ctx->r12 = ADD32(ctx->r11, 0X41);
            goto L_8023C814;
    }
    goto skip_2;
    // 0x8023C810: addiu       $t4, $t3, 0x41
    ctx->r12 = ADD32(ctx->r11, 0X41);
    skip_2:
L_8023C814:
    // 0x8023C814: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8023C818: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023C81C: bne         $v1, $v0, L_8023C858
    if (ctx->r3 != ctx->r2) {
        // 0x8023C820: sll         $v1, $t4, 16
        ctx->r3 = S32(ctx->r12 << 16);
            goto L_8023C858;
    }
    // 0x8023C820: sll         $v1, $t4, 16
    ctx->r3 = S32(ctx->r12 << 16);
    // 0x8023C824: andi        $v1, $t2, 0x30
    ctx->r3 = ctx->r10 & 0X30;
    // 0x8023C828: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023C82C: beq         $v1, $v0, L_8023C850
    if (ctx->r3 == ctx->r2) {
        // 0x8023C830: andi        $v0, $t2, 0xF3
        ctx->r2 = ctx->r10 & 0XF3;
            goto L_8023C850;
    }
    // 0x8023C830: andi        $v0, $t2, 0xF3
    ctx->r2 = ctx->r10 & 0XF3;
    // 0x8023C834: xori        $v1, $v0, 0xE2
    ctx->r3 = ctx->r2 ^ 0XE2;
    // 0x8023C838: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8023C83C: xori        $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 ^ 0XC0;
L_8023C840:
    // 0x8023C840: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8023C844: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8023C848: beq         $v1, $zero, L_8023C858
    if (ctx->r3 == 0) {
        // 0x8023C84C: sll         $v1, $t4, 16
        ctx->r3 = S32(ctx->r12 << 16);
            goto L_8023C858;
    }
    // 0x8023C84C: sll         $v1, $t4, 16
    ctx->r3 = S32(ctx->r12 << 16);
L_8023C850:
    // 0x8023C850: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8023C854: sll         $v1, $t4, 16
    ctx->r3 = S32(ctx->r12 << 16);
L_8023C858:
    // 0x8023C858: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023C85C: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8023C860: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023C864: bne         $v1, $v0, L_8023C944
    if (ctx->r3 != ctx->r2) {
        // 0x8023C868: nop
    
            goto L_8023C944;
    }
    // 0x8023C868: nop

    // 0x8023C86C: lh          $a0, 0x44($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X44);
    // 0x8023C870: lh          $v1, 0x44($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X44);
    // 0x8023C874: subu        $v1, $a0, $v1
    ctx->r3 = SUB32(ctx->r4, ctx->r3);
    // 0x8023C878: sra         $v0, $v1, 4
    ctx->r2 = S32(SIGNED(ctx->r3) >> 4);
    // 0x8023C87C: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x8023C880: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023C884: mflo        $v1
    ctx->r3 = lo;
    // 0x8023C888: slti        $v0, $a0, 0x101
    ctx->r2 = SIGNED(ctx->r4) < 0X101 ? 1 : 0;
    // 0x8023C88C: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x8023C890: sltiu       $a0, $a0, 0x1
    ctx->r4 = ctx->r4 < 0X1 ? 1 : 0;
    // 0x8023C894: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8023C898: beq         $v0, $zero, L_8023C8A8
    if (ctx->r2 == 0) {
        // 0x8023C89C: sra         $a2, $v1, 4
        ctx->r6 = S32(SIGNED(ctx->r3) >> 4);
            goto L_8023C8A8;
    }
    // 0x8023C89C: sra         $a2, $v1, 4
    ctx->r6 = S32(SIGNED(ctx->r3) >> 4);
    // 0x8023C8A0: j           L_8023C8AC
    // 0x8023C8A4: addiu       $a2, $a2, 0x600
    ctx->r6 = ADD32(ctx->r6, 0X600);
        goto L_8023C8AC;
    // 0x8023C8A4: addiu       $a2, $a2, 0x600
    ctx->r6 = ADD32(ctx->r6, 0X600);
L_8023C8A8:
    // 0x8023C8A8: addiu       $a2, $a2, 0x400
    ctx->r6 = ADD32(ctx->r6, 0X400);
L_8023C8AC:
    // 0x8023C8AC: andi        $v0, $t2, 0x1
    ctx->r2 = ctx->r10 & 0X1;
    // 0x8023C8B0: beq         $v0, $zero, L_8023C8C8
    if (ctx->r2 == 0) {
        // 0x8023C8B4: andi        $v0, $t2, 0x3
        ctx->r2 = ctx->r10 & 0X3;
            goto L_8023C8C8;
    }
    // 0x8023C8B4: andi        $v0, $t2, 0x3
    ctx->r2 = ctx->r10 & 0X3;
    // 0x8023C8B8: lh          $v1, 0x14($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X14);
    // 0x8023C8BC: lh          $a0, 0x14($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X14);
    // 0x8023C8C0: j           L_8023C8D4
    // 0x8023C8C4: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
        goto L_8023C8D4;
    // 0x8023C8C4: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
L_8023C8C8:
    // 0x8023C8C8: lh          $v1, 0x18($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X18);
    // 0x8023C8CC: lh          $a0, 0x18($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X18);
    // 0x8023C8D0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_8023C8D4:
    // 0x8023C8D4: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8023C8D8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023C8DC: mflo        $a3
    ctx->r7 = lo;
    // 0x8023C8E0: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8023C8E4: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023C8E8: bltz        $a1, L_8023C944
    if (SIGNED(ctx->r5) < 0) {
        // 0x8023C8EC: slt         $v0, $a1, $a2
        ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_8023C944;
    }
    // 0x8023C8EC: slt         $v0, $a1, $a2
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8023C8F0: beq         $v0, $zero, L_8023C944
    if (ctx->r2 == 0) {
        // 0x8023C8F4: nop
    
            goto L_8023C944;
    }
    // 0x8023C8F4: nop

    // 0x8023C8F8: lh          $v0, 0x14($t1)
    ctx->r2 = MEM_H(ctx->r9, 0X14);
    // 0x8023C8FC: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023C900: beq         $v0, $zero, L_8023C944
    if (ctx->r2 == 0) {
        // 0x8023C904: nop
    
            goto L_8023C944;
    }
    // 0x8023C904: nop

    // 0x8023C908: lh          $v1, 0x44($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X44);
    // 0x8023C90C: lh          $v0, 0x10($t5)
    ctx->r2 = MEM_H(ctx->r13, 0X10);
    // 0x8023C910: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023C914: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023C918: bnel        $v0, $zero, L_8023C920
    if (ctx->r2 != 0) {
        // 0x8023C91C: sh          $a0, 0x10($t1)
        MEM_H(0X10, ctx->r9) = ctx->r4;
            goto L_8023C920;
    }
    goto skip_3;
    // 0x8023C91C: sh          $a0, 0x10($t1)
    MEM_H(0X10, ctx->r9) = ctx->r4;
    skip_3:
L_8023C920:
    // 0x8023C920: lbu         $v1, 0xF($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0XF);
    // 0x8023C924: ori         $v0, $v1, 0x2
    ctx->r2 = ctx->r3 | 0X2;
    // 0x8023C928: sb          $v0, 0xF($t1)
    MEM_B(0XF, ctx->r9) = ctx->r2;
    // 0x8023C92C: slti        $v0, $a1, 0x3C0
    ctx->r2 = SIGNED(ctx->r5) < 0X3C0 ? 1 : 0;
    // 0x8023C930: beq         $v0, $zero, L_8023C940
    if (ctx->r2 == 0) {
        // 0x8023C934: ori         $v0, $v1, 0x6
        ctx->r2 = ctx->r3 | 0X6;
            goto L_8023C940;
    }
    // 0x8023C934: ori         $v0, $v1, 0x6
    ctx->r2 = ctx->r3 | 0X6;
    // 0x8023C938: sb          $v0, 0xF($t1)
    MEM_B(0XF, ctx->r9) = ctx->r2;
    // 0x8023C93C: sh          $zero, 0x10($t1)
    MEM_H(0X10, ctx->r9) = 0;
L_8023C940:
    // 0x8023C940: sh          $a3, 0x14($t1)
    MEM_H(0X14, ctx->r9) = ctx->r7;
L_8023C944:
    // 0x8023C944: jr          $ra
    // 0x8023C948: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8023C948: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80230A1C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230A1C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230A20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80230A24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80230A28: jal         0x8003E934
    // 0x80230A2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x80230A2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80230A30: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80230A34: addiu       $v0, $v0, -0x7D0
    ctx->r2 = ADD32(ctx->r2, -0X7D0);
    // 0x80230A38: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80230A3C: beq         $v1, $zero, L_80230A4C
    if (ctx->r3 == 0) {
        // 0x80230A40: sw          $v0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r2;
            goto L_80230A4C;
    }
    // 0x80230A40: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80230A44: jal         0x8004F418
    // 0x80230A48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x80230A48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80230A4C:
    // 0x80230A4C: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x80230A50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230A54: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80230A58: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80230A5C: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x80230A60: sh          $a2, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r6;
    // 0x80230A64: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80230A68: jal         0x8004DA90
    // 0x80230A6C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80230A6C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_2:
    // 0x80230A70: jal         0x8003E810
    // 0x80230A74: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8003E810_19C10(rdram, ctx);
        goto after_3;
    // 0x80230A74: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x80230A78: beq         $v0, $zero, L_80230A90
    if (ctx->r2 == 0) {
        // 0x80230A7C: nop
    
            goto L_80230A90;
    }
    // 0x80230A7C: nop

    // 0x80230A80: jal         0x8004F418
    // 0x80230A84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_4;
    // 0x80230A84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80230A88: j           L_80230AA0
    // 0x80230A8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80230AA0;
    // 0x80230A8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80230A90:
    // 0x80230A90: jal         0x80040F30
    // 0x80230A94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x80230A94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80230A98: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80230A9C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80230AA0:
    // 0x80230AA0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80230AA4: bne         $v0, $zero, L_80230AB4
    if (ctx->r2 != 0) {
        // 0x80230AA8: nop
    
            goto L_80230AB4;
    }
    // 0x80230AA8: nop

    // 0x80230AAC: jal         0x8005044C
    // 0x80230AB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x80230AB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_80230AB4:
    // 0x80230AB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80230AB8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80230ABC: jr          $ra
    // 0x80230AC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230AC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80230AC4: nop

    // 0x80230AC8: nop

    // 0x80230ACC: nop

;}
RECOMP_FUNC void func_802382B4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802382B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802382B8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802382BC: jal         0x8005044C
    // 0x802382C0: nop

    func_8005044C_2B84C(rdram, ctx);
        goto after_0;
    // 0x802382C0: nop

    after_0:
    // 0x802382C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802382C8: jr          $ra
    // 0x802382CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802382CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235FC4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235FC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235FC8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235FCC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235FD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235FD4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80235FD8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80235FDC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80235FE0: jal         0x8004D5D4
    // 0x80235FE4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80235FE4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80235FE8: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80235FEC: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80235FF0: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80235FF4: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x80235FF8: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80235FFC: lhu         $a2, 0x54($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X54);
    // 0x80236000: lhu         $a3, 0x56($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X56);
    // 0x80236004: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80236008: lhu         $t0, 0x58($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X58);
    // 0x8023600C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236010: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80236014: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x80236018: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023601C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80236020: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x80236024: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80236028: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8023602C: lw          $t3, 0x24($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X24);
    // 0x80236030: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80236034: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x80236038: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8023603C: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80236040: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80236044: addiu       $v0, $v0, 0x5F38
    ctx->r2 = ADD32(ctx->r2, 0X5F38);
    // 0x80236048: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8023604C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80236050: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80236054: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80236058: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8023605C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80236060: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80236064: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80236068: sh          $a1, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r5;
    // 0x8023606C: sh          $a2, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r6;
    // 0x80236070: sh          $a3, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r7;
    // 0x80236074: sh          $t0, 0x60($s0)
    MEM_H(0X60, ctx->r16) = ctx->r8;
    // 0x80236078: sh          $v1, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r3;
    // 0x8023607C: sh          $a0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r4;
    // 0x80236080: sw          $t1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r9;
    // 0x80236084: sw          $t2, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r10;
    // 0x80236088: sw          $t3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r11;
    // 0x8023608C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80236090: lb          $a1, 0xE($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XE);
    // 0x80236094: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236098: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023609C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x802360A0: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x802360A4: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x802360A8: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x802360AC: jal         0x80050294
    // 0x802360B0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802360B0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_1:
    // 0x802360B4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802360B8: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x802360BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802360C0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802360C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802360C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802360CC: jr          $ra
    // 0x802360D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802360D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022994C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022994C: jr          $ra
    // 0x80229950: nop

    TRACE_RETURN()
    return;
    // 0x80229950: nop

;}
RECOMP_FUNC void func_802410D8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802410D8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802410DC: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x802410E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802410E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802410E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802410EC: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x802410F0: bne         $v1, $v0, L_802411BC
    if (ctx->r3 != ctx->r2) {
        // 0x802410F4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802411BC;
    }
    // 0x802410F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802410F8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802410FC: bne         $v0, $zero, L_8024117C
    if (ctx->r2 != 0) {
        // 0x80241100: lui         $v0, 0x800
        ctx->r2 = S32(0X800 << 16);
            goto L_8024117C;
    }
    // 0x80241100: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80241104: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80241108: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8024110C: bne         $v0, $s0, L_80241208
    if (ctx->r2 != ctx->r16) {
        // 0x80241110: nop
    
            goto L_80241208;
    }
    // 0x80241110: nop

    // 0x80241114: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80241118: lhu         $v0, 0x4A06($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A06);
    // 0x8024111C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80241120: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x80241124: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80241128: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8024112C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80241130: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80241134: addiu       $v0, $v0, 0x180
    ctx->r2 = ADD32(ctx->r2, 0X180);
    // 0x80241138: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8024113C: slti        $v0, $v0, 0x300
    ctx->r2 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x80241140: beq         $v0, $zero, L_80241208
    if (ctx->r2 == 0) {
        // 0x80241144: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80241208;
    }
    // 0x80241144: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80241148: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024114C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80241150: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80241154: bne         $v0, $zero, L_80241208
    if (ctx->r2 != 0) {
        // 0x80241158: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80241208;
    }
    // 0x80241158: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8024115C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80241160: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80241164: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80241168: jal         0x800610AC
    // 0x8024116C: addiu       $a3, $zero, 0xD2
    ctx->r7 = ADD32(0, 0XD2);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_0;
    // 0x8024116C: addiu       $a3, $zero, 0xD2
    ctx->r7 = ADD32(0, 0XD2);
    after_0:
    // 0x80241170: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80241174: j           L_80241208
    // 0x80241178: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80241208;
    // 0x80241178: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8024117C:
    // 0x8024117C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80241180: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x80241184: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80241188: bne         $v0, $zero, L_80241208
    if (ctx->r2 != 0) {
        // 0x8024118C: andi        $v1, $v1, 0xFF
        ctx->r3 = ctx->r3 & 0XFF;
            goto L_80241208;
    }
    // 0x8024118C: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x80241190: bne         $v1, $zero, L_802411AC
    if (ctx->r3 != 0) {
        // 0x80241194: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802411AC;
    }
    // 0x80241194: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80241198: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024119C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802411A0: sb          $v0, -0x3B97($at)
    MEM_B(-0X3B97, ctx->r1) = ctx->r2;
    // 0x802411A4: j           L_80241208
    // 0x802411A8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_80241208;
    // 0x802411A8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_802411AC:
    // 0x802411AC: beql        $v1, $v0, L_80241208
    if (ctx->r3 == ctx->r2) {
        // 0x802411B0: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_80241208;
    }
    goto skip_0;
    // 0x802411B0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_0:
    // 0x802411B4: j           L_80241208
    // 0x802411B8: nop

        goto L_80241208;
    // 0x802411B8: nop

L_802411BC:
    // 0x802411BC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802411C0: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x802411C4: bne         $v0, $s0, L_80241208
    if (ctx->r2 != ctx->r16) {
        // 0x802411C8: nop
    
            goto L_80241208;
    }
    // 0x802411C8: nop

    // 0x802411CC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802411D0: lhu         $v0, 0x4A06($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A06);
    // 0x802411D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802411D8: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x802411DC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802411E0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802411E4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802411E8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802411EC: addiu       $v0, $v0, 0x180
    ctx->r2 = ADD32(ctx->r2, 0X180);
    // 0x802411F0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802411F4: slti        $v0, $v0, 0x300
    ctx->r2 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x802411F8: beq         $v0, $zero, L_80241208
    if (ctx->r2 == 0) {
        // 0x802411FC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80241208;
    }
    // 0x802411FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80241200: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80241204: sb          $v0, -0x3B97($at)
    MEM_B(-0X3B97, ctx->r1) = ctx->r2;
L_80241208:
    // 0x80241208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024120C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80241210: jr          $ra
    // 0x80241214: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80241214: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227EB0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227EB0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80227EB4: bne         $v0, $zero, L_80227F00
    if (ctx->r2 != 0) {
        // 0x80227EB8: addiu       $v0, $zero, -0x6E0
        ctx->r2 = ADD32(0, -0X6E0);
            goto L_80227F00;
    }
    // 0x80227EB8: addiu       $v0, $zero, -0x6E0
    ctx->r2 = ADD32(0, -0X6E0);
    // 0x80227EBC: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80227EC0: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x80227EC4: lh          $a0, 0x14($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X14);
    // 0x80227EC8: addiu       $v0, $zero, -0x640
    ctx->r2 = ADD32(0, -0X640);
    // 0x80227ECC: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x80227ED0: lh          $a1, 0x16($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X16);
    // 0x80227ED4: addiu       $v0, $zero, 0x20D0
    ctx->r2 = ADD32(0, 0X20D0);
    // 0x80227ED8: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x80227EDC: lh          $a2, 0x18($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X18);
    // 0x80227EE0: addiu       $v0, $zero, 0xF80
    ctx->r2 = ADD32(0, 0XF80);
    // 0x80227EE4: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x80227EE8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80227EEC: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80227EF0: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80227EF4: sw          $a0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r4;
    // 0x80227EF8: sw          $a1, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r5;
    // 0x80227EFC: sw          $a2, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r6;
L_80227F00:
    // 0x80227F00: jr          $ra
    // 0x80227F04: nop

    TRACE_RETURN()
    return;
    // 0x80227F04: nop

;}
RECOMP_FUNC void func_8022D8B4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D8B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D8B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D8BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D8C0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D8C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D8C8: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022D8CC: bgez        $v0, L_8022D8F0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D8D0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022D8F0;
    }
    // 0x8022D8D0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022D8D4: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D8D8: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022D8DC: beq         $a0, $v0, L_8022D8F0
    if (ctx->r4 == ctx->r2) {
        // 0x8022D8E0: nop
    
            goto L_8022D8F0;
    }
    // 0x8022D8E0: nop

    // 0x8022D8E4: jal         0x8022F578
    // 0x8022D8E8: nop

    func_8022F578_ovl5(rdram, ctx);
        goto after_0;
    // 0x8022D8E8: nop

    after_0:
    // 0x8022D8EC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022D8F0:
    // 0x8022D8F0: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022D8F4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D8F8: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022D8FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D900: bne         $v0, $zero, L_8022D96C
    if (ctx->r2 != 0) {
        // 0x8022D904: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022D96C;
    }
    // 0x8022D904: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022D908: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D90C: bne         $a0, $v0, L_8022D924
    if (ctx->r4 != ctx->r2) {
        // 0x8022D910: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8022D924;
    }
    // 0x8022D910: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022D914: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D918: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022D91C: j           L_8022D93C
    // 0x8022D920: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022D93C;
    // 0x8022D920: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022D924:
    // 0x8022D924: jal         0x8022F588
    // 0x8022D928: nop

    func_8022F588_ovl5(rdram, ctx);
        goto after_1;
    // 0x8022D928: nop

    after_1:
    // 0x8022D92C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D930: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D934: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022D938: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022D93C:
    // 0x8022D93C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022D940: beq         $v0, $zero, L_8022D954
    if (ctx->r2 == 0) {
        // 0x8022D944: nop
    
            goto L_8022D954;
    }
    // 0x8022D944: nop

    // 0x8022D948: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x8022D94C: j           L_8022D964
    // 0x8022D950: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
        goto L_8022D964;
    // 0x8022D950: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_8022D954:
    // 0x8022D954: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x8022D958: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022D95C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D960: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_8022D964:
    // 0x8022D964: lhu         $v0, 0x1E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E);
    // 0x8022D968: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
L_8022D96C:
    // 0x8022D96C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D970: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D974: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D978: jr          $ra
    // 0x8022D97C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D97C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228A30_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228A30: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80228A34: addiu       $v0, $zero, 0x168
    ctx->r2 = ADD32(0, 0X168);
    // 0x80228A38: beq         $v1, $v0, L_80228A7C
    if (ctx->r3 == ctx->r2) {
        // 0x80228A3C: slti        $v0, $v1, 0x169
        ctx->r2 = SIGNED(ctx->r3) < 0X169 ? 1 : 0;
            goto L_80228A7C;
    }
    // 0x80228A3C: slti        $v0, $v1, 0x169
    ctx->r2 = SIGNED(ctx->r3) < 0X169 ? 1 : 0;
    // 0x80228A40: beql        $v0, $zero, L_80228A58
    if (ctx->r2 == 0) {
        // 0x80228A44: addiu       $v0, $zero, 0x190
        ctx->r2 = ADD32(0, 0X190);
            goto L_80228A58;
    }
    goto skip_0;
    // 0x80228A44: addiu       $v0, $zero, 0x190
    ctx->r2 = ADD32(0, 0X190);
    skip_0:
    // 0x80228A48: beq         $v1, $zero, L_80228A70
    if (ctx->r3 == 0) {
        // 0x80228A4C: nop
    
            goto L_80228A70;
    }
    // 0x80228A4C: nop

    // 0x80228A50: j           L_80228AA4
    // 0x80228A54: nop

        goto L_80228AA4;
    // 0x80228A54: nop

L_80228A58:
    // 0x80228A58: beq         $v1, $v0, L_80228A88
    if (ctx->r3 == ctx->r2) {
        // 0x80228A5C: addiu       $v0, $zero, 0x1E0
        ctx->r2 = ADD32(0, 0X1E0);
            goto L_80228A88;
    }
    // 0x80228A5C: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
    // 0x80228A60: beq         $v1, $v0, L_80228A94
    if (ctx->r3 == ctx->r2) {
        // 0x80228A64: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_80228A94;
    }
    // 0x80228A64: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80228A68: j           L_80228AA4
    // 0x80228A6C: nop

        goto L_80228AA4;
    // 0x80228A6C: nop

L_80228A70:
    // 0x80228A70: lw          $a0, 0x28($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28);
    // 0x80228A74: j           L_80228A98
    // 0x80228A78: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
        goto L_80228A98;
    // 0x80228A78: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
L_80228A7C:
    // 0x80228A7C: lw          $a0, 0x28($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28);
    // 0x80228A80: j           L_80228A98
    // 0x80228A84: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
        goto L_80228A98;
    // 0x80228A84: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
L_80228A88:
    // 0x80228A88: lw          $a0, 0x28($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28);
    // 0x80228A8C: j           L_80228A98
    // 0x80228A90: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
        goto L_80228A98;
    // 0x80228A90: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_80228A94:
    // 0x80228A94: lw          $a0, 0x28($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28);
L_80228A98:
    // 0x80228A98: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80228A9C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80228AA0: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
L_80228AA4:
    // 0x80228AA4: jr          $ra
    // 0x80228AA8: nop

    TRACE_RETURN()
    return;
    // 0x80228AA8: nop

;}
RECOMP_FUNC void func_8022E11C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E11C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022E120: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E124: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E128: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022E12C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022E130: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022E134: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022E138: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E13C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E140: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022E144: bne         $v1, $v0, L_8022E160
    if (ctx->r3 != ctx->r2) {
        // 0x8022E148: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022E160;
    }
    // 0x8022E148: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022E14C: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022E150: addiu       $s1, $s1, 0x5B60
    ctx->r17 = ADD32(ctx->r17, 0X5B60);
    // 0x8022E154: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x8022E158: j           L_8022E170
    // 0x8022E15C: addiu       $s3, $s3, 0x5B80
    ctx->r19 = ADD32(ctx->r19, 0X5B80);
        goto L_8022E170;
    // 0x8022E15C: addiu       $s3, $s3, 0x5B80
    ctx->r19 = ADD32(ctx->r19, 0X5B80);
L_8022E160:
    // 0x8022E160: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022E164: addiu       $s1, $s1, 0x5B50
    ctx->r17 = ADD32(ctx->r17, 0X5B50);
    // 0x8022E168: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x8022E16C: addiu       $s3, $s3, 0x5B70
    ctx->r19 = ADD32(ctx->r19, 0X5B70);
L_8022E170:
    // 0x8022E170: lui         $s4, 0x8024
    ctx->r20 = S32(0X8024 << 16);
    // 0x8022E174: jal         0x800A3450
    // 0x8022E178: addiu       $s4, $s4, 0x5B90
    ctx->r20 = ADD32(ctx->r20, 0X5B90);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022E178: addiu       $s4, $s4, 0x5B90
    ctx->r20 = ADD32(ctx->r20, 0X5B90);
    after_0:
    // 0x8022E17C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022E180: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022E184: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
    // 0x8022E188: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E18C: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x8022E190: beq         $v1, $v0, L_8022E21C
    if (ctx->r3 == ctx->r2) {
        // 0x8022E194: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022E21C;
    }
    // 0x8022E194: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022E198: beql        $v0, $zero, L_8022E1B0
    if (ctx->r2 == 0) {
        // 0x8022E19C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022E1B0;
    }
    goto skip_0;
    // 0x8022E19C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022E1A0: beq         $v1, $zero, L_8022E1C0
    if (ctx->r3 == 0) {
        // 0x8022E1A4: nop
    
            goto L_8022E1C0;
    }
    // 0x8022E1A4: nop

    // 0x8022E1A8: j           L_8022E2AC
    // 0x8022E1AC: nop

        goto L_8022E2AC;
    // 0x8022E1AC: nop

L_8022E1B0:
    // 0x8022E1B0: beq         $v1, $v0, L_8022E230
    if (ctx->r3 == ctx->r2) {
        // 0x8022E1B4: nop
    
            goto L_8022E230;
    }
    // 0x8022E1B4: nop

    // 0x8022E1B8: j           L_8022E2AC
    // 0x8022E1BC: nop

        goto L_8022E2AC;
    // 0x8022E1BC: nop

L_8022E1C0:
    // 0x8022E1C0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022E1C4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022E1C8: bne         $v0, $zero, L_8022E1EC
    if (ctx->r2 != 0) {
        // 0x8022E1CC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E1EC;
    }
    // 0x8022E1CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E1D0: jal         0x800A3450
    // 0x8022E1D4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022E1D4: nop

    after_1:
    // 0x8022E1D8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022E1DC: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022E1E0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022E1E4: beq         $v0, $zero, L_8022E1F8
    if (ctx->r2 == 0) {
        // 0x8022E1E8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E1F8;
    }
    // 0x8022E1E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022E1EC:
    // 0x8022E1EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022E1F0: j           L_8022E20C
    // 0x8022E1F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022E20C;
    // 0x8022E1F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022E1F8:
    // 0x8022E1F8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E1FC: jal         0x8022F588
    // 0x8022E200: nop

    func_8022F588_ovl5(rdram, ctx);
        goto after_2;
    // 0x8022E200: nop

    after_2:
    // 0x8022E204: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E208: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022E20C:
    // 0x8022E20C: jal         0x8022F5C8
    // 0x8022E210: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8022F5C8_ovl5(rdram, ctx);
        goto after_3;
    // 0x8022E210: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022E214: j           L_8022E2D0
    // 0x8022E218: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_8022E2D0;
    // 0x8022E218: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022E21C:
    // 0x8022E21C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E220: jal         0x8022F578
    // 0x8022E224: nop

    func_8022F578_ovl5(rdram, ctx);
        goto after_4;
    // 0x8022E224: nop

    after_4:
    // 0x8022E228: j           L_8022E2D0
    // 0x8022E22C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022E2D0;
    // 0x8022E22C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022E230:
    // 0x8022E230: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022E234: lhu         $v0, 0xC($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XC);
    // 0x8022E238: lhu         $a2, 0x14($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X14);
    // 0x8022E23C: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x8022E240: lhu         $a0, 0x16($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X16);
    // 0x8022E244: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022E248: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022E24C: sra         $a3, $a2, 17
    ctx->r7 = S32(SIGNED(ctx->r6) >> 17);
    // 0x8022E250: lhu         $v0, 0x10($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X10);
    // 0x8022E254: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x8022E258: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022E25C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022E260: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8022E264: slt         $v1, $v1, $a2
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8022E268: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022E26C: sra         $v0, $a0, 17
    ctx->r2 = S32(SIGNED(ctx->r4) >> 17);
    // 0x8022E270: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8022E274: beq         $v1, $zero, L_8022E2A4
    if (ctx->r3 == 0) {
        // 0x8022E278: sra         $a0, $a0, 16
        ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
            goto L_8022E2A4;
    }
    // 0x8022E278: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8022E27C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8022E280: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022E284: beq         $v0, $zero, L_8022E2A4
    if (ctx->r2 == 0) {
        // 0x8022E288: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E2A4;
    }
    // 0x8022E288: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E28C: jal         0x8022F5C8
    // 0x8022E290: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022F5C8_ovl5(rdram, ctx);
        goto after_5;
    // 0x8022E290: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x8022E294: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022E298: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E29C: j           L_8022E2D0
    // 0x8022E2A0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022E2D0;
    // 0x8022E2A0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022E2A4:
    // 0x8022E2A4: j           L_8022E2D0
    // 0x8022E2A8: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
        goto L_8022E2D0;
    // 0x8022E2A8: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
L_8022E2AC:
    // 0x8022E2AC: jal         0x800A3450
    // 0x8022E2B0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x8022E2B0: nop

    after_6:
    // 0x8022E2B4: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E2B8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E2BC: jal         0x8022F588
    // 0x8022E2C0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_8022F588_ovl5(rdram, ctx);
        goto after_7;
    // 0x8022E2C0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_7:
    // 0x8022E2C4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E2C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E2CC: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
L_8022E2D0:
    // 0x8022E2D0: jal         0x800A3450
    // 0x8022E2D4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x8022E2D4: nop

    after_8:
    // 0x8022E2D8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022E2DC: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x8022E2E0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022E2E4: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x8022E2E8: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022E2EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022E2F0: beq         $v1, $v0, L_8022E308
    if (ctx->r3 == ctx->r2) {
        // 0x8022E2F4: nop
    
            goto L_8022E308;
    }
    // 0x8022E2F4: nop

    // 0x8022E2F8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E2FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E300: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022E304: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022E308:
    // 0x8022E308: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022E30C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022E310: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E314: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022E318: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E31C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E320: jr          $ra
    // 0x8022E324: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022E324: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225820_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225820: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225824: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225828: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022582C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225830: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225834: bne         $v0, $zero, L_802258A8
    if (ctx->r2 != 0) {
        // 0x80225838: nop
    
            goto L_802258A8;
    }
    // 0x80225838: nop

    // 0x8022583C: jal         0x8006033C
    // 0x80225840: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225840: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_0:
    // 0x80225844: bne         $v0, $zero, L_80225890
    if (ctx->r2 != 0) {
        // 0x80225848: nop
    
            goto L_80225890;
    }
    // 0x80225848: nop

    // 0x8022584C: jal         0x8006033C
    // 0x80225850: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80225850: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x80225854: beq         $v0, $zero, L_80225874
    if (ctx->r2 == 0) {
        // 0x80225858: nop
    
            goto L_80225874;
    }
    // 0x80225858: nop

    // 0x8022585C: jal         0x8006036C
    // 0x80225860: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x80225860: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_2:
    // 0x80225864: jal         0x80060690
    // 0x80225868: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_80060690_3BA90(rdram, ctx);
        goto after_3;
    // 0x80225868: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_3:
    // 0x8022586C: j           L_802258A4
    // 0x80225870: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_802258A4;
    // 0x80225870: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225874:
    // 0x80225874: jal         0x8006033C
    // 0x80225878: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80225878: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    after_4:
    // 0x8022587C: beq         $v0, $zero, L_80225890
    if (ctx->r2 == 0) {
        // 0x80225880: nop
    
            goto L_80225890;
    }
    // 0x80225880: nop

    // 0x80225884: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225888: j           L_80225898
    // 0x8022588C: addiu       $a0, $a0, 0x49E0
    ctx->r4 = ADD32(ctx->r4, 0X49E0);
        goto L_80225898;
    // 0x8022588C: addiu       $a0, $a0, 0x49E0
    ctx->r4 = ADD32(ctx->r4, 0X49E0);
L_80225890:
    // 0x80225890: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225894: addiu       $a0, $a0, 0x3180
    ctx->r4 = ADD32(ctx->r4, 0X3180);
L_80225898:
    // 0x80225898: jal         0x80225CEC
    // 0x8022589C: nop

    func_80225CEC_ovl5(rdram, ctx);
        goto after_5;
    // 0x8022589C: nop

    after_5:
    // 0x802258A0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802258A4:
    // 0x802258A4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802258A8:
    // 0x802258A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802258AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802258B0: jr          $ra
    // 0x802258B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802258B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237CF4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237CF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80237CF8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80237CFC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80237D00: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80237D04: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x80237D08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80237D0C: jal         0x8004EFE4
    // 0x80237D10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x80237D10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80237D14: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80237D18: beq         $s0, $zero, L_80237D74
    if (ctx->r16 == 0) {
        // 0x80237D1C: addiu       $a0, $s0, 0xAC
        ctx->r4 = ADD32(ctx->r16, 0XAC);
            goto L_80237D74;
    }
    // 0x80237D1C: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80237D20: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80237D24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80237D28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237D2C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80237D30: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80237D34: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80237D38: sb          $s2, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r18;
    // 0x80237D3C: jal         0x8009A3B4
    // 0x80237D40: sw          $s1, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80237D40: sw          $s1, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r17;
    after_1:
    // 0x80237D44: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x80237D48: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x80237D4C: jal         0x8009A3B4
    // 0x80237D50: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80237D50: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80237D54: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80237D58: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80237D5C: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x80237D60: lw          $v1, 0x2D8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X2D8);
    // 0x80237D64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237D68: sllv        $v0, $v0, $s2
    ctx->r2 = S32(ctx->r2 << (ctx->r18 & 31));
    // 0x80237D6C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80237D70: sw          $v1, 0x2D8($s1)
    MEM_W(0X2D8, ctx->r17) = ctx->r3;
L_80237D74:
    // 0x80237D74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80237D78: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80237D7C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80237D80: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237D84: jr          $ra
    // 0x80237D88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80237D88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80234DCC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234DCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234DD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234DD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234DD8: jal         0x8004F144
    // 0x80234DDC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80234DDC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80234DE0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80234DE4: beq         $v1, $zero, L_80234E18
    if (ctx->r3 == 0) {
        // 0x80234DE8: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80234E18;
    }
    // 0x80234DE8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80234DEC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80234DF0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80234DF4: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80234DF8: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x80234DFC: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80234E00: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80234E04: sh          $v0, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r2;
    // 0x80234E08: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x80234E0C: sh          $v0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r2;
    // 0x80234E10: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80234E14: sh          $v0, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r2;
L_80234E18:
    // 0x80234E18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234E1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234E20: jr          $ra
    // 0x80234E24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234E24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237330_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237330: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237334: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80237338: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8023733C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80237340: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80237344: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237348: lw          $v0, 0x5FF0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5FF0);
    // 0x8023734C: jalr        $v0
    // 0x80237350: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80237350: nop

    after_0:
    // 0x80237354: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80237358: jr          $ra
    // 0x8023735C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023735C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
