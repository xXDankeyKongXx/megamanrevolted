#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80234448_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234448: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023444C: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80234450: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234454: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234458: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023445C: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x80234460: bne         $v1, $v0, L_8023452C
    if (ctx->r3 != ctx->r2) {
        // 0x80234464: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8023452C;
    }
    // 0x80234464: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234468: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023446C: bne         $v0, $zero, L_802344EC
    if (ctx->r2 != 0) {
        // 0x80234470: lui         $v0, 0x800
        ctx->r2 = S32(0X800 << 16);
            goto L_802344EC;
    }
    // 0x80234470: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80234474: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80234478: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8023447C: bne         $v0, $s0, L_80234578
    if (ctx->r2 != ctx->r16) {
        // 0x80234480: nop
    
            goto L_80234578;
    }
    // 0x80234480: nop

    // 0x80234484: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80234488: lhu         $v0, 0x4A06($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A06);
    // 0x8023448C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80234490: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x80234494: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80234498: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023449C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802344A0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802344A4: addiu       $v0, $v0, 0x180
    ctx->r2 = ADD32(ctx->r2, 0X180);
    // 0x802344A8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802344AC: slti        $v0, $v0, 0x300
    ctx->r2 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x802344B0: beq         $v0, $zero, L_80234578
    if (ctx->r2 == 0) {
        // 0x802344B4: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80234578;
    }
    // 0x802344B4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802344B8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802344BC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802344C0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802344C4: bne         $v0, $zero, L_80234578
    if (ctx->r2 != 0) {
        // 0x802344C8: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80234578;
    }
    // 0x802344C8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802344CC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802344D0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x802344D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802344D8: jal         0x800610AC
    // 0x802344DC: addiu       $a3, $zero, 0xD2
    ctx->r7 = ADD32(0, 0XD2);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_0;
    // 0x802344DC: addiu       $a3, $zero, 0xD2
    ctx->r7 = ADD32(0, 0XD2);
    after_0:
    // 0x802344E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802344E4: j           L_80234578
    // 0x802344E8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80234578;
    // 0x802344E8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802344EC:
    // 0x802344EC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802344F0: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x802344F4: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802344F8: bne         $v0, $zero, L_80234578
    if (ctx->r2 != 0) {
        // 0x802344FC: andi        $v1, $v1, 0xFF
        ctx->r3 = ctx->r3 & 0XFF;
            goto L_80234578;
    }
    // 0x802344FC: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x80234500: bne         $v1, $zero, L_8023451C
    if (ctx->r3 != 0) {
        // 0x80234504: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023451C;
    }
    // 0x80234504: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234508: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023450C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80234510: sb          $v0, -0x3B97($at)
    MEM_B(-0X3B97, ctx->r1) = ctx->r2;
    // 0x80234514: j           L_80234578
    // 0x80234518: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_80234578;
    // 0x80234518: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8023451C:
    // 0x8023451C: beql        $v1, $v0, L_80234578
    if (ctx->r3 == ctx->r2) {
        // 0x80234520: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_80234578;
    }
    goto skip_0;
    // 0x80234520: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_0:
    // 0x80234524: j           L_80234578
    // 0x80234528: nop

        goto L_80234578;
    // 0x80234528: nop

L_8023452C:
    // 0x8023452C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80234530: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80234534: bne         $v0, $s0, L_80234578
    if (ctx->r2 != ctx->r16) {
        // 0x80234538: nop
    
            goto L_80234578;
    }
    // 0x80234538: nop

    // 0x8023453C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80234540: lhu         $v0, 0x4A06($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A06);
    // 0x80234544: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80234548: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x8023454C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80234550: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80234554: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80234558: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023455C: addiu       $v0, $v0, 0x180
    ctx->r2 = ADD32(ctx->r2, 0X180);
    // 0x80234560: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80234564: slti        $v0, $v0, 0x300
    ctx->r2 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x80234568: beq         $v0, $zero, L_80234578
    if (ctx->r2 == 0) {
        // 0x8023456C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80234578;
    }
    // 0x8023456C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234570: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80234574: sb          $v0, -0x3B97($at)
    MEM_B(-0X3B97, ctx->r1) = ctx->r2;
L_80234578:
    // 0x80234578: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023457C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234580: jr          $ra
    // 0x80234584: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234584: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235440_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235440: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235444: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80235448: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023544C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235450: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235454: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235458: lw          $v0, -0x6980($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6980);
    // 0x8023545C: jalr        $v0
    // 0x80235460: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80235460: nop

    after_0:
    // 0x80235464: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80235468: jr          $ra
    // 0x8023546C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023546C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235CE8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235CE8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80235CEC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80235CF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235CF4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80235CF8: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80235CFC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80235D00: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80235D04: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80235D08: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235D0C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235D10: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235D14: lw          $v0, -0x65C4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X65C4);
    // 0x80235D18: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80235D1C: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x80235D20: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80235D24: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x80235D28: addiu       $s2, $s2, -0x65C4
    ctx->r18 = ADD32(ctx->r18, -0X65C4);
    // 0x80235D2C: beq         $v0, $zero, L_80235EB0
    if (ctx->r2 == 0) {
        // 0x80235D30: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_80235EB0;
    }
    // 0x80235D30: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80235D34: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80235D38: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x80235D3C: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x80235D40: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x80235D44: lbu         $a3, -0x6574($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X6574);
    // 0x80235D48: jal         0x8003BA58
    // 0x80235D4C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8003BA58_16E58(rdram, ctx);
        goto after_0;
    // 0x80235D4C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80235D50: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80235D54: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80235D58: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80235D5C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80235D60: bne         $v0, $zero, L_80235DC8
    if (ctx->r2 != 0) {
        // 0x80235D64: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_80235DC8;
    }
    // 0x80235D64: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80235D68: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80235D6C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x80235D70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235D74: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80235D78: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80235D7C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80235D80: bne         $v1, $v0, L_80235DA0
    if (ctx->r3 != ctx->r2) {
        // 0x80235D84: nop
    
            goto L_80235DA0;
    }
    // 0x80235D84: nop

    // 0x80235D88: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80235D8C: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80235D90: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235D94: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80235D98: j           L_80235DA8
    // 0x80235D9C: lw          $s1, 0x0($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X0);
        goto L_80235DA8;
    // 0x80235D9C: lw          $s1, 0x0($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X0);
L_80235DA0:
    // 0x80235DA0: beq         $v1, $zero, L_80235EB0
    if (ctx->r3 == 0) {
        // 0x80235DA4: nop
    
            goto L_80235EB0;
    }
    // 0x80235DA4: nop

L_80235DA8:
    // 0x80235DA8: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80235DAC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235DB0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235DB4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235DB8: lw          $v0, -0x65C4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X65C4);
    // 0x80235DBC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80235DC0: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80235DC4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_80235DC8:
    // 0x80235DC8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80235DCC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80235DD0: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x80235DD4: jal         0x8003BB80
    // 0x80235DD8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003BB80_16F80(rdram, ctx);
        goto after_1;
    // 0x80235DD8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80235DDC: lb          $v0, 0x1($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1);
    // 0x80235DE0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80235DE4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235DE8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235DEC: lbu         $v0, -0x6674($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6674);
    // 0x80235DF0: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
    // 0x80235DF4: lb          $v0, 0x1($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1);
    // 0x80235DF8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80235DFC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235E00: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235E04: lbu         $v0, -0x6673($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6673);
    // 0x80235E08: sb          $v0, 0x11($sp)
    MEM_B(0X11, ctx->r29) = ctx->r2;
    // 0x80235E0C: lb          $v0, 0x1($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1);
    // 0x80235E10: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80235E14: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235E18: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235E1C: lbu         $v0, -0x6672($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6672);
    // 0x80235E20: sb          $v0, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r2;
    // 0x80235E24: lb          $v0, 0x1($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1);
    // 0x80235E28: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80235E2C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235E30: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235E34: lbu         $v0, -0x6671($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6671);
    // 0x80235E38: sb          $v0, 0x13($sp)
    MEM_B(0X13, ctx->r29) = ctx->r2;
    // 0x80235E3C: lb          $v0, 0x1($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1);
    // 0x80235E40: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80235E44: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235E48: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235E4C: lbu         $v0, -0x6670($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6670);
    // 0x80235E50: sb          $v0, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r2;
    // 0x80235E54: lb          $v0, 0x1($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1);
    // 0x80235E58: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80235E5C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235E60: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235E64: lbu         $v0, -0x666F($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X666F);
    // 0x80235E68: sb          $v0, 0x15($sp)
    MEM_B(0X15, ctx->r29) = ctx->r2;
    // 0x80235E6C: lb          $v0, 0x1($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1);
    // 0x80235E70: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80235E74: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235E78: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235E7C: lbu         $v0, -0x666E($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X666E);
    // 0x80235E80: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    // 0x80235E84: lb          $v0, 0x1($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1);
    // 0x80235E88: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80235E8C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80235E90: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80235E94: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235E98: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235E9C: lbu         $v0, -0x666D($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X666D);
    // 0x80235EA0: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x80235EA4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80235EA8: jal         0x8003BC68
    // 0x80235EAC: sb          $v0, 0x17($sp)
    MEM_B(0X17, ctx->r29) = ctx->r2;
    func_8003BC68_17068(rdram, ctx);
        goto after_2;
    // 0x80235EAC: sb          $v0, 0x17($sp)
    MEM_B(0X17, ctx->r29) = ctx->r2;
    after_2:
L_80235EB0:
    // 0x80235EB0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80235EB4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80235EB8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80235EBC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80235EC0: jr          $ra
    // 0x80235EC4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80235EC4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80226D24_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226D28: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226D2C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226D30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226D34: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226D38: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226D3C: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x80226D40: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80226D44: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80226D48: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x80226D4C: beq         $v0, $zero, L_80226FF8
    if (ctx->r2 == 0) {
        // 0x80226D50: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80226FF8;
    }
    // 0x80226D50: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226D54: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226D58: addu        $at, $at, $v0
    gpr jr_addend_80226D60 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226D5C: lw          $v0, -0x63E0($at)
    ctx->r2 = ADD32(ctx->r1, -0X63E0);
    // 0x80226D60: jr          $v0
    // 0x80226D64: nop

    switch (jr_addend_80226D60 >> 2) {
        case 0: goto L_80226D68; break;
        case 1: goto L_80226D68; break;
        case 2: goto L_80226DDC; break;
        case 3: goto L_80226E4C; break;
        case 4: goto L_80226F14; break;
        case 5: goto L_80226F78; break;
        case 6: goto L_80226FB4; break;
        case 7: goto L_80226FE8; break;
        default: switch_error(__func__, 0x80226D60, 0x80239C20);
    }
    // 0x80226D64: nop

L_80226D68:
    // 0x80226D68: jal         0x8006FF84
    // 0x80226D6C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80226D6C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x80226D70: beq         $v0, $zero, L_80226FF4
    if (ctx->r2 == 0) {
        // 0x80226D74: addiu       $a1, $s2, 0x14
        ctx->r5 = ADD32(ctx->r18, 0X14);
            goto L_80226FF4;
    }
    // 0x80226D74: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80226D78: addiu       $a0, $s2, 0x438
    ctx->r4 = ADD32(ctx->r18, 0X438);
    // 0x80226D7C: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x80226D80: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80226D84: sb          $v0, 0x7($s1)
    MEM_B(0X7, ctx->r17) = ctx->r2;
    // 0x80226D88: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80226D8C: sb          $v1, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r3;
    // 0x80226D90: lbu         $v1, 0xBD($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XBD);
    // 0x80226D94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80226D98: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226D9C: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80226DA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226DA4: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x80226DA8: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80226DAC: jal         0x8009A3B4
    // 0x80226DB0: sb          $v1, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80226DB0: sb          $v1, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r3;
    after_1:
    // 0x80226DB4: addiu       $a0, $s2, 0x428
    ctx->r4 = ADD32(ctx->r18, 0X428);
    // 0x80226DB8: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x80226DBC: jal         0x8009A3B4
    // 0x80226DC0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80226DC0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80226DC4: addiu       $a0, $s2, 0x440
    ctx->r4 = ADD32(ctx->r18, 0X440);
    // 0x80226DC8: addiu       $a1, $s2, 0x54
    ctx->r5 = ADD32(ctx->r18, 0X54);
    // 0x80226DCC: jal         0x8009A3B4
    // 0x80226DD0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80226DD0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80226DD4: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80226DD8: sb          $v0, 0x448($s2)
    MEM_B(0X448, ctx->r18) = ctx->r2;
L_80226DDC:
    // 0x80226DDC: lbu         $v0, 0x7($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X7);
    // 0x80226DE0: bne         $v0, $zero, L_80226F48
    if (ctx->r2 != 0) {
        // 0x80226DE4: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80226F48;
    }
    // 0x80226DE4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226DE8: lh          $s0, 0x16($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X16);
    // 0x80226DEC: jal         0x8003E934
    // 0x80226DF0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x80226DF0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x80226DF4: bne         $s0, $v0, L_80226FF4
    if (ctx->r16 != ctx->r2) {
        // 0x80226DF8: nop
    
            goto L_80226FF4;
    }
    // 0x80226DF8: nop

    // 0x80226DFC: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x80226E00: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80226E04: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80226E08: addiu       $a1, $a1, -0x7920
    ctx->r5 = ADD32(ctx->r5, -0X7920);
    // 0x80226E0C: jal         0x8004F820
    // 0x80226E10: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x80226E10: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_5:
    // 0x80226E14: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80226E18: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80226E1C: bne         $v0, $zero, L_80226E3C
    if (ctx->r2 != 0) {
        // 0x80226E20: addiu       $v1, $zero, 0xD
        ctx->r3 = ADD32(0, 0XD);
            goto L_80226E3C;
    }
    // 0x80226E20: addiu       $v1, $zero, 0xD
    ctx->r3 = ADD32(0, 0XD);
    // 0x80226E24: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80226E28: sb          $v0, 0x448($s2)
    MEM_B(0X448, ctx->r18) = ctx->r2;
    // 0x80226E2C: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80226E30: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226E34: j           L_80226F64
    // 0x80226E38: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
        goto L_80226F64;
    // 0x80226E38: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
L_80226E3C:
    // 0x80226E3C: lhu         $v0, 0x442($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X442);
    // 0x80226E40: sb          $v1, 0x448($s2)
    MEM_B(0X448, ctx->r18) = ctx->r3;
    // 0x80226E44: j           L_80226F3C
    // 0x80226E48: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
        goto L_80226F3C;
    // 0x80226E48: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
L_80226E4C:
    // 0x80226E4C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226E50: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80226E54: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80226E58: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226E5C: bne         $v0, $zero, L_80226FF4
    if (ctx->r2 != 0) {
        // 0x80226E60: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80226FF4;
    }
    // 0x80226E60: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226E64: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    // 0x80226E68: jal         0x8002A2F8
    // 0x80226E6C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_6;
    // 0x80226E6C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80226E70: jal         0x80060170
    // 0x80226E74: nop

    func_80060170_3B570(rdram, ctx);
        goto after_7;
    // 0x80226E74: nop

    after_7:
    // 0x80226E78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226E7C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226E80: jal         0x8005F6B4
    // 0x80226E84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_8;
    // 0x80226E84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_8:
    // 0x80226E88: addiu       $a0, $s2, 0x428
    ctx->r4 = ADD32(ctx->r18, 0X428);
    // 0x80226E8C: addiu       $a1, $s2, 0x438
    ctx->r5 = ADD32(ctx->r18, 0X438);
    // 0x80226E90: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226E94: addiu       $v0, $v0, -0x7C98
    ctx->r2 = ADD32(ctx->r2, -0X7C98);
    // 0x80226E98: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226E9C: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80226EA0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226EA4: addiu       $v0, $v0, -0x7CB0
    ctx->r2 = ADD32(ctx->r2, -0X7CB0);
    // 0x80226EA8: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    // 0x80226EAC: lui         $v0, 0xF640
    ctx->r2 = S32(0XF640 << 16);
    // 0x80226EB0: sw          $v0, 0x428($s2)
    MEM_W(0X428, ctx->r18) = ctx->r2;
    // 0x80226EB4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80226EB8: sw          $v0, 0x42C($s2)
    MEM_W(0X42C, ctx->r18) = ctx->r2;
    // 0x80226EBC: lui         $v0, 0x13C9
    ctx->r2 = S32(0X13C9 << 16);
    // 0x80226EC0: jal         0x8004DD04
    // 0x80226EC4: sw          $v0, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_9;
    // 0x80226EC4: sw          $v0, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r2;
    after_9:
    // 0x80226EC8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226ECC: lw          $v1, -0x3E74($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3E74);
    // 0x80226ED0: addiu       $v0, $zero, 0x8C0
    ctx->r2 = ADD32(0, 0X8C0);
    // 0x80226ED4: sh          $v0, 0x442($s2)
    MEM_H(0X442, ctx->r18) = ctx->r2;
    // 0x80226ED8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226EDC: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226EE0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226EE4: lw          $v0, -0x3E74($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3E74);
    // 0x80226EE8: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x80226EEC: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226EF0: lw          $v1, -0x3E74($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3E74);
    // 0x80226EF4: addiu       $v0, $zero, 0x600
    ctx->r2 = ADD32(0, 0X600);
    // 0x80226EF8: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x80226EFC: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80226F00: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x80226F04: sb          $v1, 0x7($s1)
    MEM_B(0X7, ctx->r17) = ctx->r3;
    // 0x80226F08: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226F0C: j           L_80226FF4
    // 0x80226F10: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
        goto L_80226FF4;
    // 0x80226F10: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_80226F14:
    // 0x80226F14: lw          $a0, 0xA4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XA4);
    // 0x80226F18: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x80226F1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226F20: bne         $v1, $v0, L_80226F50
    if (ctx->r3 != ctx->r2) {
        // 0x80226F24: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80226F50;
    }
    // 0x80226F24: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226F28: lbu         $v0, 0x7($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X7);
    // 0x80226F2C: bne         $v0, $zero, L_80226F48
    if (ctx->r2 != 0) {
        // 0x80226F30: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80226F48;
    }
    // 0x80226F30: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226F34: lhu         $v0, 0x442($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X442);
    // 0x80226F38: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
L_80226F3C:
    // 0x80226F3C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226F40: j           L_80226FF4
    // 0x80226F44: sh          $v0, 0x442($s2)
    MEM_H(0X442, ctx->r18) = ctx->r2;
        goto L_80226FF4;
    // 0x80226F44: sh          $v0, 0x442($s2)
    MEM_H(0X442, ctx->r18) = ctx->r2;
L_80226F48:
    // 0x80226F48: j           L_80226FF4
    // 0x80226F4C: sb          $v0, 0x7($s1)
    MEM_B(0X7, ctx->r17) = ctx->r2;
        goto L_80226FF4;
    // 0x80226F4C: sb          $v0, 0x7($s1)
    MEM_B(0X7, ctx->r17) = ctx->r2;
L_80226F50:
    // 0x80226F50: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80226F54: bne         $v1, $v0, L_80226FF4
    if (ctx->r3 != ctx->r2) {
        // 0x80226F58: addiu       $a1, $zero, 0x20
        ctx->r5 = ADD32(0, 0X20);
            goto L_80226FF4;
    }
    // 0x80226F58: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80226F5C: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80226F60: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80226F64:
    // 0x80226F64: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226F68: jal         0x800616FC
    // 0x80226F6C: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_10;
    // 0x80226F6C: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    after_10:
    // 0x80226F70: j           L_80226FF4
    // 0x80226F74: nop

        goto L_80226FF4;
    // 0x80226F74: nop

L_80226F78:
    // 0x80226F78: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226F7C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80226F80: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80226F84: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226F88: bne         $v0, $zero, L_80226FF4
    if (ctx->r2 != 0) {
        // 0x80226F8C: nop
    
            goto L_80226FF4;
    }
    // 0x80226F8C: nop

    // 0x80226F90: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80226F94: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80226F98: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x80226F9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226FA0: sh          $zero, 0x442($s2)
    MEM_H(0X442, ctx->r18) = 0;
    // 0x80226FA4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226FA8: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    // 0x80226FAC: j           L_80226FC8
    // 0x80226FB0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_80226FC8;
    // 0x80226FB0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_80226FB4:
    // 0x80226FB4: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80226FB8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80226FBC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226FC0: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x80226FC4: sh          $zero, 0x442($s2)
    MEM_H(0X442, ctx->r18) = 0;
L_80226FC8:
    // 0x80226FC8: jal         0x8006036C
    // 0x80226FCC: nop

    func_8006036C_3B76C(rdram, ctx);
        goto after_11;
    // 0x80226FCC: nop

    after_11:
    // 0x80226FD0: jal         0x802284F8
    // 0x80226FD4: nop

    func_802284F8_ovl7(rdram, ctx);
        goto after_12;
    // 0x80226FD4: nop

    after_12:
    // 0x80226FD8: jal         0x802283FC
    // 0x80226FDC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802283FC_ovl7(rdram, ctx);
        goto after_13;
    // 0x80226FDC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_13:
    // 0x80226FE0: j           L_80226FF4
    // 0x80226FE4: nop

        goto L_80226FF4;
    // 0x80226FE4: nop

L_80226FE8:
    // 0x80226FE8: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x80226FEC: jal         0x80070050
    // 0x80226FF0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_14;
    // 0x80226FF0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_14:
L_80226FF4:
    // 0x80226FF4: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
L_80226FF8:
    // 0x80226FF8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226FFC: bne         $v1, $v0, L_80227020
    if (ctx->r3 != ctx->r2) {
        // 0x80227000: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80227020;
    }
    // 0x80227000: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227004: lw          $a0, 0xA4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XA4);
    // 0x80227008: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8022700C: beq         $v1, $v0, L_80227020
    if (ctx->r3 == ctx->r2) {
        // 0x80227010: nop
    
            goto L_80227020;
    }
    // 0x80227010: nop

    // 0x80227014: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80227018: jalr        $v0
    // 0x8022701C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_15;
    // 0x8022701C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_15:
L_80227020:
    // 0x80227020: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80227024: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x80227028: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x8022702C: beq         $v0, $zero, L_802270B8
    if (ctx->r2 == 0) {
        // 0x80227030: nop
    
            goto L_802270B8;
    }
    // 0x80227030: nop

    // 0x80227034: jal         0x8006072C
    // 0x80227038: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_16;
    // 0x80227038: nop

    after_16:
    // 0x8022703C: beq         $v0, $zero, L_802270B8
    if (ctx->r2 == 0) {
        // 0x80227040: nop
    
            goto L_802270B8;
    }
    // 0x80227040: nop

    // 0x80227044: jal         0x80061724
    // 0x80227048: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_17;
    // 0x80227048: nop

    after_17:
    // 0x8022704C: jal         0x80061090
    // 0x80227050: nop

    func_80061090_3C490(rdram, ctx);
        goto after_18;
    // 0x80227050: nop

    after_18:
    // 0x80227054: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227058: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022705C: jal         0x80036B00
    // 0x80227060: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_19;
    // 0x80227060: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_19:
    // 0x80227064: jal         0x8002A488
    // 0x80227068: nop

    func_8002A488_5888(rdram, ctx);
        goto after_20;
    // 0x80227068: nop

    after_20:
    // 0x8022706C: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    // 0x80227070: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227074: jal         0x8002A2F8
    // 0x80227078: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_21;
    // 0x80227078: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_21:
    // 0x8022707C: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80227080: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x80227084: bne         $v0, $zero, L_80227090
    if (ctx->r2 != 0) {
        // 0x80227088: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80227090;
    }
    // 0x80227088: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022708C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80227090:
    // 0x80227090: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x80227094: addiu       $a0, $s2, 0x428
    ctx->r4 = ADD32(ctx->r18, 0X428);
    // 0x80227098: addiu       $a1, $s2, 0x438
    ctx->r5 = ADD32(ctx->r18, 0X438);
    // 0x8022709C: lui         $v0, 0xF640
    ctx->r2 = S32(0XF640 << 16);
    // 0x802270A0: sw          $v0, 0x428($s2)
    MEM_W(0X428, ctx->r18) = ctx->r2;
    // 0x802270A4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x802270A8: sw          $v0, 0x42C($s2)
    MEM_W(0X42C, ctx->r18) = ctx->r2;
    // 0x802270AC: lui         $v0, 0x13C9
    ctx->r2 = S32(0X13C9 << 16);
    // 0x802270B0: jal         0x8004DD04
    // 0x802270B4: sw          $v0, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_22;
    // 0x802270B4: sw          $v0, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r2;
    after_22:
L_802270B8:
    // 0x802270B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802270BC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802270C0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802270C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802270C8: jr          $ra
    // 0x802270CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802270CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802261A0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802261A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802261A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802261A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802261AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802261B0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802261B4: bne         $v0, $zero, L_802261CC
    if (ctx->r2 != 0) {
        // 0x802261B8: nop
    
            goto L_802261CC;
    }
    // 0x802261B8: nop

    // 0x802261BC: jal         0x802283FC
    // 0x802261C0: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    func_802283FC_ovl7(rdram, ctx);
        goto after_0;
    // 0x802261C0: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_0:
    // 0x802261C4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802261C8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802261CC:
    // 0x802261CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802261D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802261D4: jr          $ra
    // 0x802261D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802261D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235334_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235334: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235338: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023533C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80235340: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x80235344: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80235348: jal         0x8003E6BC
    // 0x8023534C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_0;
    // 0x8023534C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80235350: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80235354: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    // 0x80235358: jal         0x8003E6BC
    // 0x8023535C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x8023535C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80235360: bne         $s0, $v0, L_80235388
    if (ctx->r16 != ctx->r2) {
        // 0x80235364: nop
    
            goto L_80235388;
    }
    // 0x80235364: nop

    // 0x80235368: jal         0x8006033C
    // 0x8023536C: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8023536C: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_2:
    // 0x80235370: bne         $v0, $zero, L_80235388
    if (ctx->r2 != 0) {
        // 0x80235374: nop
    
            goto L_80235388;
    }
    // 0x80235374: nop

    // 0x80235378: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8023537C: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x80235380: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235384: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80235388:
    // 0x80235388: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023538C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235390: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235394: jr          $ra
    // 0x80235398: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235398: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80235430_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235430: jr          $ra
    // 0x80235434: nop

    TRACE_RETURN()
    return;
    // 0x80235434: nop

    // 0x80235438: nop

    // 0x8023543C: nop

;}
RECOMP_FUNC void func_80234874_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234874: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234878: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023487C: jal         0x8004F4F8
    // 0x80234880: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80234880: nop

    after_0:
    // 0x80234884: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80234888: jr          $ra
    // 0x8023488C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023488C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230A48_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230A48: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80230A4C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80230A50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230A54: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80230A58: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80230A5C: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x80230A60: beq         $v0, $zero, L_80230CA8
    if (ctx->r2 == 0) {
        // 0x80230A64: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80230CA8;
    }
    // 0x80230A64: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80230A68: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230A6C: addu        $at, $at, $v0
    gpr jr_addend_80230A74 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230A70: lw          $v0, -0x60C8($at)
    ctx->r2 = ADD32(ctx->r1, -0X60C8);
    // 0x80230A74: jr          $v0
    // 0x80230A78: nop

    switch (jr_addend_80230A74 >> 2) {
        case 0: goto L_80230A7C; break;
        case 1: goto L_80230AA0; break;
        case 2: goto L_80230AEC; break;
        case 3: goto L_80230B1C; break;
        case 4: goto L_80230B48; break;
        case 5: goto L_80230B74; break;
        case 6: goto L_80230BA0; break;
        case 7: goto L_80230BE4; break;
        case 8: goto L_80230C24; break;
        case 9: goto L_80230C58; break;
        case 10: goto L_80230CA0; break;
        default: switch_error(__func__, 0x80230A74, 0x80239F38);
    }
    // 0x80230A78: nop

L_80230A7C:
    // 0x80230A7C: jal         0x80230CCC
    // 0x80230A80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80230CCC_ovl7(rdram, ctx);
        goto after_0;
    // 0x80230A80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80230A84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230A88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80230A8C: jal         0x80050294
    // 0x80230A90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80230A90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80230A94: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80230A98: j           L_80230C10
    // 0x80230A9C: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
        goto L_80230C10;
    // 0x80230A9C: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
L_80230AA0:
    // 0x80230AA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230AA4: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80230AA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230AAC: jal         0x8004DA90
    // 0x80230AB0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80230AB0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80230AB4: jal         0x80230D58
    // 0x80230AB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80230D58_ovl7(rdram, ctx);
        goto after_3;
    // 0x80230AB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80230ABC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230AC0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80230AC4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80230AC8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80230ACC: bne         $v0, $zero, L_80230CAC
    if (ctx->r2 != 0) {
        // 0x80230AD0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230CAC;
    }
    // 0x80230AD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230AD4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80230AD8: jal         0x80050294
    // 0x80230ADC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80230ADC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80230AE0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230AE4: j           L_80230BC8
    // 0x80230AE8: addiu       $a1, $zero, 0xB1
    ctx->r5 = ADD32(0, 0XB1);
        goto L_80230BC8;
    // 0x80230AE8: addiu       $a1, $zero, 0xB1
    ctx->r5 = ADD32(0, 0XB1);
L_80230AEC:
    // 0x80230AEC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230AF0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80230AF4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80230AF8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230AFC: bne         $v0, $zero, L_80230CAC
    if (ctx->r2 != 0) {
        // 0x80230B00: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230CAC;
    }
    // 0x80230B00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230B04: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80230B08: jal         0x80050294
    // 0x80230B0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80230B0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80230B10: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230B14: j           L_80230BC8
    // 0x80230B18: addiu       $a1, $zero, 0xB2
    ctx->r5 = ADD32(0, 0XB2);
        goto L_80230BC8;
    // 0x80230B18: addiu       $a1, $zero, 0xB2
    ctx->r5 = ADD32(0, 0XB2);
L_80230B1C:
    // 0x80230B1C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230B20: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80230B24: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80230B28: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230B2C: bne         $v0, $zero, L_80230CAC
    if (ctx->r2 != 0) {
        // 0x80230B30: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230CAC;
    }
    // 0x80230B30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230B34: jal         0x800600F8
    // 0x80230B38: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_6;
    // 0x80230B38: nop

    after_6:
    // 0x80230B3C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230B40: j           L_80230BDC
    // 0x80230B44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80230BDC;
    // 0x80230B44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80230B48:
    // 0x80230B48: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80230B4C: lbu         $v1, -0x3A47($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A47);
    // 0x80230B50: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230B54: bne         $v1, $v0, L_80230CAC
    if (ctx->r3 != ctx->r2) {
        // 0x80230B58: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230CAC;
    }
    // 0x80230B58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230B5C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80230B60: jal         0x80050294
    // 0x80230B64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x80230B64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80230B68: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230B6C: j           L_80230BC8
    // 0x80230B70: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
        goto L_80230BC8;
    // 0x80230B70: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
L_80230B74:
    // 0x80230B74: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230B78: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80230B7C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80230B80: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230B84: bne         $v0, $zero, L_80230CAC
    if (ctx->r2 != 0) {
        // 0x80230B88: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230CAC;
    }
    // 0x80230B88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230B8C: jal         0x800600F8
    // 0x80230B90: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_8;
    // 0x80230B90: nop

    after_8:
    // 0x80230B94: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230B98: j           L_80230BDC
    // 0x80230B9C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80230BDC;
    // 0x80230B9C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80230BA0:
    // 0x80230BA0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80230BA4: lbu         $v1, -0x3A47($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A47);
    // 0x80230BA8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80230BAC: bne         $v1, $v0, L_80230CAC
    if (ctx->r3 != ctx->r2) {
        // 0x80230BB0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230CAC;
    }
    // 0x80230BB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230BB4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80230BB8: jal         0x80050294
    // 0x80230BBC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_9;
    // 0x80230BBC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x80230BC0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230BC4: addiu       $a1, $zero, 0xB6
    ctx->r5 = ADD32(0, 0XB6);
L_80230BC8:
    // 0x80230BC8: jal         0x800616FC
    // 0x80230BCC: nop

    func_800616FC_3CAFC(rdram, ctx);
        goto after_10;
    // 0x80230BCC: nop

    after_10:
    // 0x80230BD0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230BD4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230BD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80230BDC:
    // 0x80230BDC: j           L_80230CA8
    // 0x80230BE0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80230CA8;
    // 0x80230BE0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80230BE4:
    // 0x80230BE4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230BE8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80230BEC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80230BF0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230BF4: bne         $v0, $zero, L_80230CAC
    if (ctx->r2 != 0) {
        // 0x80230BF8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230CAC;
    }
    // 0x80230BF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230BFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80230C00: jal         0x80050294
    // 0x80230C04: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_11;
    // 0x80230C04: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_11:
    // 0x80230C08: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80230C0C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
L_80230C10:
    // 0x80230C10: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230C14: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80230C18: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80230C1C: j           L_80230CA8
    // 0x80230C20: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_80230CA8;
    // 0x80230C20: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_80230C24:
    // 0x80230C24: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80230C28: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    // 0x80230C2C: jal         0x8004FA7C
    // 0x80230C30: addiu       $a0, $zero, 0x834
    ctx->r4 = ADD32(0, 0X834);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_12;
    // 0x80230C30: addiu       $a0, $zero, 0x834
    ctx->r4 = ADD32(0, 0X834);
    after_12:
    // 0x80230C34: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80230C38: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80230C3C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80230C40: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230C44: bne         $v0, $zero, L_80230C58
    if (ctx->r2 != 0) {
        // 0x80230C48: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80230C58;
    }
    // 0x80230C48: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80230C4C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230C50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230C54: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80230C58:
    // 0x80230C58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230C5C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80230C60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230C64: jal         0x8004DA90
    // 0x80230C68: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_13;
    // 0x80230C68: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_13:
    // 0x80230C6C: jal         0x80230D58
    // 0x80230C70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80230D58_ovl7(rdram, ctx);
        goto after_14;
    // 0x80230C70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_14:
    // 0x80230C74: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230C78: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80230C7C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80230C80: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80230C84: bne         $v0, $zero, L_80230CAC
    if (ctx->r2 != 0) {
        // 0x80230C88: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230CAC;
    }
    // 0x80230C88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230C8C: jal         0x800600F8
    // 0x80230C90: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_15;
    // 0x80230C90: nop

    after_15:
    // 0x80230C94: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80230C98: j           L_80230CA8
    // 0x80230C9C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80230CA8;
    // 0x80230C9C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80230CA0:
    // 0x80230CA0: jal         0x8004F418
    // 0x80230CA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_16;
    // 0x80230CA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
L_80230CA8:
    // 0x80230CA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80230CAC:
    // 0x80230CAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80230CB0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80230CB4: jal         0x80047284
    // 0x80230CB8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_17;
    // 0x80230CB8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_17:
    // 0x80230CBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80230CC0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80230CC4: jr          $ra
    // 0x80230CC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80230CC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225CB0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225CB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225CB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225CB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225CBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225CC0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225CC4: bne         $v0, $zero, L_80225CFC
    if (ctx->r2 != 0) {
        // 0x80225CC8: nop
    
            goto L_80225CFC;
    }
    // 0x80225CC8: nop

    // 0x80225CCC: jal         0x8004EEAC
    // 0x80225CD0: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x80225CD0: nop

    after_0:
    // 0x80225CD4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225CD8: beq         $v1, $zero, L_80225CF4
    if (ctx->r3 == 0) {
        // 0x80225CDC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225CF4;
    }
    // 0x80225CDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225CE0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225CE4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80225CE8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80225CEC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225CF0: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
L_80225CF4:
    // 0x80225CF4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225CF8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225CFC:
    // 0x80225CFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225D00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225D04: jr          $ra
    // 0x80225D08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225D08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802307F0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802307F0: lbu         $a1, 0xA($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XA);
    // 0x802307F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802307F8: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x802307FC: beq         $v1, $v0, L_80230834
    if (ctx->r3 == ctx->r2) {
        // 0x80230800: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80230834;
    }
    // 0x80230800: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80230804: beql        $v0, $zero, L_8023081C
    if (ctx->r2 == 0) {
        // 0x80230808: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023081C;
    }
    goto skip_0;
    // 0x80230808: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023080C: beq         $v1, $zero, L_8023082C
    if (ctx->r3 == 0) {
        // 0x80230810: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_8023082C;
    }
    // 0x80230810: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80230814: j           L_80230874
    // 0x80230818: nop

        goto L_80230874;
    // 0x80230818: nop

L_8023081C:
    // 0x8023081C: beq         $v1, $v0, L_80230860
    if (ctx->r3 == ctx->r2) {
        // 0x80230820: nop
    
            goto L_80230860;
    }
    // 0x80230820: nop

    // 0x80230824: j           L_80230874
    // 0x80230828: nop

        goto L_80230874;
    // 0x80230828: nop

L_8023082C:
    // 0x8023082C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80230830: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_80230834:
    // 0x80230834: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230838: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8023083C: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x80230840: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230844: beq         $v0, $zero, L_80230874
    if (ctx->r2 == 0) {
        // 0x80230848: addiu       $v1, $zero, 0x8
        ctx->r3 = ADD32(0, 0X8);
            goto L_80230874;
    }
    // 0x80230848: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8023084C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80230850: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80230854: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230858: j           L_80230874
    // 0x8023085C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
        goto L_80230874;
    // 0x8023085C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80230860:
    // 0x80230860: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80230864: bgez        $v0, L_80230874
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80230868: addiu       $v0, $a1, -0x1
        ctx->r2 = ADD32(ctx->r5, -0X1);
            goto L_80230874;
    }
    // 0x80230868: addiu       $v0, $a1, -0x1
    ctx->r2 = ADD32(ctx->r5, -0X1);
    // 0x8023086C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80230870: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_80230874:
    // 0x80230874: jr          $ra
    // 0x80230878: nop

    TRACE_RETURN()
    return;
    // 0x80230878: nop

    // 0x8023087C: nop

;}
RECOMP_FUNC void func_8022E88C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E88C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E890: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E894: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E898: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E89C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E8A0: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8022E8A4: beq         $v1, $zero, L_8022E8C0
    if (ctx->r3 == 0) {
        // 0x8022E8A8: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8022E8C0;
    }
    // 0x8022E8A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E8AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E8B0: beq         $v1, $v0, L_8022E8C8
    if (ctx->r3 == ctx->r2) {
        // 0x8022E8B4: nop
    
            goto L_8022E8C8;
    }
    // 0x8022E8B4: nop

    // 0x8022E8B8: j           L_8022E8F4
    // 0x8022E8BC: nop

        goto L_8022E8F4;
    // 0x8022E8BC: nop

L_8022E8C0:
    // 0x8022E8C0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022E8C4: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
L_8022E8C8:
    // 0x8022E8C8: jal         0x8006033C
    // 0x8022E8CC: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022E8CC: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_0:
    // 0x8022E8D0: beq         $v0, $zero, L_8022E8F4
    if (ctx->r2 == 0) {
        // 0x8022E8D4: nop
    
            goto L_8022E8F4;
    }
    // 0x8022E8D4: nop

    // 0x8022E8D8: jal         0x80060590
    // 0x8022E8DC: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_80060590_3B990(rdram, ctx);
        goto after_1;
    // 0x8022E8DC: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_1:
    // 0x8022E8E0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E8E4: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8022E8E8: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022E8EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E8F0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022E8F4:
    // 0x8022E8F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E8F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E8FC: jr          $ra
    // 0x8022E900: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E900: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235470_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235470: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80235474: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80235478: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023547C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80235480: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80235484: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80235488: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8023548C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80235490: jal         0x8004D5D4
    // 0x80235494: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80235494: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80235498: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x8023549C: jal         0x8002C654
    // 0x802354A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x802354A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x802354A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802354A8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802354AC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802354B0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x802354B4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802354B8: jal         0x80031DA8
    // 0x802354BC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x802354BC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x802354C0: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x802354C4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802354C8: jal         0x800319B4
    // 0x802354CC: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    func_800319B4_CDB4(rdram, ctx);
        goto after_3;
    // 0x802354CC: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    after_3:
    // 0x802354D0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802354D4: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x802354D8: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x802354DC: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x802354E0: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x802354E4: sw          $zero, 0x50($s0)
    MEM_W(0X50, ctx->r16) = 0;
    // 0x802354E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802354EC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802354F0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802354F4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802354F8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802354FC: jr          $ra
    // 0x80235500: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80235500: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022EA50_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EA50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EA54: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EA58: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022EA5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022EA60: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022EA64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EA68: lbu         $a0, 0xA($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XA);
    // 0x8022EA6C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8022EA70: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022EA74: beq         $v1, $s2, L_8022EAAC
    if (ctx->r3 == ctx->r18) {
        // 0x8022EA78: addiu       $s0, $s1, 0x348
        ctx->r16 = ADD32(ctx->r17, 0X348);
            goto L_8022EAAC;
    }
    // 0x8022EA78: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    // 0x8022EA7C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022EA80: beql        $v0, $zero, L_8022EA98
    if (ctx->r2 == 0) {
        // 0x8022EA84: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022EA98;
    }
    goto skip_0;
    // 0x8022EA84: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022EA88: beq         $v1, $zero, L_8022EAA8
    if (ctx->r3 == 0) {
        // 0x8022EA8C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022EAA8;
    }
    // 0x8022EA8C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022EA90: j           L_8022EB90
    // 0x8022EA94: nop

        goto L_8022EB90;
    // 0x8022EA94: nop

L_8022EA98:
    // 0x8022EA98: beq         $v1, $v0, L_8022EAE4
    if (ctx->r3 == ctx->r2) {
        // 0x8022EA9C: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022EAE4;
    }
    // 0x8022EA9C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022EAA0: j           L_8022EB90
    // 0x8022EAA4: nop

        goto L_8022EB90;
    // 0x8022EAA4: nop

L_8022EAA8:
    // 0x8022EAA8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022EAAC:
    // 0x8022EAAC: jal         0x8006033C
    // 0x8022EAB0: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022EAB0: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_0:
    // 0x8022EAB4: beq         $v0, $zero, L_8022EB90
    if (ctx->r2 == 0) {
        // 0x8022EAB8: nop
    
            goto L_8022EB90;
    }
    // 0x8022EAB8: nop

    // 0x8022EABC: jal         0x80060590
    // 0x8022EAC0: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_80060590_3B990(rdram, ctx);
        goto after_1;
    // 0x8022EAC0: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_1:
    // 0x8022EAC4: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022EAC8: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022EACC: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
    // 0x8022EAD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EAD4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022EAD8: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x8022EADC: j           L_8022EB90
    // 0x8022EAE0: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_8022EB90;
    // 0x8022EAE0: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8022EAE4:
    // 0x8022EAE4: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022EAE8: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8022EAEC: addiu       $s0, $s0, -0x6D2C
    ctx->r16 = ADD32(ctx->r16, -0X6D2C);
    // 0x8022EAF0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022EAF4: jal         0x8004F820
    // 0x8022EAF8: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022EAF8: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    after_2:
    // 0x8022EAFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022EB00: addiu       $a1, $zero, 0x140
    ctx->r5 = ADD32(0, 0X140);
    // 0x8022EB04: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x8022EB08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EB0C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022EB10: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EB14: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022EB18: jal         0x8004DA90
    // 0x8022EB1C: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022EB1C: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    after_3:
    // 0x8022EB20: jal         0x80040F30
    // 0x8022EB24: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_4;
    // 0x8022EB24: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8022EB28: lh          $v1, 0x14($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X14);
    // 0x8022EB2C: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x8022EB30: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022EB34: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022EB38: mflo        $v1
    ctx->r3 = lo;
    // 0x8022EB3C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022EB40: lh          $a0, -0x6D28($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X6D28);
    // 0x8022EB44: lh          $v0, 0x18($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X18);
    // 0x8022EB48: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022EB4C: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022EB50: mflo        $v0
    ctx->r2 = lo;
    // 0x8022EB54: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EB58: slti        $v1, $v1, 0x800
    ctx->r3 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x8022EB5C: beq         $v1, $zero, L_8022EB78
    if (ctx->r3 == 0) {
        // 0x8022EB60: nop
    
            goto L_8022EB78;
    }
    // 0x8022EB60: nop

    // 0x8022EB64: jal         0x8006036C
    // 0x8022EB68: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x8022EB68: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_5:
    // 0x8022EB6C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022EB70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EB74: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022EB78:
    // 0x8022EB78: lb          $v0, 0xA6($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA6);
    // 0x8022EB7C: bne         $v0, $s2, L_8022EB90
    if (ctx->r2 != ctx->r18) {
        // 0x8022EB80: addiu       $a0, $zero, 0x10B
        ctx->r4 = ADD32(0, 0X10B);
            goto L_8022EB90;
    }
    // 0x8022EB80: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    // 0x8022EB84: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022EB88: jal         0x8002A2F8
    // 0x8022EB8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_6;
    // 0x8022EB8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
L_8022EB90:
    // 0x8022EB90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022EB94: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022EB98: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022EB9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EBA0: jr          $ra
    // 0x8022EBA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022EBA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F110_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F114: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F118: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F11C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F120: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022F124: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022F128: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022F12C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022F130: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022F134: jal         0x8004D5D4
    // 0x8022F138: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022F138: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022F13C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F140: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022F144: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022F148: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022F14C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022F150: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022F154: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022F158: jal         0x8003E934
    // 0x8022F15C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022F15C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x8022F160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F164: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F168: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022F16C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F170: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022F174: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022F178: addiu       $v0, $v0, -0x6D20
    ctx->r2 = ADD32(ctx->r2, -0X6D20);
    // 0x8022F17C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F180: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022F184: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022F188: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022F18C: jal         0x80050294
    // 0x8022F190: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022F190: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022F194: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022F198: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022F19C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F1A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F1A4: jr          $ra
    // 0x8022F1A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F1A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022F1AC: nop

;}
RECOMP_FUNC void func_8022A1B0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A1B0: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8022A1B4: beq         $v1, $zero, L_8022A1D0
    if (ctx->r3 == 0) {
        // 0x8022A1B8: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_8022A1D0;
    }
    // 0x8022A1B8: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x8022A1BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A1C0: beq         $v1, $v0, L_8022A1E4
    if (ctx->r3 == ctx->r2) {
        // 0x8022A1C4: nop
    
            goto L_8022A1E4;
    }
    // 0x8022A1C4: nop

    // 0x8022A1C8: j           L_8022A208
    // 0x8022A1CC: nop

        goto L_8022A208;
    // 0x8022A1CC: nop

L_8022A1D0:
    // 0x8022A1D0: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022A1D4: sh          $v0, 0x34C($a0)
    MEM_H(0X34C, ctx->r4) = ctx->r2;
    // 0x8022A1D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A1DC: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022A1E0: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_8022A1E4:
    // 0x8022A1E4: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022A1E8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A1EC: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022A1F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A1F4: bgez        $v0, L_8022A208
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A1F8: nop
    
            goto L_8022A208;
    }
    // 0x8022A1F8: nop

    // 0x8022A1FC: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8022A200: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022A204: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_8022A208:
    // 0x8022A208: jr          $ra
    // 0x8022A20C: nop

    TRACE_RETURN()
    return;
    // 0x8022A20C: nop

;}
RECOMP_FUNC void func_8022C318_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C318: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C31C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C320: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C324: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C328: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022C32C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022C330: sh          $zero, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = 0;
    // 0x8022C334: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022C338: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022C33C: jal         0x8022E3F8
    // 0x8022C340: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    func_8022E3F8_ovl7(rdram, ctx);
        goto after_0;
    // 0x8022C340: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022C344: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C348: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022C34C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022C350: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022C354: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022C358: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022C35C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C360: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C364: jr          $ra
    // 0x8022C368: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C368: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E0C0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E0C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022E0C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E0C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E0CC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E0D0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022E0D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E0D8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022E0DC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022E0E0: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x8022E0E4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022E0E8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022E0EC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022E0F0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022E0F4: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022E0F8: lhu         $t0, 0x56($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E0FC: lbu         $t1, 0xAC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022E100: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022E104: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022E108: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E10C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022E110: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x8022E114: sh          $t0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r8;
    // 0x8022E118: jal         0x8004F820
    // 0x8022E11C: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022E11C: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    after_0:
    // 0x8022E120: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E124: bgez        $v0, L_8022E154
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022E128: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022E154;
    }
    // 0x8022E128: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022E12C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E130: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022E134: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022E138: jal         0x8004F820
    // 0x8022E13C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022E13C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x8022E140: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E144: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E148: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022E14C: j           L_8022E170
    // 0x8022E150: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022E170;
    // 0x8022E150: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022E154:
    // 0x8022E154: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E158: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022E15C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022E160: jal         0x8004F820
    // 0x8022E164: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022E164: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022E168: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E16C: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022E170:
    // 0x8022E170: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E174: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022E178: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022E17C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E180: jal         0x800610AC
    // 0x8022E184: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_3;
    // 0x8022E184: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8022E188: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022E18C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E190: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022E194: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E198: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E19C: jr          $ra
    // 0x8022E1A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022E1A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022ED90_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ED90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022ED94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022ED98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022ED9C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022EDA0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022EDA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EDA8: jal         0x8009A3B4
    // 0x8022EDAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022EDAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022EDB0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022EDB4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022EDB8: jal         0x8009A3B4
    // 0x8022EDBC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022EDBC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022EDC0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022EDC4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022EDC8: jal         0x8009A3B4
    // 0x8022EDCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022EDCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022EDD0: jal         0x8022EE28
    // 0x8022EDD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022EE28_ovl7(rdram, ctx);
        goto after_3;
    // 0x8022EDD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022EDD8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022EDDC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022EDE0: beq         $v0, $zero, L_8022EDF8
    if (ctx->r2 == 0) {
        // 0x8022EDE4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022EDF8;
    }
    // 0x8022EDE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EDE8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022EDEC: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022EDF0: jal         0x8003B564
    // 0x8022EDF4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x8022EDF4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8022EDF8:
    // 0x8022EDF8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022EDFC: beq         $v0, $zero, L_8022EE14
    if (ctx->r2 == 0) {
        // 0x8022EE00: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8022EE14;
    }
    // 0x8022EE00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EE04: jal         0x8005044C
    // 0x8022EE08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8022EE08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022EE0C: j           L_8022EE18
    // 0x8022EE10: nop

        goto L_8022EE18;
    // 0x8022EE10: nop

L_8022EE14:
    // 0x8022EE14: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022EE18:
    // 0x8022EE18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EE1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EE20: jr          $ra
    // 0x8022EE24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EE24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232490_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232490: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232494: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232498: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023249C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802324A0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802324A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802324A8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802324AC: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x802324B0: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x802324B4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x802324B8: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x802324BC: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802324C0: jal         0x8004D5D4
    // 0x802324C4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802324C4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x802324C8: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x802324CC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802324D0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802324D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802324D8: lhu         $v1, -0x6BD8($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X6BD8);
    // 0x802324DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802324E0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802324E4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802324E8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802324EC: addiu       $v0, $v0, -0x6BE4
    ctx->r2 = ADD32(ctx->r2, -0X6BE4);
    // 0x802324F0: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x802324F4: sh          $v1, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r3;
    // 0x802324F8: sh          $v1, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r3;
    // 0x802324FC: jal         0x8003E934
    // 0x80232500: sh          $v1, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80232500: sh          $v1, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r3;
    after_1:
    // 0x80232504: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    // 0x80232508: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023250C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80232510: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80232514: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232518: jal         0x8009A3B4
    // 0x8023251C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023251C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_2:
    // 0x80232520: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x80232524: lui         $v1, 0x7FFF
    ctx->r3 = S32(0X7FFF << 16);
    // 0x80232528: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8023252C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80232530: addiu       $v0, $v0, -0x6BF0
    ctx->r2 = ADD32(ctx->r2, -0X6BF0);
    // 0x80232534: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80232538: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023253C: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80232540: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80232544: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80232548: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8023254C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80232550: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80232554: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x80232558: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8023255C: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80232560: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    // 0x80232564: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80232568: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023256C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80232570: sh          $zero, 0x348($s0)
    MEM_H(0X348, ctx->r16) = 0;
    // 0x80232574: sw          $zero, 0x354($s0)
    MEM_W(0X354, ctx->r16) = 0;
    // 0x80232578: sw          $zero, 0x358($s0)
    MEM_W(0X358, ctx->r16) = 0;
    // 0x8023257C: beq         $a0, $v0, L_802325B4
    if (ctx->r4 == ctx->r2) {
        // 0x80232580: sw          $v1, 0x350($s0)
        MEM_W(0X350, ctx->r16) = ctx->r3;
            goto L_802325B4;
    }
    // 0x80232580: sw          $v1, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r3;
    // 0x80232584: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80232588: bnel        $v0, $zero, L_8023259C
    if (ctx->r2 != 0) {
        // 0x8023258C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023259C;
    }
    goto skip_0;
    // 0x8023258C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x80232590: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232594: beq         $a0, $v0, L_802325D0
    if (ctx->r4 == ctx->r2) {
        // 0x80232598: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802325D0;
    }
    // 0x80232598: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023259C:
    // 0x8023259C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802325A0: jal         0x80050294
    // 0x802325A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x802325A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x802325A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802325AC: j           L_802325F0
    // 0x802325B0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_802325F0;
    // 0x802325B0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802325B4:
    // 0x802325B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802325B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802325BC: jal         0x80050294
    // 0x802325C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x802325C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x802325C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802325C8: j           L_802325F0
    // 0x802325CC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_802325F0;
    // 0x802325CC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802325D0:
    // 0x802325D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802325D4: jal         0x80050294
    // 0x802325D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x802325D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x802325DC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802325E0: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x802325E4: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x802325E8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x802325EC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_802325F0:
    // 0x802325F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802325F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802325F8: jr          $ra
    // 0x802325FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802325FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228EC8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228EC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228ECC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228ED0: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80228ED4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228ED8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228EDC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228EE0: lw          $v0, -0x7740($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7740);
    // 0x80228EE4: jalr        $v0
    // 0x80228EE8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228EE8: nop

    after_0:
    // 0x80228EEC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228EF0: jr          $ra
    // 0x80228EF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228EF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228C30_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228C34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228C38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228C3C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228C40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228C44: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80228C48: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80228C4C: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80228C50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228C54: beq         $v1, $v0, L_80228D88
    if (ctx->r3 == ctx->r2) {
        // 0x80228C58: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80228D88;
    }
    // 0x80228C58: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80228C5C: beql        $v0, $zero, L_80228C74
    if (ctx->r2 == 0) {
        // 0x80228C60: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80228C74;
    }
    goto skip_0;
    // 0x80228C60: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80228C64: beq         $v1, $zero, L_80228C84
    if (ctx->r3 == 0) {
        // 0x80228C68: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80228C84;
    }
    // 0x80228C68: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80228C6C: j           L_80228E78
    // 0x80228C70: nop

        goto L_80228E78;
    // 0x80228C70: nop

L_80228C74:
    // 0x80228C74: beq         $v1, $v0, L_80228DE8
    if (ctx->r3 == ctx->r2) {
        // 0x80228C78: addiu       $v0, $zero, 0x800
        ctx->r2 = ADD32(0, 0X800);
            goto L_80228DE8;
    }
    // 0x80228C78: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80228C7C: j           L_80228E78
    // 0x80228C80: nop

        goto L_80228E78;
    // 0x80228C80: nop

L_80228C84:
    // 0x80228C84: jal         0x800616FC
    // 0x80228C88: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x80228C88: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    after_0:
    // 0x80228C8C: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80228C90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228C94: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x80228C98: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80228C9C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80228CA0: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80228CA4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80228CA8: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x80228CAC: addiu       $v0, $zero, -0xD12
    ctx->r2 = ADD32(0, -0XD12);
    // 0x80228CB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228CB4: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x80228CB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228CBC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228CC0: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x80228CC4: addiu       $v0, $zero, -0x4E89
    ctx->r2 = ADD32(0, -0X4E89);
    // 0x80228CC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228CCC: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x80228CD0: lui         $v0, 0xF2EE
    ctx->r2 = S32(0XF2EE << 16);
    // 0x80228CD4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228CD8: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x80228CDC: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80228CE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228CE4: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x80228CE8: lui         $v0, 0xB177
    ctx->r2 = S32(0XB177 << 16);
    // 0x80228CEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228CF0: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80228CF4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228CF8: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x80228CFC: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80228D00: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228D04: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x80228D08: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x80228D0C: addiu       $a0, $s1, 0x438
    ctx->r4 = ADD32(ctx->r17, 0X438);
    // 0x80228D10: jal         0x8004EC38
    // 0x80228D14: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x80228D14: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_1:
    // 0x80228D18: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80228D1C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228D20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228D24: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x80228D28: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228D2C: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x80228D30: jal         0x8005F6B4
    // 0x80228D34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_2;
    // 0x80228D34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80228D38: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80228D3C: lui         $v0, 0xF440
    ctx->r2 = S32(0XF440 << 16);
    // 0x80228D40: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80228D44: sw          $v0, 0x9E0($at)
    MEM_W(0X9E0, ctx->r1) = ctx->r2;
    // 0x80228D48: lui         $v0, 0xFF7C
    ctx->r2 = S32(0XFF7C << 16);
    // 0x80228D4C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80228D50: sw          $v0, 0x9E4($at)
    MEM_W(0X9E4, ctx->r1) = ctx->r2;
    // 0x80228D54: lui         $v0, 0xB2B9
    ctx->r2 = S32(0XB2B9 << 16);
    // 0x80228D58: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80228D5C: sw          $v0, 0x9E8($at)
    MEM_W(0X9E8, ctx->r1) = ctx->r2;
    // 0x80228D60: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80228D64: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80228D68: sw          $v0, 0xA10($at)
    MEM_W(0XA10, ctx->r1) = ctx->r2;
    // 0x80228D6C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80228D70: sw          $zero, 0xA14($at)
    MEM_W(0XA14, ctx->r1) = 0;
    // 0x80228D74: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80228D78: sw          $zero, 0xA18($at)
    MEM_W(0XA18, ctx->r1) = 0;
    // 0x80228D7C: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80228D80: j           L_80228DD8
    // 0x80228D84: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
        goto L_80228DD8;
    // 0x80228D84: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
L_80228D88:
    // 0x80228D88: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228D8C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80228D90: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80228D94: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228D98: bne         $v0, $zero, L_80228E78
    if (ctx->r2 != 0) {
        // 0x80228D9C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80228E78;
    }
    // 0x80228D9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80228DA0: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80228DA4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80228DA8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80228DAC: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80228DB0: sb          $a0, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r4;
    // 0x80228DB4: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80228DB8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228DBC: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80228DC0: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80228DC4: addiu       $v0, $zero, 0x320
    ctx->r2 = ADD32(0, 0X320);
    // 0x80228DC8: sh          $v0, 0x44($v1)
    MEM_H(0X44, ctx->r3) = ctx->r2;
    // 0x80228DCC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228DD0: jal         0x80034844
    // 0x80228DD4: sb          $a0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r4;
    func_80034844_FC44(rdram, ctx);
        goto after_3;
    // 0x80228DD4: sb          $a0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r4;
    after_3:
L_80228DD8:
    // 0x80228DD8: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80228DDC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228DE0: j           L_80228E78
    // 0x80228DE4: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80228E78;
    // 0x80228DE4: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80228DE8:
    // 0x80228DE8: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x80228DEC: lh          $v1, 0x56($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X56);
    // 0x80228DF0: bne         $v1, $v0, L_80228E40
    if (ctx->r3 != ctx->r2) {
        // 0x80228DF4: nop
    
            goto L_80228E40;
    }
    // 0x80228DF4: nop

    // 0x80228DF8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228DFC: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80228E00: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80228E04: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228E08: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x80228E0C: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x80228E10: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80228E14: jal         0x8004EC38
    // 0x80228E18: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_4;
    // 0x80228E18: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_4:
    // 0x80228E1C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228E20: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x80228E24: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80228E28: lh          $v0, 0x18($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X18);
    // 0x80228E2C: slti        $v0, $v0, -0x3B23
    ctx->r2 = SIGNED(ctx->r2) < -0X3B23 ? 1 : 0;
    // 0x80228E30: bne         $v0, $zero, L_80228E58
    if (ctx->r2 != 0) {
        // 0x80228E34: addiu       $v0, $zero, 0xC00
        ctx->r2 = ADD32(0, 0XC00);
            goto L_80228E58;
    }
    // 0x80228E34: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x80228E38: j           L_80228E58
    // 0x80228E3C: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
        goto L_80228E58;
    // 0x80228E3C: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
L_80228E40:
    // 0x80228E40: lh          $v0, 0x14($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X14);
    // 0x80228E44: slti        $v0, $v0, 0x12D
    ctx->r2 = SIGNED(ctx->r2) < 0X12D ? 1 : 0;
    // 0x80228E48: bne         $v0, $zero, L_80228E58
    if (ctx->r2 != 0) {
        // 0x80228E4C: nop
    
            goto L_80228E58;
    }
    // 0x80228E4C: nop

    // 0x80228E50: jal         0x8004F418
    // 0x80228E54: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_5;
    // 0x80228E54: nop

    after_5:
L_80228E58:
    // 0x80228E58: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80228E5C: lb          $v0, 0x0($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X0);
    // 0x80228E60: bne         $v0, $zero, L_80228E78
    if (ctx->r2 != 0) {
        // 0x80228E64: nop
    
            goto L_80228E78;
    }
    // 0x80228E64: nop

    // 0x80228E68: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80228E6C: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80228E70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228E74: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80228E78:
    // 0x80228E78: jal         0x8006072C
    // 0x80228E7C: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_6;
    // 0x80228E7C: nop

    after_6:
    // 0x80228E80: beq         $v0, $zero, L_80228EB4
    if (ctx->r2 == 0) {
        // 0x80228E84: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228EB4;
    }
    // 0x80228E84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228E88: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80228E8C: bne         $v1, $v0, L_80228EB4
    if (ctx->r3 != ctx->r2) {
        // 0x80228E90: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228EB4;
    }
    // 0x80228E90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228E94: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228E98: sb          $v0, -0x5F30($at)
    MEM_B(-0X5F30, ctx->r1) = ctx->r2;
    // 0x80228E9C: jal         0x80061798
    // 0x80228EA0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_7;
    // 0x80228EA0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_7:
    // 0x80228EA4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80228EA8: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80228EAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228EB0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80228EB4:
    // 0x80228EB4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228EB8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228EBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228EC0: jr          $ra
    // 0x80228EC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228EC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E4F0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E4F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E4F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E4F8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022E4FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E500: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E504: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E508: lw          $v0, -0x6D40($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6D40);
    // 0x8022E50C: jalr        $v0
    // 0x8022E510: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E510: nop

    after_0:
    // 0x8022E514: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E518: jr          $ra
    // 0x8022E51C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E51C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235AC0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235AC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235AC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235AC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235ACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235AD0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80235AD4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235AD8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80235ADC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80235AE0: jal         0x80071A70
    // 0x80235AE4: lw          $a0, -0x6680($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6680);
    func_80071A70_4CE70(rdram, ctx);
        goto after_0;
    // 0x80235AE4: lw          $a0, -0x6680($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6680);
    after_0:
    // 0x80235AE8: bne         $v0, $zero, L_80235B00
    if (ctx->r2 != 0) {
        // 0x80235AEC: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_80235B00;
    }
    // 0x80235AEC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80235AF0: jal         0x8004F62C
    // 0x80235AF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x80235AF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80235AF8: j           L_80235B50
    // 0x80235AFC: nop

        goto L_80235B50;
    // 0x80235AFC: nop

L_80235B00:
    // 0x80235B00: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80235B04: bne         $v1, $zero, L_80235B14
    if (ctx->r3 != 0) {
        // 0x80235B08: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80235B14;
    }
    // 0x80235B08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80235B0C: j           L_80235B24
    // 0x80235B10: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
        goto L_80235B24;
    // 0x80235B10: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
L_80235B14:
    // 0x80235B14: bne         $v1, $v0, L_80235B20
    if (ctx->r3 != ctx->r2) {
        // 0x80235B18: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80235B20;
    }
    // 0x80235B18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235B1C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80235B20:
    // 0x80235B20: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_80235B24:
    // 0x80235B24: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80235B28: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80235B2C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235B30: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80235B34: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235B38: lw          $v1, -0x65C4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X65C4);
    // 0x80235B3C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235B40: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x80235B44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235B48: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80235B4C: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_80235B50:
    // 0x80235B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235B54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235B58: jr          $ra
    // 0x80235B5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235B5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233B48_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233B48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233B4C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233B50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233B54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233B58: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80233B5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233B60: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80233B64: beq         $v1, $v0, L_80233BA8
    if (ctx->r3 == ctx->r2) {
        // 0x80233B68: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80233BA8;
    }
    // 0x80233B68: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80233B6C: beq         $v0, $zero, L_80233BFC
    if (ctx->r2 == 0) {
        // 0x80233B70: nop
    
            goto L_80233BFC;
    }
    // 0x80233B70: nop

    // 0x80233B74: bne         $v1, $zero, L_80233BFC
    if (ctx->r3 != 0) {
        // 0x80233B78: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80233BFC;
    }
    // 0x80233B78: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80233B7C: addiu       $a0, $zero, 0x156
    ctx->r4 = ADD32(0, 0X156);
    // 0x80233B80: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80233B84: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80233B88: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x80233B8C: sh          $v0, 0xC4($s0)
    MEM_H(0XC4, ctx->r16) = ctx->r2;
    // 0x80233B90: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x80233B94: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80233B98: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x80233B9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233BA0: jal         0x8002A2F8
    // 0x80233BA4: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x80233BA4: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    after_0:
L_80233BA8:
    // 0x80233BA8: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80233BAC: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x80233BB0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233BB4: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80233BB8: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80233BBC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80233BC0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80233BC4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233BC8: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80233BCC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233BD0: jal         0x8004DD04
    // 0x80233BD4: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80233BD4: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    after_1:
    // 0x80233BD8: lhu         $v0, 0xC4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC4);
    // 0x80233BDC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80233BE0: sh          $v0, 0xC4($s0)
    MEM_H(0XC4, ctx->r16) = ctx->r2;
    // 0x80233BE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233BE8: bgez        $v0, L_80233BFC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80233BEC: nop
    
            goto L_80233BFC;
    }
    // 0x80233BEC: nop

    // 0x80233BF0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80233BF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233BF8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80233BFC:
    // 0x80233BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233C00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233C04: jr          $ra
    // 0x80233C08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233C08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80233C0C: nop

;}
RECOMP_FUNC void func_80231BB0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231BB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231BB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231BB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231BBC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80231BC0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80231BC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231BC8: jal         0x8009A3B4
    // 0x80231BCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80231BCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80231BD0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80231BD4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80231BD8: jal         0x8009A3B4
    // 0x80231BDC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80231BDC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80231BE0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80231BE4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80231BE8: jal         0x8009A3B4
    // 0x80231BEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80231BEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80231BF0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80231BF4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231BF8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231BFC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231C00: lw          $v0, -0x6C40($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6C40);
    // 0x80231C04: jalr        $v0
    // 0x80231C08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80231C08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80231C0C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80231C10: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80231C14: beq         $v0, $zero, L_80231C2C
    if (ctx->r2 == 0) {
        // 0x80231C18: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231C2C;
    }
    // 0x80231C18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231C1C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80231C20: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80231C24: jal         0x8003B564
    // 0x80231C28: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x80231C28: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_80231C2C:
    // 0x80231C2C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231C30: beq         $v0, $zero, L_80231C48
    if (ctx->r2 == 0) {
        // 0x80231C34: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80231C48;
    }
    // 0x80231C34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231C38: jal         0x8005044C
    // 0x80231C3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x80231C3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80231C40: j           L_80231C4C
    // 0x80231C44: nop

        goto L_80231C4C;
    // 0x80231C44: nop

L_80231C48:
    // 0x80231C48: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80231C4C:
    // 0x80231C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231C50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231C54: jr          $ra
    // 0x80231C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229EF4_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229EF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229EF8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229EFC: lb          $v0, 0xC($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XC);
    // 0x80229F00: beq         $v0, $zero, L_80229F10
    if (ctx->r2 == 0) {
        // 0x80229F04: nop
    
            goto L_80229F10;
    }
    // 0x80229F04: nop

    // 0x80229F08: lw          $v0, 0x380($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X380);
    // 0x80229F0C: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
L_80229F10:
    // 0x80229F10: jal         0x8004F418
    // 0x80229F14: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80229F14: nop

    after_0:
    // 0x80229F18: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229F1C: jr          $ra
    // 0x80229F20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229F20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C160_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C160: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C164: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022C168: jal         0x8004F418
    // 0x8022C16C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022C16C: nop

    after_0:
    // 0x8022C170: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022C174: jr          $ra
    // 0x8022C178: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C178: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234634_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234634: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234638: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023463C: jal         0x8004F4F8
    // 0x80234640: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80234640: nop

    after_0:
    // 0x80234644: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80234648: jr          $ra
    // 0x8023464C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023464C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FEEC_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FEEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FEF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FEF4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FEF8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022FEFC: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022FF00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FF04: jal         0x8004DDE8
    // 0x8022FF08: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DDE8_291E8(rdram, ctx);
        goto after_0;
    // 0x8022FF08: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022FF0C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022FF10: sltiu       $v0, $v1, 0x258
    ctx->r2 = ctx->r3 < 0X258 ? 1 : 0;
    // 0x8022FF14: beq         $v0, $zero, L_8022FF58
    if (ctx->r2 == 0) {
        // 0x8022FF18: sltiu       $v0, $v1, 0x190
        ctx->r2 = ctx->r3 < 0X190 ? 1 : 0;
            goto L_8022FF58;
    }
    // 0x8022FF18: sltiu       $v0, $v1, 0x190
    ctx->r2 = ctx->r3 < 0X190 ? 1 : 0;
    // 0x8022FF1C: beq         $v0, $zero, L_8022FF38
    if (ctx->r2 == 0) {
        // 0x8022FF20: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022FF38;
    }
    // 0x8022FF20: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022FF24: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FF28: beq         $v1, $v0, L_8022FF98
    if (ctx->r3 == ctx->r2) {
        // 0x8022FF2C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022FF98;
    }
    // 0x8022FF2C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022FF30: j           L_8022FF98
    // 0x8022FF34: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022FF98;
    // 0x8022FF34: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022FF38:
    // 0x8022FF38: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FF3C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022FF40: beq         $v1, $v0, L_8022FF98
    if (ctx->r3 == ctx->r2) {
        // 0x8022FF44: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022FF98;
    }
    // 0x8022FF44: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022FF48: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022FF4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FF50: j           L_8022FF78
    // 0x8022FF54: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_8022FF78;
    // 0x8022FF54: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8022FF58:
    // 0x8022FF58: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FF5C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022FF60: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022FF64: bne         $v0, $zero, L_8022FF98
    if (ctx->r2 != 0) {
        // 0x8022FF68: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022FF98;
    }
    // 0x8022FF68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FF6C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022FF70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FF74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022FF78:
    // 0x8022FF78: jal         0x80050294
    // 0x8022FF7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022FF7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022FF80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FF84: jal         0x8022FFC8
    // 0x8022FF88: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022FFC8_ovl7(rdram, ctx);
        goto after_2;
    // 0x8022FF88: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x8022FF8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FF90: jal         0x8022FFA8
    // 0x8022FF94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022FFA8_ovl7(rdram, ctx);
        goto after_3;
    // 0x8022FF94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_8022FF98:
    // 0x8022FF98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FF9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FFA0: jr          $ra
    // 0x8022FFA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FFA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E2AC_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E2AC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022E2B0: lw          $a1, 0x4B34($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4B34);
    // 0x8022E2B4: bne         $a1, $a0, L_8022E308
    if (ctx->r5 != ctx->r4) {
        // 0x8022E2B8: addiu       $a2, $a0, 0x348
        ctx->r6 = ADD32(ctx->r4, 0X348);
            goto L_8022E308;
    }
    // 0x8022E2B8: addiu       $a2, $a0, 0x348
    ctx->r6 = ADD32(ctx->r4, 0X348);
    // 0x8022E2BC: lbu         $v1, 0x2($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X2);
    // 0x8022E2C0: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x8022E2C4: bne         $v1, $v0, L_8022E2D4
    if (ctx->r3 != ctx->r2) {
        // 0x8022E2C8: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_8022E2D4;
    }
    // 0x8022E2C8: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022E2CC: j           L_8022E2F0
    // 0x8022E2D0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_8022E2F0;
    // 0x8022E2D0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8022E2D4:
    // 0x8022E2D4: bne         $v1, $v0, L_8022E2E4
    if (ctx->r3 != ctx->r2) {
        // 0x8022E2D8: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022E2E4;
    }
    // 0x8022E2D8: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022E2DC: j           L_8022E2F0
    // 0x8022E2E0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_8022E2F0;
    // 0x8022E2E0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8022E2E4:
    // 0x8022E2E4: bne         $v1, $v0, L_8022E2F0
    if (ctx->r3 != ctx->r2) {
        // 0x8022E2E8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022E2F0;
    }
    // 0x8022E2E8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022E2EC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022E2F0:
    // 0x8022E2F0: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x8022E2F4: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x8022E2F8: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x8022E2FC: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8022E300: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x8022E304: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_8022E308:
    // 0x8022E308: jr          $ra
    // 0x8022E30C: nop

    TRACE_RETURN()
    return;
    // 0x8022E30C: nop

;}
RECOMP_FUNC void func_8022E520_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E520: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022E524: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022E528: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022E52C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022E530: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022E534: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022E538: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022E53C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E540: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022E544: jal         0x8004D5D4
    // 0x8022E548: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022E548: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    after_0:
    // 0x8022E54C: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022E550: addiu       $s1, $s1, -0x5F20
    ctx->r17 = ADD32(ctx->r17, -0X5F20);
    // 0x8022E554: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E558: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8022E55C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8022E560: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
    // 0x8022E564: sh          $v0, 0x158($s2)
    MEM_H(0X158, ctx->r18) = ctx->r2;
    // 0x8022E568: sh          $v0, 0x15A($s2)
    MEM_H(0X15A, ctx->r18) = ctx->r2;
    // 0x8022E56C: sh          $v0, 0x15C($s2)
    MEM_H(0X15C, ctx->r18) = ctx->r2;
    // 0x8022E570: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022E574: sh          $v0, 0x15E($s2)
    MEM_H(0X15E, ctx->r18) = ctx->r2;
    // 0x8022E578: sh          $zero, 0x348($s2)
    MEM_H(0X348, ctx->r18) = 0;
    // 0x8022E57C: jal         0x8009A3B4
    // 0x8022E580: sw          $zero, 0x34C($s2)
    MEM_W(0X34C, ctx->r18) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022E580: sw          $zero, 0x34C($s2)
    MEM_W(0X34C, ctx->r18) = 0;
    after_1:
    // 0x8022E584: addiu       $s0, $s2, 0x354
    ctx->r16 = ADD32(ctx->r18, 0X354);
    // 0x8022E588: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E58C: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022E590: jal         0x8009A3B4
    // 0x8022E594: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022E594: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022E598: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022E59C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E5A0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E5A4: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x8022E5A8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022E5AC: jal         0x8004DBA0
    // 0x8022E5B0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x8022E5B0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x8022E5B4: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8022E5B8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022E5BC: sh          $v0, 0x6E($s2)
    MEM_H(0X6E, ctx->r18) = ctx->r2;
    // 0x8022E5C0: sh          $v0, 0xB0($s2)
    MEM_H(0XB0, ctx->r18) = ctx->r2;
    // 0x8022E5C4: sh          $v0, 0xB2($s2)
    MEM_H(0XB2, ctx->r18) = ctx->r2;
    // 0x8022E5C8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022E5CC: addiu       $v0, $v0, -0x6D58
    ctx->r2 = ADD32(ctx->r2, -0X6D58);
    // 0x8022E5D0: sw          $v0, 0x78($s2)
    MEM_W(0X78, ctx->r18) = ctx->r2;
    // 0x8022E5D4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022E5D8: addiu       $v0, $v0, -0x6D4C
    ctx->r2 = ADD32(ctx->r2, -0X6D4C);
    // 0x8022E5DC: sh          $zero, 0x54($s2)
    MEM_H(0X54, ctx->r18) = 0;
    // 0x8022E5E0: sh          $zero, 0x58($s2)
    MEM_H(0X58, ctx->r18) = 0;
    // 0x8022E5E4: sw          $zero, 0x44($s2)
    MEM_W(0X44, ctx->r18) = 0;
    // 0x8022E5E8: sw          $zero, 0x48($s2)
    MEM_W(0X48, ctx->r18) = 0;
    // 0x8022E5EC: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x8022E5F0: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022E5F4: beq         $v0, $zero, L_8022E6A4
    if (ctx->r2 == 0) {
        // 0x8022E5F8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022E6A4;
    }
    // 0x8022E5F8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022E5FC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E600: addu        $at, $at, $v0
    gpr jr_addend_8022E608 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E604: lw          $v0, -0x61C0($at)
    ctx->r2 = ADD32(ctx->r1, -0X61C0);
    // 0x8022E608: jr          $v0
    // 0x8022E60C: nop

    switch (jr_addend_8022E608 >> 2) {
        case 0: goto L_8022E610; break;
        case 1: goto L_8022E62C; break;
        case 2: goto L_8022E648; break;
        case 3: goto L_8022E664; break;
        case 4: goto L_8022E680; break;
        default: switch_error(__func__, 0x8022E608, 0x80239E40);
    }
    // 0x8022E60C: nop

L_8022E610:
    // 0x8022E610: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022E614: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E618: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E61C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E620: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8022E624: j           L_8022E69C
    // 0x8022E628: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
        goto L_8022E69C;
    // 0x8022E628: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
L_8022E62C:
    // 0x8022E62C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022E630: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E634: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E638: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E63C: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8022E640: j           L_8022E698
    // 0x8022E644: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022E698;
    // 0x8022E644: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022E648:
    // 0x8022E648: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022E64C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8022E650: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x8022E654: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E658: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8022E65C: j           L_8022E698
    // 0x8022E660: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8022E698;
    // 0x8022E660: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022E664:
    // 0x8022E664: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022E668: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E66C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E670: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E674: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8022E678: j           L_8022E698
    // 0x8022E67C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_8022E698;
    // 0x8022E67C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022E680:
    // 0x8022E680: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022E684: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E688: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E68C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E690: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8022E694: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022E698:
    // 0x8022E698: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_8022E69C:
    // 0x8022E69C: jal         0x80050294
    // 0x8022E6A0: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8022E6A0: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    after_4:
L_8022E6A4:
    // 0x8022E6A4: jal         0x8022E6C4
    // 0x8022E6A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8022E6C4_ovl7(rdram, ctx);
        goto after_5;
    // 0x8022E6A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
    // 0x8022E6AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022E6B0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022E6B4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E6B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022E6BC: jr          $ra
    // 0x8022E6C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022E6C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80230694_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230694: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230698: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023069C: jal         0x8004F418
    // 0x802306A0: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x802306A0: nop

    after_0:
    // 0x802306A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802306A8: jr          $ra
    // 0x802306AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802306AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234DAC_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234DAC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80234DB0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80234DB4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80234DB8: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x80234DBC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80234DC0: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x80234DC4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80234DC8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234DCC: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x80234DD0: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80234DD4: jal         0x8009A3B4
    // 0x80234DD8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80234DD8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    after_0:
    // 0x80234DDC: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x80234DE0: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x80234DE4: jal         0x8009A3B4
    // 0x80234DE8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80234DE8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80234DEC: addiu       $a0, $s2, 0x5C
    ctx->r4 = ADD32(ctx->r18, 0X5C);
    // 0x80234DF0: addiu       $s1, $s2, 0x54
    ctx->r17 = ADD32(ctx->r18, 0X54);
    // 0x80234DF4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80234DF8: jal         0x8009A3B4
    // 0x80234DFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80234DFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80234E00: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x80234E04: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234E08: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234E0C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234E10: lw          $v0, -0x69C0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X69C0);
    // 0x80234E14: jalr        $v0
    // 0x80234E18: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80234E18: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x80234E1C: addiu       $s3, $s2, 0xAC
    ctx->r19 = ADD32(ctx->r18, 0XAC);
    // 0x80234E20: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80234E24: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80234E28: jal         0x8009A3B4
    // 0x80234E2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80234E2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80234E30: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    // 0x80234E34: jal         0x8002C654
    // 0x80234E38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_5;
    // 0x80234E38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80234E3C: lh          $v0, 0xE8($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XE8);
    // 0x80234E40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234E44: addiu       $a1, $s2, 0xFC
    ctx->r5 = ADD32(ctx->r18, 0XFC);
    // 0x80234E48: sw          $v0, 0x104($s2)
    MEM_W(0X104, ctx->r18) = ctx->r2;
    // 0x80234E4C: sw          $v0, 0x100($s2)
    MEM_W(0X100, ctx->r18) = ctx->r2;
    // 0x80234E50: jal         0x80031DA8
    // 0x80234E54: sw          $v0, 0xFC($s2)
    MEM_W(0XFC, ctx->r18) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_6;
    // 0x80234E54: sw          $v0, 0xFC($s2)
    MEM_W(0XFC, ctx->r18) = ctx->r2;
    after_6:
    // 0x80234E58: jal         0x8002C654
    // 0x80234E5C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_8002C654_7A54(rdram, ctx);
        goto after_7;
    // 0x80234E5C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_7:
    // 0x80234E60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234E64: jal         0x80031428
    // 0x80234E68: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80031428_C828(rdram, ctx);
        goto after_8;
    // 0x80234E68: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_8:
    // 0x80234E6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234E70: jal         0x8003077C
    // 0x80234E74: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8003077C_BB7C(rdram, ctx);
        goto after_9;
    // 0x80234E74: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_9:
    // 0x80234E78: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80234E7C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80234E80: beq         $v0, $zero, L_80234E98
    if (ctx->r2 == 0) {
        // 0x80234E84: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_80234E98;
    }
    // 0x80234E84: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80234E88: lh          $a3, 0x56($s2)
    ctx->r7 = MEM_H(ctx->r18, 0X56);
    // 0x80234E8C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80234E90: jal         0x8003B6B8
    // 0x80234E94: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    func_8003B6B8_16AB8(rdram, ctx);
        goto after_10;
    // 0x80234E94: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    after_10:
L_80234E98:
    // 0x80234E98: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x80234E9C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80234EA0: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80234EA4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80234EA8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80234EAC: jr          $ra
    // 0x80234EB0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80234EB0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80235504_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235504: jr          $ra
    // 0x80235508: nop

    TRACE_RETURN()
    return;
    // 0x80235508: nop

    // 0x8023550C: nop

;}
RECOMP_FUNC void func_80232F7C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232F7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232F80: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232F84: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232F88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232F8C: lhu         $v1, 0x66($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X66);
    // 0x80232F90: bne         $a1, $zero, L_80232FC0
    if (ctx->r5 != 0) {
        // 0x80232F94: andi        $v0, $a1, 0x500
        ctx->r2 = ctx->r5 & 0X500;
            goto L_80232FC0;
    }
    // 0x80232F94: andi        $v0, $a1, 0x500
    ctx->r2 = ctx->r5 & 0X500;
    // 0x80232F98: jal         0x800A3450
    // 0x80232F9C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80232F9C: nop

    after_0:
    // 0x80232FA0: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80232FA4: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x80232FA8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80232FAC: mflo        $v0
    ctx->r2 = lo;
    // 0x80232FB0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80232FB4: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x80232FB8: j           L_80232FDC
    // 0x80232FBC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
        goto L_80232FDC;
    // 0x80232FBC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
L_80232FC0:
    // 0x80232FC0: bnel        $v0, $zero, L_80232FC8
    if (ctx->r2 != 0) {
        // 0x80232FC4: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_80232FC8;
    }
    goto skip_0;
    // 0x80232FC4: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    skip_0:
L_80232FC8:
    // 0x80232FC8: andi        $v0, $a1, 0xA00
    ctx->r2 = ctx->r5 & 0XA00;
    // 0x80232FCC: beq         $v0, $zero, L_80232FDC
    if (ctx->r2 == 0) {
        // 0x80232FD0: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_80232FDC;
    }
    // 0x80232FD0: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80232FD4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232FD8: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_80232FDC:
    // 0x80232FDC: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
    // 0x80232FE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232FE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232FE8: jr          $ra
    // 0x80232FEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232FEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802317B4_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802317B4: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802317B8: bne         $v0, $zero, L_802317C8
    if (ctx->r2 != 0) {
        // 0x802317BC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_802317C8;
    }
    // 0x802317BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802317C0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x802317C4: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_802317C8:
    // 0x802317C8: jr          $ra
    // 0x802317CC: nop

    TRACE_RETURN()
    return;
    // 0x802317CC: nop

;}
RECOMP_FUNC void func_802260B0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802260B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802260B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802260B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802260BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802260C0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802260C4: bne         $v0, $zero, L_802260DC
    if (ctx->r2 != 0) {
        // 0x802260C8: nop
    
            goto L_802260DC;
    }
    // 0x802260C8: nop

    // 0x802260CC: jal         0x802283FC
    // 0x802260D0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_802283FC_ovl7(rdram, ctx);
        goto after_0;
    // 0x802260D0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_0:
    // 0x802260D4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802260D8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802260DC:
    // 0x802260DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802260E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802260E4: jr          $ra
    // 0x802260E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802260E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232168_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232168: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023216C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232170: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232174: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80232178: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x8023217C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80232180: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232184: addiu       $s1, $s0, 0x364
    ctx->r17 = ADD32(ctx->r16, 0X364);
    // 0x80232188: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023218C: jal         0x8004DE68
    // 0x80232190: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004DE68_29268(rdram, ctx);
        goto after_0;
    // 0x80232190: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80232194: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x80232198: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x8023219C: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802321A0: beq         $v1, $zero, L_802321BC
    if (ctx->r3 == 0) {
        // 0x802321A4: sw          $v0, 0x350($s0)
        MEM_W(0X350, ctx->r16) = ctx->r2;
            goto L_802321BC;
    }
    // 0x802321A4: sw          $v0, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r2;
    // 0x802321A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802321AC: beq         $v1, $v0, L_802321DC
    if (ctx->r3 == ctx->r2) {
        // 0x802321B0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_802321DC;
    }
    // 0x802321B0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802321B4: j           L_8023221C
    // 0x802321B8: nop

        goto L_8023221C;
    // 0x802321B8: nop

L_802321BC:
    // 0x802321BC: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x802321C0: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x802321C4: bne         $v0, $zero, L_80232208
    if (ctx->r2 != 0) {
        // 0x802321C8: nop
    
            goto L_80232208;
    }
    // 0x802321C8: nop

    // 0x802321CC: beq         $v1, $zero, L_80232208
    if (ctx->r3 == 0) {
        // 0x802321D0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80232208;
    }
    // 0x802321D0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802321D4: j           L_8023221C
    // 0x802321D8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8023221C;
    // 0x802321D8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802321DC:
    // 0x802321DC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802321E0: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x802321E4: jal         0x8004F820
    // 0x802321E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x802321E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x802321EC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802321F0: lw          $a0, 0x350($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X350);
    // 0x802321F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802321F8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802321FC: sltiu       $a0, $a0, 0x2
    ctx->r4 = ctx->r4 < 0X2 ? 1 : 0;
    // 0x80232200: beq         $a0, $zero, L_8023221C
    if (ctx->r4 == 0) {
        // 0x80232204: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8023221C;
    }
    // 0x80232204: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80232208:
    // 0x80232208: jal         0x80232330
    // 0x8023220C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80232330_ovl7(rdram, ctx);
        goto after_2;
    // 0x8023220C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80232210: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232214: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80232218: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8023221C:
    // 0x8023221C: jal         0x80232258
    // 0x80232220: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80232258_ovl7(rdram, ctx);
        goto after_3;
    // 0x80232220: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80232224: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80232228: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023222C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232230: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232234: jr          $ra
    // 0x80232238: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232238: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802311E8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802311E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802311EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802311F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802311F4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802311F8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802311FC: lbu         $a1, 0xA($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XA);
    // 0x80231200: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80231204: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x80231208: beq         $v1, $s1, L_80231254
    if (ctx->r3 == ctx->r17) {
        // 0x8023120C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80231254;
    }
    // 0x8023120C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80231210: beq         $v0, $zero, L_802312F8
    if (ctx->r2 == 0) {
        // 0x80231214: nop
    
            goto L_802312F8;
    }
    // 0x80231214: nop

    // 0x80231218: bne         $v1, $zero, L_802312F8
    if (ctx->r3 != 0) {
        // 0x8023121C: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_802312F8;
    }
    // 0x8023121C: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80231220: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    // 0x80231224: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80231228: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023122C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80231230: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80231234: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80231238: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023123C: jal         0x80053ED8
    // 0x80231240: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x80231240: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_0:
    // 0x80231244: addiu       $a0, $s0, 0x354
    ctx->r4 = ADD32(ctx->r16, 0X354);
    // 0x80231248: addiu       $a1, $v0, 0x14
    ctx->r5 = ADD32(ctx->r2, 0X14);
    // 0x8023124C: jal         0x8009A3B4
    // 0x80231250: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80231250: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
L_80231254:
    // 0x80231254: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80231258: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8023125C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80231260: jal         0x8004F820
    // 0x80231264: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80231264: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    after_2:
    // 0x80231268: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023126C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80231270: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80231274: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231278: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023127C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231280: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80231284: jal         0x8004DA90
    // 0x80231288: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x80231288: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_3:
    // 0x8023128C: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x80231290: bne         $v0, $s1, L_802312A4
    if (ctx->r2 != ctx->r17) {
        // 0x80231294: addiu       $a0, $zero, 0x10D
        ctx->r4 = ADD32(0, 0X10D);
            goto L_802312A4;
    }
    // 0x80231294: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    // 0x80231298: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023129C: jal         0x8002A2F8
    // 0x802312A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_4;
    // 0x802312A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
L_802312A4:
    // 0x802312A4: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x802312A8: lh          $v0, 0x354($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X354);
    // 0x802312AC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802312B0: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802312B4: mflo        $v1
    ctx->r3 = lo;
    // 0x802312B8: lh          $a0, 0x358($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X358);
    // 0x802312BC: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x802312C0: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802312C4: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802312C8: mflo        $v0
    ctx->r2 = lo;
    // 0x802312CC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802312D0: slti        $v1, $v1, 0x800
    ctx->r3 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x802312D4: beq         $v1, $zero, L_802312F8
    if (ctx->r3 == 0) {
        // 0x802312D8: addiu       $a0, $zero, 0x606
        ctx->r4 = ADD32(0, 0X606);
            goto L_802312F8;
    }
    // 0x802312D8: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    // 0x802312DC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802312E0: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x802312E4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x802312E8: sh          $zero, 0x64($s0)
    MEM_H(0X64, ctx->r16) = 0;
    // 0x802312EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802312F0: jal         0x8006036C
    // 0x802312F4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x802312F4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_5:
L_802312F8:
    // 0x802312F8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802312FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231300: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231304: jr          $ra
    // 0x80231308: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231308: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233398_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233398: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023339C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802333A0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802333A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802333A8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802333AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802333B0: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x802333B4: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x802333B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802333BC: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x802333C0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802333C4: bne         $v0, $v1, L_802334B8
    if (ctx->r2 != ctx->r3) {
        // 0x802333C8: nop
    
            goto L_802334B8;
    }
    // 0x802333C8: nop

    // 0x802333CC: jal         0x8004F144
    // 0x802333D0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802333D0: nop

    after_0:
    // 0x802333D4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802333D8: beq         $s1, $zero, L_802334B8
    if (ctx->r17 == 0) {
        // 0x802333DC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802334B8;
    }
    // 0x802333DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802333E0: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x802333E4: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x802333E8: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x802333EC: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x802333F0: jal         0x800A3450
    // 0x802333F4: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x802333F4: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    after_1:
    // 0x802333F8: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x802333FC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80233400: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x80233404: jal         0x800A3450
    // 0x80233408: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80233408: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    after_2:
    // 0x8023340C: lhu         $v1, 0x1C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X1C);
    // 0x80233410: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80233414: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233418: sh          $v1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r3;
    // 0x8023341C: lhu         $v0, 0x1E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1E);
    // 0x80233420: jal         0x800A3450
    // 0x80233424: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80233424: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    after_3:
    // 0x80233428: lhu         $v1, 0x20($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X20);
    // 0x8023342C: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x80233430: ori         $a0, $a0, 0x4E
    ctx->r4 = ctx->r4 | 0X4E;
    // 0x80233434: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80233438: sw          $a0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r4;
    // 0x8023343C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233440: jal         0x800A3450
    // 0x80233444: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80233444: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    after_4:
    // 0x80233448: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023344C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80233450: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80233454: sb          $v0, 0x22($s1)
    MEM_B(0X22, ctx->r17) = ctx->r2;
    // 0x80233458: sb          $zero, 0x23($s1)
    MEM_B(0X23, ctx->r17) = 0;
    // 0x8023345C: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x80233460: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80233464: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80233468: sh          $v0, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r2;
    // 0x8023346C: lbu         $v0, 0xF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XF);
    // 0x80233470: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x80233474: lw          $v0, 0x28($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X28);
    // 0x80233478: sw          $s2, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r18;
    // 0x8023347C: sw          $v0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r2;
    // 0x80233480: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x80233484: blez        $v0, L_802334A8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80233488: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_802334A8;
    }
    // 0x80233488: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_8023348C:
    // 0x8023348C: jal         0x802332C0
    // 0x80233490: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_802332C0_ovl7(rdram, ctx);
        goto after_5;
    // 0x80233490: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x80233494: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x80233498: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8023349C: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802334A0: bne         $v0, $zero, L_8023348C
    if (ctx->r2 != 0) {
        // 0x802334A4: nop
    
            goto L_8023348C;
    }
    // 0x802334A4: nop

L_802334A8:
    // 0x802334A8: jal         0x800A3450
    // 0x802334AC: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x802334AC: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    after_6:
    // 0x802334B0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802334B4: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_802334B8:
    // 0x802334B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802334BC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802334C0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802334C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802334C8: jr          $ra
    // 0x802334CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802334CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80231960_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231960: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231964: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231968: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023196C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80231970: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231974: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80231978: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8023197C: beq         $v0, $zero, L_80231B0C
    if (ctx->r2 == 0) {
        // 0x80231980: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80231B0C;
    }
    // 0x80231980: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80231984: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80231988: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023198C: addu        $at, $at, $v0
    gpr jr_addend_80231994 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231990: lw          $v0, -0x6098($at)
    ctx->r2 = ADD32(ctx->r1, -0X6098);
    // 0x80231994: jr          $v0
    // 0x80231998: nop

    switch (jr_addend_80231994 >> 2) {
        case 0: goto L_8023199C; break;
        case 1: goto L_802319D8; break;
        case 2: goto L_80231A40; break;
        case 3: goto L_80231A64; break;
        case 4: goto L_80231B0C; break;
        default: switch_error(__func__, 0x80231994, 0x80239F68);
    }
    // 0x80231998: nop

L_8023199C:
    // 0x8023199C: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    // 0x802319A0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802319A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802319A8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802319AC: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802319B0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802319B4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802319B8: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x802319BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802319C0: jal         0x80053ED8
    // 0x802319C4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x802319C4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    after_0:
    // 0x802319C8: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
    // 0x802319CC: addiu       $a1, $v0, 0x14
    ctx->r5 = ADD32(ctx->r2, 0X14);
    // 0x802319D0: jal         0x8009A3B4
    // 0x802319D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802319D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
L_802319D8:
    // 0x802319D8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802319DC: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x802319E0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802319E4: jal         0x8004F820
    // 0x802319E8: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x802319E8: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    after_2:
    // 0x802319EC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802319F0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802319F4: lb          $a0, 0xA6($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA6);
    // 0x802319F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802319FC: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x80231A00: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80231A04: bne         $a0, $v0, L_80231A1C
    if (ctx->r4 != ctx->r2) {
        // 0x80231A08: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80231A1C;
    }
    // 0x80231A08: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80231A0C: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    // 0x80231A10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80231A14: jal         0x8002A2F8
    // 0x80231A18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_3;
    // 0x80231A18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
L_80231A1C:
    // 0x80231A1C: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80231A20: bne         $v0, $zero, L_80231B0C
    if (ctx->r2 != 0) {
        // 0x80231A24: nop
    
            goto L_80231B0C;
    }
    // 0x80231A24: nop

    // 0x80231A28: jal         0x8006036C
    // 0x80231A2C: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80231A2C: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_4:
    // 0x80231A30: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231A34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231A38: j           L_80231B0C
    // 0x80231A3C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80231B0C;
    // 0x80231A3C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80231A40:
    // 0x80231A40: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231A44: lbu         $a0, 0xD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XD);
    // 0x80231A48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231A4C: jal         0x80053ED8
    // 0x80231A50: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_5;
    // 0x80231A50: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_5:
    // 0x80231A54: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
    // 0x80231A58: addiu       $a1, $v0, 0x14
    ctx->r5 = ADD32(ctx->r2, 0X14);
    // 0x80231A5C: jal         0x8009A3B4
    // 0x80231A60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80231A60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
L_80231A64:
    // 0x80231A64: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80231A68: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80231A6C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80231A70: jal         0x8004F820
    // 0x80231A74: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    func_8004F820_2AC20(rdram, ctx);
        goto after_7;
    // 0x80231A74: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    after_7:
    // 0x80231A78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231A7C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80231A80: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80231A84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231A88: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80231A8C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231A90: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80231A94: jal         0x8004DA90
    // 0x80231A98: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_8;
    // 0x80231A98: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_8:
    // 0x80231A9C: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x80231AA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231AA4: bne         $v1, $v0, L_80231AB8
    if (ctx->r3 != ctx->r2) {
        // 0x80231AA8: addiu       $a0, $zero, 0x10C
        ctx->r4 = ADD32(0, 0X10C);
            goto L_80231AB8;
    }
    // 0x80231AA8: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    // 0x80231AAC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80231AB0: jal         0x8002A2F8
    // 0x80231AB4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_9;
    // 0x80231AB4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
L_80231AB8:
    // 0x80231AB8: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80231ABC: lh          $v0, 0xC($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XC);
    // 0x80231AC0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80231AC4: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80231AC8: mflo        $v1
    ctx->r3 = lo;
    // 0x80231ACC: lh          $a0, 0x10($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X10);
    // 0x80231AD0: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x80231AD4: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80231AD8: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80231ADC: mflo        $v0
    ctx->r2 = lo;
    // 0x80231AE0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231AE4: slti        $v1, $v1, 0x800
    ctx->r3 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x80231AE8: beq         $v1, $zero, L_80231B0C
    if (ctx->r3 == 0) {
        // 0x80231AEC: addiu       $a0, $zero, 0x606
        ctx->r4 = ADD32(0, 0X606);
            goto L_80231B0C;
    }
    // 0x80231AEC: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    // 0x80231AF0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231AF4: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80231AF8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80231AFC: sh          $zero, 0x64($s0)
    MEM_H(0X64, ctx->r16) = 0;
    // 0x80231B00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231B04: jal         0x8006036C
    // 0x80231B08: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_10;
    // 0x80231B08: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_10:
L_80231B0C:
    // 0x80231B0C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231B10: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231B14: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231B18: jr          $ra
    // 0x80231B1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231B1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023038C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023038C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230390: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80230394: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80230398: jal         0x8003E934
    // 0x8023039C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x8023039C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x802303A0: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x802303A4: addiu       $v0, $v0, -0x7D0
    ctx->r2 = ADD32(ctx->r2, -0X7D0);
    // 0x802303A8: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x802303AC: beq         $v1, $zero, L_802303BC
    if (ctx->r3 == 0) {
        // 0x802303B0: sw          $v0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r2;
            goto L_802303BC;
    }
    // 0x802303B0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802303B4: jal         0x8004F418
    // 0x802303B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x802303B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_802303BC:
    // 0x802303BC: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x802303C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802303C4: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802303C8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802303CC: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x802303D0: sh          $a2, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r6;
    // 0x802303D4: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x802303D8: jal         0x8004DA90
    // 0x802303DC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x802303DC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_2:
    // 0x802303E0: jal         0x8003E810
    // 0x802303E4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8003E810_19C10(rdram, ctx);
        goto after_3;
    // 0x802303E4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x802303E8: beq         $v0, $zero, L_80230400
    if (ctx->r2 == 0) {
        // 0x802303EC: nop
    
            goto L_80230400;
    }
    // 0x802303EC: nop

    // 0x802303F0: jal         0x8004F418
    // 0x802303F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_4;
    // 0x802303F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802303F8: j           L_80230410
    // 0x802303FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80230410;
    // 0x802303FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80230400:
    // 0x80230400: jal         0x80040F30
    // 0x80230404: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x80230404: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80230408: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8023040C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80230410:
    // 0x80230410: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80230414: bne         $v0, $zero, L_80230424
    if (ctx->r2 != 0) {
        // 0x80230418: nop
    
            goto L_80230424;
    }
    // 0x80230418: nop

    // 0x8023041C: jal         0x8005044C
    // 0x80230420: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x80230420: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_80230424:
    // 0x80230424: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80230428: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023042C: jr          $ra
    // 0x80230430: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230430: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80230434: nop

    // 0x80230438: nop

    // 0x8023043C: nop

;}
RECOMP_FUNC void func_802350AC_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802350AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802350B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802350B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802350B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802350BC: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x802350C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802350C4: bne         $v1, $v0, L_80235104
    if (ctx->r3 != ctx->r2) {
        // 0x802350C8: lui         $v0, 0x2FF
        ctx->r2 = S32(0X2FF << 16);
            goto L_80235104;
    }
    // 0x802350C8: lui         $v0, 0x2FF
    ctx->r2 = S32(0X2FF << 16);
    // 0x802350CC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802350D0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802350D4: lh          $a2, 0x66($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X66);
    // 0x802350D8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802350DC: lhu         $v1, 0x54($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X54);
    // 0x802350E0: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    // 0x802350E4: addiu       $v0, $v0, 0x190
    ctx->r2 = ADD32(ctx->r2, 0X190);
    // 0x802350E8: addiu       $v1, $v1, 0x190
    ctx->r3 = ADD32(ctx->r3, 0X190);
    // 0x802350EC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802350F0: sh          $v1, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r3;
    // 0x802350F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802350F8: jal         0x8004DBA0
    // 0x802350FC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_0;
    // 0x802350FC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x80235100: lui         $v0, 0x2FF
    ctx->r2 = S32(0X2FF << 16);
L_80235104:
    // 0x80235104: lw          $v1, 0xE8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE8);
    // 0x80235108: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8023510C: lui         $a0, 0x33
    ctx->r4 = S32(0X33 << 16);
    // 0x80235110: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80235114: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80235118: beq         $v0, $zero, L_8023516C
    if (ctx->r2 == 0) {
        // 0x8023511C: sw          $v1, 0xE8($s0)
        MEM_W(0XE8, ctx->r16) = ctx->r3;
            goto L_8023516C;
    }
    // 0x8023511C: sw          $v1, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r3;
    // 0x80235120: jal         0x8004F144
    // 0x80235124: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x80235124: nop

    after_1:
    // 0x80235128: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023512C: beq         $v1, $zero, L_80235158
    if (ctx->r3 == 0) {
        // 0x80235130: addiu       $a1, $s0, 0x14
        ctx->r5 = ADD32(ctx->r16, 0X14);
            goto L_80235158;
    }
    // 0x80235130: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80235134: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x80235138: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023513C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80235140: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80235144: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80235148: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8023514C: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x80235150: jal         0x8009A3B4
    // 0x80235154: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80235154: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_2:
L_80235158:
    // 0x80235158: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023515C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80235160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235164: jal         0x8007A1B8
    // 0x80235168: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_3;
    // 0x80235168: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
L_8023516C:
    // 0x8023516C: jal         0x80040F30
    // 0x80235170: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_4;
    // 0x80235170: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80235174: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80235178: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023517C: jr          $ra
    // 0x80235180: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235180: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CDAC_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CDAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CDB0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CDB4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CDB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CDBC: lh          $a0, 0x364($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X364);
    // 0x8022CDC0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022CDC4: jal         0x8004FA7C
    // 0x8022CDC8: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022CDC8: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    after_0:
    // 0x8022CDCC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022CDD0: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022CDD4: bne         $v0, $zero, L_8022CE20
    if (ctx->r2 != 0) {
        // 0x8022CDD8: nop
    
            goto L_8022CE20;
    }
    // 0x8022CDD8: nop

    // 0x8022CDDC: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x8022CDE0: beq         $v0, $zero, L_8022CDF4
    if (ctx->r2 == 0) {
        // 0x8022CDE4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022CDF4;
    }
    // 0x8022CDE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CDE8: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x8022CDEC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022CDF0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_8022CDF4:
    // 0x8022CDF4: lhu         $a0, 0x362($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X362);
    // 0x8022CDF8: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x8022CDFC: lhu         $a1, 0x360($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X360);
    // 0x8022CE00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CE04: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022CE08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CE0C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022CE10: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8022CE14: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022CE18: sh          $v0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r2;
    // 0x8022CE1C: sh          $v1, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r3;
L_8022CE20:
    // 0x8022CE20: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022CE24: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022CE28: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022CE2C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022CE30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022CE34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CE38: jr          $ra
    // 0x8022CE3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CE3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231B20_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231B20: lbu         $a1, 0xA($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XA);
    // 0x80231B24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231B28: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x80231B2C: beq         $v1, $v0, L_80231B64
    if (ctx->r3 == ctx->r2) {
        // 0x80231B30: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80231B64;
    }
    // 0x80231B30: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80231B34: beql        $v0, $zero, L_80231B4C
    if (ctx->r2 == 0) {
        // 0x80231B38: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80231B4C;
    }
    goto skip_0;
    // 0x80231B38: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80231B3C: beq         $v1, $zero, L_80231B5C
    if (ctx->r3 == 0) {
        // 0x80231B40: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_80231B5C;
    }
    // 0x80231B40: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80231B44: j           L_80231BA4
    // 0x80231B48: nop

        goto L_80231BA4;
    // 0x80231B48: nop

L_80231B4C:
    // 0x80231B4C: beq         $v1, $v0, L_80231B90
    if (ctx->r3 == ctx->r2) {
        // 0x80231B50: nop
    
            goto L_80231B90;
    }
    // 0x80231B50: nop

    // 0x80231B54: j           L_80231BA4
    // 0x80231B58: nop

        goto L_80231BA4;
    // 0x80231B58: nop

L_80231B5C:
    // 0x80231B5C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80231B60: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_80231B64:
    // 0x80231B64: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80231B68: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80231B6C: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x80231B70: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80231B74: beq         $v0, $zero, L_80231BA4
    if (ctx->r2 == 0) {
        // 0x80231B78: addiu       $v1, $zero, 0x8
        ctx->r3 = ADD32(0, 0X8);
            goto L_80231BA4;
    }
    // 0x80231B78: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80231B7C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80231B80: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80231B84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231B88: j           L_80231BA4
    // 0x80231B8C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
        goto L_80231BA4;
    // 0x80231B8C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80231B90:
    // 0x80231B90: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80231B94: bgez        $v0, L_80231BA4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231B98: addiu       $v0, $a1, -0x1
        ctx->r2 = ADD32(ctx->r5, -0X1);
            goto L_80231BA4;
    }
    // 0x80231B98: addiu       $v0, $a1, -0x1
    ctx->r2 = ADD32(ctx->r5, -0X1);
    // 0x80231B9C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80231BA0: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_80231BA4:
    // 0x80231BA4: jr          $ra
    // 0x80231BA8: nop

    TRACE_RETURN()
    return;
    // 0x80231BA8: nop

    // 0x80231BAC: nop

;}
RECOMP_FUNC void func_80231798_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231798: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023179C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802317A0: jal         0x8004F418
    // 0x802317A4: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x802317A4: nop

    after_0:
    // 0x802317A8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802317AC: jr          $ra
    // 0x802317B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802317B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234EB4_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234EB4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80234EB8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80234EBC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234EC0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80234EC4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80234EC8: lw          $v1, 0xEC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XEC);
    // 0x80234ECC: beq         $v1, $zero, L_80234F48
    if (ctx->r3 == 0) {
        // 0x80234ED0: addiu       $s1, $s0, 0xD0
        ctx->r17 = ADD32(ctx->r16, 0XD0);
            goto L_80234F48;
    }
    // 0x80234ED0: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x80234ED4: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80234ED8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80234EDC: beq         $v0, $zero, L_80234F08
    if (ctx->r2 == 0) {
        // 0x80234EE0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80234F08;
    }
    // 0x80234EE0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80234EE4: lh          $a2, 0xF4($s0)
    ctx->r6 = MEM_H(ctx->r16, 0XF4);
    // 0x80234EE8: lh          $a3, 0xF8($s0)
    ctx->r7 = MEM_H(ctx->r16, 0XF8);
    // 0x80234EEC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80234EF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234EF4: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80234EF8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80234EFC: jal         0x8005F7D4
    // 0x80234F00: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    func_8005F7D4_3ABD4(rdram, ctx);
        goto after_0;
    // 0x80234F00: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    after_0:
    // 0x80234F04: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
L_80234F08:
    // 0x80234F08: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    // 0x80234F0C: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80234F10: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80234F14: beq         $v0, $zero, L_80234F20
    if (ctx->r2 == 0) {
        // 0x80234F18: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80234F20;
    }
    // 0x80234F18: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80234F1C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80234F20:
    // 0x80234F20: lw          $v1, 0xEC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XEC);
    // 0x80234F24: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80234F28: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80234F2C: beq         $v0, $zero, L_80234F48
    if (ctx->r2 == 0) {
        // 0x80234F30: lui         $v0, 0xFF
        ctx->r2 = S32(0XFF << 16);
            goto L_80234F48;
    }
    // 0x80234F30: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80234F34: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80234F38: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80234F3C: beq         $v0, $zero, L_80234F48
    if (ctx->r2 == 0) {
        // 0x80234F40: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80234F48;
    }
    // 0x80234F40: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80234F44: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80234F48:
    // 0x80234F48: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80234F4C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234F50: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234F54: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234F58: lw          $v0, -0x69CC($at)
    ctx->r2 = MEM_W(ctx->r1, -0X69CC);
    // 0x80234F5C: jalr        $v0
    // 0x80234F60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80234F60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80234F64: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80234F68: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80234F6C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80234F70: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80234F74: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80234F78: addiu       $v0, $s1, 0x1C
    ctx->r2 = ADD32(ctx->r17, 0X1C);
    // 0x80234F7C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80234F80: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x80234F84: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80234F88: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80234F8C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80234F90: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80234F94: jal         0x80051E18
    // 0x80234F98: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_2;
    // 0x80234F98: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_2:
    // 0x80234F9C: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x80234FA0: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80234FA4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80234FA8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80234FAC: jr          $ra
    // 0x80234FB0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80234FB0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022D408_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D408: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D40C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D410: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D414: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D418: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D41C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D420: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022D424: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D428: jal         0x8022E3B8
    // 0x8022D42C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_8022E3B8_ovl7(rdram, ctx);
        goto after_0;
    // 0x8022D42C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022D430: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D434: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D438: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022D43C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022D440: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D444: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D448: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D44C: jr          $ra
    // 0x8022D450: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D450: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C580_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C580: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x8022C584: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C588: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022C58C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C590: bne         $v0, $zero, L_8022C59C
    if (ctx->r2 != 0) {
        // 0x8022C594: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C59C;
    }
    // 0x8022C594: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C598: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022C59C:
    // 0x8022C59C: jr          $ra
    // 0x8022C5A0: nop

    TRACE_RETURN()
    return;
    // 0x8022C5A0: nop

;}
