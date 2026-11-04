#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022554C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022554C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225550: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225554: jal         0x8006033C
    // 0x80225558: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225558: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_0:
    // 0x8022555C: bne         $v0, $zero, L_80225588
    if (ctx->r2 != 0) {
        // 0x80225560: nop
    
            goto L_80225588;
    }
    // 0x80225560: nop

    // 0x80225564: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225568: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x8022556C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225570: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225574: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225578: lw          $v0, 0x7328($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7328);
    // 0x8022557C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80225580: jalr        $v0
    // 0x80225584: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80225584: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_1:
L_80225588:
    // 0x80225588: jal         0x8006033C
    // 0x8022558C: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022558C: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_2:
    // 0x80225590: beq         $v0, $zero, L_802255D0
    if (ctx->r2 == 0) {
        // 0x80225594: nop
    
            goto L_802255D0;
    }
    // 0x80225594: nop

    // 0x80225598: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022559C: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x802255A0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802255A4: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802255A8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802255AC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802255B0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802255B4: lw          $v1, 0x72E8($at)
    ctx->r3 = MEM_W(ctx->r1, 0X72E8);
    // 0x802255B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802255BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802255C0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802255C4: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x802255C8: jalr        $v0
    // 0x802255CC: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802255CC: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_3:
L_802255D0:
    // 0x802255D0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802255D4: jr          $ra
    // 0x802255D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802255D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230470_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230470: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80230474: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80230478: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023047C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80230480: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80230484: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80230488: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8023048C: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x80230490: addiu       $s0, $s2, 0x348
    ctx->r16 = ADD32(ctx->r18, 0X348);
    // 0x80230494: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80230498: beq         $v1, $zero, L_802304A8
    if (ctx->r3 == 0) {
        // 0x8023049C: sb          $v0, 0x0($s2)
        MEM_B(0X0, ctx->r18) = ctx->r2;
            goto L_802304A8;
    }
    // 0x8023049C: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x802304A0: j           L_802304B0
    // 0x802304A4: addiu       $a1, $s2, 0x3
    ctx->r5 = ADD32(ctx->r18, 0X3);
        goto L_802304B0;
    // 0x802304A4: addiu       $a1, $s2, 0x3
    ctx->r5 = ADD32(ctx->r18, 0X3);
L_802304A8:
    // 0x802304A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802304AC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_802304B0:
    // 0x802304B0: jal         0x8004D5D4
    // 0x802304B4: nop

    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802304B4: nop

    after_0:
    // 0x802304B8: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x802304BC: addiu       $s1, $s1, -0x5F00
    ctx->r17 = ADD32(ctx->r17, -0X5F00);
    // 0x802304C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802304C4: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x802304C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x802304CC: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x802304D0: sh          $v0, 0x15C($s2)
    MEM_H(0X15C, ctx->r18) = ctx->r2;
    // 0x802304D4: sh          $v0, 0x15A($s2)
    MEM_H(0X15A, ctx->r18) = ctx->r2;
    // 0x802304D8: sh          $v0, 0x158($s2)
    MEM_H(0X158, ctx->r18) = ctx->r2;
    // 0x802304DC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802304E0: sh          $v0, 0x15E($s2)
    MEM_H(0X15E, ctx->r18) = ctx->r2;
    // 0x802304E4: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x802304E8: jal         0x8009A3B4
    // 0x802304EC: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802304EC: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    after_1:
    // 0x802304F0: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x802304F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802304F8: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x802304FC: jal         0x8009A3B4
    // 0x80230500: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80230500: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80230504: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80230508: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023050C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80230510: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x80230514: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80230518: jal         0x8004DBA0
    // 0x8023051C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x8023051C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x80230520: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80230524: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230528: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023052C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80230530: sh          $v0, 0x6E($s2)
    MEM_H(0X6E, ctx->r18) = ctx->r2;
    // 0x80230534: sh          $v0, 0xB0($s2)
    MEM_H(0XB0, ctx->r18) = ctx->r2;
    // 0x80230538: sh          $v0, 0xB2($s2)
    MEM_H(0XB2, ctx->r18) = ctx->r2;
    // 0x8023053C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80230540: addiu       $v0, $v0, -0x6CC8
    ctx->r2 = ADD32(ctx->r2, -0X6CC8);
    // 0x80230544: sw          $v0, 0x78($s2)
    MEM_W(0X78, ctx->r18) = ctx->r2;
    // 0x80230548: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023054C: sh          $zero, 0x54($s2)
    MEM_H(0X54, ctx->r18) = 0;
    // 0x80230550: sh          $zero, 0x58($s2)
    MEM_H(0X58, ctx->r18) = 0;
    // 0x80230554: sw          $zero, 0x44($s2)
    MEM_W(0X44, ctx->r18) = 0;
    // 0x80230558: sw          $zero, 0x48($s2)
    MEM_W(0X48, ctx->r18) = 0;
    // 0x8023055C: sw          $zero, 0x10($s2)
    MEM_W(0X10, ctx->r18) = 0;
    // 0x80230560: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80230564: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x80230568: jal         0x80050294
    // 0x8023056C: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8023056C: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    after_4:
    // 0x80230570: jal         0x80230590
    // 0x80230574: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80230590_ovl7(rdram, ctx);
        goto after_5;
    // 0x80230574: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
    // 0x80230578: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023057C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80230580: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80230584: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80230588: jr          $ra
    // 0x8023058C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023058C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022DE54_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DE54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022DE58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DE5C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DE60: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022DE64: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022DE68: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022DE6C: jal         0x8003516C
    // 0x8022DE70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003516C_1056C(rdram, ctx);
        goto after_0;
    // 0x8022DE70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022DE74: bne         $v0, $zero, L_8022DE98
    if (ctx->r2 != 0) {
        // 0x8022DE78: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022DE98;
    }
    // 0x8022DE78: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022DE7C: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022DE80: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8022DE84: jal         0x800610AC
    // 0x8022DE88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x8022DE88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022DE8C: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022DE90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DE94: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022DE98:
    // 0x8022DE98: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022DE9C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022DEA0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022DEA4: jal         0x8004F820
    // 0x8022DEA8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022DEA8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x8022DEAC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022DEB0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8022DEB4: sb          $a0, 0x11B($s0)
    MEM_B(0X11B, ctx->r16) = ctx->r4;
    // 0x8022DEB8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022DEBC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022DEC0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022DEC4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022DEC8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DECC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DED0: jr          $ra
    // 0x8022DED4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DED4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802351A0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802351A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802351A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802351A8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802351AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802351B0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802351B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802351B8: lw          $v0, -0x69B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X69B0);
    // 0x802351BC: jalr        $v0
    // 0x802351C0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802351C0: nop

    after_0:
    // 0x802351C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802351C8: jr          $ra
    // 0x802351CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802351CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B580_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B580: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8022B584: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022B588: jr          $ra
    // 0x8022B58C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022B58C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8022F658_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F658: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F65C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F660: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F668: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x8022F66C: beq         $v0, $zero, L_8022F6C0
    if (ctx->r2 == 0) {
        // 0x8022F670: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022F6C0;
    }
    // 0x8022F670: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F674: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022F678: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x8022F67C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022F680: bne         $v0, $zero, L_8022F698
    if (ctx->r2 != 0) {
        // 0x8022F684: nop
    
            goto L_8022F698;
    }
    // 0x8022F684: nop

    // 0x8022F688: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    // 0x8022F68C: jal         0x8002A33C
    // 0x8022F690: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022F690: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022F694: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022F698:
    // 0x8022F698: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022F69C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F6A0: jal         0x8004DA90
    // 0x8022F6A4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022F6A4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022F6A8: jal         0x8003E934
    // 0x8022F6AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022F6AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022F6B0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022F6B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F6B8: j           L_8022F6D0
    // 0x8022F6BC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_8022F6D0;
    // 0x8022F6BC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022F6C0:
    // 0x8022F6C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022F6C4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022F6C8: jal         0x80047284
    // 0x8022F6CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_3;
    // 0x8022F6CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
L_8022F6D0:
    // 0x8022F6D0: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022F6D4: bne         $v0, $zero, L_8022F6EC
    if (ctx->r2 != 0) {
        // 0x8022F6D8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022F6EC;
    }
    // 0x8022F6D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F6DC: jal         0x8005044C
    // 0x8022F6E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x8022F6E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022F6E4: j           L_8022F700
    // 0x8022F6E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8022F700;
    // 0x8022F6E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022F6EC:
    // 0x8022F6EC: lb          $a1, 0xE($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XE);
    // 0x8022F6F0: jal         0x80050294
    // 0x8022F6F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022F6F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022F6F8: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022F6FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022F700:
    // 0x8022F700: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022F704: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022F708: jal         0x8003B564
    // 0x8022F70C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_6;
    // 0x8022F70C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
    // 0x8022F710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F714: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F718: jr          $ra
    // 0x8022F71C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F71C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231C5C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231C5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231C60: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231C64: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231C68: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80231C6C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231C70: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80231C74: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80231C78: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80231C7C: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80231C80: beq         $v0, $zero, L_80231D80
    if (ctx->r2 == 0) {
        // 0x80231C84: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80231D80;
    }
    // 0x80231C84: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80231C88: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231C8C: addu        $at, $at, $v0
    gpr jr_addend_80231C94 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231C90: lw          $v0, -0x6080($at)
    ctx->r2 = ADD32(ctx->r1, -0X6080);
    // 0x80231C94: jr          $v0
    // 0x80231C98: nop

    switch (jr_addend_80231C94 >> 2) {
        case 0: goto L_80231C9C; break;
        case 1: goto L_80231CAC; break;
        case 2: goto L_80231CC4; break;
        case 3: goto L_80231CF0; break;
        case 4: goto L_80231D20; break;
        default: switch_error(__func__, 0x80231C94, 0x80239F80);
    }
    // 0x80231C98: nop

L_80231C9C:
    // 0x80231C9C: jal         0x80231DA8
    // 0x80231CA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80231DA8_ovl7(rdram, ctx);
        goto after_0;
    // 0x80231CA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80231CA4: j           L_80231D10
    // 0x80231CA8: nop

        goto L_80231D10;
    // 0x80231CA8: nop

L_80231CAC:
    // 0x80231CAC: jal         0x80231E48
    // 0x80231CB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80231E48_ovl7(rdram, ctx);
        goto after_1;
    // 0x80231CB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80231CB4: beq         $v0, $zero, L_80231D84
    if (ctx->r2 == 0) {
        // 0x80231CB8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231D84;
    }
    // 0x80231CB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231CBC: j           L_80231D10
    // 0x80231CC0: nop

        goto L_80231D10;
    // 0x80231CC0: nop

L_80231CC4:
    // 0x80231CC4: jal         0x8003516C
    // 0x80231CC8: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_2;
    // 0x80231CC8: nop

    after_2:
    // 0x80231CCC: bne         $v0, $zero, L_80231D84
    if (ctx->r2 != 0) {
        // 0x80231CD0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231D84;
    }
    // 0x80231CD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231CD4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80231CD8: lb          $a3, 0xC($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XC);
    // 0x80231CDC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80231CE0: jal         0x800610AC
    // 0x80231CE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_3;
    // 0x80231CE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80231CE8: j           L_80231D10
    // 0x80231CEC: nop

        goto L_80231D10;
    // 0x80231CEC: nop

L_80231CF0:
    // 0x80231CF0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80231CF4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80231CF8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80231CFC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80231D00: bne         $v0, $zero, L_80231D84
    if (ctx->r2 != 0) {
        // 0x80231D04: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231D84;
    }
    // 0x80231D04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231D08: jal         0x80034E3C
    // 0x80231D0C: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_4;
    // 0x80231D0C: nop

    after_4:
L_80231D10:
    // 0x80231D10: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80231D14: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231D18: j           L_80231D80
    // 0x80231D1C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80231D80;
    // 0x80231D1C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80231D20:
    // 0x80231D20: jal         0x8003516C
    // 0x80231D24: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_5;
    // 0x80231D24: nop

    after_5:
    // 0x80231D28: bne         $v0, $zero, L_80231D84
    if (ctx->r2 != 0) {
        // 0x80231D2C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231D84;
    }
    // 0x80231D2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231D30: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80231D34: lbu         $v0, 0x3FF3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FF3);
    // 0x80231D38: bne         $v0, $zero, L_80231D64
    if (ctx->r2 != 0) {
        // 0x80231D3C: nop
    
            goto L_80231D64;
    }
    // 0x80231D3C: nop

    // 0x80231D40: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80231D44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231D48: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80231D4C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80231D50: sb          $zero, -0x359C($at)
    MEM_B(-0X359C, ctx->r1) = 0;
    // 0x80231D54: jal         0x80060590
    // 0x80231D58: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_80060590_3B990(rdram, ctx);
        goto after_6;
    // 0x80231D58: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_6:
    // 0x80231D5C: j           L_80231D74
    // 0x80231D60: nop

        goto L_80231D74;
    // 0x80231D60: nop

L_80231D64:
    // 0x80231D64: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x80231D68: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80231D6C: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x80231D70: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80231D74:
    // 0x80231D74: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80231D78: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80231D7C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_80231D80:
    // 0x80231D80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80231D84:
    // 0x80231D84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80231D88: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80231D8C: jal         0x80047284
    // 0x80231D90: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_7;
    // 0x80231D90: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
    // 0x80231D94: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231D98: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231D9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231DA0: jr          $ra
    // 0x80231DA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231DA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E444_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E444: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022E448: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022E44C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022E450: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022E454: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022E458: lh          $v0, 0x56($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X56);
    // 0x8022E45C: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x8022E460: sll         $a2, $a1, 20
    ctx->r6 = S32(ctx->r5 << 20);
    // 0x8022E464: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8022E468: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022E46C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022E470: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022E474: jal         0x8004DC2C
    // 0x8022E478: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_8004DC2C_2902C(rdram, ctx);
        goto after_0;
    // 0x8022E478: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x8022E47C: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x8022E480: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x8022E484: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022E488: lhu         $v1, 0x49C4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C4);
    // 0x8022E48C: lh          $a2, 0x20($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X20);
    // 0x8022E490: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8022E494: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x8022E498: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x8022E49C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022E4A0: lhu         $a1, 0x49C8($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X49C8);
    // 0x8022E4A4: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x8022E4A8: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x8022E4AC: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8022E4B0: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8022E4B4: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x8022E4B8: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    // 0x8022E4BC: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x8022E4C0: slt         $a0, $a0, $s0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8022E4C4: beq         $a0, $zero, L_8022E4D4
    if (ctx->r4 == 0) {
        // 0x8022E4C8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022E4D4;
    }
    // 0x8022E4C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022E4CC: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x8022E4D0: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
L_8022E4D4:
    // 0x8022E4D4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022E4D8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022E4DC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022E4E0: jr          $ra
    // 0x8022E4E4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022E4E4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8022E4E8: nop

    // 0x8022E4EC: nop

;}
RECOMP_FUNC void func_80229848_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229848: jr          $ra
    // 0x8022984C: nop

    TRACE_RETURN()
    return;
    // 0x8022984C: nop

;}
RECOMP_FUNC void func_80231030_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231030: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231034: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231038: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023103C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80231040: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231044: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80231048: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8023104C: beq         $v1, $zero, L_80231068
    if (ctx->r3 == 0) {
        // 0x80231050: addiu       $s0, $s1, 0x348
        ctx->r16 = ADD32(ctx->r17, 0X348);
            goto L_80231068;
    }
    // 0x80231050: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    // 0x80231054: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231058: beq         $v1, $v0, L_8023107C
    if (ctx->r3 == ctx->r2) {
        // 0x8023105C: nop
    
            goto L_8023107C;
    }
    // 0x8023105C: nop

    // 0x80231060: j           L_802310BC
    // 0x80231064: nop

        goto L_802310BC;
    // 0x80231064: nop

L_80231068:
    // 0x80231068: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023106C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80231070: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80231074: sb          $zero, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = 0;
    // 0x80231078: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_8023107C:
    // 0x8023107C: lbu         $a0, 0xC($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XC);
    // 0x80231080: jal         0x80053ED8
    // 0x80231084: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x80231084: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    after_0:
    // 0x80231088: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023108C: addiu       $a1, $v0, 0x14
    ctx->r5 = ADD32(ctx->r2, 0X14);
    // 0x80231090: jal         0x8009A3B4
    // 0x80231094: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80231094: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80231098: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8023109C: lh          $a3, 0x64($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X64);
    // 0x802310A0: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x802310A4: jal         0x8004F820
    // 0x802310A8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x802310A8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802310AC: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x802310B0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802310B4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802310B8: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
L_802310BC:
    // 0x802310BC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802310C0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802310C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802310C8: jr          $ra
    // 0x802310CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802310CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C8F0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C8F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C8F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C8F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C8FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C900: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022C904: bgez        $v0, L_8022C91C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C908: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022C91C;
    }
    // 0x8022C908: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022C90C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C910: jal         0x8022E3B8
    // 0x8022C914: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8022E3B8_ovl7(rdram, ctx);
        goto after_0;
    // 0x8022C914: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022C918: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022C91C:
    // 0x8022C91C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C920: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C924: jr          $ra
    // 0x8022C928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802338C4_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802338C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802338C8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802338CC: jal         0x8004F4F8
    // 0x802338D0: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x802338D0: nop

    after_0:
    // 0x802338D4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802338D8: jr          $ra
    // 0x802338DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802338DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802270D0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802270D0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802270D4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802270D8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802270DC: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x802270E0: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802270E4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802270E8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802270EC: lbu         $v1, 0x6($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X6);
    // 0x802270F0: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x802270F4: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x802270F8: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x802270FC: beq         $v0, $zero, L_8022768C
    if (ctx->r2 == 0) {
        // 0x80227100: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022768C;
    }
    // 0x80227100: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227104: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227108: addu        $at, $at, $v0
    gpr jr_addend_80227110 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022710C: lw          $v0, -0x63C0($at)
    ctx->r2 = ADD32(ctx->r1, -0X63C0);
    // 0x80227110: jr          $v0
    // 0x80227114: nop

    switch (jr_addend_80227110 >> 2) {
        case 0: goto L_80227118; break;
        case 1: goto L_80227194; break;
        case 2: goto L_802271C0; break;
        case 3: goto L_802272E8; break;
        case 4: goto L_80227350; break;
        case 5: goto L_802273A4; break;
        case 6: goto L_802273F8; break;
        case 7: goto L_8022744C; break;
        case 8: goto L_802274B0; break;
        case 9: goto L_8022752C; break;
        case 10: goto L_802275FC; break;
        case 11: goto L_80227624; break;
        case 12: goto L_80227658; break;
        default: switch_error(__func__, 0x80227110, 0x80239C40);
    }
    // 0x80227114: nop

L_80227118:
    // 0x80227118: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022711C: lw          $s1, -0x3E7C($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3E7C);
    // 0x80227120: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x80227124: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227128: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022712C: jal         0x8009A3B4
    // 0x80227130: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80227130: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_0:
    // 0x80227134: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80227138: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022713C: lh          $v0, 0x16($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X16);
    // 0x80227140: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x80227144: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80227148: lh          $v0, 0x18($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X18);
    // 0x8022714C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227150: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x80227154: jal         0x8004EC38
    // 0x80227158: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x80227158: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x8022715C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80227160: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80227164: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x80227168: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    // 0x8022716C: addiu       $a2, $v0, 0x20
    ctx->r6 = ADD32(ctx->r2, 0X20);
    // 0x80227170: jal         0x8003501C
    // 0x80227174: addiu       $a3, $a3, 0x61
    ctx->r7 = ADD32(ctx->r7, 0X61);
    func_8003501C_1041C(rdram, ctx);
        goto after_2;
    // 0x80227174: addiu       $a3, $a3, 0x61
    ctx->r7 = ADD32(ctx->r7, 0X61);
    after_2:
    // 0x80227178: lbu         $v0, 0xBD($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XBD);
    // 0x8022717C: lbu         $v1, 0x0($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X0);
    // 0x80227180: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80227184: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80227188: sb          $v0, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r2;
    // 0x8022718C: j           L_80227614
    // 0x80227190: sb          $v1, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r3;
        goto L_80227614;
    // 0x80227190: sb          $v1, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r3;
L_80227194:
    // 0x80227194: jal         0x8003516C
    // 0x80227198: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_3;
    // 0x80227198: nop

    after_3:
    // 0x8022719C: bne         $v0, $zero, L_8022768C
    if (ctx->r2 != 0) {
        // 0x802271A0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022768C;
    }
    // 0x802271A0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802271A4: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x802271A8: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x802271AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802271B0: jal         0x800616FC
    // 0x802271B4: sb          $v0, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x802271B4: sb          $v0, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r2;
    after_4:
    // 0x802271B8: j           L_8022768C
    // 0x802271BC: nop

        goto L_8022768C;
    // 0x802271BC: nop

L_802271C0:
    // 0x802271C0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802271C4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802271C8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802271CC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802271D0: bne         $v0, $zero, L_8022768C
    if (ctx->r2 != 0) {
        // 0x802271D4: nop
    
            goto L_8022768C;
    }
    // 0x802271D4: nop

    // 0x802271D8: jal         0x8006FF84
    // 0x802271DC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_5;
    // 0x802271DC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_5:
    // 0x802271E0: beq         $v0, $zero, L_8022768C
    if (ctx->r2 == 0) {
        // 0x802271E4: nop
    
            goto L_8022768C;
    }
    // 0x802271E4: nop

    // 0x802271E8: jal         0x80034E74
    // 0x802271EC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    func_80034E74_10274(rdram, ctx);
        goto after_6;
    // 0x802271EC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    after_6:
    // 0x802271F0: lbu         $v0, 0xBD($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XBD);
    // 0x802271F4: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x802271F8: sb          $v0, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r2;
    // 0x802271FC: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x80227200: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227204: jal         0x80060170
    // 0x80227208: sb          $v0, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r2;
    func_80060170_3B570(rdram, ctx);
        goto after_7;
    // 0x80227208: sb          $v0, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r2;
    after_7:
    // 0x8022720C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227210: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227214: jal         0x8005F6B4
    // 0x80227218: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_8;
    // 0x80227218: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_8:
    // 0x8022721C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227220: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x80227224: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227228: addiu       $v0, $v0, -0x7C04
    ctx->r2 = ADD32(ctx->r2, -0X7C04);
    // 0x8022722C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80227230: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80227234: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227238: addiu       $v0, $v0, -0x7C2C
    ctx->r2 = ADD32(ctx->r2, -0X7C2C);
    // 0x8022723C: jal         0x800616FC
    // 0x80227240: sw          $v0, 0xA4($s2)
    MEM_W(0XA4, ctx->r18) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_9;
    // 0x80227240: sw          $v0, 0xA4($s2)
    MEM_W(0XA4, ctx->r18) = ctx->r2;
    after_9:
    // 0x80227244: addiu       $a0, $s3, 0x428
    ctx->r4 = ADD32(ctx->r19, 0X428);
    // 0x80227248: lbu         $v1, 0xBD($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XBD);
    // 0x8022724C: addiu       $a1, $s3, 0x438
    ctx->r5 = ADD32(ctx->r19, 0X438);
    // 0x80227250: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227254: sb          $v0, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r2;
    // 0x80227258: lui         $v0, 0xF494
    ctx->r2 = S32(0XF494 << 16);
    // 0x8022725C: sw          $v0, 0x428($s3)
    MEM_W(0X428, ctx->r19) = ctx->r2;
    // 0x80227260: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80227264: sw          $v0, 0x42C($s3)
    MEM_W(0X42C, ctx->r19) = ctx->r2;
    // 0x80227268: lui         $v0, 0x48C
    ctx->r2 = S32(0X48C << 16);
    // 0x8022726C: sb          $s0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r16;
    // 0x80227270: sw          $v0, 0x430($s3)
    MEM_W(0X430, ctx->r19) = ctx->r2;
    // 0x80227274: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80227278: jal         0x8004DD04
    // 0x8022727C: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    func_8004DD04_29104(rdram, ctx);
        goto after_10;
    // 0x8022727C: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    after_10:
    // 0x80227280: addiu       $v0, $zero, 0x82C
    ctx->r2 = ADD32(0, 0X82C);
    // 0x80227284: sh          $v0, 0x442($s3)
    MEM_H(0X442, ctx->r19) = ctx->r2;
    // 0x80227288: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022728C: sh          $zero, 0x440($s3)
    MEM_H(0X440, ctx->r19) = 0;
    // 0x80227290: sh          $zero, 0x444($s3)
    MEM_H(0X444, ctx->r19) = 0;
    // 0x80227294: jal         0x802284F8
    // 0x80227298: sb          $v0, 0x448($s3)
    MEM_B(0X448, ctx->r19) = ctx->r2;
    func_802284F8_ovl7(rdram, ctx);
        goto after_11;
    // 0x80227298: sb          $v0, 0x448($s3)
    MEM_B(0X448, ctx->r19) = ctx->r2;
    after_11:
    // 0x8022729C: jal         0x802283FC
    // 0x802272A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802283FC_ovl7(rdram, ctx);
        goto after_12;
    // 0x802272A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_12:
    // 0x802272A4: jal         0x80060590
    // 0x802272A8: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_80060590_3B990(rdram, ctx);
        goto after_13;
    // 0x802272A8: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_13:
    // 0x802272AC: jal         0x80060590
    // 0x802272B0: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_80060590_3B990(rdram, ctx);
        goto after_14;
    // 0x802272B0: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_14:
    // 0x802272B4: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x802272B8: lw          $s1, -0x3E74($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3E74);
    // 0x802272BC: sb          $s0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r16;
    // 0x802272C0: sb          $zero, 0x8($s1)
    MEM_B(0X8, ctx->r17) = 0;
    // 0x802272C4: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x802272C8: lw          $s1, -0x3E70($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3E70);
    // 0x802272CC: sb          $s0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r16;
    // 0x802272D0: sb          $zero, 0x8($s1)
    MEM_B(0X8, ctx->r17) = 0;
    // 0x802272D4: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x802272D8: lw          $s1, -0x3E7C($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3E7C);
    // 0x802272DC: sb          $s0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r16;
    // 0x802272E0: j           L_8022768C
    // 0x802272E4: sb          $zero, 0x8($s1)
    MEM_B(0X8, ctx->r17) = 0;
        goto L_8022768C;
    // 0x802272E4: sb          $zero, 0x8($s1)
    MEM_B(0X8, ctx->r17) = 0;
L_802272E8:
    // 0x802272E8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802272EC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802272F0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802272F4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802272F8: bne         $v0, $zero, L_8022768C
    if (ctx->r2 != 0) {
        // 0x802272FC: nop
    
            goto L_8022768C;
    }
    // 0x802272FC: nop

    // 0x80227300: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x80227304: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227308: sb          $v0, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r2;
    // 0x8022730C: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80227310: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227314: jal         0x800600F8
    // 0x80227318: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_15;
    // 0x80227318: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    after_15:
    // 0x8022731C: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x80227320: lw          $s1, -0x3E74($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3E74);
    // 0x80227324: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227328: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022732C: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x80227330: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x80227334: lw          $s1, -0x3E7C($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3E7C);
    // 0x80227338: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022733C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80227340: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x80227344: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227348: j           L_80227520
    // 0x8022734C: lw          $v0, -0x3E74($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3E74);
        goto L_80227520;
    // 0x8022734C: lw          $v0, -0x3E74($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3E74);
L_80227350:
    // 0x80227350: jal         0x8006033C
    // 0x80227354: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_8006033C_3B73C(rdram, ctx);
        goto after_16;
    // 0x80227354: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_16:
    // 0x80227358: beq         $v0, $zero, L_8022768C
    if (ctx->r2 == 0) {
        // 0x8022735C: nop
    
            goto L_8022768C;
    }
    // 0x8022735C: nop

    // 0x80227360: jal         0x80060590
    // 0x80227364: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_80060590_3B990(rdram, ctx);
        goto after_17;
    // 0x80227364: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_17:
    // 0x80227368: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x8022736C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227370: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    // 0x80227374: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227378: jal         0x800616FC
    // 0x8022737C: sb          $v0, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_18;
    // 0x8022737C: sb          $v0, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r2;
    after_18:
    // 0x80227380: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x80227384: lw          $s1, -0x3E74($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3E74);
    // 0x80227388: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022738C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80227390: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x80227394: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x80227398: lw          $s1, -0x3E7C($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3E7C);
    // 0x8022739C: j           L_80227444
    // 0x802273A0: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
        goto L_80227444;
    // 0x802273A0: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_802273A4:
    // 0x802273A4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802273A8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802273AC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802273B0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802273B4: bne         $v0, $zero, L_8022768C
    if (ctx->r2 != 0) {
        // 0x802273B8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022768C;
    }
    // 0x802273B8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802273BC: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x802273C0: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x802273C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802273C8: jal         0x800616FC
    // 0x802273CC: sb          $v0, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_19;
    // 0x802273CC: sb          $v0, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r2;
    after_19:
    // 0x802273D0: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x802273D4: lw          $s1, -0x3E74($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3E74);
    // 0x802273D8: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x802273DC: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x802273E0: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x802273E4: lw          $s1, -0x3E70($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3E70);
    // 0x802273E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802273EC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x802273F0: j           L_8022768C
    // 0x802273F4: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
        goto L_8022768C;
    // 0x802273F4: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_802273F8:
    // 0x802273F8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802273FC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80227400: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80227404: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227408: bne         $v0, $zero, L_8022768C
    if (ctx->r2 != 0) {
        // 0x8022740C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022768C;
    }
    // 0x8022740C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227410: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x80227414: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80227418: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022741C: jal         0x800616FC
    // 0x80227420: sb          $v0, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_20;
    // 0x80227420: sb          $v0, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r2;
    after_20:
    // 0x80227424: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x80227428: lw          $s1, -0x3E74($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3E74);
    // 0x8022742C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227430: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80227434: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x80227438: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022743C: lw          $s1, -0x3E70($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3E70);
    // 0x80227440: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80227444:
    // 0x80227444: j           L_8022768C
    // 0x80227448: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
        goto L_8022768C;
    // 0x80227448: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_8022744C:
    // 0x8022744C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227450: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80227454: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80227458: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022745C: bne         $v0, $zero, L_8022768C
    if (ctx->r2 != 0) {
        // 0x80227460: nop
    
            goto L_8022768C;
    }
    // 0x80227460: nop

    // 0x80227464: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x80227468: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022746C: sb          $v0, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r2;
    // 0x80227470: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x80227474: lw          $s1, -0x3E74($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3E74);
    // 0x80227478: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022747C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80227480: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x80227484: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227488: lw          $v0, -0x3E70($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3E70);
    // 0x8022748C: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x80227490: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x80227494: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227498: lw          $v0, -0x3E6C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3E6C);
    // 0x8022749C: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x802274A0: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x802274A4: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x802274A8: j           L_8022768C
    // 0x802274AC: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
        goto L_8022768C;
    // 0x802274AC: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
L_802274B0:
    // 0x802274B0: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x802274B4: addiu       $v1, $zero, 0x8C
    ctx->r3 = ADD32(0, 0X8C);
    // 0x802274B8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802274BC: bne         $v0, $v1, L_802274E8
    if (ctx->r2 != ctx->r3) {
        // 0x802274C0: sw          $v0, 0xC($s2)
        MEM_W(0XC, ctx->r18) = ctx->r2;
            goto L_802274E8;
    }
    // 0x802274C0: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
    // 0x802274C4: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x802274C8: lw          $s1, -0x3E7C($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3E7C);
    // 0x802274CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802274D0: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x802274D4: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x802274D8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802274DC: lw          $v0, -0x3E6C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3E6C);
    // 0x802274E0: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x802274E4: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_802274E8:
    // 0x802274E8: lw          $v1, 0xC($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XC);
    // 0x802274EC: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x802274F0: bne         $v1, $v0, L_8022768C
    if (ctx->r3 != ctx->r2) {
        // 0x802274F4: nop
    
            goto L_8022768C;
    }
    // 0x802274F4: nop

    // 0x802274F8: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x802274FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227500: sb          $v0, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r2;
    // 0x80227504: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x80227508: lw          $s1, -0x3E70($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3E70);
    // 0x8022750C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227510: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80227514: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x80227518: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022751C: lw          $v0, -0x3E6C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3E6C);
L_80227520:
    // 0x80227520: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x80227524: j           L_8022768C
    // 0x80227528: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
        goto L_8022768C;
    // 0x80227528: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_8022752C:
    // 0x8022752C: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x80227530: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227534: bgez        $v0, L_8022768C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227538: sw          $v0, 0xC($s2)
        MEM_W(0XC, ctx->r18) = ctx->r2;
            goto L_8022768C;
    }
    // 0x80227538: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
    // 0x8022753C: jal         0x800600F8
    // 0x80227540: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_21;
    // 0x80227540: nop

    after_21:
    // 0x80227544: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x80227548: addiu       $a0, $s3, 0x428
    ctx->r4 = ADD32(ctx->r19, 0X428);
    // 0x8022754C: addiu       $a1, $s3, 0x438
    ctx->r5 = ADD32(ctx->r19, 0X438);
    // 0x80227550: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227554: sb          $v0, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r2;
    // 0x80227558: lui         $v0, 0xF5D7
    ctx->r2 = S32(0XF5D7 << 16);
    // 0x8022755C: sw          $v0, 0x428($s3)
    MEM_W(0X428, ctx->r19) = ctx->r2;
    // 0x80227560: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80227564: sw          $v0, 0x42C($s3)
    MEM_W(0X42C, ctx->r19) = ctx->r2;
    // 0x80227568: lui         $v0, 0x454
    ctx->r2 = S32(0X454 << 16);
    // 0x8022756C: jal         0x8004DD04
    // 0x80227570: sw          $v0, 0x430($s3)
    MEM_W(0X430, ctx->r19) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_22;
    // 0x80227570: sw          $v0, 0x430($s3)
    MEM_W(0X430, ctx->r19) = ctx->r2;
    after_22:
    // 0x80227574: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80227578: addiu       $v0, $zero, 0x6CC
    ctx->r2 = ADD32(0, 0X6CC);
    // 0x8022757C: jal         0x8022861C
    // 0x80227580: sh          $v0, 0x56($s3)
    MEM_H(0X56, ctx->r19) = ctx->r2;
    func_8022861C_ovl7(rdram, ctx);
        goto after_23;
    // 0x80227580: sh          $v0, 0x56($s3)
    MEM_H(0X56, ctx->r19) = ctx->r2;
    after_23:
    // 0x80227584: jal         0x8022861C
    // 0x80227588: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8022861C_ovl7(rdram, ctx);
        goto after_24;
    // 0x80227588: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_24:
    // 0x8022758C: jal         0x8022861C
    // 0x80227590: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8022861C_ovl7(rdram, ctx);
        goto after_25;
    // 0x80227590: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_25:
    // 0x80227594: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    // 0x80227598: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022759C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802275A0: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x802275A4: jal         0x8002A2F8
    // 0x802275A8: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_26;
    // 0x802275A8: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
    after_26:
    // 0x802275AC: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802275B0: lw          $v1, -0x3E6C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3E6C);
    // 0x802275B4: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802275B8: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x802275BC: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802275C0: lw          $v1, -0x3E6C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3E6C);
    // 0x802275C4: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x802275C8: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x802275CC: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    // 0x802275D0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802275D4: lw          $v1, -0x3E6C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3E6C);
    // 0x802275D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802275DC: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802275E0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802275E4: lw          $v0, -0x3E6C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3E6C);
    // 0x802275E8: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x802275EC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802275F0: lw          $v0, -0x3E6C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3E6C);
    // 0x802275F4: j           L_8022768C
    // 0x802275F8: sb          $zero, 0xB($v0)
    MEM_B(0XB, ctx->r2) = 0;
        goto L_8022768C;
    // 0x802275F8: sb          $zero, 0xB($v0)
    MEM_B(0XB, ctx->r2) = 0;
L_802275FC:
    // 0x802275FC: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x80227600: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227604: bgez        $v0, L_8022768C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227608: sw          $v0, 0xC($s2)
        MEM_W(0XC, ctx->r18) = ctx->r2;
            goto L_8022768C;
    }
    // 0x80227608: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
    // 0x8022760C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80227610: sh          $v0, 0x442($s3)
    MEM_H(0X442, ctx->r19) = ctx->r2;
L_80227614:
    // 0x80227614: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x80227618: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022761C: j           L_8022768C
    // 0x80227620: sb          $v0, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r2;
        goto L_8022768C;
    // 0x80227620: sb          $v0, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r2;
L_80227624:
    // 0x80227624: jal         0x80070050
    // 0x80227628: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_27;
    // 0x80227628: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_27:
    // 0x8022762C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227630: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227634: jal         0x80034844
    // 0x80227638: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_28;
    // 0x80227638: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_28:
    // 0x8022763C: jal         0x8022861C
    // 0x80227640: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8022861C_ovl7(rdram, ctx);
        goto after_29;
    // 0x80227640: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_29:
    // 0x80227644: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227648: jal         0x8006036C
    // 0x8022764C: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    func_8006036C_3B76C(rdram, ctx);
        goto after_30;
    // 0x8022764C: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    after_30:
    // 0x80227650: j           L_8022768C
    // 0x80227654: nop

        goto L_8022768C;
    // 0x80227654: nop

L_80227658:
    // 0x80227658: jal         0x80034E74
    // 0x8022765C: nop

    func_80034E74_10274(rdram, ctx);
        goto after_31;
    // 0x8022765C: nop

    after_31:
    // 0x80227660: jal         0x80070050
    // 0x80227664: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_32;
    // 0x80227664: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_32:
    // 0x80227668: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022766C: jal         0x8006036C
    // 0x80227670: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    func_8006036C_3B76C(rdram, ctx);
        goto after_33;
    // 0x80227670: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    after_33:
    // 0x80227674: lbu         $v0, 0xBD($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XBD);
    // 0x80227678: lbu         $v1, 0x0($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X0);
    // 0x8022767C: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80227680: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80227684: sb          $v0, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r2;
    // 0x80227688: sb          $v1, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r3;
L_8022768C:
    // 0x8022768C: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x80227690: addiu       $v0, $v0, -0x3
    ctx->r2 = ADD32(ctx->r2, -0X3);
    // 0x80227694: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x80227698: beq         $v0, $zero, L_802276BC
    if (ctx->r2 == 0) {
        // 0x8022769C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_802276BC;
    }
    // 0x8022769C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802276A0: lw          $a0, 0xA4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XA4);
    // 0x802276A4: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x802276A8: beq         $v1, $v0, L_802276BC
    if (ctx->r3 == ctx->r2) {
        // 0x802276AC: nop
    
            goto L_802276BC;
    }
    // 0x802276AC: nop

    // 0x802276B0: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x802276B4: jalr        $v0
    // 0x802276B8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_34;
    // 0x802276B8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_34:
L_802276BC:
    // 0x802276BC: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x802276C0: sltiu       $v0, $v0, 0xB
    ctx->r2 = ctx->r2 < 0XB ? 1 : 0;
    // 0x802276C4: beq         $v0, $zero, L_802277A0
    if (ctx->r2 == 0) {
        // 0x802276C8: nop
    
            goto L_802277A0;
    }
    // 0x802276C8: nop

    // 0x802276CC: jal         0x8006072C
    // 0x802276D0: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_35;
    // 0x802276D0: nop

    after_35:
    // 0x802276D4: beq         $v0, $zero, L_802277A0
    if (ctx->r2 == 0) {
        // 0x802276D8: nop
    
            goto L_802277A0;
    }
    // 0x802276D8: nop

    // 0x802276DC: jal         0x8022861C
    // 0x802276E0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8022861C_ovl7(rdram, ctx);
        goto after_36;
    // 0x802276E0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_36:
    // 0x802276E4: jal         0x8022861C
    // 0x802276E8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8022861C_ovl7(rdram, ctx);
        goto after_37;
    // 0x802276E8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_37:
    // 0x802276EC: jal         0x8022861C
    // 0x802276F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8022861C_ovl7(rdram, ctx);
        goto after_38;
    // 0x802276F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_38:
    // 0x802276F4: jal         0x8022861C
    // 0x802276F8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8022861C_ovl7(rdram, ctx);
        goto after_39;
    // 0x802276F8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_39:
    // 0x802276FC: jal         0x80061724
    // 0x80227700: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_40;
    // 0x80227700: nop

    after_40:
    // 0x80227704: jal         0x80061090
    // 0x80227708: nop

    func_80061090_3C490(rdram, ctx);
        goto after_41;
    // 0x80227708: nop

    after_41:
    // 0x8022770C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227710: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227714: jal         0x80036B00
    // 0x80227718: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_42;
    // 0x80227718: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_42:
    // 0x8022771C: jal         0x8002A488
    // 0x80227720: nop

    func_8002A488_5888(rdram, ctx);
        goto after_43;
    // 0x80227720: nop

    after_43:
    // 0x80227724: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    // 0x80227728: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022772C: jal         0x8002A2F8
    // 0x80227730: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_44;
    // 0x80227730: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_44:
    // 0x80227734: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x80227738: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022773C: bne         $v0, $zero, L_80227748
    if (ctx->r2 != 0) {
        // 0x80227740: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_80227748;
    }
    // 0x80227740: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80227744: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_80227748:
    // 0x80227748: sb          $v0, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r2;
    // 0x8022774C: addiu       $a0, $s3, 0x428
    ctx->r4 = ADD32(ctx->r19, 0X428);
    // 0x80227750: lbu         $v1, 0xBD($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XBD);
    // 0x80227754: addiu       $a1, $s3, 0x438
    ctx->r5 = ADD32(ctx->r19, 0X438);
    // 0x80227758: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022775C: sb          $v0, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r2;
    // 0x80227760: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227764: sb          $v0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r2;
    // 0x80227768: lui         $v0, 0xF5D7
    ctx->r2 = S32(0XF5D7 << 16);
    // 0x8022776C: sw          $v0, 0x428($s3)
    MEM_W(0X428, ctx->r19) = ctx->r2;
    // 0x80227770: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80227774: sw          $v0, 0x42C($s3)
    MEM_W(0X42C, ctx->r19) = ctx->r2;
    // 0x80227778: lui         $v0, 0x454
    ctx->r2 = S32(0X454 << 16);
    // 0x8022777C: sw          $v0, 0x430($s3)
    MEM_W(0X430, ctx->r19) = ctx->r2;
    // 0x80227780: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80227784: jal         0x8004DD04
    // 0x80227788: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    func_8004DD04_29104(rdram, ctx);
        goto after_45;
    // 0x80227788: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    after_45:
    // 0x8022778C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80227790: sh          $zero, 0x440($s3)
    MEM_H(0X440, ctx->r19) = 0;
    // 0x80227794: sh          $v0, 0x442($s3)
    MEM_H(0X442, ctx->r19) = ctx->r2;
    // 0x80227798: sh          $zero, 0x444($s3)
    MEM_H(0X444, ctx->r19) = 0;
    // 0x8022779C: sb          $zero, 0x448($s3)
    MEM_B(0X448, ctx->r19) = 0;
L_802277A0:
    // 0x802277A0: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x802277A4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x802277A8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802277AC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802277B0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802277B4: jr          $ra
    // 0x802277B8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x802277B8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8023539C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023539C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802353A0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802353A4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802353A8: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x802353AC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802353B0: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x802353B4: sltiu       $v0, $v1, 0x18
    ctx->r2 = ctx->r3 < 0X18 ? 1 : 0;
    // 0x802353B8: beq         $v0, $zero, L_8023540C
    if (ctx->r2 == 0) {
        // 0x802353BC: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8023540C;
    }
    // 0x802353BC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x802353C0: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x802353C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802353C8: jal         0x8002C678
    // 0x802353CC: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x802353CC: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    after_0:
    // 0x802353D0: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x802353D4: lui         $v1, 0x2AAA
    ctx->r3 = S32(0X2AAA << 16);
    // 0x802353D8: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x802353DC: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x802353E0: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802353E4: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x802353E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802353EC: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x802353F0: mfhi        $a2
    ctx->r6 = hi;
    // 0x802353F4: sra         $v0, $a2, 2
    ctx->r2 = S32(SIGNED(ctx->r6) >> 2);
    // 0x802353F8: nop

    // 0x802353FC: jal         0x800319B4
    // 0x80235400: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x80235400: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    after_1:
    // 0x80235404: j           L_80235414
    // 0x80235408: nop

        goto L_80235414;
    // 0x80235408: nop

L_8023540C:
    // 0x8023540C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235410: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80235414:
    // 0x80235414: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80235418: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8023541C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80235420: jr          $ra
    // 0x80235424: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80235424: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022DAE4_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DAE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022DAE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DAEC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DAF0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022DAF4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022DAF8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022DAFC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DB00: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022DB04: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022DB08: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x8022DB0C: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x8022DB10: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022DB14: jal         0x8022E444
    // 0x8022DB18: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    func_8022E444_ovl7(rdram, ctx);
        goto after_0;
    // 0x8022DB18: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022DB1C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022DB20: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022DB24: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022DB28: beq         $v0, $zero, L_8022DBBC
    if (ctx->r2 == 0) {
        // 0x8022DB2C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022DBBC;
    }
    // 0x8022DB2C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022DB30: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022DB34: jal         0x8022E3A8
    // 0x8022DB38: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    func_8022E3A8_ovl7(rdram, ctx);
        goto after_1;
    // 0x8022DB38: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022DB3C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022DB40: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022DB44: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x8022DB48: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022DB4C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022DB50: jal         0x8004F820
    // 0x8022DB54: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022DB54: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022DB58: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DB5C: bgez        $v0, L_8022DB88
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022DB60: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022DB88;
    }
    // 0x8022DB60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022DB64: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022DB68: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022DB6C: jal         0x8004F820
    // 0x8022DB70: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022DB70: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022DB74: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DB78: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022DB7C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022DB80: j           L_8022DBA0
    // 0x8022DB84: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_8022DBA0;
    // 0x8022DB84: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_8022DB88:
    // 0x8022DB88: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022DB8C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022DB90: jal         0x8004F820
    // 0x8022DB94: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x8022DB94: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_4:
    // 0x8022DB98: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DB9C: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_8022DBA0:
    // 0x8022DBA0: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x8022DBA4: sh          $v1, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r3;
    // 0x8022DBA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DBAC: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x8022DBB0: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022DBB4: j           L_8022DC04
    // 0x8022DBB8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
        goto L_8022DC04;
    // 0x8022DBB8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022DBBC:
    // 0x8022DBBC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022DBC0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022DBC4: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022DBC8: jal         0x8004F820
    // 0x8022DBCC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022DBCC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_5:
    // 0x8022DBD0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DBD4: slt         $v0, $zero, $v0
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022DBD8: beq         $v0, $zero, L_8022DBE8
    if (ctx->r2 == 0) {
        // 0x8022DBDC: sh          $v0, 0x34E($s0)
        MEM_H(0X34E, ctx->r16) = ctx->r2;
            goto L_8022DBE8;
    }
    // 0x8022DBDC: sh          $v0, 0x34E($s0)
    MEM_H(0X34E, ctx->r16) = ctx->r2;
    // 0x8022DBE0: j           L_8022DBEC
    // 0x8022DBE4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8022DBEC;
    // 0x8022DBE4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022DBE8:
    // 0x8022DBE8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022DBEC:
    // 0x8022DBEC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022DBF0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022DBF4: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x8022DBF8: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022DBFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DC00: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022DC04:
    // 0x8022DC04: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022DC08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DC0C: jal         0x800610AC
    // 0x8022DC10: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    func_800610AC_3C4AC(rdram, ctx);
        goto after_6;
    // 0x8022DC10: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_6:
    // 0x8022DC14: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022DC18: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022DC1C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022DC20: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DC24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DC28: jr          $ra
    // 0x8022DC2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022DC2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802268A0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802268A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802268A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802268A8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802268AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802268B0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802268B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802268B8: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x802268BC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802268C0: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x802268C4: sltiu       $v0, $v1, 0xC
    ctx->r2 = ctx->r3 < 0XC ? 1 : 0;
    // 0x802268C8: beq         $v0, $zero, L_80226C40
    if (ctx->r2 == 0) {
        // 0x802268CC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80226C40;
    }
    // 0x802268CC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802268D0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802268D4: addu        $at, $at, $v0
    gpr jr_addend_802268DC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802268D8: lw          $v0, -0x6410($at)
    ctx->r2 = ADD32(ctx->r1, -0X6410);
    // 0x802268DC: jr          $v0
    // 0x802268E0: nop

    switch (jr_addend_802268DC >> 2) {
        case 0: goto L_802268E4; break;
        case 1: goto L_802268F0; break;
        case 2: goto L_80226940; break;
        case 3: goto L_802269D4; break;
        case 4: goto L_80226A28; break;
        case 5: goto L_80226A7C; break;
        case 6: goto L_80226ABC; break;
        case 7: goto L_80226B0C; break;
        case 8: goto L_80226B68; break;
        case 9: goto L_80226BA8; break;
        case 10: goto L_80226BD4; break;
        case 11: goto L_80226C00; break;
        default: switch_error(__func__, 0x802268DC, 0x80239BF0);
    }
    // 0x802268E0: nop

L_802268E4:
    // 0x802268E4: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802268E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802268EC: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_802268F0:
    // 0x802268F0: jal         0x8006FF84
    // 0x802268F4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x802268F4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x802268F8: beq         $v0, $zero, L_80226C40
    if (ctx->r2 == 0) {
        // 0x802268FC: nop
    
            goto L_80226C40;
    }
    // 0x802268FC: nop

    // 0x80226900: jal         0x80060170
    // 0x80226904: nop

    func_80060170_3B570(rdram, ctx);
        goto after_1;
    // 0x80226904: nop

    after_1:
    // 0x80226908: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022690C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226910: jal         0x8005F6B4
    // 0x80226914: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_2;
    // 0x80226914: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80226918: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022691C: addiu       $v0, $v0, -0x7E38
    ctx->r2 = ADD32(ctx->r2, -0X7E38);
    // 0x80226920: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226924: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80226928: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8022692C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226930: addiu       $v1, $v1, -0x7E48
    ctx->r3 = ADD32(ctx->r3, -0X7E48);
    // 0x80226934: sw          $v1, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r3;
    // 0x80226938: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022693C: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_80226940:
    // 0x80226940: addiu       $a0, $s2, 0x428
    ctx->r4 = ADD32(ctx->r18, 0X428);
    // 0x80226944: lbu         $v1, 0xBD($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XBD);
    // 0x80226948: addiu       $a1, $s2, 0x438
    ctx->r5 = ADD32(ctx->r18, 0X438);
    // 0x8022694C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226950: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80226954: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80226958: lui         $v0, 0xEE18
    ctx->r2 = S32(0XEE18 << 16);
    // 0x8022695C: sw          $v0, 0x428($s2)
    MEM_W(0X428, ctx->r18) = ctx->r2;
    // 0x80226960: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80226964: sw          $v0, 0x42C($s2)
    MEM_W(0X42C, ctx->r18) = ctx->r2;
    // 0x80226968: lui         $v0, 0x597
    ctx->r2 = S32(0X597 << 16);
    // 0x8022696C: sb          $s0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r16;
    // 0x80226970: sw          $v0, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r2;
    // 0x80226974: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80226978: jal         0x8004DD04
    // 0x8022697C: sb          $v1, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r3;
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x8022697C: sb          $v1, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r3;
    after_3:
    // 0x80226980: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226984: lw          $v1, -0x3E80($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3E80);
    // 0x80226988: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022698C: sb          $v0, 0x448($s2)
    MEM_B(0X448, ctx->r18) = ctx->r2;
    // 0x80226990: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226994: sh          $zero, 0x440($s2)
    MEM_H(0X440, ctx->r18) = 0;
    // 0x80226998: sh          $zero, 0x442($s2)
    MEM_H(0X442, ctx->r18) = 0;
    // 0x8022699C: sh          $zero, 0x444($s2)
    MEM_H(0X444, ctx->r18) = 0;
    // 0x802269A0: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x802269A4: addiu       $v0, $zero, 0xE77
    ctx->r2 = ADD32(0, 0XE77);
    // 0x802269A8: sb          $zero, 0x8($v1)
    MEM_B(0X8, ctx->r3) = 0;
    // 0x802269AC: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x802269B0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802269B4: lw          $v1, -0x3E7C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3E7C);
    // 0x802269B8: addiu       $v0, $zero, 0xECE
    ctx->r2 = ADD32(0, 0XECE);
    // 0x802269BC: sb          $s0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r16;
    // 0x802269C0: sb          $zero, 0x8($v1)
    MEM_B(0X8, ctx->r3) = 0;
    // 0x802269C4: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x802269C8: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802269CC: j           L_80226BF8
    // 0x802269D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80226BF8;
    // 0x802269D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802269D4:
    // 0x802269D4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802269D8: lb          $v1, -0x3C17($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C17);
    // 0x802269DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802269E0: bne         $v1, $v0, L_80226C40
    if (ctx->r3 != ctx->r2) {
        // 0x802269E4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80226C40;
    }
    // 0x802269E4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802269E8: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802269EC: sb          $v1, 0x7($s1)
    MEM_B(0X7, ctx->r17) = ctx->r3;
    // 0x802269F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802269F4: jal         0x80060170
    // 0x802269F8: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    func_80060170_3B570(rdram, ctx);
        goto after_4;
    // 0x802269F8: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    after_4:
    // 0x802269FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226A00: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226A04: jal         0x8005F6B4
    // 0x80226A08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_5;
    // 0x80226A08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80226A0C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226A10: addiu       $v0, $v0, -0x7DC8
    ctx->r2 = ADD32(ctx->r2, -0X7DC8);
    // 0x80226A14: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226A18: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80226A1C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226A20: addiu       $v0, $v0, -0x7DF0
    ctx->r2 = ADD32(ctx->r2, -0X7DF0);
    // 0x80226A24: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
L_80226A28:
    // 0x80226A28: lw          $v0, 0xA4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA4);
    // 0x80226A2C: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x80226A30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226A34: bne         $v1, $v0, L_80226C40
    if (ctx->r3 != ctx->r2) {
        // 0x80226A38: addiu       $a1, $s2, 0x438
        ctx->r5 = ADD32(ctx->r18, 0X438);
            goto L_80226C40;
    }
    // 0x80226A38: addiu       $a1, $s2, 0x438
    ctx->r5 = ADD32(ctx->r18, 0X438);
    // 0x80226A3C: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80226A40: addiu       $a0, $s2, 0x428
    ctx->r4 = ADD32(ctx->r18, 0X428);
    // 0x80226A44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226A48: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x80226A4C: lui         $v0, 0xEE18
    ctx->r2 = S32(0XEE18 << 16);
    // 0x80226A50: sw          $v0, 0x428($s2)
    MEM_W(0X428, ctx->r18) = ctx->r2;
    // 0x80226A54: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80226A58: sw          $v0, 0x42C($s2)
    MEM_W(0X42C, ctx->r18) = ctx->r2;
    // 0x80226A5C: lui         $v0, 0x597
    ctx->r2 = S32(0X597 << 16);
    // 0x80226A60: jal         0x8004DD04
    // 0x80226A64: sw          $v0, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_6;
    // 0x80226A64: sw          $v0, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r2;
    after_6:
    // 0x80226A68: addiu       $v0, $zero, 0x4E7
    ctx->r2 = ADD32(0, 0X4E7);
    // 0x80226A6C: sh          $v0, 0x442($s2)
    MEM_H(0X442, ctx->r18) = ctx->r2;
    // 0x80226A70: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80226A74: j           L_80226C40
    // 0x80226A78: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
        goto L_80226C40;
    // 0x80226A78: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
L_80226A7C:
    // 0x80226A7C: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x80226A80: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226A84: bgez        $v0, L_80226C40
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226A88: sw          $v0, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->r2;
            goto L_80226C40;
    }
    // 0x80226A88: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x80226A8C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226A90: jal         0x800616FC
    // 0x80226A94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_7;
    // 0x80226A94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x80226A98: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80226A9C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226AA0: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x80226AA4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226AA8: lw          $v1, -0x3E7C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3E7C);
    // 0x80226AAC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226AB0: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226AB4: j           L_80226C40
    // 0x80226AB8: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
        goto L_80226C40;
    // 0x80226AB8: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
L_80226ABC:
    // 0x80226ABC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226AC0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80226AC4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80226AC8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226ACC: bne         $v0, $zero, L_80226BA8
    if (ctx->r2 != 0) {
        // 0x80226AD0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80226BA8;
    }
    // 0x80226AD0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226AD4: jal         0x800616FC
    // 0x80226AD8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_8;
    // 0x80226AD8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x80226ADC: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80226AE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226AE4: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x80226AE8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226AEC: lw          $v1, -0x3E80($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3E80);
    // 0x80226AF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226AF4: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226AF8: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
    // 0x80226AFC: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226B00: lw          $v1, -0x3E7C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3E7C);
    // 0x80226B04: sb          $zero, 0x9($v1)
    MEM_B(0X9, ctx->r3) = 0;
    // 0x80226B08: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
L_80226B0C:
    // 0x80226B0C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226B10: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80226B14: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80226B18: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226B1C: bne         $v0, $zero, L_80226BA8
    if (ctx->r2 != 0) {
        // 0x80226B20: nop
    
            goto L_80226BA8;
    }
    // 0x80226B20: nop

    // 0x80226B24: jal         0x800600F8
    // 0x80226B28: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_9;
    // 0x80226B28: nop

    after_9:
    // 0x80226B2C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226B30: jal         0x800616FC
    // 0x80226B34: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_10;
    // 0x80226B34: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_10:
    // 0x80226B38: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80226B3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226B40: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x80226B44: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226B48: lw          $v1, -0x3E80($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3E80);
    // 0x80226B4C: sb          $zero, 0x9($v1)
    MEM_B(0X9, ctx->r3) = 0;
    // 0x80226B50: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
    // 0x80226B54: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226B58: lw          $v1, -0x3E7C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3E7C);
    // 0x80226B5C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226B60: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226B64: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
L_80226B68:
    // 0x80226B68: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226B6C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80226B70: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80226B74: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226B78: bne         $v0, $zero, L_80226BA8
    if (ctx->r2 != 0) {
        // 0x80226B7C: nop
    
            goto L_80226BA8;
    }
    // 0x80226B7C: nop

    // 0x80226B80: jal         0x800600F8
    // 0x80226B84: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_11;
    // 0x80226B84: nop

    after_11:
    // 0x80226B88: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80226B8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226B90: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x80226B94: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226B98: lw          $v1, -0x3E7C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3E7C);
    // 0x80226B9C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226BA0: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226BA4: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
L_80226BA8:
    // 0x80226BA8: lw          $v0, 0xA4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA4);
    // 0x80226BAC: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80226BB0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226BB4: bne         $v1, $v0, L_80226C40
    if (ctx->r3 != ctx->r2) {
        // 0x80226BB8: nop
    
            goto L_80226C40;
    }
    // 0x80226BB8: nop

    // 0x80226BBC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226BC0: jal         0x800616FC
    // 0x80226BC4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_12;
    // 0x80226BC4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_12:
    // 0x80226BC8: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80226BCC: j           L_80226BF8
    // 0x80226BD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80226BF8;
    // 0x80226BD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80226BD4:
    // 0x80226BD4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226BD8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80226BDC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80226BE0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226BE4: bne         $v0, $zero, L_80226C40
    if (ctx->r2 != 0) {
        // 0x80226BE8: addiu       $v1, $zero, 0x8
        ctx->r3 = ADD32(0, 0X8);
            goto L_80226C40;
    }
    // 0x80226BE8: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80226BEC: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80226BF0: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
    // 0x80226BF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80226BF8:
    // 0x80226BF8: j           L_80226C40
    // 0x80226BFC: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
        goto L_80226C40;
    // 0x80226BFC: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_80226C00:
    // 0x80226C00: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x80226C04: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226C08: bne         $v0, $zero, L_80226C40
    if (ctx->r2 != 0) {
        // 0x80226C0C: sw          $v0, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->r2;
            goto L_80226C40;
    }
    // 0x80226C0C: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x80226C10: jal         0x80070050
    // 0x80226C14: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_13;
    // 0x80226C14: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_13:
    // 0x80226C18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226C1C: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x80226C20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C24: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    // 0x80226C28: jal         0x8006036C
    // 0x80226C2C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8006036C_3B76C(rdram, ctx);
        goto after_14;
    // 0x80226C2C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_14:
    // 0x80226C30: jal         0x802284F8
    // 0x80226C34: nop

    func_802284F8_ovl7(rdram, ctx);
        goto after_15;
    // 0x80226C34: nop

    after_15:
    // 0x80226C38: jal         0x802283FC
    // 0x80226C3C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_802283FC_ovl7(rdram, ctx);
        goto after_16;
    // 0x80226C3C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_16:
L_80226C40:
    // 0x80226C40: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80226C44: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80226C48: bne         $v0, $zero, L_80226C6C
    if (ctx->r2 != 0) {
        // 0x80226C4C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80226C6C;
    }
    // 0x80226C4C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226C50: lw          $a0, 0xA4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XA4);
    // 0x80226C54: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80226C58: beq         $v1, $v0, L_80226C6C
    if (ctx->r3 == ctx->r2) {
        // 0x80226C5C: nop
    
            goto L_80226C6C;
    }
    // 0x80226C5C: nop

    // 0x80226C60: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80226C64: jalr        $v0
    // 0x80226C68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_17;
    // 0x80226C68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_17:
L_80226C6C:
    // 0x80226C6C: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80226C70: addiu       $v0, $v0, -0x3
    ctx->r2 = ADD32(ctx->r2, -0X3);
    // 0x80226C74: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x80226C78: beq         $v0, $zero, L_80226D0C
    if (ctx->r2 == 0) {
        // 0x80226C7C: nop
    
            goto L_80226D0C;
    }
    // 0x80226C7C: nop

    // 0x80226C80: jal         0x8006072C
    // 0x80226C84: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_18;
    // 0x80226C84: nop

    after_18:
    // 0x80226C88: beq         $v0, $zero, L_80226D0C
    if (ctx->r2 == 0) {
        // 0x80226C8C: nop
    
            goto L_80226D0C;
    }
    // 0x80226C8C: nop

    // 0x80226C90: jal         0x80061724
    // 0x80226C94: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_19;
    // 0x80226C94: nop

    after_19:
    // 0x80226C98: jal         0x80061090
    // 0x80226C9C: nop

    func_80061090_3C490(rdram, ctx);
        goto after_20;
    // 0x80226C9C: nop

    after_20:
    // 0x80226CA0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226CA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226CA8: jal         0x80036B00
    // 0x80226CAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_21;
    // 0x80226CAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_21:
    // 0x80226CB0: jal         0x8002A488
    // 0x80226CB4: nop

    func_8002A488_5888(rdram, ctx);
        goto after_22;
    // 0x80226CB4: nop

    after_22:
    // 0x80226CB8: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    // 0x80226CBC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226CC0: jal         0x8002A2F8
    // 0x80226CC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_23;
    // 0x80226CC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_23:
    // 0x80226CC8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80226CCC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80226CD0: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x80226CD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226CD8: jal         0x8006036C
    // 0x80226CDC: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_24;
    // 0x80226CDC: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    after_24:
    // 0x80226CE0: addiu       $a0, $s2, 0x428
    ctx->r4 = ADD32(ctx->r18, 0X428);
    // 0x80226CE4: addiu       $a1, $s2, 0x438
    ctx->r5 = ADD32(ctx->r18, 0X438);
    // 0x80226CE8: lui         $v0, 0xEE18
    ctx->r2 = S32(0XEE18 << 16);
    // 0x80226CEC: sw          $v0, 0x428($s2)
    MEM_W(0X428, ctx->r18) = ctx->r2;
    // 0x80226CF0: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80226CF4: sw          $v0, 0x42C($s2)
    MEM_W(0X42C, ctx->r18) = ctx->r2;
    // 0x80226CF8: lui         $v0, 0x597
    ctx->r2 = S32(0X597 << 16);
    // 0x80226CFC: jal         0x8004DD04
    // 0x80226D00: sw          $v0, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_25;
    // 0x80226D00: sw          $v0, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r2;
    after_25:
    // 0x80226D04: addiu       $v0, $zero, 0x4E7
    ctx->r2 = ADD32(0, 0X4E7);
    // 0x80226D08: sh          $v0, 0x442($s2)
    MEM_H(0X442, ctx->r18) = ctx->r2;
L_80226D0C:
    // 0x80226D0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226D10: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226D14: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226D18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226D1C: jr          $ra
    // 0x80226D20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226D20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802330A4_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802330A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802330A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802330AC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802330B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802330B4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802330B8: jal         0x8003E934
    // 0x802330BC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x802330BC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x802330C0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802330C4: andi        $s0, $s0, 0x1000
    ctx->r16 = ctx->r16 & 0X1000;
    // 0x802330C8: bne         $s0, $zero, L_80233104
    if (ctx->r16 != 0) {
        // 0x802330CC: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_80233104;
    }
    // 0x802330CC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x802330D0: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x802330D4: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x802330D8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802330DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802330E0: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    // 0x802330E4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802330E8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802330EC: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x802330F0: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x802330F4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802330F8: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802330FC: beq         $v0, $zero, L_8023310C
    if (ctx->r2 == 0) {
        // 0x80233100: nop
    
            goto L_8023310C;
    }
    // 0x80233100: nop

L_80233104:
    // 0x80233104: sh          $a1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r5;
    // 0x80233108: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
L_8023310C:
    // 0x8023310C: lh          $v0, 0x16($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X16);
    // 0x80233110: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233114: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80233118: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023311C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233120: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233124: jr          $ra
    // 0x80233128: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233128: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D62C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D62C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D630: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D634: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D638: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D63C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D640: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022D644: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022D648: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022D64C: jal         0x8004F820
    // 0x8022D650: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022D650: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022D654: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D658: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x8022D65C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D660: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022D664: bgez        $a0, L_8022D688
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8022D668: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022D688;
    }
    // 0x8022D668: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022D66C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D670: jal         0x8022E3A8
    // 0x8022D674: nop

    func_8022E3A8_ovl7(rdram, ctx);
        goto after_1;
    // 0x8022D674: nop

    after_1:
    // 0x8022D678: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022D67C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D680: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022D684: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_8022D688:
    // 0x8022D688: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022D68C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022D690: bne         $v0, $zero, L_8022D6B4
    if (ctx->r2 != 0) {
        // 0x8022D694: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022D6B4;
    }
    // 0x8022D694: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022D698: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D69C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022D6A0: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x8022D6A4: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022D6A8: jal         0x8022E3A8
    // 0x8022D6AC: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    func_8022E3A8_ovl7(rdram, ctx);
        goto after_2;
    // 0x8022D6AC: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022D6B0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022D6B4:
    // 0x8022D6B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D6B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D6BC: jr          $ra
    // 0x8022D6C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D6C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802294A0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802294A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802294A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802294A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802294AC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802294B0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802294B4: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x802294B8: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x802294BC: addiu       $s1, $s1, -0x3A50
    ctx->r17 = ADD32(ctx->r17, -0X3A50);
    // 0x802294C0: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x802294C4: beq         $v0, $zero, L_80229634
    if (ctx->r2 == 0) {
        // 0x802294C8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80229634;
    }
    // 0x802294C8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802294CC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802294D0: addu        $at, $at, $v0
    gpr jr_addend_802294D8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802294D4: lw          $v0, -0x62B8($at)
    ctx->r2 = ADD32(ctx->r1, -0X62B8);
    // 0x802294D8: jr          $v0
    // 0x802294DC: nop

    switch (jr_addend_802294D8 >> 2) {
        case 0: goto L_802294E0; break;
        case 1: goto L_80229548; break;
        case 2: goto L_80229580; break;
        case 3: goto L_8022960C; break;
        case 4: goto L_80229598; break;
        case 5: goto L_802295E0; break;
        case 6: goto L_8022960C; break;
        default: switch_error(__func__, 0x802294D8, 0x80239D48);
    }
    // 0x802294DC: nop

L_802294E0:
    // 0x802294E0: addiu       $v0, $zero, 0x16F7
    ctx->r2 = ADD32(0, 0X16F7);
    // 0x802294E4: sh          $v0, 0x438($s0)
    MEM_H(0X438, ctx->r16) = ctx->r2;
    // 0x802294E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802294EC: sh          $v0, 0x43A($s0)
    MEM_H(0X43A, ctx->r16) = ctx->r2;
    // 0x802294F0: addiu       $v0, $zero, 0x4E9A
    ctx->r2 = ADD32(0, 0X4E9A);
    // 0x802294F4: sh          $v0, 0x43C($s0)
    MEM_H(0X43C, ctx->r16) = ctx->r2;
    // 0x802294F8: addiu       $v0, $zero, 0xC1C
    ctx->r2 = ADD32(0, 0XC1C);
    // 0x802294FC: sh          $v0, 0x442($s0)
    MEM_H(0X442, ctx->r16) = ctx->r2;
    // 0x80229500: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80229504: sb          $v0, 0x448($s0)
    MEM_B(0X448, ctx->r16) = ctx->r2;
    // 0x80229508: lh          $v0, 0x438($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X438);
    // 0x8022950C: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x80229510: lh          $v1, 0x43A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X43A);
    // 0x80229514: lh          $a0, 0x43C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X43C);
    // 0x80229518: sh          $zero, 0x440($s0)
    MEM_H(0X440, ctx->r16) = 0;
    // 0x8022951C: sh          $zero, 0x444($s0)
    MEM_H(0X444, ctx->r16) = 0;
    // 0x80229520: sw          $zero, 0x184($s0)
    MEM_W(0X184, ctx->r16) = 0;
    // 0x80229524: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80229528: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022952C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80229530: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80229534: sw          $v0, 0x428($s0)
    MEM_W(0X428, ctx->r16) = ctx->r2;
    // 0x80229538: sw          $v1, 0x42C($s0)
    MEM_W(0X42C, ctx->r16) = ctx->r3;
    // 0x8022953C: sw          $a0, 0x430($s0)
    MEM_W(0X430, ctx->r16) = ctx->r4;
    // 0x80229540: j           L_80229634
    // 0x80229544: sb          $a1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r5;
        goto L_80229634;
    // 0x80229544: sb          $a1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r5;
L_80229548:
    // 0x80229548: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8022954C: lw          $a1, -0x3A28($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3A28);
    // 0x80229550: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229554: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229558: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022955C: jal         0x8004F820
    // 0x80229560: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80229560: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x80229564: lbu         $a0, 0xD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XD);
    // 0x80229568: lhu         $v1, 0x442($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X442);
    // 0x8022956C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80229570: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229574: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229578: sh          $v1, 0x442($s0)
    MEM_H(0X442, ctx->r16) = ctx->r3;
    // 0x8022957C: sb          $a0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r4;
L_80229580:
    // 0x80229580: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80229584: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229588: bne         $v1, $v0, L_80229634
    if (ctx->r3 != ctx->r2) {
        // 0x8022958C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80229634;
    }
    // 0x8022958C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229590: j           L_802295F4
    // 0x80229594: addiu       $a1, $zero, 0xB3
    ctx->r5 = ADD32(0, 0XB3);
        goto L_802295F4;
    // 0x80229594: addiu       $a1, $zero, 0xB3
    ctx->r5 = ADD32(0, 0XB3);
L_80229598:
    // 0x80229598: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8022959C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802295A0: bne         $v1, $v0, L_80229634
    if (ctx->r3 != ctx->r2) {
        // 0x802295A4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80229634;
    }
    // 0x802295A4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802295A8: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x802295AC: lw          $a1, -0x3A2C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3A2C);
    // 0x802295B0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802295B4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x802295B8: jal         0x8004F820
    // 0x802295BC: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x802295BC: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_1:
    // 0x802295C0: lbu         $a0, 0xD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XD);
    // 0x802295C4: lhu         $v1, 0x442($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X442);
    // 0x802295C8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802295CC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802295D0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802295D4: sh          $v1, 0x442($s0)
    MEM_H(0X442, ctx->r16) = ctx->r3;
    // 0x802295D8: j           L_80229634
    // 0x802295DC: sb          $a0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r4;
        goto L_80229634;
    // 0x802295DC: sb          $a0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r4;
L_802295E0:
    // 0x802295E0: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x802295E4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802295E8: bne         $v1, $v0, L_80229634
    if (ctx->r3 != ctx->r2) {
        // 0x802295EC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80229634;
    }
    // 0x802295EC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802295F0: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
L_802295F4:
    // 0x802295F4: jal         0x800616FC
    // 0x802295F8: nop

    func_800616FC_3CAFC(rdram, ctx);
        goto after_2;
    // 0x802295F8: nop

    after_2:
    // 0x802295FC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80229600: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229604: j           L_80229634
    // 0x80229608: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_80229634;
    // 0x80229608: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_8022960C:
    // 0x8022960C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229610: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80229614: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80229618: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022961C: bne         $v0, $zero, L_80229634
    if (ctx->r2 != 0) {
        // 0x80229620: nop
    
            goto L_80229634;
    }
    // 0x80229620: nop

    // 0x80229624: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80229628: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022962C: jal         0x800600F8
    // 0x80229630: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_3;
    // 0x80229630: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    after_3:
L_80229634:
    // 0x80229634: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229638: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022963C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229640: jr          $ra
    // 0x80229644: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229644: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231014_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231014: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80231018: bne         $v0, $zero, L_80231028
    if (ctx->r2 != 0) {
        // 0x8023101C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80231028;
    }
    // 0x8023101C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231020: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80231024: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_80231028:
    // 0x80231028: jr          $ra
    // 0x8023102C: nop

    TRACE_RETURN()
    return;
    // 0x8023102C: nop

;}
RECOMP_FUNC void func_8022E090_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E090: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E094: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E098: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022E09C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E0A0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E0A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E0A8: lw          $v0, -0x6D88($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6D88);
    // 0x8022E0AC: jalr        $v0
    // 0x8022E0B0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E0B0: nop

    after_0:
    // 0x8022E0B4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E0B8: jr          $ra
    // 0x8022E0BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E0BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232258_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232258: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023225C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80232260: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232264: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80232268: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8023226C: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80232270: jal         0x8004DA90
    // 0x80232274: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80232274: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80232278: jal         0x8003E810
    // 0x8023227C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8003E810_19C10(rdram, ctx);
        goto after_1;
    // 0x8023227C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80232280: beq         $v0, $zero, L_80232298
    if (ctx->r2 == 0) {
        // 0x80232284: nop
    
            goto L_80232298;
    }
    // 0x80232284: nop

    // 0x80232288: jal         0x8004F418
    // 0x8023228C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_2;
    // 0x8023228C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80232290: j           L_80232320
    // 0x80232294: nop

        goto L_80232320;
    // 0x80232294: nop

L_80232298:
    // 0x80232298: jal         0x8003E934
    // 0x8023229C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8023229C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802322A0: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x802322A4: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x802322A8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802322AC: lh          $a3, 0x16($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X16);
    // 0x802322B0: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x802322B4: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802322B8: addiu       $v0, $a0, -0x64
    ctx->r2 = ADD32(ctx->r4, -0X64);
    // 0x802322BC: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x802322C0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x802322C4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802322C8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802322CC: lhu         $v1, -0x6C20($at)
    ctx->r3 = MEM_HU(ctx->r1, -0X6C20);
    // 0x802322D0: slt         $v0, $v0, $a3
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x802322D4: beq         $v0, $zero, L_802322F4
    if (ctx->r2 == 0) {
        // 0x802322D8: addu        $a2, $a3, $zero
        ctx->r6 = ADD32(ctx->r7, 0);
            goto L_802322F4;
    }
    // 0x802322D8: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x802322DC: addiu       $v0, $v1, -0x64
    ctx->r2 = ADD32(ctx->r3, -0X64);
    // 0x802322E0: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x802322E4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802322E8: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x802322EC: j           L_80232320
    // 0x802322F0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_80232320;
    // 0x802322F0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_802322F4:
    // 0x802322F4: addiu       $v0, $a0, -0x190
    ctx->r2 = ADD32(ctx->r4, -0X190);
    // 0x802322F8: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802322FC: beq         $v0, $zero, L_80232318
    if (ctx->r2 == 0) {
        // 0x80232300: addiu       $v0, $v1, -0x190
        ctx->r2 = ADD32(ctx->r3, -0X190);
            goto L_80232318;
    }
    // 0x80232300: addiu       $v0, $v1, -0x190
    ctx->r2 = ADD32(ctx->r3, -0X190);
    // 0x80232304: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80232308: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8023230C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80232310: j           L_80232320
    // 0x80232314: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_80232320;
    // 0x80232314: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_80232318:
    // 0x80232318: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x8023231C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
L_80232320:
    // 0x80232320: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80232324: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80232328: jr          $ra
    // 0x8023232C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023232C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D158_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D158: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022D15C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022D160: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D164: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022D168: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x8022D16C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022D170: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022D174: jal         0x8022E444
    // 0x8022D178: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8022E444_ovl7(rdram, ctx);
        goto after_0;
    // 0x8022D178: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022D17C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022D180: beq         $v0, $zero, L_8022D1B0
    if (ctx->r2 == 0) {
        // 0x8022D184: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_8022D1B0;
    }
    // 0x8022D184: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022D188: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D18C: bne         $v1, $v0, L_8022D2D8
    if (ctx->r3 != ctx->r2) {
        // 0x8022D190: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D2D8;
    }
    // 0x8022D190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D194: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D198: lbu         $a0, 0xAC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D19C: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022D1A0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022D1A4: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022D1A8: j           L_8022D2DC
    // 0x8022D1AC: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
        goto L_8022D2DC;
    // 0x8022D1AC: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
L_8022D1B0:
    // 0x8022D1B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D1B4: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022D1B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D1BC: jal         0x8004DA90
    // 0x8022D1C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022D1C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022D1C4: lh          $a3, 0x354($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X354);
    // 0x8022D1C8: lh          $a2, 0x35C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X35C);
    // 0x8022D1CC: lh          $a1, 0x14($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X14);
    // 0x8022D1D0: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x8022D1D4: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x8022D1D8: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022D1DC: beq         $v0, $zero, L_8022D1EC
    if (ctx->r2 == 0) {
        // 0x8022D1E0: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8022D1EC;
    }
    // 0x8022D1E0: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x8022D1E4: j           L_8022D1FC
    // 0x8022D1E8: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
        goto L_8022D1FC;
    // 0x8022D1E8: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
L_8022D1EC:
    // 0x8022D1EC: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x8022D1F0: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022D1F4: beq         $v0, $zero, L_8022D22C
    if (ctx->r2 == 0) {
        // 0x8022D1F8: subu        $v0, $a0, $v1
        ctx->r2 = SUB32(ctx->r4, ctx->r3);
            goto L_8022D22C;
    }
    // 0x8022D1F8: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
L_8022D1FC:
    // 0x8022D1FC: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D200: lhu         $v1, 0x350($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X350);
    // 0x8022D204: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022D208: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022D20C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D210: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D214: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022D218: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022D21C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022D220: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x8022D224: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022D228: sh          $v1, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r3;
L_8022D22C:
    // 0x8022D22C: lh          $a3, 0x10($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X10);
    // 0x8022D230: lh          $a2, 0x16($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X16);
    // 0x8022D234: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8022D238: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x8022D23C: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x8022D240: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022D244: beq         $v0, $zero, L_8022D258
    if (ctx->r2 == 0) {
        // 0x8022D248: addu        $a0, $a2, $zero
        ctx->r4 = ADD32(ctx->r6, 0);
            goto L_8022D258;
    }
    // 0x8022D248: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x8022D24C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D250: j           L_8022D26C
    // 0x8022D254: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
        goto L_8022D26C;
    // 0x8022D254: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
L_8022D258:
    // 0x8022D258: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x8022D25C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022D260: beq         $v0, $zero, L_8022D29C
    if (ctx->r2 == 0) {
        // 0x8022D264: subu        $v0, $a1, $a0
        ctx->r2 = SUB32(ctx->r5, ctx->r4);
            goto L_8022D29C;
    }
    // 0x8022D264: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x8022D268: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
L_8022D26C:
    // 0x8022D26C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022D270: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022D274: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D278: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022D27C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D280: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D284: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022D288: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022D28C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022D290: sh          $v1, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r3;
    // 0x8022D294: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x8022D298: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
L_8022D29C:
    // 0x8022D29C: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022D2A0: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022D2A4: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022D2A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D2AC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022D2B0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022D2B4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022D2B8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022D2BC: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022D2C0: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022D2C4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D2C8: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022D2CC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D2D0: bne         $v0, $zero, L_8022D2DC
    if (ctx->r2 != 0) {
        // 0x8022D2D4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D2DC;
    }
    // 0x8022D2D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022D2D8:
    // 0x8022D2D8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022D2DC:
    // 0x8022D2DC: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022D2E0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022D2E4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022D2E8: jr          $ra
    // 0x8022D2EC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022D2EC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80232D8C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232D8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80232D90: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80232D94: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80232D98: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80232D9C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80232DA0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80232DA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232DA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232DAC: lbu         $v1, 0x9($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X9);
    // 0x80232DB0: lui         $s4, 0x8020
    ctx->r20 = S32(0X8020 << 16);
    // 0x80232DB4: addiu       $s4, $s4, 0x49B0
    ctx->r20 = ADD32(ctx->r20, 0X49B0);
    // 0x80232DB8: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80232DBC: beq         $v0, $zero, L_80232F5C
    if (ctx->r2 == 0) {
        // 0x80232DC0: addiu       $s3, $s2, 0x348
        ctx->r19 = ADD32(ctx->r18, 0X348);
            goto L_80232F5C;
    }
    // 0x80232DC0: addiu       $s3, $s2, 0x348
    ctx->r19 = ADD32(ctx->r18, 0X348);
    // 0x80232DC4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80232DC8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232DCC: addu        $at, $at, $v0
    gpr jr_addend_80232DD4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232DD0: lw          $v0, -0x5FB0($at)
    ctx->r2 = ADD32(ctx->r1, -0X5FB0);
    // 0x80232DD4: jr          $v0
    // 0x80232DD8: nop

    switch (jr_addend_80232DD4 >> 2) {
        case 0: goto L_80232DDC; break;
        case 1: goto L_80232E08; break;
        case 2: goto L_80232E1C; break;
        case 3: goto L_80232ED8; break;
        case 4: goto L_80232EFC; break;
        default: switch_error(__func__, 0x80232DD4, 0x8023A050);
    }
    // 0x80232DD8: nop

L_80232DDC:
    // 0x80232DDC: jal         0x8006FF84
    // 0x80232DE0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80232DE0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_0:
    // 0x80232DE4: beq         $v0, $zero, L_80232F5C
    if (ctx->r2 == 0) {
        // 0x80232DE8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80232F5C;
    }
    // 0x80232DE8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80232DEC: sb          $v0, 0x8($s4)
    MEM_B(0X8, ctx->r20) = ctx->r2;
    // 0x80232DF0: sb          $zero, 0x9($s4)
    MEM_B(0X9, ctx->r20) = 0;
    // 0x80232DF4: sw          $zero, 0xC($s4)
    MEM_W(0XC, ctx->r20) = 0;
    // 0x80232DF8: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x80232DFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232E00: j           L_80232F5C
    // 0x80232E04: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
        goto L_80232F5C;
    // 0x80232E04: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_80232E08:
    // 0x80232E08: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80232E0C: sb          $v0, 0x448($s4)
    MEM_B(0X448, ctx->r20) = ctx->r2;
    // 0x80232E10: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x80232E14: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232E18: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_80232E1C:
    // 0x80232E1C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80232E20: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80232E24: bne         $v0, $zero, L_80232F5C
    if (ctx->r2 != 0) {
        // 0x80232E28: addiu       $s1, $s2, 0x14
        ctx->r17 = ADD32(ctx->r18, 0X14);
            goto L_80232F5C;
    }
    // 0x80232E28: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x80232E2C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80232E30: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80232E34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232E38: jal         0x800610AC
    // 0x80232E3C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x80232E3C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_1:
    // 0x80232E40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80232E44: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    // 0x80232E48: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x80232E4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80232E50: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80232E54: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x80232E58: addiu       $v0, $zero, 0xA8C
    ctx->r2 = ADD32(0, 0XA8C);
    // 0x80232E5C: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x80232E60: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x80232E64: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80232E68: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
    // 0x80232E6C: jal         0x8009A3B4
    // 0x80232E70: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80232E70: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    after_2:
    // 0x80232E74: addiu       $s0, $s2, 0x2C
    ctx->r16 = ADD32(ctx->r18, 0X2C);
    // 0x80232E78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232E7C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80232E80: jal         0x8009A3B4
    // 0x80232E84: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80232E84: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80232E88: addiu       $a0, $s3, 0x24
    ctx->r4 = ADD32(ctx->r19, 0X24);
    // 0x80232E8C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80232E90: jal         0x8009A3B4
    // 0x80232E94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80232E94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80232E98: addiu       $s0, $s2, 0x1C
    ctx->r16 = ADD32(ctx->r18, 0X1C);
    // 0x80232E9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232EA0: addiu       $a1, $s4, 0x1C
    ctx->r5 = ADD32(ctx->r20, 0X1C);
    // 0x80232EA4: jal         0x8009A3B4
    // 0x80232EA8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80232EA8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x80232EAC: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x80232EB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80232EB4: jal         0x8009A3B4
    // 0x80232EB8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80232EB8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x80232EBC: lbu         $v1, 0x9($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X9);
    // 0x80232EC0: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x80232EC4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80232EC8: addiu       $v0, $v0, -0x32
    ctx->r2 = ADD32(ctx->r2, -0X32);
    // 0x80232ECC: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    // 0x80232ED0: j           L_80232F5C
    // 0x80232ED4: sb          $v1, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r3;
        goto L_80232F5C;
    // 0x80232ED4: sb          $v1, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r3;
L_80232ED8:
    // 0x80232ED8: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x80232EDC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80232EE0: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x80232EE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232EE8: bnel        $v0, $zero, L_80232F00
    if (ctx->r2 != 0) {
        // 0x80232EEC: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80232F00;
    }
    goto skip_0;
    // 0x80232EEC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x80232EF0: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x80232EF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232EF8: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_80232EFC:
    // 0x80232EFC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_80232F00:
    // 0x80232F00: lh          $a1, 0x44($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X44);
    // 0x80232F04: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232F08: jal         0x8004DA90
    // 0x80232F0C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_7;
    // 0x80232F0C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
    // 0x80232F10: jal         0x80040F30
    // 0x80232F14: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_8;
    // 0x80232F14: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_8:
    // 0x80232F18: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80232F1C: jal         0x802330A4
    // 0x80232F20: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_802330A4_ovl7(rdram, ctx);
        goto after_9;
    // 0x80232F20: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_9:
    // 0x80232F24: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80232F28: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80232F2C: bne         $v0, $zero, L_80232F5C
    if (ctx->r2 != 0) {
        // 0x80232F30: nop
    
            goto L_80232F5C;
    }
    // 0x80232F30: nop

    // 0x80232F34: jal         0x80070050
    // 0x80232F38: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_10;
    // 0x80232F38: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_10:
    // 0x80232F3C: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x80232F40: addiu       $a0, $zero, 0x239
    ctx->r4 = ADD32(0, 0X239);
    // 0x80232F44: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80232F48: jal         0x8006036C
    // 0x80232F4C: sb          $v0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_11;
    // 0x80232F4C: sb          $v0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r2;
    after_11:
    // 0x80232F50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232F54: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80232F58: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
L_80232F5C:
    // 0x80232F5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80232F60: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80232F64: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80232F68: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80232F6C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232F70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232F74: jr          $ra
    // 0x80232F78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80232F78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802277BC_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802277BC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802277C0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802277C4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802277C8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x802277CC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802277D0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802277D4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802277D8: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x802277DC: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x802277E0: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x802277E4: sltiu       $v0, $v1, 0x12
    ctx->r2 = ctx->r3 < 0X12 ? 1 : 0;
    // 0x802277E8: beq         $v0, $zero, L_80227DF0
    if (ctx->r2 == 0) {
        // 0x802277EC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80227DF0;
    }
    // 0x802277EC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802277F0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802277F4: addu        $at, $at, $v0
    gpr jr_addend_802277FC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802277F8: lw          $v0, -0x6388($at)
    ctx->r2 = ADD32(ctx->r1, -0X6388);
    // 0x802277FC: jr          $v0
    // 0x80227800: nop

    switch (jr_addend_802277FC >> 2) {
        case 0: goto L_80227804; break;
        case 1: goto L_80227880; break;
        case 2: goto L_802278AC; break;
        case 3: goto L_80227988; break;
        case 4: goto L_802279C0; break;
        case 5: goto L_802279F0; break;
        case 6: goto L_80227A2C; break;
        case 7: goto L_80227A50; break;
        case 8: goto L_80227AD8; break;
        case 9: goto L_80227B1C; break;
        case 10: goto L_80227B5C; break;
        case 11: goto L_80227C14; break;
        case 12: goto L_80227C40; break;
        case 13: goto L_80227C94; break;
        case 14: goto L_80227CBC; break;
        case 15: goto L_80227CE4; break;
        case 16: goto L_80227D68; break;
        case 17: goto L_80227DA4; break;
        default: switch_error(__func__, 0x802277FC, 0x80239C78);
    }
    // 0x80227800: nop

L_80227804:
    // 0x80227804: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x80227808: lw          $s2, -0x3E80($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X3E80);
    // 0x8022780C: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x80227810: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227814: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80227818: jal         0x8009A3B4
    // 0x8022781C: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022781C: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_0:
    // 0x80227820: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x80227824: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80227828: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x8022782C: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x80227830: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80227834: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x80227838: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022783C: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x80227840: jal         0x8004EC38
    // 0x80227844: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x80227844: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x80227848: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022784C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80227850: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x80227854: addiu       $a1, $zero, 0x140
    ctx->r5 = ADD32(0, 0X140);
    // 0x80227858: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022785C: jal         0x8003501C
    // 0x80227860: addiu       $a3, $a3, -0x30
    ctx->r7 = ADD32(ctx->r7, -0X30);
    func_8003501C_1041C(rdram, ctx);
        goto after_2;
    // 0x80227860: addiu       $a3, $a3, -0x30
    ctx->r7 = ADD32(ctx->r7, -0X30);
    after_2:
    // 0x80227864: lbu         $v0, 0xBD($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XBD);
    // 0x80227868: lbu         $v1, 0x0($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X0);
    // 0x8022786C: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80227870: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80227874: sb          $v0, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r2;
    // 0x80227878: j           L_80227D58
    // 0x8022787C: sb          $v1, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r3;
        goto L_80227D58;
    // 0x8022787C: sb          $v1, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r3;
L_80227880:
    // 0x80227880: jal         0x8003516C
    // 0x80227884: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_3;
    // 0x80227884: nop

    after_3:
    // 0x80227888: bne         $v0, $zero, L_80227DF0
    if (ctx->r2 != 0) {
        // 0x8022788C: addiu       $a1, $zero, 0x5F
        ctx->r5 = ADD32(0, 0X5F);
            goto L_80227DF0;
    }
    // 0x8022788C: addiu       $a1, $zero, 0x5F
    ctx->r5 = ADD32(0, 0X5F);
    // 0x80227890: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80227894: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227898: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022789C: jal         0x800616FC
    // 0x802278A0: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x802278A0: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    after_4:
    // 0x802278A4: j           L_80227DF0
    // 0x802278A8: nop

        goto L_80227DF0;
    // 0x802278A8: nop

L_802278AC:
    // 0x802278AC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802278B0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802278B4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802278B8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802278BC: bne         $v0, $zero, L_80227DF0
    if (ctx->r2 != 0) {
        // 0x802278C0: nop
    
            goto L_80227DF0;
    }
    // 0x802278C0: nop

    // 0x802278C4: jal         0x8006FF84
    // 0x802278C8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_5;
    // 0x802278C8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_5:
    // 0x802278CC: beq         $v0, $zero, L_80227DF0
    if (ctx->r2 == 0) {
        // 0x802278D0: nop
    
            goto L_80227DF0;
    }
    // 0x802278D0: nop

    // 0x802278D4: jal         0x80034E74
    // 0x802278D8: nop

    func_80034E74_10274(rdram, ctx);
        goto after_6;
    // 0x802278D8: nop

    after_6:
    // 0x802278DC: jal         0x80060170
    // 0x802278E0: nop

    func_80060170_3B570(rdram, ctx);
        goto after_7;
    // 0x802278E0: nop

    after_7:
    // 0x802278E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802278E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802278EC: jal         0x8005F6B4
    // 0x802278F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_8;
    // 0x802278F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_8:
    // 0x802278F4: addiu       $a0, $s3, 0x428
    ctx->r4 = ADD32(ctx->r19, 0X428);
    // 0x802278F8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802278FC: addiu       $v0, $v0, -0x79B0
    ctx->r2 = ADD32(ctx->r2, -0X79B0);
    // 0x80227900: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80227904: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80227908: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022790C: addiu       $v0, $v0, -0x79D0
    ctx->r2 = ADD32(ctx->r2, -0X79D0);
    // 0x80227910: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    // 0x80227914: lbu         $v1, 0x0($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X0);
    // 0x80227918: lbu         $a2, 0xBD($s3)
    ctx->r6 = MEM_BU(ctx->r19, 0XBD);
    // 0x8022791C: addiu       $a1, $s3, 0x438
    ctx->r5 = ADD32(ctx->r19, 0X438);
    // 0x80227920: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227924: sb          $v0, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r2;
    // 0x80227928: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022792C: sb          $v0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r2;
    // 0x80227930: lui         $v0, 0x18BD
    ctx->r2 = S32(0X18BD << 16);
    // 0x80227934: sw          $v0, 0x428($s3)
    MEM_W(0X428, ctx->r19) = ctx->r2;
    // 0x80227938: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8022793C: sw          $v0, 0x42C($s3)
    MEM_W(0X42C, ctx->r19) = ctx->r2;
    // 0x80227940: lui         $v0, 0x5029
    ctx->r2 = S32(0X5029 << 16);
    // 0x80227944: sw          $v0, 0x430($s3)
    MEM_W(0X430, ctx->r19) = ctx->r2;
    // 0x80227948: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022794C: ori         $a2, $a2, 0x10
    ctx->r6 = ctx->r6 | 0X10;
    // 0x80227950: sb          $v1, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r3;
    // 0x80227954: jal         0x8004DD04
    // 0x80227958: sb          $a2, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r6;
    func_8004DD04_29104(rdram, ctx);
        goto after_9;
    // 0x80227958: sb          $a2, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r6;
    after_9:
    // 0x8022795C: addiu       $v0, $zero, 0xDE8
    ctx->r2 = ADD32(0, 0XDE8);
    // 0x80227960: sh          $v0, 0x442($s3)
    MEM_H(0X442, ctx->r19) = ctx->r2;
    // 0x80227964: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80227968: sh          $zero, 0x440($s3)
    MEM_H(0X440, ctx->r19) = 0;
    // 0x8022796C: sh          $zero, 0x444($s3)
    MEM_H(0X444, ctx->r19) = 0;
    // 0x80227970: jal         0x802284F8
    // 0x80227974: sb          $v0, 0x448($s3)
    MEM_B(0X448, ctx->r19) = ctx->r2;
    func_802284F8_ovl7(rdram, ctx);
        goto after_10;
    // 0x80227974: sb          $v0, 0x448($s3)
    MEM_B(0X448, ctx->r19) = ctx->r2;
    after_10:
    // 0x80227978: jal         0x802283FC
    // 0x8022797C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_802283FC_ovl7(rdram, ctx);
        goto after_11;
    // 0x8022797C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_11:
    // 0x80227980: j           L_80227D58
    // 0x80227984: nop

        goto L_80227D58;
    // 0x80227984: nop

L_80227988:
    // 0x80227988: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022798C: lw          $v1, -0x3E7C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3E7C);
    // 0x80227990: addiu       $a0, $zero, 0x150
    ctx->r4 = ADD32(0, 0X150);
    // 0x80227994: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227998: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022799C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802279A0: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802279A4: jal         0x8002A2F8
    // 0x802279A8: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_12;
    // 0x802279A8: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
    after_12:
    // 0x802279AC: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802279B0: addiu       $v1, $zero, 0x5A
    ctx->r3 = ADD32(0, 0X5A);
    // 0x802279B4: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
    // 0x802279B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802279BC: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_802279C0:
    // 0x802279C0: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x802279C4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802279C8: bgez        $v0, L_80227DF0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802279CC: sw          $v0, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->r2;
            goto L_80227DF0;
    }
    // 0x802279CC: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x802279D0: addiu       $a0, $zero, 0x150
    ctx->r4 = ADD32(0, 0X150);
    // 0x802279D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802279D8: jal         0x8002A2F8
    // 0x802279DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_13;
    // 0x802279DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_13:
    // 0x802279E0: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802279E4: addiu       $v1, $zero, 0x28
    ctx->r3 = ADD32(0, 0X28);
    // 0x802279E8: j           L_80227D5C
    // 0x802279EC: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
        goto L_80227D5C;
    // 0x802279EC: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
L_802279F0:
    // 0x802279F0: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x802279F4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802279F8: bgez        $v0, L_80227DF0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802279FC: sw          $v0, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->r2;
            goto L_80227DF0;
    }
    // 0x802279FC: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x80227A00: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80227A04: lw          $v1, -0x3E78($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3E78);
    // 0x80227A08: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    // 0x80227A0C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227A10: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80227A14: jal         0x8006036C
    // 0x80227A18: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
    func_8006036C_3B76C(rdram, ctx);
        goto after_14;
    // 0x80227A18: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
    after_14:
    // 0x80227A1C: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80227A20: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x80227A24: j           L_80227D5C
    // 0x80227A28: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
        goto L_80227D5C;
    // 0x80227A28: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
L_80227A2C:
    // 0x80227A2C: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x80227A30: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227A34: bgez        $v0, L_80227DF0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227A38: sw          $v0, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->r2;
            goto L_80227DF0;
    }
    // 0x80227A38: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x80227A3C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227A40: jal         0x800616FC
    // 0x80227A44: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_15;
    // 0x80227A44: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    after_15:
    // 0x80227A48: j           L_80227D58
    // 0x80227A4C: nop

        goto L_80227D58;
    // 0x80227A4C: nop

L_80227A50:
    // 0x80227A50: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227A54: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80227A58: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80227A5C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227A60: bne         $v0, $zero, L_80227DF0
    if (ctx->r2 != 0) {
        // 0x80227A64: addiu       $a1, $s3, 0x438
        ctx->r5 = ADD32(ctx->r19, 0X438);
            goto L_80227DF0;
    }
    // 0x80227A64: addiu       $a1, $s3, 0x438
    ctx->r5 = ADD32(ctx->r19, 0X438);
    // 0x80227A68: addiu       $a0, $s3, 0x428
    ctx->r4 = ADD32(ctx->r19, 0X428);
    // 0x80227A6C: lbu         $v1, 0x0($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X0);
    // 0x80227A70: lui         $v0, 0x1822
    ctx->r2 = S32(0X1822 << 16);
    // 0x80227A74: sw          $v0, 0x428($s3)
    MEM_W(0X428, ctx->r19) = ctx->r2;
    // 0x80227A78: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80227A7C: sw          $v0, 0x42C($s3)
    MEM_W(0X42C, ctx->r19) = ctx->r2;
    // 0x80227A80: lui         $v0, 0x4F7C
    ctx->r2 = S32(0X4F7C << 16);
    // 0x80227A84: sw          $v0, 0x430($s3)
    MEM_W(0X430, ctx->r19) = ctx->r2;
    // 0x80227A88: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80227A8C: jal         0x8004DD04
    // 0x80227A90: sb          $v1, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r3;
    func_8004DD04_29104(rdram, ctx);
        goto after_16;
    // 0x80227A90: sb          $v1, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r3;
    after_16:
    // 0x80227A94: addiu       $v0, $zero, 0x9B2
    ctx->r2 = ADD32(0, 0X9B2);
    // 0x80227A98: jal         0x800600F8
    // 0x80227A9C: sh          $v0, 0x442($s3)
    MEM_H(0X442, ctx->r19) = ctx->r2;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_17;
    // 0x80227A9C: sh          $v0, 0x442($s3)
    MEM_H(0X442, ctx->r19) = ctx->r2;
    after_17:
    // 0x80227AA0: addiu       $a0, $zero, 0x150
    ctx->r4 = ADD32(0, 0X150);
    // 0x80227AA4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227AA8: jal         0x8002A2F8
    // 0x80227AAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_18;
    // 0x80227AAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_18:
    // 0x80227AB0: addiu       $a0, $zero, 0x150
    ctx->r4 = ADD32(0, 0X150);
    // 0x80227AB4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227AB8: jal         0x8002A2F8
    // 0x80227ABC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_19;
    // 0x80227ABC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_19:
    // 0x80227AC0: jal         0x802284F8
    // 0x80227AC4: nop

    func_802284F8_ovl7(rdram, ctx);
        goto after_20;
    // 0x80227AC4: nop

    after_20:
    // 0x80227AC8: jal         0x802283FC
    // 0x80227ACC: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_802283FC_ovl7(rdram, ctx);
        goto after_21;
    // 0x80227ACC: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_21:
    // 0x80227AD0: j           L_80227D58
    // 0x80227AD4: nop

        goto L_80227D58;
    // 0x80227AD4: nop

L_80227AD8:
    // 0x80227AD8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80227ADC: lw          $v1, -0x3E7C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3E7C);
    // 0x80227AE0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227AE4: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80227AE8: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
    // 0x80227AEC: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80227AF0: lw          $v1, -0x3E78($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3E78);
    // 0x80227AF4: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80227AF8: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
    // 0x80227AFC: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80227B00: lw          $v1, -0x3E74($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3E74);
    // 0x80227B04: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80227B08: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
    // 0x80227B0C: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80227B10: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x80227B14: j           L_80227D5C
    // 0x80227B18: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
        goto L_80227D5C;
    // 0x80227B18: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
L_80227B1C:
    // 0x80227B1C: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x80227B20: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227B24: bgez        $v0, L_80227DF0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227B28: sw          $v0, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->r2;
            goto L_80227DF0;
    }
    // 0x80227B28: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x80227B2C: jal         0x8006036C
    // 0x80227B30: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006036C_3B76C(rdram, ctx);
        goto after_22;
    // 0x80227B30: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_22:
    // 0x80227B34: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80227B38: addiu       $v1, $zero, 0x168
    ctx->r3 = ADD32(0, 0X168);
    // 0x80227B3C: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
    // 0x80227B40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227B44: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x80227B48: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227B4C: addiu       $v0, $v0, -0x7918
    ctx->r2 = ADD32(ctx->r2, -0X7918);
    // 0x80227B50: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227B54: j           L_80227DF0
    // 0x80227B58: sw          $v0, -0x5F50($at)
    MEM_W(-0X5F50, ctx->r1) = ctx->r2;
        goto L_80227DF0;
    // 0x80227B58: sw          $v0, -0x5F50($at)
    MEM_W(-0X5F50, ctx->r1) = ctx->r2;
L_80227B5C:
    // 0x80227B5C: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x80227B60: beq         $v0, $zero, L_80227BA4
    if (ctx->r2 == 0) {
        // 0x80227B64: addiu       $v1, $v0, -0x1
        ctx->r3 = ADD32(ctx->r2, -0X1);
            goto L_80227BA4;
    }
    // 0x80227B64: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x80227B68: beq         $v1, $zero, L_80227BA4
    if (ctx->r3 == 0) {
        // 0x80227B6C: sw          $v1, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->r3;
            goto L_80227BA4;
    }
    // 0x80227B6C: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
    // 0x80227B70: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80227B74: lw          $a0, -0x5F50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5F50);
    // 0x80227B78: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x80227B7C: bne         $v1, $v0, L_80227BA4
    if (ctx->r3 != ctx->r2) {
        // 0x80227B80: nop
    
            goto L_80227BA4;
    }
    // 0x80227B80: nop

    // 0x80227B84: lhu         $a0, 0x2($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X2);
    // 0x80227B88: jal         0x8002A33C
    // 0x80227B8C: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_23;
    // 0x80227B8C: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    after_23:
    // 0x80227B90: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227B94: lw          $v0, -0x5F50($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5F50);
    // 0x80227B98: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80227B9C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227BA0: sw          $v0, -0x5F50($at)
    MEM_W(-0X5F50, ctx->r1) = ctx->r2;
L_80227BA4:
    // 0x80227BA4: lw          $v1, 0xC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XC);
    // 0x80227BA8: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x80227BAC: bne         $v1, $v0, L_80227BD4
    if (ctx->r3 != ctx->r2) {
        // 0x80227BB0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80227BD4;
    }
    // 0x80227BB0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227BB4: jal         0x800616FC
    // 0x80227BB8: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_24;
    // 0x80227BB8: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    after_24:
    // 0x80227BBC: jal         0x8006036C
    // 0x80227BC0: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006036C_3B76C(rdram, ctx);
        goto after_25;
    // 0x80227BC0: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_25:
    // 0x80227BC4: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x80227BC8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227BCC: jal         0x8002A2F8
    // 0x80227BD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_26;
    // 0x80227BD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_26:
L_80227BD4:
    // 0x80227BD4: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x80227BD8: slti        $v0, $v0, 0x5B
    ctx->r2 = SIGNED(ctx->r2) < 0X5B ? 1 : 0;
    // 0x80227BDC: beq         $v0, $zero, L_80227DF0
    if (ctx->r2 == 0) {
        // 0x80227BE0: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80227DF0;
    }
    // 0x80227BE0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80227BE4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227BE8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80227BEC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227BF0: bne         $v0, $zero, L_80227DF0
    if (ctx->r2 != 0) {
        // 0x80227BF4: nop
    
            goto L_80227DF0;
    }
    // 0x80227BF4: nop

    // 0x80227BF8: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80227BFC: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    // 0x80227C00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227C04: jal         0x8006036C
    // 0x80227C08: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_27;
    // 0x80227C08: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    after_27:
    // 0x80227C0C: j           L_80227DF0
    // 0x80227C10: nop

        goto L_80227DF0;
    // 0x80227C10: nop

L_80227C14:
    // 0x80227C14: jal         0x8006033C
    // 0x80227C18: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_8006033C_3B73C(rdram, ctx);
        goto after_28;
    // 0x80227C18: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_28:
    // 0x80227C1C: beq         $v0, $zero, L_80227DF0
    if (ctx->r2 == 0) {
        // 0x80227C20: nop
    
            goto L_80227DF0;
    }
    // 0x80227C20: nop

    // 0x80227C24: jal         0x80060590
    // 0x80227C28: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_80060590_3B990(rdram, ctx);
        goto after_29;
    // 0x80227C28: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_29:
    // 0x80227C2C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227C30: jal         0x800616FC
    // 0x80227C34: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_30;
    // 0x80227C34: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    after_30:
    // 0x80227C38: j           L_80227D58
    // 0x80227C3C: nop

        goto L_80227D58;
    // 0x80227C3C: nop

L_80227C40:
    // 0x80227C40: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227C44: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80227C48: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80227C4C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227C50: bne         $v0, $zero, L_80227DF0
    if (ctx->r2 != 0) {
        // 0x80227C54: nop
    
            goto L_80227DF0;
    }
    // 0x80227C54: nop

    // 0x80227C58: jal         0x800600F8
    // 0x80227C5C: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_31;
    // 0x80227C5C: nop

    after_31:
    // 0x80227C60: jal         0x802284F8
    // 0x80227C64: nop

    func_802284F8_ovl7(rdram, ctx);
        goto after_32;
    // 0x80227C64: nop

    after_32:
    // 0x80227C68: jal         0x802283FC
    // 0x80227C6C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_802283FC_ovl7(rdram, ctx);
        goto after_33;
    // 0x80227C6C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_33:
    // 0x80227C70: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80227C74: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x80227C78: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
    // 0x80227C7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227C80: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x80227C84: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80227C88: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227C8C: j           L_80227DF0
    // 0x80227C90: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
        goto L_80227DF0;
    // 0x80227C90: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
L_80227C94:
    // 0x80227C94: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x80227C98: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227C9C: bgez        $v0, L_80227DF0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227CA0: sw          $v0, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->r2;
            goto L_80227DF0;
    }
    // 0x80227CA0: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x80227CA4: jal         0x8006036C
    // 0x80227CA8: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006036C_3B76C(rdram, ctx);
        goto after_34;
    // 0x80227CA8: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_34:
    // 0x80227CAC: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80227CB0: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x80227CB4: j           L_80227D5C
    // 0x80227CB8: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
        goto L_80227D5C;
    // 0x80227CB8: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
L_80227CBC:
    // 0x80227CBC: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x80227CC0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227CC4: bgez        $v0, L_80227DF0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227CC8: sw          $v0, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->r2;
            goto L_80227DF0;
    }
    // 0x80227CC8: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x80227CCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227CD0: sb          $v0, 0x448($s3)
    MEM_B(0X448, ctx->r19) = ctx->r2;
    // 0x80227CD4: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80227CD8: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x80227CDC: j           L_80227D5C
    // 0x80227CE0: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
        goto L_80227D5C;
    // 0x80227CE0: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
L_80227CE4:
    // 0x80227CE4: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x80227CE8: lw          $s2, -0x3E80($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X3E80);
    // 0x80227CEC: addiu       $a0, $s3, 0x438
    ctx->r4 = ADD32(ctx->r19, 0X438);
    // 0x80227CF0: lh          $a2, 0x442($s3)
    ctx->r6 = MEM_H(ctx->r19, 0X442);
    // 0x80227CF4: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    // 0x80227CF8: jal         0x8004F820
    // 0x80227CFC: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_35;
    // 0x80227CFC: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_35:
    // 0x80227D00: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80227D04: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x80227D08: lhu         $v1, 0x442($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X442);
    // 0x80227D0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227D10: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80227D14: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227D18: sh          $v0, -0x5F4C($at)
    MEM_H(-0X5F4C, ctx->r1) = ctx->r2;
    // 0x80227D1C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227D20: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80227D24: jal         0x8004DB18
    // 0x80227D28: sh          $v1, 0x442($s3)
    MEM_H(0X442, ctx->r19) = ctx->r3;
    func_8004DB18_28F18(rdram, ctx);
        goto after_36;
    // 0x80227D28: sh          $v1, 0x442($s3)
    MEM_H(0X442, ctx->r19) = ctx->r3;
    after_36:
    // 0x80227D2C: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x80227D30: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227D34: bgez        $v0, L_80227DF0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227D38: sw          $v0, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->r2;
            goto L_80227DF0;
    }
    // 0x80227D38: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x80227D3C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227D40: jal         0x800616FC
    // 0x80227D44: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_37;
    // 0x80227D44: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
    after_37:
    // 0x80227D48: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80227D4C: sb          $v0, 0x448($s3)
    MEM_B(0X448, ctx->r19) = ctx->r2;
    // 0x80227D50: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80227D54: sh          $v0, 0x442($s3)
    MEM_H(0X442, ctx->r19) = ctx->r2;
L_80227D58:
    // 0x80227D58: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
L_80227D5C:
    // 0x80227D5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227D60: j           L_80227DF0
    // 0x80227D64: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
        goto L_80227DF0;
    // 0x80227D64: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_80227D68:
    // 0x80227D68: jal         0x8006033C
    // 0x80227D6C: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_8006033C_3B73C(rdram, ctx);
        goto after_38;
    // 0x80227D6C: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_38:
    // 0x80227D70: beq         $v0, $zero, L_80227DF0
    if (ctx->r2 == 0) {
        // 0x80227D74: nop
    
            goto L_80227DF0;
    }
    // 0x80227D74: nop

    // 0x80227D78: jal         0x80060590
    // 0x80227D7C: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_80060590_3B990(rdram, ctx);
        goto after_39;
    // 0x80227D7C: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_39:
    // 0x80227D80: jal         0x80070050
    // 0x80227D84: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_40;
    // 0x80227D84: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_40:
    // 0x80227D88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227D8C: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x80227D90: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227D94: jal         0x80034844
    // 0x80227D98: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_41;
    // 0x80227D98: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_41:
    // 0x80227D9C: j           L_80227DD0
    // 0x80227DA0: nop

        goto L_80227DD0;
    // 0x80227DA0: nop

L_80227DA4:
    // 0x80227DA4: jal         0x8006033C
    // 0x80227DA8: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_8006033C_3B73C(rdram, ctx);
        goto after_42;
    // 0x80227DA8: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_42:
    // 0x80227DAC: beq         $v0, $zero, L_80227DF0
    if (ctx->r2 == 0) {
        // 0x80227DB0: nop
    
            goto L_80227DF0;
    }
    // 0x80227DB0: nop

    // 0x80227DB4: jal         0x80060590
    // 0x80227DB8: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_80060590_3B990(rdram, ctx);
        goto after_43;
    // 0x80227DB8: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_43:
    // 0x80227DBC: jal         0x80034E74
    // 0x80227DC0: nop

    func_80034E74_10274(rdram, ctx);
        goto after_44;
    // 0x80227DC0: nop

    after_44:
    // 0x80227DC4: jal         0x80070050
    // 0x80227DC8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_45;
    // 0x80227DC8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_45:
    // 0x80227DCC: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_80227DD0:
    // 0x80227DD0: jal         0x802284F8
    // 0x80227DD4: nop

    func_802284F8_ovl7(rdram, ctx);
        goto after_46;
    // 0x80227DD4: nop

    after_46:
    // 0x80227DD8: jal         0x8006036C
    // 0x80227DDC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8006036C_3B76C(rdram, ctx);
        goto after_47;
    // 0x80227DDC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_47:
    // 0x80227DE0: jal         0x8006036C
    // 0x80227DE4: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_8006036C_3B76C(rdram, ctx);
        goto after_48;
    // 0x80227DE4: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_48:
    // 0x80227DE8: jal         0x802283FC
    // 0x80227DEC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_802283FC_ovl7(rdram, ctx);
        goto after_49;
    // 0x80227DEC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_49:
L_80227DF0:
    // 0x80227DF0: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80227DF4: addiu       $v0, $v0, -0x3
    ctx->r2 = ADD32(ctx->r2, -0X3);
    // 0x80227DF8: sltiu       $v0, $v0, 0xD
    ctx->r2 = ctx->r2 < 0XD ? 1 : 0;
    // 0x80227DFC: beq         $v0, $zero, L_80227E20
    if (ctx->r2 == 0) {
        // 0x80227E00: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80227E20;
    }
    // 0x80227E00: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227E04: lw          $a0, 0xA4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XA4);
    // 0x80227E08: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80227E0C: beq         $v1, $v0, L_80227E20
    if (ctx->r3 == ctx->r2) {
        // 0x80227E10: nop
    
            goto L_80227E20;
    }
    // 0x80227E10: nop

    // 0x80227E14: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80227E18: jalr        $v0
    // 0x80227E1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_50;
    // 0x80227E1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_50:
L_80227E20:
    // 0x80227E20: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80227E24: sltiu       $v0, $v0, 0x10
    ctx->r2 = ctx->r2 < 0X10 ? 1 : 0;
    // 0x80227E28: beq         $v0, $zero, L_80227EE8
    if (ctx->r2 == 0) {
        // 0x80227E2C: nop
    
            goto L_80227EE8;
    }
    // 0x80227E2C: nop

    // 0x80227E30: jal         0x8006072C
    // 0x80227E34: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_51;
    // 0x80227E34: nop

    after_51:
    // 0x80227E38: beq         $v0, $zero, L_80227EE8
    if (ctx->r2 == 0) {
        // 0x80227E3C: nop
    
            goto L_80227EE8;
    }
    // 0x80227E3C: nop

    // 0x80227E40: jal         0x8006036C
    // 0x80227E44: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_8006036C_3B76C(rdram, ctx);
        goto after_52;
    // 0x80227E44: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_52:
    // 0x80227E48: jal         0x80061724
    // 0x80227E4C: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_53;
    // 0x80227E4C: nop

    after_53:
    // 0x80227E50: jal         0x80061090
    // 0x80227E54: nop

    func_80061090_3C490(rdram, ctx);
        goto after_54;
    // 0x80227E54: nop

    after_54:
    // 0x80227E58: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227E5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227E60: jal         0x80036B00
    // 0x80227E64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_55;
    // 0x80227E64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_55:
    // 0x80227E68: jal         0x8002A488
    // 0x80227E6C: nop

    func_8002A488_5888(rdram, ctx);
        goto after_56;
    // 0x80227E6C: nop

    after_56:
    // 0x80227E70: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    // 0x80227E74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227E78: jal         0x8002A2F8
    // 0x80227E7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_57;
    // 0x80227E7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_57:
    // 0x80227E80: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80227E84: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80227E88: bne         $v0, $zero, L_80227E94
    if (ctx->r2 != 0) {
        // 0x80227E8C: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_80227E94;
    }
    // 0x80227E8C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80227E90: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_80227E94:
    // 0x80227E94: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x80227E98: addiu       $a0, $s3, 0x428
    ctx->r4 = ADD32(ctx->r19, 0X428);
    // 0x80227E9C: lbu         $v1, 0xBD($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XBD);
    // 0x80227EA0: addiu       $a1, $s3, 0x438
    ctx->r5 = ADD32(ctx->r19, 0X438);
    // 0x80227EA4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227EA8: sb          $v0, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r2;
    // 0x80227EAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227EB0: sb          $v0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r2;
    // 0x80227EB4: lui         $v0, 0x1882
    ctx->r2 = S32(0X1882 << 16);
    // 0x80227EB8: sw          $v0, 0x428($s3)
    MEM_W(0X428, ctx->r19) = ctx->r2;
    // 0x80227EBC: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80227EC0: sw          $v0, 0x42C($s3)
    MEM_W(0X42C, ctx->r19) = ctx->r2;
    // 0x80227EC4: lui         $v0, 0x510A
    ctx->r2 = S32(0X510A << 16);
    // 0x80227EC8: sw          $v0, 0x430($s3)
    MEM_W(0X430, ctx->r19) = ctx->r2;
    // 0x80227ECC: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80227ED0: jal         0x8004DD04
    // 0x80227ED4: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    func_8004DD04_29104(rdram, ctx);
        goto after_58;
    // 0x80227ED4: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    after_58:
    // 0x80227ED8: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80227EDC: sh          $zero, 0x440($s3)
    MEM_H(0X440, ctx->r19) = 0;
    // 0x80227EE0: sh          $v0, 0x442($s3)
    MEM_H(0X442, ctx->r19) = ctx->r2;
    // 0x80227EE4: sh          $zero, 0x444($s3)
    MEM_H(0X444, ctx->r19) = 0;
L_80227EE8:
    // 0x80227EE8: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80227EEC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80227EF0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80227EF4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80227EF8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80227EFC: jr          $ra
    // 0x80227F00: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80227F00: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80232330_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232330: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232334: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232338: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023233C: jal         0x800A3450
    // 0x80232340: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80232340: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80232344: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80232348: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023234C: jal         0x800A3450
    // 0x80232350: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80232350: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    after_1:
    // 0x80232354: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80232358: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8023235C: jal         0x800A3450
    // 0x80232360: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80232360: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_2:
    // 0x80232364: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80232368: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8023236C: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x80232370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232374: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232378: jr          $ra
    // 0x8023237C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023237C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D9A8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D9A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D9AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D9B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D9B4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D9B8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D9BC: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022D9C0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022D9C4: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x8022D9C8: jal         0x8004FA7C
    // 0x8022D9CC: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022D9CC: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022D9D0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022D9D4: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022D9D8: beq         $v0, $zero, L_8022DA6C
    if (ctx->r2 == 0) {
        // 0x8022D9DC: nop
    
            goto L_8022DA6C;
    }
    // 0x8022D9DC: nop

    // 0x8022D9E0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022D9E4: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022D9E8: bne         $v0, $zero, L_8022DA6C
    if (ctx->r2 != 0) {
        // 0x8022D9EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022DA6C;
    }
    // 0x8022D9EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D9F0: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022D9F4: beq         $v1, $v0, L_8022DA0C
    if (ctx->r3 == ctx->r2) {
        // 0x8022D9F8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022DA0C;
    }
    // 0x8022D9F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D9FC: beq         $v1, $v0, L_8022DA3C
    if (ctx->r3 == ctx->r2) {
        // 0x8022DA00: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022DA3C;
    }
    // 0x8022DA00: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022DA04: j           L_8022DA60
    // 0x8022DA08: nop

        goto L_8022DA60;
    // 0x8022DA08: nop

L_8022DA0C:
    // 0x8022DA0C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022DA10: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022DA14: bne         $v0, $zero, L_8022DA60
    if (ctx->r2 != 0) {
        // 0x8022DA18: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022DA60;
    }
    // 0x8022DA18: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022DA1C: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022DA20: bne         $v0, $zero, L_8022DA60
    if (ctx->r2 != 0) {
        // 0x8022DA24: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022DA60;
    }
    // 0x8022DA24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DA28: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022DA2C: bne         $v1, $v0, L_8022DA60
    if (ctx->r3 != ctx->r2) {
        // 0x8022DA30: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022DA60;
    }
    // 0x8022DA30: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022DA34: j           L_8022DA60
    // 0x8022DA38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022DA60;
    // 0x8022DA38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022DA3C:
    // 0x8022DA3C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022DA40: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022DA44: beq         $v0, $zero, L_8022DA5C
    if (ctx->r2 == 0) {
        // 0x8022DA48: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_8022DA5C;
    }
    // 0x8022DA48: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022DA4C: bne         $v0, $zero, L_8022DA60
    if (ctx->r2 != 0) {
        // 0x8022DA50: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022DA60;
    }
    // 0x8022DA50: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022DA54: j           L_8022DA60
    // 0x8022DA58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022DA60;
    // 0x8022DA58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022DA5C:
    // 0x8022DA5C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022DA60:
    // 0x8022DA60: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022DA64: beq         $v0, $zero, L_8022DA90
    if (ctx->r2 == 0) {
        // 0x8022DA68: nop
    
            goto L_8022DA90;
    }
    // 0x8022DA68: nop

L_8022DA6C:
    // 0x8022DA6C: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022DA70: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022DA74: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022DA78: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022DA7C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022DA80: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022DA84: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022DA88: j           L_8022DAA0
    // 0x8022DA8C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022DAA0;
    // 0x8022DA8C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022DA90:
    // 0x8022DA90: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022DA94: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022DA98: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022DA9C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022DAA0:
    // 0x8022DAA0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022DAA4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DAA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DAAC: jr          $ra
    // 0x8022DAB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DAB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023261C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023261C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80232620: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80232624: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232628: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8023262C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80232630: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80232634: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80232638: lw          $v0, 0x354($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X354);
    // 0x8023263C: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x80232640: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80232644: beq         $v0, $zero, L_8023265C
    if (ctx->r2 == 0) {
        // 0x80232648: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8023265C;
    }
    // 0x80232648: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8023264C: jal         0x80060D38
    // 0x80232650: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80060D38_3C138(rdram, ctx);
        goto after_0;
    // 0x80232650: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x80232654: j           L_8023266C
    // 0x80232658: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_8023266C;
    // 0x80232658: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8023265C:
    // 0x8023265C: jal         0x80232FF0
    // 0x80232660: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80232FF0_ovl7(rdram, ctx);
        goto after_1;
    // 0x80232660: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80232664: beq         $v0, $zero, L_80232678
    if (ctx->r2 == 0) {
        // 0x80232668: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80232678;
    }
    // 0x80232668: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8023266C:
    // 0x8023266C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80232670: j           L_8023291C
    // 0x80232674: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_8023291C;
    // 0x80232674: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80232678:
    // 0x80232678: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023267C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80232680: jal         0x8004DDE8
    // 0x80232684: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DDE8_291E8(rdram, ctx);
        goto after_2;
    // 0x80232684: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80232688: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8023268C: sw          $v0, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r2;
    // 0x80232690: sltiu       $v0, $v1, 0x15
    ctx->r2 = ctx->r3 < 0X15 ? 1 : 0;
    // 0x80232694: beq         $v0, $zero, L_8023291C
    if (ctx->r2 == 0) {
        // 0x80232698: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8023291C;
    }
    // 0x80232698: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023269C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802326A0: addu        $at, $at, $v0
    gpr jr_addend_802326A8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802326A4: lw          $v0, -0x6068($at)
    ctx->r2 = ADD32(ctx->r1, -0X6068);
    // 0x802326A8: jr          $v0
    // 0x802326AC: nop

    switch (jr_addend_802326A8 >> 2) {
        case 0: goto L_802326B0; break;
        case 1: goto L_802326CC; break;
        case 2: goto L_80232828; break;
        case 3: goto L_802328CC; break;
        case 4: goto L_8023291C; break;
        case 5: goto L_8023291C; break;
        case 6: goto L_8023291C; break;
        case 7: goto L_8023291C; break;
        case 8: goto L_8023291C; break;
        case 9: goto L_8023291C; break;
        case 10: goto L_80232858; break;
        case 11: goto L_80232890; break;
        case 12: goto L_8023291C; break;
        case 13: goto L_8023291C; break;
        case 14: goto L_8023291C; break;
        case 15: goto L_802328A4; break;
        case 16: goto L_8023291C; break;
        case 17: goto L_8023291C; break;
        case 18: goto L_8023291C; break;
        case 19: goto L_8023291C; break;
        case 20: goto L_802328EC; break;
        default: switch_error(__func__, 0x802326A8, 0x80239F98);
    }
    // 0x802326AC: nop

L_802326B0:
    // 0x802326B0: jal         0x800A3450
    // 0x802326B4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x802326B4: nop

    after_3:
    // 0x802326B8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802326BC: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x802326C0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802326C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802326C8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802326CC:
    // 0x802326CC: jal         0x80233194
    // 0x802326D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80233194_ovl7(rdram, ctx);
        goto after_4;
    // 0x802326D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802326D4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802326D8: beq         $v0, $zero, L_8023291C
    if (ctx->r2 == 0) {
        // 0x802326DC: nop
    
            goto L_8023291C;
    }
    // 0x802326DC: nop

    // 0x802326E0: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x802326E4: sltiu       $v0, $v0, 0x12C
    ctx->r2 = ctx->r2 < 0X12C ? 1 : 0;
    // 0x802326E8: beq         $v0, $zero, L_8023270C
    if (ctx->r2 == 0) {
        // 0x802326EC: addiu       $v1, $zero, 0x80
        ctx->r3 = ADD32(0, 0X80);
            goto L_8023270C;
    }
    // 0x802326EC: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x802326F0: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x802326F4: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x802326F8: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802326FC: beq         $v0, $v1, L_80232734
    if (ctx->r2 == ctx->r3) {
        // 0x80232700: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232734;
    }
    // 0x80232700: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232704: j           L_80232728
    // 0x80232708: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_80232728;
    // 0x80232708: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8023270C:
    // 0x8023270C: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80232710: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x80232714: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80232718: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8023271C: beq         $v0, $v1, L_80232734
    if (ctx->r2 == ctx->r3) {
        // 0x80232720: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232734;
    }
    // 0x80232720: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232724: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80232728:
    // 0x80232728: jal         0x80050294
    // 0x8023272C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8023272C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80232730: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80232734:
    // 0x80232734: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80232738: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023273C: jal         0x8004DA90
    // 0x80232740: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_6;
    // 0x80232740: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
    // 0x80232744: jal         0x80040F30
    // 0x80232748: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_7;
    // 0x80232748: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8023274C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232750: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80232754: jal         0x802330A4
    // 0x80232758: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_802330A4_ovl7(rdram, ctx);
        goto after_8;
    // 0x80232758: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_8:
    // 0x8023275C: lb          $s2, 0xD($s0)
    ctx->r18 = MEM_B(ctx->r16, 0XD);
    // 0x80232760: beq         $s2, $zero, L_802327B8
    if (ctx->r18 == 0) {
        // 0x80232764: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802327B8;
    }
    // 0x80232764: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232768: jal         0x8004DE68
    // 0x8023276C: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    func_8004DE68_29268(rdram, ctx);
        goto after_9;
    // 0x8023276C: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    after_9:
    // 0x80232770: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x80232774: sltu        $v0, $s2, $v0
    ctx->r2 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x80232778: beq         $v0, $zero, L_802327B8
    if (ctx->r2 == 0) {
        // 0x8023277C: addiu       $v1, $zero, 0x80
        ctx->r3 = ADD32(0, 0X80);
            goto L_802327B8;
    }
    // 0x8023277C: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x80232780: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80232784: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80232788: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8023278C: beq         $v0, $v1, L_802327A0
    if (ctx->r2 == ctx->r3) {
        // 0x80232790: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802327A0;
    }
    // 0x80232790: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232794: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80232798: jal         0x80050294
    // 0x8023279C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_10;
    // 0x8023279C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
L_802327A0:
    // 0x802327A0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802327A4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802327A8: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x802327AC: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x802327B0: j           L_80232918
    // 0x802327B4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_80232918;
    // 0x802327B4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_802327B8:
    // 0x802327B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802327BC: jal         0x80232F7C
    // 0x802327C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80232F7C_ovl7(rdram, ctx);
        goto after_11;
    // 0x802327C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_11:
    // 0x802327C4: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802327C8: lhu         $v1, 0x66($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X66);
    // 0x802327CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802327D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802327D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802327D8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802327DC: jal         0x8023312C
    // 0x802327E0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8023312C_ovl7(rdram, ctx);
        goto after_12;
    // 0x802327E0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_12:
    // 0x802327E4: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x802327E8: bne         $v0, $zero, L_8023291C
    if (ctx->r2 != 0) {
        // 0x802327EC: nop
    
            goto L_8023291C;
    }
    // 0x802327EC: nop

    // 0x802327F0: lh          $v0, 0x4($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X4);
    // 0x802327F4: bne         $v0, $zero, L_8023281C
    if (ctx->r2 != 0) {
        // 0x802327F8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023281C;
    }
    // 0x802327F8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802327FC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80232800: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232804: jal         0x800A3450
    // 0x80232808: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_13;
    // 0x80232808: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    after_13:
    // 0x8023280C: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80232810: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232814: j           L_8023291C
    // 0x80232818: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
        goto L_8023291C;
    // 0x80232818: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
L_8023281C:
    // 0x8023281C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80232820: j           L_8023291C
    // 0x80232824: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
        goto L_8023291C;
    // 0x80232824: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
L_80232828:
    // 0x80232828: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8023282C: bgez        $v0, L_802328CC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80232830: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802328CC;
    }
    // 0x80232830: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232834: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232838: jal         0x80050294
    // 0x8023283C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_14;
    // 0x8023283C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_14:
    // 0x80232840: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80232844: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80232848: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8023284C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232850: j           L_802328CC
    // 0x80232854: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802328CC;
    // 0x80232854: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80232858:
    // 0x80232858: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023285C: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80232860: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232864: jal         0x8004F820
    // 0x80232868: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    func_8004F820_2AC20(rdram, ctx);
        goto after_15;
    // 0x80232868: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    after_15:
    // 0x8023286C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80232870: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232874: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80232878: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023287C: bne         $v0, $zero, L_8023291C
    if (ctx->r2 != 0) {
        // 0x80232880: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8023291C;
    }
    // 0x80232880: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80232884: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80232888: j           L_80232918
    // 0x8023288C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80232918;
    // 0x8023288C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80232890:
    // 0x80232890: jal         0x80233194
    // 0x80232894: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80233194_ovl7(rdram, ctx);
        goto after_16;
    // 0x80232894: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
    // 0x80232898: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023289C: beq         $v0, $zero, L_8023291C
    if (ctx->r2 == 0) {
        // 0x802328A0: nop
    
            goto L_8023291C;
    }
    // 0x802328A0: nop

L_802328A4:
    // 0x802328A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802328A8: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802328AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802328B0: jal         0x8004DA90
    // 0x802328B4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_17;
    // 0x802328B4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_17:
    // 0x802328B8: jal         0x80040F30
    // 0x802328BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_18;
    // 0x802328BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_18:
    // 0x802328C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802328C4: jal         0x802330A4
    // 0x802328C8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_802330A4_ovl7(rdram, ctx);
        goto after_19;
    // 0x802328C8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_19:
L_802328CC:
    // 0x802328CC: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x802328D0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802328D4: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x802328D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802328DC: beql        $v0, $zero, L_8023291C
    if (ctx->r2 == 0) {
        // 0x802328E0: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_8023291C;
    }
    goto skip_0;
    // 0x802328E0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_0:
    // 0x802328E4: j           L_8023291C
    // 0x802328E8: nop

        goto L_8023291C;
    // 0x802328E8: nop

L_802328EC:
    // 0x802328EC: lh          $a0, 0x2($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X2);
    // 0x802328F0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802328F4: jal         0x8004FA7C
    // 0x802328F8: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_20;
    // 0x802328F8: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    after_20:
    // 0x802328FC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80232900: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232904: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80232908: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023290C: bne         $v0, $zero, L_8023291C
    if (ctx->r2 != 0) {
        // 0x80232910: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8023291C;
    }
    // 0x80232910: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80232914: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80232918:
    // 0x80232918: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023291C:
    // 0x8023291C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80232920: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80232924: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80232928: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023292C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80232930: jr          $ra
    // 0x80232934: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80232934: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8023130C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023130C: lbu         $a1, 0xA($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XA);
    // 0x80231310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231314: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x80231318: beq         $v1, $v0, L_80231350
    if (ctx->r3 == ctx->r2) {
        // 0x8023131C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80231350;
    }
    // 0x8023131C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80231320: beql        $v0, $zero, L_80231338
    if (ctx->r2 == 0) {
        // 0x80231324: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80231338;
    }
    goto skip_0;
    // 0x80231324: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80231328: beq         $v1, $zero, L_80231348
    if (ctx->r3 == 0) {
        // 0x8023132C: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_80231348;
    }
    // 0x8023132C: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80231330: j           L_80231390
    // 0x80231334: nop

        goto L_80231390;
    // 0x80231334: nop

L_80231338:
    // 0x80231338: beq         $v1, $v0, L_8023137C
    if (ctx->r3 == ctx->r2) {
        // 0x8023133C: nop
    
            goto L_8023137C;
    }
    // 0x8023133C: nop

    // 0x80231340: j           L_80231390
    // 0x80231344: nop

        goto L_80231390;
    // 0x80231344: nop

L_80231348:
    // 0x80231348: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8023134C: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_80231350:
    // 0x80231350: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80231354: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80231358: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x8023135C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80231360: beq         $v0, $zero, L_80231390
    if (ctx->r2 == 0) {
        // 0x80231364: addiu       $v1, $zero, 0x8
        ctx->r3 = ADD32(0, 0X8);
            goto L_80231390;
    }
    // 0x80231364: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80231368: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8023136C: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80231370: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231374: j           L_80231390
    // 0x80231378: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
        goto L_80231390;
    // 0x80231378: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8023137C:
    // 0x8023137C: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80231380: bgez        $v0, L_80231390
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231384: addiu       $v0, $a1, -0x1
        ctx->r2 = ADD32(ctx->r5, -0X1);
            goto L_80231390;
    }
    // 0x80231384: addiu       $v0, $a1, -0x1
    ctx->r2 = ADD32(ctx->r5, -0X1);
    // 0x80231388: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8023138C: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_80231390:
    // 0x80231390: jr          $ra
    // 0x80231394: nop

    TRACE_RETURN()
    return;
    // 0x80231394: nop

;}
RECOMP_FUNC void func_8022587C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022587C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225880: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225884: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80225888: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022588C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225890: lbu         $v1, 0x4($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X4);
    // 0x80225894: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225898: beq         $v1, $v0, L_80225A84
    if (ctx->r3 == ctx->r2) {
        // 0x8022589C: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_80225A84;
    }
    // 0x8022589C: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x802258A0: beql        $v0, $zero, L_802258C0
    if (ctx->r2 == 0) {
        // 0x802258A4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802258C0;
    }
    goto skip_0;
    // 0x802258A4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    skip_0:
    // 0x802258A8: beq         $v1, $zero, L_802258D8
    if (ctx->r3 == 0) {
        // 0x802258AC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802258D8;
    }
    // 0x802258AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802258B0: beq         $v1, $v0, L_80225A44
    if (ctx->r3 == ctx->r2) {
        // 0x802258B4: nop
    
            goto L_80225A44;
    }
    // 0x802258B4: nop

    // 0x802258B8: j           L_80225B1C
    // 0x802258BC: nop

        goto L_80225B1C;
    // 0x802258BC: nop

L_802258C0:
    // 0x802258C0: beq         $v1, $v0, L_80225AD4
    if (ctx->r3 == ctx->r2) {
        // 0x802258C4: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_80225AD4;
    }
    // 0x802258C4: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x802258C8: beq         $v0, $zero, L_80225B1C
    if (ctx->r2 == 0) {
        // 0x802258CC: nop
    
            goto L_80225B1C;
    }
    // 0x802258CC: nop

    // 0x802258D0: j           L_80225AB4
    // 0x802258D4: nop

        goto L_80225AB4;
    // 0x802258D4: nop

L_802258D8:
    // 0x802258D8: jal         0x8006033C
    // 0x802258DC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802258DC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_0:
    // 0x802258E0: beq         $v0, $zero, L_802258F8
    if (ctx->r2 == 0) {
        // 0x802258E4: nop
    
            goto L_802258F8;
    }
    // 0x802258E4: nop

    // 0x802258E8: jal         0x802283FC
    // 0x802258EC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_802283FC_ovl7(rdram, ctx);
        goto after_1;
    // 0x802258EC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x802258F0: j           L_80225B18
    // 0x802258F4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_80225B18;
    // 0x802258F4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802258F8:
    // 0x802258F8: jal         0x8006033C
    // 0x802258FC: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802258FC: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_2:
    // 0x80225900: beq         $v0, $zero, L_80225918
    if (ctx->r2 == 0) {
        // 0x80225904: nop
    
            goto L_80225918;
    }
    // 0x80225904: nop

    // 0x80225908: jal         0x802283FC
    // 0x8022590C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_802283FC_ovl7(rdram, ctx);
        goto after_3;
    // 0x8022590C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_3:
    // 0x80225910: j           L_80225B18
    // 0x80225914: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80225B18;
    // 0x80225914: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80225918:
    // 0x80225918: jal         0x8006033C
    // 0x8022591C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x8022591C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x80225920: beq         $v0, $zero, L_80225954
    if (ctx->r2 == 0) {
        // 0x80225924: nop
    
            goto L_80225954;
    }
    // 0x80225924: nop

    // 0x80225928: jal         0x8006033C
    // 0x8022592C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x8022592C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_5:
    // 0x80225930: beq         $v0, $zero, L_80225954
    if (ctx->r2 == 0) {
        // 0x80225934: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_80225954;
    }
    // 0x80225934: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80225938: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022593C: jal         0x80060690
    // 0x80225940: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    func_80060690_3BA90(rdram, ctx);
        goto after_6;
    // 0x80225940: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    after_6:
    // 0x80225944: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225948: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022594C: j           L_80225B1C
    // 0x80225950: sb          $v0, -0x3A4C($at)
    MEM_B(-0X3A4C, ctx->r1) = ctx->r2;
        goto L_80225B1C;
    // 0x80225950: sb          $v0, -0x3A4C($at)
    MEM_B(-0X3A4C, ctx->r1) = ctx->r2;
L_80225954:
    // 0x80225954: jal         0x8006033C
    // 0x80225958: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x80225958: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_7:
    // 0x8022595C: beq         $v0, $zero, L_80225974
    if (ctx->r2 == 0) {
        // 0x80225960: nop
    
            goto L_80225974;
    }
    // 0x80225960: nop

    // 0x80225964: jal         0x802283FC
    // 0x80225968: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_802283FC_ovl7(rdram, ctx);
        goto after_8;
    // 0x80225968: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_8:
    // 0x8022596C: j           L_80225B18
    // 0x80225970: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_80225B18;
    // 0x80225970: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225974:
    // 0x80225974: jal         0x8006033C
    // 0x80225978: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_8006033C_3B73C(rdram, ctx);
        goto after_9;
    // 0x80225978: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_9:
    // 0x8022597C: beq         $v0, $zero, L_802259D4
    if (ctx->r2 == 0) {
        // 0x80225980: nop
    
            goto L_802259D4;
    }
    // 0x80225980: nop

    // 0x80225984: jal         0x802283FC
    // 0x80225988: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_802283FC_ovl7(rdram, ctx);
        goto after_10;
    // 0x80225988: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_10:
    // 0x8022598C: jal         0x8006033C
    // 0x80225990: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    func_8006033C_3B73C(rdram, ctx);
        goto after_11;
    // 0x80225990: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_11:
    // 0x80225994: beq         $v0, $zero, L_80225B18
    if (ctx->r2 == 0) {
        // 0x80225998: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225B18;
    }
    // 0x80225998: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022599C: jal         0x8006033C
    // 0x802259A0: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    func_8006033C_3B73C(rdram, ctx);
        goto after_12;
    // 0x802259A0: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    after_12:
    // 0x802259A4: bne         $v0, $zero, L_80225B18
    if (ctx->r2 != 0) {
        // 0x802259A8: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225B18;
    }
    // 0x802259A8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802259AC: jal         0x8022861C
    // 0x802259B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8022861C_ovl7(rdram, ctx);
        goto after_13;
    // 0x802259B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_13:
    // 0x802259B4: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802259B8: jal         0x8005FA7C
    // 0x802259BC: addiu       $a0, $a0, -0x769C
    ctx->r4 = ADD32(ctx->r4, -0X769C);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_14;
    // 0x802259BC: addiu       $a0, $a0, -0x769C
    ctx->r4 = ADD32(ctx->r4, -0X769C);
    after_14:
    // 0x802259C0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802259C4: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x802259C8: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
    // 0x802259CC: j           L_80225B14
    // 0x802259D0: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_80225B14;
    // 0x802259D0: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_802259D4:
    // 0x802259D4: jal         0x8006033C
    // 0x802259D8: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_8006033C_3B73C(rdram, ctx);
        goto after_15;
    // 0x802259D8: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_15:
    // 0x802259DC: beq         $v0, $zero, L_802259F4
    if (ctx->r2 == 0) {
        // 0x802259E0: nop
    
            goto L_802259F4;
    }
    // 0x802259E0: nop

    // 0x802259E4: jal         0x802283FC
    // 0x802259E8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_802283FC_ovl7(rdram, ctx);
        goto after_16;
    // 0x802259E8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_16:
    // 0x802259EC: j           L_80225B18
    // 0x802259F0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_80225B18;
    // 0x802259F0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802259F4:
    // 0x802259F4: jal         0x8006033C
    // 0x802259F8: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_8006033C_3B73C(rdram, ctx);
        goto after_17;
    // 0x802259F8: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_17:
    // 0x802259FC: beq         $v0, $zero, L_80225A14
    if (ctx->r2 == 0) {
        // 0x80225A00: nop
    
            goto L_80225A14;
    }
    // 0x80225A00: nop

    // 0x80225A04: jal         0x802283FC
    // 0x80225A08: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_802283FC_ovl7(rdram, ctx);
        goto after_18;
    // 0x80225A08: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_18:
    // 0x80225A0C: j           L_80225B0C
    // 0x80225A10: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
        goto L_80225B0C;
    // 0x80225A10: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
L_80225A14:
    // 0x80225A14: jal         0x8006033C
    // 0x80225A18: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8006033C_3B73C(rdram, ctx);
        goto after_19;
    // 0x80225A18: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_19:
    // 0x80225A1C: beq         $v0, $zero, L_80225A34
    if (ctx->r2 == 0) {
        // 0x80225A20: nop
    
            goto L_80225A34;
    }
    // 0x80225A20: nop

    // 0x80225A24: jal         0x802283FC
    // 0x80225A28: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_802283FC_ovl7(rdram, ctx);
        goto after_20;
    // 0x80225A28: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_20:
    // 0x80225A2C: j           L_80225B0C
    // 0x80225A30: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
        goto L_80225B0C;
    // 0x80225A30: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
L_80225A34:
    // 0x80225A34: jal         0x802283FC
    // 0x80225A38: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_802283FC_ovl7(rdram, ctx);
        goto after_21;
    // 0x80225A38: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_21:
    // 0x80225A3C: j           L_80225B0C
    // 0x80225A40: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
        goto L_80225B0C;
    // 0x80225A40: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
L_80225A44:
    // 0x80225A44: jal         0x8006033C
    // 0x80225A48: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8006033C_3B73C(rdram, ctx);
        goto after_22;
    // 0x80225A48: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_22:
    // 0x80225A4C: bne         $v0, $zero, L_80225B18
    if (ctx->r2 != 0) {
        // 0x80225A50: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225B18;
    }
    // 0x80225A50: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225A54: jal         0x8006033C
    // 0x80225A58: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_8006033C_3B73C(rdram, ctx);
        goto after_23;
    // 0x80225A58: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_23:
    // 0x80225A5C: beq         $v0, $zero, L_80225B1C
    if (ctx->r2 == 0) {
        // 0x80225A60: nop
    
            goto L_80225B1C;
    }
    // 0x80225A60: nop

    // 0x80225A64: jal         0x80060590
    // 0x80225A68: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_80060590_3B990(rdram, ctx);
        goto after_24;
    // 0x80225A68: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_24:
    // 0x80225A6C: jal         0x80060690
    // 0x80225A70: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80060690_3BA90(rdram, ctx);
        goto after_25;
    // 0x80225A70: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_25:
    // 0x80225A74: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80225A78: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225A7C: j           L_80225B1C
    // 0x80225A80: sb          $v0, -0x3A4C($at)
    MEM_B(-0X3A4C, ctx->r1) = ctx->r2;
        goto L_80225B1C;
    // 0x80225A80: sb          $v0, -0x3A4C($at)
    MEM_B(-0X3A4C, ctx->r1) = ctx->r2;
L_80225A84:
    // 0x80225A84: jal         0x8006033C
    // 0x80225A88: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_26;
    // 0x80225A88: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_26:
    // 0x80225A8C: beq         $v0, $zero, L_80225B1C
    if (ctx->r2 == 0) {
        // 0x80225A90: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80225B1C;
    }
    // 0x80225A90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225A94: jal         0x800616FC
    // 0x80225A98: addiu       $a1, $zero, 0x67
    ctx->r5 = ADD32(0, 0X67);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_27;
    // 0x80225A98: addiu       $a1, $zero, 0x67
    ctx->r5 = ADD32(0, 0X67);
    after_27:
    // 0x80225A9C: jal         0x802284F8
    // 0x80225AA0: nop

    func_802284F8_ovl7(rdram, ctx);
        goto after_28;
    // 0x80225AA0: nop

    after_28:
    // 0x80225AA4: jal         0x802283FC
    // 0x80225AA8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_802283FC_ovl7(rdram, ctx);
        goto after_29;
    // 0x80225AA8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_29:
    // 0x80225AAC: j           L_80225B18
    // 0x80225AB0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_80225B18;
    // 0x80225AB0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225AB4:
    // 0x80225AB4: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80225AB8: lw          $s0, -0x3A2C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X3A2C);
    // 0x80225ABC: jal         0x80060690
    // 0x80225AC0: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    func_80060690_3BA90(rdram, ctx);
        goto after_30;
    // 0x80225AC0: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    after_30:
    // 0x80225AC4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225AC8: sw          $s0, -0x3A2C($at)
    MEM_W(-0X3A2C, ctx->r1) = ctx->r16;
    // 0x80225ACC: j           L_80225B18
    // 0x80225AD0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80225B18;
    // 0x80225AD0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80225AD4:
    // 0x80225AD4: jal         0x8006033C
    // 0x80225AD8: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    func_8006033C_3B73C(rdram, ctx);
        goto after_31;
    // 0x80225AD8: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    after_31:
    // 0x80225ADC: beq         $v0, $zero, L_80225B1C
    if (ctx->r2 == 0) {
        // 0x80225AE0: nop
    
            goto L_80225B1C;
    }
    // 0x80225AE0: nop

    // 0x80225AE4: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80225AE8: lw          $a0, -0x3A2C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A2C);
    // 0x80225AEC: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x80225AF0: beq         $v0, $zero, L_80225B00
    if (ctx->r2 == 0) {
        // 0x80225AF4: nop
    
            goto L_80225B00;
    }
    // 0x80225AF4: nop

    // 0x80225AF8: jal         0x8004F418
    // 0x80225AFC: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_32;
    // 0x80225AFC: nop

    after_32:
L_80225B00:
    // 0x80225B00: jal         0x80060690
    // 0x80225B04: addiu       $a0, $zero, 0x61
    ctx->r4 = ADD32(0, 0X61);
    func_80060690_3BA90(rdram, ctx);
        goto after_33;
    // 0x80225B04: addiu       $a0, $zero, 0x61
    ctx->r4 = ADD32(0, 0X61);
    after_33:
    // 0x80225B08: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
L_80225B0C:
    // 0x80225B0C: jal         0x8006036C
    // 0x80225B10: nop

    func_8006036C_3B76C(rdram, ctx);
        goto after_34;
    // 0x80225B10: nop

    after_34:
L_80225B14:
    // 0x80225B14: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225B18:
    // 0x80225B18: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
L_80225B1C:
    // 0x80225B1C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225B20: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225B24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225B28: jr          $ra
    // 0x80225B2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225B2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233E50_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233E50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233E54: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233E58: jal         0x8004F4F8
    // 0x80233E5C: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80233E5C: nop

    after_0:
    // 0x80233E60: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233E64: jr          $ra
    // 0x80233E68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233E68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A674_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A674: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022A678: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A67C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A680: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022A684: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022A688: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022A68C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A690: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A694: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022A698: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022A69C: beq         $v1, $zero, L_8022A6B8
    if (ctx->r3 == 0) {
        // 0x8022A6A0: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022A6B8;
    }
    // 0x8022A6A0: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022A6A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A6A8: beq         $v1, $v0, L_8022A6F0
    if (ctx->r3 == ctx->r2) {
        // 0x8022A6AC: nop
    
            goto L_8022A6F0;
    }
    // 0x8022A6AC: nop

    // 0x8022A6B0: j           L_8022A858
    // 0x8022A6B4: nop

        goto L_8022A858;
    // 0x8022A6B4: nop

L_8022A6B8:
    // 0x8022A6B8: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8022A6BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A6C0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A6C4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022A6C8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022A6CC: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8022A6D0: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x8022A6D4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022A6D8: beq         $v1, $zero, L_8022A6E8
    if (ctx->r3 == 0) {
        // 0x8022A6DC: sb          $v0, 0xAC($s0)
        MEM_B(0XAC, ctx->r16) = ctx->r2;
            goto L_8022A6E8;
    }
    // 0x8022A6DC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A6E0: j           L_8022A6EC
    // 0x8022A6E4: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
        goto L_8022A6EC;
    // 0x8022A6E4: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
L_8022A6E8:
    // 0x8022A6E8: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
L_8022A6EC:
    // 0x8022A6EC: sw          $v0, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->r2;
L_8022A6F0:
    // 0x8022A6F0: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x8022A6F4: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x8022A6F8: bne         $v0, $zero, L_8022A70C
    if (ctx->r2 != 0) {
        // 0x8022A6FC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022A70C;
    }
    // 0x8022A6FC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A700: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x8022A704: j           L_8022A858
    // 0x8022A708: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
        goto L_8022A858;
    // 0x8022A708: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8022A70C:
    // 0x8022A70C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A710: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x8022A714: jal         0x8004F820
    // 0x8022A718: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022A718: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_0:
    // 0x8022A71C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A720: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A724: bltzl       $v0, L_8022A72C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022A728: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022A72C;
    }
    goto skip_0;
    // 0x8022A728: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8022A72C:
    // 0x8022A72C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A730: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A734: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8022A738: beq         $v0, $zero, L_8022A778
    if (ctx->r2 == 0) {
        // 0x8022A73C: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022A778;
    }
    // 0x8022A73C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022A740: lw          $v0, 0x80($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X80);
    // 0x8022A744: lw          $v1, 0x34($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X34);
    // 0x8022A748: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022A74C: beq         $v0, $zero, L_8022A778
    if (ctx->r2 == 0) {
        // 0x8022A750: nop
    
            goto L_8022A778;
    }
    // 0x8022A750: nop

    // 0x8022A754: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022A758: bne         $v0, $zero, L_8022A764
    if (ctx->r2 != 0) {
        // 0x8022A75C: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022A764;
    }
    // 0x8022A75C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022A760: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8022A764:
    // 0x8022A764: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022A768: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022A76C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022A770: j           L_8022A858
    // 0x8022A774: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022A858;
    // 0x8022A774: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022A778:
    // 0x8022A778: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A77C: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x8022A780: addiu       $s3, $s0, 0x14
    ctx->r19 = ADD32(ctx->r16, 0X14);
    // 0x8022A784: jal         0x8004F820
    // 0x8022A788: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022A788: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_1:
    // 0x8022A78C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A790: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A794: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022A798: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022A79C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A7A0: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022A7A4: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022A7A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A7AC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A7B0: jal         0x8004DA90
    // 0x8022A7B4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022A7B4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022A7B8: jal         0x80040F30
    // 0x8022A7BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022A7BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022A7C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A7C4: jal         0x8003E934
    // 0x8022A7C8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x8022A7C8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_4:
    // 0x8022A7CC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022A7D0: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022A7D4: lh          $a0, 0x2E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2E);
    // 0x8022A7D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A7DC: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8022A7E0: slti        $v1, $v1, 0x11
    ctx->r3 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
    // 0x8022A7E4: bne         $v1, $zero, L_8022A820
    if (ctx->r3 != 0) {
        // 0x8022A7E8: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8022A820;
    }
    // 0x8022A7E8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022A7EC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022A7F0: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022A7F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A7F8: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022A7FC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022A800: jal         0x8009A3B4
    // 0x8022A804: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022A804: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_5:
    // 0x8022A808: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022A80C: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022A810: jal         0x8009A3B4
    // 0x8022A814: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022A814: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x8022A818: j           L_8022A858
    // 0x8022A81C: nop

        goto L_8022A858;
    // 0x8022A81C: nop

L_8022A820:
    // 0x8022A820: andi        $v0, $s1, 0xF00
    ctx->r2 = ctx->r17 & 0XF00;
    // 0x8022A824: beq         $v0, $zero, L_8022A840
    if (ctx->r2 == 0) {
        // 0x8022A828: nop
    
            goto L_8022A840;
    }
    // 0x8022A828: nop

    // 0x8022A82C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A830: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022A834: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A838: j           L_8022A858
    // 0x8022A83C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8022A858;
    // 0x8022A83C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022A840:
    // 0x8022A840: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x8022A844: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x8022A848: bne         $v0, $zero, L_8022A858
    if (ctx->r2 != 0) {
        // 0x8022A84C: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022A858;
    }
    // 0x8022A84C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022A850: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022A854: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022A858:
    // 0x8022A858: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022A85C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A860: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022A864: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A868: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A86C: jr          $ra
    // 0x8022A870: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022A870: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023312C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023312C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233130: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233134: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233138: beq         $a1, $zero, L_80233184
    if (ctx->r5 == 0) {
        // 0x8023313C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80233184;
    }
    // 0x8023313C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233140: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80233144: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233148: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8023314C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80233150: sltiu       $v0, $v0, 0x3D
    ctx->r2 = ctx->r2 < 0X3D ? 1 : 0;
    // 0x80233154: bne         $v0, $zero, L_80233184
    if (ctx->r2 != 0) {
        // 0x80233158: nop
    
            goto L_80233184;
    }
    // 0x80233158: nop

    // 0x8023315C: jal         0x800A3450
    // 0x80233160: sh          $zero, 0x348($s0)
    MEM_H(0X348, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80233160: sh          $zero, 0x348($s0)
    MEM_H(0X348, ctx->r16) = 0;
    after_0:
    // 0x80233164: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x80233168: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8023316C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80233170: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80233174: addiu       $v0, $v0, 0x7D0
    ctx->r2 = ADD32(ctx->r2, 0X7D0);
    // 0x80233178: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023317C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80233180: sh          $v1, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r3;
L_80233184:
    // 0x80233184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233188: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023318C: jr          $ra
    // 0x80233190: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233190: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226038_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226038: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022603C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226040: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226048: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022604C: bne         $v0, $zero, L_80226064
    if (ctx->r2 != 0) {
        // 0x80226050: nop
    
            goto L_80226064;
    }
    // 0x80226050: nop

    // 0x80226054: jal         0x802283FC
    // 0x80226058: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_802283FC_ovl7(rdram, ctx);
        goto after_0;
    // 0x80226058: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x8022605C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226060: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226064:
    // 0x80226064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226068: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022606C: jr          $ra
    // 0x80226070: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226070: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225150_ovl8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80225154: addiu       $v0, $v0, 0x5C80
    ctx->r2 = ADD32(ctx->r2, 0X5C80);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80225164: addiu       $v0, $v0, 0x5CC0
    ctx->r2 = ADD32(ctx->r2, 0X5CC0);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80225174: addiu       $v0, $v0, 0x5CC4
    ctx->r2 = ADD32(ctx->r2, 0X5CC4);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80225184: addiu       $v0, $v0, 0x5CC8
    ctx->r2 = ADD32(ctx->r2, 0X5CC8);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80225194: addiu       $v0, $v0, 0x5CCC
    ctx->r2 = ADD32(ctx->r2, 0X5CCC);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x802251A4: addiu       $v0, $v0, 0x5D50
    ctx->r2 = ADD32(ctx->r2, 0X5D50);
    // 0x802251A8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802251AC: jr          $ra
    // 0x802251B0: sw          $v0, -0x2344($at)
    MEM_W(-0X2344, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802251B0: sw          $v0, -0x2344($at)
    MEM_W(-0X2344, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_802253D8_ovl8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253D8: jr          $ra
    // 0x802253DC: nop

    TRACE_RETURN()
    return;
    // 0x802253DC: nop

;}
RECOMP_FUNC void func_802255F8_ovl8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802255F8: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x802255FC: lw          $v0, 0x10($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X10);
    // 0x80225600: bne         $v0, $zero, L_80225664
    if (ctx->r2 != 0) {
        // 0x80225604: addiu       $v0, $zero, 0x82
        ctx->r2 = ADD32(0, 0X82);
            goto L_80225664;
    }
    // 0x80225604: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x80225608: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x8022560C: addiu       $a2, $a2, 0x4430
    ctx->r6 = ADD32(ctx->r6, 0X4430);
    // 0x80225610: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x80225614: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225618: lhu         $a0, 0x44C0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X44C0);
    // 0x8022561C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80225620: lhu         $a1, 0x4488($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X4488);
    // 0x80225624: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225628: sh          $v0, 0x443C($at)
    MEM_H(0X443C, ctx->r1) = ctx->r2;
    // 0x8022562C: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80225630: addiu       $a0, $a0, -0x38
    ctx->r4 = ADD32(ctx->r4, -0X38);
    // 0x80225634: addiu       $a1, $a1, -0x10
    ctx->r5 = ADD32(ctx->r5, -0X10);
    // 0x80225638: sb          $v1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r3;
    // 0x8022563C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225640: sh          $a0, 0x44C0($at)
    MEM_H(0X44C0, ctx->r1) = ctx->r4;
    // 0x80225644: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225648: sh          $a1, 0x4488($at)
    MEM_H(0X4488, ctx->r1) = ctx->r5;
    // 0x8022564C: lw          $v1, 0x24($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X24);
    // 0x80225650: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225654: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225658: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022565C: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225660: sw          $v0, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r2;
L_80225664:
    // 0x80225664: lw          $v1, 0x10($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X10);
    // 0x80225668: addiu       $v0, $zero, 0x898
    ctx->r2 = ADD32(0, 0X898);
    // 0x8022566C: bne         $v1, $v0, L_80225688
    if (ctx->r3 != ctx->r2) {
        // 0x80225670: nop
    
            goto L_80225688;
    }
    // 0x80225670: nop

    // 0x80225674: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80225678: addiu       $v1, $v1, 0x4430
    ctx->r3 = ADD32(ctx->r3, 0X4430);
    // 0x8022567C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225680: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225684: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_80225688:
    // 0x80225688: lbu         $v0, 0x6($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X6);
    // 0x8022568C: bne         $v0, $zero, L_802256F0
    if (ctx->r2 != 0) {
        // 0x80225690: nop
    
            goto L_802256F0;
    }
    // 0x80225690: nop

    // 0x80225694: lw          $v0, 0x10($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X10);
    // 0x80225698: slti        $v0, $v0, 0x899
    ctx->r2 = SIGNED(ctx->r2) < 0X899 ? 1 : 0;
    // 0x8022569C: bne         $v0, $zero, L_802256F0
    if (ctx->r2 != 0) {
        // 0x802256A0: nop
    
            goto L_802256F0;
    }
    // 0x802256A0: nop

    // 0x802256A4: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x802256A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802256AC: bne         $v0, $zero, L_802256F0
    if (ctx->r2 != 0) {
        // 0x802256B0: sw          $v0, 0xC($a3)
        MEM_W(0XC, ctx->r7) = ctx->r2;
            goto L_802256F0;
    }
    // 0x802256B0: sw          $v0, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r2;
    // 0x802256B4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802256B8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802256BC: addiu       $v1, $v1, 0x443C
    ctx->r3 = ADD32(ctx->r3, 0X443C);
    // 0x802256C0: sw          $v0, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r2;
    // 0x802256C4: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x802256C8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802256CC: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x802256D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802256D4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802256D8: addiu       $v1, $zero, -0xB
    ctx->r3 = ADD32(0, -0XB);
    // 0x802256DC: bne         $v0, $v1, L_802256F0
    if (ctx->r2 != ctx->r3) {
        // 0x802256E0: nop
    
            goto L_802256F0;
    }
    // 0x802256E0: nop

    // 0x802256E4: lbu         $v0, 0x6($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X6);
    // 0x802256E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802256EC: sb          $v0, 0x6($a3)
    MEM_B(0X6, ctx->r7) = ctx->r2;
L_802256F0:
    // 0x802256F0: jr          $ra
    // 0x802256F4: nop

    TRACE_RETURN()
    return;
    // 0x802256F4: nop

    // 0x802256F8: nop

    // 0x802256FC: nop

;}
RECOMP_FUNC void func_80225A54_ovl8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225A58: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225A5C: bltz        $a2, L_80225B4C
    if (SIGNED(ctx->r6) < 0) {
        // 0x80225A60: addu        $t1, $a1, $zero
        ctx->r9 = ADD32(ctx->r5, 0);
            goto L_80225B4C;
    }
    // 0x80225A60: addu        $t1, $a1, $zero
    ctx->r9 = ADD32(ctx->r5, 0);
    // 0x80225A64: slti        $v0, $a2, 0x400
    ctx->r2 = SIGNED(ctx->r6) < 0X400 ? 1 : 0;
    // 0x80225A68: beq         $v0, $zero, L_80225B4C
    if (ctx->r2 == 0) {
        // 0x80225A6C: andi        $v1, $a3, 0xFF
        ctx->r3 = ctx->r7 & 0XFF;
            goto L_80225B4C;
    }
    // 0x80225A6C: andi        $v1, $a3, 0xFF
    ctx->r3 = ctx->r7 & 0XFF;
    // 0x80225A70: lui         $t0, 0x801A
    ctx->r8 = S32(0X801A << 16);
    // 0x80225A74: lw          $t0, -0x5858($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X5858);
    // 0x80225A78: addiu       $v0, $t0, 0x28
    ctx->r2 = ADD32(ctx->r8, 0X28);
    // 0x80225A7C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80225A80: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x80225A84: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x80225A88: sb          $v0, 0x7($t0)
    MEM_B(0X7, ctx->r8) = ctx->r2;
    // 0x80225A8C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80225A90: beq         $v1, $v0, L_80225A9C
    if (ctx->r3 == ctx->r2) {
        // 0x80225A94: addiu       $v0, $zero, 0x2E
        ctx->r2 = ADD32(0, 0X2E);
            goto L_80225A9C;
    }
    // 0x80225A94: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x80225A98: sb          $v0, 0x7($t0)
    MEM_B(0X7, ctx->r8) = ctx->r2;
L_80225A9C:
    // 0x80225A9C: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x80225AA0: sb          $a0, 0xD($t0)
    MEM_B(0XD, ctx->r8) = ctx->r4;
    // 0x80225AA4: lbu         $v1, 0xD($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0XD);
    // 0x80225AA8: addiu       $a1, $a2, 0x1
    ctx->r5 = ADD32(ctx->r6, 0X1);
    // 0x80225AAC: addiu       $v0, $zero, 0x7C00
    ctx->r2 = ADD32(0, 0X7C00);
    // 0x80225AB0: sh          $v0, 0xE($t0)
    MEM_H(0XE, ctx->r8) = ctx->r2;
    // 0x80225AB4: sra         $v0, $a2, 8
    ctx->r2 = S32(SIGNED(ctx->r6) >> 8);
    // 0x80225AB8: addiu       $v0, $v0, 0x15
    ctx->r2 = ADD32(ctx->r2, 0X15);
    // 0x80225ABC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80225AC0: sb          $a3, 0x6($t0)
    MEM_B(0X6, ctx->r8) = ctx->r7;
    // 0x80225AC4: sb          $a3, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r7;
    // 0x80225AC8: sb          $a3, 0x4($t0)
    MEM_B(0X4, ctx->r8) = ctx->r7;
    // 0x80225ACC: sh          $v0, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r2;
    // 0x80225AD0: sb          $zero, 0x1C($t0)
    MEM_B(0X1C, ctx->r8) = 0;
    // 0x80225AD4: sb          $zero, 0xC($t0)
    MEM_B(0XC, ctx->r8) = 0;
    // 0x80225AD8: sb          $a2, 0x24($t0)
    MEM_B(0X24, ctx->r8) = ctx->r6;
    // 0x80225ADC: sb          $a2, 0x14($t0)
    MEM_B(0X14, ctx->r8) = ctx->r6;
    // 0x80225AE0: sb          $a0, 0x15($t0)
    MEM_B(0X15, ctx->r8) = ctx->r4;
    // 0x80225AE4: sb          $a1, 0x25($t0)
    MEM_B(0X25, ctx->r8) = ctx->r5;
    // 0x80225AE8: sltiu       $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 < 0XFF ? 1 : 0;
    // 0x80225AEC: bne         $v1, $zero, L_80225B08
    if (ctx->r3 != 0) {
        // 0x80225AF0: sb          $a1, 0x1D($t0)
        MEM_B(0X1D, ctx->r8) = ctx->r5;
            goto L_80225B08;
    }
    // 0x80225AF0: sb          $a1, 0x1D($t0)
    MEM_B(0X1D, ctx->r8) = ctx->r5;
    // 0x80225AF4: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
    // 0x80225AF8: sb          $v0, 0x15($t0)
    MEM_B(0X15, ctx->r8) = ctx->r2;
    // 0x80225AFC: sb          $v0, 0xD($t0)
    MEM_B(0XD, ctx->r8) = ctx->r2;
    // 0x80225B00: sb          $a2, 0x25($t0)
    MEM_B(0X25, ctx->r8) = ctx->r6;
    // 0x80225B04: sb          $a2, 0x1D($t0)
    MEM_B(0X1D, ctx->r8) = ctx->r6;
L_80225B08:
    // 0x80225B08: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225B0C: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80225B10: addiu       $v1, $t1, 0x1
    ctx->r3 = ADD32(ctx->r9, 0X1);
    // 0x80225B14: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80225B18: sh          $v0, 0x18($t0)
    MEM_H(0X18, ctx->r8) = ctx->r2;
    // 0x80225B1C: sh          $v0, 0x8($t0)
    MEM_H(0X8, ctx->r8) = ctx->r2;
    // 0x80225B20: addiu       $v0, $zero, 0x11F
    ctx->r2 = ADD32(0, 0X11F);
    // 0x80225B24: sh          $v0, 0x20($t0)
    MEM_H(0X20, ctx->r8) = ctx->r2;
    // 0x80225B28: sh          $v0, 0x10($t0)
    MEM_H(0X10, ctx->r8) = ctx->r2;
    // 0x80225B2C: addu        $v0, $t1, $zero
    ctx->r2 = ADD32(ctx->r9, 0);
    // 0x80225B30: addu        $a1, $t0, $zero
    ctx->r5 = ADD32(ctx->r8, 0);
    // 0x80225B34: sh          $v0, 0x12($t0)
    MEM_H(0X12, ctx->r8) = ctx->r2;
    // 0x80225B38: sh          $v0, 0xA($t0)
    MEM_H(0XA, ctx->r8) = ctx->r2;
    // 0x80225B3C: sh          $v1, 0x22($t0)
    MEM_H(0X22, ctx->r8) = ctx->r3;
    // 0x80225B40: sh          $v1, 0x1A($t0)
    MEM_H(0X1A, ctx->r8) = ctx->r3;
    // 0x80225B44: jal         0x8002FD30
    // 0x80225B48: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_8002FD30_B130(rdram, ctx);
        goto after_0;
    // 0x80225B48: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_0:
L_80225B4C:
    // 0x80225B4C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225B50: jr          $ra
    // 0x80225B54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225B54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80225B58: nop

    // 0x80225B5C: nop

;}
RECOMP_FUNC void func_802253C0_ovl8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253C0: jr          $ra
    // 0x802253C4: nop

    TRACE_RETURN()
    return;
    // 0x802253C4: nop

;}
RECOMP_FUNC void func_802253C8_ovl8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253C8: jr          $ra
    // 0x802253CC: nop

    TRACE_RETURN()
    return;
    // 0x802253CC: nop

;}
RECOMP_FUNC void func_80225700_ovl8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225700: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225704: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225708: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8022570C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225710: beq         $v1, $v0, L_8022575C
    if (ctx->r3 == ctx->r2) {
        // 0x80225714: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022575C;
    }
    // 0x80225714: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225718: beql        $v0, $zero, L_80225730
    if (ctx->r2 == 0) {
        // 0x8022571C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225730;
    }
    goto skip_0;
    // 0x8022571C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80225720: beq         $v1, $zero, L_80225748
    if (ctx->r3 == 0) {
        // 0x80225724: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_80225748;
    }
    // 0x80225724: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80225728: j           L_80225830
    // 0x8022572C: nop

        goto L_80225830;
    // 0x8022572C: nop

L_80225730:
    // 0x80225730: beq         $v1, $v0, L_802257C4
    if (ctx->r3 == ctx->r2) {
        // 0x80225734: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802257C4;
    }
    // 0x80225734: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225738: beq         $v1, $v0, L_80225810
    if (ctx->r3 == ctx->r2) {
        // 0x8022573C: nop
    
            goto L_80225810;
    }
    // 0x8022573C: nop

    // 0x80225740: j           L_80225830
    // 0x80225744: nop

        goto L_80225830;
    // 0x80225744: nop

L_80225748:
    // 0x80225748: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022574C: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x80225750: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80225754: j           L_80225804
    // 0x80225758: sb          $v1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r3;
        goto L_80225804;
    // 0x80225758: sb          $v1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r3;
L_8022575C:
    // 0x8022575C: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
    // 0x80225760: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80225764: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x80225768: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022576C: bgtz        $v0, L_80225784
    if (SIGNED(ctx->r2) > 0) {
        // 0x80225770: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_80225784;
    }
    // 0x80225770: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80225774: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    // 0x80225778: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x8022577C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80225780: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
L_80225784:
    // 0x80225784: lbu         $v0, 0xD($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD);
    // 0x80225788: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022578C: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x80225790: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80225794: bgtz        $v0, L_80225830
    if (SIGNED(ctx->r2) > 0) {
        // 0x80225798: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_80225830;
    }
    // 0x80225798: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022579C: lhu         $v0, 0x16($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X16);
    // 0x802257A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802257A4: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x802257A8: lh          $v0, 0x16($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X16);
    // 0x802257AC: slti        $v0, $v0, 0xDC
    ctx->r2 = SIGNED(ctx->r2) < 0XDC ? 1 : 0;
    // 0x802257B0: bne         $v0, $zero, L_80225830
    if (ctx->r2 != 0) {
        // 0x802257B4: sb          $v1, 0xD($a0)
        MEM_B(0XD, ctx->r4) = ctx->r3;
            goto L_80225830;
    }
    // 0x802257B4: sb          $v1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r3;
    // 0x802257B8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802257BC: j           L_80225808
    // 0x802257C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80225808;
    // 0x802257C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802257C4:
    // 0x802257C4: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
    // 0x802257C8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802257CC: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x802257D0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802257D4: bgtz        $v0, L_80225830
    if (SIGNED(ctx->r2) > 0) {
        // 0x802257D8: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_80225830;
    }
    // 0x802257D8: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x802257DC: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    // 0x802257E0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802257E4: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x802257E8: lh          $v0, 0x14($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X14);
    // 0x802257EC: slti        $v0, $v0, -0x121
    ctx->r2 = SIGNED(ctx->r2) < -0X121 ? 1 : 0;
    // 0x802257F0: beq         $v0, $zero, L_80225830
    if (ctx->r2 == 0) {
        // 0x802257F4: sb          $v1, 0xC($a0)
        MEM_B(0XC, ctx->r4) = ctx->r3;
            goto L_80225830;
    }
    // 0x802257F4: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x802257F8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802257FC: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x80225800: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
L_80225804:
    // 0x80225804: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80225808:
    // 0x80225808: j           L_80225830
    // 0x8022580C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
        goto L_80225830;
    // 0x8022580C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80225810:
    // 0x80225810: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
    // 0x80225814: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80225818: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8022581C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80225820: bgtz        $v0, L_80225830
    if (SIGNED(ctx->r2) > 0) {
        // 0x80225824: nop
    
            goto L_80225830;
    }
    // 0x80225824: nop

    // 0x80225828: jal         0x8004F418
    // 0x8022582C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022582C: nop

    after_0:
L_80225830:
    // 0x80225830: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225834: jr          $ra
    // 0x80225838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022583C_ovl8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022583C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225840: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225844: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225848: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022584C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80225850: bne         $v0, $zero, L_802258A4
    if (ctx->r2 != 0) {
        // 0x80225854: nop
    
            goto L_802258A4;
    }
    // 0x80225854: nop

    // 0x80225858: jal         0x8004D5D4
    // 0x8022585C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022585C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80225860: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80225864: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x80225868: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022586C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80225870: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80225874: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80225878: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022587C: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
    // 0x80225880: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80225884: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80225888: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022588C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80225890: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80225894: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80225898: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022589C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x802258A0: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
L_802258A4:
    // 0x802258A4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802258A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802258AC: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x802258B0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802258B4: lw          $v0, 0x5F40($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5F40);
    // 0x802258B8: jalr        $v0
    // 0x802258BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x802258BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802258C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802258C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802258C8: jal         0x80050294
    // 0x802258CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x802258CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x802258D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802258D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802258D8: jr          $ra
    // 0x802258DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802258DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225348_ovl8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225348: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022534C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225350: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225354: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225358: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022535C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225360: beq         $v1, $v0, L_8022538C
    if (ctx->r3 == ctx->r2) {
        // 0x80225364: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022538C;
    }
    // 0x80225364: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225368: beq         $v0, $zero, L_802253B0
    if (ctx->r2 == 0) {
        // 0x8022536C: nop
    
            goto L_802253B0;
    }
    // 0x8022536C: nop

    // 0x80225370: bne         $v1, $zero, L_802253B0
    if (ctx->r3 != 0) {
        // 0x80225374: nop
    
            goto L_802253B0;
    }
    // 0x80225374: nop

    // 0x80225378: jal         0x80036E48
    // 0x8022537C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x8022537C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x80225380: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225384: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225388: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022538C:
    // 0x8022538C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225390: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80225394: bne         $v0, $zero, L_802253B0
    if (ctx->r2 != 0) {
        // 0x80225398: nop
    
            goto L_802253B0;
    }
    // 0x80225398: nop

    // 0x8022539C: jal         0x80060690
    // 0x802253A0: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x802253A0: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    after_1:
    // 0x802253A4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802253A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802253AC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802253B0:
    // 0x802253B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802253B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802253B8: jr          $ra
    // 0x802253BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802253BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802258F0_ovl8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802258F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802258F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802258F8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802258FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225900: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80225904: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225908: lw          $v0, 0x5F50($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5F50);
    // 0x8022590C: jalr        $v0
    // 0x80225910: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225910: nop

    after_0:
    // 0x80225914: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225918: jr          $ra
    // 0x8022591C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022591C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802253D0_ovl8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253D0: jr          $ra
    // 0x802253D4: nop

    TRACE_RETURN()
    return;
    // 0x802253D4: nop

;}
RECOMP_FUNC void func_802258E0_ovl8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802258E0: jr          $ra
    // 0x802258E4: nop

    TRACE_RETURN()
    return;
    // 0x802258E4: nop

    // 0x802258E8: nop

    // 0x802258EC: nop

;}
RECOMP_FUNC void func_80225310_ovl8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225310: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225314: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80225318: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022531C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225320: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225324: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80225328: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022532C: lw          $v0, 0x5EB4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5EB4);
    // 0x80225330: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80225334: jalr        $v0
    // 0x80225338: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225338: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_0:
    // 0x8022533C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225340: jr          $ra
    // 0x80225344: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225344: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802253E0_ovl8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802253E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802253E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802253EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802253F0: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802253F4: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x802253F8: beq         $v0, $zero, L_802255E8
    if (ctx->r2 == 0) {
        // 0x802253FC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802255E8;
    }
    // 0x802253FC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80225400: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80225404: addu        $at, $at, $v0
    gpr jr_addend_8022540C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225408: lw          $v0, 0x5F60($at)
    ctx->r2 = ADD32(ctx->r1, 0X5F60);
    // 0x8022540C: jr          $v0
    // 0x80225410: nop

    switch (jr_addend_8022540C >> 2) {
        case 0: goto L_80225414; break;
        case 1: goto L_8022543C; break;
        case 2: goto L_80225458; break;
        case 3: goto L_80225474; break;
        case 4: goto L_80225494; break;
        case 5: goto L_802254E0; break;
        case 6: goto L_802255E8; break;
        case 7: goto L_802255E8; break;
        case 8: goto L_802255E8; break;
        case 9: goto L_802255E8; break;
        case 10: goto L_80225524; break;
        default: switch_error(__func__, 0x8022540C, 0x80225F60);
    }
    // 0x80225410: nop

L_80225414:
    // 0x80225414: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225418: jal         0x8006FF84
    // 0x8022541C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8022541C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x80225420: beq         $v0, $zero, L_802255E8
    if (ctx->r2 == 0) {
        // 0x80225424: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802255E8;
    }
    // 0x80225424: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225428: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022542C: jal         0x8005F6B4
    // 0x80225430: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_1;
    // 0x80225430: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80225434: j           L_80225484
    // 0x80225438: nop

        goto L_80225484;
    // 0x80225438: nop

L_8022543C:
    // 0x8022543C: jal         0x8002A4A4
    // 0x80225440: nop

    func_8002A4A4_58A4(rdram, ctx);
        goto after_2;
    // 0x80225440: nop

    after_2:
    // 0x80225444: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80225448: jal         0x80036B1C
    // 0x8022544C: ori         $a0, $a0, 0x4200
    ctx->r4 = ctx->r4 | 0X4200;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_3;
    // 0x8022544C: ori         $a0, $a0, 0x4200
    ctx->r4 = ctx->r4 | 0X4200;
    after_3:
    // 0x80225450: j           L_80225484
    // 0x80225454: nop

        goto L_80225484;
    // 0x80225454: nop

L_80225458:
    // 0x80225458: jal         0x80036B7C
    // 0x8022545C: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_4;
    // 0x8022545C: nop

    after_4:
    // 0x80225460: beq         $v0, $zero, L_802255E8
    if (ctx->r2 == 0) {
        // 0x80225464: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_802255E8;
    }
    // 0x80225464: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80225468: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022546C: j           L_80225488
    // 0x80225470: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
        goto L_80225488;
    // 0x80225470: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
L_80225474:
    // 0x80225474: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80225478: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022547C: bne         $v0, $zero, L_802255E8
    if (ctx->r2 != 0) {
        // 0x80225480: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_802255E8;
    }
    // 0x80225480: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_80225484:
    // 0x80225484: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
L_80225488:
    // 0x80225488: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022548C: j           L_802255E8
    // 0x80225490: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_802255E8;
    // 0x80225490: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225494:
    // 0x80225494: jal         0x80036E48
    // 0x80225498: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_5;
    // 0x80225498: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_5:
    // 0x8022549C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802254A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802254A4: jal         0x8005F6B4
    // 0x802254A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_6;
    // 0x802254A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x802254AC: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x802254B0: addiu       $a0, $a0, 0x5ED0
    ctx->r4 = ADD32(ctx->r4, 0X5ED0);
    // 0x802254B4: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x802254B8: addiu       $v0, $v0, 0x5EE4
    ctx->r2 = ADD32(ctx->r2, 0X5EE4);
    // 0x802254BC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802254C0: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x802254C4: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x802254C8: addiu       $v0, $v0, 0x5F30
    ctx->r2 = ADD32(ctx->r2, 0X5F30);
    // 0x802254CC: jal         0x8005FA7C
    // 0x802254D0: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_7;
    // 0x802254D0: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    after_7:
    // 0x802254D4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802254D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802254DC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802254E0:
    // 0x802254E0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802254E4: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802254E8: bne         $v0, $zero, L_80225524
    if (ctx->r2 != 0) {
        // 0x802254EC: nop
    
            goto L_80225524;
    }
    // 0x802254EC: nop

    // 0x802254F0: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x802254F4: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x802254F8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802254FC: beq         $v1, $v0, L_80225514
    if (ctx->r3 == ctx->r2) {
        // 0x80225500: nop
    
            goto L_80225514;
    }
    // 0x80225500: nop

    // 0x80225504: jal         0x8006072C
    // 0x80225508: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_8;
    // 0x80225508: nop

    after_8:
    // 0x8022550C: beq         $v0, $zero, L_80225524
    if (ctx->r2 == 0) {
        // 0x80225510: nop
    
            goto L_80225524;
    }
    // 0x80225510: nop

L_80225514:
    // 0x80225514: jal         0x80036E48
    // 0x80225518: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_9;
    // 0x80225518: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_9:
    // 0x8022551C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80225520: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225524:
    // 0x80225524: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80225528: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022552C: beq         $v1, $v0, L_80225544
    if (ctx->r3 == ctx->r2) {
        // 0x80225530: nop
    
            goto L_80225544;
    }
    // 0x80225530: nop

    // 0x80225534: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80225538: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x8022553C: jalr        $v0
    // 0x80225540: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_10;
    // 0x80225540: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
L_80225544:
    // 0x80225544: jal         0x8005FB90
    // 0x80225548: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_11;
    // 0x80225548: nop

    after_11:
    // 0x8022554C: jal         0x80060018
    // 0x80225550: nop

    func_80060018_3B418(rdram, ctx);
        goto after_12;
    // 0x80225550: nop

    after_12:
    // 0x80225554: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225558: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022555C: bne         $v1, $v0, L_802255E8
    if (ctx->r3 != ctx->r2) {
        // 0x80225560: nop
    
            goto L_802255E8;
    }
    // 0x80225560: nop

    // 0x80225564: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225568: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022556C: bne         $v0, $zero, L_802255E8
    if (ctx->r2 != 0) {
        // 0x80225570: addiu       $a0, $zero, 0x56
        ctx->r4 = ADD32(0, 0X56);
            goto L_802255E8;
    }
    // 0x80225570: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x80225574: jal         0x8004CB2C
    // 0x80225578: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_13;
    // 0x80225578: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_13:
    // 0x8022557C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225580: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225584: jal         0x80036B00
    // 0x80225588: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_14;
    // 0x80225588: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_14:
    // 0x8022558C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225590: jal         0x80070050
    // 0x80225594: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_15;
    // 0x80225594: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_15:
    // 0x80225598: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022559C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802255A0: jal         0x80034844
    // 0x802255A4: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_16;
    // 0x802255A4: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_16:
    // 0x802255A8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802255AC: addiu       $v1, $v1, -0x3B96
    ctx->r3 = ADD32(ctx->r3, -0X3B96);
    // 0x802255B0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802255B4: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x802255B8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802255BC: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x802255C0: addiu       $v1, $v1, 0x5448
    ctx->r3 = ADD32(ctx->r3, 0X5448);
    // 0x802255C4: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x802255C8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802255CC: lui         $a0, 0x8006
    ctx->r4 = S32(0X8006 << 16);
    // 0x802255D0: addiu       $a0, $a0, -0x2DC0
    ctx->r4 = ADD32(ctx->r4, -0X2DC0);
    // 0x802255D4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x802255D8: sb          $zero, 0x5449($at)
    MEM_B(0X5449, ctx->r1) = 0;
    // 0x802255DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802255E0: jal         0x800292E8
    // 0x802255E4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_800292E8_46E8(rdram, ctx);
        goto after_17;
    // 0x802255E4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_17:
L_802255E8:
    // 0x802255E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802255EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802255F0: jr          $ra
    // 0x802255F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802255F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225944_ovl8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225944: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80225948: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022594C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80225950: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80225954: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80225958: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022595C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225960: lh          $s2, 0x1A($s1)
    ctx->r18 = MEM_H(ctx->r17, 0X1A);
    // 0x80225964: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80225968: sll         $v0, $s0, 3
    ctx->r2 = S32(ctx->r16 << 3);
L_8022596C:
    // 0x8022596C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80225970: addiu       $a1, $s0, 0x20
    ctx->r5 = ADD32(ctx->r16, 0X20);
    // 0x80225974: addu        $a2, $s2, $s0
    ctx->r6 = ADD32(ctx->r18, ctx->r16);
    // 0x80225978: jal         0x80225A54
    // 0x8022597C: andi        $a3, $v0, 0xF8
    ctx->r7 = ctx->r2 & 0XF8;
    func_80225A54_ovl8(rdram, ctx);
        goto after_0;
    // 0x8022597C: andi        $a3, $v0, 0xF8
    ctx->r7 = ctx->r2 & 0XF8;
    after_0:
    // 0x80225980: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80225984: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x80225988: bne         $v0, $zero, L_8022596C
    if (ctx->r2 != 0) {
        // 0x8022598C: sll         $v0, $s0, 3
        ctx->r2 = S32(ctx->r16 << 3);
            goto L_8022596C;
    }
    // 0x8022598C: sll         $v0, $s0, 3
    ctx->r2 = S32(ctx->r16 << 3);
    // 0x80225990: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80225994: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_80225998:
    // 0x80225998: addiu       $a1, $s0, 0x30
    ctx->r5 = ADD32(ctx->r16, 0X30);
    // 0x8022599C: addiu       $a2, $s0, 0x10
    ctx->r6 = ADD32(ctx->r16, 0X10);
    // 0x802259A0: addu        $a2, $s2, $a2
    ctx->r6 = ADD32(ctx->r18, ctx->r6);
    // 0x802259A4: jal         0x80225A54
    // 0x802259A8: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_80225A54_ovl8(rdram, ctx);
        goto after_1;
    // 0x802259A8: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_1:
    // 0x802259AC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802259B0: slti        $v0, $s0, 0x90
    ctx->r2 = SIGNED(ctx->r16) < 0X90 ? 1 : 0;
    // 0x802259B4: bne         $v0, $zero, L_80225998
    if (ctx->r2 != 0) {
        // 0x802259B8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80225998;
    }
    // 0x802259B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802259BC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x802259C0: addiu       $s3, $zero, 0x10
    ctx->r19 = ADD32(0, 0X10);
    // 0x802259C4: subu        $v0, $s3, $s0
    ctx->r2 = SUB32(ctx->r19, ctx->r16);
L_802259C8:
    // 0x802259C8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802259CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802259D0: addiu       $a1, $s0, 0xC0
    ctx->r5 = ADD32(ctx->r16, 0XC0);
    // 0x802259D4: addiu       $a2, $s0, 0xA0
    ctx->r6 = ADD32(ctx->r16, 0XA0);
    // 0x802259D8: addu        $a2, $s2, $a2
    ctx->r6 = ADD32(ctx->r18, ctx->r6);
    // 0x802259DC: jal         0x80225A54
    // 0x802259E0: andi        $a3, $v0, 0xF8
    ctx->r7 = ctx->r2 & 0XF8;
    func_80225A54_ovl8(rdram, ctx);
        goto after_2;
    // 0x802259E0: andi        $a3, $v0, 0xF8
    ctx->r7 = ctx->r2 & 0XF8;
    after_2:
    // 0x802259E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802259E8: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x802259EC: bne         $v0, $zero, L_802259C8
    if (ctx->r2 != 0) {
        // 0x802259F0: subu        $v0, $s3, $s0
        ctx->r2 = SUB32(ctx->r19, ctx->r16);
            goto L_802259C8;
    }
    // 0x802259F0: subu        $v0, $s3, $s0
    ctx->r2 = SUB32(ctx->r19, ctx->r16);
    // 0x802259F4: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x802259F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802259FC: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x80225A00: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80225A04: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x80225A08: bne         $v0, $zero, L_80225A20
    if (ctx->r2 != 0) {
        // 0x80225A0C: nop
    
            goto L_80225A20;
    }
    // 0x80225A0C: nop

    // 0x80225A10: lhu         $v0, 0x1A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1A);
    // 0x80225A14: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x80225A18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225A1C: sh          $v0, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = ctx->r2;
L_80225A20:
    // 0x80225A20: lh          $v0, 0x1A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1A);
    // 0x80225A24: slti        $v0, $v0, 0x400
    ctx->r2 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x80225A28: bne         $v0, $zero, L_80225A38
    if (ctx->r2 != 0) {
        // 0x80225A2C: nop
    
            goto L_80225A38;
    }
    // 0x80225A2C: nop

    // 0x80225A30: jal         0x8004F62C
    // 0x80225A34: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_3;
    // 0x80225A34: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
L_80225A38:
    // 0x80225A38: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80225A3C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80225A40: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80225A44: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225A48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225A4C: jr          $ra
    // 0x80225A50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80225A50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225920_ovl8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225920: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x80225924: addiu       $v0, $zero, -0xBE
    ctx->r2 = ADD32(0, -0XBE);
    // 0x80225928: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8022592C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80225930: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
    // 0x80225934: sh          $v0, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r2;
    // 0x80225938: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022593C: jr          $ra
    // 0x80225940: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80225940: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
;}
