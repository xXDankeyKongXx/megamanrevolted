#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_802291E8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802291E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802291EC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802291F0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802291F4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802291F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802291FC: lb          $v1, 0x2($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2);
    // 0x80229200: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x80229204: lw          $s0, 0x55FC($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X55FC);
    // 0x80229208: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x8022920C: beq         $v0, $zero, L_802293BC
    if (ctx->r2 == 0) {
        // 0x80229210: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802293BC;
    }
    // 0x80229210: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80229214: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80229218: addu        $at, $at, $v0
    gpr jr_addend_80229220 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022921C: lw          $v0, 0x2C68($at)
    ctx->r2 = ADD32(ctx->r1, 0X2C68);
    // 0x80229220: jr          $v0
    // 0x80229224: nop

    switch (jr_addend_80229220 >> 2) {
        case 0: goto L_802293B0; break;
        case 1: goto L_80229228; break;
        case 2: goto L_8022925C; break;
        case 3: goto L_80229280; break;
        case 4: goto L_802292BC; break;
        case 5: goto L_80229304; break;
        case 6: goto L_80229328; break;
        case 7: goto L_80229370; break;
        case 8: goto L_802293BC; break;
        default: switch_error(__func__, 0x80229220, 0x80252C68);
    }
    // 0x80229224: nop

L_80229228:
    // 0x80229228: jal         0x8006033C
    // 0x8022922C: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022922C: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    after_0:
    // 0x80229230: beq         $v0, $zero, L_802293BC
    if (ctx->r2 == 0) {
        // 0x80229234: addiu       $a0, $zero, 0x60C
        ctx->r4 = ADD32(0, 0X60C);
            goto L_802293BC;
    }
    // 0x80229234: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    // 0x80229238: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022923C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80229240: jal         0x80060590
    // 0x80229244: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80060590_3B990(rdram, ctx);
        goto after_1;
    // 0x80229244: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_1:
    // 0x80229248: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022924C: jal         0x800616FC
    // 0x80229250: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_2;
    // 0x80229250: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_2:
    // 0x80229254: j           L_802293B0
    // 0x80229258: nop

        goto L_802293B0;
    // 0x80229258: nop

L_8022925C:
    // 0x8022925C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229260: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80229264: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80229268: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022926C: bne         $v0, $zero, L_802293BC
    if (ctx->r2 != 0) {
        // 0x80229270: addiu       $a0, $zero, 0x60B
        ctx->r4 = ADD32(0, 0X60B);
            goto L_802293BC;
    }
    // 0x80229270: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    // 0x80229274: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80229278: j           L_802293A8
    // 0x8022927C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_802293A8;
    // 0x8022927C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80229280:
    // 0x80229280: jal         0x8006033C
    // 0x80229284: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80229284: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    after_3:
    // 0x80229288: beq         $v0, $zero, L_802293BC
    if (ctx->r2 == 0) {
        // 0x8022928C: addiu       $a0, $zero, 0x60C
        ctx->r4 = ADD32(0, 0X60C);
            goto L_802293BC;
    }
    // 0x8022928C: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    // 0x80229290: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x80229294: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229298: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022929C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802292A0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802292A4: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x802292A8: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x802292AC: jal         0x80060590
    // 0x802292B0: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    func_80060590_3B990(rdram, ctx);
        goto after_4;
    // 0x802292B0: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    after_4:
    // 0x802292B4: j           L_802293B0
    // 0x802292B8: nop

        goto L_802293B0;
    // 0x802292B8: nop

L_802292BC:
    // 0x802292BC: jal         0x8006033C
    // 0x802292C0: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x802292C0: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    after_5:
    // 0x802292C4: beq         $v0, $zero, L_802293BC
    if (ctx->r2 == 0) {
        // 0x802292C8: addiu       $a0, $zero, 0x60C
        ctx->r4 = ADD32(0, 0X60C);
            goto L_802293BC;
    }
    // 0x802292C8: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    // 0x802292CC: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x802292D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802292D4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802292D8: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802292DC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802292E0: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x802292E4: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802292E8: jal         0x80060590
    // 0x802292EC: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    func_80060590_3B990(rdram, ctx);
        goto after_6;
    // 0x802292EC: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    after_6:
    // 0x802292F0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802292F4: jal         0x800616FC
    // 0x802292F8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_7;
    // 0x802292F8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_7:
    // 0x802292FC: j           L_802293B0
    // 0x80229300: nop

        goto L_802293B0;
    // 0x80229300: nop

L_80229304:
    // 0x80229304: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229308: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022930C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80229310: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229314: bne         $v0, $zero, L_802293BC
    if (ctx->r2 != 0) {
        // 0x80229318: addiu       $a0, $zero, 0x60A
        ctx->r4 = ADD32(0, 0X60A);
            goto L_802293BC;
    }
    // 0x80229318: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    // 0x8022931C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80229320: j           L_802293A8
    // 0x80229324: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_802293A8;
    // 0x80229324: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80229328:
    // 0x80229328: jal         0x8006033C
    // 0x8022932C: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_8;
    // 0x8022932C: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    after_8:
    // 0x80229330: beq         $v0, $zero, L_802293BC
    if (ctx->r2 == 0) {
        // 0x80229334: addiu       $a0, $zero, 0x60C
        ctx->r4 = ADD32(0, 0X60C);
            goto L_802293BC;
    }
    // 0x80229334: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    // 0x80229338: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x8022933C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229340: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80229344: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80229348: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022934C: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x80229350: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80229354: jal         0x80060590
    // 0x80229358: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    func_80060590_3B990(rdram, ctx);
        goto after_9;
    // 0x80229358: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    after_9:
    // 0x8022935C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229360: jal         0x800616FC
    // 0x80229364: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_10;
    // 0x80229364: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_10:
    // 0x80229368: j           L_802293B0
    // 0x8022936C: nop

        goto L_802293B0;
    // 0x8022936C: nop

L_80229370:
    // 0x80229370: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229374: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80229378: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022937C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229380: bne         $v0, $zero, L_802293BC
    if (ctx->r2 != 0) {
        // 0x80229384: addiu       $a0, $zero, 0x61D
        ctx->r4 = ADD32(0, 0X61D);
            goto L_802293BC;
    }
    // 0x80229384: addiu       $a0, $zero, 0x61D
    ctx->r4 = ADD32(0, 0X61D);
    // 0x80229388: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x8022938C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229390: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80229394: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80229398: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022939C: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x802293A0: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x802293A4: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
L_802293A8:
    // 0x802293A8: jal         0x8006036C
    // 0x802293AC: nop

    func_8006036C_3B76C(rdram, ctx);
        goto after_11;
    // 0x802293AC: nop

    after_11:
L_802293B0:
    // 0x802293B0: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x802293B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802293B8: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
L_802293BC:
    // 0x802293BC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802293C0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802293C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802293C8: jr          $ra
    // 0x802293CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802293CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80245CDC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80245CDC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80245CE0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80245CE4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80245CE8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80245CEC: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80245CF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80245CF4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80245CF8: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x80245CFC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80245D00: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80245D04: addiu       $a1, $v1, 0x14
    ctx->r5 = ADD32(ctx->r3, 0X14);
    // 0x80245D08: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80245D0C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80245D10: jal         0x8009A3B4
    // 0x80245D14: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80245D14: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_0:
    // 0x80245D18: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80245D1C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80245D20: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80245D24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80245D28: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80245D2C: jal         0x8009A3B4
    // 0x80245D30: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80245D30: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x80245D34: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x80245D38: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80245D3C: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80245D40: lh          $a2, 0x18($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X18);
    // 0x80245D44: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x80245D48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80245D4C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80245D50: sw          $zero, 0x58($s0)
    MEM_W(0X58, ctx->r16) = 0;
    // 0x80245D54: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80245D58: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80245D5C: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80245D60: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x80245D64: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x80245D68: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x80245D6C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80245D70: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80245D74: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80245D78: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x80245D7C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80245D80: sw          $v1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r3;
    // 0x80245D84: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80245D88: sw          $a2, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r6;
    // 0x80245D8C: jal         0x80031600
    // 0x80245D90: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
    func_80031600_CA00(rdram, ctx);
        goto after_2;
    // 0x80245D90: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
    after_2:
    // 0x80245D94: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80245D98: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80245D9C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80245DA0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80245DA4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80245DA8: jal         0x80031DA8
    // 0x80245DAC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x80245DAC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x80245DB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80245DB4: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80245DB8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80245DBC: jal         0x8004D5D4
    // 0x80245DC0: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_4;
    // 0x80245DC0: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    after_4:
    // 0x80245DC4: lui         $a0, 0x80
    ctx->r4 = S32(0X80 << 16);
    // 0x80245DC8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80245DCC: ori         $a0, $a0, 0x8080
    ctx->r4 = ctx->r4 | 0X8080;
    // 0x80245DD0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x80245DD4: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80245DD8: sw          $a0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r4;
    // 0x80245DDC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80245DE0: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80245DE4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80245DE8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80245DEC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80245DF0: jr          $ra
    // 0x80245DF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80245DF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80247D70_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247D70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80247D74: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80247D78: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80247D7C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80247D80: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80247D84: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80247D88: lw          $v0, 0x22F0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X22F0);
    // 0x80247D8C: jalr        $v0
    // 0x80247D90: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80247D90: nop

    after_0:
    // 0x80247D94: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80247D98: jr          $ra
    // 0x80247D9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80247D9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233AFC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233AFC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80233B00: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80233B04: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80233B08: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80233B0C: lbu         $v0, 0x7($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X7);
    // 0x80233B10: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80233B14: bne         $v0, $zero, L_80233B78
    if (ctx->r2 != 0) {
        // 0x80233B18: addu        $s0, $a2, $zero
        ctx->r16 = ADD32(ctx->r6, 0);
            goto L_80233B78;
    }
    // 0x80233B18: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x80233B1C: lh          $v0, 0x8($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X8);
    // 0x80233B20: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80233B24: slti        $v0, $v0, 0x600
    ctx->r2 = SIGNED(ctx->r2) < 0X600 ? 1 : 0;
    // 0x80233B28: beq         $v0, $zero, L_80233B60
    if (ctx->r2 == 0) {
        // 0x80233B2C: addiu       $v0, $zero, 0x600
        ctx->r2 = ADD32(0, 0X600);
            goto L_80233B60;
    }
    // 0x80233B2C: addiu       $v0, $zero, 0x600
    ctx->r2 = ADD32(0, 0X600);
    // 0x80233B30: lhu         $v1, 0xC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XC);
    // 0x80233B34: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x80233B38: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80233B3C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80233B40: sh          $v1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r3;
    // 0x80233B44: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x80233B48: bne         $v1, $zero, L_80233B78
    if (ctx->r3 != 0) {
        // 0x80233B4C: sh          $v0, 0x8($s0)
        MEM_H(0X8, ctx->r16) = ctx->r2;
            goto L_80233B78;
    }
    // 0x80233B4C: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80233B50: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x80233B54: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x80233B58: j           L_80233B78
    // 0x80233B5C: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
        goto L_80233B78;
    // 0x80233B5C: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
L_80233B60:
    // 0x80233B60: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80233B64: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80233B68: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x80233B6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233B70: sh          $zero, 0xC($s0)
    MEM_H(0XC, ctx->r16) = 0;
    // 0x80233B74: sb          $v0, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r2;
L_80233B78:
    // 0x80233B78: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80233B7C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80233B80: bne         $v1, $v0, L_80233BA4
    if (ctx->r3 != ctx->r2) {
        // 0x80233B84: nop
    
            goto L_80233BA4;
    }
    // 0x80233B84: nop

    // 0x80233B88: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x80233B8C: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x80233B90: bne         $v0, $zero, L_80233BA4
    if (ctx->r2 != 0) {
        // 0x80233B94: nop
    
            goto L_80233BA4;
    }
    // 0x80233B94: nop

    // 0x80233B98: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80233B9C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233BA0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80233BA4:
    // 0x80233BA4: jal         0x800504EC
    // 0x80233BA8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_0;
    // 0x80233BA8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80233BAC: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80233BB0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80233BB4: sh          $v0, -0x3D88($at)
    MEM_H(-0X3D88, ctx->r1) = ctx->r2;
    // 0x80233BB8: jal         0x80051248
    // 0x80233BBC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_1;
    // 0x80233BBC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80233BC0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80233BC4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80233BC8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80233BCC: jr          $ra
    // 0x80233BD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80233BD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802446F8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802446F8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802446FC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80244700: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80244704: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80244708: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8024470C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80244710: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80244714: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80244718: jal         0x8009A3B4
    // 0x8024471C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8024471C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_0:
    // 0x80244720: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80244724: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80244728: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024472C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80244730: addiu       $s2, $zero, 0x400
    ctx->r18 = ADD32(0, 0X400);
    // 0x80244734: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x80244738: sw          $zero, 0x58($s0)
    MEM_W(0X58, ctx->r16) = 0;
    // 0x8024473C: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80244740: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80244744: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80244748: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x8024474C: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x80244750: sh          $s2, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r18;
    // 0x80244754: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80244758: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x8024475C: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80244760: andi        $v0, $v0, 0xE00
    ctx->r2 = ctx->r2 & 0XE00;
    // 0x80244764: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x80244768: jal         0x8004D5D4
    // 0x8024476C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8024476C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_1:
    // 0x80244770: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x80244774: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x80244778: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8024477C: sh          $zero, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = 0;
    // 0x80244780: jal         0x80031600
    // 0x80244784: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    func_80031600_CA00(rdram, ctx);
        goto after_2;
    // 0x80244784: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    after_2:
    // 0x80244788: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8024478C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80244790: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80244794: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80244798: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8024479C: jal         0x80031DA8
    // 0x802447A0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x802447A0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x802447A4: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x802447A8: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x802447AC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802447B0: addiu       $v0, $v0, 0x20A4
    ctx->r2 = ADD32(ctx->r2, 0X20A4);
    // 0x802447B4: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x802447B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802447BC: sh          $s2, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r18;
    // 0x802447C0: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x802447C4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802447C8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802447CC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802447D0: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
    // 0x802447D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802447D8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802447DC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802447E0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802447E4: jr          $ra
    // 0x802447E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802447E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8024485C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024485C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80244860: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80244864: jal         0x8004F4F8
    // 0x80244868: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80244868: nop

    after_0:
    // 0x8024486C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80244870: jr          $ra
    // 0x80244874: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80244874: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024551C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024551C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80245520: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80245524: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80245528: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x8024552C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80245530: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x80245534: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80245538: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8024553C: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x80245540: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80245544: jal         0x8009A3B4
    // 0x80245548: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80245548: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    after_0:
    // 0x8024554C: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x80245550: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x80245554: jal         0x8009A3B4
    // 0x80245558: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80245558: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8024555C: addiu       $a0, $s2, 0x5C
    ctx->r4 = ADD32(ctx->r18, 0X5C);
    // 0x80245560: addiu       $s1, $s2, 0x54
    ctx->r17 = ADD32(ctx->r18, 0X54);
    // 0x80245564: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80245568: jal         0x8009A3B4
    // 0x8024556C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8024556C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80245570: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x80245574: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80245578: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024557C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80245580: lw          $v0, 0x2110($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2110);
    // 0x80245584: jalr        $v0
    // 0x80245588: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80245588: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x8024558C: addiu       $s3, $s2, 0xAC
    ctx->r19 = ADD32(ctx->r18, 0XAC);
    // 0x80245590: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80245594: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80245598: jal         0x8009A3B4
    // 0x8024559C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8024559C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x802455A0: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    // 0x802455A4: jal         0x8002C654
    // 0x802455A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_5;
    // 0x802455A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802455AC: lh          $v0, 0xE8($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XE8);
    // 0x802455B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802455B4: addiu       $a1, $s2, 0xFC
    ctx->r5 = ADD32(ctx->r18, 0XFC);
    // 0x802455B8: sw          $v0, 0x104($s2)
    MEM_W(0X104, ctx->r18) = ctx->r2;
    // 0x802455BC: sw          $v0, 0x100($s2)
    MEM_W(0X100, ctx->r18) = ctx->r2;
    // 0x802455C0: jal         0x80031DA8
    // 0x802455C4: sw          $v0, 0xFC($s2)
    MEM_W(0XFC, ctx->r18) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_6;
    // 0x802455C4: sw          $v0, 0xFC($s2)
    MEM_W(0XFC, ctx->r18) = ctx->r2;
    after_6:
    // 0x802455C8: jal         0x8002C654
    // 0x802455CC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_8002C654_7A54(rdram, ctx);
        goto after_7;
    // 0x802455CC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_7:
    // 0x802455D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802455D4: jal         0x80031428
    // 0x802455D8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80031428_C828(rdram, ctx);
        goto after_8;
    // 0x802455D8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_8:
    // 0x802455DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802455E0: jal         0x8003077C
    // 0x802455E4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8003077C_BB7C(rdram, ctx);
        goto after_9;
    // 0x802455E4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_9:
    // 0x802455E8: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x802455EC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802455F0: beq         $v0, $zero, L_80245608
    if (ctx->r2 == 0) {
        // 0x802455F4: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_80245608;
    }
    // 0x802455F4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802455F8: lh          $a3, 0x56($s2)
    ctx->r7 = MEM_H(ctx->r18, 0X56);
    // 0x802455FC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80245600: jal         0x8003B6B8
    // 0x80245604: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    func_8003B6B8_16AB8(rdram, ctx);
        goto after_10;
    // 0x80245604: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    after_10:
L_80245608:
    // 0x80245608: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x8024560C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80245610: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80245614: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80245618: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8024561C: jr          $ra
    // 0x80245620: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80245620: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_802466C0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802466C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802466C4: jr          $ra
    // 0x802466C8: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802466C8: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80248D20_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80248D20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80248D24: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80248D28: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80248D2C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80248D30: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80248D34: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80248D38: lw          $v0, 0x2340($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2340);
    // 0x80248D3C: jalr        $v0
    // 0x80248D40: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80248D40: nop

    after_0:
    // 0x80248D44: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80248D48: jr          $ra
    // 0x80248D4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80248D4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023C814_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C814: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023C818: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023C81C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023C820: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023C824: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023C828: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023C82C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8023C830: bne         $v0, $zero, L_8023C854
    if (ctx->r2 != 0) {
        // 0x8023C834: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_8023C854;
    }
    // 0x8023C834: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8023C838: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x8023C83C: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8023C840: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x8023C844: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8023C848: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8023C84C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023C850: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8023C854:
    // 0x8023C854: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023C858: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x8023C85C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023C860: jal         0x8004DA90
    // 0x8023C864: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8023C864: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8023C868: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8023C86C: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8023C870: beq         $v0, $zero, L_8023C91C
    if (ctx->r2 == 0) {
        // 0x8023C874: addiu       $a0, $s2, 0x28
        ctx->r4 = ADD32(ctx->r18, 0X28);
            goto L_8023C91C;
    }
    // 0x8023C874: addiu       $a0, $s2, 0x28
    ctx->r4 = ADD32(ctx->r18, 0X28);
    // 0x8023C878: jal         0x800540D0
    // 0x8023C87C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_1;
    // 0x8023C87C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8023C880: addiu       $s0, $s1, 0x1C
    ctx->r16 = ADD32(ctx->r17, 0X1C);
    // 0x8023C884: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023C888: addiu       $a1, $a1, 0x49CC
    ctx->r5 = ADD32(ctx->r5, 0X49CC);
    // 0x8023C88C: jal         0x8004EB6C
    // 0x8023C890: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004EB6C_29F6C(rdram, ctx);
        goto after_2;
    // 0x8023C890: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023C894: lh          $v1, 0x56($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X56);
    // 0x8023C898: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023C89C: bgez        $v1, L_8023C8D0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8023C8A0: nop
    
            goto L_8023C8D0;
    }
    // 0x8023C8A0: nop

    // 0x8023C8A4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023C8A8: addiu       $a1, $a1, 0x49CC
    ctx->r5 = ADD32(ctx->r5, 0X49CC);
    // 0x8023C8AC: jal         0x8004EB6C
    // 0x8023C8B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004EB6C_29F6C(rdram, ctx);
        goto after_3;
    // 0x8023C8B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8023C8B4: lh          $v1, 0x56($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X56);
    // 0x8023C8B8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023C8BC: slti        $v0, $v0, 0x50
    ctx->r2 = SIGNED(ctx->r2) < 0X50 ? 1 : 0;
    // 0x8023C8C0: bne         $v0, $zero, L_8023C8F8
    if (ctx->r2 != 0) {
        // 0x8023C8C4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023C8F8;
    }
    // 0x8023C8C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023C8C8: j           L_8023C8F8
    // 0x8023C8CC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8023C8F8;
    // 0x8023C8CC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8023C8D0:
    // 0x8023C8D0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023C8D4: addiu       $a1, $a1, 0x49CC
    ctx->r5 = ADD32(ctx->r5, 0X49CC);
    // 0x8023C8D8: jal         0x8004EB6C
    // 0x8023C8DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004EB6C_29F6C(rdram, ctx);
        goto after_4;
    // 0x8023C8DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8023C8E0: lh          $v1, 0x56($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X56);
    // 0x8023C8E4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023C8E8: slti        $v1, $v1, 0x50
    ctx->r3 = SIGNED(ctx->r3) < 0X50 ? 1 : 0;
    // 0x8023C8EC: bne         $v1, $zero, L_8023C8F8
    if (ctx->r3 != 0) {
        // 0x8023C8F0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023C8F8;
    }
    // 0x8023C8F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023C8F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8023C8F8:
    // 0x8023C8F8: bne         $v0, $zero, L_8023C90C
    if (ctx->r2 != 0) {
        // 0x8023C8FC: nop
    
            goto L_8023C90C;
    }
    // 0x8023C8FC: nop

    // 0x8023C900: lh          $v0, 0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X4);
    // 0x8023C904: bne         $v0, $zero, L_8023C944
    if (ctx->r2 != 0) {
        // 0x8023C908: nop
    
            goto L_8023C944;
    }
    // 0x8023C908: nop

L_8023C90C:
    // 0x8023C90C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8023C910: andi        $v0, $v0, 0xFF9F
    ctx->r2 = ctx->r2 & 0XFF9F;
    // 0x8023C914: j           L_8023C940
    // 0x8023C918: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
        goto L_8023C940;
    // 0x8023C918: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
L_8023C91C:
    // 0x8023C91C: jal         0x800540B4
    // 0x8023C920: addiu       $a0, $s2, 0x28
    ctx->r4 = ADD32(ctx->r18, 0X28);
    func_800540B4_2F4B4(rdram, ctx);
        goto after_5;
    // 0x8023C920: addiu       $a0, $s2, 0x28
    ctx->r4 = ADD32(ctx->r18, 0X28);
    after_5:
    // 0x8023C924: lh          $v0, 0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X4);
    // 0x8023C928: bne         $v0, $zero, L_8023C944
    if (ctx->r2 != 0) {
        // 0x8023C92C: addiu       $v1, $zero, 0x20
        ctx->r3 = ADD32(0, 0X20);
            goto L_8023C944;
    }
    // 0x8023C92C: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x8023C930: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8023C934: sh          $v1, 0x6($s2)
    MEM_H(0X6, ctx->r18) = ctx->r3;
    // 0x8023C938: andi        $v0, $v0, 0xFF9F
    ctx->r2 = ctx->r2 & 0XFF9F;
    // 0x8023C93C: ori         $v0, $v0, 0x19
    ctx->r2 = ctx->r2 | 0X19;
L_8023C940:
    // 0x8023C940: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8023C944:
    // 0x8023C944: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8023C948: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023C94C: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8023C950: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023C954: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023C958: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023C95C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023C960: jr          $ra
    // 0x8023C964: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023C964: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80244C80_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244C80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80244C84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80244C88: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80244C8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80244C90: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80244C94: bne         $v0, $zero, L_80244CB8
    if (ctx->r2 != 0) {
        // 0x80244C98: nop
    
            goto L_80244CB8;
    }
    // 0x80244C98: nop

    // 0x80244C9C: jal         0x8004F4F8
    // 0x80244CA0: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80244CA0: nop

    after_0:
    // 0x80244CA4: jal         0x8006036C
    // 0x80244CA8: addiu       $a0, $zero, 0x611
    ctx->r4 = ADD32(0, 0X611);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x80244CA8: addiu       $a0, $zero, 0x611
    ctx->r4 = ADD32(0, 0X611);
    after_1:
    // 0x80244CAC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80244CB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80244CB4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80244CB8:
    // 0x80244CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80244CBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80244CC0: jr          $ra
    // 0x80244CC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80244CC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80244CC8: nop

    // 0x80244CCC: nop

;}
RECOMP_FUNC void func_8022B7A4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B7A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B7A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B7AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B7B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B7B4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B7B8: bne         $v0, $zero, L_8022B7D0
    if (ctx->r2 != 0) {
        // 0x8022B7BC: nop
    
            goto L_8022B7D0;
    }
    // 0x8022B7BC: nop

    // 0x8022B7C0: jal         0x80229F50
    // 0x8022B7C4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80229F50_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022B7C4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_0:
    // 0x8022B7C8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B7CC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B7D0:
    // 0x8022B7D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B7D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B7D8: jr          $ra
    // 0x8022B7DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B7DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024A5E0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024A5E0: lhu         $t3, 0x0($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X0);
    // 0x8024A5E4: lhu         $t2, 0x2($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X2);
    // 0x8024A5E8: lhu         $t1, 0x4($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X4);
    // 0x8024A5EC: lhu         $t0, 0x6($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X6);
    // 0x8024A5F0: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8024A5F4: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8024A5F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024A5FC: beq         $a1, $v0, L_8024A668
    if (ctx->r5 == ctx->r2) {
        // 0x8024A600: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_8024A668;
    }
    // 0x8024A600: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8024A604: slti        $v0, $a1, 0x2
    ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x8024A608: beql        $v0, $zero, L_8024A620
    if (ctx->r2 == 0) {
        // 0x8024A60C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024A620;
    }
    goto skip_0;
    // 0x8024A60C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8024A610: beq         $a1, $zero, L_8024A638
    if (ctx->r5 == 0) {
        // 0x8024A614: sll         $a0, $t0, 16
        ctx->r4 = S32(ctx->r8 << 16);
            goto L_8024A638;
    }
    // 0x8024A614: sll         $a0, $t0, 16
    ctx->r4 = S32(ctx->r8 << 16);
    // 0x8024A618: j           L_8024A764
    // 0x8024A61C: nop

        goto L_8024A764;
    // 0x8024A61C: nop

L_8024A620:
    // 0x8024A620: beq         $a1, $v0, L_8024A6BC
    if (ctx->r5 == ctx->r2) {
        // 0x8024A624: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8024A6BC;
    }
    // 0x8024A624: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024A628: beq         $a1, $v0, L_8024A710
    if (ctx->r5 == ctx->r2) {
        // 0x8024A62C: sll         $a0, $t1, 16
        ctx->r4 = S32(ctx->r9 << 16);
            goto L_8024A710;
    }
    // 0x8024A62C: sll         $a0, $t1, 16
    ctx->r4 = S32(ctx->r9 << 16);
    // 0x8024A630: j           L_8024A764
    // 0x8024A634: nop

        goto L_8024A764;
    // 0x8024A634: nop

L_8024A638:
    // 0x8024A638: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8024A63C: sll         $v1, $t2, 16
    ctx->r3 = S32(ctx->r10 << 16);
    // 0x8024A640: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8024A644: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8024A648: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024A64C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8024A650: bne         $a0, $v1, L_8024A764
    if (ctx->r4 != ctx->r3) {
        // 0x8024A654: nop
    
            goto L_8024A764;
    }
    // 0x8024A654: nop

    // 0x8024A658: sll         $v0, $t1, 16
    ctx->r2 = S32(ctx->r9 << 16);
    // 0x8024A65C: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024A660: j           L_8024A73C
    // 0x8024A664: sll         $v0, $t3, 16
    ctx->r2 = S32(ctx->r11 << 16);
        goto L_8024A73C;
    // 0x8024A664: sll         $v0, $t3, 16
    ctx->r2 = S32(ctx->r11 << 16);
L_8024A668:
    // 0x8024A668: sll         $a0, $t1, 16
    ctx->r4 = S32(ctx->r9 << 16);
    // 0x8024A66C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8024A670: sll         $v1, $t3, 16
    ctx->r3 = S32(ctx->r11 << 16);
    // 0x8024A674: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8024A678: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8024A67C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024A680: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8024A684: bne         $a0, $v1, L_8024A764
    if (ctx->r4 != ctx->r3) {
        // 0x8024A688: nop
    
            goto L_8024A764;
    }
    // 0x8024A688: nop

    // 0x8024A68C: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x8024A690: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024A694: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
    // 0x8024A698: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024A69C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8024A6A0: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8024A6A4: bne         $v0, $zero, L_8024A764
    if (ctx->r2 != 0) {
        // 0x8024A6A8: nop
    
            goto L_8024A764;
    }
    // 0x8024A6A8: nop

    // 0x8024A6AC: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8024A6B0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024A6B4: j           L_8024A75C
    // 0x8024A6B8: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
        goto L_8024A75C;
    // 0x8024A6B8: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
L_8024A6BC:
    // 0x8024A6BC: sll         $a0, $t0, 16
    ctx->r4 = S32(ctx->r8 << 16);
    // 0x8024A6C0: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8024A6C4: sll         $v1, $t2, 16
    ctx->r3 = S32(ctx->r10 << 16);
    // 0x8024A6C8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8024A6CC: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8024A6D0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024A6D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024A6D8: bne         $a0, $v1, L_8024A764
    if (ctx->r4 != ctx->r3) {
        // 0x8024A6DC: nop
    
            goto L_8024A764;
    }
    // 0x8024A6DC: nop

    // 0x8024A6E0: sll         $v0, $t1, 16
    ctx->r2 = S32(ctx->r9 << 16);
    // 0x8024A6E4: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024A6E8: sll         $v0, $t3, 16
    ctx->r2 = S32(ctx->r11 << 16);
    // 0x8024A6EC: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024A6F0: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8024A6F4: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8024A6F8: bne         $v0, $zero, L_8024A764
    if (ctx->r2 != 0) {
        // 0x8024A6FC: nop
    
            goto L_8024A764;
    }
    // 0x8024A6FC: nop

    // 0x8024A700: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8024A704: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024A708: j           L_8024A75C
    // 0x8024A70C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
        goto L_8024A75C;
    // 0x8024A70C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
L_8024A710:
    // 0x8024A710: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8024A714: sll         $v1, $t3, 16
    ctx->r3 = S32(ctx->r11 << 16);
    // 0x8024A718: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8024A71C: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8024A720: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024A724: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024A728: bne         $a0, $v1, L_8024A764
    if (ctx->r4 != ctx->r3) {
        // 0x8024A72C: nop
    
            goto L_8024A764;
    }
    // 0x8024A72C: nop

    // 0x8024A730: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x8024A734: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024A738: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
L_8024A73C:
    // 0x8024A73C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024A740: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8024A744: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024A748: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x8024A74C: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8024A750: bne         $v0, $zero, L_8024A764
    if (ctx->r2 != 0) {
        // 0x8024A754: nop
    
            goto L_8024A764;
    }
    // 0x8024A754: nop

    // 0x8024A758: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
L_8024A75C:
    // 0x8024A75C: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8024A760: addu        $t4, $v0, $zero
    ctx->r12 = ADD32(ctx->r2, 0);
L_8024A764:
    // 0x8024A764: jr          $ra
    // 0x8024A768: addu        $v0, $t4, $zero
    ctx->r2 = ADD32(ctx->r12, 0);
    TRACE_RETURN()
    return;
    // 0x8024A768: addu        $v0, $t4, $zero
    ctx->r2 = ADD32(ctx->r12, 0);
;}
RECOMP_FUNC void func_80243360_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80243360: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80243364: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80243368: lbu         $v0, 0xDE($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XDE);
    // 0x8024336C: lw          $v1, 0xD0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XD0);
    // 0x80243370: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x80243374: lh          $a0, 0x14($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X14);
    // 0x80243378: addiu       $t1, $a1, 0xD0
    ctx->r9 = ADD32(ctx->r5, 0XD0);
    // 0x8024337C: lbu         $a3, 0xDF($a1)
    ctx->r7 = MEM_BU(ctx->r5, 0XDF);
    // 0x80243380: lhu         $t0, 0xE0($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0XE0);
    // 0x80243384: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80243388: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024338C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80243390: lbu         $a2, 0x2($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X2);
    // 0x80243394: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x80243398: addiu       $v1, $v1, -0x40
    ctx->r3 = ADD32(ctx->r3, -0X40);
    // 0x8024339C: sll         $v1, $v1, 9
    ctx->r3 = S32(ctx->r3 << 9);
    // 0x802433A0: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x802433A4: bltzl       $v1, L_802433AC
    if (SIGNED(ctx->r3) < 0) {
        // 0x802433A8: negu        $v1, $v1
        ctx->r3 = SUB32(0, ctx->r3);
            goto L_802433AC;
    }
    goto skip_0;
    // 0x802433A8: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    skip_0:
L_802433AC:
    // 0x802433AC: lh          $a0, 0x18($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X18);
    // 0x802433B0: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x802433B4: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x802433B8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802433BC: bltzl       $v0, L_802433C4
    if (SIGNED(ctx->r2) < 0) {
        // 0x802433C0: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_802433C4;
    }
    goto skip_1;
    // 0x802433C0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_1:
L_802433C4:
    // 0x802433C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802433C8: addiu       $v0, $v1, 0x1FF
    ctx->r2 = ADD32(ctx->r3, 0X1FF);
    // 0x802433CC: sh          $v0, 0xE4($a1)
    MEM_H(0XE4, ctx->r5) = ctx->r2;
    // 0x802433D0: andi        $v0, $a3, 0x4
    ctx->r2 = ctx->r7 & 0X4;
    // 0x802433D4: beq         $v0, $zero, L_802433E0
    if (ctx->r2 == 0) {
        // 0x802433D8: addu        $t2, $v1, $zero
        ctx->r10 = ADD32(ctx->r3, 0);
            goto L_802433E0;
    }
    // 0x802433D8: addu        $t2, $v1, $zero
    ctx->r10 = ADD32(ctx->r3, 0);
    // 0x802433DC: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
L_802433E0:
    // 0x802433E0: andi        $v0, $a3, 0x11
    ctx->r2 = ctx->r7 & 0X11;
    // 0x802433E4: bne         $v0, $zero, L_80243498
    if (ctx->r2 != 0) {
        // 0x802433E8: andi        $a2, $a2, 0xE0
        ctx->r6 = ctx->r6 & 0XE0;
            goto L_80243498;
    }
    // 0x802433E8: andi        $a2, $a2, 0xE0
    ctx->r6 = ctx->r6 & 0XE0;
    // 0x802433EC: beq         $a2, $zero, L_80243458
    if (ctx->r6 == 0) {
        // 0x802433F0: nop
    
            goto L_80243458;
    }
    // 0x802433F0: nop

    // 0x802433F4: lhu         $v0, 0x44($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X44);
    // 0x802433F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802433FC: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80243400: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x80243404: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x80243408: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024340C: mflo        $v0
    ctx->r2 = lo;
    // 0x80243410: sra         $v1, $v0, 4
    ctx->r3 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80243414: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80243418: bne         $a2, $v0, L_80243428
    if (ctx->r6 != ctx->r2) {
        // 0x8024341C: addiu       $a0, $v1, 0x180
        ctx->r4 = ADD32(ctx->r3, 0X180);
            goto L_80243428;
    }
    // 0x8024341C: addiu       $a0, $v1, 0x180
    ctx->r4 = ADD32(ctx->r3, 0X180);
    // 0x80243420: j           L_80243434
    // 0x80243424: addiu       $a0, $v1, 0x380
    ctx->r4 = ADD32(ctx->r3, 0X380);
        goto L_80243434;
    // 0x80243424: addiu       $a0, $v1, 0x380
    ctx->r4 = ADD32(ctx->r3, 0X380);
L_80243428:
    // 0x80243428: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8024342C: beql        $a2, $v0, L_80243434
    if (ctx->r6 == ctx->r2) {
        // 0x80243430: addiu       $a0, $v1, 0x580
        ctx->r4 = ADD32(ctx->r3, 0X580);
            goto L_80243434;
    }
    goto skip_2;
    // 0x80243430: addiu       $a0, $v1, 0x580
    ctx->r4 = ADD32(ctx->r3, 0X580);
    skip_2:
L_80243434:
    // 0x80243434: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
    // 0x80243438: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024343C: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80243440: bne         $v0, $zero, L_80243498
    if (ctx->r2 != 0) {
        // 0x80243444: nop
    
            goto L_80243498;
    }
    // 0x80243444: nop

    // 0x80243448: lbu         $v0, 0xF($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0XF);
    // 0x8024344C: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80243450: j           L_80243494
    // 0x80243454: sb          $v0, 0xF($t1)
    MEM_B(0XF, ctx->r9) = ctx->r2;
        goto L_80243494;
    // 0x80243454: sb          $v0, 0xF($t1)
    MEM_B(0XF, ctx->r9) = ctx->r2;
L_80243458:
    // 0x80243458: lh          $v0, 0x44($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X44);
    // 0x8024345C: addiu       $a0, $v0, -0x140
    ctx->r4 = ADD32(ctx->r2, -0X140);
    // 0x80243460: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80243464: mflo        $v0
    ctx->r2 = lo;
    // 0x80243468: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x8024346C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80243470: addiu       $a0, $v0, 0x400
    ctx->r4 = ADD32(ctx->r2, 0X400);
    // 0x80243474: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80243478: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024347C: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80243480: bne         $v0, $zero, L_80243498
    if (ctx->r2 != 0) {
        // 0x80243484: ori         $v0, $a3, 0x1
        ctx->r2 = ctx->r7 | 0X1;
            goto L_80243498;
    }
    // 0x80243484: ori         $v0, $a3, 0x1
    ctx->r2 = ctx->r7 | 0X1;
    // 0x80243488: lh          $v1, 0x4C($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4C);
    // 0x8024348C: blez        $v1, L_80243498
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80243490: sb          $v0, 0xDF($a1)
        MEM_B(0XDF, ctx->r5) = ctx->r2;
            goto L_80243498;
    }
    // 0x80243490: sb          $v0, 0xDF($a1)
    MEM_B(0XDF, ctx->r5) = ctx->r2;
L_80243494:
    // 0x80243494: sh          $zero, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = 0;
L_80243498:
    // 0x80243498: lh          $v1, 0x44($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X44);
    // 0x8024349C: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x802434A0: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802434A4: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x802434A8: beq         $v0, $zero, L_80243544
    if (ctx->r2 == 0) {
        // 0x802434AC: slt         $v0, $a0, $v1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_80243544;
    }
    // 0x802434AC: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802434B0: lh          $v0, 0x4C($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4C);
    // 0x802434B4: bltzl       $v0, L_802434BC
    if (SIGNED(ctx->r2) < 0) {
        // 0x802434B8: sh          $zero, 0x4C($a1)
        MEM_H(0X4C, ctx->r5) = 0;
            goto L_802434BC;
    }
    goto skip_3;
    // 0x802434B8: sh          $zero, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = 0;
    skip_3:
L_802434BC:
    // 0x802434BC: lh          $v0, 0x44($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X44);
    // 0x802434C0: addiu       $v1, $a0, -0xD
    ctx->r3 = ADD32(ctx->r4, -0XD);
    // 0x802434C4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802434C8: beq         $v0, $zero, L_802434EC
    if (ctx->r2 == 0) {
        // 0x802434CC: nop
    
            goto L_802434EC;
    }
    // 0x802434CC: nop

    // 0x802434D0: lh          $v0, 0x4C($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4C);
    // 0x802434D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802434D8: slt         $v0, $v0, $t3
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x802434DC: beq         $v0, $zero, L_80243510
    if (ctx->r2 == 0) {
        // 0x802434E0: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80243510;
    }
    // 0x802434E0: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x802434E4: j           L_80243510
    // 0x802434E8: sh          $v0, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = ctx->r2;
        goto L_80243510;
    // 0x802434E8: sh          $v0, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = ctx->r2;
L_802434EC:
    // 0x802434EC: lh          $v0, 0x4C($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4C);
    // 0x802434F0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802434F4: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x802434F8: bnel        $v0, $zero, L_8024350C
    if (ctx->r2 != 0) {
        // 0x802434FC: sh          $t0, 0x44($a1)
        MEM_H(0X44, ctx->r5) = ctx->r8;
            goto L_8024350C;
    }
    goto skip_4;
    // 0x802434FC: sh          $t0, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r8;
    skip_4:
    // 0x80243500: addiu       $v0, $v1, -0x2
    ctx->r2 = ADD32(ctx->r3, -0X2);
    // 0x80243504: j           L_80243510
    // 0x80243508: sh          $v0, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = ctx->r2;
        goto L_80243510;
    // 0x80243508: sh          $v0, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = ctx->r2;
L_8024350C:
    // 0x8024350C: sh          $zero, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = 0;
L_80243510:
    // 0x80243510: lhu         $v0, 0x44($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X44);
    // 0x80243514: lhu         $v1, 0x4C($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4C);
    // 0x80243518: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024351C: sh          $v0, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r2;
    // 0x80243520: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80243524: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80243528: sll         $v1, $t0, 16
    ctx->r3 = S32(ctx->r8 << 16);
    // 0x8024352C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80243530: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80243534: beq         $v1, $zero, L_802435E0
    if (ctx->r3 == 0) {
        // 0x80243538: nop
    
            goto L_802435E0;
    }
    // 0x80243538: nop

    // 0x8024353C: j           L_802435DC
    // 0x80243540: sh          $t0, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r8;
        goto L_802435DC;
    // 0x80243540: sh          $t0, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r8;
L_80243544:
    // 0x80243544: beq         $v0, $zero, L_802435E0
    if (ctx->r2 == 0) {
        // 0x80243548: nop
    
            goto L_802435E0;
    }
    // 0x80243548: nop

    // 0x8024354C: lh          $v0, 0x4C($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4C);
    // 0x80243550: bgtzl       $v0, L_80243558
    if (SIGNED(ctx->r2) > 0) {
        // 0x80243554: sh          $zero, 0x4C($a1)
        MEM_H(0X4C, ctx->r5) = 0;
            goto L_80243558;
    }
    goto skip_5;
    // 0x80243554: sh          $zero, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = 0;
    skip_5:
L_80243558:
    // 0x80243558: lh          $v1, 0x44($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X44);
    // 0x8024355C: addiu       $v0, $a0, 0xD
    ctx->r2 = ADD32(ctx->r4, 0XD);
    // 0x80243560: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80243564: beq         $v0, $zero, L_80243588
    if (ctx->r2 == 0) {
        // 0x80243568: negu        $v0, $t3
        ctx->r2 = SUB32(0, ctx->r11);
            goto L_80243588;
    }
    // 0x80243568: negu        $v0, $t3
    ctx->r2 = SUB32(0, ctx->r11);
    // 0x8024356C: lh          $v1, 0x4C($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4C);
    // 0x80243570: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80243574: beq         $v0, $zero, L_802435AC
    if (ctx->r2 == 0) {
        // 0x80243578: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_802435AC;
    }
    // 0x80243578: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8024357C: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x80243580: j           L_802435AC
    // 0x80243584: sh          $v0, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = ctx->r2;
        goto L_802435AC;
    // 0x80243584: sh          $v0, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = ctx->r2;
L_80243588:
    // 0x80243588: lh          $v0, 0x4C($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4C);
    // 0x8024358C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80243590: slti        $v0, $v0, -0x2
    ctx->r2 = SIGNED(ctx->r2) < -0X2 ? 1 : 0;
    // 0x80243594: beq         $v0, $zero, L_802435A4
    if (ctx->r2 == 0) {
        // 0x80243598: addiu       $v0, $v1, 0x2
        ctx->r2 = ADD32(ctx->r3, 0X2);
            goto L_802435A4;
    }
    // 0x80243598: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x8024359C: j           L_802435AC
    // 0x802435A0: sh          $v0, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = ctx->r2;
        goto L_802435AC;
    // 0x802435A0: sh          $v0, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = ctx->r2;
L_802435A4:
    // 0x802435A4: sh          $t0, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r8;
    // 0x802435A8: sh          $zero, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = 0;
L_802435AC:
    // 0x802435AC: lhu         $v0, 0x44($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X44);
    // 0x802435B0: lhu         $v1, 0x4C($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4C);
    // 0x802435B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802435B8: sh          $v0, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r2;
    // 0x802435BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802435C0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802435C4: sll         $v1, $t0, 16
    ctx->r3 = S32(ctx->r8 << 16);
    // 0x802435C8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802435CC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802435D0: beq         $v0, $zero, L_802435E0
    if (ctx->r2 == 0) {
        // 0x802435D4: nop
    
            goto L_802435E0;
    }
    // 0x802435D4: nop

    // 0x802435D8: sh          $t0, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r8;
L_802435DC:
    // 0x802435DC: sh          $zero, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = 0;
L_802435E0:
    // 0x802435E0: jr          $ra
    // 0x802435E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802435E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023E68C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023E68C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023E690: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8023E694: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023E698: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8023E69C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023E6A0: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8023E6A4: bne         $v0, $zero, L_8023E718
    if (ctx->r2 != 0) {
        // 0x8023E6A8: addiu       $s0, $s1, 0x440
        ctx->r16 = ADD32(ctx->r17, 0X440);
            goto L_8023E718;
    }
    // 0x8023E6A8: addiu       $s0, $s1, 0x440
    ctx->r16 = ADD32(ctx->r17, 0X440);
    // 0x8023E6AC: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8023E6B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023E6B4: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8023E6B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023E6BC: beq         $v1, $v0, L_8023E6F4
    if (ctx->r3 == ctx->r2) {
        // 0x8023E6C0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023E6F4;
    }
    // 0x8023E6C0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023E6C4: beql        $v0, $zero, L_8023E6DC
    if (ctx->r2 == 0) {
        // 0x8023E6C8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023E6DC;
    }
    goto skip_0;
    // 0x8023E6C8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_0:
    // 0x8023E6CC: beq         $v1, $zero, L_8023E6EC
    if (ctx->r3 == 0) {
        // 0x8023E6D0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023E6EC;
    }
    // 0x8023E6D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023E6D4: j           L_8023EA38
    // 0x8023E6D8: nop

        goto L_8023EA38;
    // 0x8023E6D8: nop

L_8023E6DC:
    // 0x8023E6DC: beq         $v1, $v0, L_8023E710
    if (ctx->r3 == ctx->r2) {
        // 0x8023E6E0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8023E710;
    }
    // 0x8023E6E0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023E6E4: j           L_8023EA38
    // 0x8023E6E8: nop

        goto L_8023EA38;
    // 0x8023E6E8: nop

L_8023E6EC:
    // 0x8023E6EC: j           L_8023EA38
    // 0x8023E6F0: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
        goto L_8023EA38;
    // 0x8023E6F0: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
L_8023E6F4:
    // 0x8023E6F4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023E6F8: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8023E6FC: addiu       $a0, $zero, 0xCC
    ctx->r4 = ADD32(0, 0XCC);
    // 0x8023E700: jal         0x8002A33C
    // 0x8023E704: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8023E704: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_0:
    // 0x8023E708: j           L_8023EA38
    // 0x8023E70C: nop

        goto L_8023EA38;
    // 0x8023E70C: nop

L_8023E710:
    // 0x8023E710: j           L_8023EA38
    // 0x8023E714: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
        goto L_8023EA38;
    // 0x8023E714: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
L_8023E718:
    // 0x8023E718: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8023E71C: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8023E720: beq         $v0, $zero, L_8023EA38
    if (ctx->r2 == 0) {
        // 0x8023E724: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8023EA38;
    }
    // 0x8023E724: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023E728: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023E72C: addu        $at, $at, $v0
    gpr jr_addend_8023E734 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023E730: lw          $v0, 0x2FE0($at)
    ctx->r2 = ADD32(ctx->r1, 0X2FE0);
    // 0x8023E734: jr          $v0
    // 0x8023E738: nop

    switch (jr_addend_8023E734 >> 2) {
        case 0: goto L_8023E73C; break;
        case 1: goto L_8023E78C; break;
        case 2: goto L_8023E82C; break;
        case 3: goto L_8023E9A0; break;
        case 4: goto L_8023E9C0; break;
        default: switch_error(__func__, 0x8023E734, 0x80252FE0);
    }
    // 0x8023E738: nop

L_8023E73C:
    // 0x8023E73C: lb          $v1, 0xA7($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XA7);
    // 0x8023E740: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023E744: bne         $v1, $v0, L_8023EA38
    if (ctx->r3 != ctx->r2) {
        // 0x8023E748: nop
    
            goto L_8023EA38;
    }
    // 0x8023E748: nop

    // 0x8023E74C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023E750: lbu         $v1, 0xED($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XED);
    // 0x8023E754: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x8023E758: bne         $v0, $zero, L_8023E778
    if (ctx->r2 != 0) {
        // 0x8023E75C: sb          $v1, 0xEE($s0)
        MEM_B(0XEE, ctx->r16) = ctx->r3;
            goto L_8023E778;
    }
    // 0x8023E75C: sb          $v1, 0xEE($s0)
    MEM_B(0XEE, ctx->r16) = ctx->r3;
    // 0x8023E760: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8023E764: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x8023E768: sh          $v1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r3;
    // 0x8023E76C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023E770: j           L_8023E784
    // 0x8023E774: sb          $v0, 0xE9($s0)
    MEM_B(0XE9, ctx->r16) = ctx->r2;
        goto L_8023E784;
    // 0x8023E774: sb          $v0, 0xE9($s0)
    MEM_B(0XE9, ctx->r16) = ctx->r2;
L_8023E778:
    // 0x8023E778: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8023E77C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8023E780: sb          $zero, 0xE9($s0)
    MEM_B(0XE9, ctx->r16) = 0;
L_8023E784:
    // 0x8023E784: j           L_8023EA2C
    // 0x8023E788: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023EA2C;
    // 0x8023E788: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023E78C:
    // 0x8023E78C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8023E790: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023E794: beq         $v0, $zero, L_8023E7A4
    if (ctx->r2 == 0) {
        // 0x8023E798: nop
    
            goto L_8023E7A4;
    }
    // 0x8023E798: nop

    // 0x8023E79C: jal         0x8023F2F4
    // 0x8023E7A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8023F2F4_ovl10(rdram, ctx);
        goto after_1;
    // 0x8023E7A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
L_8023E7A4:
    // 0x8023E7A4: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8023E7A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023E7AC: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8023E7B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023E7B4: bne         $v0, $zero, L_8023E7E0
    if (ctx->r2 != 0) {
        // 0x8023E7B8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023E7E0;
    }
    // 0x8023E7B8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023E7BC: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8023E7C0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8023E7C4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023E7C8: beq         $v0, $zero, L_8023E7D8
    if (ctx->r2 == 0) {
        // 0x8023E7CC: sb          $v0, 0xE8($s0)
        MEM_B(0XE8, ctx->r16) = ctx->r2;
            goto L_8023E7D8;
    }
    // 0x8023E7CC: sb          $v0, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = ctx->r2;
    // 0x8023E7D0: j           L_8023E7DC
    // 0x8023E7D4: addiu       $v0, $zero, 0x70
    ctx->r2 = ADD32(0, 0X70);
        goto L_8023E7DC;
    // 0x8023E7D4: addiu       $v0, $zero, 0x70
    ctx->r2 = ADD32(0, 0X70);
L_8023E7D8:
    // 0x8023E7D8: addiu       $v0, $zero, 0x90
    ctx->r2 = ADD32(0, 0X90);
L_8023E7DC:
    // 0x8023E7DC: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8023E7E0:
    // 0x8023E7E0: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023E7E4: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x8023E7E8: bne         $v0, $zero, L_8023E7F4
    if (ctx->r2 != 0) {
        // 0x8023E7EC: addiu       $a2, $zero, 0x10
        ctx->r6 = ADD32(0, 0X10);
            goto L_8023E7F4;
    }
    // 0x8023E7EC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8023E7F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_8023E7F4:
    // 0x8023E7F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023E7F8: jal         0x8023F448
    // 0x8023E7FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8023F448_ovl10(rdram, ctx);
        goto after_2;
    // 0x8023E7FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x8023E800: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8023E804: beq         $v0, $zero, L_8023EA38
    if (ctx->r2 == 0) {
        // 0x8023E808: nop
    
            goto L_8023EA38;
    }
    // 0x8023E808: nop

    // 0x8023E80C: lbu         $v0, 0xE9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE9);
    // 0x8023E810: bne         $v0, $zero, L_8023EA38
    if (ctx->r2 != 0) {
        // 0x8023E814: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_8023EA38;
    }
    // 0x8023E814: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8023E818: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8023E81C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023E820: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
    // 0x8023E824: j           L_8023EA38
    // 0x8023E828: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_8023EA38;
    // 0x8023E828: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8023E82C:
    // 0x8023E82C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8023E830: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023E834: beq         $v0, $zero, L_8023E844
    if (ctx->r2 == 0) {
        // 0x8023E838: nop
    
            goto L_8023E844;
    }
    // 0x8023E838: nop

    // 0x8023E83C: jal         0x8023F2F4
    // 0x8023E840: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8023F2F4_ovl10(rdram, ctx);
        goto after_3;
    // 0x8023E840: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
L_8023E844:
    // 0x8023E844: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8023E848: lui         $v1, 0x6666
    ctx->r3 = S32(0X6666 << 16);
    // 0x8023E84C: ori         $v1, $v1, 0x6667
    ctx->r3 = ctx->r3 | 0X6667;
    // 0x8023E850: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023E854: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023E858: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023E85C: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8023E860: mfhi        $t0
    ctx->r8 = hi;
    // 0x8023E864: sra         $v1, $t0, 2
    ctx->r3 = S32(SIGNED(ctx->r8) >> 2);
    // 0x8023E868: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023E86C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023E870: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023E874: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023E878: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8023E87C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023E880: bne         $a0, $zero, L_8023E890
    if (ctx->r4 != 0) {
        // 0x8023E884: addiu       $a0, $zero, 0xCD
        ctx->r4 = ADD32(0, 0XCD);
            goto L_8023E890;
    }
    // 0x8023E884: addiu       $a0, $zero, 0xCD
    ctx->r4 = ADD32(0, 0XCD);
    // 0x8023E888: jal         0x8002A33C
    // 0x8023E88C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8023E88C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_4:
L_8023E890:
    // 0x8023E890: lhu         $v1, 0x4($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4);
    // 0x8023E894: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023E898: beq         $v1, $zero, L_8023EA24
    if (ctx->r3 == 0) {
        // 0x8023E89C: sh          $v0, 0x4($s0)
        MEM_H(0X4, ctx->r16) = ctx->r2;
            goto L_8023EA24;
    }
    // 0x8023E89C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8023E8A0: lbu         $v0, 0xE8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE8);
    // 0x8023E8A4: beq         $v0, $zero, L_8023E90C
    if (ctx->r2 == 0) {
        // 0x8023E8A8: nop
    
            goto L_8023E90C;
    }
    // 0x8023E8A8: nop

    // 0x8023E8AC: lh          $v0, 0x52($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X52);
    // 0x8023E8B0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023E8B4: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x8023E8B8: beq         $v0, $zero, L_8023E8C8
    if (ctx->r2 == 0) {
        // 0x8023E8BC: addiu       $v0, $v1, 0x4
        ctx->r2 = ADD32(ctx->r3, 0X4);
            goto L_8023E8C8;
    }
    // 0x8023E8BC: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
    // 0x8023E8C0: j           L_8023E970
    // 0x8023E8C4: sh          $v0, 0x52($s1)
    MEM_H(0X52, ctx->r17) = ctx->r2;
        goto L_8023E970;
    // 0x8023E8C4: sh          $v0, 0x52($s1)
    MEM_H(0X52, ctx->r17) = ctx->r2;
L_8023E8C8:
    // 0x8023E8C8: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023E8CC: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x8023E8D0: bnel        $v0, $zero, L_8023E8E4
    if (ctx->r2 != 0) {
        // 0x8023E8D4: sh          $zero, 0x44($s1)
        MEM_H(0X44, ctx->r17) = 0;
            goto L_8023E8E4;
    }
    goto skip_1;
    // 0x8023E8D4: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    skip_1:
    // 0x8023E8D8: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x8023E8DC: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x8023E8E0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_8023E8E4:
    // 0x8023E8E4: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x8023E8E8: slti        $v0, $v0, 0x30
    ctx->r2 = SIGNED(ctx->r2) < 0X30 ? 1 : 0;
    // 0x8023E8EC: bne         $v0, $zero, L_8023E974
    if (ctx->r2 != 0) {
        // 0x8023E8F0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8023E974;
    }
    // 0x8023E8F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023E8F4: lw          $v0, 0xE0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE0);
    // 0x8023E8F8: sltiu       $v0, $v0, 0x300
    ctx->r2 = ctx->r2 < 0X300 ? 1 : 0;
    // 0x8023E8FC: bne         $v0, $zero, L_8023E974
    if (ctx->r2 != 0) {
        // 0x8023E900: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8023E974;
    }
    // 0x8023E900: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023E904: j           L_8023E968
    // 0x8023E908: sh          $v0, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r2;
        goto L_8023E968;
    // 0x8023E908: sh          $v0, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r2;
L_8023E90C:
    // 0x8023E90C: lh          $v0, 0x52($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X52);
    // 0x8023E910: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023E914: slti        $v0, $v0, 0x40
    ctx->r2 = SIGNED(ctx->r2) < 0X40 ? 1 : 0;
    // 0x8023E918: beq         $v0, $zero, L_8023E928
    if (ctx->r2 == 0) {
        // 0x8023E91C: addiu       $v0, $v1, 0x2
        ctx->r2 = ADD32(ctx->r3, 0X2);
            goto L_8023E928;
    }
    // 0x8023E91C: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x8023E920: j           L_8023E970
    // 0x8023E924: sh          $v0, 0x52($s1)
    MEM_H(0X52, ctx->r17) = ctx->r2;
        goto L_8023E970;
    // 0x8023E924: sh          $v0, 0x52($s1)
    MEM_H(0X52, ctx->r17) = ctx->r2;
L_8023E928:
    // 0x8023E928: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023E92C: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x8023E930: bnel        $v0, $zero, L_8023E944
    if (ctx->r2 != 0) {
        // 0x8023E934: sh          $zero, 0x44($s1)
        MEM_H(0X44, ctx->r17) = 0;
            goto L_8023E944;
    }
    goto skip_2;
    // 0x8023E934: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    skip_2:
    // 0x8023E938: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x8023E93C: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x8023E940: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_8023E944:
    // 0x8023E944: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8023E948: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x8023E94C: sltiu       $v0, $v0, 0x21
    ctx->r2 = ctx->r2 < 0X21 ? 1 : 0;
    // 0x8023E950: beq         $v0, $zero, L_8023E974
    if (ctx->r2 == 0) {
        // 0x8023E954: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8023E974;
    }
    // 0x8023E954: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023E958: lw          $v0, 0xE0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE0);
    // 0x8023E95C: sltiu       $v0, $v0, 0x300
    ctx->r2 = ctx->r2 < 0X300 ? 1 : 0;
    // 0x8023E960: bne         $v0, $zero, L_8023E974
    if (ctx->r2 != 0) {
        // 0x8023E964: nop
    
            goto L_8023E974;
    }
    // 0x8023E964: nop

L_8023E968:
    // 0x8023E968: jal         0x8023ED9C
    // 0x8023E96C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8023ED9C_ovl10(rdram, ctx);
        goto after_5;
    // 0x8023E96C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
L_8023E970:
    // 0x8023E970: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_8023E974:
    // 0x8023E974: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x8023E978: lhu         $v1, 0x52($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X52);
    // 0x8023E97C: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x8023E980: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023E984: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023E988: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023E98C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023E990: jal         0x8004DA90
    // 0x8023E994: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_6;
    // 0x8023E994: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    after_6:
    // 0x8023E998: j           L_8023EA38
    // 0x8023E99C: nop

        goto L_8023EA38;
    // 0x8023E99C: nop

L_8023E9A0:
    // 0x8023E9A0: lb          $v1, 0xA7($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XA7);
    // 0x8023E9A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023E9A8: bne         $v1, $v0, L_8023EA38
    if (ctx->r3 != ctx->r2) {
        // 0x8023E9AC: nop
    
            goto L_8023EA38;
    }
    // 0x8023E9AC: nop

    // 0x8023E9B0: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023E9B4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023E9B8: j           L_8023EA38
    // 0x8023E9BC: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
        goto L_8023EA38;
    // 0x8023E9BC: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_8023E9C0:
    // 0x8023E9C0: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8023E9C4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023E9C8: beq         $v0, $zero, L_8023E9D8
    if (ctx->r2 == 0) {
        // 0x8023E9CC: nop
    
            goto L_8023E9D8;
    }
    // 0x8023E9CC: nop

    // 0x8023E9D0: jal         0x8023F2F4
    // 0x8023E9D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8023F2F4_ovl10(rdram, ctx);
        goto after_7;
    // 0x8023E9D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
L_8023E9D8:
    // 0x8023E9D8: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023E9DC: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x8023E9E0: bne         $v0, $zero, L_8023E9EC
    if (ctx->r2 != 0) {
        // 0x8023E9E4: addiu       $a2, $zero, 0x20
        ctx->r6 = ADD32(0, 0X20);
            goto L_8023E9EC;
    }
    // 0x8023E9E4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x8023E9E8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
L_8023E9EC:
    // 0x8023E9EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023E9F0: jal         0x8023F448
    // 0x8023E9F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8023F448_ovl10(rdram, ctx);
        goto after_8;
    // 0x8023E9F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x8023E9F8: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8023E9FC: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x8023EA00: beq         $v0, $zero, L_8023EA24
    if (ctx->r2 == 0) {
        // 0x8023EA04: sh          $v1, 0x4($s0)
        MEM_H(0X4, ctx->r16) = ctx->r3;
            goto L_8023EA24;
    }
    // 0x8023EA04: sh          $v1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r3;
    // 0x8023EA08: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x8023EA0C: bne         $v0, $zero, L_8023EA38
    if (ctx->r2 != 0) {
        // 0x8023EA10: nop
    
            goto L_8023EA38;
    }
    // 0x8023EA10: nop

    // 0x8023EA14: jal         0x8023ED9C
    // 0x8023EA18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8023ED9C_ovl10(rdram, ctx);
        goto after_9;
    // 0x8023EA18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x8023EA1C: j           L_8023EA38
    // 0x8023EA20: nop

        goto L_8023EA38;
    // 0x8023EA20: nop

L_8023EA24:
    // 0x8023EA24: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023EA28: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
L_8023EA2C:
    // 0x8023EA2C: sh          $zero, 0x52($s1)
    MEM_H(0X52, ctx->r17) = 0;
    // 0x8023EA30: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8023EA34: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
L_8023EA38:
    // 0x8023EA38: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8023EA3C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023EA40: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023EA44: jr          $ra
    // 0x8023EA48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023EA48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80242A30_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242A30: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80242A34: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80242A38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80242A3C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80242A40: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80242A44: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80242A48: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80242A4C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80242A50: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80242A54: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80242A58: lw          $v1, 0x1F88($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1F88);
    // 0x80242A5C: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80242A60: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80242A64: sw          $v1, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r3;
    // 0x80242A68: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80242A6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80242A70: lw          $v1, 0x1FB4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1FB4);
    // 0x80242A74: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80242A78: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80242A7C: sw          $v1, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r3;
    // 0x80242A80: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80242A84: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80242A88: lw          $a1, 0x1FE0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1FE0);
    // 0x80242A8C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80242A90: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80242A94: lw          $a0, 0xD4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD4);
    // 0x80242A98: lw          $a2, 0xD4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XD4);
    // 0x80242A9C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80242AA0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80242AA4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80242AA8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80242AAC: sw          $a1, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->r5;
    // 0x80242AB0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80242AB4: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80242AB8: lw          $a0, 0xD4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD4);
    // 0x80242ABC: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x80242AC0: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x80242AC4: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80242AC8: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80242ACC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80242AD0: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80242AD4: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x80242AD8: lh          $a0, 0x14($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X14);
    // 0x80242ADC: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80242AE0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80242AE4: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x80242AE8: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80242AEC: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80242AF0: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80242AF4: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x80242AF8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80242AFC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80242B00: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80242B04: sw          $a0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r4;
    // 0x80242B08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80242B0C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80242B10: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80242B14: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    // 0x80242B18: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    // 0x80242B1C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80242B20: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80242B24: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80242B28: lw          $a1, 0xD4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD4);
    // 0x80242B2C: andi        $v0, $v0, 0x30
    ctx->r2 = ctx->r2 & 0X30;
    // 0x80242B30: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80242B34: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80242B38: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80242B3C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80242B40: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    // 0x80242B44: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80242B48: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80242B4C: andi        $v0, $v0, 0x30
    ctx->r2 = ctx->r2 & 0X30;
    // 0x80242B50: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80242B54: sb          $v0, 0xDD($s0)
    MEM_B(0XDD, ctx->r16) = ctx->r2;
    // 0x80242B58: jal         0x8009A3B4
    // 0x80242B5C: sb          $v0, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80242B5C: sb          $v0, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80242B60: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80242B64: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80242B68: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80242B6C: jal         0x8009A3B4
    // 0x80242B70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80242B70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80242B74: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80242B78: addiu       $s2, $s0, 0x54
    ctx->r18 = ADD32(ctx->r16, 0X54);
    // 0x80242B7C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80242B80: jal         0x8009A3B4
    // 0x80242B84: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80242B84: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80242B88: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80242B8C: lw          $v1, 0xD4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XD4);
    // 0x80242B90: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80242B94: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80242B98: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x80242B9C: sw          $zero, 0x50($s0)
    MEM_W(0X50, ctx->r16) = 0;
    // 0x80242BA0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80242BA4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80242BA8: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x80242BAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80242BB0: sb          $zero, 0xDF($s0)
    MEM_B(0XDF, ctx->r16) = 0;
    // 0x80242BB4: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80242BB8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80242BBC: jal         0x8003ECF0
    // 0x80242BC0: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    func_8003ECF0_1A0F0(rdram, ctx);
        goto after_3;
    // 0x80242BC0: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    after_3:
    // 0x80242BC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80242BC8: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80242BCC: jal         0x802435E8
    // 0x80242BD0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    func_802435E8_ovl10(rdram, ctx);
        goto after_4;
    // 0x80242BD0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    after_4:
    // 0x80242BD4: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80242BD8: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80242BDC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80242BE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80242BE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80242BE8: jal         0x8009A3B4
    // 0x80242BEC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80242BEC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_5:
    // 0x80242BF0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80242BF4: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x80242BF8: jal         0x80031428
    // 0x80242BFC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80031428_C828(rdram, ctx);
        goto after_6;
    // 0x80242BFC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x80242C00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80242C04: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80242C08: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80242C0C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80242C10: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80242C14: jal         0x80031DA8
    // 0x80242C18: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_7;
    // 0x80242C18: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_7:
    // 0x80242C1C: lui         $a2, 0x80
    ctx->r6 = S32(0X80 << 16);
    // 0x80242C20: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80242C24: lw          $v1, 0xD4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XD4);
    // 0x80242C28: ori         $a2, $a2, 0x8080
    ctx->r6 = ctx->r6 | 0X8080;
    // 0x80242C2C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80242C30: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80242C34: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x80242C38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80242C3C: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80242C40: sw          $a2, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r6;
    // 0x80242C44: jal         0x8004D5D4
    // 0x80242C48: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_8;
    // 0x80242C48: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_8:
    // 0x80242C4C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80242C50: sh          $zero, 0xEC($s0)
    MEM_H(0XEC, ctx->r16) = 0;
    // 0x80242C54: sh          $zero, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = 0;
    // 0x80242C58: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80242C5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80242C60: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80242C64: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80242C68: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80242C6C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80242C70: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80242C74: jr          $ra
    // 0x80242C78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80242C78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8024C334_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024C334: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024C338: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024C33C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024C340: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024C344: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8024C348: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024C34C: beq         $v1, $v0, L_8024C3EC
    if (ctx->r3 == ctx->r2) {
        // 0x8024C350: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8024C3EC;
    }
    // 0x8024C350: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8024C354: beql        $v0, $zero, L_8024C36C
    if (ctx->r2 == 0) {
        // 0x8024C358: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024C36C;
    }
    goto skip_0;
    // 0x8024C358: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8024C35C: beq         $v1, $zero, L_8024C384
    if (ctx->r3 == 0) {
        // 0x8024C360: nop
    
            goto L_8024C384;
    }
    // 0x8024C360: nop

    // 0x8024C364: j           L_8024C4B0
    // 0x8024C368: nop

        goto L_8024C4B0;
    // 0x8024C368: nop

L_8024C36C:
    // 0x8024C36C: beq         $v1, $v0, L_8024C42C
    if (ctx->r3 == ctx->r2) {
        // 0x8024C370: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8024C42C;
    }
    // 0x8024C370: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024C374: beq         $v1, $v0, L_8024C468
    if (ctx->r3 == ctx->r2) {
        // 0x8024C378: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8024C468;
    }
    // 0x8024C378: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024C37C: j           L_8024C4B0
    // 0x8024C380: nop

        goto L_8024C4B0;
    // 0x8024C380: nop

L_8024C384:
    // 0x8024C384: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8024C388: jal         0x8006FF84
    // 0x8024C38C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8024C38C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x8024C390: beq         $v0, $zero, L_8024C4B0
    if (ctx->r2 == 0) {
        // 0x8024C394: nop
    
            goto L_8024C4B0;
    }
    // 0x8024C394: nop

    // 0x8024C398: jal         0x8024B6F8
    // 0x8024C39C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8024B6F8_ovl10(rdram, ctx);
        goto after_1;
    // 0x8024C39C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8024C3A0: jal         0x80060D38
    // 0x8024C3A4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80060D38_3C138(rdram, ctx);
        goto after_2;
    // 0x8024C3A4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_2:
    // 0x8024C3A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024C3AC: jal         0x800616FC
    // 0x8024C3B0: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x8024C3B0: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    after_3:
    // 0x8024C3B4: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8024C3B8: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8024C3BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024C3C0: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8024C3C4: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8024C3C8: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8024C3CC: lw          $a0, -0x3B88($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3B88);
    // 0x8024C3D0: sltiu       $v0, $a0, 0x3
    ctx->r2 = ctx->r4 < 0X3 ? 1 : 0;
    // 0x8024C3D4: beq         $v0, $zero, L_8024C458
    if (ctx->r2 == 0) {
        // 0x8024C3D8: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8024C458;
    }
    // 0x8024C3D8: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8024C3DC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8024C3E0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024C3E4: j           L_8024C458
    // 0x8024C3E8: sw          $v0, -0x3B88($at)
    MEM_W(-0X3B88, ctx->r1) = ctx->r2;
        goto L_8024C458;
    // 0x8024C3E8: sw          $v0, -0x3B88($at)
    MEM_W(-0X3B88, ctx->r1) = ctx->r2;
L_8024C3EC:
    // 0x8024C3EC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024C3F0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024C3F4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024C3F8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024C3FC: bne         $v0, $zero, L_8024C4B0
    if (ctx->r2 != 0) {
        // 0x8024C400: nop
    
            goto L_8024C4B0;
    }
    // 0x8024C400: nop

    // 0x8024C404: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8024C408: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8024C40C: lbu         $v1, 0x35D0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X35D0);
    // 0x8024C410: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x8024C414: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8024C418: jal         0x80069850
    // 0x8024C41C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    func_80069850_44C50(rdram, ctx);
        goto after_4;
    // 0x8024C41C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    after_4:
    // 0x8024C420: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024C424: j           L_8024C450
    // 0x8024C428: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_8024C450;
    // 0x8024C428: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8024C42C:
    // 0x8024C42C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024C430: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024C434: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024C438: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024C43C: bne         $v0, $zero, L_8024C4B0
    if (ctx->r2 != 0) {
        // 0x8024C440: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8024C4B0;
    }
    // 0x8024C440: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024C444: lbu         $a1, 0xF($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XF);
    // 0x8024C448: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    // 0x8024C44C: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
L_8024C450:
    // 0x8024C450: jal         0x800616FC
    // 0x8024C454: nop

    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x8024C454: nop

    after_5:
L_8024C458:
    // 0x8024C458: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8024C45C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024C460: j           L_8024C4B0
    // 0x8024C464: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8024C4B0;
    // 0x8024C464: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8024C468:
    // 0x8024C468: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024C46C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024C470: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024C474: bne         $v0, $zero, L_8024C4B0
    if (ctx->r2 != 0) {
        // 0x8024C478: nop
    
            goto L_8024C4B0;
    }
    // 0x8024C478: nop

    // 0x8024C47C: jal         0x8002A398
    // 0x8024C480: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8002A398_5798(rdram, ctx);
        goto after_6;
    // 0x8024C480: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
    // 0x8024C484: bne         $v0, $zero, L_8024C4B0
    if (ctx->r2 != 0) {
        // 0x8024C488: addiu       $a0, $zero, 0x19
        ctx->r4 = ADD32(0, 0X19);
            goto L_8024C4B0;
    }
    // 0x8024C488: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8024C48C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8024C490: jal         0x8002A2F8
    // 0x8024C494: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_7;
    // 0x8024C494: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8024C498: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8024C49C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8024C4A0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8024C4A4: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8024C4A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024C4AC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8024C4B0:
    // 0x8024C4B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024C4B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024C4B8: jr          $ra
    // 0x8024C4BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024C4BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024CD40_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024CD40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024CD44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024CD48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024CD4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024CD50: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8024CD54: sll         $v1, $v0, 24
    ctx->r3 = S32(ctx->r2 << 24);
    // 0x8024CD58: sra         $a0, $v1, 24
    ctx->r4 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8024CD5C: blez        $a0, L_8024CE54
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8024CD60: lui         $v0, 0x2AAA
        ctx->r2 = S32(0X2AAA << 16);
            goto L_8024CE54;
    }
    // 0x8024CD60: lui         $v0, 0x2AAA
    ctx->r2 = S32(0X2AAA << 16);
    // 0x8024CD64: ori         $v0, $v0, 0xAAAB
    ctx->r2 = ctx->r2 | 0XAAAB;
    // 0x8024CD68: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024CD6C: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8024CD70: mfhi        $a1
    ctx->r5 = hi;
    // 0x8024CD74: subu        $v1, $a1, $v1
    ctx->r3 = SUB32(ctx->r5, ctx->r3);
    // 0x8024CD78: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024CD7C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024CD80: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024CD84: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x8024CD88: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8024CD8C: bne         $v0, $zero, L_8024CDAC
    if (ctx->r2 != 0) {
        // 0x8024CD90: nop
    
            goto L_8024CDAC;
    }
    // 0x8024CD90: nop

    // 0x8024CD94: lbu         $v1, 0x22($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X22);
    // 0x8024CD98: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8024CD9C: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8024CDA0: beq         $v0, $zero, L_8024CDAC
    if (ctx->r2 == 0) {
        // 0x8024CDA4: addiu       $v0, $v1, 0x20
        ctx->r2 = ADD32(ctx->r3, 0X20);
            goto L_8024CDAC;
    }
    // 0x8024CDA4: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x8024CDA8: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
L_8024CDAC:
    // 0x8024CDAC: jal         0x800A3450
    // 0x8024CDB0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8024CDB0: nop

    after_0:
    // 0x8024CDB4: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x8024CDB8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8024CDBC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024CDC0: jal         0x800A3450
    // 0x8024CDC4: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8024CDC4: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_1:
    // 0x8024CDC8: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x8024CDCC: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x8024CDD0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8024CDD4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024CDD8: andi        $a0, $a0, 0x1
    ctx->r4 = ctx->r4 & 0X1;
    // 0x8024CDDC: bne         $a0, $zero, L_8024CDFC
    if (ctx->r4 != 0) {
        // 0x8024CDE0: sh          $v1, 0x20($s0)
        MEM_H(0X20, ctx->r16) = ctx->r3;
            goto L_8024CDFC;
    }
    // 0x8024CDE0: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x8024CDE4: jal         0x800A3450
    // 0x8024CDE8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8024CDE8: nop

    after_2:
    // 0x8024CDEC: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x8024CDF0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8024CDF4: j           L_8024CE10
    // 0x8024CDF8: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
        goto L_8024CE10;
    // 0x8024CDF8: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
L_8024CDFC:
    // 0x8024CDFC: jal         0x800A3450
    // 0x8024CE00: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8024CE00: nop

    after_3:
    // 0x8024CE04: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x8024CE08: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8024CE0C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_8024CE10:
    // 0x8024CE10: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8024CE14: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x8024CE18: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8024CE1C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8024CE20: bne         $v0, $zero, L_8024CE34
    if (ctx->r2 != 0) {
        // 0x8024CE24: lui         $a0, 0xFFFD
        ctx->r4 = S32(0XFFFD << 16);
            goto L_8024CE34;
    }
    // 0x8024CE24: lui         $a0, 0xFFFD
    ctx->r4 = S32(0XFFFD << 16);
    // 0x8024CE28: lhu         $v0, 0x24($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X24);
    // 0x8024CE2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024CE30: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_8024CE34:
    // 0x8024CE34: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x8024CE38: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x8024CE3C: ori         $a0, $a0, 0xFDFE
    ctx->r4 = ctx->r4 | 0XFDFE;
    // 0x8024CE40: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8024CE44: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8024CE48: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x8024CE4C: j           L_8024CE5C
    // 0x8024CE50: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
        goto L_8024CE5C;
    // 0x8024CE50: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_8024CE54:
    // 0x8024CE54: jal         0x8004F5C4
    // 0x8024CE58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_4;
    // 0x8024CE58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_8024CE5C:
    // 0x8024CE5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024CE60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024CE64: jr          $ra
    // 0x8024CE68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024CE68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80245F78_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80245F78: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80245F7C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80245F80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80245F84: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80245F88: addiu       $s2, $s0, 0x54
    ctx->r18 = ADD32(ctx->r16, 0X54);
    // 0x80245F8C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80245F90: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80245F94: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80245F98: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80245F9C: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x80245FA0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80245FA4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80245FA8: jal         0x8009A3B4
    // 0x80245FAC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80245FAC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    after_0:
    // 0x80245FB0: addiu       $s3, $s0, 0x14
    ctx->r19 = ADD32(ctx->r16, 0X14);
    // 0x80245FB4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80245FB8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80245FBC: jal         0x8009A3B4
    // 0x80245FC0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80245FC0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80245FC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80245FC8: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x80245FCC: jal         0x80031600
    // 0x80245FD0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_2;
    // 0x80245FD0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80245FD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80245FD8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80245FDC: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80245FE0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80245FE4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80245FE8: jal         0x80031DA8
    // 0x80245FEC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x80245FEC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x80245FF0: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80245FF4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80245FF8: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80245FFC: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80246000: lh          $a3, 0x18($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X18);
    // 0x80246004: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80246008: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024600C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80246010: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80246014: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x80246018: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8024601C: sw          $v1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r3;
    // 0x80246020: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80246024: sw          $a3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r7;
    // 0x80246028: jal         0x8009A3B4
    // 0x8024602C: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8024602C: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    after_4:
    // 0x80246030: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80246034: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80246038: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8024603C: jal         0x8003B564
    // 0x80246040: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_5;
    // 0x80246040: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
    // 0x80246044: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80246048: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8024604C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80246050: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80246054: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80246058: jr          $ra
    // 0x8024605C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8024605C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80249A8C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249A8C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80249A90: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80249A94: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80249A98: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80249A9C: jal         0x8004F144
    // 0x80249AA0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80249AA0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80249AA4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80249AA8: beq         $s0, $zero, L_80249AE8
    if (ctx->r16 == 0) {
        // 0x80249AAC: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_80249AE8;
    }
    // 0x80249AAC: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80249AB0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80249AB4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80249AB8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80249ABC: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80249AC0: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80249AC4: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x80249AC8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80249ACC: jal         0x8009A3B4
    // 0x80249AD0: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80249AD0: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_1:
    // 0x80249AD4: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x80249AD8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80249ADC: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x80249AE0: jal         0x8004F684
    // 0x80249AE4: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    func_8004F684_2AA84(rdram, ctx);
        goto after_2;
    // 0x80249AE4: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    after_2:
L_80249AE8:
    // 0x80249AE8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80249AEC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80249AF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80249AF4: jr          $ra
    // 0x80249AF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80249AF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024024C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024024C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80240250: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80240254: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80240258: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8024025C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80240260: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80240264: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80240268: jal         0x8009A3B4
    // 0x8024026C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8024026C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x80240270: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80240274: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80240278: jal         0x8009A3B4
    // 0x8024027C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8024027C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80240280: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80240284: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80240288: jal         0x8009A3B4
    // 0x8024028C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8024028C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80240290: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80240294: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    // 0x80240298: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8024029C: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802402A0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802402A4: addiu       $a1, $a1, 0x1938
    ctx->r5 = ADD32(ctx->r5, 0X1938);
    // 0x802402A8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x802402AC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x802402B0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x802402B4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802402B8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802402BC: lw          $v0, 0x1938($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1938);
    // 0x802402C0: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x802402C4: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x802402C8: bne         $v1, $v0, L_802403F4
    if (ctx->r3 != ctx->r2) {
        // 0x802402CC: sltiu       $v0, $a0, 0xA
        ctx->r2 = ctx->r4 < 0XA ? 1 : 0;
            goto L_802403F4;
    }
    // 0x802402CC: sltiu       $v0, $a0, 0xA
    ctx->r2 = ctx->r4 < 0XA ? 1 : 0;
    // 0x802402D0: beq         $v0, $zero, L_802403EC
    if (ctx->r2 == 0) {
        // 0x802402D4: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_802403EC;
    }
    // 0x802402D4: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x802402D8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802402DC: addu        $at, $at, $v0
    gpr jr_addend_802402E4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802402E0: lw          $v0, 0x3020($at)
    ctx->r2 = ADD32(ctx->r1, 0X3020);
    // 0x802402E4: jr          $v0
    // 0x802402E8: nop

    switch (jr_addend_802402E4 >> 2) {
        case 0: goto L_802402EC; break;
        case 1: goto L_80240314; break;
        case 2: goto L_8024033C; break;
        case 3: goto L_80240378; break;
        case 4: goto L_80240348; break;
        case 5: goto L_80240378; break;
        case 6: goto L_802403D4; break;
        case 7: goto L_80240388; break;
        case 8: goto L_802403B0; break;
        case 9: goto L_802403D4; break;
        default: switch_error(__func__, 0x802402E4, 0x80253020);
    }
    // 0x802402E8: nop

L_802402EC:
    // 0x802402EC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802402F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802402F4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x802402F8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802402FC: sra         $v0, $v0, 21
    ctx->r2 = S32(SIGNED(ctx->r2) >> 21);
    // 0x80240300: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80240304: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80240308: lw          $a1, 0x1934($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1934);
    // 0x8024030C: j           L_802403E4
    // 0x80240310: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_802403E4;
    // 0x80240310: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80240314:
    // 0x80240314: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80240318: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024031C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80240320: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80240324: sra         $v0, $v0, 21
    ctx->r2 = S32(SIGNED(ctx->r2) >> 21);
    // 0x80240328: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8024032C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80240330: lw          $a1, 0x1934($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1934);
    // 0x80240334: j           L_802403E4
    // 0x80240338: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_802403E4;
    // 0x80240338: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8024033C:
    // 0x8024033C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80240340: j           L_802403EC
    // 0x80240344: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_802403EC;
    // 0x80240344: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80240348:
    // 0x80240348: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024034C: sh          $zero, 0x5678($at)
    MEM_H(0X5678, ctx->r1) = 0;
    // 0x80240350: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80240354: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240358: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8024035C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80240360: sra         $v0, $v0, 21
    ctx->r2 = S32(SIGNED(ctx->r2) >> 21);
    // 0x80240364: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80240368: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8024036C: lw          $a1, 0x1934($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1934);
    // 0x80240370: j           L_802403E4
    // 0x80240374: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_802403E4;
    // 0x80240374: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80240378:
    // 0x80240378: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8024037C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240380: j           L_802403EC
    // 0x80240384: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_802403EC;
    // 0x80240384: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80240388:
    // 0x80240388: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8024038C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240390: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80240394: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80240398: sra         $v0, $v0, 21
    ctx->r2 = S32(SIGNED(ctx->r2) >> 21);
    // 0x8024039C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802403A0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802403A4: lw          $a1, 0x1934($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1934);
    // 0x802403A8: j           L_802403E4
    // 0x802403AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_802403E4;
    // 0x802403AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802403B0:
    // 0x802403B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802403B4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802403B8: sh          $v0, 0x5678($at)
    MEM_H(0X5678, ctx->r1) = ctx->r2;
    // 0x802403BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802403C0: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x802403C4: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802403C8: lw          $a1, 0x194C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X194C);
    // 0x802403CC: j           L_802403E4
    // 0x802403D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_802403E4;
    // 0x802403D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802403D4:
    // 0x802403D4: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x802403D8: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802403DC: lw          $a1, 0x1934($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1934);
    // 0x802403E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802403E4:
    // 0x802403E4: jal         0x80050294
    // 0x802403E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x802403E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
L_802403EC:
    // 0x802403EC: j           L_80240478
    // 0x802403F0: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_80240478;
    // 0x802403F0: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_802403F4:
    // 0x802403F4: lw          $v0, 0x520($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X520);
    // 0x802403F8: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x802403FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80240400: bne         $v1, $v0, L_80240450
    if (ctx->r3 != ctx->r2) {
        // 0x80240404: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80240450;
    }
    // 0x80240404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240408: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8024040C: lh          $v1, 0x5678($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X5678);
    // 0x80240410: beq         $v1, $v0, L_80240450
    if (ctx->r3 == ctx->r2) {
        // 0x80240414: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80240450;
    }
    // 0x80240414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240418: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024041C: sh          $v0, 0x5678($at)
    MEM_H(0X5678, ctx->r1) = ctx->r2;
    // 0x80240420: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80240424: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80240428: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8024042C: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80240430: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80240434: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80240438: lw          $a1, -0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, -0X4);
    // 0x8024043C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80240440: jal         0x80050294
    // 0x80240444: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80240444: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80240448: j           L_80240478
    // 0x8024044C: nop

        goto L_80240478;
    // 0x8024044C: nop

L_80240450:
    // 0x80240450: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80240454: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80240458: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8024045C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80240460: lw          $v1, 0x1934($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1934);
    // 0x80240464: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80240468: beq         $v1, $v0, L_80240478
    if (ctx->r3 == ctx->r2) {
        // 0x8024046C: nop
    
            goto L_80240478;
    }
    // 0x8024046C: nop

    // 0x80240470: jal         0x8005044C
    // 0x80240474: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x80240474: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_80240478:
    // 0x80240478: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8024047C: lh          $v0, 0x5678($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X5678);
    // 0x80240480: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80240484: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80240488: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8024048C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80240490: lb          $a0, 0x19C4($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X19C4);
    // 0x80240494: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80240498: jal         0x8003B85C
    // 0x8024049C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_6;
    // 0x8024049C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_6:
    // 0x802404A0: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x802404A4: lui         $a1, 0x10
    ctx->r5 = S32(0X10 << 16);
    // 0x802404A8: ori         $a1, $a1, 0xF
    ctx->r5 = ctx->r5 | 0XF;
    // 0x802404AC: jal         0x8003B840
    // 0x802404B0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_7;
    // 0x802404B0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_7:
    // 0x802404B4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802404B8: lh          $v0, 0x5678($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X5678);
    // 0x802404BC: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x802404C0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802404C4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802404C8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802404CC: lb          $a0, 0x19C5($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X19C5);
    // 0x802404D0: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x802404D4: jal         0x8003B85C
    // 0x802404D8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_8;
    // 0x802404D8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_8:
    // 0x802404DC: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x802404E0: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x802404E4: ori         $a1, $a1, 0x11
    ctx->r5 = ctx->r5 | 0X11;
    // 0x802404E8: jal         0x8003B840
    // 0x802404EC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_9;
    // 0x802404EC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_9:
    // 0x802404F0: lw          $v0, 0x184($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X184);
    // 0x802404F4: bne         $v0, $s0, L_80240524
    if (ctx->r2 != ctx->r16) {
        // 0x802404F8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80240524;
    }
    // 0x802404F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802404FC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80240500: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80240504: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80240508: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x8024050C: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80240510: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x80240514: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80240518: xori        $v1, $v1, 0x2
    ctx->r3 = ctx->r3 ^ 0X2;
    // 0x8024051C: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x80240520: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
L_80240524:
    // 0x80240524: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80240528: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024052C: bne         $v1, $v0, L_8024053C
    if (ctx->r3 != ctx->r2) {
        // 0x80240530: nop
    
            goto L_8024053C;
    }
    // 0x80240530: nop

    // 0x80240534: jal         0x80240944
    // 0x80240538: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80240944_ovl10(rdram, ctx);
        goto after_10;
    // 0x80240538: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
L_8024053C:
    // 0x8024053C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80240540: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80240544: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80240548: jr          $ra
    // 0x8024054C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8024054C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80247CC0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247CC0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80247CC4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80247CC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80247CCC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80247CD0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80247CD4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80247CD8: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x80247CDC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80247CE0: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80247CE4: jal         0x8002C654
    // 0x80247CE8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x80247CE8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80247CEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80247CF0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80247CF4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80247CF8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80247CFC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80247D00: jal         0x80031DA8
    // 0x80247D04: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_1;
    // 0x80247D04: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_1:
    // 0x80247D08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80247D0C: jal         0x8004D5D4
    // 0x80247D10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_2;
    // 0x80247D10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x80247D14: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80247D18: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80247D1C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80247D20: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x80247D24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80247D28: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80247D2C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80247D30: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80247D34: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80247D38: jr          $ra
    // 0x80247D3C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80247D3C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022B5A4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B5A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B5A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B5AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B5B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B5B4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B5B8: bne         $v0, $zero, L_8022B604
    if (ctx->r2 != 0) {
        // 0x8022B5BC: nop
    
            goto L_8022B604;
    }
    // 0x8022B5BC: nop

    // 0x8022B5C0: jal         0x8022BE40
    // 0x8022B5C4: nop

    func_8022BE40_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022B5C4: nop

    after_0:
    // 0x8022B5C8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B5CC: bne         $v0, $zero, L_8022B600
    if (ctx->r2 != 0) {
        // 0x8022B5D0: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022B600;
    }
    // 0x8022B5D0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B5D4: jal         0x80229F50
    // 0x8022B5D8: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_80229F50_ovl10(rdram, ctx);
        goto after_1;
    // 0x8022B5D8: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_1:
    // 0x8022B5DC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022B5E0: jal         0x8003E87C
    // 0x8022B5E4: addiu       $a0, $a0, 0x7C8
    ctx->r4 = ADD32(ctx->r4, 0X7C8);
    func_8003E87C_19C7C(rdram, ctx);
        goto after_2;
    // 0x8022B5E4: addiu       $a0, $a0, 0x7C8
    ctx->r4 = ADD32(ctx->r4, 0X7C8);
    after_2:
    // 0x8022B5E8: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x8022B5EC: bne         $v0, $v1, L_8022B600
    if (ctx->r2 != ctx->r3) {
        // 0x8022B5F0: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022B600;
    }
    // 0x8022B5F0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B5F4: jal         0x8022A170
    // 0x8022B5F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8022A170_ovl10(rdram, ctx);
        goto after_3;
    // 0x8022B5F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x8022B5FC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022B600:
    // 0x8022B600: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B604:
    // 0x8022B604: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B608: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B60C: jr          $ra
    // 0x8022B610: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B610: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231108_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231108: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023110C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231110: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231114: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231118: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8023111C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231120: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80231124: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231128: bne         $v0, $zero, L_8023115C
    if (ctx->r2 != 0) {
        // 0x8023112C: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8023115C;
    }
    // 0x8023112C: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x80231130: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80231134: bne         $v1, $v0, L_80231140
    if (ctx->r3 != ctx->r2) {
        // 0x80231138: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231140;
    }
    // 0x80231138: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023113C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
L_80231140:
    // 0x80231140: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80231144: jal         0x80233200
    // 0x80231148: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80233200_ovl10(rdram, ctx);
        goto after_0;
    // 0x80231148: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8023114C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80231150: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80231154: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80231158: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8023115C:
    // 0x8023115C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231160: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231164: jr          $ra
    // 0x80231168: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231168: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023ED9C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023ED9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023EDA0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023EDA4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023EDA8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023EDAC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8023EDB0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023EDB4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023EDB8: jal         0x8004EFE4
    // 0x8023EDBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8023EDBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023EDC0: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8023EDC4: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8023EDC8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8023EDCC: beq         $s1, $zero, L_8023EFF0
    if (ctx->r17 == 0) {
        // 0x8023EDD0: addiu       $s4, $s2, 0x440
        ctx->r20 = ADD32(ctx->r18, 0X440);
            goto L_8023EFF0;
    }
    // 0x8023EDD0: addiu       $s4, $s2, 0x440
    ctx->r20 = ADD32(ctx->r18, 0X440);
    // 0x8023EDD4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023EDD8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8023EDDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023EDE0: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8023EDE4: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
    // 0x8023EDE8: lbu         $v0, 0x528($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X528);
    // 0x8023EDEC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023EDF0: bne         $v0, $zero, L_8023EE28
    if (ctx->r2 != 0) {
        // 0x8023EDF4: sb          $v0, 0xF($s1)
        MEM_B(0XF, ctx->r17) = ctx->r2;
            goto L_8023EE28;
    }
    // 0x8023EDF4: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x8023EDF8: lbu         $v0, 0x528($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X528);
    // 0x8023EDFC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8023EE00: bne         $v0, $zero, L_8023EE18
    if (ctx->r2 != 0) {
        // 0x8023EE04: nop
    
            goto L_8023EE18;
    }
    // 0x8023EE04: nop

    // 0x8023EE08: lhu         $v0, 0x442($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X442);
    // 0x8023EE0C: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8023EE10: j           L_8023EE2C
    // 0x8023EE14: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
        goto L_8023EE2C;
    // 0x8023EE14: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
L_8023EE18:
    // 0x8023EE18: lhu         $v0, 0x442($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X442);
    // 0x8023EE1C: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8023EE20: j           L_8023EE2C
    // 0x8023EE24: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
        goto L_8023EE2C;
    // 0x8023EE24: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
L_8023EE28:
    // 0x8023EE28: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8023EE2C:
    // 0x8023EE2C: lh          $a0, 0x56($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X56);
    // 0x8023EE30: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x8023EE34: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8023EE38: addiu       $s0, $s0, 0x800
    ctx->r16 = ADD32(ctx->r16, 0X800);
    // 0x8023EE3C: jal         0x80032498
    // 0x8023EE40: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x8023EE40: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    after_1:
    // 0x8023EE44: lh          $a0, 0x56($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X56);
    // 0x8023EE48: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x8023EE4C: jal         0x800324B4
    // 0x8023EE50: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x8023EE50: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_2:
    // 0x8023EE54: lw          $v1, 0xE0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XE0);
    // 0x8023EE58: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023EE5C: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023EE60: mflo        $v1
    ctx->r3 = lo;
    // 0x8023EE64: lhu         $v0, 0x14($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X14);
    // 0x8023EE68: srl         $v1, $v1, 12
    ctx->r3 = S32(U32(ctx->r3) >> 12);
    // 0x8023EE6C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023EE70: sh          $v0, 0xC4($s2)
    MEM_H(0XC4, ctx->r18) = ctx->r2;
    // 0x8023EE74: lb          $v1, 0xF($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XF);
    // 0x8023EE78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023EE7C: bne         $v1, $v0, L_8023EE90
    if (ctx->r3 != ctx->r2) {
        // 0x8023EE80: nop
    
            goto L_8023EE90;
    }
    // 0x8023EE80: nop

    // 0x8023EE84: lhu         $v0, 0x3AA($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X3AA);
    // 0x8023EE88: j           L_8023EE94
    // 0x8023EE8C: addiu       $v0, $v0, 0x50
    ctx->r2 = ADD32(ctx->r2, 0X50);
        goto L_8023EE94;
    // 0x8023EE8C: addiu       $v0, $v0, 0x50
    ctx->r2 = ADD32(ctx->r2, 0X50);
L_8023EE90:
    // 0x8023EE90: lhu         $v0, 0x3AA($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X3AA);
L_8023EE94:
    // 0x8023EE94: sh          $v0, 0xC6($s2)
    MEM_H(0XC6, ctx->r18) = ctx->r2;
    // 0x8023EE98: lw          $v0, 0xE0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XE0);
    // 0x8023EE9C: mult        $s0, $v0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023EEA0: mflo        $v0
    ctx->r2 = lo;
    // 0x8023EEA4: lhu         $v1, 0x18($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X18);
    // 0x8023EEA8: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x8023EEAC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023EEB0: sh          $v1, 0xC8($s2)
    MEM_H(0XC8, ctx->r18) = ctx->r3;
    // 0x8023EEB4: lb          $v1, 0xF($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XF);
    // 0x8023EEB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023EEBC: bne         $v1, $v0, L_8023EF04
    if (ctx->r3 != ctx->r2) {
        // 0x8023EEC0: sra         $v1, $a0, 4
        ctx->r3 = S32(SIGNED(ctx->r4) >> 4);
            goto L_8023EF04;
    }
    // 0x8023EEC0: sra         $v1, $a0, 4
    ctx->r3 = S32(SIGNED(ctx->r4) >> 4);
    // 0x8023EEC4: lh          $v1, 0x180($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X180);
    // 0x8023EEC8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8023EECC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023EED0: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x8023EED4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023EED8: sw          $v1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r3;
    // 0x8023EEDC: lh          $v0, 0x182($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X182);
    // 0x8023EEE0: addiu       $v0, $v0, -0x3C
    ctx->r2 = ADD32(ctx->r2, -0X3C);
    // 0x8023EEE4: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8023EEE8: lh          $v1, 0x184($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X184);
    // 0x8023EEEC: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x8023EEF0: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8023EEF4: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x8023EEF8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023EEFC: j           L_8023EF2C
    // 0x8023EF00: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
        goto L_8023EF2C;
    // 0x8023EF00: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
L_8023EF04:
    // 0x8023EF04: lh          $v0, 0x180($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X180);
    // 0x8023EF08: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023EF0C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8023EF10: lh          $v0, 0x182($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X182);
    // 0x8023EF14: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x8023EF18: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8023EF1C: lh          $v0, 0x184($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X184);
    // 0x8023EF20: sra         $v1, $s0, 4
    ctx->r3 = S32(SIGNED(ctx->r16) >> 4);
    // 0x8023EF24: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023EF28: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
L_8023EF2C:
    // 0x8023EF2C: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8023EF30: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x8023EF34: lw          $v1, 0x20($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X20);
    // 0x8023EF38: lw          $a2, 0x24($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X24);
    // 0x8023EF3C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8023EF40: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023EF44: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023EF48: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8023EF4C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8023EF50: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x8023EF54: jal         0x8004DD04
    // 0x8023EF58: sw          $a2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r6;
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x8023EF58: sw          $a2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r6;
    after_3:
    // 0x8023EF5C: lhu         $v0, 0xC4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XC4);
    // 0x8023EF60: sh          $v0, 0xC4($s3)
    MEM_H(0XC4, ctx->r19) = ctx->r2;
    // 0x8023EF64: lhu         $v0, 0xC6($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XC6);
    // 0x8023EF68: sh          $v0, 0xC6($s3)
    MEM_H(0XC6, ctx->r19) = ctx->r2;
    // 0x8023EF6C: lhu         $v0, 0xC8($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XC8);
    // 0x8023EF70: sh          $v0, 0xC8($s3)
    MEM_H(0XC8, ctx->r19) = ctx->r2;
    // 0x8023EF74: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x8023EF78: beq         $v0, $zero, L_8023EFB4
    if (ctx->r2 == 0) {
        // 0x8023EF7C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8023EFB4;
    }
    // 0x8023EF7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023EF80: lbu         $a2, 0xE8($s4)
    ctx->r6 = MEM_BU(ctx->r20, 0XE8);
    // 0x8023EF84: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8023EF88: lhu         $a3, 0xE6($s4)
    ctx->r7 = MEM_HU(ctx->r20, 0XE6);
    // 0x8023EF8C: andi        $a2, $a2, 0x2
    ctx->r6 = ctx->r6 & 0X2;
    // 0x8023EF90: sltu        $a2, $zero, $a2
    ctx->r6 = 0 < ctx->r6 ? 1 : 0;
    // 0x8023EF94: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x8023EF98: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x8023EF9C: ori         $a2, $a2, 0x28
    ctx->r6 = ctx->r6 | 0X28;
    // 0x8023EFA0: sll         $a3, $a3, 25
    ctx->r7 = S32(ctx->r7 << 25);
    // 0x8023EFA4: jal         0x8004E428
    // 0x8023EFA8: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    func_8004E428_29828(rdram, ctx);
        goto after_4;
    // 0x8023EFA8: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    after_4:
    // 0x8023EFAC: j           L_8023EFD8
    // 0x8023EFB0: addiu       $a0, $zero, 0xCE
    ctx->r4 = ADD32(0, 0XCE);
        goto L_8023EFD8;
    // 0x8023EFB0: addiu       $a0, $zero, 0xCE
    ctx->r4 = ADD32(0, 0XCE);
L_8023EFB4:
    // 0x8023EFB4: lbu         $v0, 0xE8($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XE8);
    // 0x8023EFB8: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x8023EFBC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8023EFC0: beq         $v0, $zero, L_8023EFCC
    if (ctx->r2 == 0) {
        // 0x8023EFC4: addiu       $a1, $s3, 0xC4
        ctx->r5 = ADD32(ctx->r19, 0XC4);
            goto L_8023EFCC;
    }
    // 0x8023EFC4: addiu       $a1, $s3, 0xC4
    ctx->r5 = ADD32(ctx->r19, 0XC4);
    // 0x8023EFC8: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
L_8023EFCC:
    // 0x8023EFCC: jal         0x8004E99C
    // 0x8023EFD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004E99C_29D9C(rdram, ctx);
        goto after_5;
    // 0x8023EFD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8023EFD4: addiu       $a0, $zero, 0xE3
    ctx->r4 = ADD32(0, 0XE3);
L_8023EFD8:
    // 0x8023EFD8: jal         0x8002A33C
    // 0x8023EFDC: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x8023EFDC: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_6:
    // 0x8023EFE0: lbu         $a1, 0xE8($s4)
    ctx->r5 = MEM_BU(ctx->r20, 0XE8);
    // 0x8023EFE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023EFE8: jal         0x8023F3B4
    // 0x8023EFEC: andi        $a1, $a1, 0x1
    ctx->r5 = ctx->r5 & 0X1;
    func_8023F3B4_ovl10(rdram, ctx);
        goto after_7;
    // 0x8023EFEC: andi        $a1, $a1, 0x1
    ctx->r5 = ctx->r5 & 0X1;
    after_7:
L_8023EFF0:
    // 0x8023EFF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023EFF4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8023EFF8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023EFFC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023F000: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023F004: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023F008: jr          $ra
    // 0x8023F00C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023F00C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80227F64_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227F64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227F68: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227F6C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227F70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227F74: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80227F78: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227F7C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227F80: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227F84: lw          $v0, -0xD8C($at)
    ctx->r2 = MEM_W(ctx->r1, -0XD8C);
    // 0x80227F88: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x80227F8C: jalr        $v0
    // 0x80227F90: addiu       $s0, $s0, 0x33A0
    ctx->r16 = ADD32(ctx->r16, 0X33A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227F90: addiu       $s0, $s0, 0x33A0
    ctx->r16 = ADD32(ctx->r16, 0X33A0);
    after_0:
    // 0x80227F94: addiu       $v1, $s0, 0x60
    ctx->r3 = ADD32(ctx->r16, 0X60);
    // 0x80227F98: sltu        $v0, $s0, $v1
    ctx->r2 = ctx->r16 < ctx->r3 ? 1 : 0;
    // 0x80227F9C: beq         $v0, $zero, L_80227FD4
    if (ctx->r2 == 0) {
        // 0x80227FA0: nop
    
            goto L_80227FD4;
    }
    // 0x80227FA0: nop

    // 0x80227FA4: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
L_80227FA8:
    // 0x80227FA8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80227FAC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80227FB0: beql        $v0, $zero, L_80227FC8
    if (ctx->r2 == 0) {
        // 0x80227FB4: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_80227FC8;
    }
    goto skip_0;
    // 0x80227FB4: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_0:
    // 0x80227FB8: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80227FBC: jalr        $v0
    // 0x80227FC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80227FC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80227FC4: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
L_80227FC8:
    // 0x80227FC8: sltu        $v0, $s0, $s1
    ctx->r2 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x80227FCC: bne         $v0, $zero, L_80227FA8
    if (ctx->r2 != 0) {
        // 0x80227FD0: nop
    
            goto L_80227FA8;
    }
    // 0x80227FD0: nop

L_80227FD4:
    // 0x80227FD4: jal         0x80060590
    // 0x80227FD8: addiu       $a0, $zero, 0x619
    ctx->r4 = ADD32(0, 0X619);
    func_80060590_3B990(rdram, ctx);
        goto after_2;
    // 0x80227FD8: addiu       $a0, $zero, 0x619
    ctx->r4 = ADD32(0, 0X619);
    after_2:
    // 0x80227FDC: jal         0x80060590
    // 0x80227FE0: addiu       $a0, $zero, 0x61A
    ctx->r4 = ADD32(0, 0X61A);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x80227FE0: addiu       $a0, $zero, 0x61A
    ctx->r4 = ADD32(0, 0X61A);
    after_3:
    // 0x80227FE4: jal         0x80060590
    // 0x80227FE8: addiu       $a0, $zero, 0x61B
    ctx->r4 = ADD32(0, 0X61B);
    func_80060590_3B990(rdram, ctx);
        goto after_4;
    // 0x80227FE8: addiu       $a0, $zero, 0x61B
    ctx->r4 = ADD32(0, 0X61B);
    after_4:
    // 0x80227FEC: jal         0x80060590
    // 0x80227FF0: addiu       $a0, $zero, 0x61C
    ctx->r4 = ADD32(0, 0X61C);
    func_80060590_3B990(rdram, ctx);
        goto after_5;
    // 0x80227FF0: addiu       $a0, $zero, 0x61C
    ctx->r4 = ADD32(0, 0X61C);
    after_5:
    // 0x80227FF4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227FF8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227FFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228000: jr          $ra
    // 0x80228004: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228004: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80245F68_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80245F68: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80245F6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80245F70: jr          $ra
    // 0x80245F74: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80245F74: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80234AC4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234AC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234AC8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234ACC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234AD0: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80234AD4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80234AD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234ADC: jal         0x8009A3B4
    // 0x80234AE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80234AE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80234AE4: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80234AE8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80234AEC: jal         0x8009A3B4
    // 0x80234AF0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80234AF0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80234AF4: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80234AF8: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80234AFC: jal         0x8009A3B4
    // 0x80234B00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80234B00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80234B04: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80234B08: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234B0C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80234B10: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234B14: lw          $v0, 0x1204($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1204);
    // 0x80234B18: jalr        $v0
    // 0x80234B1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80234B1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80234B20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234B24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234B28: jr          $ra
    // 0x80234B2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234B2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802266A0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802266A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802266A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802266A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802266AC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802266B0: bne         $v0, $zero, L_802266D0
    if (ctx->r2 != 0) {
        // 0x802266B4: lw          $s0, 0x2C($a0)
        ctx->r16 = MEM_W(ctx->r4, 0X2C);
            goto L_802266D0;
    }
    // 0x802266B4: lw          $s0, 0x2C($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X2C);
    // 0x802266B8: jal         0x80226F30
    // 0x802266BC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80226F30_ovl10(rdram, ctx);
        goto after_0;
    // 0x802266BC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x802266C0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802266C4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802266C8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802266CC: sb          $zero, 0x333A($at)
    MEM_B(0X333A, ctx->r1) = 0;
L_802266D0:
    // 0x802266D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802266D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802266D8: jr          $ra
    // 0x802266DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802266DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024C944_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024C944: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024C948: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024C94C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8024C950: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024C954: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024C958: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024C95C: lw          $v0, 0x2744($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2744);
    // 0x8024C960: jalr        $v0
    // 0x8024C964: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024C964: nop

    after_0:
    // 0x8024C968: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024C96C: jr          $ra
    // 0x8024C970: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024C970: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023407C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023407C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80234080: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80234084: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234088: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023408C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80234090: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80234094: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80234098: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8023409C: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x802340A0: beq         $v0, $zero, L_8023451C
    if (ctx->r2 == 0) {
        // 0x802340A4: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8023451C;
    }
    // 0x802340A4: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x802340A8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802340AC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802340B0: addu        $at, $at, $v0
    gpr jr_addend_802340B8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802340B4: lw          $v0, 0x2E98($at)
    ctx->r2 = ADD32(ctx->r1, 0X2E98);
    // 0x802340B8: jr          $v0
    // 0x802340BC: nop

    switch (jr_addend_802340B8 >> 2) {
        case 0: goto L_802340C0; break;
        case 1: goto L_802341A4; break;
        case 2: goto L_8023424C; break;
        case 3: goto L_80234290; break;
        case 4: goto L_8023430C; break;
        case 5: goto L_802343B4; break;
        case 6: goto L_80234430; break;
        case 7: goto L_8023451C; break;
        case 8: goto L_802344DC; break;
        default: switch_error(__func__, 0x802340B8, 0x80252E98);
    }
    // 0x802340BC: nop

L_802340C0:
    // 0x802340C0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802340C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802340C8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802340CC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802340D0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x802340D4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x802340D8: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x802340DC: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802340E0: jal         0x8004D5D4
    // 0x802340E4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802340E4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x802340E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802340EC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802340F0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802340F4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802340F8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802340FC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80234100: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80234104: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80234108: addiu       $v0, $v0, 0x11F0
    ctx->r2 = ADD32(ctx->r2, 0X11F0);
    // 0x8023410C: jal         0x8003E934
    // 0x80234110: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80234110: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x80234114: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234118: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023411C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80234120: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80234124: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234128: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8023412C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80234130: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x80234134: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80234138: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8023413C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80234140: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80234144: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80234148: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8023414C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80234150: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x80234154: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x80234158: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8023415C: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x80234160: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x80234164: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80234168: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8023416C: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x80234170: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x80234174: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80234178: jal         0x80050294
    // 0x8023417C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8023417C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_2:
    // 0x80234180: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234184: jal         0x80234898
    // 0x80234188: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80234898_ovl10(rdram, ctx);
        goto after_3;
    // 0x80234188: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x8023418C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234190: jal         0x80234878
    // 0x80234194: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80234878_ovl10(rdram, ctx);
        goto after_4;
    // 0x80234194: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80234198: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023419C: j           L_8023451C
    // 0x802341A0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8023451C;
    // 0x802341A0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802341A4:
    // 0x802341A4: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x802341A8: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x802341AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802341B0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802341B4: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x802341B8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802341BC: lhu         $v1, 0x1A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1A);
    // 0x802341C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802341C4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802341C8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802341CC: lhu         $v0, 0x58($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X58);
    // 0x802341D0: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x802341D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802341D8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802341DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802341E0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802341E4: jal         0x80234A58
    // 0x802341E8: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    func_80234A58_ovl10(rdram, ctx);
        goto after_5;
    // 0x802341E8: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    after_5:
    // 0x802341EC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802341F0: bne         $v0, $zero, L_80234520
    if (ctx->r2 != 0) {
        // 0x802341F4: nop
    
            goto L_80234520;
    }
    // 0x802341F4: nop

    // 0x802341F8: jal         0x8003E934
    // 0x802341FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x802341FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80234200: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x80234204: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80234208: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023420C: beq         $a1, $zero, L_8023421C
    if (ctx->r5 == 0) {
        // 0x80234210: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8023421C;
    }
    // 0x80234210: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80234214: jal         0x8023473C
    // 0x80234218: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023473C_ovl10(rdram, ctx);
        goto after_7;
    // 0x80234218: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_8023421C:
    // 0x8023421C: jal         0x802347BC
    // 0x80234220: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802347BC_ovl10(rdram, ctx);
        goto after_8;
    // 0x80234220: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80234224: jal         0x8005044C
    // 0x80234228: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_9;
    // 0x80234228: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8023422C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80234230: bne         $v0, $zero, L_80234244
    if (ctx->r2 != 0) {
        // 0x80234234: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80234244;
    }
    // 0x80234234: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80234238: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023423C: j           L_8023451C
    // 0x80234240: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8023451C;
    // 0x80234240: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80234244:
    // 0x80234244: j           L_8023451C
    // 0x80234248: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8023451C;
    // 0x80234248: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023424C:
    // 0x8023424C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80234250: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80234254: bne         $v1, $v0, L_80234278
    if (ctx->r3 != ctx->r2) {
        // 0x80234258: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80234278;
    }
    // 0x80234258: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023425C: jal         0x8023473C
    // 0x80234260: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8023473C_ovl10(rdram, ctx);
        goto after_10;
    // 0x80234260: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_10:
    // 0x80234264: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234268: jal         0x800A3450
    // 0x8023426C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_11;
    // 0x8023426C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_11:
    // 0x80234270: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80234274: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80234278:
    // 0x80234278: jal         0x802347BC
    // 0x8023427C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802347BC_ovl10(rdram, ctx);
        goto after_12;
    // 0x8023427C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x80234280: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80234284: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234288: j           L_8023451C
    // 0x8023428C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8023451C;
    // 0x8023428C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80234290:
    // 0x80234290: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80234294: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80234298: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x8023429C: jal         0x8004F820
    // 0x802342A0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_13;
    // 0x802342A0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_13:
    // 0x802342A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802342A8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802342AC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802342B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802342B4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802342B8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802342BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802342C0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802342C4: jal         0x80234A58
    // 0x802342C8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_80234A58_ovl10(rdram, ctx);
        goto after_14;
    // 0x802342C8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_14:
    // 0x802342CC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802342D0: bne         $v0, $zero, L_80234520
    if (ctx->r2 != 0) {
        // 0x802342D4: nop
    
            goto L_80234520;
    }
    // 0x802342D4: nop

    // 0x802342D8: jal         0x8003E934
    // 0x802342DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_15;
    // 0x802342DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_15:
    // 0x802342E0: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x802342E4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802342E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802342EC: beq         $a1, $zero, L_802342FC
    if (ctx->r5 == 0) {
        // 0x802342F0: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_802342FC;
    }
    // 0x802342F0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802342F4: jal         0x8023473C
    // 0x802342F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023473C_ovl10(rdram, ctx);
        goto after_16;
    // 0x802342F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
L_802342FC:
    // 0x802342FC: jal         0x802347BC
    // 0x80234300: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802347BC_ovl10(rdram, ctx);
        goto after_17;
    // 0x80234300: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_17:
    // 0x80234304: j           L_80234514
    // 0x80234308: nop

        goto L_80234514;
    // 0x80234308: nop

L_8023430C:
    // 0x8023430C: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x80234310: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80234314: xori        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 ^ 0X8;
    // 0x80234318: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8023431C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80234320: beq         $v1, $zero, L_80234378
    if (ctx->r3 == 0) {
        // 0x80234324: addiu       $a0, $zero, 0x109
        ctx->r4 = ADD32(0, 0X109);
            goto L_80234378;
    }
    // 0x80234324: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    // 0x80234328: jal         0x8002A33C
    // 0x8023432C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_18;
    // 0x8023432C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_18:
    // 0x80234330: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234334: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80234338: jal         0x80050294
    // 0x8023433C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_19;
    // 0x8023433C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_19:
    // 0x80234340: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234344: jal         0x80234898
    // 0x80234348: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80234898_ovl10(rdram, ctx);
        goto after_20;
    // 0x80234348: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x8023434C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234350: jal         0x80234878
    // 0x80234354: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80234878_ovl10(rdram, ctx);
        goto after_21;
    // 0x80234354: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x80234358: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023435C: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
    // 0x80234360: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x80234364: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80234368: sb          $v1, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r3;
    // 0x8023436C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234370: j           L_80234380
    // 0x80234374: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80234380;
    // 0x80234374: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80234378:
    // 0x80234378: jal         0x8005044C
    // 0x8023437C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_22;
    // 0x8023437C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_22:
L_80234380:
    // 0x80234380: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234384: jal         0x80234A58
    // 0x80234388: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80234A58_ovl10(rdram, ctx);
        goto after_23;
    // 0x80234388: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_23:
    // 0x8023438C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80234390: bne         $v0, $zero, L_80234520
    if (ctx->r2 != 0) {
        // 0x80234394: nop
    
            goto L_80234520;
    }
    // 0x80234394: nop

    // 0x80234398: jal         0x8003E934
    // 0x8023439C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_24;
    // 0x8023439C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_24:
    // 0x802343A0: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x802343A4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802343A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802343AC: j           L_80234418
    // 0x802343B0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_80234418;
    // 0x802343B0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_802343B4:
    // 0x802343B4: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x802343B8: bgez        $v0, L_802343F4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802343BC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802343F4;
    }
    // 0x802343BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802343C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802343C4: jal         0x80050294
    // 0x802343C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_25;
    // 0x802343C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_25:
    // 0x802343CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802343D0: jal         0x80234898
    // 0x802343D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80234898_ovl10(rdram, ctx);
        goto after_26;
    // 0x802343D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_26:
    // 0x802343D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802343DC: jal         0x80234878
    // 0x802343E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80234878_ovl10(rdram, ctx);
        goto after_27;
    // 0x802343E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_27:
    // 0x802343E4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802343E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802343EC: j           L_802343FC
    // 0x802343F0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_802343FC;
    // 0x802343F0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802343F4:
    // 0x802343F4: jal         0x8005044C
    // 0x802343F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_28;
    // 0x802343F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_28:
L_802343FC:
    // 0x802343FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234400: jal         0x80234A58
    // 0x80234404: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80234A58_ovl10(rdram, ctx);
        goto after_29;
    // 0x80234404: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_29:
    // 0x80234408: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023440C: bne         $v0, $zero, L_80234520
    if (ctx->r2 != 0) {
        // 0x80234410: nop
    
            goto L_80234520;
    }
    // 0x80234410: nop

    // 0x80234414: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
L_80234418:
    // 0x80234418: beql        $a1, $zero, L_80234520
    if (ctx->r5 == 0) {
        // 0x8023441C: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_80234520;
    }
    goto skip_0;
    // 0x8023441C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    skip_0:
    // 0x80234420: jal         0x8023473C
    // 0x80234424: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023473C_ovl10(rdram, ctx);
        goto after_30;
    // 0x80234424: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_30:
    // 0x80234428: j           L_80234520
    // 0x8023442C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
        goto L_80234520;
    // 0x8023442C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_80234430:
    // 0x80234430: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80234434: lhu         $v1, 0x1A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1A);
    // 0x80234438: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023443C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234440: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80234444: jal         0x8003E934
    // 0x80234448: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_31;
    // 0x80234448: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_31:
    // 0x8023444C: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80234450: addiu       $v1, $v0, -0x258
    ctx->r3 = ADD32(ctx->r2, -0X258);
    // 0x80234454: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x80234458: beq         $v0, $zero, L_8023446C
    if (ctx->r2 == 0) {
        // 0x8023445C: sw          $v1, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r3;
            goto L_8023446C;
    }
    // 0x8023445C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80234460: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x80234464: j           L_80234484
    // 0x80234468: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_80234484;
    // 0x80234468: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8023446C:
    // 0x8023446C: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x80234470: beq         $v0, $zero, L_80234480
    if (ctx->r2 == 0) {
        // 0x80234474: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_80234480;
    }
    // 0x80234474: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80234478: j           L_80234484
    // 0x8023447C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_80234484;
    // 0x8023447C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_80234480:
    // 0x80234480: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
L_80234484:
    // 0x80234484: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234488: jal         0x80234A58
    // 0x8023448C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80234A58_ovl10(rdram, ctx);
        goto after_32;
    // 0x8023448C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_32:
    // 0x80234490: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80234494: bne         $v0, $zero, L_80234520
    if (ctx->r2 != 0) {
        // 0x80234498: nop
    
            goto L_80234520;
    }
    // 0x80234498: nop

    // 0x8023449C: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x802344A0: bne         $a1, $zero, L_802344B8
    if (ctx->r5 != 0) {
        // 0x802344A4: nop
    
            goto L_802344B8;
    }
    // 0x802344A4: nop

    // 0x802344A8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802344AC: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x802344B0: bne         $v0, $zero, L_802344C4
    if (ctx->r2 != 0) {
        // 0x802344B4: nop
    
            goto L_802344C4;
    }
    // 0x802344B4: nop

L_802344B8:
    // 0x802344B8: jal         0x8023473C
    // 0x802344BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023473C_ovl10(rdram, ctx);
        goto after_33;
    // 0x802344BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_33:
    // 0x802344C0: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
L_802344C4:
    // 0x802344C4: jal         0x802349EC
    // 0x802344C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802349EC_ovl10(rdram, ctx);
        goto after_34;
    // 0x802344C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_34:
    // 0x802344CC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802344D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802344D4: j           L_80234514
    // 0x802344D8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80234514;
    // 0x802344D8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802344DC:
    // 0x802344DC: lh          $a0, 0x66($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X66);
    // 0x802344E0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802344E4: jal         0x8004FA7C
    // 0x802344E8: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_35;
    // 0x802344E8: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    after_35:
    // 0x802344EC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802344F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802344F4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802344F8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802344FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234500: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80234504: bne         $v0, $zero, L_80234514
    if (ctx->r2 != 0) {
        // 0x80234508: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80234514;
    }
    // 0x80234508: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8023450C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80234510: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80234514:
    // 0x80234514: jal         0x8005044C
    // 0x80234518: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_36;
    // 0x80234518: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_36:
L_8023451C:
    // 0x8023451C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_80234520:
    // 0x80234520: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80234524: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80234528: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023452C: jr          $ra
    // 0x80234530: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80234530: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225CC0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225CC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225CC4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80225CC8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225CCC: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x80225CD0: bne         $v0, $zero, L_80225D44
    if (ctx->r2 != 0) {
        // 0x80225CD4: slti        $v0, $v0, 0xA
        ctx->r2 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
            goto L_80225D44;
    }
    // 0x80225CD4: slti        $v0, $v0, 0xA
    ctx->r2 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x80225CD8: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80225CDC: lw          $v1, 0x3320($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3320);
    // 0x80225CE0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225CE4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225CE8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225CEC: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80225CF0: lw          $v1, 0x3320($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3320);
    // 0x80225CF4: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80225CF8: sb          $v0, 0x448($v1)
    MEM_B(0X448, ctx->r3) = ctx->r2;
    // 0x80225CFC: lw          $v1, 0x24($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X24);
    // 0x80225D00: lhu         $v0, 0x14($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X14);
    // 0x80225D04: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x80225D08: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x80225D0C: lw          $v1, 0x24($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X24);
    // 0x80225D10: lh          $v0, 0x14($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X14);
    // 0x80225D14: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225D18: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80225D1C: lw          $v1, 0x24($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X24);
    // 0x80225D20: lh          $v0, 0x16($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X16);
    // 0x80225D24: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225D28: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80225D2C: lw          $v1, 0x24($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X24);
    // 0x80225D30: lh          $v0, 0x18($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X18);
    // 0x80225D34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225D38: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80225D3C: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x80225D40: slti        $v0, $v0, 0xA
    ctx->r2 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
L_80225D44:
    // 0x80225D44: beq         $v0, $zero, L_80225D5C
    if (ctx->r2 == 0) {
        // 0x80225D48: nop
    
            goto L_80225D5C;
    }
    // 0x80225D48: nop

    // 0x80225D4C: lw          $v1, 0x24($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X24);
    // 0x80225D50: lhu         $v0, 0x56($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X56);
    // 0x80225D54: addiu       $v0, $v0, 0xB4
    ctx->r2 = ADD32(ctx->r2, 0XB4);
    // 0x80225D58: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
L_80225D5C:
    // 0x80225D5C: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80225D60: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80225D64: bne         $v1, $v0, L_80225D90
    if (ctx->r3 != ctx->r2) {
        // 0x80225D68: addiu       $v0, $zero, 0x708
        ctx->r2 = ADD32(0, 0X708);
            goto L_80225D90;
    }
    // 0x80225D68: addiu       $v0, $zero, 0x708
    ctx->r2 = ADD32(0, 0X708);
    // 0x80225D6C: lw          $v1, 0x24($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X24);
    // 0x80225D70: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x80225D74: lw          $v1, 0x24($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X24);
    // 0x80225D78: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225D7C: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    // 0x80225D80: lw          $v0, 0x24($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X24);
    // 0x80225D84: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    // 0x80225D88: lw          $v0, 0x24($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X24);
    // 0x80225D8C: sb          $zero, 0xF($v0)
    MEM_B(0XF, ctx->r2) = 0;
L_80225D90:
    // 0x80225D90: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80225D94: lw          $a0, 0x3320($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3320);
    // 0x80225D98: lw          $a1, 0x24($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X24);
    // 0x80225D9C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80225DA0: jal         0x8004EC38
    // 0x80225DA4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_0;
    // 0x80225DA4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x80225DA8: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80225DAC: lw          $v1, 0x3320($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3320);
    // 0x80225DB0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225DB4: sh          $v0, 0x442($v1)
    MEM_H(0X442, ctx->r3) = ctx->r2;
    // 0x80225DB8: jr          $ra
    // 0x80225DBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225DBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239468_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239468: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023946C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239470: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239474: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80239478: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x8023947C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80239480: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80239484: addiu       $s1, $s0, 0x364
    ctx->r17 = ADD32(ctx->r16, 0X364);
    // 0x80239488: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023948C: jal         0x8004DE68
    // 0x80239490: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004DE68_29268(rdram, ctx);
        goto after_0;
    // 0x80239490: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80239494: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x80239498: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x8023949C: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802394A0: beq         $v1, $zero, L_802394BC
    if (ctx->r3 == 0) {
        // 0x802394A4: sw          $v0, 0x350($s0)
        MEM_W(0X350, ctx->r16) = ctx->r2;
            goto L_802394BC;
    }
    // 0x802394A4: sw          $v0, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r2;
    // 0x802394A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802394AC: beq         $v1, $v0, L_802394DC
    if (ctx->r3 == ctx->r2) {
        // 0x802394B0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_802394DC;
    }
    // 0x802394B0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802394B4: j           L_8023951C
    // 0x802394B8: nop

        goto L_8023951C;
    // 0x802394B8: nop

L_802394BC:
    // 0x802394BC: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x802394C0: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x802394C4: bne         $v0, $zero, L_80239508
    if (ctx->r2 != 0) {
        // 0x802394C8: nop
    
            goto L_80239508;
    }
    // 0x802394C8: nop

    // 0x802394CC: beq         $v1, $zero, L_80239508
    if (ctx->r3 == 0) {
        // 0x802394D0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80239508;
    }
    // 0x802394D0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802394D4: j           L_8023951C
    // 0x802394D8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8023951C;
    // 0x802394D8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802394DC:
    // 0x802394DC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802394E0: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x802394E4: jal         0x8004F820
    // 0x802394E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x802394E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x802394EC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802394F0: lw          $a0, 0x350($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X350);
    // 0x802394F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802394F8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802394FC: sltiu       $a0, $a0, 0x2
    ctx->r4 = ctx->r4 < 0X2 ? 1 : 0;
    // 0x80239500: beq         $a0, $zero, L_8023951C
    if (ctx->r4 == 0) {
        // 0x80239504: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8023951C;
    }
    // 0x80239504: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80239508:
    // 0x80239508: jal         0x80239630
    // 0x8023950C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80239630_ovl10(rdram, ctx);
        goto after_2;
    // 0x8023950C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80239510: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239514: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80239518: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8023951C:
    // 0x8023951C: jal         0x80239558
    // 0x80239520: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80239558_ovl10(rdram, ctx);
        goto after_3;
    // 0x80239520: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80239524: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80239528: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023952C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80239530: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239534: jr          $ra
    // 0x80239538: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80239538: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80247A90_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247A90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80247A94: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80247A98: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80247A9C: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x80247AA0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80247AA4: jal         0x8003E6BC
    // 0x80247AA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_0;
    // 0x80247AA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80247AAC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80247AB0: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    // 0x80247AB4: jal         0x8003E6BC
    // 0x80247AB8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x80247AB8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80247ABC: bne         $s0, $v0, L_80247AE4
    if (ctx->r16 != ctx->r2) {
        // 0x80247AC0: nop
    
            goto L_80247AE4;
    }
    // 0x80247AC0: nop

    // 0x80247AC4: jal         0x8006033C
    // 0x80247AC8: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80247AC8: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_2:
    // 0x80247ACC: beq         $v0, $zero, L_80247AE4
    if (ctx->r2 == 0) {
        // 0x80247AD0: addiu       $v1, $zero, 0x18
        ctx->r3 = ADD32(0, 0X18);
            goto L_80247AE4;
    }
    // 0x80247AD0: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x80247AD4: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80247AD8: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
    // 0x80247ADC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80247AE0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80247AE4:
    // 0x80247AE4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80247AE8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80247AEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80247AF0: jr          $ra
    // 0x80247AF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80247AF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023FB10_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023FB10: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8023FB14: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8023FB18: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023FB1C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8023FB20: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8023FB24: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8023FB28: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8023FB2C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8023FB30: lbu         $v0, 0x2($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X2);
    // 0x8023FB34: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8023FB38: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8023FB3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023FB40: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023FB44: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023FB48: addiu       $s1, $s2, 0x440
    ctx->r17 = ADD32(ctx->r18, 0X440);
    // 0x8023FB4C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8023FB50: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x8023FB54: lui         $s4, 0x488
    ctx->r20 = S32(0X488 << 16);
    // 0x8023FB58: lui         $s3, 0x80
    ctx->r19 = S32(0X80 << 16);
    // 0x8023FB5C: sh          $v0, 0x448($s2)
    MEM_H(0X448, ctx->r18) = ctx->r2;
    // 0x8023FB60: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_8023FB64:
    // 0x8023FB64: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023FB68: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8023FB6C: beq         $v0, $zero, L_8023FB8C
    if (ctx->r2 == 0) {
        // 0x8023FB70: addiu       $a0, $s1, 0xB0
        ctx->r4 = ADD32(ctx->r17, 0XB0);
            goto L_8023FB8C;
    }
    // 0x8023FB70: addiu       $a0, $s1, 0xB0
    ctx->r4 = ADD32(ctx->r17, 0XB0);
    // 0x8023FB74: sll         $a1, $v1, 1
    ctx->r5 = S32(ctx->r3 << 1);
    // 0x8023FB78: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8023FB7C: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x8023FB80: addu        $a1, $s2, $a1
    ctx->r5 = ADD32(ctx->r18, ctx->r5);
    // 0x8023FB84: j           L_8023FBA0
    // 0x8023FB88: addiu       $a1, $a1, 0x198
    ctx->r5 = ADD32(ctx->r5, 0X198);
        goto L_8023FBA0;
    // 0x8023FB88: addiu       $a1, $a1, 0x198
    ctx->r5 = ADD32(ctx->r5, 0X198);
L_8023FB8C:
    // 0x8023FB8C: sll         $a1, $v1, 1
    ctx->r5 = S32(ctx->r3 << 1);
    // 0x8023FB90: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8023FB94: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x8023FB98: addu        $a1, $s2, $a1
    ctx->r5 = ADD32(ctx->r18, ctx->r5);
    // 0x8023FB9C: addiu       $a1, $a1, 0x130
    ctx->r5 = ADD32(ctx->r5, 0X130);
L_8023FBA0:
    // 0x8023FBA0: jal         0x8009A3B4
    // 0x8023FBA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023FBA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8023FBA8: addiu       $a0, $s1, 0xB0
    ctx->r4 = ADD32(ctx->r17, 0XB0);
    // 0x8023FBAC: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x8023FBB0: lbu         $v1, 0x1($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X1);
    // 0x8023FBB4: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8023FBB8: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8023FBBC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8023FBC0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8023FBC4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023FBC8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8023FBCC: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8023FBD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023FBD4: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8023FBD8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023FBDC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8023FBE0: or          $v0, $v0, $s4
    ctx->r2 = ctx->r2 | ctx->r20;
    // 0x8023FBE4: jal         0x80051E18
    // 0x8023FBE8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x8023FBE8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x8023FBEC: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8023FBF0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023FBF4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023FBF8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023FBFC: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x8023FC00: bne         $v0, $zero, L_8023FB64
    if (ctx->r2 != 0) {
        // 0x8023FC04: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_8023FB64;
    }
    // 0x8023FC04: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8023FC08: addiu       $s0, $s1, 0xB0
    ctx->r16 = ADD32(ctx->r17, 0XB0);
    // 0x8023FC0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023FC10: addiu       $a1, $s2, 0x180
    ctx->r5 = ADD32(ctx->r18, 0X180);
    // 0x8023FC14: jal         0x8009A3B4
    // 0x8023FC18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023FC18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8023FC1C: lh          $a0, 0x56($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X56);
    // 0x8023FC20: jal         0x800324B4
    // 0x8023FC24: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800324B4_D8B4(rdram, ctx);
        goto after_3;
    // 0x8023FC24: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_3:
    // 0x8023FC28: lhu         $v1, 0xB0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XB0);
    // 0x8023FC2C: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x8023FC30: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023FC34: sh          $v1, 0xB0($s1)
    MEM_H(0XB0, ctx->r17) = ctx->r3;
    // 0x8023FC38: lh          $a0, 0x56($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X56);
    // 0x8023FC3C: jal         0x80032498
    // 0x8023FC40: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_80032498_D898(rdram, ctx);
        goto after_4;
    // 0x8023FC40: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_4:
    // 0x8023FC44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023FC48: lhu         $v1, 0xB4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XB4);
    // 0x8023FC4C: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x8023FC50: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x8023FC54: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023FC58: sh          $v1, 0xB4($s1)
    MEM_H(0XB4, ctx->r17) = ctx->r3;
    // 0x8023FC5C: lbu         $v1, 0x1($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X1);
    // 0x8023FC60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023FC64: addiu       $v0, $s1, 0x90
    ctx->r2 = ADD32(ctx->r17, 0X90);
    // 0x8023FC68: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023FC6C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8023FC70: lhu         $v1, 0x8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8);
    // 0x8023FC74: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8023FC78: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023FC7C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8023FC80: lui         $v0, 0x488
    ctx->r2 = S32(0X488 << 16);
    // 0x8023FC84: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8023FC88: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8023FC8C: jal         0x80051E18
    // 0x8023FC90: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_5;
    // 0x8023FC90: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_5:
    // 0x8023FC94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023FC98: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8023FC9C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8023FCA0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8023FCA4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8023FCA8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8023FCAC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8023FCB0: jr          $ra
    // 0x8023FCB4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8023FCB4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8023A498_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A498: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A49C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A4A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A4A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023A4A8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023A4AC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023A4B0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023A4B4: jal         0x8004D5D4
    // 0x8023A4B8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8023A4B8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023A4BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023A4C0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023A4C4: addiu       $v0, $v0, 0x1774
    ctx->r2 = ADD32(ctx->r2, 0X1774);
    // 0x8023A4C8: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8023A4CC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023A4D0: addiu       $v0, $v0, 0x1768
    ctx->r2 = ADD32(ctx->r2, 0X1768);
    // 0x8023A4D4: jal         0x8003E934
    // 0x8023A4D8: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8023A4D8: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    after_1:
    // 0x8023A4DC: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x8023A4E0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8023A4E4: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8023A4E8: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x8023A4EC: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8023A4F0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8023A4F4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023A4F8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8023A4FC: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8023A500: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8023A504: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8023A508: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8023A50C: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8023A510: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8023A514: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8023A518: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x8023A51C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8023A520: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x8023A524: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8023A528: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8023A52C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023A530: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023A534: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8023A538: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x8023A53C: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8023A540: addiu       $v1, $v1, 0x173C
    ctx->r3 = ADD32(ctx->r3, 0X173C);
    // 0x8023A544: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x8023A548: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    // 0x8023A54C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x8023A550: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023A554: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023A558: sb          $a0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r4;
    // 0x8023A55C: lw          $a1, -0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, -0X4);
    // 0x8023A560: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023A564: jal         0x80050294
    // 0x8023A568: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8023A568: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023A56C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023A570: sw          $s0, 0x55EC($at)
    MEM_W(0X55EC, ctx->r1) = ctx->r16;
    // 0x8023A574: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023A578: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A57C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023A580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023A584: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A588: jr          $ra
    // 0x8023A58C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A58C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802326F0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802326F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802326F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802326F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802326FC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80232700: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80232704: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80232708: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023270C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80232710: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80232714: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80232718: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023271C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232720: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x80232724: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x80232728: jal         0x80233298
    // 0x8023272C: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_80233298_ovl10(rdram, ctx);
        goto after_0;
    // 0x8023272C: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x80232730: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80232734: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80232738: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023273C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80232740: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x80232744: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80232748: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8023274C: jal         0x8004F820
    // 0x80232750: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80232750: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x80232754: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232758: bgez        $v0, L_80232788
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023275C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80232788;
    }
    // 0x8023275C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80232760: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80232764: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232768: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023276C: jal         0x8004F820
    // 0x80232770: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80232770: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80232774: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232778: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023277C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80232780: j           L_802327A4
    // 0x80232784: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_802327A4;
    // 0x80232784: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80232788:
    // 0x80232788: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023278C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232790: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80232794: jal         0x8004F820
    // 0x80232798: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80232798: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8023279C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802327A0: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_802327A4:
    // 0x802327A4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802327A8: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x802327AC: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x802327B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802327B4: jal         0x800610AC
    // 0x802327B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x802327B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x802327BC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802327C0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802327C4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802327C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802327CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802327D0: jr          $ra
    // 0x802327D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802327D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023F198_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023F198: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023F19C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023F1A0: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8023F1A4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023F1A8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023F1AC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023F1B0: jal         0x8004EFE4
    // 0x8023F1B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8023F1B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023F1B8: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8023F1BC: beq         $s2, $zero, L_8023F2D8
    if (ctx->r18 == 0) {
        // 0x8023F1C0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023F2D8;
    }
    // 0x8023F1C0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023F1C4: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8023F1C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023F1CC: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    // 0x8023F1D0: sb          $zero, 0x4($s2)
    MEM_B(0X4, ctx->r18) = 0;
    // 0x8023F1D4: sb          $v0, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r2;
    // 0x8023F1D8: lhu         $s0, 0x442($s3)
    ctx->r16 = MEM_HU(ctx->r19, 0X442);
    // 0x8023F1DC: andi        $s1, $s0, 0xFFF
    ctx->r17 = ctx->r16 & 0XFFF;
    // 0x8023F1E0: jal         0x80032498
    // 0x8023F1E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x8023F1E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8023F1E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023F1EC: jal         0x800324B4
    // 0x8023F1F0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x8023F1F0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_2:
    // 0x8023F1F4: sll         $s0, $s0, 18
    ctx->r16 = S32(ctx->r16 << 18);
    // 0x8023F1F8: srl         $s0, $s0, 22
    ctx->r16 = S32(U32(ctx->r16) >> 22);
    // 0x8023F1FC: addiu       $s0, $s0, 0x80
    ctx->r16 = ADD32(ctx->r16, 0X80);
    // 0x8023F200: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023F204: mflo        $v0
    ctx->r2 = lo;
    // 0x8023F208: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023F20C: lhu         $v1, 0x49C4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C4);
    // 0x8023F210: mult        $s1, $s0
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023F214: mflo        $s1
    ctx->r17 = lo;
    // 0x8023F218: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8023F21C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023F220: sh          $v1, 0xC4($s3)
    MEM_H(0XC4, ctx->r19) = ctx->r3;
    // 0x8023F224: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023F228: lhu         $v0, 0x49C6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C6);
    // 0x8023F22C: sh          $v0, 0xC6($s3)
    MEM_H(0XC6, ctx->r19) = ctx->r2;
    // 0x8023F230: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023F234: lhu         $v0, 0x49C8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C8);
    // 0x8023F238: lh          $v1, 0x180($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X180);
    // 0x8023F23C: sra         $s1, $s1, 12
    ctx->r17 = S32(SIGNED(ctx->r17) >> 12);
    // 0x8023F240: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8023F244: sh          $v0, 0xC8($s3)
    MEM_H(0XC8, ctx->r19) = ctx->r2;
    // 0x8023F248: sw          $v1, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r3;
    // 0x8023F24C: lh          $v0, 0x182($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X182);
    // 0x8023F250: addiu       $v0, $v0, -0x104
    ctx->r2 = ADD32(ctx->r2, -0X104);
    // 0x8023F254: sw          $v0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r2;
    // 0x8023F258: lh          $v0, 0x184($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X184);
    // 0x8023F25C: lw          $v1, 0x20($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X20);
    // 0x8023F260: addiu       $a0, $s2, 0x1C
    ctx->r4 = ADD32(ctx->r18, 0X1C);
    // 0x8023F264: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x8023F268: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x8023F26C: lw          $a2, 0x24($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X24);
    // 0x8023F270: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8023F274: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023F278: sw          $v1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r3;
    // 0x8023F27C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023F280: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8023F284: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x8023F288: jal         0x8004DD04
    // 0x8023F28C: sw          $a2, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r6;
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x8023F28C: sw          $a2, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r6;
    after_3:
    // 0x8023F290: lhu         $v0, 0xC4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XC4);
    // 0x8023F294: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023F298: sh          $v0, 0x4A74($at)
    MEM_H(0X4A74, ctx->r1) = ctx->r2;
    // 0x8023F29C: lhu         $v0, 0xC6($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XC6);
    // 0x8023F2A0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023F2A4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023F2A8: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8023F2AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023F2B0: sh          $v0, 0x4A76($at)
    MEM_H(0X4A76, ctx->r1) = ctx->r2;
    // 0x8023F2B4: lhu         $v0, 0xC8($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XC8);
    // 0x8023F2B8: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x8023F2BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023F2C0: sh          $v0, 0x4A78($at)
    MEM_H(0X4A78, ctx->r1) = ctx->r2;
    // 0x8023F2C4: jal         0x8004E428
    // 0x8023F2C8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004E428_29828(rdram, ctx);
        goto after_4;
    // 0x8023F2C8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
    // 0x8023F2CC: addiu       $a0, $zero, 0xCE
    ctx->r4 = ADD32(0, 0XCE);
    // 0x8023F2D0: jal         0x8002A33C
    // 0x8023F2D4: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8023F2D4: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    after_5:
L_8023F2D8:
    // 0x8023F2D8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023F2DC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F2E0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023F2E4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023F2E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023F2EC: jr          $ra
    // 0x8023F2F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023F2F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80226EBC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226EBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226EC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226EC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226EC8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226ECC: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x80226ED0: lw          $s0, 0x30($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X30);
    // 0x80226ED4: bne         $v0, $zero, L_80226EEC
    if (ctx->r2 != 0) {
        // 0x80226ED8: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80226EEC;
    }
    // 0x80226ED8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80226EDC: lbu         $v0, 0xE($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XE);
    // 0x80226EE0: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
    // 0x80226EE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226EE8: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
L_80226EEC:
    // 0x80226EEC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226EF0: addiu       $v0, $zero, 0x122
    ctx->r2 = ADD32(0, 0X122);
    // 0x80226EF4: bne         $v1, $v0, L_80226F0C
    if (ctx->r3 != ctx->r2) {
        // 0x80226EF8: nop
    
            goto L_80226F0C;
    }
    // 0x80226EF8: nop

    // 0x80226EFC: jal         0x8004F488
    // 0x80226F00: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x80226F00: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80226F04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226F08: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
L_80226F0C:
    // 0x80226F0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226F10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226F14: jr          $ra
    // 0x80226F18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226F18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80245EEC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80245EEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80245EF0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80245EF4: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80245EF8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80245EFC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80245F00: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80245F04: lw          $v0, 0x2120($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2120);
    // 0x80245F08: jalr        $v0
    // 0x80245F0C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80245F0C: nop

    after_0:
    // 0x80245F10: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80245F14: jr          $ra
    // 0x80245F18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80245F18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226118_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226118: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022611C: lbu         $v0, 0x434A($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X434A);
    // 0x80226120: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226124: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226128: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022612C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226130: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226134: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80226138: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022613C: lbu         $v0, 0x434B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X434B);
    // 0x80226140: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226144: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226148: jal         0x8005F6B4
    // 0x8022614C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_0;
    // 0x8022614C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x80226150: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80226154: addiu       $a0, $a0, -0x19EC
    ctx->r4 = ADD32(ctx->r4, -0X19EC);
    // 0x80226158: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022615C: addiu       $v0, $v0, -0x1974
    ctx->r2 = ADD32(ctx->r2, -0X1974);
    // 0x80226160: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226164: jal         0x8005FA7C
    // 0x80226168: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x80226168: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    after_1:
    // 0x8022616C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80226170: addiu       $v0, $v0, -0x13C0
    ctx->r2 = ADD32(ctx->r2, -0X13C0);
    // 0x80226174: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x80226178: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022617C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80226180: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x80226184: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226188: sb          $zero, 0x3378($at)
    MEM_B(0X3378, ctx->r1) = 0;
    // 0x8022618C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226190: sb          $zero, 0x333A($at)
    MEM_B(0X333A, ctx->r1) = 0;
    // 0x80226194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226198: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022619C: jr          $ra
    // 0x802261A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802261A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80240D74_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80240D74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80240D78: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80240D7C: jal         0x8004F488
    // 0x80240D80: nop

    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x80240D80: nop

    after_0:
    // 0x80240D84: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80240D88: jr          $ra
    // 0x80240D8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80240D8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80243EC4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80243EC4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80243EC8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80243ECC: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80243ED0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80243ED4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80243ED8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80243EDC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80243EE0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80243EE4: lw          $v1, 0x9C($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X9C);
    // 0x80243EE8: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80243EEC: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80243EF0: beq         $v0, $zero, L_80243F5C
    if (ctx->r2 == 0) {
        // 0x80243EF4: nop
    
            goto L_80243F5C;
    }
    // 0x80243EF4: nop

    // 0x80243EF8: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80243EFC: addiu       $s0, $s0, 0x4A06
    ctx->r16 = ADD32(ctx->r16, 0X4A06);
    // 0x80243F00: jal         0x800324B4
    // 0x80243F04: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80243F04: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_0:
    // 0x80243F08: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80243F0C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80243F10: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80243F14: sh          $v0, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r2;
    // 0x80243F18: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x80243F1C: sh          $v0, 0x46($s4)
    MEM_H(0X46, ctx->r20) = ctx->r2;
    // 0x80243F20: jal         0x80032498
    // 0x80243F24: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80243F24: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_1:
    // 0x80243F28: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80243F2C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80243F30: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80243F34: sh          $v0, 0x48($s4)
    MEM_H(0X48, ctx->r20) = ctx->r2;
    // 0x80243F38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80243F3C: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x80243F40: sb          $v0, 0x8($s4)
    MEM_B(0X8, ctx->r20) = ctx->r2;
    // 0x80243F44: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80243F48: sh          $zero, 0x4C($s4)
    MEM_H(0X4C, ctx->r20) = 0;
    // 0x80243F4C: sh          $v0, 0x4E($s4)
    MEM_H(0X4E, ctx->r20) = ctx->r2;
    // 0x80243F50: sh          $zero, 0x50($s4)
    MEM_H(0X50, ctx->r20) = 0;
    // 0x80243F54: j           L_80243F84
    // 0x80243F58: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
        goto L_80243F84;
    // 0x80243F58: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
L_80243F5C:
    // 0x80243F5C: lbu         $v0, 0xA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XA);
    // 0x80243F60: beq         $v0, $zero, L_80243F7C
    if (ctx->r2 == 0) {
        // 0x80243F64: lui         $v0, 0x1C00
        ctx->r2 = S32(0X1C00 << 16);
            goto L_80243F7C;
    }
    // 0x80243F64: lui         $v0, 0x1C00
    ctx->r2 = S32(0X1C00 << 16);
L_80243F68:
    // 0x80243F68: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80243F6C: beq         $v0, $zero, L_80243F84
    if (ctx->r2 == 0) {
        // 0x80243F70: nop
    
            goto L_80243F84;
    }
    // 0x80243F70: nop

    // 0x80243F74: j           L_802440DC
    // 0x80243F78: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
        goto L_802440DC;
    // 0x80243F78: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
L_80243F7C:
    // 0x80243F7C: j           L_80243F68
    // 0x80243F80: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
        goto L_80243F68;
    // 0x80243F80: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
L_80243F84:
    // 0x80243F84: lw          $v0, 0x44($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X44);
    // 0x80243F88: bne         $v0, $zero, L_80243F9C
    if (ctx->r2 != 0) {
        // 0x80243F8C: sw          $zero, 0x9C($s4)
        MEM_W(0X9C, ctx->r20) = 0;
            goto L_80243F9C;
    }
    // 0x80243F8C: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
    // 0x80243F90: lh          $v0, 0x48($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X48);
    // 0x80243F94: beq         $v0, $zero, L_80244014
    if (ctx->r2 == 0) {
        // 0x80243F98: addiu       $s2, $s4, 0x34
        ctx->r18 = ADD32(ctx->r20, 0X34);
            goto L_80244014;
    }
    // 0x80243F98: addiu       $s2, $s4, 0x34
    ctx->r18 = ADD32(ctx->r20, 0X34);
L_80243F9C:
    // 0x80243F9C: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x80243FA0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80243FA4: beq         $v0, $zero, L_80243FE0
    if (ctx->r2 == 0) {
        // 0x80243FA8: nop
    
            goto L_80243FE0;
    }
    // 0x80243FA8: nop

    // 0x80243FAC: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x80243FB0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80243FB4: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80243FB8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80243FBC: lhu         $v1, 0x2048($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2048);
    // 0x80243FC0: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x80243FC4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80243FC8: sb          $v1, 0x96($s4)
    MEM_B(0X96, ctx->r20) = ctx->r3;
    // 0x80243FCC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80243FD0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80243FD4: lhu         $v0, 0x204A($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X204A);
    // 0x80243FD8: j           L_80244010
    // 0x80243FDC: sb          $v0, 0x97($s4)
    MEM_B(0X97, ctx->r20) = ctx->r2;
        goto L_80244010;
    // 0x80243FDC: sb          $v0, 0x97($s4)
    MEM_B(0X97, ctx->r20) = ctx->r2;
L_80243FE0:
    // 0x80243FE0: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x80243FE4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80243FE8: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80243FEC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80243FF0: lhu         $v1, 0x2030($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2030);
    // 0x80243FF4: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x80243FF8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80243FFC: sb          $v1, 0x96($s4)
    MEM_B(0X96, ctx->r20) = ctx->r3;
    // 0x80244000: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80244004: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80244008: lhu         $v0, 0x2032($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X2032);
    // 0x8024400C: sb          $v0, 0x97($s4)
    MEM_B(0X97, ctx->r20) = ctx->r2;
L_80244010:
    // 0x80244010: addiu       $s2, $s4, 0x34
    ctx->r18 = ADD32(ctx->r20, 0X34);
L_80244014:
    // 0x80244014: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80244018: addiu       $s3, $s4, 0x1C
    ctx->r19 = ADD32(ctx->r20, 0X1C);
    // 0x8024401C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80244020: jal         0x8009A3B4
    // 0x80244024: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80244024: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80244028: addiu       $s0, $s4, 0x2C
    ctx->r16 = ADD32(ctx->r20, 0X2C);
    // 0x8024402C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80244030: addiu       $s1, $s4, 0x14
    ctx->r17 = ADD32(ctx->r20, 0X14);
    // 0x80244034: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80244038: jal         0x8009A3B4
    // 0x8024403C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8024403C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80244040: jal         0x80244400
    // 0x80244044: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80244400_ovl10(rdram, ctx);
        goto after_4;
    // 0x80244044: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_4:
    // 0x80244048: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8024404C: jal         0x8004DD04
    // 0x80244050: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DD04_29104(rdram, ctx);
        goto after_5;
    // 0x80244050: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80244054: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80244058: jal         0x8004DD04
    // 0x8024405C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004DD04_29104(rdram, ctx);
        goto after_6;
    // 0x8024405C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x80244060: jal         0x80244248
    // 0x80244064: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80244248_ovl10(rdram, ctx);
        goto after_7;
    // 0x80244064: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_7:
    // 0x80244068: lhu         $v1, 0x14($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X14);
    // 0x8024406C: lhu         $v0, 0x16($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X16);
    // 0x80244070: lhu         $a0, 0x18($s4)
    ctx->r4 = MEM_HU(ctx->r20, 0X18);
    // 0x80244074: lb          $a1, 0xD($s4)
    ctx->r5 = MEM_B(ctx->r20, 0XD);
    // 0x80244078: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x8024407C: sh          $v0, 0x92($s4)
    MEM_H(0X92, ctx->r20) = ctx->r2;
    // 0x80244080: slti        $v0, $a1, 0x1E
    ctx->r2 = SIGNED(ctx->r5) < 0X1E ? 1 : 0;
    // 0x80244084: sh          $v1, 0x90($s4)
    MEM_H(0X90, ctx->r20) = ctx->r3;
    // 0x80244088: beq         $v0, $zero, L_802440DC
    if (ctx->r2 == 0) {
        // 0x8024408C: sh          $a0, 0x94($s4)
        MEM_H(0X94, ctx->r20) = ctx->r4;
            goto L_802440DC;
    }
    // 0x8024408C: sh          $a0, 0x94($s4)
    MEM_H(0X94, ctx->r20) = ctx->r4;
    // 0x80244090: slti        $v0, $a1, 0xF
    ctx->r2 = SIGNED(ctx->r5) < 0XF ? 1 : 0;
    // 0x80244094: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x80244098: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8024409C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802440A0: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x802440A4: beq         $v0, $zero, L_802440CC
    if (ctx->r2 == 0) {
        // 0x802440A8: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_802440CC;
    }
    // 0x802440A8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802440AC: lbu         $v1, 0x8F($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X8F);
    // 0x802440B0: bnel        $v1, $v0, L_802440C4
    if (ctx->r3 != ctx->r2) {
        // 0x802440B4: lui         $v0, 0x2CFF
        ctx->r2 = S32(0X2CFF << 16);
            goto L_802440C4;
    }
    goto skip_0;
    // 0x802440B4: lui         $v0, 0x2CFF
    ctx->r2 = S32(0X2CFF << 16);
    skip_0:
    // 0x802440B8: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x802440BC: j           L_802440C8
    // 0x802440C0: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
        goto L_802440C8;
    // 0x802440C0: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_802440C4:
    // 0x802440C4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
L_802440C8:
    // 0x802440C8: sw          $v0, 0x8C($s4)
    MEM_W(0X8C, ctx->r20) = ctx->r2;
L_802440CC:
    // 0x802440CC: lbu         $v0, 0xD($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XD);
    // 0x802440D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802440D4: j           L_80244100
    // 0x802440D8: sb          $v0, 0xD($s4)
    MEM_B(0XD, ctx->r20) = ctx->r2;
        goto L_80244100;
    // 0x802440D8: sb          $v0, 0xD($s4)
    MEM_B(0XD, ctx->r20) = ctx->r2;
L_802440DC:
    // 0x802440DC: jal         0x8004F144
    // 0x802440E0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_8;
    // 0x802440E0: nop

    after_8:
    // 0x802440E4: beq         $v0, $zero, L_802440F4
    if (ctx->r2 == 0) {
        // 0x802440E8: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_802440F4;
    }
    // 0x802440E8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x802440EC: jal         0x802444F0
    // 0x802440F0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_802444F0_ovl10(rdram, ctx);
        goto after_9;
    // 0x802440F0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_9:
L_802440F4:
    // 0x802440F4: sb          $zero, 0x0($s4)
    MEM_B(0X0, ctx->r20) = 0;
    // 0x802440F8: jal         0x8004F4F8
    // 0x802440FC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_10;
    // 0x802440FC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_10:
L_80244100:
    // 0x80244100: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80244104: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80244108: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8024410C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80244110: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80244114: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80244118: jr          $ra
    // 0x8024411C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8024411C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8024A3BC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024A3BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024A3C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8024A3C4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8024A3C8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8024A3CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024A3D0: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    // 0x8024A3D4: addiu       $t0, $a0, 0xD0
    ctx->r8 = ADD32(ctx->r4, 0XD0);
    // 0x8024A3D8: lbu         $s1, 0xDD($a0)
    ctx->r17 = MEM_BU(ctx->r4, 0XDD);
    // 0x8024A3DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024A3E0: sra         $a2, $v0, 25
    ctx->r6 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8024A3E4: addu        $v1, $s1, $zero
    ctx->r3 = ADD32(ctx->r17, 0);
    // 0x8024A3E8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024A3EC: bne         $v1, $v0, L_8024A400
    if (ctx->r3 != ctx->r2) {
        // 0x8024A3F0: addiu       $a3, $a2, 0x40
        ctx->r7 = ADD32(ctx->r6, 0X40);
            goto L_8024A400;
    }
    // 0x8024A3F0: addiu       $a3, $a2, 0x40
    ctx->r7 = ADD32(ctx->r6, 0X40);
    // 0x8024A3F4: addiu       $v0, $a2, 0x41
    ctx->r2 = ADD32(ctx->r6, 0X41);
    // 0x8024A3F8: j           L_8024A404
    // 0x8024A3FC: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
        goto L_8024A404;
    // 0x8024A3FC: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
L_8024A400:
    // 0x8024A400: sh          $a3, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r7;
L_8024A404:
    // 0x8024A404: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x8024A408: addu        $v1, $s1, $zero
    ctx->r3 = ADD32(ctx->r17, 0);
    // 0x8024A40C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024A410: sra         $a0, $v0, 25
    ctx->r4 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8024A414: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024A418: bne         $v1, $v0, L_8024A42C
    if (ctx->r3 != ctx->r2) {
        // 0x8024A41C: addiu       $a2, $a0, 0x40
        ctx->r6 = ADD32(ctx->r4, 0X40);
            goto L_8024A42C;
    }
    // 0x8024A41C: addiu       $a2, $a0, 0x40
    ctx->r6 = ADD32(ctx->r4, 0X40);
    // 0x8024A420: addiu       $v0, $a0, 0x41
    ctx->r2 = ADD32(ctx->r4, 0X41);
    // 0x8024A424: j           L_8024A430
    // 0x8024A428: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
        goto L_8024A430;
    // 0x8024A428: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
L_8024A42C:
    // 0x8024A42C: sh          $a2, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r6;
L_8024A430:
    // 0x8024A430: lhu         $v0, 0x14($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X14);
    // 0x8024A434: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024A438: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8024A43C: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x8024A440: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8024A444: lhu         $v0, 0x18($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X18);
    // 0x8024A448: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024A44C: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8024A450: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x8024A454: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    // 0x8024A458: lbu         $v0, 0xE($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0XE);
    // 0x8024A45C: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x8024A460: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8024A464: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024A468: lbu         $s0, 0x3($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0X3);
    // 0x8024A46C: andi        $v0, $s0, 0x1
    ctx->r2 = ctx->r16 & 0X1;
    // 0x8024A470: beq         $v0, $zero, L_8024A498
    if (ctx->r2 == 0) {
        // 0x8024A474: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_8024A498;
    }
    // 0x8024A474: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8024A478: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8024A47C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8024A480: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8024A484: jal         0x8024A5E0
    // 0x8024A488: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8024A5E0_ovl10(rdram, ctx);
        goto after_0;
    // 0x8024A488: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_0:
    // 0x8024A48C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024A490: beql        $v0, $zero, L_8024A5C4
    if (ctx->r2 == 0) {
        // 0x8024A494: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8024A5C4;
    }
    goto skip_0;
    // 0x8024A494: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_0:
L_8024A498:
    // 0x8024A498: andi        $v0, $s0, 0x10
    ctx->r2 = ctx->r16 & 0X10;
    // 0x8024A49C: beq         $v0, $zero, L_8024A4C4
    if (ctx->r2 == 0) {
        // 0x8024A4A0: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8024A4C4;
    }
    // 0x8024A4A0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8024A4A4: addiu       $a1, $s1, 0x2
    ctx->r5 = ADD32(ctx->r17, 0X2);
    // 0x8024A4A8: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    // 0x8024A4AC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8024A4B0: jal         0x8024A5E0
    // 0x8024A4B4: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8024A5E0_ovl10(rdram, ctx);
        goto after_1;
    // 0x8024A4B4: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_1:
    // 0x8024A4B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024A4BC: beql        $v0, $zero, L_8024A5C4
    if (ctx->r2 == 0) {
        // 0x8024A4C0: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8024A5C4;
    }
    goto skip_1;
    // 0x8024A4C0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_1:
L_8024A4C4:
    // 0x8024A4C4: andi        $v0, $s0, 0x2
    ctx->r2 = ctx->r16 & 0X2;
    // 0x8024A4C8: beq         $v0, $zero, L_8024A4EC
    if (ctx->r2 == 0) {
        // 0x8024A4CC: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8024A4EC;
    }
    // 0x8024A4CC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8024A4D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8024A4D4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8024A4D8: jal         0x8024A5E0
    // 0x8024A4DC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8024A5E0_ovl10(rdram, ctx);
        goto after_2;
    // 0x8024A4DC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_2:
    // 0x8024A4E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024A4E4: beql        $v0, $zero, L_8024A5C4
    if (ctx->r2 == 0) {
        // 0x8024A4E8: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8024A5C4;
    }
    goto skip_2;
    // 0x8024A4E8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_2:
L_8024A4EC:
    // 0x8024A4EC: andi        $v0, $s0, 0x20
    ctx->r2 = ctx->r16 & 0X20;
    // 0x8024A4F0: beq         $v0, $zero, L_8024A518
    if (ctx->r2 == 0) {
        // 0x8024A4F4: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8024A518;
    }
    // 0x8024A4F4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8024A4F8: addiu       $a1, $s1, 0x2
    ctx->r5 = ADD32(ctx->r17, 0X2);
    // 0x8024A4FC: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    // 0x8024A500: addiu       $a2, $zero, -0x2
    ctx->r6 = ADD32(0, -0X2);
    // 0x8024A504: jal         0x8024A5E0
    // 0x8024A508: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8024A5E0_ovl10(rdram, ctx);
        goto after_3;
    // 0x8024A508: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_3:
    // 0x8024A50C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024A510: beql        $v0, $zero, L_8024A5C4
    if (ctx->r2 == 0) {
        // 0x8024A514: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8024A5C4;
    }
    goto skip_3;
    // 0x8024A514: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_3:
L_8024A518:
    // 0x8024A518: andi        $v0, $s0, 0x4
    ctx->r2 = ctx->r16 & 0X4;
    // 0x8024A51C: beq         $v0, $zero, L_8024A540
    if (ctx->r2 == 0) {
        // 0x8024A520: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8024A540;
    }
    // 0x8024A520: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8024A524: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8024A528: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8024A52C: jal         0x8024A5E0
    // 0x8024A530: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8024A5E0_ovl10(rdram, ctx);
        goto after_4;
    // 0x8024A530: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_4:
    // 0x8024A534: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024A538: beql        $v0, $zero, L_8024A5C4
    if (ctx->r2 == 0) {
        // 0x8024A53C: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8024A5C4;
    }
    goto skip_4;
    // 0x8024A53C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_4:
L_8024A540:
    // 0x8024A540: andi        $v0, $s0, 0x40
    ctx->r2 = ctx->r16 & 0X40;
    // 0x8024A544: beq         $v0, $zero, L_8024A56C
    if (ctx->r2 == 0) {
        // 0x8024A548: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8024A56C;
    }
    // 0x8024A548: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8024A54C: addiu       $a1, $s1, 0x2
    ctx->r5 = ADD32(ctx->r17, 0X2);
    // 0x8024A550: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    // 0x8024A554: addiu       $a2, $zero, -0x3
    ctx->r6 = ADD32(0, -0X3);
    // 0x8024A558: jal         0x8024A5E0
    // 0x8024A55C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8024A5E0_ovl10(rdram, ctx);
        goto after_5;
    // 0x8024A55C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_5:
    // 0x8024A560: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024A564: beql        $v0, $zero, L_8024A5C4
    if (ctx->r2 == 0) {
        // 0x8024A568: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8024A5C4;
    }
    goto skip_5;
    // 0x8024A568: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_5:
L_8024A56C:
    // 0x8024A56C: andi        $v0, $s0, 0x8
    ctx->r2 = ctx->r16 & 0X8;
    // 0x8024A570: beq         $v0, $zero, L_8024A598
    if (ctx->r2 == 0) {
        // 0x8024A574: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8024A598;
    }
    // 0x8024A574: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8024A578: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x8024A57C: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    // 0x8024A580: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8024A584: jal         0x8024A5E0
    // 0x8024A588: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8024A5E0_ovl10(rdram, ctx);
        goto after_6;
    // 0x8024A588: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_6:
    // 0x8024A58C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024A590: beql        $v0, $zero, L_8024A5C4
    if (ctx->r2 == 0) {
        // 0x8024A594: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8024A5C4;
    }
    goto skip_6;
    // 0x8024A594: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_6:
L_8024A598:
    // 0x8024A598: andi        $v0, $s0, 0x80
    ctx->r2 = ctx->r16 & 0X80;
    // 0x8024A59C: beq         $v0, $zero, L_8024A5C4
    if (ctx->r2 == 0) {
        // 0x8024A5A0: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8024A5C4;
    }
    // 0x8024A5A0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8024A5A4: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x8024A5A8: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    // 0x8024A5AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8024A5B0: jal         0x8024A5E0
    // 0x8024A5B4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8024A5E0_ovl10(rdram, ctx);
        goto after_7;
    // 0x8024A5B4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_7:
    // 0x8024A5B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024A5BC: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8024A5C0: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
L_8024A5C4:
    // 0x8024A5C4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x8024A5C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8024A5CC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8024A5D0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8024A5D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024A5D8: jr          $ra
    // 0x8024A5DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8024A5DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802322A0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802322A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802322A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802322A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802322AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802322B0: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x802322B4: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802322B8: jal         0x8004FA7C
    // 0x802322BC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x802322BC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x802322C0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802322C4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x802322C8: bne         $v0, $zero, L_802322D8
    if (ctx->r2 != 0) {
        // 0x802322CC: nop
    
            goto L_802322D8;
    }
    // 0x802322CC: nop

    // 0x802322D0: lhu         $v0, 0x366($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X366);
    // 0x802322D4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802322D8:
    // 0x802322D8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802322DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802322E0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802322E4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802322E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802322EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802322F0: jr          $ra
    // 0x802322F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802322F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023EA4C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023EA4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023EA50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023EA54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023EA58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023EA5C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023EA60: beq         $v1, $zero, L_8023EA7C
    if (ctx->r3 == 0) {
        // 0x8023EA64: addiu       $a0, $s0, 0x440
        ctx->r4 = ADD32(ctx->r16, 0X440);
            goto L_8023EA7C;
    }
    // 0x8023EA64: addiu       $a0, $s0, 0x440
    ctx->r4 = ADD32(ctx->r16, 0X440);
    // 0x8023EA68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023EA6C: beq         $v1, $v0, L_8023EAA8
    if (ctx->r3 == ctx->r2) {
        // 0x8023EA70: nop
    
            goto L_8023EAA8;
    }
    // 0x8023EA70: nop

    // 0x8023EA74: j           L_8023EB54
    // 0x8023EA78: nop

        goto L_8023EB54;
    // 0x8023EA78: nop

L_8023EA7C:
    // 0x8023EA7C: lhu         $v1, 0x440($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X440);
    // 0x8023EA80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023EA84: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023EA88: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023EA8C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023EA90: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x8023EA94: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8023EA98: sh          $v0, 0x444($s0)
    MEM_H(0X444, ctx->r16) = ctx->r2;
    // 0x8023EA9C: sh          $zero, 0x448($s0)
    MEM_H(0X448, ctx->r16) = 0;
    // 0x8023EAA0: andi        $v1, $v1, 0xFFFB
    ctx->r3 = ctx->r3 & 0XFFFB;
    // 0x8023EAA4: sh          $v1, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r3;
L_8023EAA8:
    // 0x8023EAA8: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x8023EAAC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023EAB0: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x8023EAB4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023EAB8: bgtz        $v0, L_8023EACC
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023EABC: nop
    
            goto L_8023EACC;
    }
    // 0x8023EABC: nop

    // 0x8023EAC0: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8023EAC4: ori         $v0, $v0, 0x5
    ctx->r2 = ctx->r2 | 0X5;
    // 0x8023EAC8: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_8023EACC:
    // 0x8023EACC: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8023EAD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023EAD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023EAD8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023EADC: sll         $a1, $a1, 19
    ctx->r5 = S32(ctx->r5 << 19);
    // 0x8023EAE0: jal         0x8004DA90
    // 0x8023EAE4: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8023EAE4: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_0:
    // 0x8023EAE8: jal         0x80040F30
    // 0x8023EAEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8023EAEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023EAF0: jal         0x8003E934
    // 0x8023EAF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8023EAF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023EAF8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8023EAFC: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8023EB00: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8023EB04: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023EB08: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8023EB0C: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8023EB10: bltz        $v0, L_8023EB28
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023EB14: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8023EB28;
    }
    // 0x8023EB14: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8023EB18: beq         $v0, $zero, L_8023EB38
    if (ctx->r2 == 0) {
        // 0x8023EB1C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8023EB38;
    }
    // 0x8023EB1C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023EB20: j           L_8023EB54
    // 0x8023EB24: nop

        goto L_8023EB54;
    // 0x8023EB24: nop

L_8023EB28:
    // 0x8023EB28: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8023EB2C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8023EB30: bne         $v0, $zero, L_8023EB54
    if (ctx->r2 != 0) {
        // 0x8023EB34: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8023EB54;
    }
    // 0x8023EB34: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8023EB38:
    // 0x8023EB38: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8023EB3C: jal         0x8009A3B4
    // 0x8023EB40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8023EB40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8023EB44: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8023EB48: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8023EB4C: jal         0x8009A3B4
    // 0x8023EB50: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8023EB50: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
L_8023EB54:
    // 0x8023EB54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023EB58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023EB5C: jr          $ra
    // 0x8023EB60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023EB60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023399C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023399C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802339A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802339A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802339A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802339AC: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x802339B0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802339B4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802339B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802339BC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802339C0: jal         0x8004D5D4
    // 0x802339C4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802339C4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x802339C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802339CC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802339D0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802339D4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802339D8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802339DC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802339E0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802339E4: jal         0x8003E934
    // 0x802339E8: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x802339E8: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x802339EC: lui         $a2, 0x8
    ctx->r6 = S32(0X8 << 16);
    // 0x802339F0: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802339F4: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x802339F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802339FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80233A00: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233A04: addiu       $v1, $v1, -0x4C0
    ctx->r3 = ADD32(ctx->r3, -0X4C0);
    // 0x80233A08: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x80233A0C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80233A10: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80233A14: sw          $a2, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r6;
    // 0x80233A18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233A1C: jal         0x80050294
    // 0x80233A20: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80233A20: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    after_2:
    // 0x80233A24: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80233A28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233A2C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80233A30: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80233A34: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233A38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233A3C: jr          $ra
    // 0x80233A40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233A40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226348_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226348: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022634C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80226350: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226354: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80226358: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022635C: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x80226360: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80226364: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80226368: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022636C: beq         $v1, $v0, L_80226414
    if (ctx->r3 == ctx->r2) {
        // 0x80226370: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80226414;
    }
    // 0x80226370: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80226374: beql        $v0, $zero, L_8022638C
    if (ctx->r2 == 0) {
        // 0x80226378: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022638C;
    }
    goto skip_0;
    // 0x80226378: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022637C: beq         $v1, $zero, L_8022639C
    if (ctx->r3 == 0) {
        // 0x80226380: nop
    
            goto L_8022639C;
    }
    // 0x80226380: nop

    // 0x80226384: j           L_8022659C
    // 0x80226388: nop

        goto L_8022659C;
    // 0x80226388: nop

L_8022638C:
    // 0x8022638C: beq         $v1, $v0, L_802264BC
    if (ctx->r3 == ctx->r2) {
        // 0x80226390: nop
    
            goto L_802264BC;
    }
    // 0x80226390: nop

    // 0x80226394: j           L_8022659C
    // 0x80226398: nop

        goto L_8022659C;
    // 0x80226398: nop

L_8022639C:
    // 0x8022639C: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x802263A0: bne         $v0, $zero, L_802263F0
    if (ctx->r2 != 0) {
        // 0x802263A4: nop
    
            goto L_802263F0;
    }
    // 0x802263A4: nop

    // 0x802263A8: lbu         $v0, 0x7($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X7);
    // 0x802263AC: bne         $v0, $zero, L_802263C8
    if (ctx->r2 != 0) {
        // 0x802263B0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802263C8;
    }
    // 0x802263B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802263B4: sb          $v0, 0x7($s1)
    MEM_B(0X7, ctx->r17) = ctx->r2;
    // 0x802263B8: jal         0x80036E48
    // 0x802263BC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x802263BC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x802263C0: jal         0x80036B58
    // 0x802263C4: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_80036B58_11F58(rdram, ctx);
        goto after_1;
    // 0x802263C4: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_1:
L_802263C8:
    // 0x802263C8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802263CC: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802263D0: bne         $v0, $zero, L_8022659C
    if (ctx->r2 != 0) {
        // 0x802263D4: nop
    
            goto L_8022659C;
    }
    // 0x802263D4: nop

    // 0x802263D8: jal         0x80226F30
    // 0x802263DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80226F30_ovl10(rdram, ctx);
        goto after_2;
    // 0x802263DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x802263E0: jal         0x80036E48
    // 0x802263E4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_3;
    // 0x802263E4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
    // 0x802263E8: j           L_80226408
    // 0x802263EC: nop

        goto L_80226408;
    // 0x802263EC: nop

L_802263F0:
    // 0x802263F0: jal         0x80226F30
    // 0x802263F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80226F30_ovl10(rdram, ctx);
        goto after_4;
    // 0x802263F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x802263F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802263FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226400: jal         0x80036B00
    // 0x80226404: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_5;
    // 0x80226404: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
L_80226408:
    // 0x80226408: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8022640C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226410: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_80226414:
    // 0x80226414: addiu       $a0, $zero, 0x156
    ctx->r4 = ADD32(0, 0X156);
    // 0x80226418: jal         0x8004CB2C
    // 0x8022641C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_6;
    // 0x8022641C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_6:
    // 0x80226420: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80226424: addiu       $v0, $v0, -0x1408
    ctx->r2 = ADD32(ctx->r2, -0X1408);
    // 0x80226428: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022642C: jal         0x8005FB90
    // 0x80226430: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    func_8005FB90_3AF90(rdram, ctx);
        goto after_7;
    // 0x80226430: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    after_7:
    // 0x80226434: jal         0x80060018
    // 0x80226438: nop

    func_80060018_3B418(rdram, ctx);
        goto after_8;
    // 0x80226438: nop

    after_8:
    // 0x8022643C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80226440: sh          $v0, 0x438($s0)
    MEM_H(0X438, ctx->r16) = ctx->r2;
    // 0x80226444: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226448: sh          $v0, 0x43A($s0)
    MEM_H(0X43A, ctx->r16) = ctx->r2;
    // 0x8022644C: addiu       $v0, $zero, 0x1BE0
    ctx->r2 = ADD32(0, 0X1BE0);
    // 0x80226450: sh          $v0, 0x43C($s0)
    MEM_H(0X43C, ctx->r16) = ctx->r2;
    // 0x80226454: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80226458: sh          $v0, 0x442($s0)
    MEM_H(0X442, ctx->r16) = ctx->r2;
    // 0x8022645C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80226460: lh          $v1, 0x438($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X438);
    // 0x80226464: lh          $a0, 0x43A($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X43A);
    // 0x80226468: lbu         $a3, 0x9($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X9);
    // 0x8022646C: lh          $a1, 0x43C($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X43C);
    // 0x80226470: lbu         $a2, 0xBD($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XBD);
    // 0x80226474: sh          $zero, 0x440($s0)
    MEM_H(0X440, ctx->r16) = 0;
    // 0x80226478: sh          $zero, 0x444($s0)
    MEM_H(0X444, ctx->r16) = 0;
    // 0x8022647C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80226480: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226484: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80226488: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022648C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80226490: ori         $a2, $a2, 0x10
    ctx->r6 = ctx->r6 | 0X10;
    // 0x80226494: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80226498: sw          $v1, 0x428($s0)
    MEM_W(0X428, ctx->r16) = ctx->r3;
    // 0x8022649C: sw          $a0, 0x42C($s0)
    MEM_W(0X42C, ctx->r16) = ctx->r4;
    // 0x802264A0: sw          $a1, 0x430($s0)
    MEM_W(0X430, ctx->r16) = ctx->r5;
    // 0x802264A4: sb          $a2, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r6;
    // 0x802264A8: sb          $a3, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r7;
    // 0x802264AC: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802264B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802264B4: j           L_8022659C
    // 0x802264B8: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
        goto L_8022659C;
    // 0x802264B8: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_802264BC:
    // 0x802264BC: jal         0x8004EF48
    // 0x802264C0: nop

    func_8004EF48_2A348(rdram, ctx);
        goto after_9;
    // 0x802264C0: nop

    after_9:
    // 0x802264C4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x802264C8: beq         $a2, $zero, L_80226530
    if (ctx->r6 == 0) {
        // 0x802264CC: addiu       $v0, $zero, 0x400
        ctx->r2 = ADD32(0, 0X400);
            goto L_80226530;
    }
    // 0x802264CC: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x802264D0: sh          $v0, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r2;
    // 0x802264D4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802264D8: sh          $v0, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r2;
    // 0x802264DC: addiu       $v0, $zero, 0x2100
    ctx->r2 = ADD32(0, 0X2100);
    // 0x802264E0: sh          $v0, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r2;
    // 0x802264E4: lh          $v0, 0x14($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X14);
    // 0x802264E8: lh          $v1, 0x16($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X16);
    // 0x802264EC: lh          $a0, 0x18($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X18);
    // 0x802264F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802264F4: sb          $a1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r5;
    // 0x802264F8: sb          $zero, 0x2($a2)
    MEM_B(0X2, ctx->r6) = 0;
    // 0x802264FC: sb          $zero, 0x4($a2)
    MEM_B(0X4, ctx->r6) = 0;
    // 0x80226500: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x80226504: sw          $zero, 0x8($a2)
    MEM_W(0X8, ctx->r6) = 0;
    // 0x80226508: sw          $zero, 0xC($a2)
    MEM_W(0XC, ctx->r6) = 0;
    // 0x8022650C: sb          $a1, 0xF($a2)
    MEM_B(0XF, ctx->r6) = ctx->r5;
    // 0x80226510: sw          $zero, 0x44($a2)
    MEM_W(0X44, ctx->r6) = 0;
    // 0x80226514: sw          $zero, 0x48($a2)
    MEM_W(0X48, ctx->r6) = 0;
    // 0x80226518: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022651C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80226520: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80226524: sw          $v0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r2;
    // 0x80226528: sw          $v1, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r3;
    // 0x8022652C: sw          $a0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r4;
L_80226530:
    // 0x80226530: lui         $v0, 0x2C20
    ctx->r2 = S32(0X2C20 << 16);
    // 0x80226534: ori         $v0, $v0, 0x3080
    ctx->r2 = ctx->r2 | 0X3080;
    // 0x80226538: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x8022653C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226540: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226544: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    // 0x80226548: sh          $zero, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = 0;
    // 0x8022654C: sh          $zero, 0x6E($a0)
    MEM_H(0X6E, ctx->r4) = 0;
    // 0x80226550: jal         0x8004A00C
    // 0x80226554: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004A00C_2540C(rdram, ctx);
        goto after_10;
    // 0x80226554: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_10:
    // 0x80226558: jal         0x80070050
    // 0x8022655C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_11;
    // 0x8022655C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x80226560: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226564: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226568: jal         0x80034844
    // 0x8022656C: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_12;
    // 0x8022656C: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_12:
    // 0x80226570: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80226574: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80226578: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022657C: sb          $v0, 0x434A($at)
    MEM_B(0X434A, ctx->r1) = ctx->r2;
    // 0x80226580: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80226584: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226588: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022658C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226590: sb          $v0, 0x434B($at)
    MEM_B(0X434B, ctx->r1) = ctx->r2;
    // 0x80226594: jal         0x8002A2F8
    // 0x80226598: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_13;
    // 0x80226598: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    after_13:
L_8022659C:
    // 0x8022659C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802265A0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802265A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802265A8: jr          $ra
    // 0x802265AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802265AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022B8BC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B8BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B8C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B8C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B8C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B8CC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B8D0: bne         $v0, $zero, L_8022B8E8
    if (ctx->r2 != 0) {
        // 0x8022B8D4: nop
    
            goto L_8022B8E8;
    }
    // 0x8022B8D4: nop

    // 0x8022B8D8: jal         0x80229F50
    // 0x8022B8DC: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    func_80229F50_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022B8DC: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_0:
    // 0x8022B8E0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B8E4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B8E8:
    // 0x8022B8E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B8EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B8F0: jr          $ra
    // 0x8022B8F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B8F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023245C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023245C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232460: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232464: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232468: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023246C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232470: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80232474: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80232478: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8023247C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80232480: bne         $v0, $zero, L_802324DC
    if (ctx->r2 != 0) {
        // 0x80232484: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_802324DC;
    }
    // 0x80232484: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80232488: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023248C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80232490: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232494: jal         0x8004F820
    // 0x80232498: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80232498: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x8023249C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802324A0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802324A4: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x802324A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802324AC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802324B0: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x802324B4: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x802324B8: beq         $a0, $zero, L_802324DC
    if (ctx->r4 == 0) {
        // 0x802324BC: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_802324DC;
    }
    // 0x802324BC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802324C0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802324C4: jal         0x80233200
    // 0x802324C8: nop

    func_80233200_ovl10(rdram, ctx);
        goto after_1;
    // 0x802324C8: nop

    after_1:
    // 0x802324CC: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x802324D0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802324D4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802324D8: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_802324DC:
    // 0x802324DC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802324E0: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x802324E4: bne         $v0, $zero, L_80232508
    if (ctx->r2 != 0) {
        // 0x802324E8: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80232508;
    }
    // 0x802324E8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x802324EC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802324F0: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x802324F4: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x802324F8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x802324FC: jal         0x80233298
    // 0x80232500: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80233298_ovl10(rdram, ctx);
        goto after_2;
    // 0x80232500: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x80232504: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80232508:
    // 0x80232508: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023250C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232510: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232514: jr          $ra
    // 0x80232518: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232518: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
