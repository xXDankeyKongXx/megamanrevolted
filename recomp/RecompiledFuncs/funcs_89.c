#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8023F010_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023F010: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023F014: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023F018: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023F01C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023F020: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8023F024: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8023F028: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8023F02C: jal         0x8004F144
    // 0x8023F030: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8023F030: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    after_0:
    // 0x8023F034: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8023F038: beq         $s2, $zero, L_8023F0D0
    if (ctx->r18 == 0) {
        // 0x8023F03C: addiu       $s3, $s0, 0x440
        ctx->r19 = ADD32(ctx->r16, 0X440);
            goto L_8023F0D0;
    }
    // 0x8023F03C: addiu       $s3, $s0, 0x440
    ctx->r19 = ADD32(ctx->r16, 0X440);
    // 0x8023F040: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8023F044: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8023F048: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023F04C: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    // 0x8023F050: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
    // 0x8023F054: sb          $v0, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r2;
    // 0x8023F058: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x8023F05C: jal         0x80032498
    // 0x8023F060: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x8023F060: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_1:
    // 0x8023F064: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x8023F068: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8023F06C: jal         0x800324B4
    // 0x8023F070: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x8023F070: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_2:
    // 0x8023F074: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023F078: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8023F07C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023F080: mflo        $v0
    ctx->r2 = lo;
    // 0x8023F084: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x8023F088: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8023F08C: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x8023F090: sra         $v0, $v0, 6
    ctx->r2 = S32(SIGNED(ctx->r2) >> 6);
    // 0x8023F094: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8023F098: sh          $a0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r4;
    // 0x8023F09C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023F0A0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8023F0A4: mult        $s1, $v0
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023F0A8: mflo        $v0
    ctx->r2 = lo;
    // 0x8023F0AC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8023F0B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023F0B4: addiu       $a0, $s2, 0x38
    ctx->r4 = ADD32(ctx->r18, 0X38);
    // 0x8023F0B8: lhu         $v1, 0x18($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X18);
    // 0x8023F0BC: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x8023F0C0: sra         $v0, $v0, 6
    ctx->r2 = S32(SIGNED(ctx->r2) >> 6);
    // 0x8023F0C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023F0C8: jal         0x8009A3B4
    // 0x8023F0CC: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8023F0CC: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    after_3:
L_8023F0D0:
    // 0x8023F0D0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023F0D4: jal         0x8004DE68
    // 0x8023F0D8: addiu       $a1, $s1, 0x24
    ctx->r5 = ADD32(ctx->r17, 0X24);
    func_8004DE68_29268(rdram, ctx);
        goto after_4;
    // 0x8023F0D8: addiu       $a1, $s1, 0x24
    ctx->r5 = ADD32(ctx->r17, 0X24);
    after_4:
    // 0x8023F0DC: lw          $v1, 0x520($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X520);
    // 0x8023F0E0: addiu       $v1, $v1, 0x200
    ctx->r3 = ADD32(ctx->r3, 0X200);
    // 0x8023F0E4: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023F0E8: beq         $v1, $zero, L_8023F10C
    if (ctx->r3 == 0) {
        // 0x8023F0EC: addiu       $s1, $s1, 0x24
        ctx->r17 = ADD32(ctx->r17, 0X24);
            goto L_8023F10C;
    }
    // 0x8023F0EC: addiu       $s1, $s1, 0x24
    ctx->r17 = ADD32(ctx->r17, 0X24);
    // 0x8023F0F0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023F0F4: sltiu       $v0, $v0, 0x3D
    ctx->r2 = ctx->r2 < 0X3D ? 1 : 0;
    // 0x8023F0F8: bne         $v0, $zero, L_8023F10C
    if (ctx->r2 != 0) {
        // 0x8023F0FC: nop
    
            goto L_8023F10C;
    }
    // 0x8023F0FC: nop

    // 0x8023F100: lhu         $v0, 0x440($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X440);
    // 0x8023F104: andi        $v0, $v0, 0xFFBF
    ctx->r2 = ctx->r2 & 0XFFBF;
    // 0x8023F108: sh          $v0, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r2;
L_8023F10C:
    // 0x8023F10C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023F110: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023F114: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023F118: jal         0x8003F780
    // 0x8023F11C: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    func_8003F780_1AB80(rdram, ctx);
        goto after_5;
    // 0x8023F11C: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    after_5:
    // 0x8023F120: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023F124: beq         $s0, $zero, L_8023F17C
    if (ctx->r16 == 0) {
        // 0x8023F128: nop
    
            goto L_8023F17C;
    }
    // 0x8023F128: nop

    // 0x8023F12C: jal         0x800715F8
    // 0x8023F130: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800715F8_4C9F8(rdram, ctx);
        goto after_6;
    // 0x8023F130: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8023F134: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023F138: beq         $v0, $zero, L_8023F150
    if (ctx->r2 == 0) {
        // 0x8023F13C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023F150;
    }
    // 0x8023F13C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023F140: jal         0x800711A8
    // 0x8023F144: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    func_800711A8_4C5A8(rdram, ctx);
        goto after_7;
    // 0x8023F144: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    after_7:
    // 0x8023F148: j           L_8023F170
    // 0x8023F14C: nop

        goto L_8023F170;
    // 0x8023F14C: nop

L_8023F150:
    // 0x8023F150: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023F154: lbu         $a3, 0x1($s2)
    ctx->r7 = MEM_BU(ctx->r18, 0X1);
    // 0x8023F158: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023F15C: jal         0x8003E964
    // 0x8023F160: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8003E964_19D64(rdram, ctx);
        goto after_8;
    // 0x8023F160: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_8:
    // 0x8023F164: slti        $v0, $v0, -0x80
    ctx->r2 = SIGNED(ctx->r2) < -0X80 ? 1 : 0;
    // 0x8023F168: beq         $v0, $zero, L_8023F17C
    if (ctx->r2 == 0) {
        // 0x8023F16C: nop
    
            goto L_8023F17C;
    }
    // 0x8023F16C: nop

L_8023F170:
    // 0x8023F170: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8023F174: andi        $v0, $v0, 0xFFBF
    ctx->r2 = ctx->r2 & 0XFFBF;
    // 0x8023F178: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
L_8023F17C:
    // 0x8023F17C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8023F180: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023F184: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023F188: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F18C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023F190: jr          $ra
    // 0x8023F194: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023F194: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8024C4C0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024C4C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024C4C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024C4C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024C4CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024C4D0: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8024C4D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024C4D8: beq         $v1, $v0, L_8024C56C
    if (ctx->r3 == ctx->r2) {
        // 0x8024C4DC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8024C56C;
    }
    // 0x8024C4DC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8024C4E0: beql        $v0, $zero, L_8024C4F8
    if (ctx->r2 == 0) {
        // 0x8024C4E4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024C4F8;
    }
    goto skip_0;
    // 0x8024C4E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8024C4E8: beq         $v1, $zero, L_8024C510
    if (ctx->r3 == 0) {
        // 0x8024C4EC: nop
    
            goto L_8024C510;
    }
    // 0x8024C4EC: nop

    // 0x8024C4F0: j           L_8024C630
    // 0x8024C4F4: nop

        goto L_8024C630;
    // 0x8024C4F4: nop

L_8024C4F8:
    // 0x8024C4F8: beq         $v1, $v0, L_8024C5AC
    if (ctx->r3 == ctx->r2) {
        // 0x8024C4FC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8024C5AC;
    }
    // 0x8024C4FC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024C500: beq         $v1, $v0, L_8024C5E8
    if (ctx->r3 == ctx->r2) {
        // 0x8024C504: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8024C5E8;
    }
    // 0x8024C504: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024C508: j           L_8024C630
    // 0x8024C50C: nop

        goto L_8024C630;
    // 0x8024C50C: nop

L_8024C510:
    // 0x8024C510: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8024C514: jal         0x8006FF84
    // 0x8024C518: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8024C518: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x8024C51C: beq         $v0, $zero, L_8024C630
    if (ctx->r2 == 0) {
        // 0x8024C520: nop
    
            goto L_8024C630;
    }
    // 0x8024C520: nop

    // 0x8024C524: lb          $a0, 0xF($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XF);
    // 0x8024C528: jal         0x8006036C
    // 0x8024C52C: addiu       $a0, $a0, 0x201
    ctx->r4 = ADD32(ctx->r4, 0X201);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x8024C52C: addiu       $a0, $a0, 0x201
    ctx->r4 = ADD32(ctx->r4, 0X201);
    after_1:
    // 0x8024C530: lb          $v1, 0xF($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XF);
    // 0x8024C534: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024C538: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024C53C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024C540: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024C544: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024C548: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8024C54C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8024C550: jal         0x80069820
    // 0x8024C554: lbu         $a0, 0x26D3($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X26D3);
    func_80069820_44C20(rdram, ctx);
        goto after_2;
    // 0x8024C554: lbu         $a0, 0x26D3($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X26D3);
    after_2:
    // 0x8024C558: jal         0x80060D38
    // 0x8024C55C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80060D38_3C138(rdram, ctx);
        goto after_3;
    // 0x8024C55C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_3:
    // 0x8024C560: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024C564: j           L_8024C5D0
    // 0x8024C568: addiu       $a1, $zero, 0x4D
    ctx->r5 = ADD32(0, 0X4D);
        goto L_8024C5D0;
    // 0x8024C568: addiu       $a1, $zero, 0x4D
    ctx->r5 = ADD32(0, 0X4D);
L_8024C56C:
    // 0x8024C56C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024C570: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024C574: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024C578: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024C57C: bne         $v0, $zero, L_8024C630
    if (ctx->r2 != 0) {
        // 0x8024C580: nop
    
            goto L_8024C630;
    }
    // 0x8024C580: nop

    // 0x8024C584: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8024C588: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8024C58C: lbu         $v1, 0x35D0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X35D0);
    // 0x8024C590: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x8024C594: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8024C598: jal         0x80069850
    // 0x8024C59C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    func_80069850_44C50(rdram, ctx);
        goto after_4;
    // 0x8024C59C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    after_4:
    // 0x8024C5A0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024C5A4: j           L_8024C5D0
    // 0x8024C5A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_8024C5D0;
    // 0x8024C5A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8024C5AC:
    // 0x8024C5AC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024C5B0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024C5B4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024C5B8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024C5BC: bne         $v0, $zero, L_8024C630
    if (ctx->r2 != 0) {
        // 0x8024C5C0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8024C630;
    }
    // 0x8024C5C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024C5C4: lbu         $a1, 0xF($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XF);
    // 0x8024C5C8: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    // 0x8024C5CC: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
L_8024C5D0:
    // 0x8024C5D0: jal         0x800616FC
    // 0x8024C5D4: nop

    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x8024C5D4: nop

    after_5:
    // 0x8024C5D8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8024C5DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024C5E0: j           L_8024C630
    // 0x8024C5E4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8024C630;
    // 0x8024C5E4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8024C5E8:
    // 0x8024C5E8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024C5EC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024C5F0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024C5F4: bne         $v0, $zero, L_8024C630
    if (ctx->r2 != 0) {
        // 0x8024C5F8: nop
    
            goto L_8024C630;
    }
    // 0x8024C5F8: nop

    // 0x8024C5FC: jal         0x8002A398
    // 0x8024C600: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8002A398_5798(rdram, ctx);
        goto after_6;
    // 0x8024C600: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
    // 0x8024C604: bne         $v0, $zero, L_8024C630
    if (ctx->r2 != 0) {
        // 0x8024C608: addiu       $a0, $zero, 0x19
        ctx->r4 = ADD32(0, 0X19);
            goto L_8024C630;
    }
    // 0x8024C608: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8024C60C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8024C610: jal         0x8002A2F8
    // 0x8024C614: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_7;
    // 0x8024C614: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8024C618: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8024C61C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8024C620: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8024C624: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8024C628: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024C62C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8024C630:
    // 0x8024C630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024C634: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024C638: jr          $ra
    // 0x8024C63C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024C63C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A79C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A79C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023A7A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023A7A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023A7A8: jal         0x8005044C
    // 0x8023A7AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_0;
    // 0x8023A7AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8023A7B0: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8023A7B4: lhu         $a0, 0x4E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4E);
    // 0x8023A7B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A7BC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8023A7C0: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8023A7C4: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8023A7C8: lb          $a1, 0xE($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XE);
    // 0x8023A7CC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023A7D0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023A7D4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8023A7D8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023A7DC: bne         $a1, $v0, L_8023A7F0
    if (ctx->r5 != ctx->r2) {
        // 0x8023A7E0: sh          $v1, 0x16($s0)
        MEM_H(0X16, ctx->r16) = ctx->r3;
            goto L_8023A7F0;
    }
    // 0x8023A7E0: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8023A7E4: addiu       $a0, $zero, 0x171
    ctx->r4 = ADD32(0, 0X171);
    // 0x8023A7E8: jal         0x8002A33C
    // 0x8023A7EC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8023A7EC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
L_8023A7F0:
    // 0x8023A7F0: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8023A7F4: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8023A7F8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023A7FC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023A800: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023A804: lw          $v0, 0x173C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X173C);
    // 0x8023A808: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8023A80C: addiu       $a0, $a0, 0x173C
    ctx->r4 = ADD32(ctx->r4, 0X173C);
    // 0x8023A810: bne         $v1, $v0, L_8023A850
    if (ctx->r3 != ctx->r2) {
        // 0x8023A814: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023A850;
    }
    // 0x8023A814: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023A818: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8023A81C: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8023A820: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8023A824: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023A828: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x8023A82C: lw          $a1, -0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, -0X4);
    // 0x8023A830: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023A834: jal         0x80050294
    // 0x8023A838: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8023A838: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023A83C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023A840: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023A844: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023A848: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8023A84C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8023A850:
    // 0x8023A850: bne         $v1, $v0, L_8023A86C
    if (ctx->r3 != ctx->r2) {
        // 0x8023A854: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_8023A86C;
    }
    // 0x8023A854: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8023A858: addiu       $v0, $zero, -0x24
    ctx->r2 = ADD32(0, -0X24);
    // 0x8023A85C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8023A860: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023A864: j           L_8023A884
    // 0x8023A868: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
        goto L_8023A884;
    // 0x8023A868: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
L_8023A86C:
    // 0x8023A86C: bne         $v1, $v0, L_8023A884
    if (ctx->r3 != ctx->r2) {
        // 0x8023A870: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023A884;
    }
    // 0x8023A870: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023A874: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8023A878: jal         0x8003E934
    // 0x8023A87C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8023A87C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    after_3:
    // 0x8023A880: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
L_8023A884:
    // 0x8023A884: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023A888: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023A88C: jr          $ra
    // 0x8023A890: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023A890: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023184C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023184C: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x80231850: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80231854: sh          $zero, 0x35C($a0)
    MEM_H(0X35C, ctx->r4) = 0;
    // 0x80231858: sh          $zero, 0x35E($a0)
    MEM_H(0X35E, ctx->r4) = 0;
    // 0x8023185C: sh          $zero, 0x362($a0)
    MEM_H(0X362, ctx->r4) = 0;
    // 0x80231860: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x80231864: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
    // 0x80231868: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023186C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80231870: sh          $v0, 0x366($a0)
    MEM_H(0X366, ctx->r4) = ctx->r2;
    // 0x80231874: sh          $v0, 0x360($a0)
    MEM_H(0X360, ctx->r4) = ctx->r2;
    // 0x80231878: jr          $ra
    // 0x8023187C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8023187C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80248BD0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80248BD0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80248BD4: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80248BD8: bne         $v0, $a0, L_80248C24
    if (ctx->r2 != ctx->r4) {
        // 0x80248BDC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80248C24;
    }
    // 0x80248BDC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80248BE0: lbu         $v1, 0xC($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XC);
    // 0x80248BE4: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x80248BE8: beq         $v0, $zero, L_80248BF8
    if (ctx->r2 == 0) {
        // 0x80248BEC: addiu       $v0, $zero, 0xCB
        ctx->r2 = ADD32(0, 0XCB);
            goto L_80248BF8;
    }
    // 0x80248BEC: addiu       $v0, $zero, 0xCB
    ctx->r2 = ADD32(0, 0XCB);
    // 0x80248BF0: j           L_80248C1C
    // 0x80248BF4: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
        goto L_80248C1C;
    // 0x80248BF4: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_80248BF8:
    // 0x80248BF8: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80248BFC: beql        $v0, $zero, L_80248C14
    if (ctx->r2 == 0) {
        // 0x80248C00: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80248C14;
    }
    goto skip_0;
    // 0x80248C00: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80248C04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80248C08: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80248C0C: j           L_80248C1C
    // 0x80248C10: addiu       $v0, $zero, 0xCA
    ctx->r2 = ADD32(0, 0XCA);
        goto L_80248C1C;
    // 0x80248C10: addiu       $v0, $zero, 0xCA
    ctx->r2 = ADD32(0, 0XCA);
L_80248C14:
    // 0x80248C14: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80248C18: addiu       $v0, $zero, 0xCC
    ctx->r2 = ADD32(0, 0XCC);
L_80248C1C:
    // 0x80248C1C: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x80248C20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80248C24:
    // 0x80248C24: jr          $ra
    // 0x80248C28: nop

    TRACE_RETURN()
    return;
    // 0x80248C28: nop

;}
RECOMP_FUNC void func_8024D200_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024D200: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024D204: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024D208: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8024D20C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024D210: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024D214: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024D218: lw          $v0, 0x2A88($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2A88);
    // 0x8024D21C: jalr        $v0
    // 0x8024D220: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024D220: nop

    after_0:
    // 0x8024D224: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024D228: jr          $ra
    // 0x8024D22C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024D22C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B080_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B080: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023B084: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8023B088: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B08C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8023B090: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023B094: bne         $v0, $zero, L_8023B0B0
    if (ctx->r2 != 0) {
        // 0x8023B098: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8023B0B0;
    }
    // 0x8023B098: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023B09C: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8023B0A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B0A4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8023B0A8: jal         0x8006036C
    // 0x8023B0AC: addiu       $a0, $zero, 0x641
    ctx->r4 = ADD32(0, 0X641);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x8023B0AC: addiu       $a0, $zero, 0x641
    ctx->r4 = ADD32(0, 0X641);
    after_0:
L_8023B0B0:
    // 0x8023B0B0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023B0B4: jr          $ra
    // 0x8023B0B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B0B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802293D0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802293D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802293D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802293D8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802293DC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802293E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802293E4: lb          $v1, 0x2($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2);
    // 0x802293E8: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x802293EC: lw          $s0, 0x5600($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X5600);
    // 0x802293F0: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x802293F4: beq         $v0, $zero, L_802295D0
    if (ctx->r2 == 0) {
        // 0x802293F8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802295D0;
    }
    // 0x802293F8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802293FC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80229400: addu        $at, $at, $v0
    gpr jr_addend_80229408 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229404: lw          $v0, 0x2C90($at)
    ctx->r2 = ADD32(ctx->r1, 0X2C90);
    // 0x80229408: jr          $v0
    // 0x8022940C: nop

    switch (jr_addend_80229408 >> 2) {
        case 0: goto L_80229410; break;
        case 1: goto L_80229454; break;
        case 2: goto L_8022946C; break;
        case 3: goto L_80229498; break;
        case 4: goto L_802294D8; break;
        case 5: goto L_80229504; break;
        case 6: goto L_80229540; break;
        case 7: goto L_802295AC; break;
        default: switch_error(__func__, 0x80229408, 0x80252C90);
    }
    // 0x8022940C: nop

L_80229410:
    // 0x80229410: jal         0x8006033C
    // 0x80229414: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80229414: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    after_0:
    // 0x80229418: beq         $v0, $zero, L_802295D0
    if (ctx->r2 == 0) {
        // 0x8022941C: addiu       $a0, $zero, 0x60D
        ctx->r4 = ADD32(0, 0X60D);
            goto L_802295D0;
    }
    // 0x8022941C: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    // 0x80229420: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x80229424: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229428: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022942C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80229430: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80229434: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x80229438: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022943C: jal         0x80060590
    // 0x80229440: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    func_80060590_3B990(rdram, ctx);
        goto after_1;
    // 0x80229440: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    after_1:
    // 0x80229444: jal         0x80060590
    // 0x80229448: addiu       $a0, $zero, 0x619
    ctx->r4 = ADD32(0, 0X619);
    func_80060590_3B990(rdram, ctx);
        goto after_2;
    // 0x80229448: addiu       $a0, $zero, 0x619
    ctx->r4 = ADD32(0, 0X619);
    after_2:
    // 0x8022944C: j           L_8022959C
    // 0x80229450: nop

        goto L_8022959C;
    // 0x80229450: nop

L_80229454:
    // 0x80229454: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229458: jal         0x800616FC
    // 0x8022945C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x8022945C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_3:
    // 0x80229460: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80229464: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229468: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
L_8022946C:
    // 0x8022946C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229470: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80229474: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80229478: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022947C: bne         $v0, $zero, L_802295D0
    if (ctx->r2 != 0) {
        // 0x80229480: addiu       $a0, $zero, 0x60A
        ctx->r4 = ADD32(0, 0X60A);
            goto L_802295D0;
    }
    // 0x80229480: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    // 0x80229484: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80229488: jal         0x8006036C
    // 0x8022948C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x8022948C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_4:
    // 0x80229490: j           L_8022959C
    // 0x80229494: nop

        goto L_8022959C;
    // 0x80229494: nop

L_80229498:
    // 0x80229498: jal         0x8006033C
    // 0x8022949C: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x8022949C: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    after_5:
    // 0x802294A0: beq         $v0, $zero, L_802295D0
    if (ctx->r2 == 0) {
        // 0x802294A4: addiu       $a0, $zero, 0x60D
        ctx->r4 = ADD32(0, 0X60D);
            goto L_802295D0;
    }
    // 0x802294A4: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    // 0x802294A8: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x802294AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802294B0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802294B4: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802294B8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802294BC: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x802294C0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802294C4: jal         0x80060590
    // 0x802294C8: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    func_80060590_3B990(rdram, ctx);
        goto after_6;
    // 0x802294C8: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    after_6:
    // 0x802294CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802294D0: j           L_80229594
    // 0x802294D4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
        goto L_80229594;
    // 0x802294D4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
L_802294D8:
    // 0x802294D8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802294DC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802294E0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802294E4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802294E8: bne         $v0, $zero, L_802295D0
    if (ctx->r2 != 0) {
        // 0x802294EC: addiu       $a0, $zero, 0x60A
        ctx->r4 = ADD32(0, 0X60A);
            goto L_802295D0;
    }
    // 0x802294EC: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    // 0x802294F0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802294F4: jal         0x8006036C
    // 0x802294F8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x802294F8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_7:
    // 0x802294FC: j           L_8022959C
    // 0x80229500: nop

        goto L_8022959C;
    // 0x80229500: nop

L_80229504:
    // 0x80229504: jal         0x8006033C
    // 0x80229508: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    func_8006033C_3B73C(rdram, ctx);
        goto after_8;
    // 0x80229508: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    after_8:
    // 0x8022950C: beq         $v0, $zero, L_802295D0
    if (ctx->r2 == 0) {
        // 0x80229510: addiu       $a0, $zero, 0x60C
        ctx->r4 = ADD32(0, 0X60C);
            goto L_802295D0;
    }
    // 0x80229510: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    // 0x80229514: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x80229518: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022951C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80229520: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80229524: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80229528: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x8022952C: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80229530: jal         0x80060590
    // 0x80229534: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    func_80060590_3B990(rdram, ctx);
        goto after_9;
    // 0x80229534: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    after_9:
    // 0x80229538: j           L_8022959C
    // 0x8022953C: nop

        goto L_8022959C;
    // 0x8022953C: nop

L_80229540:
    // 0x80229540: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229544: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80229548: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022954C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229550: bne         $v0, $zero, L_802295D0
    if (ctx->r2 != 0) {
        // 0x80229554: nop
    
            goto L_802295D0;
    }
    // 0x80229554: nop

    // 0x80229558: jal         0x8006033C
    // 0x8022955C: addiu       $a0, $zero, 0x61D
    ctx->r4 = ADD32(0, 0X61D);
    func_8006033C_3B73C(rdram, ctx);
        goto after_10;
    // 0x8022955C: addiu       $a0, $zero, 0x61D
    ctx->r4 = ADD32(0, 0X61D);
    after_10:
    // 0x80229560: beq         $v0, $zero, L_802295D0
    if (ctx->r2 == 0) {
        // 0x80229564: addiu       $a0, $zero, 0x61D
        ctx->r4 = ADD32(0, 0X61D);
            goto L_802295D0;
    }
    // 0x80229564: addiu       $a0, $zero, 0x61D
    ctx->r4 = ADD32(0, 0X61D);
    // 0x80229568: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x8022956C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229570: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80229574: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80229578: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022957C: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x80229580: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80229584: jal         0x80060590
    // 0x80229588: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    func_80060590_3B990(rdram, ctx);
        goto after_11;
    // 0x80229588: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    after_11:
    // 0x8022958C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229590: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
L_80229594:
    // 0x80229594: jal         0x800616FC
    // 0x80229598: nop

    func_800616FC_3CAFC(rdram, ctx);
        goto after_12;
    // 0x80229598: nop

    after_12:
L_8022959C:
    // 0x8022959C: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x802295A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802295A4: j           L_802295D0
    // 0x802295A8: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
        goto L_802295D0;
    // 0x802295A8: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
L_802295AC:
    // 0x802295AC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802295B0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802295B4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802295B8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802295BC: bne         $v0, $zero, L_802295D0
    if (ctx->r2 != 0) {
        // 0x802295C0: addiu       $a0, $zero, 0x60F
        ctx->r4 = ADD32(0, 0X60F);
            goto L_802295D0;
    }
    // 0x802295C0: addiu       $a0, $zero, 0x60F
    ctx->r4 = ADD32(0, 0X60F);
    // 0x802295C4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802295C8: jal         0x8006036C
    // 0x802295CC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_8006036C_3B76C(rdram, ctx);
        goto after_13;
    // 0x802295CC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_13:
L_802295D0:
    // 0x802295D0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802295D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802295D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802295DC: jr          $ra
    // 0x802295E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802295E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E894_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E894: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022E898: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8022E89C: beq         $v1, $zero, L_8022E8B8
    if (ctx->r3 == 0) {
        // 0x8022E8A0: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_8022E8B8;
    }
    // 0x8022E8A0: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x8022E8A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E8A8: beq         $v1, $v0, L_8022E8C4
    if (ctx->r3 == ctx->r2) {
        // 0x8022E8AC: nop
    
            goto L_8022E8C4;
    }
    // 0x8022E8AC: nop

    // 0x8022E8B0: j           L_8022E8F0
    // 0x8022E8B4: nop

        goto L_8022E8F0;
    // 0x8022E8B4: nop

L_8022E8B8:
    // 0x8022E8B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E8BC: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022E8C0: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_8022E8C4:
    // 0x8022E8C4: lhu         $a0, 0x0($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X0);
    // 0x8022E8C8: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x8022E8CC: bne         $v0, $zero, L_8022E8EC
    if (ctx->r2 != 0) {
        // 0x8022E8D0: ori         $v0, $a0, 0x1
        ctx->r2 = ctx->r4 | 0X1;
            goto L_8022E8EC;
    }
    // 0x8022E8D0: ori         $v0, $a0, 0x1
    ctx->r2 = ctx->r4 | 0X1;
    // 0x8022E8D4: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x8022E8D8: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8022E8DC: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8022E8E0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022E8E4: beq         $v0, $zero, L_8022E8F0
    if (ctx->r2 == 0) {
        // 0x8022E8E8: ori         $v0, $a0, 0x1
        ctx->r2 = ctx->r4 | 0X1;
            goto L_8022E8F0;
    }
    // 0x8022E8E8: ori         $v0, $a0, 0x1
    ctx->r2 = ctx->r4 | 0X1;
L_8022E8EC:
    // 0x8022E8EC: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_8022E8F0:
    // 0x8022E8F0: jr          $ra
    // 0x8022E8F4: nop

    TRACE_RETURN()
    return;
    // 0x8022E8F4: nop

;}
RECOMP_FUNC void func_8022D8B8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D8B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D8BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D8C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D8C4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D8C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D8CC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D8D0: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022D8D4: beq         $v0, $zero, L_8022DAE0
    if (ctx->r2 == 0) {
        // 0x8022D8D8: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022DAE0;
    }
    // 0x8022D8D8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022D8DC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022D8E0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022D8E4: addu        $at, $at, $v0
    gpr jr_addend_8022D8EC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D8E8: lw          $v0, 0x2DD0($at)
    ctx->r2 = ADD32(ctx->r1, 0X2DD0);
    // 0x8022D8EC: jr          $v0
    // 0x8022D8F0: nop

    switch (jr_addend_8022D8EC >> 2) {
        case 0: goto L_8022D8F4; break;
        case 1: goto L_8022D920; break;
        case 2: goto L_8022D94C; break;
        case 3: goto L_8022D980; break;
        case 4: goto L_8022DA88; break;
        case 5: goto L_8022DABC; break;
        default: switch_error(__func__, 0x8022D8EC, 0x80252DD0);
    }
    // 0x8022D8F0: nop

L_8022D8F4:
    // 0x8022D8F4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022D8F8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D8FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D900: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x8022D904: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D908: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022D90C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D910: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022D914: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022D918: addiu       $v0, $zero, -0xE
    ctx->r2 = ADD32(0, -0XE);
    // 0x8022D91C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022D920:
    // 0x8022D920: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022D924: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D928: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D92C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D930: bgez        $v0, L_8022DAE0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D934: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_8022DAE0;
    }
    // 0x8022D934: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022D938: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D93C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D940: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D944: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022D948: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022D94C:
    // 0x8022D94C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022D950: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x8022D954: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022D958: bgez        $v0, L_8022D970
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D95C: sh          $v1, 0x4($s1)
        MEM_H(0X4, ctx->r17) = ctx->r3;
            goto L_8022D970;
    }
    // 0x8022D95C: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022D960: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D964: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D968: j           L_8022D980
    // 0x8022D96C: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
        goto L_8022D980;
    // 0x8022D96C: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
L_8022D970:
    // 0x8022D970: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022D974: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D978: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022D97C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022D980:
    // 0x8022D980: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D984: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D988: bne         $v1, $v0, L_8022D9A8
    if (ctx->r3 != ctx->r2) {
        // 0x8022D98C: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8022D9A8;
    }
    // 0x8022D98C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022D990: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x8022D994: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022D998: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D99C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022D9A0: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022D9A4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022D9A8:
    // 0x8022D9A8: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022D9AC: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022D9B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D9B4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022D9B8: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022D9BC: sll         $a2, $a2, 20
    ctx->r6 = S32(ctx->r6 << 20);
    // 0x8022D9C0: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022D9C4: jal         0x8004DA90
    // 0x8022D9C8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022D9C8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_0:
    // 0x8022D9CC: jal         0x80040F30
    // 0x8022D9D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022D9D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022D9D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022D9D8: beq         $v1, $zero, L_8022DAE0
    if (ctx->r3 == 0) {
        // 0x8022D9DC: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_8022DAE0;
    }
    // 0x8022D9DC: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x8022D9E0: bnel        $v0, $zero, L_8022D9E8
    if (ctx->r2 != 0) {
        // 0x8022D9E4: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022D9E8;
    }
    goto skip_0;
    // 0x8022D9E4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_8022D9E8:
    // 0x8022D9E8: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x8022D9EC: beq         $v0, $zero, L_8022DAE0
    if (ctx->r2 == 0) {
        // 0x8022D9F0: nop
    
            goto L_8022DAE0;
    }
    // 0x8022D9F0: nop

    // 0x8022D9F4: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x8022D9F8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022D9FC: bne         $v0, $zero, L_8022DA6C
    if (ctx->r2 != 0) {
        // 0x8022DA00: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8022DA6C;
    }
    // 0x8022DA00: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022DA04: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022DA08: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022DA0C: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022DA10: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8022DA14: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022DA18: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022DA1C: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x8022DA20: beq         $a0, $zero, L_8022DA60
    if (ctx->r4 == 0) {
        // 0x8022DA24: sb          $v1, 0xAC($s0)
        MEM_B(0XAC, ctx->r16) = ctx->r3;
            goto L_8022DA60;
    }
    // 0x8022DA24: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022DA28: lw          $v0, 0x38($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X38);
    // 0x8022DA2C: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    // 0x8022DA30: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022DA34: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022DA38: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022DA3C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022DA40: sh          $v0, 0x64($v1)
    MEM_H(0X64, ctx->r3) = ctx->r2;
    // 0x8022DA44: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022DA48: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022DA4C: sw          $v0, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->r2;
    // 0x8022DA50: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022DA54: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022DA58: sw          $v0, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r2;
    // 0x8022DA5C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
L_8022DA60:
    // 0x8022DA60: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022DA64: j           L_8022DAE0
    // 0x8022DA68: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
        goto L_8022DAE0;
    // 0x8022DA68: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
L_8022DA6C:
    // 0x8022DA6C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022DA70: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022DA74: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022DA78: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022DA7C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022DA80: j           L_8022DAE0
    // 0x8022DA84: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022DAE0;
    // 0x8022DA84: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022DA88:
    // 0x8022DA88: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022DA8C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DA90: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022DA94: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DA98: bgez        $v0, L_8022DAE0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022DA9C: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022DAE0;
    }
    // 0x8022DA9C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022DAA0: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x8022DAA4: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x8022DAA8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022DAAC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022DAB0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022DAB4: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8022DAB8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022DABC:
    // 0x8022DABC: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022DAC0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DAC4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022DAC8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DACC: bgez        $v0, L_8022DAE0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022DAD0: nop
    
            goto L_8022DAE0;
    }
    // 0x8022DAD0: nop

    // 0x8022DAD4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022DAD8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022DADC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022DAE0:
    // 0x8022DAE0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022DAE4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DAE8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DAEC: jr          $ra
    // 0x8022DAF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DAF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023F2F4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023F2F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023F2F8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023F2FC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023F300: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023F304: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8023F308: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023F30C: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x8023F310: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8023F314: addiu       $s4, $zero, 0x83
    ctx->r20 = ADD32(0, 0X83);
    // 0x8023F318: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023F31C: addiu       $s3, $zero, -0x14
    ctx->r19 = ADD32(0, -0X14);
    // 0x8023F320: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
L_8023F324:
    // 0x8023F324: jal         0x8004F144
    // 0x8023F328: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8023F328: nop

    after_0:
    // 0x8023F32C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023F330: beq         $a0, $zero, L_8023F37C
    if (ctx->r4 == 0) {
        // 0x8023F334: addiu       $v0, $s0, 0x1
        ctx->r2 = ADD32(ctx->r16, 0X1);
            goto L_8023F37C;
    }
    // 0x8023F334: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8023F338: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8023F33C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023F340: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023F344: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8023F348: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023F34C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8023F350: addu        $v1, $s2, $v1
    ctx->r3 = ADD32(ctx->r18, ctx->r3);
    // 0x8023F354: sb          $s1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r17;
    // 0x8023F358: sb          $s4, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r20;
    // 0x8023F35C: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x8023F360: sb          $s1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r17;
    // 0x8023F364: lhu         $v0, 0x180($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X180);
    // 0x8023F368: sh          $s3, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r19;
    // 0x8023F36C: sh          $v0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r2;
    // 0x8023F370: lhu         $v0, 0x184($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X184);
    // 0x8023F374: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
    // 0x8023F378: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
L_8023F37C:
    // 0x8023F37C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023F380: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023F384: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023F388: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8023F38C: bne         $v0, $zero, L_8023F324
    if (ctx->r2 != 0) {
        // 0x8023F390: nop
    
            goto L_8023F324;
    }
    // 0x8023F390: nop

    // 0x8023F394: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023F398: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8023F39C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F3A0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023F3A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023F3A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023F3AC: jr          $ra
    // 0x8023F3B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023F3B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80240D30_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80240D30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80240D34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80240D38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80240D3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80240D40: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80240D44: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80240D48: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80240D4C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80240D50: lw          $v0, 0x1A64($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1A64);
    // 0x80240D54: jalr        $v0
    // 0x80240D58: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80240D58: nop

    after_0:
    // 0x80240D5C: jal         0x80241694
    // 0x80240D60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80241694_ovl10(rdram, ctx);
        goto after_1;
    // 0x80240D60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80240D64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80240D68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80240D6C: jr          $ra
    // 0x80240D70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80240D70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FDBC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FDBC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022FDC0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022FDC4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FDC8: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022FDCC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022FDD0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8022FDD4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022FDD8: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022FDDC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022FDE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022FDE4: jal         0x8009A3B4
    // 0x8022FDE8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022FDE8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022FDEC: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022FDF0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022FDF4: jal         0x8009A3B4
    // 0x8022FDF8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022FDF8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022FDFC: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022FE00: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022FE04: jal         0x8009A3B4
    // 0x8022FE08: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022FE08: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022FE0C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022FE10: jal         0x800A3450
    // 0x8022FE14: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022FE14: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022FE18: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x8022FE1C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022FE20: andi        $v1, $v1, 0x20
    ctx->r3 = ctx->r3 & 0X20;
    // 0x8022FE24: bne         $v1, $zero, L_8022FE50
    if (ctx->r3 != 0) {
        // 0x8022FE28: sh          $v0, 0x34A($s0)
        MEM_H(0X34A, ctx->r16) = ctx->r2;
            goto L_8022FE50;
    }
    // 0x8022FE28: sh          $v0, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r2;
    // 0x8022FE2C: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    // 0x8022FE30: jal         0x800540D0
    // 0x8022FE34: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_4;
    // 0x8022FE34: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022FE38: beq         $v0, $zero, L_8022FE50
    if (ctx->r2 == 0) {
        // 0x8022FE3C: nop
    
            goto L_8022FE50;
    }
    // 0x8022FE3C: nop

    // 0x8022FE40: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022FE44: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8022FE48: j           L_8022FE5C
    // 0x8022FE4C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
        goto L_8022FE5C;
    // 0x8022FE4C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_8022FE50:
    // 0x8022FE50: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022FE54: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
    // 0x8022FE58: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022FE5C:
    // 0x8022FE5C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022FE60: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8022FE64: beq         $v0, $zero, L_8022FE74
    if (ctx->r2 == 0) {
        // 0x8022FE68: nop
    
            goto L_8022FE74;
    }
    // 0x8022FE68: nop

    // 0x8022FE6C: jal         0x80230ACC
    // 0x8022FE70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80230ACC_ovl10(rdram, ctx);
        goto after_5;
    // 0x8022FE70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_8022FE74:
    // 0x8022FE74: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022FE78: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FE7C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022FE80: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FE84: lw          $v0, 0x9B8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X9B8);
    // 0x8022FE88: jalr        $v0
    // 0x8022FE8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x8022FE8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022FE90: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022FE94: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022FE98: beq         $v0, $zero, L_8022FEE0
    if (ctx->r2 == 0) {
        // 0x8022FE9C: nop
    
            goto L_8022FEE0;
    }
    // 0x8022FE9C: nop

    // 0x8022FEA0: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022FEA4: bltz        $v1, L_8022FED0
    if (SIGNED(ctx->r3) < 0) {
        // 0x8022FEA8: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_8022FED0;
    }
    // 0x8022FEA8: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x8022FEAC: bne         $v0, $zero, L_8022FECC
    if (ctx->r2 != 0) {
        // 0x8022FEB0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022FECC;
    }
    // 0x8022FEB0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022FEB4: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022FEB8: beq         $v0, $zero, L_8022FED0
    if (ctx->r2 == 0) {
        // 0x8022FEBC: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_8022FED0;
    }
    // 0x8022FEBC: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022FEC0: bnel        $v0, $zero, L_8022FED4
    if (ctx->r2 != 0) {
        // 0x8022FEC4: sh          $zero, 0xA($s0)
        MEM_H(0XA, ctx->r16) = 0;
            goto L_8022FED4;
    }
    goto skip_0;
    // 0x8022FEC4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    skip_0:
    // 0x8022FEC8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022FECC:
    // 0x8022FECC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022FED0:
    // 0x8022FED0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022FED4:
    // 0x8022FED4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022FED8: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8022FEDC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022FEE0:
    // 0x8022FEE0: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x8022FEE4: beq         $v0, $zero, L_8022FEF4
    if (ctx->r2 == 0) {
        // 0x8022FEE8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022FEF4;
    }
    // 0x8022FEE8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022FEEC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022FEF0: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_8022FEF4:
    // 0x8022FEF4: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022FEF8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022FEFC: beq         $v0, $a1, L_8022FF14
    if (ctx->r2 == ctx->r5) {
        // 0x8022FF00: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022FF14;
    }
    // 0x8022FF00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FF04: jal         0x80050294
    // 0x8022FF08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x8022FF08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8022FF0C: j           L_8022FF1C
    // 0x8022FF10: nop

        goto L_8022FF1C;
    // 0x8022FF10: nop

L_8022FF14:
    // 0x8022FF14: jal         0x8005044C
    // 0x8022FF18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x8022FF18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_8022FF1C:
    // 0x8022FF1C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022FF20: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022FF24: beq         $v0, $zero, L_8022FF3C
    if (ctx->r2 == 0) {
        // 0x8022FF28: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022FF3C;
    }
    // 0x8022FF28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FF2C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022FF30: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022FF34: jal         0x8003B564
    // 0x8022FF38: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x8022FF38: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
L_8022FF3C:
    // 0x8022FF3C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022FF40: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022FF44: beq         $v0, $zero, L_8022FFF4
    if (ctx->r2 == 0) {
        // 0x8022FF48: nop
    
            goto L_8022FFF4;
    }
    // 0x8022FF48: nop

    // 0x8022FF4C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022FF50: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022FF54: beq         $v0, $zero, L_8022FFF4
    if (ctx->r2 == 0) {
        // 0x8022FF58: addiu       $s2, $s1, 0xC
        ctx->r18 = ADD32(ctx->r17, 0XC);
            goto L_8022FFF4;
    }
    // 0x8022FF58: addiu       $s2, $s1, 0xC
    ctx->r18 = ADD32(ctx->r17, 0XC);
    // 0x8022FF5C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022FF60: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022FF64: jal         0x8009A3B4
    // 0x8022FF68: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x8022FF68: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x8022FF6C: lhu         $v0, 0xE($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XE);
    // 0x8022FF70: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8022FF74: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x8022FF78: andi        $v1, $v1, 0x20
    ctx->r3 = ctx->r3 & 0X20;
    // 0x8022FF7C: beq         $v1, $zero, L_8022FFBC
    if (ctx->r3 == 0) {
        // 0x8022FF80: sh          $v0, 0xE($s1)
        MEM_H(0XE, ctx->r17) = ctx->r2;
            goto L_8022FFBC;
    }
    // 0x8022FF80: sh          $v0, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r2;
    // 0x8022FF84: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022FF88: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022FF8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FF90: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022FF94: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022FF98: addiu       $v0, $s1, 0x14
    ctx->r2 = ADD32(ctx->r17, 0X14);
    // 0x8022FF9C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022FFA0: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8022FFA4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022FFA8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022FFAC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022FFB0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022FFB4: j           L_8022FFEC
    // 0x8022FFB8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
        goto L_8022FFEC;
    // 0x8022FFB8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_8022FFBC:
    // 0x8022FFBC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022FFC0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022FFC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FFC8: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022FFCC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022FFD0: addiu       $v0, $s1, 0x14
    ctx->r2 = ADD32(ctx->r17, 0X14);
    // 0x8022FFD4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022FFD8: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8022FFDC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022FFE0: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022FFE4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022FFE8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_8022FFEC:
    // 0x8022FFEC: jal         0x80051E18
    // 0x8022FFF0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_11;
    // 0x8022FFF0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_11:
L_8022FFF4:
    // 0x8022FFF4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022FFF8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8022FFFC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80230000: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80230004: jr          $ra
    // 0x80230008: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80230008: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022FA10_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FA10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FA14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FA18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FA1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FA20: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022FA24: bne         $v0, $zero, L_8022FA4C
    if (ctx->r2 != 0) {
        // 0x8022FA28: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8022FA4C;
    }
    // 0x8022FA28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FA2C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022FA30: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x8022FA34: addiu       $a0, $zero, 0xDA
    ctx->r4 = ADD32(0, 0XDA);
    // 0x8022FA38: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022FA3C: jal         0x8002A33C
    // 0x8022FA40: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022FA40: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022FA44: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022FA48: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
L_8022FA4C:
    // 0x8022FA4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FA50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FA54: jr          $ra
    // 0x8022FA58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FA58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80247C80_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247C80: jr          $ra
    // 0x80247C84: nop

    TRACE_RETURN()
    return;
    // 0x80247C84: nop

    // 0x80247C88: nop

    // 0x80247C8C: nop

;}
RECOMP_FUNC void func_8022E4B0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E4B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E4B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E4B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E4BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E4C0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E4C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E4C8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022E4CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E4D0: lw          $v0, 0x900($at)
    ctx->r2 = MEM_W(ctx->r1, 0X900);
    // 0x8022E4D4: jalr        $v0
    // 0x8022E4D8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E4D8: nop

    after_0:
    // 0x8022E4DC: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    // 0x8022E4E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E4E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E4E8: jr          $ra
    // 0x8022E4EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E4EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802326C0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802326C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802326C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802326C8: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x802326CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802326D0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802326D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802326D8: lw          $v0, 0x1140($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1140);
    // 0x802326DC: jalr        $v0
    // 0x802326E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802326E0: nop

    after_0:
    // 0x802326E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802326E8: jr          $ra
    // 0x802326EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802326EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022677C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022677C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226780: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80226784: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80226788: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022678C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226790: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226794: lw          $s1, 0x34($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X34);
    // 0x80226798: lw          $s2, 0x38($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X38);
    // 0x8022679C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802267A0: lw          $s0, 0x3C($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X3C);
    // 0x802267A4: bne         $v0, $zero, L_802267D4
    if (ctx->r2 != 0) {
        // 0x802267A8: lw          $s3, 0x2C($a0)
        ctx->r19 = MEM_W(ctx->r4, 0X2C);
            goto L_802267D4;
    }
    // 0x802267A8: lw          $s3, 0x2C($a0)
    ctx->r19 = MEM_W(ctx->r4, 0X2C);
    // 0x802267AC: jal         0x80226F30
    // 0x802267B0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80226F30_ovl10(rdram, ctx);
        goto after_0;
    // 0x802267B0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x802267B4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802267B8: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x802267BC: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x802267C0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802267C4: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x802267C8: sh          $v0, 0xA($s3)
    MEM_H(0XA, ctx->r19) = ctx->r2;
    // 0x802267CC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802267D0: sb          $zero, 0x333A($at)
    MEM_B(0X333A, ctx->r1) = 0;
L_802267D4:
    // 0x802267D4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802267D8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802267DC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802267E0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802267E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802267E8: jr          $ra
    // 0x802267EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802267EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8024114C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024114C: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x80241150: beq         $v0, $zero, L_80241168
    if (ctx->r2 == 0) {
        // 0x80241154: addiu       $a1, $a0, 0x500
        ctx->r5 = ADD32(ctx->r4, 0X500);
            goto L_80241168;
    }
    // 0x80241154: addiu       $a1, $a0, 0x500
    ctx->r5 = ADD32(ctx->r4, 0X500);
    // 0x80241158: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x8024115C: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80241160: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
    // 0x80241164: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80241168:
    // 0x80241168: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x8024116C: bne         $v0, $zero, L_8024128C
    if (ctx->r2 != 0) {
        // 0x80241170: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8024128C;
    }
    // 0x80241170: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80241174: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80241178: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x8024117C: sltiu       $v0, $v1, 0xA
    ctx->r2 = ctx->r3 < 0XA ? 1 : 0;
    // 0x80241180: beq         $v0, $zero, L_8024168C
    if (ctx->r2 == 0) {
        // 0x80241184: sh          $zero, 0x504($a0)
        MEM_H(0X504, ctx->r4) = 0;
            goto L_8024168C;
    }
    // 0x80241184: sh          $zero, 0x504($a0)
    MEM_H(0X504, ctx->r4) = 0;
    // 0x80241188: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8024118C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80241190: addu        $at, $at, $v0
    gpr jr_addend_80241198 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80241194: lw          $v0, 0x30D0($at)
    ctx->r2 = ADD32(ctx->r1, 0X30D0);
    // 0x80241198: jr          $v0
    // 0x8024119C: nop

    switch (jr_addend_80241198 >> 2) {
        case 0: goto L_802411A0; break;
        case 1: goto L_8024168C; break;
        case 2: goto L_8024168C; break;
        case 3: goto L_802411E4; break;
        case 4: goto L_8024168C; break;
        case 5: goto L_802411F8; break;
        case 6: goto L_8024122C; break;
        case 7: goto L_8024168C; break;
        case 8: goto L_80241240; break;
        case 9: goto L_80241264; break;
        default: switch_error(__func__, 0x80241198, 0x802530D0);
    }
    // 0x8024119C: nop

L_802411A0:
    // 0x802411A0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802411A4: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x802411A8: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x802411AC: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x802411B0: sh          $v1, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r3;
    // 0x802411B4: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x802411B8: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x802411BC: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x802411C0: lw          $v1, 0x1A4C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1A4C);
    // 0x802411C4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x802411C8: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    // 0x802411CC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802411D0: sh          $v0, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r2;
    // 0x802411D4: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
    // 0x802411D8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802411DC: j           L_8024168C
    // 0x802411E0: sw          $v1, 0x3524($at)
    MEM_W(0X3524, ctx->r1) = ctx->r3;
        goto L_8024168C;
    // 0x802411E0: sw          $v1, 0x3524($at)
    MEM_W(0X3524, ctx->r1) = ctx->r3;
L_802411E4:
    // 0x802411E4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802411E8: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x802411EC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802411F0: j           L_8024168C
    // 0x802411F4: sh          $v0, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r2;
        goto L_8024168C;
    // 0x802411F4: sh          $v0, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r2;
L_802411F8:
    // 0x802411F8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802411FC: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80241200: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x80241204: sb          $v0, 0x108($a0)
    MEM_B(0X108, ctx->r4) = ctx->r2;
    // 0x80241208: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8024120C: lw          $v1, 0x1A50($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1A50);
    // 0x80241210: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80241214: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    // 0x80241218: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8024121C: sh          $v0, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r2;
    // 0x80241220: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80241224: j           L_8024168C
    // 0x80241228: sw          $v1, 0x3524($at)
    MEM_W(0X3524, ctx->r1) = ctx->r3;
        goto L_8024168C;
    // 0x80241228: sw          $v1, 0x3524($at)
    MEM_W(0X3524, ctx->r1) = ctx->r3;
L_8024122C:
    // 0x8024122C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80241230: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80241234: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80241238: j           L_8024168C
    // 0x8024123C: sb          $v0, 0x108($a0)
    MEM_B(0X108, ctx->r4) = ctx->r2;
        goto L_8024168C;
    // 0x8024123C: sb          $v0, 0x108($a0)
    MEM_B(0X108, ctx->r4) = ctx->r2;
L_80241240:
    // 0x80241240: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80241244: lw          $v0, 0x1A4C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1A4C);
    // 0x80241248: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8024124C: sh          $v1, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r3;
    // 0x80241250: addiu       $v1, $zero, 0xB
    ctx->r3 = ADD32(0, 0XB);
    // 0x80241254: sh          $v1, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r3;
    // 0x80241258: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024125C: j           L_8024168C
    // 0x80241260: sw          $v0, 0x3524($at)
    MEM_W(0X3524, ctx->r1) = ctx->r2;
        goto L_8024168C;
    // 0x80241260: sw          $v0, 0x3524($at)
    MEM_W(0X3524, ctx->r1) = ctx->r2;
L_80241264:
    // 0x80241264: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80241268: sh          $v0, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r2;
    // 0x8024126C: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80241270: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80241274: lw          $v1, 0x1A48($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1A48);
    // 0x80241278: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8024127C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80241280: sw          $v1, 0x3524($at)
    MEM_W(0X3524, ctx->r1) = ctx->r3;
    // 0x80241284: j           L_8024168C
    // 0x80241288: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
        goto L_8024168C;
    // 0x80241288: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_8024128C:
    // 0x8024128C: lhu         $v0, 0x504($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X504);
    // 0x80241290: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80241294: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80241298: sh          $v0, 0x504($a0)
    MEM_H(0X504, ctx->r4) = ctx->r2;
    // 0x8024129C: sltiu       $v0, $v1, 0xA
    ctx->r2 = ctx->r3 < 0XA ? 1 : 0;
    // 0x802412A0: beq         $v0, $zero, L_8024168C
    if (ctx->r2 == 0) {
        // 0x802412A4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8024168C;
    }
    // 0x802412A4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802412A8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802412AC: addu        $at, $at, $v0
    gpr jr_addend_802412B4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802412B0: lw          $v0, 0x30F8($at)
    ctx->r2 = ADD32(ctx->r1, 0X30F8);
    // 0x802412B4: jr          $v0
    // 0x802412B8: nop

    switch (jr_addend_802412B4 >> 2) {
        case 0: goto L_802412BC; break;
        case 1: goto L_80241324; break;
        case 2: goto L_8024168C; break;
        case 3: goto L_80241348; break;
        case 4: goto L_8024168C; break;
        case 5: goto L_802413B4; break;
        case 6: goto L_8024141C; break;
        case 7: goto L_8024168C; break;
        case 8: goto L_802414E8; break;
        case 9: goto L_80241610; break;
        default: switch_error(__func__, 0x802412B4, 0x802530F8);
    }
    // 0x802412B8: nop

L_802412BC:
    // 0x802412BC: lh          $v1, 0x4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4);
    // 0x802412C0: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x802412C4: beq         $v1, $v0, L_802412E0
    if (ctx->r3 == ctx->r2) {
        // 0x802412C8: nop
    
            goto L_802412E0;
    }
    // 0x802412C8: nop

    // 0x802412CC: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x802412D0: beq         $v1, $v0, L_802412EC
    if (ctx->r3 == ctx->r2) {
        // 0x802412D4: addiu       $v1, $zero, 0xC
        ctx->r3 = ADD32(0, 0XC);
            goto L_802412EC;
    }
    // 0x802412D4: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x802412D8: j           L_802412FC
    // 0x802412DC: nop

        goto L_802412FC;
    // 0x802412DC: nop

L_802412E0:
    // 0x802412E0: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x802412E4: j           L_802412F8
    // 0x802412E8: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
        goto L_802412F8;
    // 0x802412E8: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
L_802412EC:
    // 0x802412EC: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x802412F0: sh          $v1, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r3;
    // 0x802412F4: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
L_802412F8:
    // 0x802412F8: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_802412FC:
    // 0x802412FC: lh          $v1, 0x4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4);
    // 0x80241300: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80241304: bne         $v1, $v0, L_8024168C
    if (ctx->r3 != ctx->r2) {
        // 0x80241308: nop
    
            goto L_8024168C;
    }
    // 0x80241308: nop

    // 0x8024130C: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80241310: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80241314: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x80241318: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024131C: j           L_8024168C
    // 0x80241320: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
        goto L_8024168C;
    // 0x80241320: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80241324:
    // 0x80241324: lh          $v1, 0x4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4);
    // 0x80241328: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8024132C: beq         $v1, $v0, L_802414A8
    if (ctx->r3 == ctx->r2) {
        // 0x80241330: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_802414A8;
    }
    // 0x80241330: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80241334: bne         $v1, $v0, L_8024168C
    if (ctx->r3 != ctx->r2) {
        // 0x80241338: addiu       $v1, $zero, 0xC
        ctx->r3 = ADD32(0, 0XC);
            goto L_8024168C;
    }
    // 0x80241338: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x8024133C: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80241340: j           L_802414C4
    // 0x80241344: sh          $v1, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r3;
        goto L_802414C4;
    // 0x80241344: sh          $v1, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r3;
L_80241348:
    // 0x80241348: lh          $v1, 0x4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4);
    // 0x8024134C: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80241350: beq         $v1, $v0, L_802414A8
    if (ctx->r3 == ctx->r2) {
        // 0x80241354: slti        $v0, $v1, 0x33
        ctx->r2 = SIGNED(ctx->r3) < 0X33 ? 1 : 0;
            goto L_802414A8;
    }
    // 0x80241354: slti        $v0, $v1, 0x33
    ctx->r2 = SIGNED(ctx->r3) < 0X33 ? 1 : 0;
    // 0x80241358: beq         $v0, $zero, L_80241378
    if (ctx->r2 == 0) {
        // 0x8024135C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80241378;
    }
    // 0x8024135C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80241360: beq         $v1, $v0, L_802414A8
    if (ctx->r3 == ctx->r2) {
        // 0x80241364: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_802414A8;
    }
    // 0x80241364: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80241368: beq         $v1, $v0, L_802413A8
    if (ctx->r3 == ctx->r2) {
        // 0x8024136C: nop
    
            goto L_802413A8;
    }
    // 0x8024136C: nop

    // 0x80241370: j           L_8024168C
    // 0x80241374: nop

        goto L_8024168C;
    // 0x80241374: nop

L_80241378:
    // 0x80241378: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x8024137C: beq         $v1, $v0, L_802414A8
    if (ctx->r3 == ctx->r2) {
        // 0x80241380: slti        $v0, $v1, 0x5B
        ctx->r2 = SIGNED(ctx->r3) < 0X5B ? 1 : 0;
            goto L_802414A8;
    }
    // 0x80241380: slti        $v0, $v1, 0x5B
    ctx->r2 = SIGNED(ctx->r3) < 0X5B ? 1 : 0;
    // 0x80241384: beq         $v0, $zero, L_8024139C
    if (ctx->r2 == 0) {
        // 0x80241388: addiu       $v0, $zero, 0x55
        ctx->r2 = ADD32(0, 0X55);
            goto L_8024139C;
    }
    // 0x80241388: addiu       $v0, $zero, 0x55
    ctx->r2 = ADD32(0, 0X55);
    // 0x8024138C: beq         $v1, $v0, L_802413A8
    if (ctx->r3 == ctx->r2) {
        // 0x80241390: nop
    
            goto L_802413A8;
    }
    // 0x80241390: nop

    // 0x80241394: j           L_8024168C
    // 0x80241398: nop

        goto L_8024168C;
    // 0x80241398: nop

L_8024139C:
    // 0x8024139C: addiu       $v0, $zero, 0x94
    ctx->r2 = ADD32(0, 0X94);
    // 0x802413A0: bne         $v1, $v0, L_8024168C
    if (ctx->r3 != ctx->r2) {
        // 0x802413A4: nop
    
            goto L_8024168C;
    }
    // 0x802413A4: nop

L_802413A8:
    // 0x802413A8: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x802413AC: j           L_802414C0
    // 0x802413B0: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
        goto L_802414C0;
    // 0x802413B0: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
L_802413B4:
    // 0x802413B4: lh          $v1, 0x4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4);
    // 0x802413B8: addiu       $v0, $zero, 0x36
    ctx->r2 = ADD32(0, 0X36);
    // 0x802413BC: beq         $v1, $v0, L_802414DC
    if (ctx->r3 == ctx->r2) {
        // 0x802413C0: slti        $v0, $v1, 0x37
        ctx->r2 = SIGNED(ctx->r3) < 0X37 ? 1 : 0;
            goto L_802414DC;
    }
    // 0x802413C0: slti        $v0, $v1, 0x37
    ctx->r2 = SIGNED(ctx->r3) < 0X37 ? 1 : 0;
    // 0x802413C4: beq         $v0, $zero, L_802413E4
    if (ctx->r2 == 0) {
        // 0x802413C8: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_802413E4;
    }
    // 0x802413C8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802413CC: beq         $v1, $v0, L_802414A8
    if (ctx->r3 == ctx->r2) {
        // 0x802413D0: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_802414A8;
    }
    // 0x802413D0: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x802413D4: beq         $v1, $v0, L_802414D4
    if (ctx->r3 == ctx->r2) {
        // 0x802413D8: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_802414D4;
    }
    // 0x802413D8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802413DC: j           L_8024168C
    // 0x802413E0: nop

        goto L_8024168C;
    // 0x802413E0: nop

L_802413E4:
    // 0x802413E4: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x802413E8: beq         $v1, $v0, L_802414D0
    if (ctx->r3 == ctx->r2) {
        // 0x802413EC: slti        $v0, $v1, 0xB5
        ctx->r2 = SIGNED(ctx->r3) < 0XB5 ? 1 : 0;
            goto L_802414D0;
    }
    // 0x802413EC: slti        $v0, $v1, 0xB5
    ctx->r2 = SIGNED(ctx->r3) < 0XB5 ? 1 : 0;
    // 0x802413F0: beq         $v0, $zero, L_80241408
    if (ctx->r2 == 0) {
        // 0x802413F4: addiu       $v0, $zero, 0xAA
        ctx->r2 = ADD32(0, 0XAA);
            goto L_80241408;
    }
    // 0x802413F4: addiu       $v0, $zero, 0xAA
    ctx->r2 = ADD32(0, 0XAA);
    // 0x802413F8: beq         $v1, $v0, L_802414B8
    if (ctx->r3 == ctx->r2) {
        // 0x802413FC: nop
    
            goto L_802414B8;
    }
    // 0x802413FC: nop

    // 0x80241400: j           L_8024168C
    // 0x80241404: nop

        goto L_8024168C;
    // 0x80241404: nop

L_80241408:
    // 0x80241408: addiu       $v0, $zero, 0xB8
    ctx->r2 = ADD32(0, 0XB8);
    // 0x8024140C: bne         $v1, $v0, L_8024168C
    if (ctx->r3 != ctx->r2) {
        // 0x80241410: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8024168C;
    }
    // 0x80241410: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80241414: j           L_802414E0
    // 0x80241418: nop

        goto L_802414E0;
    // 0x80241418: nop

L_8024141C:
    // 0x8024141C: lh          $v1, 0x4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4);
    // 0x80241420: addiu       $v0, $zero, 0x87
    ctx->r2 = ADD32(0, 0X87);
    // 0x80241424: beq         $v1, $v0, L_802414B8
    if (ctx->r3 == ctx->r2) {
        // 0x80241428: slti        $v0, $v1, 0x88
        ctx->r2 = SIGNED(ctx->r3) < 0X88 ? 1 : 0;
            goto L_802414B8;
    }
    // 0x80241428: slti        $v0, $v1, 0x88
    ctx->r2 = SIGNED(ctx->r3) < 0X88 ? 1 : 0;
    // 0x8024142C: beq         $v0, $zero, L_80241468
    if (ctx->r2 == 0) {
        // 0x80241430: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_80241468;
    }
    // 0x80241430: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80241434: beq         $v1, $v0, L_802414D0
    if (ctx->r3 == ctx->r2) {
        // 0x80241438: slti        $v0, $v1, 0x29
        ctx->r2 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
            goto L_802414D0;
    }
    // 0x80241438: slti        $v0, $v1, 0x29
    ctx->r2 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
    // 0x8024143C: beq         $v0, $zero, L_80241454
    if (ctx->r2 == 0) {
        // 0x80241440: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80241454;
    }
    // 0x80241440: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80241444: beq         $v1, $v0, L_802414A8
    if (ctx->r3 == ctx->r2) {
        // 0x80241448: nop
    
            goto L_802414A8;
    }
    // 0x80241448: nop

    // 0x8024144C: j           L_8024168C
    // 0x80241450: nop

        goto L_8024168C;
    // 0x80241450: nop

L_80241454:
    // 0x80241454: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x80241458: beq         $v1, $v0, L_802414E0
    if (ctx->r3 == ctx->r2) {
        // 0x8024145C: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_802414E0;
    }
    // 0x8024145C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80241460: j           L_8024168C
    // 0x80241464: nop

        goto L_8024168C;
    // 0x80241464: nop

L_80241468:
    // 0x80241468: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x8024146C: beq         $v1, $v0, L_802414D0
    if (ctx->r3 == ctx->r2) {
        // 0x80241470: slti        $v0, $v1, 0xC9
        ctx->r2 = SIGNED(ctx->r3) < 0XC9 ? 1 : 0;
            goto L_802414D0;
    }
    // 0x80241470: slti        $v0, $v1, 0xC9
    ctx->r2 = SIGNED(ctx->r3) < 0XC9 ? 1 : 0;
    // 0x80241474: beq         $v0, $zero, L_8024148C
    if (ctx->r2 == 0) {
        // 0x80241478: addiu       $v0, $zero, 0xAA
        ctx->r2 = ADD32(0, 0XAA);
            goto L_8024148C;
    }
    // 0x80241478: addiu       $v0, $zero, 0xAA
    ctx->r2 = ADD32(0, 0XAA);
    // 0x8024147C: beq         $v1, $v0, L_802414A8
    if (ctx->r3 == ctx->r2) {
        // 0x80241480: nop
    
            goto L_802414A8;
    }
    // 0x80241480: nop

    // 0x80241484: j           L_8024168C
    // 0x80241488: nop

        goto L_8024168C;
    // 0x80241488: nop

L_8024148C:
    // 0x8024148C: addiu       $v0, $zero, 0xCC
    ctx->r2 = ADD32(0, 0XCC);
    // 0x80241490: beq         $v1, $v0, L_802414DC
    if (ctx->r3 == ctx->r2) {
        // 0x80241494: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_802414DC;
    }
    // 0x80241494: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80241498: beq         $v1, $v0, L_802414B8
    if (ctx->r3 == ctx->r2) {
        // 0x8024149C: nop
    
            goto L_802414B8;
    }
    // 0x8024149C: nop

    // 0x802414A0: j           L_8024168C
    // 0x802414A4: nop

        goto L_8024168C;
    // 0x802414A4: nop

L_802414A8:
    // 0x802414A8: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x802414AC: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x802414B0: j           L_8024168C
    // 0x802414B4: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
        goto L_8024168C;
    // 0x802414B4: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_802414B8:
    // 0x802414B8: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x802414BC: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
L_802414C0:
    // 0x802414C0: sh          $v1, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r3;
L_802414C4:
    // 0x802414C4: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x802414C8: j           L_8024168C
    // 0x802414CC: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
        goto L_8024168C;
    // 0x802414CC: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_802414D0:
    // 0x802414D0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_802414D4:
    // 0x802414D4: j           L_8024168C
    // 0x802414D8: sh          $v0, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r2;
        goto L_8024168C;
    // 0x802414D8: sh          $v0, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r2;
L_802414DC:
    // 0x802414DC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_802414E0:
    // 0x802414E0: j           L_8024168C
    // 0x802414E4: sh          $v0, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r2;
        goto L_8024168C;
    // 0x802414E4: sh          $v0, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r2;
L_802414E8:
    // 0x802414E8: lh          $v1, 0x4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4);
    // 0x802414EC: addiu       $v0, $zero, 0x73
    ctx->r2 = ADD32(0, 0X73);
    // 0x802414F0: beq         $v1, $v0, L_80241584
    if (ctx->r3 == ctx->r2) {
        // 0x802414F4: slti        $v0, $v1, 0x74
        ctx->r2 = SIGNED(ctx->r3) < 0X74 ? 1 : 0;
            goto L_80241584;
    }
    // 0x802414F4: slti        $v0, $v1, 0x74
    ctx->r2 = SIGNED(ctx->r3) < 0X74 ? 1 : 0;
    // 0x802414F8: beq         $v0, $zero, L_80241534
    if (ctx->r2 == 0) {
        // 0x802414FC: addiu       $v0, $zero, 0x41
        ctx->r2 = ADD32(0, 0X41);
            goto L_80241534;
    }
    // 0x802414FC: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80241500: beq         $v1, $v0, L_80241584
    if (ctx->r3 == ctx->r2) {
        // 0x80241504: slti        $v0, $v1, 0x42
        ctx->r2 = SIGNED(ctx->r3) < 0X42 ? 1 : 0;
            goto L_80241584;
    }
    // 0x80241504: slti        $v0, $v1, 0x42
    ctx->r2 = SIGNED(ctx->r3) < 0X42 ? 1 : 0;
    // 0x80241508: beq         $v0, $zero, L_80241520
    if (ctx->r2 == 0) {
        // 0x8024150C: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_80241520;
    }
    // 0x8024150C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80241510: beq         $v1, $v0, L_80241578
    if (ctx->r3 == ctx->r2) {
        // 0x80241514: nop
    
            goto L_80241578;
    }
    // 0x80241514: nop

    // 0x80241518: j           L_802415A0
    // 0x8024151C: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
        goto L_802415A0;
    // 0x8024151C: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
L_80241520:
    // 0x80241520: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80241524: beq         $v1, $v0, L_80241578
    if (ctx->r3 == ctx->r2) {
        // 0x80241528: nop
    
            goto L_80241578;
    }
    // 0x80241528: nop

    // 0x8024152C: j           L_80241598
    // 0x80241530: nop

        goto L_80241598;
    // 0x80241530: nop

L_80241534:
    // 0x80241534: addiu       $v0, $zero, 0xB9
    ctx->r2 = ADD32(0, 0XB9);
    // 0x80241538: beq         $v1, $v0, L_80241584
    if (ctx->r3 == ctx->r2) {
        // 0x8024153C: slti        $v0, $v1, 0xBA
        ctx->r2 = SIGNED(ctx->r3) < 0XBA ? 1 : 0;
            goto L_80241584;
    }
    // 0x8024153C: slti        $v0, $v1, 0xBA
    ctx->r2 = SIGNED(ctx->r3) < 0XBA ? 1 : 0;
    // 0x80241540: beq         $v0, $zero, L_80241558
    if (ctx->r2 == 0) {
        // 0x80241544: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_80241558;
    }
    // 0x80241544: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80241548: beq         $v1, $v0, L_80241578
    if (ctx->r3 == ctx->r2) {
        // 0x8024154C: nop
    
            goto L_80241578;
    }
    // 0x8024154C: nop

    // 0x80241550: j           L_80241598
    // 0x80241554: nop

        goto L_80241598;
    // 0x80241554: nop

L_80241558:
    // 0x80241558: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x8024155C: beq         $v1, $v0, L_80241578
    if (ctx->r3 == ctx->r2) {
        // 0x80241560: nop
    
            goto L_80241578;
    }
    // 0x80241560: nop

    // 0x80241564: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80241568: beq         $v1, $v0, L_80241584
    if (ctx->r3 == ctx->r2) {
        // 0x8024156C: nop
    
            goto L_80241584;
    }
    // 0x8024156C: nop

    // 0x80241570: j           L_80241598
    // 0x80241574: nop

        goto L_80241598;
    // 0x80241574: nop

L_80241578:
    // 0x80241578: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8024157C: j           L_80241594
    // 0x80241580: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
        goto L_80241594;
    // 0x80241580: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
L_80241584:
    // 0x80241584: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80241588: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x8024158C: sh          $v1, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r3;
    // 0x80241590: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
L_80241594:
    // 0x80241594: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80241598:
    // 0x80241598: lh          $v1, 0x4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4);
    // 0x8024159C: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
L_802415A0:
    // 0x802415A0: beq         $v1, $v0, L_80241600
    if (ctx->r3 == ctx->r2) {
        // 0x802415A4: slti        $v0, $v1, 0x5B
        ctx->r2 = SIGNED(ctx->r3) < 0X5B ? 1 : 0;
            goto L_80241600;
    }
    // 0x802415A4: slti        $v0, $v1, 0x5B
    ctx->r2 = SIGNED(ctx->r3) < 0X5B ? 1 : 0;
    // 0x802415A8: beq         $v0, $zero, L_802415C8
    if (ctx->r2 == 0) {
        // 0x802415AC: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_802415C8;
    }
    // 0x802415AC: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802415B0: beq         $v1, $v0, L_802415E4
    if (ctx->r3 == ctx->r2) {
        // 0x802415B4: addiu       $v0, $zero, 0x46
        ctx->r2 = ADD32(0, 0X46);
            goto L_802415E4;
    }
    // 0x802415B4: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x802415B8: beq         $v1, $v0, L_802415F8
    if (ctx->r3 == ctx->r2) {
        // 0x802415BC: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_802415F8;
    }
    // 0x802415BC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802415C0: j           L_8024168C
    // 0x802415C4: nop

        goto L_8024168C;
    // 0x802415C4: nop

L_802415C8:
    // 0x802415C8: addiu       $v0, $zero, 0x7D
    ctx->r2 = ADD32(0, 0X7D);
    // 0x802415CC: beq         $v1, $v0, L_80241600
    if (ctx->r3 == ctx->r2) {
        // 0x802415D0: addiu       $v0, $zero, 0xD2
        ctx->r2 = ADD32(0, 0XD2);
            goto L_80241600;
    }
    // 0x802415D0: addiu       $v0, $zero, 0xD2
    ctx->r2 = ADD32(0, 0XD2);
    // 0x802415D4: beq         $v1, $v0, L_80241608
    if (ctx->r3 == ctx->r2) {
        // 0x802415D8: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80241608;
    }
    // 0x802415D8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802415DC: j           L_8024168C
    // 0x802415E0: nop

        goto L_8024168C;
    // 0x802415E0: nop

L_802415E4:
    // 0x802415E4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802415E8: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x802415EC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802415F0: j           L_8024168C
    // 0x802415F4: sh          $v0, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r2;
        goto L_8024168C;
    // 0x802415F4: sh          $v0, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r2;
L_802415F8:
    // 0x802415F8: j           L_8024168C
    // 0x802415FC: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
        goto L_8024168C;
    // 0x802415FC: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
L_80241600:
    // 0x80241600: j           L_8024168C
    // 0x80241604: sb          $zero, 0xAD($a0)
    MEM_B(0XAD, ctx->r4) = 0;
        goto L_8024168C;
    // 0x80241604: sb          $zero, 0xAD($a0)
    MEM_B(0XAD, ctx->r4) = 0;
L_80241608:
    // 0x80241608: j           L_8024168C
    // 0x8024160C: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
        goto L_8024168C;
    // 0x8024160C: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
L_80241610:
    // 0x80241610: lh          $v1, 0x4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4);
    // 0x80241614: addiu       $v0, $zero, 0xBE
    ctx->r2 = ADD32(0, 0XBE);
    // 0x80241618: beq         $v1, $v0, L_8024165C
    if (ctx->r3 == ctx->r2) {
        // 0x8024161C: slti        $v0, $v1, 0xBF
        ctx->r2 = SIGNED(ctx->r3) < 0XBF ? 1 : 0;
            goto L_8024165C;
    }
    // 0x8024161C: slti        $v0, $v1, 0xBF
    ctx->r2 = SIGNED(ctx->r3) < 0XBF ? 1 : 0;
    // 0x80241620: beq         $v0, $zero, L_80241638
    if (ctx->r2 == 0) {
        // 0x80241624: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80241638;
    }
    // 0x80241624: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80241628: beq         $v1, $v0, L_80241654
    if (ctx->r3 == ctx->r2) {
        // 0x8024162C: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80241654;
    }
    // 0x8024162C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80241630: j           L_8024168C
    // 0x80241634: nop

        goto L_8024168C;
    // 0x80241634: nop

L_80241638:
    // 0x80241638: addiu       $v0, $zero, 0xF5
    ctx->r2 = ADD32(0, 0XF5);
    // 0x8024163C: beq         $v1, $v0, L_80241668
    if (ctx->r3 == ctx->r2) {
        // 0x80241640: addiu       $v0, $zero, 0x113
        ctx->r2 = ADD32(0, 0X113);
            goto L_80241668;
    }
    // 0x80241640: addiu       $v0, $zero, 0x113
    ctx->r2 = ADD32(0, 0X113);
    // 0x80241644: beq         $v1, $v0, L_80241660
    if (ctx->r3 == ctx->r2) {
        // 0x80241648: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_80241660;
    }
    // 0x80241648: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8024164C: j           L_8024168C
    // 0x80241650: nop

        goto L_8024168C;
    // 0x80241650: nop

L_80241654:
    // 0x80241654: j           L_8024168C
    // 0x80241658: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
        goto L_8024168C;
    // 0x80241658: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
L_8024165C:
    // 0x8024165C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_80241660:
    // 0x80241660: j           L_8024168C
    // 0x80241664: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
        goto L_8024168C;
    // 0x80241664: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
L_80241668:
    // 0x80241668: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8024166C: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80241670: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x80241674: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80241678: sh          $v0, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r2;
    // 0x8024167C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80241680: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    // 0x80241684: andi        $v1, $v1, 0xFFFB
    ctx->r3 = ctx->r3 & 0XFFFB;
    // 0x80241688: sh          $v1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r3;
L_8024168C:
    // 0x8024168C: jr          $ra
    // 0x80241690: nop

    TRACE_RETURN()
    return;
    // 0x80241690: nop

;}
RECOMP_FUNC void func_80234A58_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234A58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80234A5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234A60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234A64: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80234A68: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80234A6C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80234A70: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80234A74: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80234A78: jal         0x8004DA90
    // 0x80234A7C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80234A7C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80234A80: jal         0x8003E810
    // 0x80234A84: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8003E810_19C10(rdram, ctx);
        goto after_1;
    // 0x80234A84: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80234A88: bne         $v0, $zero, L_80234AA4
    if (ctx->r2 != 0) {
        // 0x80234A8C: nop
    
            goto L_80234AA4;
    }
    // 0x80234A8C: nop

    // 0x80234A90: jal         0x80040F30
    // 0x80234A94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x80234A94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80234A98: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x80234A9C: j           L_80234AB0
    // 0x80234AA0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80234AB0;
    // 0x80234AA0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80234AA4:
    // 0x80234AA4: jal         0x8004F418
    // 0x80234AA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_3;
    // 0x80234AA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80234AAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80234AB0:
    // 0x80234AB0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80234AB4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80234AB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234ABC: jr          $ra
    // 0x80234AC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80234AC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802311C4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802311C4: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x802311C8: bltzl       $v0, L_802311D0
    if (SIGNED(ctx->r2) < 0) {
        // 0x802311CC: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_802311D0;
    }
    goto skip_0;
    // 0x802311CC: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
L_802311D0:
    // 0x802311D0: jr          $ra
    // 0x802311D4: nop

    TRACE_RETURN()
    return;
    // 0x802311D4: nop

;}
RECOMP_FUNC void func_8023EB64_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023EB64: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023EB68: lh          $v0, 0x4A1E($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A1E);
    // 0x8023EB6C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023EB70: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8023EB74: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8023EB78: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8023EB7C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023EB80: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023EB84: bltz        $v0, L_8023EB9C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023EB88: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8023EB9C;
    }
    // 0x8023EB88: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023EB8C: jal         0x8006036C
    // 0x8023EB90: addiu       $a0, $zero, 0x660
    ctx->r4 = ADD32(0, 0X660);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x8023EB90: addiu       $a0, $zero, 0x660
    ctx->r4 = ADD32(0, 0X660);
    after_0:
    // 0x8023EB94: jal         0x8002A4A4
    // 0x8023EB98: nop

    func_8002A4A4_58A4(rdram, ctx);
        goto after_1;
    // 0x8023EB98: nop

    after_1:
L_8023EB9C:
    // 0x8023EB9C: lbu         $v1, 0xA($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XA);
    // 0x8023EBA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023EBA4: beq         $v1, $v0, L_8023EC20
    if (ctx->r3 == ctx->r2) {
        // 0x8023EBA8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023EC20;
    }
    // 0x8023EBA8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023EBAC: beql        $v0, $zero, L_8023EBC4
    if (ctx->r2 == 0) {
        // 0x8023EBB0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023EBC4;
    }
    goto skip_0;
    // 0x8023EBB0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023EBB4: beq         $v1, $zero, L_8023EBDC
    if (ctx->r3 == 0) {
        // 0x8023EBB8: addiu       $a0, $s3, 0x14
        ctx->r4 = ADD32(ctx->r19, 0X14);
            goto L_8023EBDC;
    }
    // 0x8023EBB8: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x8023EBBC: j           L_8023ED80
    // 0x8023EBC0: nop

        goto L_8023ED80;
    // 0x8023EBC0: nop

L_8023EBC4:
    // 0x8023EBC4: beq         $v1, $v0, L_8023ECD8
    if (ctx->r3 == ctx->r2) {
        // 0x8023EBC8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023ECD8;
    }
    // 0x8023EBC8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023EBCC: beq         $v1, $v0, L_8023ED1C
    if (ctx->r3 == ctx->r2) {
        // 0x8023EBD0: addiu       $s0, $sp, 0x10
        ctx->r16 = ADD32(ctx->r29, 0X10);
            goto L_8023ED1C;
    }
    // 0x8023EBD0: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x8023EBD4: j           L_8023ED80
    // 0x8023EBD8: nop

        goto L_8023ED80;
    // 0x8023EBD8: nop

L_8023EBDC:
    // 0x8023EBDC: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8023EBE0: addiu       $a1, $a1, 0x1894
    ctx->r5 = ADD32(ctx->r5, 0X1894);
    // 0x8023EBE4: jal         0x8009A3B4
    // 0x8023EBE8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023EBE8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8023EBEC: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x8023EBF0: lbu         $a1, 0xA($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0XA);
    // 0x8023EBF4: lh          $v1, 0x16($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X16);
    // 0x8023EBF8: lh          $a0, 0x18($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X18);
    // 0x8023EBFC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8023EC00: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023EC04: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023EC08: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023EC0C: sw          $v0, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r2;
    // 0x8023EC10: sw          $v1, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r3;
    // 0x8023EC14: sw          $a0, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r4;
    // 0x8023EC18: j           L_8023ED80
    // 0x8023EC1C: sb          $a1, 0xA($s3)
    MEM_B(0XA, ctx->r19) = ctx->r5;
        goto L_8023ED80;
    // 0x8023EC1C: sb          $a1, 0xA($s3)
    MEM_B(0XA, ctx->r19) = ctx->r5;
L_8023EC20:
    // 0x8023EC20: lbu         $v0, 0xB($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XB);
    // 0x8023EC24: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x8023EC28: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023EC2C: bne         $v0, $zero, L_8023ECAC
    if (ctx->r2 != 0) {
        // 0x8023EC30: sb          $v1, 0xAC($s3)
        MEM_B(0XAC, ctx->r19) = ctx->r3;
            goto L_8023ECAC;
    }
    // 0x8023EC30: sb          $v1, 0xAC($s3)
    MEM_B(0XAC, ctx->r19) = ctx->r3;
    // 0x8023EC34: jal         0x8004F144
    // 0x8023EC38: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x8023EC38: nop

    after_3:
    // 0x8023EC3C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8023EC40: beq         $s2, $zero, L_8023ECAC
    if (ctx->r18 == 0) {
        // 0x8023EC44: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8023ECAC;
    }
    // 0x8023EC44: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8023EC48: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8023EC4C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023EC50: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    // 0x8023EC54: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023EC58: sb          $v0, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r2;
    // 0x8023EC5C: lbu         $v0, 0xB($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XB);
    // 0x8023EC60: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x8023EC64: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x8023EC68: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x8023EC6C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8023EC70: lbu         $s0, 0x18C4($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0X18C4);
    // 0x8023EC74: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023EC78: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023EC7C: sll         $a1, $s0, 3
    ctx->r5 = S32(ctx->r16 << 3);
    // 0x8023EC80: addu        $a1, $a1, $s3
    ctx->r5 = ADD32(ctx->r5, ctx->r19);
    // 0x8023EC84: jal         0x8009A3B4
    // 0x8023EC88: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8023EC88: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    after_4:
    // 0x8023EC8C: addiu       $a0, $s2, 0x38
    ctx->r4 = ADD32(ctx->r18, 0X38);
    // 0x8023EC90: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023EC94: jal         0x8009A3B4
    // 0x8023EC98: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8023EC98: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8023EC9C: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x8023ECA0: addu        $s0, $s3, $s0
    ctx->r16 = ADD32(ctx->r19, ctx->r16);
    // 0x8023ECA4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023ECA8: sb          $v0, 0xF9($s0)
    MEM_B(0XF9, ctx->r16) = ctx->r2;
L_8023ECAC:
    // 0x8023ECAC: lbu         $v0, 0xB($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XB);
    // 0x8023ECB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023ECB4: sb          $v0, 0xB($s3)
    MEM_B(0XB, ctx->r19) = ctx->r2;
    // 0x8023ECB8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023ECBC: sltiu       $v0, $v0, 0x30
    ctx->r2 = ctx->r2 < 0X30 ? 1 : 0;
    // 0x8023ECC0: bne         $v0, $zero, L_8023ED80
    if (ctx->r2 != 0) {
        // 0x8023ECC4: nop
    
            goto L_8023ED80;
    }
    // 0x8023ECC4: nop

    // 0x8023ECC8: lbu         $v0, 0xA($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XA);
    // 0x8023ECCC: sb          $zero, 0xB($s3)
    MEM_B(0XB, ctx->r19) = 0;
    // 0x8023ECD0: j           L_8023ED10
    // 0x8023ECD4: sh          $zero, 0x46($s3)
    MEM_H(0X46, ctx->r19) = 0;
        goto L_8023ED10;
    // 0x8023ECD4: sh          $zero, 0x46($s3)
    MEM_H(0X46, ctx->r19) = 0;
L_8023ECD8:
    // 0x8023ECD8: lhu         $v0, 0x46($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X46);
    // 0x8023ECDC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8023ECE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023ECE4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023ECE8: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x8023ECEC: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x8023ECF0: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8023ECF4: jal         0x8004DA90
    // 0x8023ECF8: sh          $v0, 0x46($s3)
    MEM_H(0X46, ctx->r19) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_6;
    // 0x8023ECF8: sh          $v0, 0x46($s3)
    MEM_H(0X46, ctx->r19) = ctx->r2;
    after_6:
    // 0x8023ECFC: lh          $v0, 0x182($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X182);
    // 0x8023ED00: slti        $v0, $v0, -0x64
    ctx->r2 = SIGNED(ctx->r2) < -0X64 ? 1 : 0;
    // 0x8023ED04: bne         $v0, $zero, L_8023ED80
    if (ctx->r2 != 0) {
        // 0x8023ED08: nop
    
            goto L_8023ED80;
    }
    // 0x8023ED08: nop

    // 0x8023ED0C: lbu         $v0, 0xA($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XA);
L_8023ED10:
    // 0x8023ED10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023ED14: j           L_8023ED80
    // 0x8023ED18: sb          $v0, 0xA($s3)
    MEM_B(0XA, ctx->r19) = ctx->r2;
        goto L_8023ED80;
    // 0x8023ED18: sb          $v0, 0xA($s3)
    MEM_B(0XA, ctx->r19) = ctx->r2;
L_8023ED1C:
    // 0x8023ED1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023ED20: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x8023ED24: jal         0x8009A3B4
    // 0x8023ED28: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8023ED28: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x8023ED2C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023ED30: jal         0x8004F144
    // 0x8023ED34: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    func_8004F144_2A544(rdram, ctx);
        goto after_8;
    // 0x8023ED34: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    after_8:
    // 0x8023ED38: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8023ED3C: beq         $s2, $zero, L_8023ED68
    if (ctx->r18 == 0) {
        // 0x8023ED40: addiu       $a0, $s2, 0x38
        ctx->r4 = ADD32(ctx->r18, 0X38);
            goto L_8023ED68;
    }
    // 0x8023ED40: addiu       $a0, $s2, 0x38
    ctx->r4 = ADD32(ctx->r18, 0X38);
    // 0x8023ED44: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023ED48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023ED4C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8023ED50: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8023ED54: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023ED58: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    // 0x8023ED5C: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
    // 0x8023ED60: jal         0x8009A3B4
    // 0x8023ED64: sb          $v0, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8023ED64: sb          $v0, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r2;
    after_9:
L_8023ED68:
    // 0x8023ED68: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8023ED6C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023ED70: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x8023ED74: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8023ED78: jal         0x80047B3C
    // 0x8023ED7C: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
    func_80047B3C_22F3C(rdram, ctx);
        goto after_10;
    // 0x8023ED7C: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
    after_10:
L_8023ED80:
    // 0x8023ED80: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8023ED84: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023ED88: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023ED8C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023ED90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023ED94: jr          $ra
    // 0x8023ED98: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023ED98: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802458F4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802458F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802458F8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802458FC: jal         0x8004F4F8
    // 0x80245900: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80245900: nop

    after_0:
    // 0x80245904: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80245908: jr          $ra
    // 0x8024590C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024590C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024253C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024253C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80242540: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80242544: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80242548: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8024254C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80242550: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x80242554: sh          $zero, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = 0;
    // 0x80242558: ori         $v0, $v0, 0x22
    ctx->r2 = ctx->r2 | 0X22;
    // 0x8024255C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80242560: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80242564: bne         $v0, $zero, L_802425AC
    if (ctx->r2 != 0) {
        // 0x80242568: andi        $v0, $v1, 0x8
        ctx->r2 = ctx->r3 & 0X8;
            goto L_802425AC;
    }
    // 0x80242568: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x8024256C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80242570: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x80242574: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80242578: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x8024257C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80242580: bne         $v0, $zero, L_80242594
    if (ctx->r2 != 0) {
        // 0x80242584: sb          $v1, 0x97($s0)
        MEM_B(0X97, ctx->r16) = ctx->r3;
            goto L_80242594;
    }
    // 0x80242584: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    // 0x80242588: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x8024258C: j           L_8024259C
    // 0x80242590: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
        goto L_8024259C;
    // 0x80242590: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_80242594:
    // 0x80242594: lui         $v0, 0x2C60
    ctx->r2 = S32(0X2C60 << 16);
    // 0x80242598: ori         $v0, $v0, 0x60C0
    ctx->r2 = ctx->r2 | 0X60C0;
L_8024259C:
    // 0x8024259C: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x802425A0: lui         $v0, 0x3D08
    ctx->r2 = S32(0X3D08 << 16);
    // 0x802425A4: j           L_802425FC
    // 0x802425A8: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
        goto L_802425FC;
    // 0x802425A8: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
L_802425AC:
    // 0x802425AC: bne         $v0, $zero, L_802425D0
    if (ctx->r2 != 0) {
        // 0x802425B0: nop
    
            goto L_802425D0;
    }
    // 0x802425B0: nop

    // 0x802425B4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802425B8: lbu         $v0, 0x1BA0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1BA0);
    // 0x802425BC: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x802425C0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802425C4: lbu         $v0, 0x1BA1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1BA1);
    // 0x802425C8: j           L_802425E8
    // 0x802425CC: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_802425E8;
    // 0x802425CC: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_802425D0:
    // 0x802425D0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802425D4: lbu         $v0, 0x1BAC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1BAC);
    // 0x802425D8: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x802425DC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802425E0: lbu         $v0, 0x1BAD($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1BAD);
    // 0x802425E4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_802425E8:
    // 0x802425E8: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x802425EC: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x802425F0: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x802425F4: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x802425F8: sw          $v1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r3;
L_802425FC:
    // 0x802425FC: sw          $v0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r2;
    // 0x80242600: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80242604: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x80242608: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8024260C: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x80242610: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80242614: sh          $v1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r3;
    // 0x80242618: sh          $a0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r4;
    // 0x8024261C: bne         $v0, $zero, L_80242648
    if (ctx->r2 != 0) {
        // 0x80242620: sh          $a1, 0x94($s0)
        MEM_H(0X94, ctx->r16) = ctx->r5;
            goto L_80242648;
    }
    // 0x80242620: sh          $a1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r5;
    // 0x80242624: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80242628: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x8024262C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80242630: bne         $v0, $zero, L_80242640
    if (ctx->r2 != 0) {
        // 0x80242634: sh          $v1, 0x98($s0)
        MEM_H(0X98, ctx->r16) = ctx->r3;
            goto L_80242640;
    }
    // 0x80242634: sh          $v1, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r3;
    // 0x80242638: j           L_80242654
    // 0x8024263C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80242654;
    // 0x8024263C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80242640:
    // 0x80242640: j           L_80242654
    // 0x80242644: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
        goto L_80242654;
    // 0x80242644: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_80242648:
    // 0x80242648: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8024264C: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x80242650: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80242654:
    // 0x80242654: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80242658: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8024265C: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80242660: bne         $v0, $zero, L_8024266C
    if (ctx->r2 != 0) {
        // 0x80242664: addiu       $v0, $zero, 0x4B
        ctx->r2 = ADD32(0, 0X4B);
            goto L_8024266C;
    }
    // 0x80242664: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x80242668: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
L_8024266C:
    // 0x8024266C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80242670: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x80242674: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80242678: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x8024267C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80242680: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80242684: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80242688: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x8024268C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80242690: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80242694: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80242698: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8024269C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802426A0: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x802426A4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802426A8: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x802426AC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802426B0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802426B4: jal         0x80051E18
    // 0x802426B8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x802426B8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x802426BC: jal         0x8003F754
    // 0x802426C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_1;
    // 0x802426C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802426C4: bne         $v0, $zero, L_802426D4
    if (ctx->r2 != 0) {
        // 0x802426C8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802426D4;
    }
    // 0x802426C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802426CC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802426D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802426D4:
    // 0x802426D4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802426D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802426DC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802426E0: jr          $ra
    // 0x802426E4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802426E4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80232BC0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232BC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232BC4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232BC8: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80232BCC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232BD0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80232BD4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232BD8: lw          $v0, 0x1164($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1164);
    // 0x80232BDC: jalr        $v0
    // 0x80232BE0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80232BE0: nop

    after_0:
    // 0x80232BE4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80232BE8: jr          $ra
    // 0x80232BEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232BEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80247C90_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247C90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80247C94: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80247C98: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80247C9C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80247CA0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80247CA4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80247CA8: lw          $v0, 0x22E0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X22E0);
    // 0x80247CAC: jalr        $v0
    // 0x80247CB0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80247CB0: nop

    after_0:
    // 0x80247CB4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80247CB8: jr          $ra
    // 0x80247CBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80247CBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023BD8C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BD8C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023BD90: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023BD94: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8023BD98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023BD9C: lhu         $a1, 0x0($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X0);
    // 0x8023BDA0: andi        $v0, $a1, 0x10
    ctx->r2 = ctx->r5 & 0X10;
    // 0x8023BDA4: beq         $v0, $zero, L_8023BDCC
    if (ctx->r2 == 0) {
        // 0x8023BDA8: nop
    
            goto L_8023BDCC;
    }
    // 0x8023BDA8: nop

    // 0x8023BDAC: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
    // 0x8023BDB0: blez        $v0, L_8023BDC4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023BDB4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023BDC4;
    }
    // 0x8023BDB4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023BDB8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023BDBC: j           L_8023BE18
    // 0x8023BDC0: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
        goto L_8023BE18;
    // 0x8023BDC0: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
L_8023BDC4:
    // 0x8023BDC4: andi        $v0, $a1, 0xFFEF
    ctx->r2 = ctx->r5 & 0XFFEF;
    // 0x8023BDC8: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_8023BDCC:
    // 0x8023BDCC: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023BDD0: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8023BDD4: beq         $v0, $zero, L_8023BE18
    if (ctx->r2 == 0) {
        // 0x8023BDD8: nop
    
            goto L_8023BE18;
    }
    // 0x8023BDD8: nop

    // 0x8023BDDC: lh          $v0, 0x56($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X56);
    // 0x8023BDE0: lh          $v1, 0x14($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X14);
    // 0x8023BDE4: lh          $a1, 0x18($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X18);
    // 0x8023BDE8: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x8023BDEC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023BDF0: bltzl       $v0, L_8023BDF8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023BDF4: addiu       $v0, $v0, 0x3FF
        ctx->r2 = ADD32(ctx->r2, 0X3FF);
            goto L_8023BDF8;
    }
    goto skip_0;
    // 0x8023BDF4: addiu       $v0, $v0, 0x3FF
    ctx->r2 = ADD32(ctx->r2, 0X3FF);
    skip_0:
L_8023BDF8:
    // 0x8023BDF8: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8023BDFC: jal         0x8023BE28
    // 0x8023BE00: srl         $a2, $v0, 10
    ctx->r6 = S32(U32(ctx->r2) >> 10);
    func_8023BE28_ovl10(rdram, ctx);
        goto after_0;
    // 0x8023BE00: srl         $a2, $v0, 10
    ctx->r6 = S32(U32(ctx->r2) >> 10);
    after_0:
    // 0x8023BE04: beq         $v0, $zero, L_8023BE18
    if (ctx->r2 == 0) {
        // 0x8023BE08: nop
    
            goto L_8023BE18;
    }
    // 0x8023BE08: nop

    // 0x8023BE0C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023BE10: andi        $v0, $v0, 0xFFF7
    ctx->r2 = ctx->r2 & 0XFFF7;
    // 0x8023BE14: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_8023BE18:
    // 0x8023BE18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023BE1C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023BE20: jr          $ra
    // 0x8023BE24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023BE24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226810_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226810: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226814: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80226818: bne         $v0, $zero, L_80226824
    if (ctx->r2 != 0) {
        // 0x8022681C: addiu       $v0, $zero, 0x300
        ctx->r2 = ADD32(0, 0X300);
            goto L_80226824;
    }
    // 0x8022681C: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x80226820: sh          $v0, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r2;
L_80226824:
    // 0x80226824: jr          $ra
    // 0x80226828: nop

    TRACE_RETURN()
    return;
    // 0x80226828: nop

;}
RECOMP_FUNC void func_80229F2C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229F2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229F30: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229F34: jal         0x8005FB90
    // 0x80229F38: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_0;
    // 0x80229F38: nop

    after_0:
    // 0x80229F3C: jal         0x80060018
    // 0x80229F40: nop

    func_80060018_3B418(rdram, ctx);
        goto after_1;
    // 0x80229F40: nop

    after_1:
    // 0x80229F44: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229F48: jr          $ra
    // 0x80229F4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229F4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232EBC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232EBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232EC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232EC4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232EC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80232ECC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80232ED0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232ED4: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80232ED8: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80232EDC: jal         0x8004FA7C
    // 0x80232EE0: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80232EE0: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x80232EE4: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80232EE8: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80232EEC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80232EF0: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80232EF4: beq         $v0, $zero, L_80232F0C
    if (ctx->r2 == 0) {
        // 0x80232EF8: nop
    
            goto L_80232F0C;
    }
    // 0x80232EF8: nop

    // 0x80232EFC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80232F00: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80232F04: beq         $v0, $zero, L_80232F58
    if (ctx->r2 == 0) {
        // 0x80232F08: nop
    
            goto L_80232F58;
    }
    // 0x80232F08: nop

L_80232F0C:
    // 0x80232F0C: jal         0x8003516C
    // 0x80232F10: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x80232F10: nop

    after_1:
    // 0x80232F14: bne         $v0, $zero, L_80232F58
    if (ctx->r2 != 0) {
        // 0x80232F18: nop
    
            goto L_80232F58;
    }
    // 0x80232F18: nop

    // 0x80232F1C: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80232F20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232F24: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x80232F28: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232F2C: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x80232F30: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80232F34: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80232F38: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80232F3C: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x80232F40: lbu         $a0, 0x34A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34A);
    // 0x80232F44: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80232F48: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x80232F4C: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
    // 0x80232F50: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80232F54: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_80232F58:
    // 0x80232F58: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80232F5C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80232F60: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80232F64: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80232F68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80232F6C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80232F70: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232F74: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232F78: jr          $ra
    // 0x80232F7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232F7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80245B88_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80245B88: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80245B8C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80245B90: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80245B94: addiu       $a0, $s3, 0x2C
    ctx->r4 = ADD32(ctx->r19, 0X2C);
    // 0x80245B98: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80245B9C: addiu       $s1, $s3, 0x14
    ctx->r17 = ADD32(ctx->r19, 0X14);
    // 0x80245BA0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80245BA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80245BA8: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80245BAC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80245BB0: jal         0x8009A3B4
    // 0x80245BB4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80245BB4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x80245BB8: addiu       $a0, $s3, 0x34
    ctx->r4 = ADD32(ctx->r19, 0X34);
    // 0x80245BBC: addiu       $s2, $s3, 0x1C
    ctx->r18 = ADD32(ctx->r19, 0X1C);
    // 0x80245BC0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80245BC4: jal         0x8009A3B4
    // 0x80245BC8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80245BC8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80245BCC: addiu       $a0, $s3, 0x5C
    ctx->r4 = ADD32(ctx->r19, 0X5C);
    // 0x80245BD0: addiu       $s0, $s3, 0x54
    ctx->r16 = ADD32(ctx->r19, 0X54);
    // 0x80245BD4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80245BD8: jal         0x8009A3B4
    // 0x80245BDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80245BDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80245BE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80245BE4: lhu         $v0, 0x54($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X54);
    // 0x80245BE8: lhu         $v1, 0x56($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X56);
    // 0x80245BEC: addiu       $s0, $s3, 0x8C
    ctx->r16 = ADD32(ctx->r19, 0X8C);
    // 0x80245BF0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80245BF4: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x80245BF8: addiu       $v1, $v1, 0x100
    ctx->r3 = ADD32(ctx->r3, 0X100);
    // 0x80245BFC: sh          $v0, 0x54($s3)
    MEM_H(0X54, ctx->r19) = ctx->r2;
    // 0x80245C00: jal         0x80031600
    // 0x80245C04: sh          $v1, 0x56($s3)
    MEM_H(0X56, ctx->r19) = ctx->r3;
    func_80031600_CA00(rdram, ctx);
        goto after_3;
    // 0x80245C04: sh          $v1, 0x56($s3)
    MEM_H(0X56, ctx->r19) = ctx->r3;
    after_3:
    // 0x80245C08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80245C0C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80245C10: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80245C14: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80245C18: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80245C1C: jal         0x80031DA8
    // 0x80245C20: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_4;
    // 0x80245C20: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_4:
    // 0x80245C24: lhu         $v0, 0x46($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X46);
    // 0x80245C28: lhu         $a3, 0x4E($s3)
    ctx->r7 = MEM_HU(ctx->r19, 0X4E);
    // 0x80245C2C: lh          $v1, 0x44($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X44);
    // 0x80245C30: lw          $a2, 0x1C($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X1C);
    // 0x80245C34: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80245C38: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x80245C3C: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80245C40: sh          $v0, 0x46($s3)
    MEM_H(0X46, ctx->r19) = ctx->r2;
    // 0x80245C44: lh          $a3, 0x46($s3)
    ctx->r7 = MEM_H(ctx->r19, 0X46);
    // 0x80245C48: lh          $v0, 0x48($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X48);
    // 0x80245C4C: lw          $v1, 0x24($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X24);
    // 0x80245C50: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80245C54: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80245C58: sw          $a2, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r6;
    // 0x80245C5C: lw          $a2, 0x20($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X20);
    // 0x80245C60: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x80245C64: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80245C68: sll         $a3, $a3, 12
    ctx->r7 = S32(ctx->r7 << 12);
    // 0x80245C6C: addu        $a2, $a2, $a3
    ctx->r6 = ADD32(ctx->r6, ctx->r7);
    // 0x80245C70: sw          $v1, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r3;
    // 0x80245C74: jal         0x8004DD04
    // 0x80245C78: sw          $a2, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r6;
    func_8004DD04_29104(rdram, ctx);
        goto after_5;
    // 0x80245C78: sw          $a2, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r6;
    after_5:
    // 0x80245C7C: addiu       $a0, $s3, 0xAC
    ctx->r4 = ADD32(ctx->r19, 0XAC);
    // 0x80245C80: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80245C84: jal         0x8009A3B4
    // 0x80245C88: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80245C88: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80245C8C: jal         0x80040F30
    // 0x80245C90: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_7;
    // 0x80245C90: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_7:
    // 0x80245C94: beq         $v0, $zero, L_80245CC0
    if (ctx->r2 == 0) {
        // 0x80245C98: nop
    
            goto L_80245CC0;
    }
    // 0x80245C98: nop

    // 0x80245C9C: lbu         $v0, 0x8($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X8);
    // 0x80245CA0: sh          $zero, 0x44($s3)
    MEM_H(0X44, ctx->r19) = 0;
    // 0x80245CA4: sh          $zero, 0x46($s3)
    MEM_H(0X46, ctx->r19) = 0;
    // 0x80245CA8: sh          $zero, 0x48($s3)
    MEM_H(0X48, ctx->r19) = 0;
    // 0x80245CAC: sh          $zero, 0x4C($s3)
    MEM_H(0X4C, ctx->r19) = 0;
    // 0x80245CB0: sh          $zero, 0x4E($s3)
    MEM_H(0X4E, ctx->r19) = 0;
    // 0x80245CB4: sh          $zero, 0x50($s3)
    MEM_H(0X50, ctx->r19) = 0;
    // 0x80245CB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80245CBC: sb          $v0, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r2;
L_80245CC0:
    // 0x80245CC0: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80245CC4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80245CC8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80245CCC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80245CD0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80245CD4: jr          $ra
    // 0x80245CD8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80245CD8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80244A74_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244A74: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80244A78: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80244A7C: jr          $ra
    // 0x80244A80: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80244A80: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80227828_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227828: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022782C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227830: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80227834: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227838: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022783C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227840: lbu         $v1, 0xB($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XB);
    // 0x80227844: lw          $s1, 0x24($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X24);
    // 0x80227848: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022784C: beq         $v0, $zero, L_80227AB4
    if (ctx->r2 == 0) {
        // 0x80227850: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80227AB4;
    }
    // 0x80227850: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227854: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227858: addu        $at, $at, $v0
    gpr jr_addend_80227860 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022785C: lw          $v0, 0x2B40($at)
    ctx->r2 = ADD32(ctx->r1, 0X2B40);
    // 0x80227860: jr          $v0
    // 0x80227864: nop

    switch (jr_addend_80227860 >> 2) {
        case 0: goto L_80227868; break;
        case 1: goto L_8022788C; break;
        case 2: goto L_80227978; break;
        case 3: goto L_80227A74; break;
        case 4: goto L_80227A98; break;
        case 5: goto L_80227AB4; break;
        default: switch_error(__func__, 0x80227860, 0x80252B40);
    }
    // 0x80227864: nop

L_80227868:
    // 0x80227868: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8022786C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80227870: bne         $v1, $v0, L_80227AB4
    if (ctx->r3 != ctx->r2) {
        // 0x80227874: nop
    
            goto L_80227AB4;
    }
    // 0x80227874: nop

    // 0x80227878: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022787C: jal         0x8005FA7C
    // 0x80227880: addiu       $a0, $a0, -0x12D4
    ctx->r4 = ADD32(ctx->r4, -0X12D4);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x80227880: addiu       $a0, $a0, -0x12D4
    ctx->r4 = ADD32(ctx->r4, -0X12D4);
    after_0:
    // 0x80227884: j           L_80227AA8
    // 0x80227888: nop

        goto L_80227AA8;
    // 0x80227888: nop

L_8022788C:
    // 0x8022788C: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x80227890: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x80227894: addiu       $s0, $v0, -0x3C
    ctx->r16 = ADD32(ctx->r2, -0X3C);
    // 0x80227898: sll         $a1, $s0, 3
    ctx->r5 = S32(ctx->r16 << 3);
    // 0x8022789C: addu        $v0, $a1, $s0
    ctx->r2 = ADD32(ctx->r5, ctx->r16);
    // 0x802278A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802278A4: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x802278A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802278AC: subu        $a0, $v1, $s0
    ctx->r4 = SUB32(ctx->r3, ctx->r16);
    // 0x802278B0: sll         $v1, $a0, 10
    ctx->r3 = S32(ctx->r4 << 10);
    // 0x802278B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802278B8: bltzl       $v0, L_802278C0
    if (SIGNED(ctx->r2) < 0) {
        // 0x802278BC: addiu       $v0, $v0, 0x1F
        ctx->r2 = ADD32(ctx->r2, 0X1F);
            goto L_802278C0;
    }
    goto skip_0;
    // 0x802278BC: addiu       $v0, $v0, 0x1F
    ctx->r2 = ADD32(ctx->r2, 0X1F);
    skip_0:
L_802278C0:
    // 0x802278C0: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x802278C4: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x802278C8: subu        $v0, $a1, $s0
    ctx->r2 = SUB32(ctx->r5, ctx->r16);
    // 0x802278CC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802278D0: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x802278D4: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x802278D8: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x802278DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802278E0: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x802278E4: sll         $v1, $a0, 5
    ctx->r3 = S32(ctx->r4 << 5);
    // 0x802278E8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802278EC: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x802278F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802278F4: bltzl       $v0, L_802278FC
    if (SIGNED(ctx->r2) < 0) {
        // 0x802278F8: addiu       $v0, $v0, 0x1F
        ctx->r2 = ADD32(ctx->r2, 0X1F);
            goto L_802278FC;
    }
    goto skip_1;
    // 0x802278F8: addiu       $v0, $v0, 0x1F
    ctx->r2 = ADD32(ctx->r2, 0X1F);
    skip_1:
L_802278FC:
    // 0x802278FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227900: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x80227904: jal         0x8003E934
    // 0x80227908: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80227908: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022790C: sll         $v1, $s0, 1
    ctx->r3 = S32(ctx->r16 << 1);
    // 0x80227910: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80227914: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80227918: lh          $v1, -0x2400($at)
    ctx->r3 = MEM_H(ctx->r1, -0X2400);
    // 0x8022791C: sll         $v1, $v1, 9
    ctx->r3 = S32(ctx->r3 << 9);
    // 0x80227920: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x80227924: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80227928: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022792C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80227930: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    // 0x80227934: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x80227938: lh          $a0, 0x16($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X16);
    // 0x8022793C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227940: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80227944: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80227948: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8022794C: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    // 0x80227950: sw          $a0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r4;
    // 0x80227954: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80227958: addiu       $v0, $zero, 0x5C
    ctx->r2 = ADD32(0, 0X5C);
    // 0x8022795C: bne         $v1, $v0, L_80227AB4
    if (ctx->r3 != ctx->r2) {
        // 0x80227960: nop
    
            goto L_80227AB4;
    }
    // 0x80227960: nop

    // 0x80227964: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80227968: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x8022796C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227970: j           L_80227AA8
    // 0x80227974: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80227AA8;
    // 0x80227974: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80227978:
    // 0x80227978: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x8022797C: lui         $a3, 0x6666
    ctx->r7 = S32(0X6666 << 16);
    // 0x80227980: ori         $a3, $a3, 0x6667
    ctx->r7 = ctx->r7 | 0X6667;
    // 0x80227984: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x80227988: addiu       $s0, $v0, -0x5C
    ctx->r16 = ADD32(ctx->r2, -0X5C);
    // 0x8022798C: sll         $v1, $s0, 3
    ctx->r3 = S32(ctx->r16 << 3);
    // 0x80227990: subu        $v1, $v1, $s0
    ctx->r3 = SUB32(ctx->r3, ctx->r16);
    // 0x80227994: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x80227998: subu        $a2, $a2, $s0
    ctx->r6 = SUB32(ctx->r6, ctx->r16);
    // 0x8022799C: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x802279A0: addu        $a1, $v0, $a2
    ctx->r5 = ADD32(ctx->r2, ctx->r6);
    // 0x802279A4: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x802279A8: subu        $a1, $a1, $a2
    ctx->r5 = SUB32(ctx->r5, ctx->r6);
    // 0x802279AC: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x802279B0: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x802279B4: sll         $v1, $s0, 1
    ctx->r3 = S32(ctx->r16 << 1);
    // 0x802279B8: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x802279BC: sll         $a0, $v1, 4
    ctx->r4 = S32(ctx->r3 << 4);
    // 0x802279C0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802279C4: mult        $a1, $a3
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802279C8: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x802279CC: subu        $v1, $v1, $s0
    ctx->r3 = SUB32(ctx->r3, ctx->r16);
    // 0x802279D0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802279D4: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x802279D8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802279DC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802279E0: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x802279E4: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x802279E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802279EC: mfhi        $t0
    ctx->r8 = hi;
    // 0x802279F0: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x802279F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802279F8: mult        $v1, $a3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802279FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227A00: sra         $a1, $a1, 31
    ctx->r5 = S32(SIGNED(ctx->r5) >> 31);
    // 0x80227A04: sra         $v0, $t0, 3
    ctx->r2 = S32(SIGNED(ctx->r8) >> 3);
    // 0x80227A08: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80227A0C: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80227A10: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x80227A14: mfhi        $a2
    ctx->r6 = hi;
    // 0x80227A18: sra         $v0, $a2, 3
    ctx->r2 = S32(SIGNED(ctx->r6) >> 3);
    // 0x80227A1C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80227A20: jal         0x8003E934
    // 0x80227A24: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x80227A24: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    after_2:
    // 0x80227A28: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80227A2C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80227A30: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x80227A34: lh          $a0, 0x16($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X16);
    // 0x80227A38: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227A3C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80227A40: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80227A44: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80227A48: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    // 0x80227A4C: sw          $a0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r4;
    // 0x80227A50: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80227A54: addiu       $v0, $zero, 0x70
    ctx->r2 = ADD32(0, 0X70);
    // 0x80227A58: bne         $v1, $v0, L_80227AB4
    if (ctx->r3 != ctx->r2) {
        // 0x80227A5C: nop
    
            goto L_80227AB4;
    }
    // 0x80227A5C: nop

    // 0x80227A60: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80227A64: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80227A68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227A6C: j           L_80227AA8
    // 0x80227A70: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80227AA8;
    // 0x80227A70: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80227A74:
    // 0x80227A74: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80227A78: addiu       $v0, $zero, 0xE6
    ctx->r2 = ADD32(0, 0XE6);
    // 0x80227A7C: bne         $v1, $v0, L_80227AB4
    if (ctx->r3 != ctx->r2) {
        // 0x80227A80: nop
    
            goto L_80227AB4;
    }
    // 0x80227A80: nop

    // 0x80227A84: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80227A88: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80227A8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227A90: j           L_80227AA8
    // 0x80227A94: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80227AA8;
    // 0x80227A94: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80227A98:
    // 0x80227A98: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80227A9C: addiu       $v0, $zero, 0x104
    ctx->r2 = ADD32(0, 0X104);
    // 0x80227AA0: bne         $v1, $v0, L_80227AB4
    if (ctx->r3 != ctx->r2) {
        // 0x80227AA4: nop
    
            goto L_80227AB4;
    }
    // 0x80227AA4: nop

L_80227AA8:
    // 0x80227AA8: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x80227AAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227AB0: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_80227AB4:
    // 0x80227AB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227AB8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227ABC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227AC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227AC4: jr          $ra
    // 0x80227AC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227AC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229688_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229688: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022968C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229690: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229694: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229698: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022969C: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x802296A0: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x802296A4: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802296A8: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x802296AC: beq         $v0, $zero, L_80229A14
    if (ctx->r2 == 0) {
        // 0x802296B0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80229A14;
    }
    // 0x802296B0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802296B4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802296B8: addu        $at, $at, $v0
    gpr jr_addend_802296C0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802296BC: lw          $v0, 0x2CB0($at)
    ctx->r2 = ADD32(ctx->r1, 0X2CB0);
    // 0x802296C0: jr          $v0
    // 0x802296C4: nop

    switch (jr_addend_802296C0 >> 2) {
        case 0: goto L_802296C8; break;
        case 1: goto L_8022972C; break;
        case 2: goto L_802297F0; break;
        case 3: goto L_80229810; break;
        case 4: goto L_80229848; break;
        case 5: goto L_8022988C; break;
        case 6: goto L_802298A8; break;
        case 7: goto L_802298F4; break;
        case 8: goto L_80229924; break;
        case 9: goto L_80229968; break;
        case 10: goto L_80229994; break;
        default: switch_error(__func__, 0x802296C0, 0x80252CB0);
    }
    // 0x802296C4: nop

L_802296C8:
    // 0x802296C8: jal         0x8006FF84
    // 0x802296CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x802296CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x802296D0: beq         $v0, $zero, L_80229A14
    if (ctx->r2 == 0) {
        // 0x802296D4: nop
    
            goto L_80229A14;
    }
    // 0x802296D4: nop

    // 0x802296D8: jal         0x80036B58
    // 0x802296DC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_1;
    // 0x802296DC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x802296E0: jal         0x80060170
    // 0x802296E4: nop

    func_80060170_3B570(rdram, ctx);
        goto after_2;
    // 0x802296E4: nop

    after_2:
    // 0x802296E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802296EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802296F0: jal         0x8005F6B4
    // 0x802296F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_3;
    // 0x802296F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x802296F8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802296FC: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x80229700: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80229704: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80229708: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022970C: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80229710: addiu       $v1, $v1, -0x60
    ctx->r3 = ADD32(ctx->r3, -0X60);
    // 0x80229714: sw          $v1, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r3;
    // 0x80229718: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022971C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x80229720: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80229724: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80229728: sh          $v0, -0x3F82($at)
    MEM_H(-0X3F82, ctx->r1) = ctx->r2;
L_8022972C:
    // 0x8022972C: addiu       $a0, $s1, 0x428
    ctx->r4 = ADD32(ctx->r17, 0X428);
    // 0x80229730: lbu         $v1, 0xBD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XBD);
    // 0x80229734: addiu       $a1, $s1, 0x438
    ctx->r5 = ADD32(ctx->r17, 0X438);
    // 0x80229738: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022973C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80229740: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229744: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80229748: lui         $v0, 0x1616
    ctx->r2 = S32(0X1616 << 16);
    // 0x8022974C: sw          $v0, 0x428($s1)
    MEM_W(0X428, ctx->r17) = ctx->r2;
    // 0x80229750: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80229754: sw          $v0, 0x42C($s1)
    MEM_W(0X42C, ctx->r17) = ctx->r2;
    // 0x80229758: lui         $v0, 0xFA80
    ctx->r2 = S32(0XFA80 << 16);
    // 0x8022975C: sw          $v0, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r2;
    // 0x80229760: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80229764: jal         0x8004DD04
    // 0x80229768: sb          $v1, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r3;
    func_8004DD04_29104(rdram, ctx);
        goto after_4;
    // 0x80229768: sb          $v1, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r3;
    after_4:
    // 0x8022976C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229770: addiu       $v0, $zero, 0x494
    ctx->r2 = ADD32(0, 0X494);
    // 0x80229774: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
    // 0x80229778: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022977C: sh          $zero, 0x440($s1)
    MEM_H(0X440, ctx->r17) = 0;
    // 0x80229780: sh          $zero, 0x444($s1)
    MEM_H(0X444, ctx->r17) = 0;
    // 0x80229784: jal         0x80229F50
    // 0x80229788: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    func_80229F50_ovl10(rdram, ctx);
        goto after_5;
    // 0x80229788: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    after_5:
    // 0x8022978C: jal         0x8022A3B8
    // 0x80229790: nop

    func_8022A3B8_ovl10(rdram, ctx);
        goto after_6;
    // 0x80229790: nop

    after_6:
    // 0x80229794: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229798: jal         0x8022A350
    // 0x8022979C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022A350_ovl10(rdram, ctx);
        goto after_7;
    // 0x8022979C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_7:
    // 0x802297A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802297A4: jal         0x8022A350
    // 0x802297A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022A350_ovl10(rdram, ctx);
        goto after_8;
    // 0x802297A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x802297AC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802297B0: jal         0x8022A350
    // 0x802297B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8022A350_ovl10(rdram, ctx);
        goto after_9;
    // 0x802297B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x802297B8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x802297BC: jal         0x8022A350
    // 0x802297C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8022A350_ovl10(rdram, ctx);
        goto after_10;
    // 0x802297C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_10:
    // 0x802297C4: jal         0x80060590
    // 0x802297C8: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_80060590_3B990(rdram, ctx);
        goto after_11;
    // 0x802297C8: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_11:
    // 0x802297CC: jal         0x80060590
    // 0x802297D0: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_80060590_3B990(rdram, ctx);
        goto after_12;
    // 0x802297D0: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_12:
    // 0x802297D4: jal         0x80060590
    // 0x802297D8: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_80060590_3B990(rdram, ctx);
        goto after_13;
    // 0x802297D8: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_13:
    // 0x802297DC: jal         0x80060590
    // 0x802297E0: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_80060590_3B990(rdram, ctx);
        goto after_14;
    // 0x802297E0: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_14:
    // 0x802297E4: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x802297E8: j           L_80229984
    // 0x802297EC: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
        goto L_80229984;
    // 0x802297EC: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
L_802297F0:
    // 0x802297F0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802297F4: lb          $v1, -0x3C17($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C17);
    // 0x802297F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802297FC: bne         $v1, $v0, L_80229A14
    if (ctx->r3 != ctx->r2) {
        // 0x80229800: nop
    
            goto L_80229A14;
    }
    // 0x80229800: nop

    // 0x80229804: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80229808: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022980C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80229810:
    // 0x80229810: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80229814: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229818: bgez        $v0, L_80229A14
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022981C: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_80229A14;
    }
    // 0x8022981C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x80229820: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80229824: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    // 0x80229828: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022982C: jal         0x8006036C
    // 0x80229830: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_15;
    // 0x80229830: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    after_15:
    // 0x80229834: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229838: jal         0x800616FC
    // 0x8022983C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_16;
    // 0x8022983C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_16:
    // 0x80229840: j           L_80229A14
    // 0x80229844: nop

        goto L_80229A14;
    // 0x80229844: nop

L_80229848:
    // 0x80229848: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022984C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80229850: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80229854: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229858: bne         $v0, $zero, L_80229A14
    if (ctx->r2 != 0) {
        // 0x8022985C: addiu       $a1, $zero, 0x10
        ctx->r5 = ADD32(0, 0X10);
            goto L_80229A14;
    }
    // 0x8022985C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80229860: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229864: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80229868: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022986C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x80229870: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80229874: jal         0x800616FC
    // 0x80229878: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_17;
    // 0x80229878: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
    after_17:
    // 0x8022987C: jal         0x8006036C
    // 0x80229880: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_8006036C_3B76C(rdram, ctx);
        goto after_18;
    // 0x80229880: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_18:
    // 0x80229884: j           L_802298D4
    // 0x80229888: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
        goto L_802298D4;
    // 0x80229888: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
L_8022988C:
    // 0x8022988C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80229890: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229894: bgez        $v0, L_80229A14
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229898: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_80229A14;
    }
    // 0x80229898: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x8022989C: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x802298A0: j           L_8022998C
    // 0x802298A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022998C;
    // 0x802298A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802298A8:
    // 0x802298A8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802298AC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802298B0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802298B4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802298B8: bne         $v0, $zero, L_80229A14
    if (ctx->r2 != 0) {
        // 0x802298BC: addiu       $v0, $zero, 0x46
        ctx->r2 = ADD32(0, 0X46);
            goto L_80229A14;
    }
    // 0x802298BC: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x802298C0: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x802298C4: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    // 0x802298C8: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x802298CC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802298D0: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
L_802298D4:
    // 0x802298D4: jal         0x8006036C
    // 0x802298D8: nop

    func_8006036C_3B76C(rdram, ctx);
        goto after_19;
    // 0x802298D8: nop

    after_19:
    // 0x802298DC: jal         0x8006036C
    // 0x802298E0: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_8006036C_3B76C(rdram, ctx);
        goto after_20;
    // 0x802298E0: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_20:
    // 0x802298E4: jal         0x8006036C
    // 0x802298E8: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006036C_3B76C(rdram, ctx);
        goto after_21;
    // 0x802298E8: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_21:
    // 0x802298EC: j           L_80229A14
    // 0x802298F0: nop

        goto L_80229A14;
    // 0x802298F0: nop

L_802298F4:
    // 0x802298F4: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x802298F8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802298FC: bne         $v0, $zero, L_80229A14
    if (ctx->r2 != 0) {
        // 0x80229900: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_80229A14;
    }
    // 0x80229900: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x80229904: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80229908: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022990C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x80229910: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229914: jal         0x800616FC
    // 0x80229918: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_22;
    // 0x80229918: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    after_22:
    // 0x8022991C: j           L_80229A14
    // 0x80229920: nop

        goto L_80229A14;
    // 0x80229920: nop

L_80229924:
    // 0x80229924: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229928: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022992C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80229930: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229934: bne         $v0, $zero, L_80229A14
    if (ctx->r2 != 0) {
        // 0x80229938: addiu       $a1, $zero, 0x12
        ctx->r5 = ADD32(0, 0X12);
            goto L_80229A14;
    }
    // 0x80229938: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x8022993C: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80229940: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229944: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229948: jal         0x800616FC
    // 0x8022994C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_23;
    // 0x8022994C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    after_23:
    // 0x80229950: jal         0x8006036C
    // 0x80229954: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_8006036C_3B76C(rdram, ctx);
        goto after_24;
    // 0x80229954: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_24:
    // 0x80229958: jal         0x8006036C
    // 0x8022995C: addiu       $a0, $zero, 0x60E
    ctx->r4 = ADD32(0, 0X60E);
    func_8006036C_3B76C(rdram, ctx);
        goto after_25;
    // 0x8022995C: addiu       $a0, $zero, 0x60E
    ctx->r4 = ADD32(0, 0X60E);
    after_25:
    // 0x80229960: j           L_80229A14
    // 0x80229964: nop

        goto L_80229A14;
    // 0x80229964: nop

L_80229968:
    // 0x80229968: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022996C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80229970: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80229974: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229978: bne         $v0, $zero, L_80229A14
    if (ctx->r2 != 0) {
        // 0x8022997C: addiu       $v1, $zero, 0x88
        ctx->r3 = ADD32(0, 0X88);
            goto L_80229A14;
    }
    // 0x8022997C: addiu       $v1, $zero, 0x88
    ctx->r3 = ADD32(0, 0X88);
    // 0x80229980: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
L_80229984:
    // 0x80229984: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x80229988: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022998C:
    // 0x8022998C: j           L_80229A14
    // 0x80229990: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_80229A14;
    // 0x80229990: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80229994:
    // 0x80229994: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80229998: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x8022999C: bne         $v0, $zero, L_80229A14
    if (ctx->r2 != 0) {
        // 0x802299A0: nop
    
            goto L_80229A14;
    }
    // 0x802299A0: nop

    // 0x802299A4: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x802299A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802299AC: bgez        $v0, L_80229A14
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802299B0: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_80229A14;
    }
    // 0x802299B0: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x802299B4: jal         0x8022A398
    // 0x802299B8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8022A398_ovl10(rdram, ctx);
        goto after_26;
    // 0x802299B8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_26:
    // 0x802299BC: jal         0x8022A398
    // 0x802299C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8022A398_ovl10(rdram, ctx);
        goto after_27;
    // 0x802299C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_27:
    // 0x802299C4: jal         0x8022A398
    // 0x802299C8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8022A398_ovl10(rdram, ctx);
        goto after_28;
    // 0x802299C8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_28:
    // 0x802299CC: jal         0x8022A398
    // 0x802299D0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8022A398_ovl10(rdram, ctx);
        goto after_29;
    // 0x802299D0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_29:
    // 0x802299D4: jal         0x80070050
    // 0x802299D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_30;
    // 0x802299D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_30:
    // 0x802299DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802299E0: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x802299E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802299E8: jal         0x8022A04C
    // 0x802299EC: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_8022A04C_ovl10(rdram, ctx);
        goto after_31;
    // 0x802299EC: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_31:
    // 0x802299F0: jal         0x80229F50
    // 0x802299F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80229F50_ovl10(rdram, ctx);
        goto after_32;
    // 0x802299F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_32:
    // 0x802299F8: jal         0x8006036C
    // 0x802299FC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8006036C_3B76C(rdram, ctx);
        goto after_33;
    // 0x802299FC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_33:
    // 0x80229A00: jal         0x80036B58
    // 0x80229A04: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_80036B58_11F58(rdram, ctx);
        goto after_34;
    // 0x80229A04: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_34:
    // 0x80229A08: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80229A0C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80229A10: sh          $v0, -0x3F82($at)
    MEM_H(-0X3F82, ctx->r1) = ctx->r2;
L_80229A14:
    // 0x80229A14: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80229A18: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x80229A1C: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x80229A20: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80229A24: beq         $v1, $zero, L_80229A48
    if (ctx->r3 == 0) {
        // 0x80229A28: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80229A48;
    }
    // 0x80229A28: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80229A2C: lw          $a0, 0xA4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA4);
    // 0x80229A30: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80229A34: beq         $v1, $v0, L_80229A48
    if (ctx->r3 == ctx->r2) {
        // 0x80229A38: nop
    
            goto L_80229A48;
    }
    // 0x80229A38: nop

    // 0x80229A3C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80229A40: jalr        $v0
    // 0x80229A44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_35;
    // 0x80229A44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_35:
L_80229A48:
    // 0x80229A48: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80229A4C: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x80229A50: bne         $v0, $zero, L_80229AA0
    if (ctx->r2 != 0) {
        // 0x80229A54: nop
    
            goto L_80229AA0;
    }
    // 0x80229A54: nop

    // 0x80229A58: jal         0x8006072C
    // 0x80229A5C: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_36;
    // 0x80229A5C: nop

    after_36:
    // 0x80229A60: beq         $v0, $zero, L_80229AA0
    if (ctx->r2 == 0) {
        // 0x80229A64: nop
    
            goto L_80229AA0;
    }
    // 0x80229A64: nop

    // 0x80229A68: jal         0x80061724
    // 0x80229A6C: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_37;
    // 0x80229A6C: nop

    after_37:
    // 0x80229A70: jal         0x80061090
    // 0x80229A74: nop

    func_80061090_3C490(rdram, ctx);
        goto after_38;
    // 0x80229A74: nop

    after_38:
    // 0x80229A78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229A7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80229A80: jal         0x80036B00
    // 0x80229A84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_39;
    // 0x80229A84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_39:
    // 0x80229A88: jal         0x8002A488
    // 0x80229A8C: nop

    func_8002A488_5888(rdram, ctx);
        goto after_40;
    // 0x80229A8C: nop

    after_40:
    // 0x80229A90: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80229A94: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x80229A98: jal         0x8022A3B8
    // 0x80229A9C: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    func_8022A3B8_ovl10(rdram, ctx);
        goto after_41;
    // 0x80229A9C: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    after_41:
L_80229AA0:
    // 0x80229AA0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229AA4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229AA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229AAC: jr          $ra
    // 0x80229AB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229AB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80239CE0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239CE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239CE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239CE8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239CEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80239CF0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80239CF4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80239CF8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80239CFC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80239D00: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80239D04: jal         0x8004D5D4
    // 0x80239D08: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80239D08: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80239D0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239D10: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
    // 0x80239D14: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80239D18: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80239D1C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80239D20: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80239D24: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80239D28: jal         0x8003E934
    // 0x80239D2C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80239D2C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x80239D30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239D34: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80239D38: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80239D3C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80239D40: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80239D44: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80239D48: addiu       $v0, $v0, 0x16C4
    ctx->r2 = ADD32(ctx->r2, 0X16C4);
    // 0x80239D4C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80239D50: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80239D54: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80239D58: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80239D5C: jal         0x80050294
    // 0x80239D60: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80239D60: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    after_2:
    // 0x80239D64: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80239D68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80239D6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239D70: jr          $ra
    // 0x80239D74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239D74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80240550_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80240550: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80240554: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80240558: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024055C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80240560: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80240564: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    // 0x80240568: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8024056C: addiu       $a1, $a1, 0x1938
    ctx->r5 = ADD32(ctx->r5, 0X1938);
    // 0x80240570: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80240574: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80240578: sll         $a2, $a0, 3
    ctx->r6 = S32(ctx->r4 << 3);
    // 0x8024057C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80240580: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80240584: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80240588: lw          $v0, 0x1938($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1938);
    // 0x8024058C: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80240590: bne         $v1, $v0, L_8024065C
    if (ctx->r3 != ctx->r2) {
        // 0x80240594: addu        $v0, $a1, $a2
        ctx->r2 = ADD32(ctx->r5, ctx->r6);
            goto L_8024065C;
    }
    // 0x80240594: addu        $v0, $a1, $a2
    ctx->r2 = ADD32(ctx->r5, ctx->r6);
    // 0x80240598: addiu       $v0, $a0, -0x9
    ctx->r2 = ADD32(ctx->r4, -0X9);
    // 0x8024059C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802405A0: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802405A4: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x802405A8: beq         $v0, $zero, L_80240654
    if (ctx->r2 == 0) {
        // 0x802405AC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80240654;
    }
    // 0x802405AC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802405B0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802405B4: addu        $at, $at, $v0
    gpr jr_addend_802405BC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802405B8: lw          $v0, 0x3048($at)
    ctx->r2 = ADD32(ctx->r1, 0X3048);
    // 0x802405BC: jr          $v0
    // 0x802405C0: nop

    switch (jr_addend_802405BC >> 2) {
        case 0: goto L_802405C4; break;
        case 1: goto L_802405DC; break;
        case 2: goto L_802405DC; break;
        case 3: goto L_80240648; break;
        case 4: goto L_802405DC; break;
        case 5: goto L_80240648; break;
        case 6: goto L_80240610; break;
        case 7: goto L_80240648; break;
        case 8: goto L_80240654; break;
        default: switch_error(__func__, 0x802405BC, 0x80253048);
    }
    // 0x802405C0: nop

L_802405C4:
    // 0x802405C4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802405C8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x802405CC: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802405D0: lw          $a1, 0x1984($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1984);
    // 0x802405D4: j           L_80240600
    // 0x802405D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80240600;
    // 0x802405D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802405DC:
    // 0x802405DC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802405E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802405E4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x802405E8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802405EC: sra         $v0, $v0, 21
    ctx->r2 = S32(SIGNED(ctx->r2) >> 21);
    // 0x802405F0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802405F4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802405F8: lw          $a1, 0x1934($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1934);
    // 0x802405FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80240600:
    // 0x80240600: jal         0x80050294
    // 0x80240604: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80240604: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80240608: j           L_8024068C
    // 0x8024060C: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_8024068C;
    // 0x8024060C: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_80240610:
    // 0x80240610: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80240614: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240618: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8024061C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80240620: sra         $v0, $v0, 21
    ctx->r2 = S32(SIGNED(ctx->r2) >> 21);
    // 0x80240624: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80240628: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8024062C: lw          $a1, 0x1934($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1934);
    // 0x80240630: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80240634: jal         0x80050294
    // 0x80240638: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80240638: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8024063C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240640: j           L_80240654
    // 0x80240644: sw          $v0, 0x524($s0)
    MEM_W(0X524, ctx->r16) = ctx->r2;
        goto L_80240654;
    // 0x80240644: sw          $v0, 0x524($s0)
    MEM_W(0X524, ctx->r16) = ctx->r2;
L_80240648:
    // 0x80240648: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8024064C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240650: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80240654:
    // 0x80240654: j           L_8024068C
    // 0x80240658: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_8024068C;
    // 0x80240658: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_8024065C:
    // 0x8024065C: lw          $v1, -0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X4);
    // 0x80240660: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80240664: beq         $v1, $v0, L_8024067C
    if (ctx->r3 == ctx->r2) {
        // 0x80240668: nop
    
            goto L_8024067C;
    }
    // 0x80240668: nop

    // 0x8024066C: jal         0x8005044C
    // 0x80240670: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x80240670: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80240674: j           L_8024068C
    // 0x80240678: nop

        goto L_8024068C;
    // 0x80240678: nop

L_8024067C:
    // 0x8024067C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80240680: lbu         $a2, 0xA4($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XA4);
    // 0x80240684: jal         0x80050294
    // 0x80240688: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80240688: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8024068C:
    // 0x8024068C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80240690: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80240694: jr          $ra
    // 0x80240698: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80240698: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022EC94_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EC94: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022EC98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022EC9C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022ECA0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022ECA4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8022ECA8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022ECAC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022ECB0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022ECB4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022ECB8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022ECBC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022ECC0: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022ECC4: beq         $v0, $zero, L_8022EFA4
    if (ctx->r2 == 0) {
        // 0x8022ECC8: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022EFA4;
    }
    // 0x8022ECC8: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022ECCC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022ECD0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022ECD4: addu        $at, $at, $v0
    gpr jr_addend_8022ECDC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022ECD8: lw          $v0, 0x2E38($at)
    ctx->r2 = ADD32(ctx->r1, 0X2E38);
    // 0x8022ECDC: jr          $v0
    // 0x8022ECE0: nop

    switch (jr_addend_8022ECDC >> 2) {
        case 0: goto L_8022EE34; break;
        case 1: goto L_8022EEA0; break;
        case 2: goto L_8022EEA0; break;
        case 3: goto L_8022EF80; break;
        case 4: goto L_8022ECE4; break;
        default: switch_error(__func__, 0x8022ECDC, 0x80252E38);
    }
    // 0x8022ECE0: nop

L_8022ECE4:
    // 0x8022ECE4: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x8022ECE8: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x8022ECEC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022ECF0: bne         $v0, $zero, L_8022EDFC
    if (ctx->r2 != 0) {
        // 0x8022ECF4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022EDFC;
    }
    // 0x8022ECF4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022ECF8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022ECFC: lh          $v1, 0x4($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X4);
    // 0x8022ED00: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022ED04: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022ED08: lbu         $v0, 0x92C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X92C);
    // 0x8022ED0C: bne         $v1, $v0, L_8022EDE8
    if (ctx->r3 != ctx->r2) {
        // 0x8022ED10: nop
    
            goto L_8022EDE8;
    }
    // 0x8022ED10: nop

    // 0x8022ED14: lh          $v0, 0x34($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X34);
    // 0x8022ED18: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8022ED1C: beq         $v0, $zero, L_8022EDE8
    if (ctx->r2 == 0) {
        // 0x8022ED20: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_8022EDE8;
    }
    // 0x8022ED20: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022ED24: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x8022ED28: addiu       $s5, $zero, 0x83
    ctx->r21 = ADD32(0, 0X83);
    // 0x8022ED2C: lui         $s4, 0x8025
    ctx->r20 = S32(0X8025 << 16);
    // 0x8022ED30: addiu       $s4, $s4, 0x930
    ctx->r20 = ADD32(ctx->r20, 0X930);
    // 0x8022ED34: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
L_8022ED38:
    // 0x8022ED38: jal         0x8004F144
    // 0x8022ED3C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022ED3C: nop

    after_0:
    // 0x8022ED40: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022ED44: beq         $v1, $zero, L_8022EDD8
    if (ctx->r3 == 0) {
        // 0x8022ED48: nop
    
            goto L_8022EDD8;
    }
    // 0x8022ED48: nop

    // 0x8022ED4C: sb          $s6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r22;
    // 0x8022ED50: sb          $s5, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r21;
    // 0x8022ED54: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x8022ED58: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022ED5C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022ED60: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x8022ED64: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022ED68: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022ED6C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022ED70: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8022ED74: lhu         $v0, 0x180($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X180);
    // 0x8022ED78: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x8022ED7C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022ED80: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022ED84: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x8022ED88: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022ED8C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022ED90: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022ED94: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8022ED98: lhu         $v0, 0x182($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X182);
    // 0x8022ED9C: subu        $v0, $v0, $s3
    ctx->r2 = SUB32(ctx->r2, ctx->r19);
    // 0x8022EDA0: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x8022EDA4: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022EDA8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EDAC: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x8022EDB0: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022EDB4: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022EDB8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022EDBC: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8022EDC0: lhu         $v0, 0x184($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X184);
    // 0x8022EDC4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8022EDC8: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    // 0x8022EDCC: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x8022EDD0: bne         $v0, $zero, L_8022ED38
    if (ctx->r2 != 0) {
        // 0x8022EDD4: addiu       $s3, $s3, 0xC
        ctx->r19 = ADD32(ctx->r19, 0XC);
            goto L_8022ED38;
    }
    // 0x8022EDD4: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
L_8022EDD8:
    // 0x8022EDD8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022EDDC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EDE0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022EDE4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8022EDE8:
    // 0x8022EDE8: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022EDEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EDF0: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022EDF4: j           L_8022EFA4
    // 0x8022EDF8: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
        goto L_8022EFA4;
    // 0x8022EDF8: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
L_8022EDFC:
    // 0x8022EDFC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022EE00: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8022EE04: jal         0x8004FEA0
    // 0x8022EE08: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_1;
    // 0x8022EE08: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022EE0C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022EE10: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8022EE14: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022EE18: beq         $v0, $zero, L_8022EE2C
    if (ctx->r2 == 0) {
        // 0x8022EE1C: addiu       $v0, $v1, 0x800
        ctx->r2 = ADD32(ctx->r3, 0X800);
            goto L_8022EE2C;
    }
    // 0x8022EE1C: addiu       $v0, $v1, 0x800
    ctx->r2 = ADD32(ctx->r3, 0X800);
    // 0x8022EE20: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EE24: j           L_8022EE30
    // 0x8022EE28: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8022EE30;
    // 0x8022EE28: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022EE2C:
    // 0x8022EE2C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022EE30:
    // 0x8022EE30: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022EE34:
    // 0x8022EE34: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EE38: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022EE3C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022EE40: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x8022EE44: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022EE48: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x8022EE4C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022EE50: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022EE54: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022EE58: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x8022EE5C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022EE60: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022EE64: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022EE68: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8022EE6C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022EE70: sh          $zero, 0x8($s2)
    MEM_H(0X8, ctx->r18) = 0;
    // 0x8022EE74: sh          $zero, 0x4($s2)
    MEM_H(0X4, ctx->r18) = 0;
    // 0x8022EE78: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8022EE7C: andi        $v0, $v0, 0xFFB3
    ctx->r2 = ctx->r2 & 0XFFB3;
    // 0x8022EE80: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x8022EE84: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8022EE88: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022EE8C: addiu       $v0, $zero, -0x300
    ctx->r2 = ADD32(0, -0X300);
    // 0x8022EE90: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022EE94: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022EE98: jal         0x8002A33C
    // 0x8022EE9C: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022EE9C: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    after_2:
L_8022EEA0:
    // 0x8022EEA0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022EEA4: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022EEA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EEAC: jal         0x8004DA90
    // 0x8022EEB0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022EEB0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x8022EEB4: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022EEB8: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022EEBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EEC0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022EEC4: jal         0x80040F30
    // 0x8022EEC8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_80040F30_1C330(rdram, ctx);
        goto after_4;
    // 0x8022EEC8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_4:
    // 0x8022EECC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022EED0: beq         $v1, $zero, L_8022EFA4
    if (ctx->r3 == 0) {
        // 0x8022EED4: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_8022EFA4;
    }
    // 0x8022EED4: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x8022EED8: beq         $v0, $zero, L_8022EEF4
    if (ctx->r2 == 0) {
        // 0x8022EEDC: andi        $v0, $v1, 0x1000
        ctx->r2 = ctx->r3 & 0X1000;
            goto L_8022EEF4;
    }
    // 0x8022EEDC: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x8022EEE0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022EEE4: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022EEE8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EEEC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022EEF0: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
L_8022EEF4:
    // 0x8022EEF4: beq         $v0, $zero, L_8022EFA8
    if (ctx->r2 == 0) {
        // 0x8022EEF8: addiu       $v0, $zero, 0x190C
        ctx->r2 = ADD32(0, 0X190C);
            goto L_8022EFA8;
    }
    // 0x8022EEF8: addiu       $v0, $zero, 0x190C
    ctx->r2 = ADD32(0, 0X190C);
    // 0x8022EEFC: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x8022EF00: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x8022EF04: bne         $v0, $zero, L_8022EF58
    if (ctx->r2 != 0) {
        // 0x8022EF08: addiu       $a0, $zero, 0xDA
        ctx->r4 = ADD32(0, 0XDA);
            goto L_8022EF58;
    }
    // 0x8022EF08: addiu       $a0, $zero, 0xDA
    ctx->r4 = ADD32(0, 0XDA);
    // 0x8022EF0C: ori         $v0, $v1, 0x40
    ctx->r2 = ctx->r3 | 0X40;
    // 0x8022EF10: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x8022EF14: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022EF18: beq         $v0, $zero, L_8022EF48
    if (ctx->r2 == 0) {
        // 0x8022EF1C: nop
    
            goto L_8022EF48;
    }
    // 0x8022EF1C: nop

    // 0x8022EF20: lh          $v0, 0x34($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X34);
    // 0x8022EF24: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022EF28: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8022EF2C: beq         $v0, $zero, L_8022EF48
    if (ctx->r2 == 0) {
        // 0x8022EF30: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022EF48;
    }
    // 0x8022EF30: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022EF34: sh          $v0, 0x34($s2)
    MEM_H(0X34, ctx->r18) = ctx->r2;
    // 0x8022EF38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EF3C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022EF40: jal         0x8007A290
    // 0x8022EF44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8007A290_55690(rdram, ctx);
        goto after_5;
    // 0x8022EF44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
L_8022EF48:
    // 0x8022EF48: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022EF4C: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8022EF50: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x8022EF54: addiu       $a0, $zero, 0xDA
    ctx->r4 = ADD32(0, 0XDA);
L_8022EF58:
    // 0x8022EF58: jal         0x8002A33C
    // 0x8022EF5C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x8022EF5C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_6:
    // 0x8022EF60: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EF64: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x8022EF68: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022EF6C: addiu       $v1, $zero, -0x200
    ctx->r3 = ADD32(0, -0X200);
    // 0x8022EF70: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x8022EF74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EF78: j           L_8022EFA4
    // 0x8022EF7C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022EFA4;
    // 0x8022EF7C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022EF80:
    // 0x8022EF80: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x8022EF84: bne         $v0, $zero, L_8022EFA8
    if (ctx->r2 != 0) {
        // 0x8022EF88: addiu       $v0, $zero, 0x190C
        ctx->r2 = ADD32(0, 0X190C);
            goto L_8022EFA8;
    }
    // 0x8022EF88: addiu       $v0, $zero, 0x190C
    ctx->r2 = ADD32(0, 0X190C);
    // 0x8022EF8C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EF90: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022EF94: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022EF98: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022EF9C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022EFA0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022EFA4:
    // 0x8022EFA4: addiu       $v0, $zero, 0x190C
    ctx->r2 = ADD32(0, 0X190C);
L_8022EFA8:
    // 0x8022EFA8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022EFAC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022EFB0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022EFB4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022EFB8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022EFBC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022EFC0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022EFC4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022EFC8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022EFCC: jr          $ra
    // 0x8022EFD0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022EFD0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80248EAC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80248EAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80248EB0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80248EB4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80248EB8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80248EBC: jal         0x8004F144
    // 0x80248EC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80248EC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80248EC4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80248EC8: beq         $s0, $zero, L_80248F08
    if (ctx->r16 == 0) {
        // 0x80248ECC: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_80248F08;
    }
    // 0x80248ECC: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80248ED0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80248ED4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80248ED8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80248EDC: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80248EE0: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80248EE4: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x80248EE8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80248EEC: jal         0x8009A3B4
    // 0x80248EF0: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80248EF0: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_1:
    // 0x80248EF4: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x80248EF8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80248EFC: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x80248F00: jal         0x8004F684
    // 0x80248F04: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    func_8004F684_2AA84(rdram, ctx);
        goto after_2;
    // 0x80248F04: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    after_2:
L_80248F08:
    // 0x80248F08: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80248F0C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80248F10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80248F14: jr          $ra
    // 0x80248F18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80248F18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802373EC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802373EC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802373F0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802373F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802373F8: addiu       $a0, $s0, 0x32C
    ctx->r4 = ADD32(ctx->r16, 0X32C);
    // 0x802373FC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80237400: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x80237404: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80237408: jal         0x800540D0
    // 0x8023740C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x8023740C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80237410: beq         $v0, $zero, L_80237424
    if (ctx->r2 == 0) {
        // 0x80237414: nop
    
            goto L_80237424;
    }
    // 0x80237414: nop

    // 0x80237418: lhu         $v0, 0x308($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X308);
    // 0x8023741C: j           L_8023742C
    // 0x80237420: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
        goto L_8023742C;
    // 0x80237420: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
L_80237424:
    // 0x80237424: lhu         $v0, 0x308($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X308);
    // 0x80237428: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
L_8023742C:
    // 0x8023742C: sh          $v0, 0x308($s0)
    MEM_H(0X308, ctx->r16) = ctx->r2;
    // 0x80237430: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80237434: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80237438: beq         $v0, $zero, L_80237448
    if (ctx->r2 == 0) {
        // 0x8023743C: nop
    
            goto L_80237448;
    }
    // 0x8023743C: nop

    // 0x80237440: jal         0x802390AC
    // 0x80237444: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802390AC_ovl10(rdram, ctx);
        goto after_1;
    // 0x80237444: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80237448:
    // 0x80237448: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023744C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80237450: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80237454: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237458: lw          $v0, 0x128C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X128C);
    // 0x8023745C: jalr        $v0
    // 0x80237460: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80237460: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80237464: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80237468: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023746C: beq         $v0, $zero, L_80237488
    if (ctx->r2 == 0) {
        // 0x80237470: nop
    
            goto L_80237488;
    }
    // 0x80237470: nop

    // 0x80237474: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80237478: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8023747C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80237480: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80237484: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80237488:
    // 0x80237488: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x8023748C: beq         $v0, $zero, L_8023749C
    if (ctx->r2 == 0) {
        // 0x80237490: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023749C;
    }
    // 0x80237490: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80237494: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80237498: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_8023749C:
    // 0x8023749C: lh          $v0, 0x52($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X52);
    // 0x802374A0: beq         $v0, $zero, L_802374B0
    if (ctx->r2 == 0) {
        // 0x802374A4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802374B0;
    }
    // 0x802374A4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802374A8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802374AC: sh          $v0, 0x52($s1)
    MEM_H(0X52, ctx->r17) = ctx->r2;
L_802374B0:
    // 0x802374B0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802374B4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802374B8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802374BC: jr          $ra
    // 0x802374C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802374C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802491BC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802491BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802491C0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802491C4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802491C8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802491CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802491D0: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x802491D4: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802491D8: beq         $v0, $zero, L_80249310
    if (ctx->r2 == 0) {
        // 0x802491DC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80249310;
    }
    // 0x802491DC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802491E0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802491E4: addu        $at, $at, $v0
    gpr jr_addend_802491EC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802491E8: lw          $v0, 0x3278($at)
    ctx->r2 = ADD32(ctx->r1, 0X3278);
    // 0x802491EC: jr          $v0
    // 0x802491F0: nop

    switch (jr_addend_802491EC >> 2) {
        case 0: goto L_802491F4; break;
        case 1: goto L_80249228; break;
        case 2: goto L_80249234; break;
        case 3: goto L_802492B4; break;
        case 4: goto L_802492EC; break;
        default: switch_error(__func__, 0x802491EC, 0x80253278);
    }
    // 0x802491F0: nop

L_802491F4:
    // 0x802491F4: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x802491F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802491FC: beq         $v1, $v0, L_8024920C
    if (ctx->r3 == ctx->r2) {
        // 0x80249200: addiu       $a0, $zero, 0x13C
        ctx->r4 = ADD32(0, 0X13C);
            goto L_8024920C;
    }
    // 0x80249200: addiu       $a0, $zero, 0x13C
    ctx->r4 = ADD32(0, 0X13C);
    // 0x80249204: jal         0x8002A33C
    // 0x80249208: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80249208: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_0:
L_8024920C:
    // 0x8024920C: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80249210: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80249214: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80249218: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8024921C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80249220: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x80249224: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
L_80249228:
    // 0x80249228: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8024922C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80249230: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80249234:
    // 0x80249234: lb          $v1, 0xF($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XF);
    // 0x80249238: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8024923C: beq         $v1, $v0, L_80249298
    if (ctx->r3 == ctx->r2) {
        // 0x80249240: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_80249298;
    }
    // 0x80249240: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80249244: jal         0x8002C654
    // 0x80249248: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x80249248: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8024924C: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80249250: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80249254: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80249258: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8024925C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80249260: lhu         $a0, 0x2370($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X2370);
    // 0x80249264: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80249268: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8024926C: jal         0x80031BB4
    // 0x80249270: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_2;
    // 0x80249270: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    after_2:
    // 0x80249274: lbu         $a0, 0xB($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XB);
    // 0x80249278: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8024927C: jal         0x800319B4
    // 0x80249280: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_3;
    // 0x80249280: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_3:
    // 0x80249284: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80249288: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024928C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80249290: j           L_80249310
    // 0x80249294: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
        goto L_80249310;
    // 0x80249294: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
L_80249298:
    // 0x80249298: lbu         $a0, 0xA($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XA);
    // 0x8024929C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802492A0: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802492A4: bne         $v1, $v0, L_80249310
    if (ctx->r3 != ctx->r2) {
        // 0x802492A8: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80249310;
    }
    // 0x802492A8: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802492AC: j           L_80249310
    // 0x802492B0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80249310;
    // 0x802492B0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_802492B4:
    // 0x802492B4: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x802492B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802492BC: bne         $v1, $v0, L_802492DC
    if (ctx->r3 != ctx->r2) {
        // 0x802492C0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802492DC;
    }
    // 0x802492C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802492C4: lb          $a3, 0xE($s1)
    ctx->r7 = MEM_B(ctx->r17, 0XE);
    // 0x802492C8: beq         $a3, $v0, L_802492DC
    if (ctx->r7 == ctx->r2) {
        // 0x802492CC: addiu       $a0, $s1, 0x38
        ctx->r4 = ADD32(ctx->r17, 0X38);
            goto L_802492DC;
    }
    // 0x802492CC: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x802492D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802492D4: jal         0x800610AC
    // 0x802492D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x802492D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
L_802492DC:
    // 0x802492DC: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802492E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802492E4: j           L_80249310
    // 0x802492E8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80249310;
    // 0x802492E8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_802492EC:
    // 0x802492EC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802492F0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802492F4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802492F8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802492FC: bne         $v0, $zero, L_80249310
    if (ctx->r2 != 0) {
        // 0x80249300: nop
    
            goto L_80249310;
    }
    // 0x80249300: nop

    // 0x80249304: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80249308: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x8024930C: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
L_80249310:
    // 0x80249310: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80249314: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80249318: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024931C: jr          $ra
    // 0x80249320: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80249320: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023C334_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C334: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8023C338: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x8023C33C: beq         $v0, $zero, L_8023C378
    if (ctx->r2 == 0) {
        // 0x8023C340: addiu       $sp, $sp, -0x18
        ctx->r29 = ADD32(ctx->r29, -0X18);
            goto L_8023C378;
    }
    // 0x8023C340: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023C344: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x8023C348: lh          $v1, 0x58($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X58);
    // 0x8023C34C: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x8023C350: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023C354: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x8023C358: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8023C35C: slti        $v1, $v1, -0x7F
    ctx->r3 = SIGNED(ctx->r3) < -0X7F ? 1 : 0;
    // 0x8023C360: bnel        $v1, $zero, L_8023C450
    if (ctx->r3 != 0) {
        // 0x8023C364: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023C450;
    }
    goto skip_0;
    // 0x8023C364: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_0:
    // 0x8023C368: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8023C36C: sh          $v0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r2;
    // 0x8023C370: j           L_8023C450
    // 0x8023C374: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8023C450;
    // 0x8023C374: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8023C378:
    // 0x8023C378: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x8023C37C: beq         $v0, $zero, L_8023C3B4
    if (ctx->r2 == 0) {
        // 0x8023C380: nop
    
            goto L_8023C3B4;
    }
    // 0x8023C380: nop

    // 0x8023C384: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x8023C388: lh          $v1, 0x58($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X58);
    // 0x8023C38C: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8023C390: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023C394: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x8023C398: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8023C39C: slti        $v1, $v1, 0x80
    ctx->r3 = SIGNED(ctx->r3) < 0X80 ? 1 : 0;
    // 0x8023C3A0: beq         $v1, $zero, L_8023C3AC
    if (ctx->r3 == 0) {
        // 0x8023C3A4: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_8023C3AC;
    }
    // 0x8023C3A4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8023C3A8: sh          $v0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r2;
L_8023C3AC:
    // 0x8023C3AC: j           L_8023C450
    // 0x8023C3B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8023C450;
    // 0x8023C3B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8023C3B4:
    // 0x8023C3B4: lhu         $v0, 0xC($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0XC);
    // 0x8023C3B8: sll         $a3, $v0, 16
    ctx->r7 = S32(ctx->r2 << 16);
    // 0x8023C3BC: sra         $a2, $a3, 16
    ctx->r6 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8023C3C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023C3C4: bnel        $a2, $v0, L_8023C404
    if (ctx->r6 != ctx->r2) {
        // 0x8023C3C8: lui         $v0, 0x38E3
        ctx->r2 = S32(0X38E3 << 16);
            goto L_8023C404;
    }
    goto skip_1;
    // 0x8023C3C8: lui         $v0, 0x38E3
    ctx->r2 = S32(0X38E3 << 16);
    skip_1:
    // 0x8023C3CC: lh          $v1, 0x58($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X58);
    // 0x8023C3D0: beq         $v1, $zero, L_8023C3F4
    if (ctx->r3 == 0) {
        // 0x8023C3D4: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_8023C3F4;
    }
    // 0x8023C3D4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8023C3D8: blezl       $v1, L_8023C3E4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8023C3DC: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_8023C3E4;
    }
    goto skip_2;
    // 0x8023C3DC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    skip_2:
    // 0x8023C3E0: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
L_8023C3E4:
    // 0x8023C3E4: sh          $v0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r2;
    // 0x8023C3E8: lh          $v0, 0x58($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X58);
    // 0x8023C3EC: bne         $v0, $zero, L_8023C454
    if (ctx->r2 != 0) {
        // 0x8023C3F0: nop
    
            goto L_8023C454;
    }
    // 0x8023C3F0: nop

L_8023C3F4:
    // 0x8023C3F4: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8023C3F8: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x8023C3FC: j           L_8023C450
    // 0x8023C400: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
        goto L_8023C450;
    // 0x8023C400: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
L_8023C404:
    // 0x8023C404: ori         $v0, $v0, 0x8E39
    ctx->r2 = ctx->r2 | 0X8E39;
    // 0x8023C408: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023C40C: sra         $v0, $a3, 31
    ctx->r2 = S32(SIGNED(ctx->r7) >> 31);
    // 0x8023C410: mfhi        $t0
    ctx->r8 = hi;
    // 0x8023C414: sra         $v1, $t0, 3
    ctx->r3 = S32(SIGNED(ctx->r8) >> 3);
    // 0x8023C418: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023C41C: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8023C420: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C424: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023C428: subu        $v0, $a2, $v0
    ctx->r2 = SUB32(ctx->r6, ctx->r2);
    // 0x8023C42C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023C430: sra         $v0, $v0, 15
    ctx->r2 = S32(SIGNED(ctx->r2) >> 15);
    // 0x8023C434: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023C438: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023C43C: lhu         $v0, 0x17D8($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X17D8);
    // 0x8023C440: sh          $v0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r2;
    // 0x8023C444: lhu         $v0, 0xC($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0XC);
    // 0x8023C448: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023C44C: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
L_8023C450:
    // 0x8023C450: sh          $v0, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r2;
L_8023C454:
    // 0x8023C454: jr          $ra
    // 0x8023C458: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023C458: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233A44_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233A44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233A48: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233A4C: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x80233A50: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80233A54: slt         $v0, $a3, $v1
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80233A58: beq         $v0, $zero, L_80233AB0
    if (ctx->r2 == 0) {
        // 0x80233A5C: sra         $v1, $v1, 16
        ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
            goto L_80233AB0;
    }
    // 0x80233A5C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80233A60: lhu         $v0, 0x16($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X16);
    // 0x80233A64: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233A68: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x80233A6C: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80233A70: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x80233A74: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233A78: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x80233A7C: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x80233A80: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80233A84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233A88: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x80233A8C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233A90: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80233A94: bne         $v0, $v1, L_80233AE8
    if (ctx->r2 != ctx->r3) {
        // 0x80233A98: nop
    
            goto L_80233AE8;
    }
    // 0x80233A98: nop

    // 0x80233A9C: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x80233AA0: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x80233AA4: subu        $v0, $v0, $a3
    ctx->r2 = SUB32(ctx->r2, ctx->r7);
    // 0x80233AA8: j           L_80233AE8
    // 0x80233AAC: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
        goto L_80233AE8;
    // 0x80233AAC: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_80233AB0:
    // 0x80233AB0: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80233AB4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80233AB8: bne         $v1, $v0, L_80233AE8
    if (ctx->r3 != ctx->r2) {
        // 0x80233ABC: nop
    
            goto L_80233AE8;
    }
    // 0x80233ABC: nop

    // 0x80233AC0: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x80233AC4: slti        $v0, $v0, 0x79
    ctx->r2 = SIGNED(ctx->r2) < 0X79 ? 1 : 0;
    // 0x80233AC8: bne         $v0, $zero, L_80233AE8
    if (ctx->r2 != 0) {
        // 0x80233ACC: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_80233AE8;
    }
    // 0x80233ACC: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80233AD0: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x80233AD4: sh          $v0, 0xA($a2)
    MEM_H(0XA, ctx->r6) = ctx->r2;
    // 0x80233AD8: sh          $zero, 0xC($a2)
    MEM_H(0XC, ctx->r6) = 0;
    // 0x80233ADC: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80233AE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233AE4: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_80233AE8:
    // 0x80233AE8: jal         0x8005044C
    // 0x80233AEC: nop

    func_8005044C_2B84C(rdram, ctx);
        goto after_0;
    // 0x80233AEC: nop

    after_0:
    // 0x80233AF0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233AF4: jr          $ra
    // 0x80233AF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233AF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802375BC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802375BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802375C0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802375C4: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x802375C8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x802375CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802375D0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802375D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802375D8: lw          $v0, 0x12B8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X12B8);
    // 0x802375DC: jalr        $v0
    // 0x802375E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802375E0: nop

    after_0:
    // 0x802375E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802375E8: jr          $ra
    // 0x802375EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802375EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237314_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237314: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80237318: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023731C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237320: addiu       $a0, $s0, 0x32C
    ctx->r4 = ADD32(ctx->r16, 0X32C);
    // 0x80237324: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80237328: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x8023732C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80237330: jal         0x800540D0
    // 0x80237334: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x80237334: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80237338: beq         $v0, $zero, L_8023734C
    if (ctx->r2 == 0) {
        // 0x8023733C: nop
    
            goto L_8023734C;
    }
    // 0x8023733C: nop

    // 0x80237340: lhu         $v0, 0x308($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X308);
    // 0x80237344: j           L_80237354
    // 0x80237348: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
        goto L_80237354;
    // 0x80237348: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
L_8023734C:
    // 0x8023734C: lhu         $v0, 0x308($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X308);
    // 0x80237350: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
L_80237354:
    // 0x80237354: sh          $v0, 0x308($s0)
    MEM_H(0X308, ctx->r16) = ctx->r2;
    // 0x80237358: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023735C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80237360: beq         $v0, $zero, L_80237370
    if (ctx->r2 == 0) {
        // 0x80237364: nop
    
            goto L_80237370;
    }
    // 0x80237364: nop

    // 0x80237368: jal         0x80238FA8
    // 0x8023736C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80238FA8_ovl10(rdram, ctx);
        goto after_1;
    // 0x8023736C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80237370:
    // 0x80237370: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80237374: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80237378: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023737C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237380: lw          $v0, 0x128C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X128C);
    // 0x80237384: jalr        $v0
    // 0x80237388: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80237388: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023738C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80237390: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80237394: beq         $v0, $zero, L_802373B0
    if (ctx->r2 == 0) {
        // 0x80237398: nop
    
            goto L_802373B0;
    }
    // 0x80237398: nop

    // 0x8023739C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802373A0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802373A4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802373A8: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x802373AC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_802373B0:
    // 0x802373B0: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x802373B4: beq         $v0, $zero, L_802373C4
    if (ctx->r2 == 0) {
        // 0x802373B8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802373C4;
    }
    // 0x802373B8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802373BC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802373C0: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_802373C4:
    // 0x802373C4: lh          $v0, 0x52($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X52);
    // 0x802373C8: beq         $v0, $zero, L_802373D8
    if (ctx->r2 == 0) {
        // 0x802373CC: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802373D8;
    }
    // 0x802373CC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802373D0: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802373D4: sh          $v0, 0x52($s1)
    MEM_H(0X52, ctx->r17) = ctx->r2;
L_802373D8:
    // 0x802373D8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802373DC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802373E0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802373E4: jr          $ra
    // 0x802373E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802373E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8023AB04_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AB04: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023AB08: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8023AB0C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8023AB10: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023AB14: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8023AB18: sb          $v0, -0x3A4F($at)
    MEM_B(-0X3A4F, ctx->r1) = ctx->r2;
    // 0x8023AB1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023AB20: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8023AB24: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8023AB28: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8023AB2C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023AB30: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8023AB34: sb          $v0, -0x3A50($at)
    MEM_B(-0X3A50, ctx->r1) = ctx->r2;
    // 0x8023AB38: lh          $v0, 0x180($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X180);
    // 0x8023AB3C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023AB40: lh          $v1, 0x49C4($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C4);
    // 0x8023AB44: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023AB48: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8023AB4C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8023AB50: lh          $v0, 0x182($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X182);
    // 0x8023AB54: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023AB58: lh          $v1, 0x49C6($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C6);
    // 0x8023AB5C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8023AB60: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x8023AB64: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023AB68: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023AB6C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8023AB70: addiu       $v0, $v0, -0x60
    ctx->r2 = ADD32(ctx->r2, -0X60);
    // 0x8023AB74: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023AB78: lh          $v0, 0x184($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X184);
    // 0x8023AB7C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023AB80: lh          $v1, 0x49C8($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C8);
    // 0x8023AB84: addiu       $s1, $s3, 0x14
    ctx->r17 = ADD32(ctx->r19, 0X14);
    // 0x8023AB88: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023AB8C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023AB90: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8023AB94: jal         0x8004EC38
    // 0x8023AB98: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_0;
    // 0x8023AB98: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x8023AB9C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023ABA0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023ABA4: jal         0x8004EC38
    // 0x8023ABA8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x8023ABA8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
    // 0x8023ABAC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023ABB0: addiu       $a1, $zero, 0x180
    ctx->r5 = ADD32(0, 0X180);
    // 0x8023ABB4: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8023ABB8: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x8023ABBC: addiu       $a2, $s0, -0x500
    ctx->r6 = ADD32(ctx->r16, -0X500);
    // 0x8023ABC0: jal         0x80034FCC
    // 0x8023ABC4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_80034FCC_103CC(rdram, ctx);
        goto after_2;
    // 0x8023ABC4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_2:
    // 0x8023ABC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023ABCC: lh          $a2, 0x56($s3)
    ctx->r6 = MEM_H(ctx->r19, 0X56);
    // 0x8023ABD0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023ABD4: jal         0x8004F820
    // 0x8023ABD8: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8023ABD8: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_3:
    // 0x8023ABDC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8023ABE0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8023ABE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023ABE8: jal         0x80050294
    // 0x8023ABEC: sh          $v0, 0xB4($s3)
    MEM_H(0XB4, ctx->r19) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8023ABEC: sh          $v0, 0xB4($s3)
    MEM_H(0XB4, ctx->r19) = ctx->r2;
    after_4:
    // 0x8023ABF0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023ABF4: jal         0x8023B728
    // 0x8023ABF8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8023B728_ovl10(rdram, ctx);
        goto after_5;
    // 0x8023ABF8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8023ABFC: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8023AC00: beq         $v0, $zero, L_8023AC68
    if (ctx->r2 == 0) {
        // 0x8023AC04: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023AC68;
    }
    // 0x8023AC04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023AC08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023AC0C: jal         0x80032498
    // 0x8023AC10: sw          $v0, 0x348($s3)
    MEM_W(0X348, ctx->r19) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_6;
    // 0x8023AC10: sw          $v0, 0x348($s3)
    MEM_W(0X348, ctx->r19) = ctx->r2;
    after_6:
    // 0x8023AC14: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8023AC18: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AC1C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8023AC20: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AC24: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8023AC28: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x8023AC2C: sra         $v1, $v1, 10
    ctx->r3 = S32(SIGNED(ctx->r3) >> 10);
    // 0x8023AC30: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023AC34: sw          $v1, 0x5670($at)
    MEM_W(0X5670, ctx->r1) = ctx->r3;
    // 0x8023AC38: jal         0x800324B4
    // 0x8023AC3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_7;
    // 0x8023AC3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8023AC40: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8023AC44: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AC48: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8023AC4C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AC50: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8023AC54: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x8023AC58: sra         $v1, $v1, 10
    ctx->r3 = S32(SIGNED(ctx->r3) >> 10);
    // 0x8023AC5C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023AC60: j           L_8023AC6C
    // 0x8023AC64: sw          $v1, 0x5674($at)
    MEM_W(0X5674, ctx->r1) = ctx->r3;
        goto L_8023AC6C;
    // 0x8023AC64: sw          $v1, 0x5674($at)
    MEM_W(0X5674, ctx->r1) = ctx->r3;
L_8023AC68:
    // 0x8023AC68: sw          $zero, 0x348($s3)
    MEM_W(0X348, ctx->r19) = 0;
L_8023AC6C:
    // 0x8023AC6C: lbu         $v0, 0x9($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X9);
    // 0x8023AC70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023AC74: sb          $v0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r2;
    // 0x8023AC78: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8023AC7C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8023AC80: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8023AC84: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023AC88: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023AC8C: jr          $ra
    // 0x8023AC90: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023AC90: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022E2D8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E2D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022E2DC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022E2E0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022E2E4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022E2E8: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8022E2EC: addiu       $a1, $a1, 0x2E14
    ctx->r5 = ADD32(ctx->r5, 0X2E14);
    // 0x8022E2F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022E2F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022E2F8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022E2FC: jal         0x8009A3B4
    // 0x8022E300: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022E300: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022E304: lw          $v1, 0x35C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X35C);
    // 0x8022E308: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022E30C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022E310: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8022E314: beq         $a0, $zero, L_8022E494
    if (ctx->r4 == 0) {
        // 0x8022E318: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_8022E494;
    }
    // 0x8022E318: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x8022E31C: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x8022E320: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022E324: beq         $v0, $zero, L_8022E498
    if (ctx->r2 == 0) {
        // 0x8022E328: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E498;
    }
    // 0x8022E328: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E32C: lh          $v0, 0x6E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6E);
    // 0x8022E330: bgtz        $v0, L_8022E364
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022E334: nop
    
            goto L_8022E364;
    }
    // 0x8022E334: nop

    // 0x8022E338: lhu         $v0, 0x348($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X348);
    // 0x8022E33C: lbu         $v1, 0x2($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2);
    // 0x8022E340: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8022E344: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x8022E348: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022E34C: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8022E350: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022E354: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022E358: sh          $v0, 0x348($s1)
    MEM_H(0X348, ctx->r17) = ctx->r2;
    // 0x8022E35C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8022E360: lbu         $a0, 0x9($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X9);
L_8022E364:
    // 0x8022E364: lhu         $v0, 0x348($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X348);
    // 0x8022E368: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022E36C: beq         $v0, $zero, L_8022E490
    if (ctx->r2 == 0) {
        // 0x8022E370: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_8022E490;
    }
    // 0x8022E370: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022E374: lhu         $v0, 0x352($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X352);
    // 0x8022E378: lw          $v1, 0x35C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X35C);
    // 0x8022E37C: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x8022E380: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x8022E384: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022E388: bne         $v1, $zero, L_8022E3D4
    if (ctx->r3 != 0) {
        // 0x8022E38C: sh          $a0, 0x352($s1)
        MEM_H(0X352, ctx->r17) = ctx->r4;
            goto L_8022E3D4;
    }
    // 0x8022E38C: sh          $a0, 0x352($s1)
    MEM_H(0X352, ctx->r17) = ctx->r4;
    // 0x8022E390: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022E394: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022E398: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022E39C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E3A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E3A4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022E3A8: lbu         $v1, 0x9($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X9);
    // 0x8022E3AC: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022E3B0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E3B4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022E3B8: beq         $v0, $zero, L_8022E3D4
    if (ctx->r2 == 0) {
        // 0x8022E3BC: nop
    
            goto L_8022E3D4;
    }
    // 0x8022E3BC: nop

    // 0x8022E3C0: lh          $s0, 0x16($s1)
    ctx->r16 = MEM_H(ctx->r17, 0X16);
    // 0x8022E3C4: jal         0x8003E934
    // 0x8022E3C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022E3C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022E3CC: beq         $s0, $v0, L_8022E484
    if (ctx->r16 == ctx->r2) {
        // 0x8022E3D0: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8022E484;
    }
    // 0x8022E3D0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022E3D4:
    // 0x8022E3D4: lhu         $v0, 0x22($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X22);
    // 0x8022E3D8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022E3DC: beq         $v0, $zero, L_8022E424
    if (ctx->r2 == 0) {
        // 0x8022E3E0: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022E424;
    }
    // 0x8022E3E0: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022E3E4: jal         0x8004EC38
    // 0x8022E3E8: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    func_8004EC38_2A038(rdram, ctx);
        goto after_2;
    // 0x8022E3E8: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    after_2:
    // 0x8022E3EC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022E3F0: lh          $v0, 0x56($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X56);
    // 0x8022E3F4: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x8022E3F8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022E3FC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E400: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x8022E404: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E408: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8022E40C: beq         $v0, $zero, L_8022E41C
    if (ctx->r2 == 0) {
        // 0x8022E410: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_8022E41C;
    }
    // 0x8022E410: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022E414: j           L_8022E45C
    // 0x8022E418: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_8022E45C;
    // 0x8022E418: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_8022E41C:
    // 0x8022E41C: j           L_8022E46C
    // 0x8022E420: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_8022E46C;
    // 0x8022E420: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_8022E424:
    // 0x8022E424: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022E428: jal         0x8004EC38
    // 0x8022E42C: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x8022E42C: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    after_3:
    // 0x8022E430: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022E434: lh          $v1, 0x56($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X56);
    // 0x8022E438: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022E43C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E440: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E444: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x8022E448: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E44C: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8022E450: beq         $v0, $zero, L_8022E468
    if (ctx->r2 == 0) {
        // 0x8022E454: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_8022E468;
    }
    // 0x8022E454: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022E458: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_8022E45C:
    // 0x8022E45C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022E460: j           L_8022E47C
    // 0x8022E464: sh          $a1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r5;
        goto L_8022E47C;
    // 0x8022E464: sh          $a1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r5;
L_8022E468:
    // 0x8022E468: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_8022E46C:
    // 0x8022E46C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022E470: addiu       $v0, $a0, 0x800
    ctx->r2 = ADD32(ctx->r4, 0X800);
    // 0x8022E474: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E478: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_8022E47C:
    // 0x8022E47C: j           L_8022E488
    // 0x8022E480: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
        goto L_8022E488;
    // 0x8022E480: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
L_8022E484:
    // 0x8022E484: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8022E488:
    // 0x8022E488: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x8022E48C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_8022E490:
    // 0x8022E490: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
L_8022E494:
    // 0x8022E494: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022E498:
    // 0x8022E498: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022E49C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022E4A0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E4A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022E4A8: jr          $ra
    // 0x8022E4AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022E4AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802348C0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802348C0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802348C4: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x802348C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802348CC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802348D0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802348D4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802348D8: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x802348DC: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x802348E0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802348E4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802348E8: bne         $v0, $s1, L_802349CC
    if (ctx->r2 != ctx->r17) {
        // 0x802348EC: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_802349CC;
    }
    // 0x802348EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802348F0: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x802348F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802348F8: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x802348FC: addiu       $s2, $s3, 0x14
    ctx->r18 = ADD32(ctx->r19, 0X14);
    // 0x80234900: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80234904: jal         0x8004F820
    // 0x80234908: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80234908: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_0:
    // 0x8023490C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234910: bgez        $v0, L_8023493C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80234914: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023493C;
    }
    // 0x80234914: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234918: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8023491C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80234920: jal         0x8004F820
    // 0x80234924: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80234924: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x80234928: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023492C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80234930: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80234934: j           L_80234954
    // 0x80234938: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80234954;
    // 0x80234938: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8023493C:
    // 0x8023493C: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80234940: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80234944: jal         0x8004F820
    // 0x80234948: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80234948: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8023494C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234950: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80234954:
    // 0x80234954: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
    // 0x80234958: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x8023495C: lbu         $v1, 0xBD($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XBD);
    // 0x80234960: sw          $zero, 0x184($s3)
    MEM_W(0X184, ctx->r19) = 0;
    // 0x80234964: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80234968: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x8023496C: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x80234970: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    // 0x80234974: lh          $v0, 0x180($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X180);
    // 0x80234978: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x8023497C: addiu       $s0, $s0, 0x3410
    ctx->r16 = ADD32(ctx->r16, 0X3410);
    // 0x80234980: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80234984: lh          $v0, 0x182($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X182);
    // 0x80234988: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8023498C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80234990: sw          $v0, 0x3414($at)
    MEM_W(0X3414, ctx->r1) = ctx->r2;
    // 0x80234994: lh          $v0, 0x184($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X184);
    // 0x80234998: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x8023499C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802349A0: sw          $v0, 0x3418($at)
    MEM_W(0X3418, ctx->r1) = ctx->r2;
    // 0x802349A4: jal         0x8004EC38
    // 0x802349A8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x802349A8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x802349AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802349B0: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x802349B4: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x802349B8: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x802349BC: jal         0x80034FCC
    // 0x802349C0: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_4;
    // 0x802349C0: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_4:
    // 0x802349C4: j           L_802349D0
    // 0x802349C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802349D0;
    // 0x802349C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802349CC:
    // 0x802349CC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_802349D0:
    // 0x802349D0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802349D4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802349D8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802349DC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802349E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802349E4: jr          $ra
    // 0x802349E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802349E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80246874_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80246874: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80246878: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024687C: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80246880: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80246884: lbu         $v1, 0x2168($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2168);
    // 0x80246888: lh          $a2, 0x14($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X14);
    // 0x8024688C: lh          $a0, 0x18($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X18);
    // 0x80246890: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80246894: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80246898: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8024689C: lbu         $a1, 0x2151($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X2151);
    // 0x802468A0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802468A4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802468A8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802468AC: lbu         $v1, 0x2150($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X2150);
    // 0x802468B0: sll         $a1, $a1, 24
    ctx->r5 = S32(ctx->r5 << 24);
    // 0x802468B4: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x802468B8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802468BC: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x802468C0: bltzl       $v1, L_802468C8
    if (SIGNED(ctx->r3) < 0) {
        // 0x802468C4: negu        $v1, $v1
        ctx->r3 = SUB32(0, ctx->r3);
            goto L_802468C8;
    }
    goto skip_0;
    // 0x802468C4: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    skip_0:
L_802468C8:
    // 0x802468C8: slti        $v1, $v1, 0x200
    ctx->r3 = SIGNED(ctx->r3) < 0X200 ? 1 : 0;
    // 0x802468CC: beq         $v1, $zero, L_802468E4
    if (ctx->r3 == 0) {
        // 0x802468D0: sra         $a1, $a1, 16
        ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
            goto L_802468E4;
    }
    // 0x802468D0: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802468D4: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x802468D8: bltzl       $v0, L_802468E0
    if (SIGNED(ctx->r2) < 0) {
        // 0x802468DC: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_802468E0;
    }
    goto skip_1;
    // 0x802468DC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_1:
L_802468E0:
    // 0x802468E0: slti        $v0, $v0, 0x200
    ctx->r2 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
L_802468E4:
    // 0x802468E4: jr          $ra
    // 0x802468E8: nop

    TRACE_RETURN()
    return;
    // 0x802468E8: nop

;}
RECOMP_FUNC void func_80237988_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237988: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8023798C: lbu         $v1, 0xA($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XA);
    // 0x80237990: beq         $v1, $zero, L_802379AC
    if (ctx->r3 == 0) {
        // 0x80237994: addiu       $a2, $a1, 0x308
        ctx->r6 = ADD32(ctx->r5, 0X308);
            goto L_802379AC;
    }
    // 0x80237994: addiu       $a2, $a1, 0x308
    ctx->r6 = ADD32(ctx->r5, 0X308);
    // 0x80237998: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023799C: beq         $v1, $v0, L_802379F4
    if (ctx->r3 == ctx->r2) {
        // 0x802379A0: nop
    
            goto L_802379F4;
    }
    // 0x802379A0: nop

    // 0x802379A4: j           L_80237A20
    // 0x802379A8: nop

        goto L_80237A20;
    // 0x802379A8: nop

L_802379AC:
    // 0x802379AC: lbu         $v1, 0x3($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X3);
    // 0x802379B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802379B4: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
    // 0x802379B8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802379BC: sb          $v0, 0xAC($a1)
    MEM_B(0XAC, ctx->r5) = ctx->r2;
    // 0x802379C0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x802379C4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802379C8: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x802379CC: lhu         $a0, 0x1630($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X1630);
    // 0x802379D0: lhu         $v1, 0x308($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X308);
    // 0x802379D4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802379D8: sh          $v0, 0x30C($a1)
    MEM_H(0X30C, ctx->r5) = ctx->r2;
    // 0x802379DC: sh          $zero, 0x310($a1)
    MEM_H(0X310, ctx->r5) = 0;
    // 0x802379E0: andi        $v1, $v1, 0xFEFF
    ctx->r3 = ctx->r3 & 0XFEFF;
    // 0x802379E4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802379E8: sra         $a0, $a0, 17
    ctx->r4 = S32(SIGNED(ctx->r4) >> 17);
    // 0x802379EC: sh          $v1, 0x308($a1)
    MEM_H(0X308, ctx->r5) = ctx->r3;
    // 0x802379F0: sh          $a0, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r4;
L_802379F4:
    // 0x802379F4: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x802379F8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802379FC: sh          $v0, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r2;
    // 0x80237A00: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80237A04: bgez        $v0, L_80237A20
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80237A08: nop
    
            goto L_80237A20;
    }
    // 0x80237A08: nop

    // 0x80237A0C: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x80237A10: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80237A14: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x80237A18: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80237A1C: sb          $v0, 0xAC($a1)
    MEM_B(0XAC, ctx->r5) = ctx->r2;
L_80237A20:
    // 0x80237A20: jr          $ra
    // 0x80237A24: nop

    TRACE_RETURN()
    return;
    // 0x80237A24: nop

;}
RECOMP_FUNC void func_8022EAB8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EAB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EABC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EAC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EAC4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022EAC8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EACC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EAD0: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022EAD4: beq         $v0, $zero, L_8022EC80
    if (ctx->r2 == 0) {
        // 0x8022EAD8: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022EC80;
    }
    // 0x8022EAD8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022EADC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022EAE0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022EAE4: addu        $at, $at, $v0
    gpr jr_addend_8022EAEC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022EAE8: lw          $v0, 0x2E20($at)
    ctx->r2 = ADD32(ctx->r1, 0X2E20);
    // 0x8022EAEC: jr          $v0
    // 0x8022EAF0: nop

    switch (jr_addend_8022EAEC >> 2) {
        case 0: goto L_8022EAF4; break;
        case 1: goto L_8022EB38; break;
        case 2: goto L_8022EB98; break;
        case 3: goto L_8022EC24; break;
        case 4: goto L_8022EC54; break;
        default: switch_error(__func__, 0x8022EAEC, 0x80252E20);
    }
    // 0x8022EAF0: nop

L_8022EAF4:
    // 0x8022EAF4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EAF8: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
    // 0x8022EAFC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022EB00: addiu       $v0, $zero, -0xB
    ctx->r2 = ADD32(0, -0XB);
    // 0x8022EB04: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022EB08: addiu       $v0, $zero, -0x18
    ctx->r2 = ADD32(0, -0X18);
    // 0x8022EB0C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022EB10: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022EB14: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x8022EB18: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022EB1C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022EB20: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8022EB24: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022EB28: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022EB2C: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x8022EB30: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x8022EB34: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
L_8022EB38:
    // 0x8022EB38: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022EB3C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022EB40: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022EB44: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EB48: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022EB4C: bltz        $v0, L_8022EB7C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022EB50: slti        $v0, $v0, 0x2
        ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_8022EB7C;
    }
    // 0x8022EB50: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8022EB54: beq         $v0, $zero, L_8022EC80
    if (ctx->r2 == 0) {
        // 0x8022EB58: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022EC80;
    }
    // 0x8022EB58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EB5C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022EB60: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022EB64: jal         0x8004DA90
    // 0x8022EB68: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022EB68: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022EB6C: jal         0x80040F30
    // 0x8022EB70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022EB70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022EB74: j           L_8022EC80
    // 0x8022EB78: nop

        goto L_8022EC80;
    // 0x8022EB78: nop

L_8022EB7C:
    // 0x8022EB7C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022EB80: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022EB84: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EB88: addiu       $v1, $zero, 0x26
    ctx->r3 = ADD32(0, 0X26);
    // 0x8022EB8C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022EB90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EB94: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022EB98:
    // 0x8022EB98: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x8022EB9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EBA0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022EBA4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022EBA8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022EBAC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022EBB0: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022EBB4: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022EBB8: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x8022EBBC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022EBC0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022EBC4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022EBC8: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022EBCC: jal         0x8004DA90
    // 0x8022EBD0: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022EBD0: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_2:
    // 0x8022EBD4: jal         0x80040F30
    // 0x8022EBD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022EBD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022EBDC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022EBE0: beq         $v1, $zero, L_8022EC80
    if (ctx->r3 == 0) {
        // 0x8022EBE4: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_8022EC80;
    }
    // 0x8022EBE4: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x8022EBE8: bnel        $v0, $zero, L_8022EBF0
    if (ctx->r2 != 0) {
        // 0x8022EBEC: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022EBF0;
    }
    goto skip_0;
    // 0x8022EBEC: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_8022EBF0:
    // 0x8022EBF0: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x8022EBF4: beq         $v0, $zero, L_8022EC80
    if (ctx->r2 == 0) {
        // 0x8022EBF8: nop
    
            goto L_8022EC80;
    }
    // 0x8022EBF8: nop

    // 0x8022EBFC: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8022EC00: bgtz        $v0, L_8022EC80
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022EC04: addiu       $v0, $zero, 0x26
        ctx->r2 = ADD32(0, 0X26);
            goto L_8022EC80;
    }
    // 0x8022EC04: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x8022EC08: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022EC0C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EC10: addiu       $v1, $zero, 0x27
    ctx->r3 = ADD32(0, 0X27);
    // 0x8022EC14: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022EC18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EC1C: j           L_8022EC80
    // 0x8022EC20: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022EC80;
    // 0x8022EC20: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022EC24:
    // 0x8022EC24: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022EC28: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022EC2C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022EC30: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EC34: bgez        $v0, L_8022EC80
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022EC38: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_8022EC80;
    }
    // 0x8022EC38: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022EC3C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022EC40: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EC44: addiu       $v1, $zero, 0x28
    ctx->r3 = ADD32(0, 0X28);
    // 0x8022EC48: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022EC4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EC50: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022EC54:
    // 0x8022EC54: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022EC58: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022EC5C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022EC60: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EC64: bgez        $v0, L_8022EC80
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022EC68: nop
    
            goto L_8022EC80;
    }
    // 0x8022EC68: nop

    // 0x8022EC6C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022EC70: ori         $v0, $v0, 0x109
    ctx->r2 = ctx->r2 | 0X109;
    // 0x8022EC74: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022EC78: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022EC7C: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
L_8022EC80:
    // 0x8022EC80: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022EC84: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022EC88: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EC8C: jr          $ra
    // 0x8022EC90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022EC90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
