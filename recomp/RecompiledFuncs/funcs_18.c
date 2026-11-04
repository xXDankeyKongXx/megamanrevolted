#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80076D8C_5218C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80076D8C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80076D90: lbu         $v0, -0x6F9F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X6F9F);
    // 0x80076D94: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80076D98: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80076D9C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80076DA0: lhu         $v1, 0x4662($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4662);
    // 0x80076DA4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80076DA8: lbu         $v0, 0xA99($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA99);
    // 0x80076DAC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80076DB0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076DB4: sh          $v1, 0x4640($at)
    MEM_H(0X4640, ctx->r1) = ctx->r3;
    // 0x80076DB8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80076DBC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80076DC0: lhu         $v1, 0x4660($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4660);
    // 0x80076DC4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80076DC8: lbu         $v0, 0xA98($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA98);
    // 0x80076DCC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80076DD0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076DD4: sh          $v1, 0x4652($at)
    MEM_H(0X4652, ctx->r1) = ctx->r3;
    // 0x80076DD8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80076DDC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80076DE0: lhu         $v1, 0x4660($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4660);
    // 0x80076DE4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80076DE8: lbu         $v0, 0xA97($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA97);
    // 0x80076DEC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80076DF0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076DF4: sh          $v1, 0x4650($at)
    MEM_H(0X4650, ctx->r1) = ctx->r3;
    // 0x80076DF8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80076DFC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80076E00: lhu         $v1, 0x4660($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4660);
    // 0x80076E04: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80076E08: lbu         $v0, 0xA96($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA96);
    // 0x80076E0C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80076E10: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076E14: sh          $v1, 0x464C($at)
    MEM_H(0X464C, ctx->r1) = ctx->r3;
    // 0x80076E18: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80076E1C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80076E20: lhu         $v1, 0x4660($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4660);
    // 0x80076E24: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80076E28: lbu         $v0, 0xA95($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA95);
    // 0x80076E2C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80076E30: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076E34: sh          $v1, 0x464A($at)
    MEM_H(0X464A, ctx->r1) = ctx->r3;
    // 0x80076E38: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80076E3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80076E40: lhu         $v1, 0x4660($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4660);
    // 0x80076E44: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80076E48: lbu         $v0, 0xA94($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA94);
    // 0x80076E4C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80076E50: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076E54: sh          $v1, 0x4646($at)
    MEM_H(0X4646, ctx->r1) = ctx->r3;
    // 0x80076E58: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076E5C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80076E60: lhu         $v0, 0x4660($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X4660);
    // 0x80076E64: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80076E68: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076E6C: sh          $v0, 0x4644($at)
    MEM_H(0X4644, ctx->r1) = ctx->r2;
    // 0x80076E70: jr          $ra
    // 0x80076E74: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80076E74: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80076E78: nop

    // 0x80076E7C: nop

;}
RECOMP_FUNC void func_8005891C_33D1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005891C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80058920: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80058924: lui         $s1, 0x801E
    ctx->r17 = S32(0X801E << 16);
    // 0x80058928: addiu       $s1, $s1, -0x783A
    ctx->r17 = ADD32(ctx->r17, -0X783A);
    // 0x8005892C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80058930: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80058934: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80058938: lui         $s0, 0x8018
    ctx->r16 = S32(0X8018 << 16);
    // 0x8005893C: addiu       $s0, $s0, -0x4858
    ctx->r16 = ADD32(ctx->r16, -0X4858);
    // 0x80058940: andi        $v0, $v0, 0x8009
    ctx->r2 = ctx->r2 & 0X8009;
    // 0x80058944: beq         $v0, $zero, L_80058960
    if (ctx->r2 == 0) {
        // 0x80058948: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80058960;
    }
    // 0x80058948: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005894C: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x80058950: jal         0x8002A2F8
    // 0x80058954: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x80058954: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80058958: j           L_80058AD8
    // 0x8005895C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80058AD8;
    // 0x8005895C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80058960:
    // 0x80058960: jal         0x80058784
    // 0x80058964: nop

    func_80058784_33B84(rdram, ctx);
        goto after_1;
    // 0x80058964: nop

    after_1:
    // 0x80058968: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x8005896C: lw          $a1, -0x5858($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5858);
    // 0x80058970: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80058974: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x80058978: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8005897C: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x80058980: lui         $v0, 0x900
    ctx->r2 = S32(0X900 << 16);
    // 0x80058984: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80058988: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x8005898C: sb          $v0, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r2;
    // 0x80058990: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80058994: sb          $v0, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r2;
    // 0x80058998: sb          $v0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r2;
    // 0x8005899C: sb          $v0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r2;
    // 0x800589A0: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x800589A4: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x800589A8: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
    // 0x800589AC: sb          $v1, 0x14($a1)
    MEM_B(0X14, ctx->r5) = ctx->r3;
    // 0x800589B0: sb          $zero, 0x15($a1)
    MEM_B(0X15, ctx->r5) = 0;
    // 0x800589B4: sb          $zero, 0x1C($a1)
    MEM_B(0X1C, ctx->r5) = 0;
    // 0x800589B8: sb          $v0, 0x1D($a1)
    MEM_B(0X1D, ctx->r5) = ctx->r2;
    // 0x800589BC: sb          $v1, 0x24($a1)
    MEM_B(0X24, ctx->r5) = ctx->r3;
    // 0x800589C0: sb          $v0, 0x25($a1)
    MEM_B(0X25, ctx->r5) = ctx->r2;
    // 0x800589C4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800589C8: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x800589CC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x800589D0: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x800589D4: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x800589D8: addiu       $v0, $zero, 0x11F
    ctx->r2 = ADD32(0, 0X11F);
    // 0x800589DC: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    // 0x800589E0: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    // 0x800589E4: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x800589E8: sh          $v0, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r2;
    // 0x800589EC: sh          $v0, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r2;
    // 0x800589F0: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x800589F4: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x800589F8: addiu       $v0, $zero, 0x3E80
    ctx->r2 = ADD32(0, 0X3E80);
    // 0x800589FC: sh          $zero, 0x12($a1)
    MEM_H(0X12, ctx->r5) = 0;
    // 0x80058A00: sh          $zero, 0xA($a1)
    MEM_H(0XA, ctx->r5) = 0;
    // 0x80058A04: sh          $v0, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r2;
    // 0x80058A08: jal         0x800302C8
    // 0x80058A0C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_800302C8_B6C8(rdram, ctx);
        goto after_2;
    // 0x80058A0C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_2:
    // 0x80058A10: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x80058A14: andi        $v0, $v1, 0x4828
    ctx->r2 = ctx->r3 & 0X4828;
    // 0x80058A18: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80058A1C: andi        $a0, $v1, 0x480
    ctx->r4 = ctx->r3 & 0X480;
    // 0x80058A20: sltiu       $v1, $a0, 0x1
    ctx->r3 = ctx->r4 < 0X1 ? 1 : 0;
    // 0x80058A24: beql        $v0, $v1, L_80058AD8
    if (ctx->r2 == ctx->r3) {
        // 0x80058A28: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80058AD8;
    }
    goto skip_0;
    // 0x80058A28: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x80058A2C: beq         $a0, $zero, L_80058A6C
    if (ctx->r4 == 0) {
        // 0x80058A30: nop
    
            goto L_80058A6C;
    }
    // 0x80058A30: nop

    // 0x80058A34: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80058A38: lbu         $v0, -0x4857($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4857);
    // 0x80058A3C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80058A40: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80058A44: sb          $v0, -0x4857($at)
    MEM_B(-0X4857, ctx->r1) = ctx->r2;
    // 0x80058A48: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80058A4C: bgez        $v0, L_80058AA4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80058A50: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_80058AA4;
    }
    // 0x80058A50: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x80058A54: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80058A58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80058A5C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80058A60: sb          $v0, -0x4857($at)
    MEM_B(-0X4857, ctx->r1) = ctx->r2;
    // 0x80058A64: j           L_80058AA8
    // 0x80058A68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80058AA8;
    // 0x80058A68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80058A6C:
    // 0x80058A6C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80058A70: lbu         $v0, -0x4857($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4857);
    // 0x80058A74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80058A78: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80058A7C: sb          $v0, -0x4857($at)
    MEM_B(-0X4857, ctx->r1) = ctx->r2;
    // 0x80058A80: lb          $v1, 0x0($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X0);
    // 0x80058A84: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80058A88: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80058A8C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80058A90: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80058A94: beq         $v1, $zero, L_80058AA4
    if (ctx->r3 == 0) {
        // 0x80058A98: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_80058AA4;
    }
    // 0x80058A98: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x80058A9C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80058AA0: sb          $zero, -0x4857($at)
    MEM_B(-0X4857, ctx->r1) = 0;
L_80058AA4:
    // 0x80058AA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80058AA8:
    // 0x80058AA8: jal         0x8002A2F8
    // 0x80058AAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_3;
    // 0x80058AAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80058AB0: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x80058AB4: lb          $v1, 0x1($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X1);
    // 0x80058AB8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80058ABC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80058AC0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80058AC4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80058AC8: lbu         $a1, -0x16DC($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X16DC);
    // 0x80058ACC: jal         0x80036A8C
    // 0x80058AD0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036A8C_11E8C(rdram, ctx);
        goto after_4;
    // 0x80058AD0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x80058AD4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80058AD8:
    // 0x80058AD8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80058ADC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80058AE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80058AE4: jr          $ra
    // 0x80058AE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80058AE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80058AEC: nop

;}
RECOMP_FUNC void func_8004A00C_2540C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A00C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004A010: lw          $v0, -0x38B0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X38B0);
    // 0x8004A014: lw          $t2, 0x10($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X10);
    // 0x8004A018: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x8004A01C: beq         $v0, $zero, L_8004A0D4
    if (ctx->r2 == 0) {
        // 0x8004A020: addu        $t1, $zero, $zero
        ctx->r9 = ADD32(0, 0);
            goto L_8004A0D4;
    }
    // 0x8004A020: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x8004A024: addiu       $t0, $zero, 0x48
    ctx->r8 = ADD32(0, 0X48);
L_8004A028:
    // 0x8004A028: addu        $v1, $t0, $zero
    ctx->r3 = ADD32(ctx->r8, 0);
    // 0x8004A02C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004A030: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004A034: lb          $v0, -0x39A0($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X39A0);
    // 0x8004A038: beq         $v0, $zero, L_8004A058
    if (ctx->r2 == 0) {
        // 0x8004A03C: nop
    
            goto L_8004A058;
    }
    // 0x8004A03C: nop

    // 0x8004A040: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x8004A044: sltiu       $v0, $t1, 0x3
    ctx->r2 = ctx->r9 < 0X3 ? 1 : 0;
    // 0x8004A048: bne         $v0, $zero, L_8004A028
    if (ctx->r2 != 0) {
        // 0x8004A04C: addiu       $t0, $v1, 0x24
        ctx->r8 = ADD32(ctx->r3, 0X24);
            goto L_8004A028;
    }
    // 0x8004A04C: addiu       $t0, $v1, 0x24
    ctx->r8 = ADD32(ctx->r3, 0X24);
    // 0x8004A050: j           L_8004A0D4
    // 0x8004A054: nop

        goto L_8004A0D4;
    // 0x8004A054: nop

L_8004A058:
    // 0x8004A058: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004A05C: lw          $v0, -0x38B0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X38B0);
    // 0x8004A060: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A064: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8004A068: sh          $a1, -0x3988($at)
    MEM_H(-0X3988, ctx->r1) = ctx->r5;
    // 0x8004A06C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A070: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8004A074: sh          $a2, -0x3986($at)
    MEM_H(-0X3986, ctx->r1) = ctx->r6;
    // 0x8004A078: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8004A07C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A080: sw          $v0, -0x38B0($at)
    MEM_W(-0X38B0, ctx->r1) = ctx->r2;
    // 0x8004A084: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8004A088: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A08C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8004A090: sb          $v0, -0x39A0($at)
    MEM_B(-0X39A0, ctx->r1) = ctx->r2;
    // 0x8004A094: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8004A098: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A09C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8004A0A0: sb          $v0, -0x3993($at)
    MEM_B(-0X3993, ctx->r1) = ctx->r2;
    // 0x8004A0A4: sll         $v0, $t1, 3
    ctx->r2 = S32(ctx->r9 << 3);
    // 0x8004A0A8: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x8004A0AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8004A0B0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A0B4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8004A0B8: sb          $a3, -0x3994($at)
    MEM_B(-0X3994, ctx->r1) = ctx->r7;
    // 0x8004A0BC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A0C0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8004A0C4: sw          $t2, -0x3948($at)
    MEM_W(-0X3948, ctx->r1) = ctx->r10;
    // 0x8004A0C8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A0CC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8004A0D0: sw          $a0, -0x3980($at)
    MEM_W(-0X3980, ctx->r1) = ctx->r4;
L_8004A0D4:
    // 0x8004A0D4: jr          $ra
    // 0x8004A0D8: nop

    TRACE_RETURN()
    return;
    // 0x8004A0D8: nop

;}
RECOMP_FUNC void alSaveNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80096208: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009620C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80096210: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80096214: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80096218: addiu       $a1, $a1, -0x7500
    ctx->r5 = ADD32(ctx->r5, -0X7500);
    // 0x8009621C: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x80096220: addiu       $a2, $a2, -0x7458
    ctx->r6 = ADD32(ctx->r6, -0X7458);
    // 0x80096224: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80096228: jal         0x80097B20
    // 0x8009622C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x8009622C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_0:
    // 0x80096230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80096234: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x80096238: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x8009623C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80096240: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80096244: jr          $ra
    // 0x80096248: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80096248: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80072430_4D830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80072430: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80072434: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80072438: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8007243C: addiu       $s0, $s0, -0x3BC8
    ctx->r16 = ADD32(ctx->r16, -0X3BC8);
    // 0x80072440: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80072444: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80072448: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8007244C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80072450: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80072454: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80072458: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8007245C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80072460: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80072464: addiu       $v0, $v1, -0x5
    ctx->r2 = ADD32(ctx->r3, -0X5);
    // 0x80072468: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8007246C: beq         $v0, $zero, L_80072778
    if (ctx->r2 == 0) {
        // 0x80072470: sll         $v0, $v1, 24
        ctx->r2 = S32(ctx->r3 << 24);
            goto L_80072778;
    }
    // 0x80072470: sll         $v0, $v1, 24
    ctx->r2 = S32(ctx->r3 << 24);
    // 0x80072474: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80072478: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8007247C: bne         $v0, $v1, L_800725DC
    if (ctx->r2 != ctx->r3) {
        // 0x80072480: nop
    
            goto L_800725DC;
    }
    // 0x80072480: nop

    // 0x80072484: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80072488: lbu         $v0, -0x3BB4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3BB4);
    // 0x8007248C: beq         $v0, $zero, L_800725DC
    if (ctx->r2 == 0) {
        // 0x80072490: addiu       $a0, $s0, -0x1C
        ctx->r4 = ADD32(ctx->r16, -0X1C);
            goto L_800725DC;
    }
    // 0x80072490: addiu       $a0, $s0, -0x1C
    ctx->r4 = ADD32(ctx->r16, -0X1C);
    // 0x80072494: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80072498: lw          $a2, 0x35E0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X35E0);
    // 0x8007249C: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x800724A0: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x800724A4: addiu       $v0, $zero, 0x240
    ctx->r2 = ADD32(0, 0X240);
    // 0x800724A8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800724AC: sb          $zero, -0x3BB4($at)
    MEM_B(-0X3BB4, ctx->r1) = 0;
    // 0x800724B0: jal         0x800727A4
    // 0x800724B4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_800727A4_4DBA4(rdram, ctx);
        goto after_0;
    // 0x800724B4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x800724B8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800724BC: lw          $v1, -0x3BE0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BE0);
    // 0x800724C0: lui         $v0, 0x1B4E
    ctx->r2 = S32(0X1B4E << 16);
    // 0x800724C4: ori         $v0, $v0, 0x81B5
    ctx->r2 = ctx->r2 | 0X81B5;
    // 0x800724C8: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800724CC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x800724D0: lui         $s7, 0xFFFF
    ctx->r23 = S32(0XFFFF << 16);
    // 0x800724D4: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x800724D8: addiu       $s4, $s0, 0x16
    ctx->r20 = ADD32(ctx->r16, 0X16);
    // 0x800724DC: addiu       $s3, $zero, 0xC
    ctx->r19 = ADD32(0, 0XC);
    // 0x800724E0: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x800724E4: lw          $s5, 0x35E4($s5)
    ctx->r21 = MEM_W(ctx->r21, 0X35E4);
    // 0x800724E8: mfhi        $t0
    ctx->r8 = hi;
    // 0x800724EC: srl         $s2, $t0, 4
    ctx->r18 = S32(U32(ctx->r8) >> 4);
L_800724F0:
    // 0x800724F0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800724F4: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x800724F8: lw          $v0, 0x5088($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5088);
    // 0x800724FC: beq         $v0, $zero, L_800725D4
    if (ctx->r2 == 0) {
        // 0x80072500: nop
    
            goto L_800725D4;
    }
    // 0x80072500: nop

    // 0x80072504: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80072508: and         $v0, $v0, $s7
    ctx->r2 = ctx->r2 & ctx->r23;
    // 0x8007250C: bnel        $v0, $s5, L_800725C8
    if (ctx->r2 != ctx->r21) {
        // 0x80072510: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800725C8;
    }
    goto skip_0;
    // 0x80072510: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x80072514: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80072518: jal         0x800721F0
    // 0x8007251C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800721F0_4D5F0(rdram, ctx);
        goto after_1;
    // 0x8007251C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80072520: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80072524: beq         $v1, $s6, L_80072568
    if (ctx->r3 == ctx->r22) {
        // 0x80072528: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80072568;
    }
    // 0x80072528: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8007252C: bne         $v0, $zero, L_8007253C
    if (ctx->r2 != 0) {
        // 0x80072530: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_8007253C;
    }
    // 0x80072530: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80072534: bnel        $v0, $zero, L_8007256C
    if (ctx->r2 != 0) {
        // 0x80072538: addiu       $s0, $zero, 0x3
        ctx->r16 = ADD32(0, 0X3);
            goto L_8007256C;
    }
    goto skip_1;
    // 0x80072538: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    skip_1:
L_8007253C:
    // 0x8007253C: beq         $s2, $zero, L_8007256C
    if (ctx->r18 == 0) {
        // 0x80072540: nop
    
            goto L_8007256C;
    }
    // 0x80072540: nop

    // 0x80072544: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80072548: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8007254C: lw          $v1, -0x2E($s4)
    ctx->r3 = MEM_W(ctx->r20, -0X2E);
    // 0x80072550: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80072554: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80072558: addiu       $v1, $v1, -0x96
    ctx->r3 = ADD32(ctx->r3, -0X96);
    // 0x8007255C: sb          $v0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r2;
    // 0x80072560: j           L_8007256C
    // 0x80072564: sw          $v1, -0x2E($s4)
    MEM_W(-0X2E, ctx->r20) = ctx->r3;
        goto L_8007256C;
    // 0x80072564: sw          $v1, -0x2E($s4)
    MEM_W(-0X2E, ctx->r20) = ctx->r3;
L_80072568:
    // 0x80072568: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
L_8007256C:
    // 0x8007256C: bltzl       $s1, L_800725C8
    if (SIGNED(ctx->r17) < 0) {
        // 0x80072570: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800725C8;
    }
    goto skip_2;
    // 0x80072570: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x80072574: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80072578: lb          $v1, 0x3585($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X3585);
    // 0x8007257C: bltz        $v1, L_800725C4
    if (SIGNED(ctx->r3) < 0) {
        // 0x80072580: sll         $v1, $v1, 9
        ctx->r3 = S32(ctx->r3 << 9);
            goto L_800725C4;
    }
    // 0x80072580: sll         $v1, $v1, 9
    ctx->r3 = S32(ctx->r3 << 9);
    // 0x80072584: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80072588: addiu       $v0, $v0, -0x3590
    ctx->r2 = ADD32(ctx->r2, -0X3590);
    // 0x8007258C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80072590: sra         $a1, $s1, 4
    ctx->r5 = S32(SIGNED(ctx->r17) >> 4);
    // 0x80072594: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80072598: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8007259C: andi        $a0, $s1, 0xF
    ctx->r4 = ctx->r17 & 0XF;
    // 0x800725A0: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x800725A4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800725A8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x800725AC: sllv        $v0, $v0, $a0
    ctx->r2 = S32(ctx->r2 << (ctx->r4 & 31));
    // 0x800725B0: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x800725B4: sllv        $a0, $s0, $a0
    ctx->r4 = S32(ctx->r16 << (ctx->r4 & 31));
    // 0x800725B8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x800725BC: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x800725C0: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
L_800725C4:
    // 0x800725C4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800725C8:
    // 0x800725C8: sltiu       $v0, $s1, 0x6B0
    ctx->r2 = ctx->r17 < 0X6B0 ? 1 : 0;
    // 0x800725CC: bne         $v0, $zero, L_800724F0
    if (ctx->r2 != 0) {
        // 0x800725D0: addiu       $s3, $s3, 0xC
        ctx->r19 = ADD32(ctx->r19, 0XC);
            goto L_800724F0;
    }
    // 0x800725D0: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
L_800725D4:
    // 0x800725D4: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x800725D8: addiu       $s0, $s0, -0x3BC8
    ctx->r16 = ADD32(ctx->r16, -0X3BC8);
L_800725DC:
    // 0x800725DC: lb          $v1, 0x0($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X0);
    // 0x800725E0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x800725E4: bne         $v1, $v0, L_80072778
    if (ctx->r3 != ctx->r2) {
        // 0x800725E8: nop
    
            goto L_80072778;
    }
    // 0x800725E8: nop

    // 0x800725EC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800725F0: lbu         $v0, -0x3BB3($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3BB3);
    // 0x800725F4: beq         $v0, $zero, L_80072778
    if (ctx->r2 == 0) {
        // 0x800725F8: addiu       $a0, $s0, -0x28
        ctx->r4 = ADD32(ctx->r16, -0X28);
            goto L_80072778;
    }
    // 0x800725F8: addiu       $a0, $s0, -0x28
    ctx->r4 = ADD32(ctx->r16, -0X28);
    // 0x800725FC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80072600: lw          $a2, 0x35E8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X35E8);
    // 0x80072604: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x80072608: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8007260C: sb          $zero, -0x3BB3($at)
    MEM_B(-0X3BB3, ctx->r1) = 0;
    // 0x80072610: jal         0x8007298C
    // 0x80072614: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8007298C_4DD8C(rdram, ctx);
        goto after_2;
    // 0x80072614: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x80072618: addiu       $a0, $s0, -0x24
    ctx->r4 = ADD32(ctx->r16, -0X24);
    // 0x8007261C: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x80072620: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80072624: lw          $a2, 0x35EC($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X35EC);
    // 0x80072628: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x8007262C: addiu       $v0, $zero, 0x23E
    ctx->r2 = ADD32(0, 0X23E);
    // 0x80072630: jal         0x800727A4
    // 0x80072634: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_800727A4_4DBA4(rdram, ctx);
        goto after_3;
    // 0x80072634: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_3:
    // 0x80072638: addiu       $a0, $s0, -0x20
    ctx->r4 = ADD32(ctx->r16, -0X20);
    // 0x8007263C: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x80072640: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80072644: lw          $a2, 0x35F0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X35F0);
    // 0x80072648: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x8007264C: addiu       $v0, $zero, 0x23F
    ctx->r2 = ADD32(0, 0X23F);
    // 0x80072650: jal         0x800727A4
    // 0x80072654: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_800727A4_4DBA4(rdram, ctx);
        goto after_4;
    // 0x80072654: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_4:
    // 0x80072658: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8007265C: lw          $v0, -0x3BDC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BDC);
    // 0x80072660: lui         $v1, 0x16C1
    ctx->r3 = S32(0X16C1 << 16);
    // 0x80072664: ori         $v1, $v1, 0x6C17
    ctx->r3 = ctx->r3 | 0X6C17;
    // 0x80072668: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x8007266C: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80072670: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80072674: lui         $s7, 0xFFFF
    ctx->r23 = S32(0XFFFF << 16);
    // 0x80072678: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x8007267C: addiu       $s4, $s0, 0x17
    ctx->r20 = ADD32(ctx->r16, 0X17);
    // 0x80072680: addiu       $s3, $zero, 0xC
    ctx->r19 = ADD32(0, 0XC);
    // 0x80072684: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x80072688: lw          $s5, 0x35F4($s5)
    ctx->r21 = MEM_W(ctx->r21, 0X35F4);
    // 0x8007268C: mfhi        $t0
    ctx->r8 = hi;
    // 0x80072690: srl         $s2, $t0, 2
    ctx->r18 = S32(U32(ctx->r8) >> 2);
L_80072694:
    // 0x80072694: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80072698: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x8007269C: lw          $v0, 0x5088($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5088);
    // 0x800726A0: beq         $v0, $zero, L_80072778
    if (ctx->r2 == 0) {
        // 0x800726A4: nop
    
            goto L_80072778;
    }
    // 0x800726A4: nop

    // 0x800726A8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x800726AC: and         $v0, $v0, $s7
    ctx->r2 = ctx->r2 & ctx->r23;
    // 0x800726B0: bnel        $v0, $s5, L_8007276C
    if (ctx->r2 != ctx->r21) {
        // 0x800726B4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8007276C;
    }
    goto skip_3;
    // 0x800726B4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_3:
    // 0x800726B8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x800726BC: jal         0x800721F0
    // 0x800726C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800721F0_4D5F0(rdram, ctx);
        goto after_5;
    // 0x800726C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x800726C4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x800726C8: beq         $v1, $s6, L_8007270C
    if (ctx->r3 == ctx->r22) {
        // 0x800726CC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8007270C;
    }
    // 0x800726CC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x800726D0: bne         $v0, $zero, L_800726E0
    if (ctx->r2 != 0) {
        // 0x800726D4: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_800726E0;
    }
    // 0x800726D4: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x800726D8: bnel        $v0, $zero, L_80072710
    if (ctx->r2 != 0) {
        // 0x800726DC: addiu       $s0, $zero, 0x3
        ctx->r16 = ADD32(0, 0X3);
            goto L_80072710;
    }
    goto skip_4;
    // 0x800726DC: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    skip_4:
L_800726E0:
    // 0x800726E0: beq         $s2, $zero, L_80072710
    if (ctx->r18 == 0) {
        // 0x800726E4: nop
    
            goto L_80072710;
    }
    // 0x800726E4: nop

    // 0x800726E8: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x800726EC: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x800726F0: lw          $v1, -0x2B($s4)
    ctx->r3 = MEM_W(ctx->r20, -0X2B);
    // 0x800726F4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x800726F8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800726FC: addiu       $v1, $v1, -0xB4
    ctx->r3 = ADD32(ctx->r3, -0XB4);
    // 0x80072700: sb          $v0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r2;
    // 0x80072704: j           L_80072710
    // 0x80072708: sw          $v1, -0x2B($s4)
    MEM_W(-0X2B, ctx->r20) = ctx->r3;
        goto L_80072710;
    // 0x80072708: sw          $v1, -0x2B($s4)
    MEM_W(-0X2B, ctx->r20) = ctx->r3;
L_8007270C:
    // 0x8007270C: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
L_80072710:
    // 0x80072710: bltzl       $s1, L_8007276C
    if (SIGNED(ctx->r17) < 0) {
        // 0x80072714: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8007276C;
    }
    goto skip_5;
    // 0x80072714: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_5:
    // 0x80072718: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8007271C: lb          $v1, 0x3586($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X3586);
    // 0x80072720: bltz        $v1, L_80072768
    if (SIGNED(ctx->r3) < 0) {
        // 0x80072724: sll         $v1, $v1, 9
        ctx->r3 = S32(ctx->r3 << 9);
            goto L_80072768;
    }
    // 0x80072724: sll         $v1, $v1, 9
    ctx->r3 = S32(ctx->r3 << 9);
    // 0x80072728: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8007272C: addiu       $v0, $v0, -0x3590
    ctx->r2 = ADD32(ctx->r2, -0X3590);
    // 0x80072730: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80072734: sra         $a1, $s1, 4
    ctx->r5 = S32(SIGNED(ctx->r17) >> 4);
    // 0x80072738: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8007273C: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80072740: andi        $a0, $s1, 0xF
    ctx->r4 = ctx->r17 & 0XF;
    // 0x80072744: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x80072748: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8007274C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80072750: sllv        $v0, $v0, $a0
    ctx->r2 = S32(ctx->r2 << (ctx->r4 & 31));
    // 0x80072754: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80072758: sllv        $a0, $s0, $a0
    ctx->r4 = S32(ctx->r16 << (ctx->r4 & 31));
    // 0x8007275C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80072760: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80072764: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
L_80072768:
    // 0x80072768: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8007276C:
    // 0x8007276C: sltiu       $v0, $s1, 0x6B0
    ctx->r2 = ctx->r17 < 0X6B0 ? 1 : 0;
    // 0x80072770: bne         $v0, $zero, L_80072694
    if (ctx->r2 != 0) {
        // 0x80072774: addiu       $s3, $s3, 0xC
        ctx->r19 = ADD32(ctx->r19, 0XC);
            goto L_80072694;
    }
    // 0x80072774: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
L_80072778:
    // 0x80072778: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8007277C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80072780: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80072784: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80072788: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8007278C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80072790: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80072794: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80072798: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007279C: jr          $ra
    // 0x800727A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x800727A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80049DC4_251C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80049DC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80049DC8: addu        $t2, $a0, $zero
    ctx->r10 = ADD32(ctx->r4, 0);
    // 0x80049DCC: addu        $t5, $a1, $zero
    ctx->r13 = ADD32(ctx->r5, 0);
    // 0x80049DD0: addu        $t6, $a2, $zero
    ctx->r14 = ADD32(ctx->r6, 0);
    // 0x80049DD4: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80049DD8: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x80049DDC: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x80049DE0: beq         $t7, $zero, L_80049EB0
    if (ctx->r15 == 0) {
        // 0x80049DE4: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80049EB0;
    }
    // 0x80049DE4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80049DE8: lh          $a0, 0x4($t2)
    ctx->r4 = MEM_H(ctx->r10, 0X4);
    // 0x80049DEC: lh          $v1, 0x6($t2)
    ctx->r3 = MEM_H(ctx->r10, 0X6);
    // 0x80049DF0: lh          $t0, 0x8($t2)
    ctx->r8 = MEM_H(ctx->r10, 0X8);
    // 0x80049DF4: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x80049DF8: lbu         $t1, 0xC($t2)
    ctx->r9 = MEM_BU(ctx->r10, 0XC);
    // 0x80049DFC: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x80049E00: lw          $a1, -0x5858($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5858);
    // 0x80049E04: lbu         $a3, 0xD($t2)
    ctx->r7 = MEM_BU(ctx->r10, 0XD);
    // 0x80049E08: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x80049E0C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80049E10: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x80049E14: lui         $v0, 0x900
    ctx->r2 = S32(0X900 << 16);
    // 0x80049E18: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80049E1C: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x80049E20: sb          $v0, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r2;
    // 0x80049E24: srl         $v0, $t4, 8
    ctx->r2 = S32(U32(ctx->r12) >> 8);
    // 0x80049E28: sb          $v0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r2;
    // 0x80049E2C: srl         $v0, $t4, 16
    ctx->r2 = S32(U32(ctx->r12) >> 16);
    // 0x80049E30: sb          $t4, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r12;
    // 0x80049E34: sb          $v0, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r2;
    // 0x80049E38: lw          $v0, 0xC($t2)
    ctx->r2 = MEM_W(ctx->r10, 0XC);
    // 0x80049E3C: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x80049E40: addu        $a0, $t5, $a0
    ctx->r4 = ADD32(ctx->r13, ctx->r4);
    // 0x80049E44: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x80049E48: lhu         $t2, 0x12($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X12);
    // 0x80049E4C: addu        $a2, $a0, $a2
    ctx->r6 = ADD32(ctx->r4, ctx->r6);
    // 0x80049E50: addu        $t0, $t1, $t0
    ctx->r8 = ADD32(ctx->r9, ctx->r8);
    // 0x80049E54: sb          $a3, 0x15($a1)
    MEM_B(0X15, ctx->r5) = ctx->r7;
    // 0x80049E58: addu        $a3, $a3, $t3
    ctx->r7 = ADD32(ctx->r7, ctx->r11);
    // 0x80049E5C: sh          $a0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r4;
    // 0x80049E60: sh          $a0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r4;
    // 0x80049E64: sb          $t0, 0x14($a1)
    MEM_B(0X14, ctx->r5) = ctx->r8;
    // 0x80049E68: sb          $t1, 0x1C($a1)
    MEM_B(0X1C, ctx->r5) = ctx->r9;
    // 0x80049E6C: sb          $a3, 0x1D($a1)
    MEM_B(0X1D, ctx->r5) = ctx->r7;
    // 0x80049E70: sb          $t0, 0x24($a1)
    MEM_B(0X24, ctx->r5) = ctx->r8;
    // 0x80049E74: sb          $a3, 0x25($a1)
    MEM_B(0X25, ctx->r5) = ctx->r7;
    // 0x80049E78: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80049E7C: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80049E80: addu        $v1, $t6, $v1
    ctx->r3 = ADD32(ctx->r14, ctx->r3);
    // 0x80049E84: srl         $v0, $t7, 8
    ctx->r2 = S32(U32(ctx->r15) >> 8);
    // 0x80049E88: sh          $v1, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r3;
    // 0x80049E8C: sh          $v1, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r3;
    // 0x80049E90: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80049E94: sh          $a2, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r6;
    // 0x80049E98: sh          $v1, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r3;
    // 0x80049E9C: sh          $a2, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r6;
    // 0x80049EA0: sh          $v1, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r3;
    // 0x80049EA4: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x80049EA8: jal         0x8002FD30
    // 0x80049EAC: sh          $t2, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r10;
    func_8002FD30_B130(rdram, ctx);
        goto after_0;
    // 0x80049EAC: sh          $t2, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r10;
    after_0:
L_80049EB0:
    // 0x80049EB0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80049EB4: jr          $ra
    // 0x80049EB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80049EB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004B408_26808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004B408: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004B40C: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x8004B410: lw          $a1, -0x5858($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5858);
    // 0x8004B414: lui         $v1, 0x8080
    ctx->r3 = S32(0X8080 << 16);
    // 0x8004B418: ori         $v1, $v1, 0x802A
    ctx->r3 = ctx->r3 | 0X802A;
    // 0x8004B41C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8004B420: addiu       $v0, $a1, 0x18
    ctx->r2 = ADD32(ctx->r5, 0X18);
    // 0x8004B424: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8004B428: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8004B42C: lui         $v0, 0x500
    ctx->r2 = S32(0X500 << 16);
    // 0x8004B430: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8004B434: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x8004B438: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8004B43C: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    // 0x8004B440: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x8004B444: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8004B448: lhu         $v1, 0x4($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X4);
    // 0x8004B44C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004B450: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x8004B454: sh          $v0, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r2;
    // 0x8004B458: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x8004B45C: sh          $v0, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r2;
    // 0x8004B460: sh          $v0, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r2;
    // 0x8004B464: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x8004B468: lhu         $v1, 0x6($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X6);
    // 0x8004B46C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8004B470: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8004B474: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004B478: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x8004B47C: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x8004B480: jal         0x8002FD30
    // 0x8004B484: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
    func_8002FD30_B130(rdram, ctx);
        goto after_0;
    // 0x8004B484: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
    after_0:
    // 0x8004B488: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8004B48C: jr          $ra
    // 0x8004B490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8004B490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002BB34_6F34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002BB34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002BB38: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8002BB3C: lh          $a1, 0xC($a0)
    ctx->r5 = MEM_H(ctx->r4, 0XC);
    // 0x8002BB40: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x8002BB44: sll         $v0, $a1, 7
    ctx->r2 = S32(ctx->r5 << 7);
    // 0x8002BB48: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8002BB4C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8002BB50: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002BB54: mflo        $v1
    ctx->r3 = lo;
    // 0x8002BB58: lui         $v0, 0x8102
    ctx->r2 = S32(0X8102 << 16);
    // 0x8002BB5C: ori         $v0, $v0, 0x409
    ctx->r2 = ctx->r2 | 0X409;
    // 0x8002BB60: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002BB64: mfhi        $a2
    ctx->r6 = hi;
    // 0x8002BB68: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x8002BB6C: sra         $v0, $v0, 6
    ctx->r2 = S32(SIGNED(ctx->r2) >> 6);
    // 0x8002BB70: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8002BB74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8002BB78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8002BB7C: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002BB80: blez        $a1, L_8002BB98
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8002BB84: nop
    
            goto L_8002BB98;
    }
    // 0x8002BB84: nop

    // 0x8002BB88: jal         0x8008A7A4
    // 0x8002BB8C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8008A7A4_65BA4(rdram, ctx);
        goto after_0;
    // 0x8002BB8C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x8002BB90: j           L_8002BBB0
    // 0x8002BB94: nop

        goto L_8002BBB0;
    // 0x8002BB94: nop

L_8002BB98:
    // 0x8002BB98: jal         0x8002BEC4
    // 0x8002BB9C: nop

    func_8002BEC4_72C4(rdram, ctx);
        goto after_1;
    // 0x8002BB9C: nop

    after_1:
    // 0x8002BBA0: jal         0x8002BF38
    // 0x8002BBA4: nop

    func_8002BF38_7338(rdram, ctx);
        goto after_2;
    // 0x8002BBA4: nop

    after_2:
    // 0x8002BBA8: jal         0x8002BF14
    // 0x8002BBAC: nop

    func_8002BF14_7314(rdram, ctx);
        goto after_3;
    // 0x8002BBAC: nop

    after_3:
L_8002BBB0:
    // 0x8002BBB0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002BBB4: jr          $ra
    // 0x8002BBB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002BBB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004E150_29550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004E150: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8004E154: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8004E158: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x8004E15C: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x8004E160: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8004E164: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8004E168: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8004E16C: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x8004E170: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x8004E174: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x8004E178: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x8004E17C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8004E180: jal         0x8002C654
    // 0x8004E184: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8004E184: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x8004E188: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8004E18C: lhu         $v1, 0x14($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X14);
    // 0x8004E190: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8004E194: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004E198: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x8004E19C: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x8004E1A0: lhu         $v1, 0x16($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X16);
    // 0x8004E1A4: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
    // 0x8004E1A8: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x8004E1AC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004E1B0: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x8004E1B4: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x8004E1B8: lhu         $v1, 0x18($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X18);
    // 0x8004E1BC: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8004E1C0: subu        $a0, $a0, $s0
    ctx->r4 = SUB32(ctx->r4, ctx->r16);
    // 0x8004E1C4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004E1C8: jal         0x800319B4
    // 0x8004E1CC: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8004E1CC: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    after_1:
    // 0x8004E1D0: jal         0x80031E5C
    // 0x8004E1D4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_80031E5C_D25C(rdram, ctx);
        goto after_2;
    // 0x8004E1D4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x8004E1D8: jal         0x80031E94
    // 0x8004E1DC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_80031E94_D294(rdram, ctx);
        goto after_3;
    // 0x8004E1DC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x8004E1E0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8004E1E4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8004E1E8: jal         0x80032068
    // 0x8004E1EC: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_80032068_D468(rdram, ctx);
        goto after_4;
    // 0x8004E1EC: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_4:
    // 0x8004E1F0: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8004E1F4: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x8004E1F8: bgez        $v0, L_8004E204
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004E1FC: srl         $a2, $a0, 31
        ctx->r6 = S32(U32(ctx->r4) >> 31);
            goto L_8004E204;
    }
    // 0x8004E1FC: srl         $a2, $a0, 31
    ctx->r6 = S32(U32(ctx->r4) >> 31);
    // 0x8004E200: ori         $a2, $a2, 0x4
    ctx->r6 = ctx->r6 | 0X4;
L_8004E204:
    // 0x8004E204: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x8004E208: bgez        $a1, L_8004E218
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8004E20C: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8004E218;
    }
    // 0x8004E20C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8004E210: j           L_8004E250
    // 0x8004E214: ori         $a2, $a2, 0x10
    ctx->r6 = ctx->r6 | 0X10;
        goto L_8004E250;
    // 0x8004E214: ori         $a2, $a2, 0x10
    ctx->r6 = ctx->r6 | 0X10;
L_8004E218:
    // 0x8004E218: lh          $v1, 0x0($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X0);
    // 0x8004E21C: bltz        $a0, L_8004E23C
    if (SIGNED(ctx->r4) < 0) {
        // 0x8004E220: subu        $v1, $v0, $v1
        ctx->r3 = SUB32(ctx->r2, ctx->r3);
            goto L_8004E23C;
    }
    // 0x8004E220: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x8004E224: sllv        $v0, $a0, $v1
    ctx->r2 = S32(ctx->r4 << (ctx->r3 & 31));
    // 0x8004E228: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8004E22C: bnel        $v0, $zero, L_8004E250
    if (ctx->r2 != 0) {
        // 0x8004E230: ori         $a2, $a2, 0x2
        ctx->r6 = ctx->r6 | 0X2;
            goto L_8004E250;
    }
    goto skip_0;
    // 0x8004E230: ori         $a2, $a2, 0x2
    ctx->r6 = ctx->r6 | 0X2;
    skip_0:
    // 0x8004E234: j           L_8004E250
    // 0x8004E238: nop

        goto L_8004E250;
    // 0x8004E238: nop

L_8004E23C:
    // 0x8004E23C: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
    // 0x8004E240: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x8004E244: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8004E248: bnel        $v0, $zero, L_8004E250
    if (ctx->r2 != 0) {
        // 0x8004E24C: ori         $a2, $a2, 0x2
        ctx->r6 = ctx->r6 | 0X2;
            goto L_8004E250;
    }
    goto skip_1;
    // 0x8004E24C: ori         $a2, $a2, 0x2
    ctx->r6 = ctx->r6 | 0X2;
    skip_1:
L_8004E250:
    // 0x8004E250: lh          $v1, 0x2($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X2);
    // 0x8004E254: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x8004E258: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8004E25C: bltz        $a0, L_8004E26C
    if (SIGNED(ctx->r4) < 0) {
        // 0x8004E260: subu        $v1, $v0, $v1
        ctx->r3 = SUB32(ctx->r2, ctx->r3);
            goto L_8004E26C;
    }
    // 0x8004E260: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x8004E264: j           L_8004E274
    // 0x8004E268: sllv        $v1, $a0, $v1
    ctx->r3 = S32(ctx->r4 << (ctx->r3 & 31));
        goto L_8004E274;
    // 0x8004E268: sllv        $v1, $a0, $v1
    ctx->r3 = S32(ctx->r4 << (ctx->r3 & 31));
L_8004E26C:
    // 0x8004E26C: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
    // 0x8004E270: sllv        $v1, $v0, $v1
    ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
L_8004E274:
    // 0x8004E274: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x8004E278: bltzl       $v0, L_8004E294
    if (SIGNED(ctx->r2) < 0) {
        // 0x8004E27C: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8004E294;
    }
    goto skip_2;
    // 0x8004E27C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
    // 0x8004E280: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004E284: bnel        $v0, $zero, L_8004E2A0
    if (ctx->r2 != 0) {
        // 0x8004E288: ori         $a2, $a2, 0x8
        ctx->r6 = ctx->r6 | 0X8;
            goto L_8004E2A0;
    }
    goto skip_3;
    // 0x8004E288: ori         $a2, $a2, 0x8
    ctx->r6 = ctx->r6 | 0X8;
    skip_3:
    // 0x8004E28C: j           L_8004E2A0
    // 0x8004E290: nop

        goto L_8004E2A0;
    // 0x8004E290: nop

L_8004E294:
    // 0x8004E294: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004E298: bnel        $v0, $zero, L_8004E2A0
    if (ctx->r2 != 0) {
        // 0x8004E29C: ori         $a2, $a2, 0x8
        ctx->r6 = ctx->r6 | 0X8;
            goto L_8004E2A0;
    }
    goto skip_4;
    // 0x8004E29C: ori         $a2, $a2, 0x8
    ctx->r6 = ctx->r6 | 0X8;
    skip_4:
L_8004E2A0:
    // 0x8004E2A0: lh          $v1, 0x4($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X4);
    // 0x8004E2A4: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x8004E2A8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8004E2AC: bltz        $a0, L_8004E2BC
    if (SIGNED(ctx->r4) < 0) {
        // 0x8004E2B0: subu        $v1, $v0, $v1
        ctx->r3 = SUB32(ctx->r2, ctx->r3);
            goto L_8004E2BC;
    }
    // 0x8004E2B0: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x8004E2B4: j           L_8004E2C4
    // 0x8004E2B8: sllv        $v1, $a0, $v1
    ctx->r3 = S32(ctx->r4 << (ctx->r3 & 31));
        goto L_8004E2C4;
    // 0x8004E2B8: sllv        $v1, $a0, $v1
    ctx->r3 = S32(ctx->r4 << (ctx->r3 & 31));
L_8004E2BC:
    // 0x8004E2BC: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
    // 0x8004E2C0: sllv        $v1, $v0, $v1
    ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
L_8004E2C4:
    // 0x8004E2C4: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8004E2C8: bltzl       $v0, L_8004E2E4
    if (SIGNED(ctx->r2) < 0) {
        // 0x8004E2CC: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8004E2E4;
    }
    goto skip_5;
    // 0x8004E2CC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_5:
    // 0x8004E2D0: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004E2D4: bnel        $v0, $zero, L_8004E2F4
    if (ctx->r2 != 0) {
        // 0x8004E2D8: ori         $a2, $a2, 0x20
        ctx->r6 = ctx->r6 | 0X20;
            goto L_8004E2F4;
    }
    goto skip_6;
    // 0x8004E2D8: ori         $a2, $a2, 0x20
    ctx->r6 = ctx->r6 | 0X20;
    skip_6:
    // 0x8004E2DC: j           L_8004E2F8
    // 0x8004E2E0: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
        goto L_8004E2F8;
    // 0x8004E2E0: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
L_8004E2E4:
    // 0x8004E2E4: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004E2E8: beq         $v0, $zero, L_8004E2F8
    if (ctx->r2 == 0) {
        // 0x8004E2EC: addu        $v0, $a2, $zero
        ctx->r2 = ADD32(ctx->r6, 0);
            goto L_8004E2F8;
    }
    // 0x8004E2EC: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x8004E2F0: ori         $a2, $a2, 0x20
    ctx->r6 = ctx->r6 | 0X20;
L_8004E2F4:
    // 0x8004E2F4: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
L_8004E2F8:
    // 0x8004E2F8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8004E2FC: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x8004E300: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8004E304: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8004E308: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8004E30C: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8004E310: jr          $ra
    // 0x8004E314: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x8004E314: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_800817BC_5CBBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800817BC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800817C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800817C4: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x800817C8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800817CC: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x800817D0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800817D4: lbu         $s7, 0x5B($sp)
    ctx->r23 = MEM_BU(ctx->r29, 0X5B);
    // 0x800817D8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800817DC: lbu         $fp, 0x5F($sp)
    ctx->r30 = MEM_BU(ctx->r29, 0X5F);
    // 0x800817E0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800817E4: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x800817E8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800817EC: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x800817F0: addiu       $a0, $zero, 0x68
    ctx->r4 = ADD32(0, 0X68);
    // 0x800817F4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800817F8: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x800817FC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80081800: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x80081804: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80081808: jal         0x800281C8
    // 0x8008180C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_800281C8_35C8(rdram, ctx);
        goto after_0;
    // 0x8008180C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80081810: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80081814: beq         $s0, $zero, L_800818DC
    if (ctx->r16 == 0) {
        // 0x80081818: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_800818DC;
    }
    // 0x80081818: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8008181C: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    // 0x80081820: jal         0x8002C5A4
    // 0x80081824: sh          $s1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r17;
    func_8002C5A4_79A4(rdram, ctx);
        goto after_1;
    // 0x80081824: sh          $s1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r17;
    after_1:
    // 0x80081828: lbu         $v1, 0xF($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XF);
    // 0x8008182C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80081830: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80081834: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80081838: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8008183C: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x80081840: lbu         $v0, 0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XD);
    // 0x80081844: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80081848: lbu         $v1, 0xE($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XE);
    // 0x8008184C: andi        $v0, $s3, 0x7FFF
    ctx->r2 = ctx->r19 & 0X7FFF;
    // 0x80081850: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80081854: andi        $v0, $s3, 0x8000
    ctx->r2 = ctx->r19 & 0X8000;
    // 0x80081858: srl         $v0, $v0, 15
    ctx->r2 = S32(U32(ctx->r2) >> 15);
    // 0x8008185C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80081860: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    // 0x80081864: lbu         $v0, 0xC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XC);
    // 0x80081868: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x8008186C: sw          $s2, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r18;
    // 0x80081870: sw          $zero, 0x60($s0)
    MEM_W(0X60, ctx->r16) = 0;
    // 0x80081874: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
    // 0x80081878: sb          $s7, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r23;
    // 0x8008187C: sb          $fp, 0x67($s0)
    MEM_B(0X67, ctx->r16) = ctx->r30;
    // 0x80081880: sw          $zero, 0x58($s0)
    MEM_W(0X58, ctx->r16) = 0;
    // 0x80081884: beq         $v1, $zero, L_800818BC
    if (ctx->r3 == 0) {
        // 0x80081888: sb          $v0, 0x10($s0)
        MEM_B(0X10, ctx->r16) = ctx->r2;
            goto L_800818BC;
    }
    // 0x80081888: sb          $v0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r2;
    // 0x8008188C: sll         $a0, $s4, 24
    ctx->r4 = S32(ctx->r20 << 24);
    // 0x80081890: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80081894: sll         $a1, $s6, 24
    ctx->r5 = S32(ctx->r22 << 24);
    // 0x80081898: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8008189C: lhu         $v0, 0x1E($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X1E);
    // 0x800818A0: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x800818A4: addiu       $a2, $a2, 0x5F8
    ctx->r6 = ADD32(ctx->r6, 0X5F8);
    // 0x800818A8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x800818AC: jal         0x80028220
    // 0x800818B0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80028220_3620(rdram, ctx);
        goto after_2;
    // 0x800818B0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x800818B4: j           L_800818DC
    // 0x800818B8: nop

        goto L_800818DC;
    // 0x800818B8: nop

L_800818BC:
    // 0x800818BC: sll         $a0, $s4, 24
    ctx->r4 = S32(ctx->r20 << 24);
    // 0x800818C0: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800818C4: sll         $a1, $s6, 24
    ctx->r5 = S32(ctx->r22 << 24);
    // 0x800818C8: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x800818CC: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x800818D0: addiu       $a2, $a2, 0x5F8
    ctx->r6 = ADD32(ctx->r6, 0X5F8);
    // 0x800818D4: jal         0x800283A8
    // 0x800818D8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_800283A8_37A8(rdram, ctx);
        goto after_3;
    // 0x800818D8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_3:
L_800818DC:
    // 0x800818DC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800818E0: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800818E4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800818E8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800818EC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800818F0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800818F4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800818F8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800818FC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80081900: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80081904: jr          $ra
    // 0x80081908: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80081908: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800596DC_34ADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800596DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800596E0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800596E4: jal         0x800598DC
    // 0x800596E8: nop

    func_800598DC_34CDC(rdram, ctx);
        goto after_0;
    // 0x800596E8: nop

    after_0:
    // 0x800596EC: jal         0x800599D4
    // 0x800596F0: nop

    func_800599D4_34DD4(rdram, ctx);
        goto after_1;
    // 0x800596F0: nop

    after_1:
    // 0x800596F4: jal         0x80059710
    // 0x800596F8: nop

    func_80059710_34B10(rdram, ctx);
        goto after_2;
    // 0x800596F8: nop

    after_2:
    // 0x800596FC: jal         0x8005974C
    // 0x80059700: nop

    func_8005974C_34B4C(rdram, ctx);
        goto after_3;
    // 0x80059700: nop

    after_3:
    // 0x80059704: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80059708: jr          $ra
    // 0x8005970C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005970C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80049CCC_250CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80049CCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80049CD0: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x80049CD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80049CD8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80049CDC: lh          $t4, 0x4($t0)
    ctx->r12 = MEM_H(ctx->r8, 0X4);
    // 0x80049CE0: lh          $t5, 0x6($t0)
    ctx->r13 = MEM_H(ctx->r8, 0X6);
    // 0x80049CE4: lh          $t1, 0x8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X8);
    // 0x80049CE8: lh          $t2, 0xA($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XA);
    // 0x80049CEC: andi        $v0, $a3, 0xFFFF
    ctx->r2 = ctx->r7 & 0XFFFF;
    // 0x80049CF0: beq         $v0, $zero, L_80049D04
    if (ctx->r2 == 0) {
        // 0x80049CF4: addu        $t6, $a2, $zero
        ctx->r14 = ADD32(ctx->r6, 0);
            goto L_80049D04;
    }
    // 0x80049CF4: addu        $t6, $a2, $zero
    ctx->r14 = ADD32(ctx->r6, 0);
    // 0x80049CF8: andi        $a3, $a3, 0xFF
    ctx->r7 = ctx->r7 & 0XFF;
    // 0x80049CFC: j           L_80049D0C
    // 0x80049D00: srl         $t3, $v0, 8
    ctx->r11 = S32(U32(ctx->r2) >> 8);
        goto L_80049D0C;
    // 0x80049D00: srl         $t3, $v0, 8
    ctx->r11 = S32(U32(ctx->r2) >> 8);
L_80049D04:
    // 0x80049D04: addu        $a3, $t1, $zero
    ctx->r7 = ADD32(ctx->r9, 0);
    // 0x80049D08: addu        $t3, $t2, $zero
    ctx->r11 = ADD32(ctx->r10, 0);
L_80049D0C:
    // 0x80049D0C: lbu         $a0, 0xC($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0XC);
    // 0x80049D10: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x80049D14: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x80049D18: lbu         $v1, 0xD($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0XD);
    // 0x80049D1C: addiu       $v0, $s0, 0x28
    ctx->r2 = ADD32(ctx->r16, 0X28);
    // 0x80049D20: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80049D24: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x80049D28: lui         $v0, 0x900
    ctx->r2 = S32(0X900 << 16);
    // 0x80049D2C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80049D30: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x80049D34: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x80049D38: lw          $v0, 0xC($t0)
    ctx->r2 = MEM_W(ctx->r8, 0XC);
    // 0x80049D3C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x80049D40: lhu         $a2, 0x12($t0)
    ctx->r6 = MEM_HU(ctx->r8, 0X12);
    // 0x80049D44: addu        $v0, $a0, $t1
    ctx->r2 = ADD32(ctx->r4, ctx->r9);
    // 0x80049D48: sb          $v1, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r3;
    // 0x80049D4C: addu        $v1, $v1, $t2
    ctx->r3 = ADD32(ctx->r3, ctx->r10);
    // 0x80049D50: sb          $v0, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r2;
    // 0x80049D54: sb          $a0, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r4;
    // 0x80049D58: sb          $v1, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r3;
    // 0x80049D5C: sb          $v0, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r2;
    // 0x80049D60: sb          $v1, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r3;
    // 0x80049D64: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80049D68: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80049D6C: addu        $v1, $a1, $t4
    ctx->r3 = ADD32(ctx->r5, ctx->r12);
    // 0x80049D70: addu        $v0, $t6, $t5
    ctx->r2 = ADD32(ctx->r14, ctx->r13);
    // 0x80049D74: addu        $a1, $v1, $a3
    ctx->r5 = ADD32(ctx->r3, ctx->r7);
    // 0x80049D78: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x80049D7C: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
    // 0x80049D80: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x80049D84: sh          $a1, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r5;
    // 0x80049D88: sh          $a1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r5;
    // 0x80049D8C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80049D90: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
    // 0x80049D94: sh          $v1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r3;
    // 0x80049D98: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    // 0x80049D9C: sh          $v0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r2;
    // 0x80049DA0: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x80049DA4: jal         0x8002FD30
    // 0x80049DA8: sh          $a2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r6;
    func_8002FD30_B130(rdram, ctx);
        goto after_0;
    // 0x80049DA8: sh          $a2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r6;
    after_0:
    // 0x80049DAC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80049DB0: sw          $s0, -0x4A00($at)
    MEM_W(-0X4A00, ctx->r1) = ctx->r16;
    // 0x80049DB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80049DB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80049DBC: jr          $ra
    // 0x80049DC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80049DC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002BF14_7314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002BF14: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002BF18: lw          $a0, 0x22D0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D0);
    // 0x8002BF1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002BF20: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8002BF24: jal         0x8008AD34
    // 0x8002BF28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008AD34_66134(rdram, ctx);
        goto after_0;
    // 0x8002BF28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8002BF2C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002BF30: jr          $ra
    // 0x8002BF34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002BF34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80045890_20C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80045890: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80045894: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80045898: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8004589C: beq         $a1, $v0, L_800458F8
    if (ctx->r5 == ctx->r2) {
        // 0x800458A0: addu        $a3, $a0, $zero
        ctx->r7 = ADD32(ctx->r4, 0);
            goto L_800458F8;
    }
    // 0x800458A0: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x800458A4: slti        $v0, $a1, 0x2
    ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x800458A8: beql        $v0, $zero, L_800458C0
    if (ctx->r2 == 0) {
        // 0x800458AC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800458C0;
    }
    goto skip_0;
    // 0x800458AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x800458B0: beq         $a1, $zero, L_800458D8
    if (ctx->r5 == 0) {
        // 0x800458B4: nop
    
            goto L_800458D8;
    }
    // 0x800458B4: nop

    // 0x800458B8: j           L_80045B50
    // 0x800458BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80045B50;
    // 0x800458BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800458C0:
    // 0x800458C0: beq         $a1, $v0, L_80045920
    if (ctx->r5 == ctx->r2) {
        // 0x800458C4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80045920;
    }
    // 0x800458C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800458C8: beq         $a1, $v0, L_80045940
    if (ctx->r5 == ctx->r2) {
        // 0x800458CC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80045940;
    }
    // 0x800458CC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800458D0: j           L_80045B50
    // 0x800458D4: nop

        goto L_80045B50;
    // 0x800458D4: nop

L_800458D8:
    // 0x800458D8: lh          $v1, 0x0($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X0);
    // 0x800458DC: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x800458E0: lh          $a1, -0x72D0($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X72D0);
    // 0x800458E4: lh          $v0, 0x4($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X4);
    // 0x800458E8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x800458EC: lh          $a0, -0x3FA8($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3FA8);
    // 0x800458F0: j           L_80045914
    // 0x800458F4: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
        goto L_80045914;
    // 0x800458F4: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
L_800458F8:
    // 0x800458F8: lh          $v1, 0x0($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X0);
    // 0x800458FC: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80045900: lh          $a1, -0x3FAC($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X3FAC);
    // 0x80045904: lh          $v0, 0x4($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X4);
    // 0x80045908: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8004590C: lh          $a0, -0x3FA8($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3FA8);
    // 0x80045910: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_80045914:
    // 0x80045914: subu        $a2, $a1, $v1
    ctx->r6 = SUB32(ctx->r5, ctx->r3);
    // 0x80045918: j           L_80045964
    // 0x8004591C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
        goto L_80045964;
    // 0x8004591C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_80045920:
    // 0x80045920: lh          $v1, 0x0($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X0);
    // 0x80045924: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x80045928: lh          $a1, -0x72D0($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X72D0);
    // 0x8004592C: lh          $v0, 0x4($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X4);
    // 0x80045930: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80045934: lh          $a0, -0x72CC($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X72CC);
    // 0x80045938: j           L_8004595C
    // 0x8004593C: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
        goto L_8004595C;
    // 0x8004593C: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
L_80045940:
    // 0x80045940: lh          $v1, 0x0($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X0);
    // 0x80045944: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80045948: lh          $a1, -0x3FAC($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X3FAC);
    // 0x8004594C: lh          $v0, 0x4($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X4);
    // 0x80045950: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80045954: lh          $a0, -0x72CC($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X72CC);
    // 0x80045958: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_8004595C:
    // 0x8004595C: subu        $a2, $a1, $v1
    ctx->r6 = SUB32(ctx->r5, ctx->r3);
    // 0x80045960: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
L_80045964:
    // 0x80045964: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80045968: mult        $a2, $a0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004596C: mflo        $v0
    ctx->r2 = lo;
    // 0x80045970: nop

    // 0x80045974: nop

    // 0x80045978: mult        $a2, $a2
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004597C: mflo        $v1
    ctx->r3 = lo;
    // 0x80045980: nop

    // 0x80045984: nop

    // 0x80045988: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004598C: mflo        $a1
    ctx->r5 = lo;
    // 0x80045990: nop

    // 0x80045994: nop

    // 0x80045998: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004599C: mflo        $a0
    ctx->r4 = lo;
    // 0x800459A0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x800459A4: nop

    // 0x800459A8: div         $zero, $a0, $v1
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r3)));
    // 0x800459AC: bne         $v1, $zero, L_800459B8
    if (ctx->r3 != 0) {
        // 0x800459B0: nop
    
            goto L_800459B8;
    }
    // 0x800459B0: nop

    // 0x800459B4: break       7
    do_break(2147768756);
L_800459B8:
    // 0x800459B8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800459BC: bne         $v1, $at, L_800459D0
    if (ctx->r3 != ctx->r1) {
        // 0x800459C0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800459D0;
    }
    // 0x800459C0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800459C4: bne         $a0, $at, L_800459D0
    if (ctx->r4 != ctx->r1) {
        // 0x800459C8: nop
    
            goto L_800459D0;
    }
    // 0x800459C8: nop

    // 0x800459CC: break       6
    do_break(2147768780);
L_800459D0:
    // 0x800459D0: mflo        $a0
    ctx->r4 = lo;
    // 0x800459D4: nop

    // 0x800459D8: nop

    // 0x800459DC: mult        $v0, $a2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800459E0: mflo        $v0
    ctx->r2 = lo;
    // 0x800459E4: nop

    // 0x800459E8: nop

    // 0x800459EC: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x800459F0: bne         $v1, $zero, L_800459FC
    if (ctx->r3 != 0) {
        // 0x800459F4: nop
    
            goto L_800459FC;
    }
    // 0x800459F4: nop

    // 0x800459F8: break       7
    do_break(2147768824);
L_800459FC:
    // 0x800459FC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80045A00: bne         $v1, $at, L_80045A14
    if (ctx->r3 != ctx->r1) {
        // 0x80045A04: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80045A14;
    }
    // 0x80045A04: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80045A08: bne         $v0, $at, L_80045A14
    if (ctx->r2 != ctx->r1) {
        // 0x80045A0C: nop
    
            goto L_80045A14;
    }
    // 0x80045A0C: nop

    // 0x80045A10: break       6
    do_break(2147768848);
L_80045A14:
    // 0x80045A14: mflo        $v0
    ctx->r2 = lo;
    // 0x80045A18: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80045A1C: lh          $v1, -0x35B8($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X35B8);
    // 0x80045A20: sh          $a0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r4;
    // 0x80045A24: blez        $v1, L_80045A38
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80045A28: sh          $v0, 0x14($sp)
        MEM_H(0X14, ctx->r29) = ctx->r2;
            goto L_80045A38;
    }
    // 0x80045A28: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x80045A2C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80045A30: j           L_80045A40
    // 0x80045A34: lhu         $v0, -0x3FAA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAA);
        goto L_80045A40;
    // 0x80045A34: lhu         $v0, -0x3FAA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAA);
L_80045A38:
    // 0x80045A38: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80045A3C: lhu         $v0, -0x72CE($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X72CE);
L_80045A40:
    // 0x80045A40: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80045A44: lhu         $v1, -0x7156($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7156);
    // 0x80045A48: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80045A4C: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80045A50: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80045A54: lh          $v0, -0x35B8($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X35B8);
    // 0x80045A58: beq         $v0, $zero, L_80045AC8
    if (ctx->r2 == 0) {
        // 0x80045A5C: nop
    
            goto L_80045AC8;
    }
    // 0x80045A5C: nop

    // 0x80045A60: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x80045A64: lh          $v1, 0x12($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X12);
    // 0x80045A68: bgez        $v0, L_80045A74
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80045A6C: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_80045A74;
    }
    // 0x80045A6C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80045A70: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
L_80045A74:
    // 0x80045A74: bgez        $v1, L_80045A84
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80045A78: slt         $v0, $a0, $v1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_80045A84;
    }
    // 0x80045A78: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80045A7C: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x80045A80: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
L_80045A84:
    // 0x80045A84: bne         $v0, $zero, L_80045AC8
    if (ctx->r2 != 0) {
        // 0x80045A88: nop
    
            goto L_80045AC8;
    }
    // 0x80045A88: nop

    // 0x80045A8C: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x80045A90: lh          $v1, 0x12($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X12);
    // 0x80045A94: bgez        $v0, L_80045AA0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80045A98: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_80045AA0;
    }
    // 0x80045A98: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80045A9C: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
L_80045AA0:
    // 0x80045AA0: bltz        $v1, L_80045AB8
    if (SIGNED(ctx->r3) < 0) {
        // 0x80045AA4: slt         $v0, $a0, $v1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_80045AB8;
    }
    // 0x80045AA4: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80045AA8: beq         $v0, $zero, L_80045B20
    if (ctx->r2 == 0) {
        // 0x80045AAC: nop
    
            goto L_80045B20;
    }
    // 0x80045AAC: nop

    // 0x80045AB0: j           L_80045AC8
    // 0x80045AB4: nop

        goto L_80045AC8;
    // 0x80045AB4: nop

L_80045AB8:
    // 0x80045AB8: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x80045ABC: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80045AC0: beq         $v0, $zero, L_80045B20
    if (ctx->r2 == 0) {
        // 0x80045AC4: nop
    
            goto L_80045B20;
    }
    // 0x80045AC4: nop

L_80045AC8:
    // 0x80045AC8: lhu         $v0, 0x0($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X0);
    // 0x80045ACC: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x80045AD0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80045AD4: sh          $v0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r2;
    // 0x80045AD8: lhu         $v0, 0x4($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X4);
    // 0x80045ADC: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x80045AE0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80045AE4: sh          $v0, 0x4($a3)
    MEM_H(0X4, ctx->r7) = ctx->r2;
    // 0x80045AE8: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x80045AEC: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x80045AF0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80045AF4: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x80045AF8: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80045AFC: sh          $v0, -0x2680($at)
    MEM_H(-0X2680, ctx->r1) = ctx->r2;
    // 0x80045B00: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80045B04: sh          $v1, 0x784C($at)
    MEM_H(0X784C, ctx->r1) = ctx->r3;
    // 0x80045B08: jal         0x800463CC
    // 0x80045B0C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_800463CC_217CC(rdram, ctx);
        goto after_0;
    // 0x80045B0C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x80045B10: jal         0x80046404
    // 0x80045B14: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_80046404_21804(rdram, ctx);
        goto after_1;
    // 0x80045B14: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x80045B18: j           L_80045B50
    // 0x80045B1C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80045B50;
    // 0x80045B1C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80045B20:
    // 0x80045B20: lhu         $v0, 0x2($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X2);
    // 0x80045B24: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x80045B28: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80045B2C: sh          $v0, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r2;
    // 0x80045B30: lhu         $a0, 0x12($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X12);
    // 0x80045B34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80045B38: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x80045B3C: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80045B40: sb          $v1, -0x7818($at)
    MEM_B(-0X7818, ctx->r1) = ctx->r3;
    // 0x80045B44: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x80045B48: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80045B4C: sh          $a0, -0x26B8($at)
    MEM_H(-0X26B8, ctx->r1) = ctx->r4;
L_80045B50:
    // 0x80045B50: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80045B54: jr          $ra
    // 0x80045B58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80045B58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8002A2AC_56AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A2AC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8002A2B0: lb          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC8);
    // 0x8002A2B4: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8002A2B8: lw          $v1, -0x7814($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7814);
    // 0x8002A2BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A2C0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8002A2C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8002A2C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8002A2CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8002A2D0: lw          $v0, 0x70E8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X70E8);
    // 0x8002A2D4: ori         $v1, $v1, 0x800
    ctx->r3 = ctx->r3 | 0X800;
    // 0x8002A2D8: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8002A2DC: beq         $v0, $zero, L_8002A2EC
    if (ctx->r2 == 0) {
        // 0x8002A2E0: sw          $v1, -0x7814($at)
        MEM_W(-0X7814, ctx->r1) = ctx->r3;
            goto L_8002A2EC;
    }
    // 0x8002A2E0: sw          $v1, -0x7814($at)
    MEM_W(-0X7814, ctx->r1) = ctx->r3;
    // 0x8002A2E4: jalr        $v0
    // 0x8002A2E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8002A2E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
L_8002A2EC:
    // 0x8002A2EC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002A2F0: jr          $ra
    // 0x8002A2F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002A2F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004EB6C_29F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004EB6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004EB70: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8004EB74: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x8004EB78: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x8004EB7C: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x8004EB80: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8004EB84: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004EB88: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8004EB8C: blez        $v0, L_8004EBD0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004EB90: subu        $a0, $a1, $a0
        ctx->r4 = SUB32(ctx->r5, ctx->r4);
            goto L_8004EBD0;
    }
    // 0x8004EB90: subu        $a0, $a1, $a0
    ctx->r4 = SUB32(ctx->r5, ctx->r4);
    // 0x8004EB94: div         $zero, $a0, $v0
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r2)));
    // 0x8004EB98: bne         $v0, $zero, L_8004EBA4
    if (ctx->r2 != 0) {
        // 0x8004EB9C: nop
    
            goto L_8004EBA4;
    }
    // 0x8004EB9C: nop

    // 0x8004EBA0: break       7
    do_break(2147806112);
L_8004EBA4:
    // 0x8004EBA4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004EBA8: bne         $v0, $at, L_8004EBBC
    if (ctx->r2 != ctx->r1) {
        // 0x8004EBAC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004EBBC;
    }
    // 0x8004EBAC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004EBB0: bne         $a0, $at, L_8004EBBC
    if (ctx->r4 != ctx->r1) {
        // 0x8004EBB4: nop
    
            goto L_8004EBBC;
    }
    // 0x8004EBB4: nop

    // 0x8004EBB8: break       6
    do_break(2147806136);
L_8004EBBC:
    // 0x8004EBBC: mflo        $a0
    ctx->r4 = lo;
    // 0x8004EBC0: jal         0x80032554
    // 0x8004EBC4: nop

    func_80032554_D954(rdram, ctx);
        goto after_0;
    // 0x8004EBC4: nop

    after_0:
    // 0x8004EBC8: j           L_8004EC2C
    // 0x8004EBCC: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
        goto L_8004EC2C;
    // 0x8004EBCC: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
L_8004EBD0:
    // 0x8004EBD0: bgezl       $v0, L_8004EC20
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004EBD4: nor         $v0, $zero, $a0
        ctx->r2 = ~(0 | ctx->r4);
            goto L_8004EC20;
    }
    goto skip_0;
    // 0x8004EBD4: nor         $v0, $zero, $a0
    ctx->r2 = ~(0 | ctx->r4);
    skip_0:
    // 0x8004EBD8: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x8004EBDC: div         $zero, $a0, $v0
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r2)));
    // 0x8004EBE0: bne         $v0, $zero, L_8004EBEC
    if (ctx->r2 != 0) {
        // 0x8004EBE4: nop
    
            goto L_8004EBEC;
    }
    // 0x8004EBE4: nop

    // 0x8004EBE8: break       7
    do_break(2147806184);
L_8004EBEC:
    // 0x8004EBEC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004EBF0: bne         $v0, $at, L_8004EC04
    if (ctx->r2 != ctx->r1) {
        // 0x8004EBF4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004EC04;
    }
    // 0x8004EBF4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004EBF8: bne         $a0, $at, L_8004EC04
    if (ctx->r4 != ctx->r1) {
        // 0x8004EBFC: nop
    
            goto L_8004EC04;
    }
    // 0x8004EBFC: nop

    // 0x8004EC00: break       6
    do_break(2147806208);
L_8004EC04:
    // 0x8004EC04: mflo        $a0
    ctx->r4 = lo;
    // 0x8004EC08: jal         0x80032554
    // 0x8004EC0C: nop

    func_80032554_D954(rdram, ctx);
        goto after_1;
    // 0x8004EC0C: nop

    after_1:
    // 0x8004EC10: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x8004EC14: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8004EC18: j           L_8004EC2C
    // 0x8004EC1C: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
        goto L_8004EC2C;
    // 0x8004EC1C: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
L_8004EC20:
    // 0x8004EC20: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8004EC24: andi        $v0, $v0, 0xC00
    ctx->r2 = ctx->r2 & 0XC00;
    // 0x8004EC28: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
L_8004EC2C:
    // 0x8004EC2C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8004EC30: jr          $ra
    // 0x8004EC34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8004EC34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80047B3C_22F3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80047B3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80047B40: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80047B44: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x80047B48: lw          $s2, -0x35A4($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X35A4);
    // 0x80047B4C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80047B50: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80047B54: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80047B58: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80047B5C: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80047B60: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80047B64: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80047B68: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
L_80047B6C:
    // 0x80047B6C: sllv        $v0, $s2, $s0
    ctx->r2 = S32(ctx->r18 << (ctx->r16 & 31));
    // 0x80047B70: bgezl       $v0, L_80047B88
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80047B74: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80047B88;
    }
    goto skip_0;
    // 0x80047B74: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x80047B78: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80047B7C: jal         0x80047C64
    // 0x80047B80: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80047C64_23064(rdram, ctx);
        goto after_0;
    // 0x80047B80: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80047B84: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80047B88:
    // 0x80047B88: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x80047B8C: bne         $v0, $zero, L_80047B6C
    if (ctx->r2 != 0) {
        // 0x80047B90: addiu       $s1, $s1, 0x5F4
        ctx->r17 = ADD32(ctx->r17, 0X5F4);
            goto L_80047B6C;
    }
    // 0x80047B90: addiu       $s1, $s1, 0x5F4
    ctx->r17 = ADD32(ctx->r17, 0X5F4);
    // 0x80047B94: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80047B98: addiu       $s1, $s1, -0x420
    ctx->r17 = ADD32(ctx->r17, -0X420);
    // 0x80047B9C: lui         $s2, 0x801E
    ctx->r18 = S32(0X801E << 16);
    // 0x80047BA0: lw          $s2, -0x714C($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X714C);
    // 0x80047BA4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_80047BA8:
    // 0x80047BA8: sllv        $v0, $s2, $s0
    ctx->r2 = S32(ctx->r18 << (ctx->r16 & 31));
    // 0x80047BAC: bgezl       $v0, L_80047BC4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80047BB0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80047BC4;
    }
    goto skip_1;
    // 0x80047BB0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x80047BB4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80047BB8: jal         0x80047C64
    // 0x80047BBC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80047C64_23064(rdram, ctx);
        goto after_1;
    // 0x80047BBC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80047BC0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80047BC4:
    // 0x80047BC4: slti        $v0, $s0, 0x12
    ctx->r2 = SIGNED(ctx->r16) < 0X12 ? 1 : 0;
    // 0x80047BC8: bne         $v0, $zero, L_80047BA8
    if (ctx->r2 != 0) {
        // 0x80047BCC: addiu       $s1, $s1, 0x3C8
        ctx->r17 = ADD32(ctx->r17, 0X3C8);
            goto L_80047BA8;
    }
    // 0x80047BCC: addiu       $s1, $s1, 0x3C8
    ctx->r17 = ADD32(ctx->r17, 0X3C8);
    // 0x80047BD0: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80047BD4: addiu       $s1, $s1, -0x5F40
    ctx->r17 = ADD32(ctx->r17, -0X5F40);
    // 0x80047BD8: lui         $s2, 0x801E
    ctx->r18 = S32(0X801E << 16);
    // 0x80047BDC: lw          $s2, -0x7798($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X7798);
    // 0x80047BE0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_80047BE4:
    // 0x80047BE4: sllv        $v0, $s2, $s0
    ctx->r2 = S32(ctx->r18 << (ctx->r16 & 31));
    // 0x80047BE8: bgezl       $v0, L_80047C00
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80047BEC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80047C00;
    }
    goto skip_2;
    // 0x80047BEC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
    // 0x80047BF0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80047BF4: jal         0x80047C64
    // 0x80047BF8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80047C64_23064(rdram, ctx);
        goto after_2;
    // 0x80047BF8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80047BFC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80047C00:
    // 0x80047C00: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x80047C04: bne         $v0, $zero, L_80047BE4
    if (ctx->r2 != 0) {
        // 0x80047C08: addiu       $s1, $s1, 0x5AC
        ctx->r17 = ADD32(ctx->r17, 0X5AC);
            goto L_80047BE4;
    }
    // 0x80047C08: addiu       $s1, $s1, 0x5AC
    ctx->r17 = ADD32(ctx->r17, 0X5AC);
    // 0x80047C0C: lui         $s1, 0x8021
    ctx->r17 = S32(0X8021 << 16);
    // 0x80047C10: addiu       $s1, $s1, -0x2100
    ctx->r17 = ADD32(ctx->r17, -0X2100);
    // 0x80047C14: lui         $s2, 0x801E
    ctx->r18 = S32(0X801E << 16);
    // 0x80047C18: lw          $s2, -0x781C($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X781C);
    // 0x80047C1C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_80047C20:
    // 0x80047C20: sllv        $v0, $s2, $s0
    ctx->r2 = S32(ctx->r18 << (ctx->r16 & 31));
    // 0x80047C24: bgezl       $v0, L_80047C3C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80047C28: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80047C3C;
    }
    goto skip_3;
    // 0x80047C28: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_3:
    // 0x80047C2C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80047C30: jal         0x80047C64
    // 0x80047C34: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80047C64_23064(rdram, ctx);
        goto after_3;
    // 0x80047C34: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x80047C38: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80047C3C:
    // 0x80047C3C: slti        $v0, $s0, 0x20
    ctx->r2 = SIGNED(ctx->r16) < 0X20 ? 1 : 0;
    // 0x80047C40: bne         $v0, $zero, L_80047C20
    if (ctx->r2 != 0) {
        // 0x80047C44: addiu       $s1, $s1, 0x118
        ctx->r17 = ADD32(ctx->r17, 0X118);
            goto L_80047C20;
    }
    // 0x80047C44: addiu       $s1, $s1, 0x118
    ctx->r17 = ADD32(ctx->r17, 0X118);
    // 0x80047C48: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80047C4C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80047C50: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80047C54: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80047C58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80047C5C: jr          $ra
    // 0x80047C60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80047C60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006066C_3BA6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006066C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80060670: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80060674: addiu       $v1, $v1, -0x4840
    ctx->r3 = ADD32(ctx->r3, -0X4840);
    // 0x80060678: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8006067C: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x80060680: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80060684: sb          $v0, -0x483F($at)
    MEM_B(-0X483F, ctx->r1) = ctx->r2;
    // 0x80060688: jr          $ra
    // 0x8006068C: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    TRACE_RETURN()
    return;
    // 0x8006068C: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
;}
RECOMP_FUNC void func_80092F50_6E350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80092F50: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80092F54: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80092F58: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80092F5C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80092F60: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80092F64: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80092F68: sw          $a0, 0xB20($at)
    MEM_W(0XB20, ctx->r1) = ctx->r4;
    // 0x80092F6C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80092F70: sw          $s1, -0xEB0($at)
    MEM_W(-0XEB0, ctx->r1) = ctx->r17;
    // 0x80092F74: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80092F78: sw          $zero, -0xB8C($at)
    MEM_W(-0XB8C, ctx->r1) = 0;
    // 0x80092F7C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80092F80: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80092F84: sw          $v0, 0x980($at)
    MEM_W(0X980, ctx->r1) = ctx->r2;
    // 0x80092F88: jal         0x80092ED0
    // 0x80092F8C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80092ED0_6E2D0(rdram, ctx);
        goto after_0;
    // 0x80092F8C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80092F90: jal         0x80092840
    // 0x80092F94: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_80092840_6DC40(rdram, ctx);
        goto after_1;
    // 0x80092F94: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_1:
    // 0x80092F98: sltiu       $v0, $s1, 0x2
    ctx->r2 = ctx->r17 < 0X2 ? 1 : 0;
    // 0x80092F9C: bne         $v0, $zero, L_80093044
    if (ctx->r2 != 0) {
        // 0x80092FA0: addiu       $a1, $s1, -0x1
        ctx->r5 = ADD32(ctx->r17, -0X1);
            goto L_80093044;
    }
    // 0x80092FA0: addiu       $a1, $s1, -0x1
    ctx->r5 = ADD32(ctx->r17, -0X1);
    // 0x80092FA4: beq         $a1, $zero, L_80092FD4
    if (ctx->r5 == 0) {
        // 0x80092FA8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80092FD4;
    }
    // 0x80092FA8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80092FAC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80092FB0: lw          $a0, 0xB20($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB20);
L_80092FB4:
    // 0x80092FB4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80092FB8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80092FBC: bne         $v1, $v0, L_80092FD8
    if (ctx->r3 != ctx->r2) {
        // 0x80092FC0: addiu       $v0, $s1, -0x1
        ctx->r2 = ADD32(ctx->r17, -0X1);
            goto L_80092FD8;
    }
    // 0x80092FC0: addiu       $v0, $s1, -0x1
    ctx->r2 = ADD32(ctx->r17, -0X1);
    // 0x80092FC4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80092FC8: sltu        $v0, $s0, $a1
    ctx->r2 = ctx->r16 < ctx->r5 ? 1 : 0;
    // 0x80092FCC: bne         $v0, $zero, L_80092FB4
    if (ctx->r2 != 0) {
        // 0x80092FD0: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_80092FB4;
    }
    // 0x80092FD0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_80092FD4:
    // 0x80092FD4: addiu       $v0, $s1, -0x1
    ctx->r2 = ADD32(ctx->r17, -0X1);
L_80092FD8:
    // 0x80092FD8: bne         $s0, $v0, L_80093008
    if (ctx->r16 != ctx->r2) {
        // 0x80092FDC: nop
    
            goto L_80093008;
    }
    // 0x80092FDC: nop

    // 0x80092FE0: jal         0x80092840
    // 0x80092FE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80092840_6DC40(rdram, ctx);
        goto after_2;
    // 0x80092FE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x80092FE8: j           L_80093044
    // 0x80092FEC: nop

        goto L_80093044;
    // 0x80092FEC: nop

L_80092FF0:
    // 0x80092FF0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80092FF4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80092FF8: sw          $s0, -0xB8C($at)
    MEM_W(-0XB8C, ctx->r1) = ctx->r16;
    // 0x80092FFC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80093000: j           L_80093044
    // 0x80093004: sw          $v0, 0x980($at)
    MEM_W(0X980, ctx->r1) = ctx->r2;
        goto L_80093044;
    // 0x80093004: sw          $v0, 0x980($at)
    MEM_W(0X980, ctx->r1) = ctx->r2;
L_80093008:
    // 0x80093008: beq         $s1, $zero, L_80093044
    if (ctx->r17 == 0) {
        // 0x8009300C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80093044;
    }
    // 0x8009300C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_80093010:
    // 0x80093010: jal         0x8009C250
    // 0x80093014: nop

    osViGetCurrentFramebuffer_recomp(rdram, ctx);
        goto after_3;
    // 0x80093014: nop

    after_3:
    // 0x80093018: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8009301C: lw          $v1, 0xB20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XB20);
    // 0x80093020: sll         $a0, $s0, 2
    ctx->r4 = S32(ctx->r16 << 2);
    // 0x80093024: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80093028: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8009302C: bne         $v0, $v1, L_80092FF0
    if (ctx->r2 != ctx->r3) {
        // 0x80093030: nop
    
            goto L_80092FF0;
    }
    // 0x80093030: nop

    // 0x80093034: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80093038: sltu        $v0, $s0, $s1
    ctx->r2 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x8009303C: bne         $v0, $zero, L_80093010
    if (ctx->r2 != 0) {
        // 0x80093040: nop
    
            goto L_80093010;
    }
    // 0x80093040: nop

L_80093044:
    // 0x80093044: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80093048: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8009304C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80093050: jr          $ra
    // 0x80093054: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80093054: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80093058: nop

    // 0x8009305C: nop

;}
RECOMP_FUNC void func_80036B7C_11F7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036B7C: jr          $ra
    // 0x80036B80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x80036B80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8002ED90_A190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002ED90: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8002ED94: lbu         $v1, -0x77B8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X77B8);
    // 0x8002ED98: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8002ED9C: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x8002EDA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8002EDA4: addu        $t9, $zero, $zero
    ctx->r25 = ADD32(0, 0);
    // 0x8002EDA8: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x8002EDAC: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x8002EDB0: xori        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 ^ 0X1;
    // 0x8002EDB4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8002EDB8: xori        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 ^ 0X3;
    // 0x8002EDBC: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8002EDC0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8002EDC4: bne         $v0, $zero, L_8002EE44
    if (ctx->r2 != 0) {
        // 0x8002EDC8: sw          $s1, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->r17;
            goto L_8002EE44;
    }
    // 0x8002EDC8: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x8002EDCC: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8002EDD0: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8002EDD4: bne         $v1, $v0, L_8002EEC4
    if (ctx->r3 != ctx->r2) {
        // 0x8002EDD8: nop
    
            goto L_8002EEC4;
    }
    // 0x8002EDD8: nop

    // 0x8002EDDC: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x8002EDE0: bne         $v1, $v0, L_8002EEC4
    if (ctx->r3 != ctx->r2) {
        // 0x8002EDE4: nop
    
            goto L_8002EEC4;
    }
    // 0x8002EDE4: nop

    // 0x8002EDE8: lbu         $v0, 0x1C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1C);
    // 0x8002EDEC: bne         $v1, $v0, L_8002EEC4
    if (ctx->r3 != ctx->r2) {
        // 0x8002EDF0: nop
    
            goto L_8002EEC4;
    }
    // 0x8002EDF0: nop

    // 0x8002EDF4: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x8002EDF8: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8002EDFC: bne         $v1, $v0, L_8002EEC4
    if (ctx->r3 != ctx->r2) {
        // 0x8002EE00: nop
    
            goto L_8002EEC4;
    }
    // 0x8002EE00: nop

    // 0x8002EE04: lbu         $v0, 0x15($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15);
    // 0x8002EE08: bne         $v1, $v0, L_8002EEC4
    if (ctx->r3 != ctx->r2) {
        // 0x8002EE0C: nop
    
            goto L_8002EEC4;
    }
    // 0x8002EE0C: nop

    // 0x8002EE10: lbu         $v0, 0x1D($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1D);
    // 0x8002EE14: bne         $v1, $v0, L_8002EEC4
    if (ctx->r3 != ctx->r2) {
        // 0x8002EE18: nop
    
            goto L_8002EEC4;
    }
    // 0x8002EE18: nop

    // 0x8002EE1C: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x8002EE20: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8002EE24: bne         $v1, $v0, L_8002EEC4
    if (ctx->r3 != ctx->r2) {
        // 0x8002EE28: nop
    
            goto L_8002EEC4;
    }
    // 0x8002EE28: nop

    // 0x8002EE2C: lbu         $v0, 0x16($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X16);
    // 0x8002EE30: bne         $v1, $v0, L_8002EEC4
    if (ctx->r3 != ctx->r2) {
        // 0x8002EE34: nop
    
            goto L_8002EEC4;
    }
    // 0x8002EE34: nop

    // 0x8002EE38: lbu         $v0, 0x1E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1E);
    // 0x8002EE3C: bne         $v1, $v0, L_8002EEC4
    if (ctx->r3 != ctx->r2) {
        // 0x8002EE40: nop
    
            goto L_8002EEC4;
    }
    // 0x8002EE40: nop

L_8002EE44:
    // 0x8002EE44: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x8002EE48: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x8002EE4C: bne         $v1, $v0, L_8002EE88
    if (ctx->r3 != ctx->r2) {
        // 0x8002EE50: nop
    
            goto L_8002EE88;
    }
    // 0x8002EE50: nop

    // 0x8002EE54: lh          $v1, 0x10($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X10);
    // 0x8002EE58: lh          $v0, 0x20($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X20);
    // 0x8002EE5C: bne         $v1, $v0, L_8002EE84
    if (ctx->r3 != ctx->r2) {
        // 0x8002EE60: nop
    
            goto L_8002EE84;
    }
    // 0x8002EE60: nop

    // 0x8002EE64: lh          $v1, 0xA($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XA);
    // 0x8002EE68: lh          $v0, 0x12($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X12);
    // 0x8002EE6C: bne         $v1, $v0, L_8002EE84
    if (ctx->r3 != ctx->r2) {
        // 0x8002EE70: nop
    
            goto L_8002EE84;
    }
    // 0x8002EE70: nop

    // 0x8002EE74: lh          $v1, 0x1A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1A);
    // 0x8002EE78: lh          $v0, 0x22($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X22);
    // 0x8002EE7C: beql        $v1, $v0, L_8002EEC4
    if (ctx->r3 == ctx->r2) {
        // 0x8002EE80: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_8002EEC4;
    }
    goto skip_0;
    // 0x8002EE80: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    skip_0:
L_8002EE84:
    // 0x8002EE84: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
L_8002EE88:
    // 0x8002EE88: lh          $v0, 0x10($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X10);
    // 0x8002EE8C: bne         $v1, $v0, L_8002EEC4
    if (ctx->r3 != ctx->r2) {
        // 0x8002EE90: nop
    
            goto L_8002EEC4;
    }
    // 0x8002EE90: nop

    // 0x8002EE94: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8002EE98: lh          $v0, 0x20($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X20);
    // 0x8002EE9C: bne         $v1, $v0, L_8002EEC4
    if (ctx->r3 != ctx->r2) {
        // 0x8002EEA0: nop
    
            goto L_8002EEC4;
    }
    // 0x8002EEA0: nop

    // 0x8002EEA4: lh          $v1, 0xA($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XA);
    // 0x8002EEA8: lh          $v0, 0x1A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1A);
    // 0x8002EEAC: bne         $v1, $v0, L_8002EEC4
    if (ctx->r3 != ctx->r2) {
        // 0x8002EEB0: nop
    
            goto L_8002EEC4;
    }
    // 0x8002EEB0: nop

    // 0x8002EEB4: lh          $v1, 0x12($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X12);
    // 0x8002EEB8: lh          $v0, 0x22($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X22);
    // 0x8002EEBC: beql        $v1, $v0, L_8002EEC4
    if (ctx->r3 == ctx->r2) {
        // 0x8002EEC0: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_8002EEC4;
    }
    goto skip_1;
    // 0x8002EEC0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    skip_1:
L_8002EEC4:
    // 0x8002EEC4: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x8002EEC8: lw          $v0, 0x3C30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C30);
    // 0x8002EECC: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8002EED0: beq         $v0, $v1, L_8002EF3C
    if (ctx->r2 == ctx->r3) {
        // 0x8002EED4: lui         $a1, 0x400
        ctx->r5 = S32(0X400 << 16);
            goto L_8002EF3C;
    }
    // 0x8002EED4: lui         $a1, 0x400
    ctx->r5 = S32(0X400 << 16);
    // 0x8002EED8: ori         $a1, $a1, 0x1
    ctx->r5 = ctx->r5 | 0X1;
    // 0x8002EEDC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8002EEE0: lw          $a0, -0x6F10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F10);
    // 0x8002EEE4: lui         $a2, 0xDA38
    ctx->r6 = S32(0XDA38 << 16);
    // 0x8002EEE8: ori         $a2, $a2, 0x3
    ctx->r6 = ctx->r6 | 0X3;
    // 0x8002EEEC: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x8002EEF0: sw          $v1, 0x3C30($at)
    MEM_W(0X3C30, ctx->r1) = ctx->r3;
    // 0x8002EEF4: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8002EEF8: addiu       $v1, $v1, -0x77BC
    ctx->r3 = ADD32(ctx->r3, -0X77BC);
    // 0x8002EEFC: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x8002EF00: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002EF04: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002EF08: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x8002EF0C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x8002EF10: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8002EF14: addiu       $v0, $v0, -0x77F0
    ctx->r2 = ADD32(ctx->r2, -0X77F0);
    // 0x8002EF18: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x8002EF1C: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x8002EF20: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x8002EF24: addiu       $v1, $v1, -0x1C
    ctx->r3 = ADD32(ctx->r3, -0X1C);
    // 0x8002EF28: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002EF2C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002EF30: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x8002EF34: j           L_8002EF5C
    // 0x8002EF38: sw          $v1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r3;
        goto L_8002EF5C;
    // 0x8002EF38: sw          $v1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r3;
L_8002EF3C:
    // 0x8002EF3C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8002EF40: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x8002EF44: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x8002EF48: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002EF4C: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8002EF50: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x8002EF54: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x8002EF58: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_8002EF5C:
    // 0x8002EF5C: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8002EF60: lw          $a1, -0x6F10($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6F10);
    // 0x8002EF64: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8002EF68: lbu         $v1, -0x77B8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X77B8);
    // 0x8002EF6C: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x8002EF70: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002EF74: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002EF78: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x8002EF7C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8002EF80: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8002EF84: bne         $v1, $v0, L_8002EFDC
    if (ctx->r3 != ctx->r2) {
        // 0x8002EF88: sw          $zero, 0x4($a1)
        MEM_W(0X4, ctx->r5) = 0;
            goto L_8002EFDC;
    }
    // 0x8002EF88: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x8002EF8C: lh          $v0, 0x20($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X20);
    // 0x8002EF90: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x8002EF94: addiu       $v0, $v0, -0x140
    ctx->r2 = ADD32(ctx->r2, -0X140);
    // 0x8002EF98: bnel        $v1, $v0, L_8002EFE0
    if (ctx->r3 != ctx->r2) {
        // 0x8002EF9C: lui         $a1, 0xE200
        ctx->r5 = S32(0XE200 << 16);
            goto L_8002EFE0;
    }
    goto skip_2;
    // 0x8002EF9C: lui         $a1, 0xE200
    ctx->r5 = S32(0XE200 << 16);
    skip_2:
    // 0x8002EFA0: lh          $v0, 0x22($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X22);
    // 0x8002EFA4: lh          $v1, 0xA($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XA);
    // 0x8002EFA8: addiu       $v0, $v0, -0xF0
    ctx->r2 = ADD32(ctx->r2, -0XF0);
    // 0x8002EFAC: bnel        $v1, $v0, L_8002EFE0
    if (ctx->r3 != ctx->r2) {
        // 0x8002EFB0: lui         $a1, 0xE200
        ctx->r5 = S32(0XE200 << 16);
            goto L_8002EFE0;
    }
    goto skip_3;
    // 0x8002EFB0: lui         $a1, 0xE200
    ctx->r5 = S32(0XE200 << 16);
    skip_3:
    // 0x8002EFB4: lui         $a0, 0xE200
    ctx->r4 = S32(0XE200 << 16);
    // 0x8002EFB8: ori         $a0, $a0, 0x1C
    ctx->r4 = ctx->r4 | 0X1C;
    // 0x8002EFBC: lui         $v1, 0x50
    ctx->r3 = S32(0X50 << 16);
    // 0x8002EFC0: ori         $v1, $v1, 0x4340
    ctx->r3 = ctx->r3 | 0X4340;
    // 0x8002EFC4: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x8002EFC8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002EFCC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002EFD0: sw          $a0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r4;
    // 0x8002EFD4: j           L_8002F008
    // 0x8002EFD8: sw          $v1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r3;
        goto L_8002F008;
    // 0x8002EFD8: sw          $v1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r3;
L_8002EFDC:
    // 0x8002EFDC: lui         $a1, 0xE200
    ctx->r5 = S32(0XE200 << 16);
L_8002EFE0:
    // 0x8002EFE0: ori         $a1, $a1, 0x1C
    ctx->r5 = ctx->r5 | 0X1C;
    // 0x8002EFE4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8002EFE8: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8002EFEC: lui         $a0, 0x50
    ctx->r4 = S32(0X50 << 16);
    // 0x8002EFF0: ori         $a0, $a0, 0x4240
    ctx->r4 = ctx->r4 | 0X4240;
    // 0x8002EFF4: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8002EFF8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002EFFC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002F000: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x8002F004: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
L_8002F008:
    // 0x8002F008: lui         $a1, 0xFC6F
    ctx->r5 = S32(0XFC6F << 16);
    // 0x8002F00C: ori         $a1, $a1, 0xEEDF
    ctx->r5 = ctx->r5 | 0XEEDF;
    // 0x8002F010: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8002F014: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8002F018: lui         $a0, 0xFFDD
    ctx->r4 = S32(0XFFDD << 16);
    // 0x8002F01C: ori         $a0, $a0, 0xF6FB
    ctx->r4 = ctx->r4 | 0XF6FB;
    // 0x8002F020: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x8002F024: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x8002F028: lhu         $t0, 0xA($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XA);
    // 0x8002F02C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8002F030: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002F034: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002F038: lh          $v0, 0x8($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X8);
    // 0x8002F03C: lh          $v1, 0x10($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X10);
    // 0x8002F040: lhu         $a3, 0x12($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X12);
    // 0x8002F044: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8002F048: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8002F04C: beq         $v0, $zero, L_8002F05C
    if (ctx->r2 == 0) {
        // 0x8002F050: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_8002F05C;
    }
    // 0x8002F050: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x8002F054: j           L_8002F064
    // 0x8002F058: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
        goto L_8002F064;
    // 0x8002F058: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_8002F05C:
    // 0x8002F05C: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x8002F060: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
L_8002F064:
    // 0x8002F064: sll         $v1, $t0, 16
    ctx->r3 = S32(ctx->r8 << 16);
    // 0x8002F068: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8002F06C: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8002F070: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002F074: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8002F078: beq         $v1, $zero, L_8002F088
    if (ctx->r3 == 0) {
        // 0x8002F07C: addu        $a0, $t0, $zero
        ctx->r4 = ADD32(ctx->r8, 0);
            goto L_8002F088;
    }
    // 0x8002F07C: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    // 0x8002F080: j           L_8002F090
    // 0x8002F084: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
        goto L_8002F090;
    // 0x8002F084: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
L_8002F088:
    // 0x8002F088: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x8002F08C: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
L_8002F090:
    // 0x8002F090: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8002F094: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8002F098: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x8002F09C: nor         $t1, $zero, $a2
    ctx->r9 = ~(0 | ctx->r6);
    // 0x8002F0A0: sra         $t1, $t1, 31
    ctx->r9 = S32(SIGNED(ctx->r9) >> 31);
    // 0x8002F0A4: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x8002F0A8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8002F0AC: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8002F0B0: nor         $t0, $zero, $v1
    ctx->r8 = ~(0 | ctx->r3);
    // 0x8002F0B4: sra         $t0, $t0, 31
    ctx->r8 = S32(SIGNED(ctx->r8) >> 31);
    // 0x8002F0B8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8002F0BC: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8002F0C0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8002F0C4: nor         $t2, $zero, $a1
    ctx->r10 = ~(0 | ctx->r5);
    // 0x8002F0C8: sra         $t2, $t2, 31
    ctx->r10 = S32(SIGNED(ctx->r10) >> 31);
    // 0x8002F0CC: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x8002F0D0: lw          $t3, -0x6F10($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X6F10);
    // 0x8002F0D4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8002F0D8: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8002F0DC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8002F0E0: nor         $a3, $zero, $a0
    ctx->r7 = ~(0 | ctx->r4);
    // 0x8002F0E4: sra         $a3, $a3, 31
    ctx->r7 = S32(SIGNED(ctx->r7) >> 31);
    // 0x8002F0E8: and         $a2, $a2, $t1
    ctx->r6 = ctx->r6 & ctx->r9;
    // 0x8002F0EC: andi        $a2, $a2, 0x3FF
    ctx->r6 = ctx->r6 & 0X3FF;
    // 0x8002F0F0: sll         $a2, $a2, 14
    ctx->r6 = S32(ctx->r6 << 14);
    // 0x8002F0F4: and         $v1, $v1, $t0
    ctx->r3 = ctx->r3 & ctx->r8;
    // 0x8002F0F8: andi        $v1, $v1, 0x3FF
    ctx->r3 = ctx->r3 & 0X3FF;
    // 0x8002F0FC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8002F100: and         $a1, $a1, $t2
    ctx->r5 = ctx->r5 & ctx->r10;
    // 0x8002F104: andi        $a1, $a1, 0x3FF
    ctx->r5 = ctx->r5 & 0X3FF;
    // 0x8002F108: sll         $a1, $a1, 14
    ctx->r5 = S32(ctx->r5 << 14);
    // 0x8002F10C: and         $a0, $a0, $a3
    ctx->r4 = ctx->r4 & ctx->r7;
    // 0x8002F110: andi        $a0, $a0, 0x3FF
    ctx->r4 = ctx->r4 & 0X3FF;
    // 0x8002F114: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8002F118: or          $a1, $a1, $a0
    ctx->r5 = ctx->r5 | ctx->r4;
    // 0x8002F11C: addiu       $v0, $t3, 0x8
    ctx->r2 = ADD32(ctx->r11, 0X8);
    // 0x8002F120: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002F124: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002F128: lui         $v0, 0xF600
    ctx->r2 = S32(0XF600 << 16);
    // 0x8002F12C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002F130: or          $a2, $a2, $v1
    ctx->r6 = ctx->r6 | ctx->r3;
    // 0x8002F134: sw          $a2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r6;
    // 0x8002F138: sw          $a1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r5;
    // 0x8002F13C: lhu         $t0, 0x1A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X1A);
    // 0x8002F140: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x8002F144: lh          $v1, 0x20($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X20);
    // 0x8002F148: lhu         $a3, 0x22($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X22);
    // 0x8002F14C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8002F150: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8002F154: beq         $v0, $zero, L_8002F164
    if (ctx->r2 == 0) {
        // 0x8002F158: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_8002F164;
    }
    // 0x8002F158: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x8002F15C: j           L_8002F16C
    // 0x8002F160: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
        goto L_8002F16C;
    // 0x8002F160: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_8002F164:
    // 0x8002F164: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x8002F168: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
L_8002F16C:
    // 0x8002F16C: sll         $v1, $t0, 16
    ctx->r3 = S32(ctx->r8 << 16);
    // 0x8002F170: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8002F174: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8002F178: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002F17C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8002F180: beq         $v1, $zero, L_8002F190
    if (ctx->r3 == 0) {
        // 0x8002F184: addu        $a0, $t0, $zero
        ctx->r4 = ADD32(ctx->r8, 0);
            goto L_8002F190;
    }
    // 0x8002F184: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    // 0x8002F188: j           L_8002F198
    // 0x8002F18C: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
        goto L_8002F198;
    // 0x8002F18C: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
L_8002F190:
    // 0x8002F190: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x8002F194: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
L_8002F198:
    // 0x8002F198: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8002F19C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8002F1A0: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x8002F1A4: nor         $t1, $zero, $a2
    ctx->r9 = ~(0 | ctx->r6);
    // 0x8002F1A8: sra         $t1, $t1, 31
    ctx->r9 = S32(SIGNED(ctx->r9) >> 31);
    // 0x8002F1AC: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x8002F1B0: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8002F1B4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8002F1B8: nor         $t0, $zero, $v1
    ctx->r8 = ~(0 | ctx->r3);
    // 0x8002F1BC: sra         $t0, $t0, 31
    ctx->r8 = S32(SIGNED(ctx->r8) >> 31);
    // 0x8002F1C0: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8002F1C4: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8002F1C8: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8002F1CC: nor         $t2, $zero, $a1
    ctx->r10 = ~(0 | ctx->r5);
    // 0x8002F1D0: sra         $t2, $t2, 31
    ctx->r10 = S32(SIGNED(ctx->r10) >> 31);
    // 0x8002F1D4: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x8002F1D8: lw          $t3, -0x6F10($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X6F10);
    // 0x8002F1DC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8002F1E0: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8002F1E4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8002F1E8: nor         $a3, $zero, $a0
    ctx->r7 = ~(0 | ctx->r4);
    // 0x8002F1EC: sra         $a3, $a3, 31
    ctx->r7 = S32(SIGNED(ctx->r7) >> 31);
    // 0x8002F1F0: and         $a2, $a2, $t1
    ctx->r6 = ctx->r6 & ctx->r9;
    // 0x8002F1F4: andi        $a2, $a2, 0x3FF
    ctx->r6 = ctx->r6 & 0X3FF;
    // 0x8002F1F8: sll         $a2, $a2, 14
    ctx->r6 = S32(ctx->r6 << 14);
    // 0x8002F1FC: and         $v1, $v1, $t0
    ctx->r3 = ctx->r3 & ctx->r8;
    // 0x8002F200: andi        $v1, $v1, 0x3FF
    ctx->r3 = ctx->r3 & 0X3FF;
    // 0x8002F204: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8002F208: and         $a1, $a1, $t2
    ctx->r5 = ctx->r5 & ctx->r10;
    // 0x8002F20C: andi        $a1, $a1, 0x3FF
    ctx->r5 = ctx->r5 & 0X3FF;
    // 0x8002F210: sll         $a1, $a1, 14
    ctx->r5 = S32(ctx->r5 << 14);
    // 0x8002F214: and         $a0, $a0, $a3
    ctx->r4 = ctx->r4 & ctx->r7;
    // 0x8002F218: andi        $a0, $a0, 0x3FF
    ctx->r4 = ctx->r4 & 0X3FF;
    // 0x8002F21C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8002F220: or          $a1, $a1, $a0
    ctx->r5 = ctx->r5 | ctx->r4;
    // 0x8002F224: addiu       $v0, $t3, 0x8
    ctx->r2 = ADD32(ctx->r11, 0X8);
    // 0x8002F228: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002F22C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002F230: lui         $v0, 0xF600
    ctx->r2 = S32(0XF600 << 16);
    // 0x8002F234: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002F238: or          $a2, $a2, $v1
    ctx->r6 = ctx->r6 | ctx->r3;
    // 0x8002F23C: sw          $a2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r6;
    // 0x8002F240: sw          $a1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r5;
    // 0x8002F244: lhu         $t0, 0xA($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XA);
    // 0x8002F248: lh          $v0, 0x8($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X8);
    // 0x8002F24C: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8002F250: lhu         $a3, 0x1A($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X1A);
    // 0x8002F254: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8002F258: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8002F25C: beq         $v0, $zero, L_8002F26C
    if (ctx->r2 == 0) {
        // 0x8002F260: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_8002F26C;
    }
    // 0x8002F260: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x8002F264: j           L_8002F274
    // 0x8002F268: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
        goto L_8002F274;
    // 0x8002F268: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_8002F26C:
    // 0x8002F26C: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x8002F270: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
L_8002F274:
    // 0x8002F274: sll         $v1, $t0, 16
    ctx->r3 = S32(ctx->r8 << 16);
    // 0x8002F278: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8002F27C: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8002F280: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002F284: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8002F288: beq         $v1, $zero, L_8002F298
    if (ctx->r3 == 0) {
        // 0x8002F28C: addu        $a0, $t0, $zero
        ctx->r4 = ADD32(ctx->r8, 0);
            goto L_8002F298;
    }
    // 0x8002F28C: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    // 0x8002F290: j           L_8002F2A0
    // 0x8002F294: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
        goto L_8002F2A0;
    // 0x8002F294: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
L_8002F298:
    // 0x8002F298: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x8002F29C: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
L_8002F2A0:
    // 0x8002F2A0: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8002F2A4: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8002F2A8: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x8002F2AC: nor         $t1, $zero, $a2
    ctx->r9 = ~(0 | ctx->r6);
    // 0x8002F2B0: sra         $t1, $t1, 31
    ctx->r9 = S32(SIGNED(ctx->r9) >> 31);
    // 0x8002F2B4: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x8002F2B8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8002F2BC: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8002F2C0: nor         $t0, $zero, $v1
    ctx->r8 = ~(0 | ctx->r3);
    // 0x8002F2C4: sra         $t0, $t0, 31
    ctx->r8 = S32(SIGNED(ctx->r8) >> 31);
    // 0x8002F2C8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8002F2CC: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8002F2D0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8002F2D4: nor         $t2, $zero, $a1
    ctx->r10 = ~(0 | ctx->r5);
    // 0x8002F2D8: sra         $t2, $t2, 31
    ctx->r10 = S32(SIGNED(ctx->r10) >> 31);
    // 0x8002F2DC: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x8002F2E0: lw          $t3, -0x6F10($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X6F10);
    // 0x8002F2E4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8002F2E8: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8002F2EC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8002F2F0: nor         $a3, $zero, $a0
    ctx->r7 = ~(0 | ctx->r4);
    // 0x8002F2F4: sra         $a3, $a3, 31
    ctx->r7 = S32(SIGNED(ctx->r7) >> 31);
    // 0x8002F2F8: and         $a2, $a2, $t1
    ctx->r6 = ctx->r6 & ctx->r9;
    // 0x8002F2FC: andi        $a2, $a2, 0x3FF
    ctx->r6 = ctx->r6 & 0X3FF;
    // 0x8002F300: sll         $a2, $a2, 14
    ctx->r6 = S32(ctx->r6 << 14);
    // 0x8002F304: and         $v1, $v1, $t0
    ctx->r3 = ctx->r3 & ctx->r8;
    // 0x8002F308: andi        $v1, $v1, 0x3FF
    ctx->r3 = ctx->r3 & 0X3FF;
    // 0x8002F30C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8002F310: and         $a1, $a1, $t2
    ctx->r5 = ctx->r5 & ctx->r10;
    // 0x8002F314: andi        $a1, $a1, 0x3FF
    ctx->r5 = ctx->r5 & 0X3FF;
    // 0x8002F318: sll         $a1, $a1, 14
    ctx->r5 = S32(ctx->r5 << 14);
    // 0x8002F31C: and         $a0, $a0, $a3
    ctx->r4 = ctx->r4 & ctx->r7;
    // 0x8002F320: andi        $a0, $a0, 0x3FF
    ctx->r4 = ctx->r4 & 0X3FF;
    // 0x8002F324: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8002F328: or          $a1, $a1, $a0
    ctx->r5 = ctx->r5 | ctx->r4;
    // 0x8002F32C: addiu       $v0, $t3, 0x8
    ctx->r2 = ADD32(ctx->r11, 0X8);
    // 0x8002F330: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002F334: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002F338: lui         $v0, 0xF600
    ctx->r2 = S32(0XF600 << 16);
    // 0x8002F33C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002F340: or          $a2, $a2, $v1
    ctx->r6 = ctx->r6 | ctx->r3;
    // 0x8002F344: sw          $a2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r6;
    // 0x8002F348: sw          $a1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r5;
    // 0x8002F34C: lhu         $t0, 0x12($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X12);
    // 0x8002F350: lh          $v0, 0x10($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X10);
    // 0x8002F354: lh          $v1, 0x20($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X20);
    // 0x8002F358: lhu         $a3, 0x22($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X22);
    // 0x8002F35C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8002F360: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8002F364: beq         $v0, $zero, L_8002F374
    if (ctx->r2 == 0) {
        // 0x8002F368: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_8002F374;
    }
    // 0x8002F368: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x8002F36C: j           L_8002F37C
    // 0x8002F370: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
        goto L_8002F37C;
    // 0x8002F370: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_8002F374:
    // 0x8002F374: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x8002F378: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
L_8002F37C:
    // 0x8002F37C: sll         $v1, $t0, 16
    ctx->r3 = S32(ctx->r8 << 16);
    // 0x8002F380: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8002F384: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8002F388: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002F38C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8002F390: beq         $v1, $zero, L_8002F3A0
    if (ctx->r3 == 0) {
        // 0x8002F394: addu        $a0, $t0, $zero
        ctx->r4 = ADD32(ctx->r8, 0);
            goto L_8002F3A0;
    }
    // 0x8002F394: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    // 0x8002F398: j           L_8002F3A8
    // 0x8002F39C: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
        goto L_8002F3A8;
    // 0x8002F39C: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
L_8002F3A0:
    // 0x8002F3A0: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x8002F3A4: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
L_8002F3A8:
    // 0x8002F3A8: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8002F3AC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8002F3B0: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x8002F3B4: nor         $t1, $zero, $a2
    ctx->r9 = ~(0 | ctx->r6);
    // 0x8002F3B8: sra         $t1, $t1, 31
    ctx->r9 = S32(SIGNED(ctx->r9) >> 31);
    // 0x8002F3BC: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x8002F3C0: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8002F3C4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8002F3C8: nor         $t0, $zero, $v1
    ctx->r8 = ~(0 | ctx->r3);
    // 0x8002F3CC: sra         $t0, $t0, 31
    ctx->r8 = S32(SIGNED(ctx->r8) >> 31);
    // 0x8002F3D0: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8002F3D4: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8002F3D8: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8002F3DC: nor         $t2, $zero, $a1
    ctx->r10 = ~(0 | ctx->r5);
    // 0x8002F3E0: sra         $t2, $t2, 31
    ctx->r10 = S32(SIGNED(ctx->r10) >> 31);
    // 0x8002F3E4: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x8002F3E8: lw          $t3, -0x6F10($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X6F10);
    // 0x8002F3EC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8002F3F0: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8002F3F4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8002F3F8: nor         $a3, $zero, $a0
    ctx->r7 = ~(0 | ctx->r4);
    // 0x8002F3FC: sra         $a3, $a3, 31
    ctx->r7 = S32(SIGNED(ctx->r7) >> 31);
    // 0x8002F400: and         $a2, $a2, $t1
    ctx->r6 = ctx->r6 & ctx->r9;
    // 0x8002F404: andi        $a2, $a2, 0x3FF
    ctx->r6 = ctx->r6 & 0X3FF;
    // 0x8002F408: sll         $a2, $a2, 14
    ctx->r6 = S32(ctx->r6 << 14);
    // 0x8002F40C: and         $v1, $v1, $t0
    ctx->r3 = ctx->r3 & ctx->r8;
    // 0x8002F410: andi        $v1, $v1, 0x3FF
    ctx->r3 = ctx->r3 & 0X3FF;
    // 0x8002F414: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8002F418: and         $a1, $a1, $t2
    ctx->r5 = ctx->r5 & ctx->r10;
    // 0x8002F41C: andi        $a1, $a1, 0x3FF
    ctx->r5 = ctx->r5 & 0X3FF;
    // 0x8002F420: sll         $a1, $a1, 14
    ctx->r5 = S32(ctx->r5 << 14);
    // 0x8002F424: and         $a0, $a0, $a3
    ctx->r4 = ctx->r4 & ctx->r7;
    // 0x8002F428: andi        $a0, $a0, 0x3FF
    ctx->r4 = ctx->r4 & 0X3FF;
    // 0x8002F42C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8002F430: or          $a1, $a1, $a0
    ctx->r5 = ctx->r5 | ctx->r4;
    // 0x8002F434: addiu       $v0, $t3, 0x8
    ctx->r2 = ADD32(ctx->r11, 0X8);
    // 0x8002F438: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002F43C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002F440: lui         $v0, 0xF600
    ctx->r2 = S32(0XF600 << 16);
    // 0x8002F444: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002F448: or          $a2, $a2, $v1
    ctx->r6 = ctx->r6 | ctx->r3;
    // 0x8002F44C: addiu       $v0, $t3, 0x10
    ctx->r2 = ADD32(ctx->r11, 0X10);
    // 0x8002F450: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002F454: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002F458: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x8002F45C: sw          $a2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r6;
    // 0x8002F460: sw          $a1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r5;
    // 0x8002F464: sw          $v0, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r2;
    // 0x8002F468: sw          $zero, 0xC($t3)
    MEM_W(0XC, ctx->r11) = 0;
    // 0x8002F46C: lbu         $v0, 0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7);
    // 0x8002F470: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8002F474: beql        $v0, $zero, L_8002F670
    if (ctx->r2 == 0) {
        // 0x8002F478: lui         $a3, 0xE200
        ctx->r7 = S32(0XE200 << 16);
            goto L_8002F670;
    }
    goto skip_4;
    // 0x8002F478: lui         $a3, 0xE200
    ctx->r7 = S32(0XE200 << 16);
    skip_4:
    // 0x8002F47C: lbu         $t7, 0x4($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X4);
    // 0x8002F480: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8002F484: lhu         $v0, -0x77B0($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X77B0);
    // 0x8002F488: lbu         $s1, 0x5($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0X5);
    // 0x8002F48C: lbu         $t8, 0x6($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X6);
    // 0x8002F490: srl         $v0, $v0, 5
    ctx->r2 = S32(U32(ctx->r2) >> 5);
    // 0x8002F494: andi        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 & 0X3;
    // 0x8002F498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002F49C: beq         $v1, $v0, L_8002F4C0
    if (ctx->r3 == ctx->r2) {
        // 0x8002F4A0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8002F4C0;
    }
    // 0x8002F4A0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8002F4A4: bne         $v0, $zero, L_8002F5BC
    if (ctx->r2 != 0) {
        // 0x8002F4A8: addiu       $t6, $zero, 0x80
        ctx->r14 = ADD32(0, 0X80);
            goto L_8002F5BC;
    }
    // 0x8002F4A8: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x8002F4AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8002F4B0: beq         $v1, $v0, L_8002F554
    if (ctx->r3 == ctx->r2) {
        // 0x8002F4B4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8002F554;
    }
    // 0x8002F4B4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8002F4B8: j           L_8002F5BC
    // 0x8002F4BC: nop

        goto L_8002F5BC;
    // 0x8002F4BC: nop

L_8002F4C0:
    // 0x8002F4C0: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x8002F4C4: lbu         $a0, 0x6($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X6);
    // 0x8002F4C8: lbu         $a1, 0xC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XC);
    // 0x8002F4CC: lbu         $a2, 0xD($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XD);
    // 0x8002F4D0: lbu         $a3, 0xE($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XE);
    // 0x8002F4D4: lbu         $t0, 0x14($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X14);
    // 0x8002F4D8: lbu         $t1, 0x15($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X15);
    // 0x8002F4DC: lbu         $t2, 0x16($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X16);
    // 0x8002F4E0: lbu         $t3, 0x1C($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X1C);
    // 0x8002F4E4: lbu         $t4, 0x1D($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X1D);
    // 0x8002F4E8: lbu         $t5, 0x1E($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X1E);
    // 0x8002F4EC: addiu       $t6, $zero, 0xBF
    ctx->r14 = ADD32(0, 0XBF);
    // 0x8002F4F0: addiu       $v0, $t7, 0x3F
    ctx->r2 = ADD32(ctx->r15, 0X3F);
    // 0x8002F4F4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8002F4F8: addiu       $v1, $v1, 0x3F
    ctx->r3 = ADD32(ctx->r3, 0X3F);
    // 0x8002F4FC: addiu       $a0, $a0, 0x3F
    ctx->r4 = ADD32(ctx->r4, 0X3F);
    // 0x8002F500: addiu       $a1, $a1, 0x3F
    ctx->r5 = ADD32(ctx->r5, 0X3F);
    // 0x8002F504: addiu       $a2, $a2, 0x3F
    ctx->r6 = ADD32(ctx->r6, 0X3F);
    // 0x8002F508: addiu       $a3, $a3, 0x3F
    ctx->r7 = ADD32(ctx->r7, 0X3F);
    // 0x8002F50C: addiu       $t0, $t0, 0x3F
    ctx->r8 = ADD32(ctx->r8, 0X3F);
    // 0x8002F510: addiu       $t1, $t1, 0x3F
    ctx->r9 = ADD32(ctx->r9, 0X3F);
    // 0x8002F514: addiu       $t2, $t2, 0x3F
    ctx->r10 = ADD32(ctx->r10, 0X3F);
    // 0x8002F518: addiu       $t3, $t3, 0x3F
    ctx->r11 = ADD32(ctx->r11, 0X3F);
    // 0x8002F51C: addiu       $t4, $t4, 0x3F
    ctx->r12 = ADD32(ctx->r12, 0X3F);
    // 0x8002F520: addiu       $t5, $t5, 0x3F
    ctx->r13 = ADD32(ctx->r13, 0X3F);
    // 0x8002F524: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
    // 0x8002F528: sb          $a0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r4;
    // 0x8002F52C: sb          $a1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r5;
    // 0x8002F530: sb          $a2, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r6;
    // 0x8002F534: sb          $a3, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r7;
    // 0x8002F538: sb          $t0, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r8;
    // 0x8002F53C: sb          $t1, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r9;
    // 0x8002F540: sb          $t2, 0x16($s0)
    MEM_B(0X16, ctx->r16) = ctx->r10;
    // 0x8002F544: sb          $t3, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r11;
    // 0x8002F548: sb          $t4, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r12;
    // 0x8002F54C: j           L_8002F5BC
    // 0x8002F550: sb          $t5, 0x1E($s0)
    MEM_B(0X1E, ctx->r16) = ctx->r13;
        goto L_8002F5BC;
    // 0x8002F550: sb          $t5, 0x1E($s0)
    MEM_B(0X1E, ctx->r16) = ctx->r13;
L_8002F554:
    // 0x8002F554: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8002F558: lbu         $v1, -0x77B8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X77B8);
    // 0x8002F55C: bne         $v1, $v0, L_8002F588
    if (ctx->r3 != ctx->r2) {
        // 0x8002F560: addu        $t6, $s1, $t7
        ctx->r14 = ADD32(ctx->r17, ctx->r15);
            goto L_8002F588;
    }
    // 0x8002F560: addu        $t6, $s1, $t7
    ctx->r14 = ADD32(ctx->r17, ctx->r15);
    // 0x8002F564: andi        $v0, $t7, 0xFF
    ctx->r2 = ctx->r15 & 0XFF;
    // 0x8002F568: xor         $v1, $s1, $v0
    ctx->r3 = ctx->r17 ^ ctx->r2;
    // 0x8002F56C: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x8002F570: xor         $v0, $t8, $v0
    ctx->r2 = ctx->r24 ^ ctx->r2;
    // 0x8002F574: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8002F578: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002F57C: bne         $v1, $zero, L_8002F5BC
    if (ctx->r3 != 0) {
        // 0x8002F580: addiu       $t6, $zero, 0x60
        ctx->r14 = ADD32(0, 0X60);
            goto L_8002F5BC;
    }
    // 0x8002F580: addiu       $t6, $zero, 0x60
    ctx->r14 = ADD32(0, 0X60);
    // 0x8002F584: addu        $t6, $s1, $t7
    ctx->r14 = ADD32(ctx->r17, ctx->r15);
L_8002F588:
    // 0x8002F588: addu        $t6, $t8, $t6
    ctx->r14 = ADD32(ctx->r24, ctx->r14);
    // 0x8002F58C: lui         $v0, 0xAAAA
    ctx->r2 = S32(0XAAAA << 16);
    // 0x8002F590: ori         $v0, $v0, 0xAAAB
    ctx->r2 = ctx->r2 | 0XAAAB;
    // 0x8002F594: multu       $t6, $v0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002F598: mfhi        $s2
    ctx->r18 = hi;
    // 0x8002F59C: srl         $t6, $s2, 1
    ctx->r14 = S32(U32(ctx->r18) >> 1);
    // 0x8002F5A0: addiu       $t6, $t6, 0x20
    ctx->r14 = ADD32(ctx->r14, 0X20);
    // 0x8002F5A4: sltiu       $v0, $t6, 0x100
    ctx->r2 = ctx->r14 < 0X100 ? 1 : 0;
    // 0x8002F5A8: beql        $v0, $zero, L_8002F5B0
    if (ctx->r2 == 0) {
        // 0x8002F5AC: addiu       $t6, $zero, 0xFF
        ctx->r14 = ADD32(0, 0XFF);
            goto L_8002F5B0;
    }
    goto skip_5;
    // 0x8002F5AC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    skip_5:
L_8002F5B0:
    // 0x8002F5B0: addu        $t8, $zero, $zero
    ctx->r24 = ADD32(0, 0);
    // 0x8002F5B4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8002F5B8: addu        $t7, $zero, $zero
    ctx->r15 = ADD32(0, 0);
L_8002F5BC:
    // 0x8002F5BC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8002F5C0: lbu         $v1, -0x77B8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X77B8);
    // 0x8002F5C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8002F5C8: bne         $v1, $v0, L_8002F630
    if (ctx->r3 != ctx->r2) {
        // 0x8002F5CC: andi        $a1, $t7, 0xFF
        ctx->r5 = ctx->r15 & 0XFF;
            goto L_8002F630;
    }
    // 0x8002F5CC: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    // 0x8002F5D0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8002F5D4: lhu         $v1, -0x77B0($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X77B0);
    // 0x8002F5D8: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x8002F5DC: xor         $v0, $a1, $a0
    ctx->r2 = ctx->r5 ^ ctx->r4;
    // 0x8002F5E0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8002F5E4: srl         $v1, $v1, 5
    ctx->r3 = S32(U32(ctx->r3) >> 5);
    // 0x8002F5E8: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x8002F5EC: xori        $v1, $v1, 0x2
    ctx->r3 = ctx->r3 ^ 0X2;
    // 0x8002F5F0: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x8002F5F4: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8002F5F8: beq         $v1, $zero, L_8002F630
    if (ctx->r3 == 0) {
        // 0x8002F5FC: nop
    
            goto L_8002F630;
    }
    // 0x8002F5FC: nop

    // 0x8002F600: bne         $a0, $t8, L_8002F630
    if (ctx->r4 != ctx->r24) {
        // 0x8002F604: nop
    
            goto L_8002F630;
    }
    // 0x8002F604: nop

    // 0x8002F608: addu        $t6, $a1, $a0
    ctx->r14 = ADD32(ctx->r5, ctx->r4);
    // 0x8002F60C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8002F610: lui         $v0, 0xAAAA
    ctx->r2 = S32(0XAAAA << 16);
    // 0x8002F614: ori         $v0, $v0, 0xAAAB
    ctx->r2 = ctx->r2 | 0XAAAB;
    // 0x8002F618: multu       $t6, $v0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002F61C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8002F620: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
    // 0x8002F624: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8002F628: mfhi        $s2
    ctx->r18 = hi;
    // 0x8002F62C: srl         $t6, $s2, 1
    ctx->r14 = S32(U32(ctx->r18) >> 1);
L_8002F630:
    // 0x8002F630: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8002F634: lw          $a0, -0x6F10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F10);
    // 0x8002F638: sll         $v1, $s1, 16
    ctx->r3 = S32(ctx->r17 << 16);
    // 0x8002F63C: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x8002F640: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002F644: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002F648: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x8002F64C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x8002F650: sll         $v0, $t7, 24
    ctx->r2 = S32(ctx->r15 << 24);
    // 0x8002F654: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8002F658: sll         $v1, $t8, 8
    ctx->r3 = S32(ctx->r24 << 8);
    // 0x8002F65C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8002F660: andi        $v1, $t6, 0xFF
    ctx->r3 = ctx->r14 & 0XFF;
    // 0x8002F664: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8002F668: j           L_8002F6CC
    // 0x8002F66C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
        goto L_8002F6CC;
    // 0x8002F66C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_8002F670:
    // 0x8002F670: ori         $a3, $a3, 0x1C
    ctx->r7 = ctx->r7 | 0X1C;
    // 0x8002F674: lui         $a2, 0xF0A
    ctx->r6 = S32(0XF0A << 16);
    // 0x8002F678: addiu       $v0, $t3, 0x18
    ctx->r2 = ADD32(ctx->r11, 0X18);
    // 0x8002F67C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002F680: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002F684: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x8002F688: sw          $v0, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r2;
    // 0x8002F68C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8002F690: lbu         $a0, 0x5($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X5);
    // 0x8002F694: lbu         $a1, 0x6($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X6);
    // 0x8002F698: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x8002F69C: addiu       $v1, $t3, 0x20
    ctx->r3 = ADD32(ctx->r11, 0X20);
    // 0x8002F6A0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002F6A4: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8002F6A8: sw          $a3, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->r7;
    // 0x8002F6AC: sw          $a2, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->r6;
    // 0x8002F6B0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8002F6B4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8002F6B8: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8002F6BC: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x8002F6C0: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x8002F6C4: ori         $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 | 0XFF;
    // 0x8002F6C8: sw          $v0, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->r2;
L_8002F6CC:
    // 0x8002F6CC: andi        $v1, $t9, 0xFF
    ctx->r3 = ctx->r25 & 0XFF;
    // 0x8002F6D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002F6D4: beq         $v1, $v0, L_8002F988
    if (ctx->r3 == ctx->r2) {
        // 0x8002F6D8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8002F988;
    }
    // 0x8002F6D8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8002F6DC: beql        $v0, $zero, L_8002F6F4
    if (ctx->r2 == 0) {
        // 0x8002F6E0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8002F6F4;
    }
    goto skip_6;
    // 0x8002F6E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_6:
    // 0x8002F6E4: beq         $v1, $zero, L_8002F6FC
    if (ctx->r3 == 0) {
        // 0x8002F6E8: nop
    
            goto L_8002F6FC;
    }
    // 0x8002F6E8: nop

    // 0x8002F6EC: j           L_8002FA1C
    // 0x8002F6F0: nop

        goto L_8002FA1C;
    // 0x8002F6F0: nop

L_8002F6F4:
    // 0x8002F6F4: bne         $v1, $v0, L_8002FA1C
    if (ctx->r3 != ctx->r2) {
        // 0x8002F6F8: nop
    
            goto L_8002FA1C;
    }
    // 0x8002F6F8: nop

L_8002F6FC:
    // 0x8002F6FC: jal         0x800281C8
    // 0x8002F700: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_800281C8_35C8(rdram, ctx);
        goto after_0;
    // 0x8002F700: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_0:
    // 0x8002F704: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8002F708: beq         $s1, $zero, L_8002FA1C
    if (ctx->r17 == 0) {
        // 0x8002F70C: lui         $a2, 0xFC6F
        ctx->r6 = S32(0XFC6F << 16);
            goto L_8002FA1C;
    }
    // 0x8002F70C: lui         $a2, 0xFC6F
    ctx->r6 = S32(0XFC6F << 16);
    // 0x8002F710: ori         $a2, $a2, 0xEEDF
    ctx->r6 = ctx->r6 | 0XEEDF;
    // 0x8002F714: lui         $a1, 0xFFDE
    ctx->r5 = S32(0XFFDE << 16);
    // 0x8002F718: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8002F71C: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8002F720: ori         $a1, $a1, 0x773B
    ctx->r5 = ctx->r5 | 0X773B;
    // 0x8002F724: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8002F728: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8002F72C: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x8002F730: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8002F734: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002F738: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002F73C: jal         0x8009A2B0
    // 0x8002F740: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x8002F740: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    after_1:
    // 0x8002F744: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x8002F748: ori         $v0, $v0, 0x4008
    ctx->r2 = ctx->r2 | 0X4008;
    // 0x8002F74C: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x8002F750: lw          $t0, -0x6F10($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X6F10);
    // 0x8002F754: lui         $a0, 0x218
    ctx->r4 = S32(0X218 << 16);
    // 0x8002F758: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x8002F75C: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x8002F760: lui         $v0, 0x218
    ctx->r2 = S32(0X218 << 16);
    // 0x8002F764: sw          $s1, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r17;
    // 0x8002F768: sw          $v0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r2;
    // 0x8002F76C: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x8002F770: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
    // 0x8002F774: lui         $a1, 0x218
    ctx->r5 = S32(0X218 << 16);
    // 0x8002F778: ori         $a1, $a1, 0x4
    ctx->r5 = ctx->r5 | 0X4;
    // 0x8002F77C: sw          $a0, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r4;
    // 0x8002F780: sll         $v1, $v1, 18
    ctx->r3 = S32(ctx->r3 << 18);
    // 0x8002F784: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8002F788: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8002F78C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002F790: sw          $v1, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r3;
    // 0x8002F794: lh          $v1, 0x10($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X10);
    // 0x8002F798: lh          $v0, 0x12($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X12);
    // 0x8002F79C: lui         $a2, 0x210
    ctx->r6 = S32(0X210 << 16);
    // 0x8002F7A0: ori         $a2, $a2, 0x2
    ctx->r6 = ctx->r6 | 0X2;
    // 0x8002F7A4: sw          $a1, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r5;
    // 0x8002F7A8: sll         $v1, $v1, 18
    ctx->r3 = S32(ctx->r3 << 18);
    // 0x8002F7AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8002F7B0: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8002F7B4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002F7B8: sw          $v1, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r3;
    // 0x8002F7BC: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8002F7C0: lh          $v0, 0x1A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1A);
    // 0x8002F7C4: lui         $a0, 0x218
    ctx->r4 = S32(0X218 << 16);
    // 0x8002F7C8: ori         $a0, $a0, 0x6
    ctx->r4 = ctx->r4 | 0X6;
    // 0x8002F7CC: sw          $a0, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->r4;
    // 0x8002F7D0: sll         $v1, $v1, 18
    ctx->r3 = S32(ctx->r3 << 18);
    // 0x8002F7D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8002F7D8: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8002F7DC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002F7E0: sw          $v1, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r3;
    // 0x8002F7E4: lh          $a0, 0x20($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X20);
    // 0x8002F7E8: lh          $v1, 0x22($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X22);
    // 0x8002F7EC: lui         $a3, 0x210
    ctx->r7 = S32(0X210 << 16);
    // 0x8002F7F0: addiu       $v0, $t0, 0x8
    ctx->r2 = ADD32(ctx->r8, 0X8);
    // 0x8002F7F4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002F7F8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002F7FC: addiu       $v0, $t0, 0x10
    ctx->r2 = ADD32(ctx->r8, 0X10);
    // 0x8002F800: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002F804: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002F808: addiu       $v0, $t0, 0x18
    ctx->r2 = ADD32(ctx->r8, 0X18);
    // 0x8002F80C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002F810: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002F814: addiu       $v0, $t0, 0x20
    ctx->r2 = ADD32(ctx->r8, 0X20);
    // 0x8002F818: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002F81C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002F820: addiu       $v0, $t0, 0x28
    ctx->r2 = ADD32(ctx->r8, 0X28);
    // 0x8002F824: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002F828: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002F82C: addiu       $v0, $t0, 0x30
    ctx->r2 = ADD32(ctx->r8, 0X30);
    // 0x8002F830: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002F834: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002F838: lui         $v0, 0x210
    ctx->r2 = S32(0X210 << 16);
    // 0x8002F83C: sw          $v0, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->r2;
    // 0x8002F840: sll         $a0, $a0, 18
    ctx->r4 = S32(ctx->r4 << 18);
    // 0x8002F844: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8002F848: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8002F84C: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x8002F850: sw          $a0, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r4;
    // 0x8002F854: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8002F858: lbu         $a0, 0x5($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X5);
    // 0x8002F85C: lbu         $a1, 0x6($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X6);
    // 0x8002F860: ori         $a3, $a3, 0x4
    ctx->r7 = ctx->r7 | 0X4;
    // 0x8002F864: addiu       $v1, $t0, 0x38
    ctx->r3 = ADD32(ctx->r8, 0X38);
    // 0x8002F868: sw          $a2, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r6;
    // 0x8002F86C: lui         $a2, 0x210
    ctx->r6 = S32(0X210 << 16);
    // 0x8002F870: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002F874: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8002F878: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8002F87C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8002F880: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8002F884: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x8002F888: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x8002F88C: ori         $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 | 0XFF;
    // 0x8002F890: sw          $v0, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->r2;
    // 0x8002F894: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8002F898: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x8002F89C: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x8002F8A0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8002F8A4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8002F8A8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8002F8AC: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8002F8B0: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8002F8B4: ori         $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 | 0XFF;
    // 0x8002F8B8: sw          $v0, 0x34($t0)
    MEM_W(0X34, ctx->r8) = ctx->r2;
    // 0x8002F8BC: addiu       $v0, $t0, 0x40
    ctx->r2 = ADD32(ctx->r8, 0X40);
    // 0x8002F8C0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002F8C4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002F8C8: sw          $a3, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r7;
    // 0x8002F8CC: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x8002F8D0: lbu         $a0, 0x15($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X15);
    // 0x8002F8D4: lbu         $a1, 0x16($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X16);
    // 0x8002F8D8: ori         $a2, $a2, 0x6
    ctx->r6 = ctx->r6 | 0X6;
    // 0x8002F8DC: addiu       $v1, $t0, 0x48
    ctx->r3 = ADD32(ctx->r8, 0X48);
    // 0x8002F8E0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002F8E4: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8002F8E8: sw          $a2, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->r6;
    // 0x8002F8EC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8002F8F0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8002F8F4: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8002F8F8: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x8002F8FC: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x8002F900: ori         $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 | 0XFF;
    // 0x8002F904: sw          $v0, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->r2;
    // 0x8002F908: lbu         $v0, 0x1C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1C);
    // 0x8002F90C: lbu         $v1, 0x1D($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1D);
    // 0x8002F910: lbu         $a0, 0x1E($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1E);
    // 0x8002F914: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8002F918: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8002F91C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8002F920: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8002F924: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8002F928: lbu         $v1, -0x77B8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X77B8);
    // 0x8002F92C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8002F930: ori         $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 | 0XFF;
    // 0x8002F934: sw          $v0, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->r2;
    // 0x8002F938: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8002F93C: bne         $v1, $v0, L_8002F964
    if (ctx->r3 != ctx->r2) {
        // 0x8002F940: lui         $a0, 0x600
        ctx->r4 = S32(0X600 << 16);
            goto L_8002F964;
    }
    // 0x8002F940: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x8002F944: lui         $v1, 0x500
    ctx->r3 = S32(0X500 << 16);
    // 0x8002F948: ori         $v1, $v1, 0x402
    ctx->r3 = ctx->r3 | 0X402;
    // 0x8002F94C: addiu       $v0, $t0, 0x50
    ctx->r2 = ADD32(ctx->r8, 0X50);
    // 0x8002F950: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002F954: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002F958: sw          $v1, 0x48($t0)
    MEM_W(0X48, ctx->r8) = ctx->r3;
    // 0x8002F95C: j           L_8002FA1C
    // 0x8002F960: sw          $zero, 0x4C($t0)
    MEM_W(0X4C, ctx->r8) = 0;
        goto L_8002FA1C;
    // 0x8002F960: sw          $zero, 0x4C($t0)
    MEM_W(0X4C, ctx->r8) = 0;
L_8002F964:
    // 0x8002F964: ori         $a0, $a0, 0x402
    ctx->r4 = ctx->r4 | 0X402;
    // 0x8002F968: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x8002F96C: ori         $v1, $v1, 0x602
    ctx->r3 = ctx->r3 | 0X602;
    // 0x8002F970: addiu       $v0, $t0, 0x50
    ctx->r2 = ADD32(ctx->r8, 0X50);
    // 0x8002F974: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002F978: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002F97C: sw          $a0, 0x48($t0)
    MEM_W(0X48, ctx->r8) = ctx->r4;
    // 0x8002F980: j           L_8002FA1C
    // 0x8002F984: sw          $v1, 0x4C($t0)
    MEM_W(0X4C, ctx->r8) = ctx->r3;
        goto L_8002FA1C;
    // 0x8002F984: sw          $v1, 0x4C($t0)
    MEM_W(0X4C, ctx->r8) = ctx->r3;
L_8002F988:
    // 0x8002F988: lh          $v1, 0x20($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X20);
    // 0x8002F98C: lh          $v0, 0x22($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X22);
    // 0x8002F990: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8002F994: lw          $a2, -0x6F10($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X6F10);
    // 0x8002F998: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8002F99C: nor         $a0, $zero, $v1
    ctx->r4 = ~(0 | ctx->r3);
    // 0x8002F9A0: sra         $a0, $a0, 31
    ctx->r4 = S32(SIGNED(ctx->r4) >> 31);
    // 0x8002F9A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8002F9A8: nor         $a1, $zero, $v0
    ctx->r5 = ~(0 | ctx->r2);
    // 0x8002F9AC: sra         $a1, $a1, 31
    ctx->r5 = S32(SIGNED(ctx->r5) >> 31);
    // 0x8002F9B0: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x8002F9B4: andi        $v1, $v1, 0x3FF
    ctx->r3 = ctx->r3 & 0X3FF;
    // 0x8002F9B8: sll         $v1, $v1, 14
    ctx->r3 = S32(ctx->r3 << 14);
    // 0x8002F9BC: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x8002F9C0: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x8002F9C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8002F9C8: lui         $a0, 0xF600
    ctx->r4 = S32(0XF600 << 16);
    // 0x8002F9CC: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8002F9D0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002F9D4: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x8002F9D8: lh          $a0, 0x8($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X8);
    // 0x8002F9DC: lh          $v1, 0xA($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XA);
    // 0x8002F9E0: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x8002F9E4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002F9E8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002F9EC: nor         $v0, $zero, $a0
    ctx->r2 = ~(0 | ctx->r4);
    // 0x8002F9F0: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8002F9F4: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x8002F9F8: andi        $a0, $a0, 0x3FF
    ctx->r4 = ctx->r4 & 0X3FF;
    // 0x8002F9FC: sll         $a0, $a0, 14
    ctx->r4 = S32(ctx->r4 << 14);
    // 0x8002FA00: nor         $v0, $zero, $v1
    ctx->r2 = ~(0 | ctx->r3);
    // 0x8002FA04: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8002FA08: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8002FA0C: andi        $v1, $v1, 0x3FF
    ctx->r3 = ctx->r3 & 0X3FF;
    // 0x8002FA10: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8002FA14: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x8002FA18: sw          $a0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r4;
L_8002FA1C:
    // 0x8002FA1C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002FA20: sb          $zero, -0x77B8($at)
    MEM_B(-0X77B8, ctx->r1) = 0;
    // 0x8002FA24: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x8002FA28: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x8002FA2C: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x8002FA30: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x8002FA34: jr          $ra
    // 0x8002FA38: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x8002FA38: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_80050578_2B978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80050578: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8005057C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80050580: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80050584: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80050588: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x8005058C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80050590: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80050594: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80050598: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8005059C: jal         0x800511C8
    // 0x800505A0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    func_800511C8_2C5C8(rdram, ctx);
        goto after_0;
    // 0x800505A0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x800505A4: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x800505A8: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x800505AC: lbu         $v1, 0xB61($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB61);
    // 0x800505B0: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x800505B4: addiu       $s0, $s0, 0x9A4
    ctx->r16 = ADD32(ctx->r16, 0X9A4);
    // 0x800505B8: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x800505BC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800505C0: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x800505C4: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x800505C8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x800505CC: sw          $v0, 0x9A8($at)
    MEM_W(0X9A8, ctx->r1) = ctx->r2;
    // 0x800505D0: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x800505D4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x800505D8: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x800505DC: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x800505E0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x800505E4: sw          $v0, 0x9AC($at)
    MEM_W(0X9AC, ctx->r1) = ctx->r2;
    // 0x800505E8: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x800505EC: lhu         $v1, 0x116($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X116);
    // 0x800505F0: addiu       $s0, $s0, -0x14
    ctx->r16 = ADD32(ctx->r16, -0X14);
    // 0x800505F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x800505F8: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    // 0x800505FC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80050600: jal         0x80031428
    // 0x80050604: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    func_80031428_C828(rdram, ctx);
        goto after_1;
    // 0x80050604: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    after_1:
    // 0x80050608: addiu       $a0, $s2, 0x1A8
    ctx->r4 = ADD32(ctx->r18, 0X1A8);
    // 0x8005060C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80050610: jal         0x8009A3B4
    // 0x80050614: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80050614: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_2:
    // 0x80050618: lui         $s5, 0x801C
    ctx->r21 = S32(0X801C << 16);
    // 0x8005061C: lw          $s5, -0x38A0($s5)
    ctx->r21 = MEM_W(ctx->r21, -0X38A0);
    // 0x80050620: jal         0x800511DC
    // 0x80050624: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800511DC_2C5DC(rdram, ctx);
        goto after_3;
    // 0x80050624: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80050628: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8005062C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80050630: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80050634: addiu       $s1, $s1, -0x3D98
    ctx->r17 = ADD32(ctx->r17, -0X3D98);
    // 0x80050638: addiu       $a2, $s1, 0x8
    ctx->r6 = ADD32(ctx->r17, 0X8);
    // 0x8005063C: jal         0x80050FFC
    // 0x80050640: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    func_80050FFC_2C3FC(rdram, ctx);
        goto after_4;
    // 0x80050640: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80050644: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80050648: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8005064C: addiu       $a2, $s1, 0x48
    ctx->r6 = ADD32(ctx->r17, 0X48);
    // 0x80050650: jal         0x80050FFC
    // 0x80050654: addiu       $a3, $s5, 0x40
    ctx->r7 = ADD32(ctx->r21, 0X40);
    func_80050FFC_2C3FC(rdram, ctx);
        goto after_5;
    // 0x80050654: addiu       $a3, $s5, 0x40
    ctx->r7 = ADD32(ctx->r21, 0X40);
    after_5:
    // 0x80050658: jal         0x800511DC
    // 0x8005065C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800511DC_2C5DC(rdram, ctx);
        goto after_6;
    // 0x8005065C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80050660: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80050664: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80050668: addiu       $a2, $s1, 0x50
    ctx->r6 = ADD32(ctx->r17, 0X50);
    // 0x8005066C: jal         0x80050FFC
    // 0x80050670: addiu       $a3, $s5, 0x48
    ctx->r7 = ADD32(ctx->r21, 0X48);
    func_80050FFC_2C3FC(rdram, ctx);
        goto after_7;
    // 0x80050670: addiu       $a3, $s5, 0x48
    ctx->r7 = ADD32(ctx->r21, 0X48);
    after_7:
    // 0x80050674: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80050678: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8005067C: addiu       $a2, $s1, 0x58
    ctx->r6 = ADD32(ctx->r17, 0X58);
    // 0x80050680: jal         0x80050FFC
    // 0x80050684: addiu       $a3, $s5, 0x50
    ctx->r7 = ADD32(ctx->r21, 0X50);
    func_80050FFC_2C3FC(rdram, ctx);
        goto after_8;
    // 0x80050684: addiu       $a3, $s5, 0x50
    ctx->r7 = ADD32(ctx->r21, 0X50);
    after_8:
    // 0x80050688: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8005068C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x80050690: addiu       $a2, $s1, 0x60
    ctx->r6 = ADD32(ctx->r17, 0X60);
    // 0x80050694: jal         0x80050FFC
    // 0x80050698: addiu       $a3, $s5, 0x58
    ctx->r7 = ADD32(ctx->r21, 0X58);
    func_80050FFC_2C3FC(rdram, ctx);
        goto after_9;
    // 0x80050698: addiu       $a3, $s5, 0x58
    ctx->r7 = ADD32(ctx->r21, 0X58);
    after_9:
    // 0x8005069C: jal         0x80051210
    // 0x800506A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051210_2C610(rdram, ctx);
        goto after_10;
    // 0x800506A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
    // 0x800506A4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x800506A8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x800506AC: addiu       $a2, $s1, 0x68
    ctx->r6 = ADD32(ctx->r17, 0X68);
    // 0x800506B0: jal         0x80050FFC
    // 0x800506B4: addiu       $a3, $s5, 0x60
    ctx->r7 = ADD32(ctx->r21, 0X60);
    func_80050FFC_2C3FC(rdram, ctx);
        goto after_11;
    // 0x800506B4: addiu       $a3, $s5, 0x60
    ctx->r7 = ADD32(ctx->r21, 0X60);
    after_11:
    // 0x800506B8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x800506BC: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x800506C0: addiu       $a2, $s1, 0x70
    ctx->r6 = ADD32(ctx->r17, 0X70);
    // 0x800506C4: jal         0x80050FFC
    // 0x800506C8: addiu       $a3, $s5, 0x68
    ctx->r7 = ADD32(ctx->r21, 0X68);
    func_80050FFC_2C3FC(rdram, ctx);
        goto after_12;
    // 0x800506C8: addiu       $a3, $s5, 0x68
    ctx->r7 = ADD32(ctx->r21, 0X68);
    after_12:
    // 0x800506CC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x800506D0: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x800506D4: addiu       $a2, $s1, 0x78
    ctx->r6 = ADD32(ctx->r17, 0X78);
    // 0x800506D8: jal         0x80050FFC
    // 0x800506DC: addiu       $a3, $s5, 0x70
    ctx->r7 = ADD32(ctx->r21, 0X70);
    func_80050FFC_2C3FC(rdram, ctx);
        goto after_13;
    // 0x800506DC: addiu       $a3, $s5, 0x70
    ctx->r7 = ADD32(ctx->r21, 0X70);
    after_13:
    // 0x800506E0: jal         0x80051210
    // 0x800506E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051210_2C610(rdram, ctx);
        goto after_14;
    // 0x800506E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_14:
    // 0x800506E8: lhu         $v1, 0x106($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X106);
    // 0x800506EC: lui         $s0, 0x801E
    ctx->r16 = S32(0X801E << 16);
    // 0x800506F0: addiu       $s0, $s0, -0x14E8
    ctx->r16 = ADD32(ctx->r16, -0X14E8);
    // 0x800506F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800506F8: beq         $v1, $v0, L_80050724
    if (ctx->r3 == ctx->r2) {
        // 0x800506FC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80050724;
    }
    // 0x800506FC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80050700: bne         $v0, $zero, L_80050744
    if (ctx->r2 != 0) {
        // 0x80050704: addu        $s4, $s1, $zero
        ctx->r20 = ADD32(ctx->r17, 0);
            goto L_80050744;
    }
    // 0x80050704: addu        $s4, $s1, $zero
    ctx->r20 = ADD32(ctx->r17, 0);
    // 0x80050708: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8005070C: beq         $v1, $v0, L_80050734
    if (ctx->r3 == ctx->r2) {
        // 0x80050710: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80050734;
    }
    // 0x80050710: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80050714: beql        $v1, $v0, L_80050744
    if (ctx->r3 == ctx->r2) {
        // 0x80050718: addu        $s4, $s0, $zero
        ctx->r20 = ADD32(ctx->r16, 0);
            goto L_80050744;
    }
    goto skip_0;
    // 0x80050718: addu        $s4, $s0, $zero
    ctx->r20 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x8005071C: j           L_80050748
    // 0x80050720: addu        $s3, $s4, $zero
    ctx->r19 = ADD32(ctx->r20, 0);
        goto L_80050748;
    // 0x80050720: addu        $s3, $s4, $zero
    ctx->r19 = ADD32(ctx->r20, 0);
L_80050724:
    // 0x80050724: addu        $s4, $s0, $zero
    ctx->r20 = ADD32(ctx->r16, 0);
    // 0x80050728: addu        $s3, $s4, $zero
    ctx->r19 = ADD32(ctx->r20, 0);
    // 0x8005072C: j           L_8005074C
    // 0x80050730: addu        $s6, $s1, $zero
    ctx->r22 = ADD32(ctx->r17, 0);
        goto L_8005074C;
    // 0x80050730: addu        $s6, $s1, $zero
    ctx->r22 = ADD32(ctx->r17, 0);
L_80050734:
    // 0x80050734: addu        $s3, $s0, $zero
    ctx->r19 = ADD32(ctx->r16, 0);
    // 0x80050738: addu        $s4, $s1, $zero
    ctx->r20 = ADD32(ctx->r17, 0);
    // 0x8005073C: j           L_8005074C
    // 0x80050740: addu        $s6, $s3, $zero
    ctx->r22 = ADD32(ctx->r19, 0);
        goto L_8005074C;
    // 0x80050740: addu        $s6, $s3, $zero
    ctx->r22 = ADD32(ctx->r19, 0);
L_80050744:
    // 0x80050744: addu        $s3, $s4, $zero
    ctx->r19 = ADD32(ctx->r20, 0);
L_80050748:
    // 0x80050748: addu        $s6, $s4, $zero
    ctx->r22 = ADD32(ctx->r20, 0);
L_8005074C:
    // 0x8005074C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80050750: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80050754: addiu       $a2, $s3, 0x8
    ctx->r6 = ADD32(ctx->r19, 0X8);
    // 0x80050758: jal         0x80050FFC
    // 0x8005075C: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    func_80050FFC_2C3FC(rdram, ctx);
        goto after_15;
    // 0x8005075C: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    after_15:
    // 0x80050760: lui         $s1, 0x8021
    ctx->r17 = S32(0X8021 << 16);
    // 0x80050764: addiu       $s1, $s1, 0x990
    ctx->r17 = ADD32(ctx->r17, 0X990);
    // 0x80050768: jal         0x800511DC
    // 0x8005076C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800511DC_2C5DC(rdram, ctx);
        goto after_16;
    // 0x8005076C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_16:
    // 0x80050770: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x80050774: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80050778: addiu       $a1, $s3, 0x10
    ctx->r5 = ADD32(ctx->r19, 0X10);
    // 0x8005077C: jal         0x8009A3B4
    // 0x80050780: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_17;
    // 0x80050780: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_17:
    // 0x80050784: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80050788: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005078C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80050790: lh          $t0, 0xB4($s2)
    ctx->r8 = MEM_H(ctx->r18, 0XB4);
    // 0x80050794: addiu       $a3, $s5, 0x8
    ctx->r7 = ADD32(ctx->r21, 0X8);
    // 0x80050798: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x8005079C: sll         $v0, $t0, 2
    ctx->r2 = S32(ctx->r8 << 2);
    // 0x800507A0: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x800507A4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800507A8: jal         0x80050FFC
    // 0x800507AC: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    func_80050FFC_2C3FC(rdram, ctx);
        goto after_18;
    // 0x800507AC: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    after_18:
    // 0x800507B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x800507B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x800507B8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x800507BC: addiu       $v0, $zero, -0x96
    ctx->r2 = ADD32(0, -0X96);
    // 0x800507C0: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x800507C4: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x800507C8: jal         0x800308E8
    // 0x800507CC: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    func_800308E8_BCE8(rdram, ctx);
        goto after_19;
    // 0x800507CC: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    after_19:
    // 0x800507D0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x800507D4: lw          $v0, 0x9A4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9A4);
    // 0x800507D8: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x800507DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800507E0: sh          $v0, 0x420($s2)
    MEM_H(0X420, ctx->r18) = ctx->r2;
    // 0x800507E4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x800507E8: lw          $v0, 0x9A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9A8);
    // 0x800507EC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800507F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800507F4: sh          $v0, 0x422($s2)
    MEM_H(0X422, ctx->r18) = ctx->r2;
    // 0x800507F8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x800507FC: lw          $v0, 0x9AC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9AC);
    // 0x80050800: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80050804: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80050808: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005080C: jal         0x80051210
    // 0x80050810: sh          $v0, 0x424($s2)
    MEM_H(0X424, ctx->r18) = ctx->r2;
    func_80051210_2C610(rdram, ctx);
        goto after_20;
    // 0x80050810: sh          $v0, 0x424($s2)
    MEM_H(0X424, ctx->r18) = ctx->r2;
    after_20:
    // 0x80050814: jal         0x800511DC
    // 0x80050818: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800511DC_2C5DC(rdram, ctx);
        goto after_21;
    // 0x80050818: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_21:
    // 0x8005081C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80050820: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80050824: addiu       $a2, $s4, 0x18
    ctx->r6 = ADD32(ctx->r20, 0X18);
    // 0x80050828: jal         0x80050FFC
    // 0x8005082C: addiu       $a3, $s5, 0x10
    ctx->r7 = ADD32(ctx->r21, 0X10);
    func_80050FFC_2C3FC(rdram, ctx);
        goto after_22;
    // 0x8005082C: addiu       $a3, $s5, 0x10
    ctx->r7 = ADD32(ctx->r21, 0X10);
    after_22:
    // 0x80050830: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80050834: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80050838: addiu       $a2, $s4, 0x20
    ctx->r6 = ADD32(ctx->r20, 0X20);
    // 0x8005083C: jal         0x80050FFC
    // 0x80050840: addiu       $a3, $s5, 0x18
    ctx->r7 = ADD32(ctx->r21, 0X18);
    func_80050FFC_2C3FC(rdram, ctx);
        goto after_23;
    // 0x80050840: addiu       $a3, $s5, 0x18
    ctx->r7 = ADD32(ctx->r21, 0X18);
    after_23:
    // 0x80050844: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80050848: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8005084C: addiu       $a2, $s4, 0x28
    ctx->r6 = ADD32(ctx->r20, 0X28);
    // 0x80050850: jal         0x80050FFC
    // 0x80050854: addiu       $a3, $s5, 0x20
    ctx->r7 = ADD32(ctx->r21, 0X20);
    func_80050FFC_2C3FC(rdram, ctx);
        goto after_24;
    // 0x80050854: addiu       $a3, $s5, 0x20
    ctx->r7 = ADD32(ctx->r21, 0X20);
    after_24:
    // 0x80050858: jal         0x80051210
    // 0x8005085C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80051210_2C610(rdram, ctx);
        goto after_25;
    // 0x8005085C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_25:
    // 0x80050860: jal         0x800511DC
    // 0x80050864: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800511DC_2C5DC(rdram, ctx);
        goto after_26;
    // 0x80050864: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_26:
    // 0x80050868: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8005086C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80050870: addiu       $a2, $s6, 0x30
    ctx->r6 = ADD32(ctx->r22, 0X30);
    // 0x80050874: jal         0x80050FFC
    // 0x80050878: addiu       $a3, $s5, 0x28
    ctx->r7 = ADD32(ctx->r21, 0X28);
    func_80050FFC_2C3FC(rdram, ctx);
        goto after_27;
    // 0x80050878: addiu       $a3, $s5, 0x28
    ctx->r7 = ADD32(ctx->r21, 0X28);
    after_27:
    // 0x8005087C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80050880: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80050884: addiu       $a2, $s6, 0x38
    ctx->r6 = ADD32(ctx->r22, 0X38);
    // 0x80050888: jal         0x80050FFC
    // 0x8005088C: addiu       $a3, $s5, 0x30
    ctx->r7 = ADD32(ctx->r21, 0X30);
    func_80050FFC_2C3FC(rdram, ctx);
        goto after_28;
    // 0x8005088C: addiu       $a3, $s5, 0x30
    ctx->r7 = ADD32(ctx->r21, 0X30);
    after_28:
    // 0x80050890: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80050894: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80050898: addiu       $a2, $s6, 0x40
    ctx->r6 = ADD32(ctx->r22, 0X40);
    // 0x8005089C: jal         0x80050FFC
    // 0x800508A0: addiu       $a3, $s5, 0x38
    ctx->r7 = ADD32(ctx->r21, 0X38);
    func_80050FFC_2C3FC(rdram, ctx);
        goto after_29;
    // 0x800508A0: addiu       $a3, $s5, 0x38
    ctx->r7 = ADD32(ctx->r21, 0X38);
    after_29:
    // 0x800508A4: jal         0x80051210
    // 0x800508A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80051210_2C610(rdram, ctx);
        goto after_30;
    // 0x800508A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_30:
    // 0x800508AC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x800508B0: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x800508B4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x800508B8: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x800508BC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x800508C0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x800508C4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x800508C8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800508CC: jr          $ra
    // 0x800508D0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x800508D0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800305D0_B9D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800305D0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x800305D4: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x800305D8: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x800305DC: jr          $ra
    // 0x800305E0: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x800305E0: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80062614_3DA14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80062614: jr          $ra
    // 0x80062618: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    TRACE_RETURN()
    return;
    // 0x80062618: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_8002FDA0_B1A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002FDA0: jr          $ra
    // 0x8002FDA4: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    TRACE_RETURN()
    return;
    // 0x8002FDA4: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_80061404_3C804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80061404: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80061408: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8006140C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80061410: jal         0x8002C6F0
    // 0x80061414: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8002C6F0_7AF0(rdram, ctx);
        goto after_0;
    // 0x80061414: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80061418: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8006141C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80061420: addiu       $a1, $a1, 0x4B10
    ctx->r5 = ADD32(ctx->r5, 0X4B10);
    // 0x80061424: addiu       $s1, $zero, 0x3C0
    ctx->r17 = ADD32(0, 0X3C0);
    // 0x80061428: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8006142C: addiu       $s0, $zero, 0x40
    ctx->r16 = ADD32(0, 0X40);
    // 0x80061430: sh          $s1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r17;
    // 0x80061434: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80061438: sh          $s0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r16;
    // 0x8006143C: jal         0x8002FDC0
    // 0x80061440: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    func_8002FDC0_B1C0(rdram, ctx);
        goto after_1;
    // 0x80061440: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    after_1:
    // 0x80061444: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80061448: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8006144C: addiu       $a1, $a1, 0x4910
    ctx->r5 = ADD32(ctx->r5, 0X4910);
    // 0x80061450: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80061454: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80061458: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8006145C: sh          $s1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r17;
    // 0x80061460: sh          $s0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r16;
    // 0x80061464: jal         0x8002FDC0
    // 0x80061468: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    func_8002FDC0_B1C0(rdram, ctx);
        goto after_2;
    // 0x80061468: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    after_2:
    // 0x8006146C: jal         0x80036954
    // 0x80061470: nop

    func_80036954_11D54(rdram, ctx);
        goto after_3;
    // 0x80061470: nop

    after_3:
    // 0x80061474: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80061478: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x8006147C: addiu       $a1, $a1, -0x7790
    ctx->r5 = ADD32(ctx->r5, -0X7790);
    // 0x80061480: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
L_80061484:
    // 0x80061484: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80061488: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8006148C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80061490: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80061494: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80061498: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8006149C: addu        $v0, $v1, $a1
    ctx->r2 = ADD32(ctx->r3, ctx->r5);
    // 0x800614A0: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800614A4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x800614A8: sw          $zero, -0x7790($at)
    MEM_W(-0X7790, ctx->r1) = 0;
    // 0x800614AC: sw          $zero, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = 0;
    // 0x800614B0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x800614B4: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800614B8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x800614BC: sh          $a0, -0x778A($at)
    MEM_H(-0X778A, ctx->r1) = ctx->r4;
    // 0x800614C0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x800614C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800614C8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800614CC: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x800614D0: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800614D4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x800614D8: sw          $zero, -0x7748($at)
    MEM_W(-0X7748, ctx->r1) = 0;
    // 0x800614DC: bnel        $v0, $zero, L_80061484
    if (ctx->r2 != 0) {
        // 0x800614E0: sll         $v0, $a0, 16
        ctx->r2 = S32(ctx->r4 << 16);
            goto L_80061484;
    }
    goto skip_0;
    // 0x800614E0: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    skip_0:
    // 0x800614E4: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800614E8: sw          $zero, -0x72F0($at)
    MEM_W(-0X72F0, ctx->r1) = 0;
    // 0x800614EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800614F0: sw          $zero, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = 0;
    // 0x800614F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800614F8: sw          $zero, -0xC78($at)
    MEM_W(-0XC78, ctx->r1) = 0;
    // 0x800614FC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80061500: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80061504: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80061508: jr          $ra
    // 0x8006150C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8006150C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8008D8F4_68CF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D8F4: lbu         $a2, 0x0($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D8F8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D8FC: lbu         $t1, 0x0($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D900: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D904: lbu         $a3, 0x0($a1)
    ctx->r7 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D908: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D90C: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D910: lw          $v0, 0x8C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8C);
    // 0x8008D914: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D918: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8008D91C: sh          $t0, 0xA2($a0)
    MEM_H(0XA2, ctx->r4) = ctx->r8;
    // 0x8008D920: sll         $a3, $a3, 8
    ctx->r7 = S32(ctx->r7 << 8);
    // 0x8008D924: addu        $a3, $a3, $v1
    ctx->r7 = ADD32(ctx->r7, ctx->r3);
    // 0x8008D928: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x8008D92C: sw          $v0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r2;
    // 0x8008D930: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D934: lbu         $a1, 0x1($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1);
    // 0x8008D938: lw          $v1, 0x88($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X88);
    // 0x8008D93C: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x8008D940: addu        $a2, $a2, $t1
    ctx->r6 = ADD32(ctx->r6, ctx->r9);
    // 0x8008D944: sh          $t0, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r8;
    // 0x8008D948: sll         $a3, $v0, 8
    ctx->r7 = S32(ctx->r2 << 8);
    // 0x8008D94C: lw          $v0, 0x80($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X80);
    // 0x8008D950: addu        $a3, $a3, $a1
    ctx->r7 = ADD32(ctx->r7, ctx->r5);
    // 0x8008D954: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x8008D958: sw          $v1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r3;
    // 0x8008D95C: jr          $ra
    // 0x8008D960: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    TRACE_RETURN()
    return;
    // 0x8008D960: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
;}
RECOMP_FUNC void func_80091D54_6D154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80091D54: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80091D58: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x80091D5C: mtc1        $a0, $f0
    ctx->f0.u32l = ctx->r4;
    // 0x80091D60: nop

    // 0x80091D64: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x80091D68: lwc1        $f2, 0x40($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X40);
    // 0x80091D6C: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x80091D70: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80091D74: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80091D78: ldc1        $f2, 0x2EF0($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X2EF0);
    // 0x80091D7C: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x80091D80: div.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = DIV_D(ctx->f0.d, ctx->f2.d);
    // 0x80091D84: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80091D88: ldc1        $f2, 0x2EF8($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X2EF8);
    // 0x80091D8C: add.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
    // 0x80091D90: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x80091D94: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80091D98: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x80091D9C: jr          $ra
    // 0x80091DA0: nop

    TRACE_RETURN()
    return;
    // 0x80091DA0: nop

;}
RECOMP_FUNC void func_8008ACB4_660B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008ACB4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008ACB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8008ACBC: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008ACC0: lw          $v1, 0x4F84($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4F84);
    // 0x8008ACC4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008ACC8: lw          $v0, 0x4F8C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F8C);
    // 0x8008ACCC: blez        $v1, L_8008AD28
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8008ACD0: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8008AD28;
    }
    // 0x8008ACD0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008ACD4: andi        $t0, $a0, 0x1
    ctx->r8 = ctx->r4 & 0X1;
    // 0x8008ACD8: andi        $a0, $a0, 0x2
    ctx->r4 = ctx->r4 & 0X2;
    // 0x8008ACDC: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x8008ACE0: addiu       $v1, $v0, 0x78
    ctx->r3 = ADD32(ctx->r2, 0X78);
L_8008ACE4:
    // 0x8008ACE4: lw          $v0, -0x74($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X74);
    // 0x8008ACE8: beql        $v0, $zero, L_8008AD1C
    if (ctx->r2 == 0) {
        // 0x8008ACEC: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_8008AD1C;
    }
    goto skip_0;
    // 0x8008ACEC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_0:
    // 0x8008ACF0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8008ACF4: beq         $v0, $zero, L_8008AD0C
    if (ctx->r2 == 0) {
        // 0x8008ACF8: nop
    
            goto L_8008AD0C;
    }
    // 0x8008ACF8: nop

    // 0x8008ACFC: bnel        $t0, $zero, L_8008AD18
    if (ctx->r8 != 0) {
        // 0x8008AD00: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_8008AD18;
    }
    goto skip_1;
    // 0x8008AD00: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_1:
    // 0x8008AD04: j           L_8008AD1C
    // 0x8008AD08: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
        goto L_8008AD1C;
    // 0x8008AD08: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_8008AD0C:
    // 0x8008AD0C: beql        $a0, $zero, L_8008AD1C
    if (ctx->r4 == 0) {
        // 0x8008AD10: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_8008AD1C;
    }
    goto skip_2;
    // 0x8008AD10: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_2:
    // 0x8008AD14: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_8008AD18:
    // 0x8008AD18: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_8008AD1C:
    // 0x8008AD1C: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8008AD20: bne         $v0, $zero, L_8008ACE4
    if (ctx->r2 != 0) {
        // 0x8008AD24: addiu       $v1, $v1, 0x13C
        ctx->r3 = ADD32(ctx->r3, 0X13C);
            goto L_8008ACE4;
    }
    // 0x8008AD24: addiu       $v1, $v1, 0x13C
    ctx->r3 = ADD32(ctx->r3, 0X13C);
L_8008AD28:
    // 0x8008AD28: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x8008AD2C: jr          $ra
    // 0x8008AD30: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8008AD30: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800755D4_509D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800755D4: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x800755D8: lhu         $v1, -0x783A($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X783A);
    // 0x800755DC: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x800755E0: lhu         $a1, -0x783E($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X783E);
    // 0x800755E4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800755E8: lb          $v0, -0x43C($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X43C);
    // 0x800755EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800755F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800755F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800755F8: sh          $a0, -0x43E($at)
    MEM_H(-0X43E, ctx->r1) = ctx->r4;
    // 0x800755FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80075600: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80075604: sh          $v1, -0x436($at)
    MEM_H(-0X436, ctx->r1) = ctx->r3;
    // 0x80075608: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8007560C: sh          $a1, -0x438($at)
    MEM_H(-0X438, ctx->r1) = ctx->r5;
    // 0x80075610: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80075614: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80075618: lw          $v0, 0x48E4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X48E4);
    // 0x8007561C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80075620: jalr        $v0
    // 0x80075624: addiu       $a0, $a0, -0x440
    ctx->r4 = ADD32(ctx->r4, -0X440);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80075624: addiu       $a0, $a0, -0x440
    ctx->r4 = ADD32(ctx->r4, -0X440);
    after_0:
    // 0x80075628: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8007562C: jr          $ra
    // 0x80075630: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80075630: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008FF1C_6B31C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008FF1C: sra         $a1, $a1, 3
    ctx->r5 = S32(SIGNED(ctx->r5) >> 3);
    // 0x8008FF20: beq         $a1, $zero, L_8008FF58
    if (ctx->r5 == 0) {
        // 0x8008FF24: sll         $v1, $a2, 16
        ctx->r3 = S32(ctx->r6 << 16);
            goto L_8008FF58;
    }
    // 0x8008FF24: sll         $v1, $a2, 16
    ctx->r3 = S32(ctx->r6 << 16);
    // 0x8008FF28: andi        $v0, $a3, 0xFFFF
    ctx->r2 = ctx->r7 & 0XFFFF;
    // 0x8008FF2C: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008FF30: mflo        $v0
    ctx->r2 = lo;
    // 0x8008FF34: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8008FF38: nop

    // 0x8008FF3C: mult        $v1, $a1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008FF40: mflo        $v1
    ctx->r3 = lo;
    // 0x8008FF44: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8008FF48: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8008FF4C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x8008FF50: j           L_8008FF5C
    // 0x8008FF54: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
        goto L_8008FF5C;
    // 0x8008FF54: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
L_8008FF58:
    // 0x8008FF58: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
L_8008FF5C:
    // 0x8008FF5C: jr          $ra
    // 0x8008FF60: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    TRACE_RETURN()
    return;
    // 0x8008FF60: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8008FF64: nop

    // 0x8008FF68: nop

    // 0x8008FF6C: nop

;}
RECOMP_FUNC void func_80055630_30A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80055630: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80055634: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80055638: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8005563C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80055640: lb          $v0, 0x78($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X78);
    // 0x80055644: beq         $v0, $zero, L_800557C0
    if (ctx->r2 == 0) {
        // 0x80055648: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800557C0;
    }
    // 0x80055648: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8005564C: lbu         $v0, 0x50($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X50);
    // 0x80055650: addiu       $v0, $v0, -0x3
    ctx->r2 = ADD32(ctx->r2, -0X3);
    // 0x80055654: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80055658: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8005565C: sltiu       $v0, $v1, 0x19
    ctx->r2 = ctx->r3 < 0X19 ? 1 : 0;
    // 0x80055660: beq         $v0, $zero, L_800557B4
    if (ctx->r2 == 0) {
        // 0x80055664: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_800557B4;
    }
    // 0x80055664: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80055668: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005566C: addu        $at, $at, $v0
    gpr jr_addend_80055674 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80055670: lw          $v0, 0x2440($at)
    ctx->r2 = ADD32(ctx->r1, 0X2440);
    // 0x80055674: jr          $v0
    // 0x80055678: nop

    switch (jr_addend_80055674 >> 2) {
        case 0: goto L_8005567C; break;
        case 1: goto L_800557B4; break;
        case 2: goto L_800556C4; break;
        case 3: goto L_800556C4; break;
        case 4: goto L_800557B4; break;
        case 5: goto L_800556E8; break;
        case 6: goto L_800557B4; break;
        case 7: goto L_800557B4; break;
        case 8: goto L_800557B4; break;
        case 9: goto L_8005571C; break;
        case 10: goto L_800557B4; break;
        case 11: goto L_800557B4; break;
        case 12: goto L_80055744; break;
        case 13: goto L_800557B4; break;
        case 14: goto L_800557B4; break;
        case 15: goto L_8005575C; break;
        case 16: goto L_800557B4; break;
        case 17: goto L_800557B4; break;
        case 18: goto L_800557B4; break;
        case 19: goto L_800557B4; break;
        case 20: goto L_800557B4; break;
        case 21: goto L_800557B4; break;
        case 22: goto L_8005577C; break;
        case 23: goto L_800557B4; break;
        case 24: goto L_8005567C; break;
        default: switch_error(__func__, 0x80055674, 0x800D2440);
    }
    // 0x80055678: nop

L_8005567C:
    // 0x8005567C: jal         0x8006033C
    // 0x80055680: addiu       $a0, $zero, 0x318
    ctx->r4 = ADD32(0, 0X318);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80055680: addiu       $a0, $zero, 0x318
    ctx->r4 = ADD32(0, 0X318);
    after_0:
    // 0x80055684: beq         $v0, $zero, L_800557C0
    if (ctx->r2 == 0) {
        // 0x80055688: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800557C0;
    }
    // 0x80055688: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8005568C: lb          $v0, 0x51($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X51);
    // 0x80055690: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80055694: beq         $v0, $zero, L_800557C0
    if (ctx->r2 == 0) {
        // 0x80055698: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800557C0;
    }
    // 0x80055698: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8005569C: jal         0x8006033C
    // 0x800556A0: addiu       $a0, $zero, 0x55
    ctx->r4 = ADD32(0, 0X55);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x800556A0: addiu       $a0, $zero, 0x55
    ctx->r4 = ADD32(0, 0X55);
    after_1:
    // 0x800556A4: beql        $v0, $zero, L_800556B0
    if (ctx->r2 == 0) {
        // 0x800556A8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_800556B0;
    }
    goto skip_0;
    // 0x800556A8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_0:
    // 0x800556AC: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
L_800556B0:
    // 0x800556B0: sb          $v0, 0x79($s0)
    MEM_B(0X79, ctx->r16) = ctx->r2;
    // 0x800556B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800556B8: sb          $v0, 0x7A($s0)
    MEM_B(0X7A, ctx->r16) = ctx->r2;
    // 0x800556BC: j           L_800557C0
    // 0x800556C0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_800557C0;
    // 0x800556C0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800556C4:
    // 0x800556C4: lb          $a0, 0x50($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X50);
    // 0x800556C8: jal         0x8006033C
    // 0x800556CC: addiu       $a0, $a0, 0x314
    ctx->r4 = ADD32(ctx->r4, 0X314);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x800556CC: addiu       $a0, $a0, 0x314
    ctx->r4 = ADD32(ctx->r4, 0X314);
    after_2:
    // 0x800556D0: beq         $v0, $zero, L_800557BC
    if (ctx->r2 == 0) {
        // 0x800556D4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_800557BC;
    }
    // 0x800556D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800556D8: lbu         $v1, 0x50($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X50);
    // 0x800556DC: sb          $zero, 0x7A($s0)
    MEM_B(0X7A, ctx->r16) = 0;
    // 0x800556E0: j           L_800557C0
    // 0x800556E4: sb          $v1, 0x79($s0)
    MEM_B(0X79, ctx->r16) = ctx->r3;
        goto L_800557C0;
    // 0x800556E4: sb          $v1, 0x79($s0)
    MEM_B(0X79, ctx->r16) = ctx->r3;
L_800556E8:
    // 0x800556E8: jal         0x8006033C
    // 0x800556EC: addiu       $a0, $zero, 0x31B
    ctx->r4 = ADD32(0, 0X31B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x800556EC: addiu       $a0, $zero, 0x31B
    ctx->r4 = ADD32(0, 0X31B);
    after_3:
    // 0x800556F0: beq         $v0, $zero, L_800557C0
    if (ctx->r2 == 0) {
        // 0x800556F4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800557C0;
    }
    // 0x800556F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800556F8: lb          $v0, 0x51($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X51);
    // 0x800556FC: slti        $v1, $v0, 0x3
    ctx->r3 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80055700: xori        $v0, $v0, 0x5
    ctx->r2 = ctx->r2 ^ 0X5;
    // 0x80055704: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80055708: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8005570C: beq         $v1, $zero, L_800557BC
    if (ctx->r3 == 0) {
        // 0x80055710: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_800557BC;
    }
    // 0x80055710: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80055714: j           L_80055770
    // 0x80055718: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
        goto L_80055770;
    // 0x80055718: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
L_8005571C:
    // 0x8005571C: jal         0x8006033C
    // 0x80055720: addiu       $a0, $zero, 0x31C
    ctx->r4 = ADD32(0, 0X31C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80055720: addiu       $a0, $zero, 0x31C
    ctx->r4 = ADD32(0, 0X31C);
    after_4:
    // 0x80055724: beq         $v0, $zero, L_800557C0
    if (ctx->r2 == 0) {
        // 0x80055728: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800557C0;
    }
    // 0x80055728: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8005572C: lb          $v0, 0x51($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X51);
    // 0x80055730: bne         $v0, $zero, L_800557C0
    if (ctx->r2 != 0) {
        // 0x80055734: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800557C0;
    }
    // 0x80055734: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80055738: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8005573C: j           L_80055770
    // 0x80055740: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
        goto L_80055770;
    // 0x80055740: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
L_80055744:
    // 0x80055744: jal         0x8006033C
    // 0x80055748: addiu       $a0, $zero, 0x31A
    ctx->r4 = ADD32(0, 0X31A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80055748: addiu       $a0, $zero, 0x31A
    ctx->r4 = ADD32(0, 0X31A);
    after_5:
    // 0x8005574C: beq         $v0, $zero, L_800557BC
    if (ctx->r2 == 0) {
        // 0x80055750: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_800557BC;
    }
    // 0x80055750: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80055754: j           L_80055770
    // 0x80055758: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
        goto L_80055770;
    // 0x80055758: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
L_8005575C:
    // 0x8005575C: jal         0x8006033C
    // 0x80055760: addiu       $a0, $zero, 0x31F
    ctx->r4 = ADD32(0, 0X31F);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80055760: addiu       $a0, $zero, 0x31F
    ctx->r4 = ADD32(0, 0X31F);
    after_6:
    // 0x80055764: beq         $v0, $zero, L_800557BC
    if (ctx->r2 == 0) {
        // 0x80055768: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_800557BC;
    }
    // 0x80055768: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8005576C: addiu       $v1, $zero, 0x12
    ctx->r3 = ADD32(0, 0X12);
L_80055770:
    // 0x80055770: sb          $v1, 0x79($s0)
    MEM_B(0X79, ctx->r16) = ctx->r3;
    // 0x80055774: j           L_800557C0
    // 0x80055778: sb          $zero, 0x7A($s0)
    MEM_B(0X7A, ctx->r16) = 0;
        goto L_800557C0;
    // 0x80055778: sb          $zero, 0x7A($s0)
    MEM_B(0X7A, ctx->r16) = 0;
L_8005577C:
    // 0x8005577C: jal         0x8006033C
    // 0x80055780: addiu       $a0, $zero, 0x31D
    ctx->r4 = ADD32(0, 0X31D);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x80055780: addiu       $a0, $zero, 0x31D
    ctx->r4 = ADD32(0, 0X31D);
    after_7:
    // 0x80055784: beq         $v0, $zero, L_800557C0
    if (ctx->r2 == 0) {
        // 0x80055788: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800557C0;
    }
    // 0x80055788: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8005578C: lb          $v0, 0x51($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X51);
    // 0x80055790: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80055794: bne         $v0, $zero, L_800557C0
    if (ctx->r2 != 0) {
        // 0x80055798: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800557C0;
    }
    // 0x80055798: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8005579C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800557A0: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
    // 0x800557A4: sb          $v1, 0x79($s0)
    MEM_B(0X79, ctx->r16) = ctx->r3;
    // 0x800557A8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x800557AC: j           L_800557C0
    // 0x800557B0: sb          $v1, 0x7A($s0)
    MEM_B(0X7A, ctx->r16) = ctx->r3;
        goto L_800557C0;
    // 0x800557B0: sb          $v1, 0x7A($s0)
    MEM_B(0X7A, ctx->r16) = ctx->r3;
L_800557B4:
    // 0x800557B4: j           L_800557C0
    // 0x800557B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800557C0;
    // 0x800557B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800557BC:
    // 0x800557BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800557C0:
    // 0x800557C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800557C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800557C8: jr          $ra
    // 0x800557CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800557CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800785A4_539A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800785A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800785A8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x800785AC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800785B0: lw          $v1, 0x40($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X40);
    // 0x800785B4: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x800785B8: bne         $v1, $v0, L_800785D0
    if (ctx->r3 != ctx->r2) {
        // 0x800785BC: addiu       $v0, $zero, 0xA0
        ctx->r2 = ADD32(0, 0XA0);
            goto L_800785D0;
    }
    // 0x800785BC: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x800785C0: jal         0x8004F5C4
    // 0x800785C4: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x800785C4: nop

    after_0:
    // 0x800785C8: j           L_80078654
    // 0x800785CC: nop

        goto L_80078654;
    // 0x800785CC: nop

L_800785D0:
    // 0x800785D0: lbu         $v1, 0x8($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X8);
    // 0x800785D4: lhu         $a0, 0x24($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X24);
    // 0x800785D8: sb          $v0, 0x22($a1)
    MEM_B(0X22, ctx->r5) = ctx->r2;
    // 0x800785DC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x800785E0: sb          $v0, 0x23($a1)
    MEM_B(0X23, ctx->r5) = ctx->r2;
    // 0x800785E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800785E8: sltiu       $a0, $a0, 0x40
    ctx->r4 = ctx->r4 < 0X40 ? 1 : 0;
    // 0x800785EC: bne         $a0, $zero, L_80078648
    if (ctx->r4 != 0) {
        // 0x800785F0: sb          $v1, 0x8($a1)
        MEM_B(0X8, ctx->r5) = ctx->r3;
            goto L_80078648;
    }
    // 0x800785F0: sb          $v1, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r3;
    // 0x800785F4: lh          $v1, 0x30($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X30);
    // 0x800785F8: bltzl       $v1, L_80078600
    if (SIGNED(ctx->r3) < 0) {
        // 0x800785FC: addiu       $v1, $v1, 0xFF
        ctx->r3 = ADD32(ctx->r3, 0XFF);
            goto L_80078600;
    }
    goto skip_0;
    // 0x800785FC: addiu       $v1, $v1, 0xFF
    ctx->r3 = ADD32(ctx->r3, 0XFF);
    skip_0:
L_80078600:
    // 0x80078600: lhu         $v0, 0x1C($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X1C);
    // 0x80078604: lh          $a2, 0x32($a1)
    ctx->r6 = MEM_H(ctx->r5, 0X32);
    // 0x80078608: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x8007860C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80078610: bgez        $a2, L_8007861C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80078614: sh          $v0, 0x1C($a1)
        MEM_H(0X1C, ctx->r5) = ctx->r2;
            goto L_8007861C;
    }
    // 0x80078614: sh          $v0, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r2;
    // 0x80078618: addiu       $a2, $a2, 0xFF
    ctx->r6 = ADD32(ctx->r6, 0XFF);
L_8007861C:
    // 0x8007861C: lhu         $v0, 0x1E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X1E);
    // 0x80078620: lh          $a0, 0x34($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X34);
    // 0x80078624: sra         $v1, $a2, 8
    ctx->r3 = S32(SIGNED(ctx->r6) >> 8);
    // 0x80078628: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8007862C: bgez        $a0, L_80078638
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80078630: sh          $v0, 0x1E($a1)
        MEM_H(0X1E, ctx->r5) = ctx->r2;
            goto L_80078638;
    }
    // 0x80078630: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x80078634: addiu       $a0, $a0, 0xFF
    ctx->r4 = ADD32(ctx->r4, 0XFF);
L_80078638:
    // 0x80078638: lhu         $v0, 0x20($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X20);
    // 0x8007863C: sra         $v1, $a0, 8
    ctx->r3 = S32(SIGNED(ctx->r4) >> 8);
    // 0x80078640: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80078644: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
L_80078648:
    // 0x80078648: lhu         $v0, 0x24($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X24);
    // 0x8007864C: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80078650: sh          $v0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r2;
L_80078654:
    // 0x80078654: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80078658: jr          $ra
    // 0x8007865C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8007865C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80029F00_5300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80029F00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80029F04: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80029F08: jal         0x8006033C
    // 0x80029F0C: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80029F0C: nop

    after_0:
    // 0x80029F10: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80029F14: jr          $ra
    // 0x80029F18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80029F18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800637AC_3EBAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800637AC: lw          $a1, 0x6C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X6C);
    // 0x800637B0: lbu         $v0, 0x1($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X1);
    // 0x800637B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800637B8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800637BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800637C0: lw          $v1, 0x2E6C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2E6C);
    // 0x800637C4: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x800637C8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x800637CC: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x800637D0: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x800637D4: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
    // 0x800637D8: jr          $ra
    // 0x800637DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x800637DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8008B30C_6670C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B30C: jr          $ra
    // 0x8008B310: sw          $a1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8008B310: sw          $a1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_800934E0_6E8E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800934E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800934E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800934E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800934EC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x800934F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800934F4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x800934F8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800934FC: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80093500: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80093504: beq         $v1, $v0, L_800936B0
    if (ctx->r3 == ctx->r2) {
        // 0x80093508: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_800936B0;
    }
    // 0x80093508: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8009350C: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x80093510: beq         $v0, $zero, L_80093528
    if (ctx->r2 == 0) {
        // 0x80093514: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80093528;
    }
    // 0x80093514: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80093518: beq         $v1, $v0, L_80093544
    if (ctx->r3 == ctx->r2) {
        // 0x8009351C: addu        $v0, $s1, $zero
        ctx->r2 = ADD32(ctx->r17, 0);
            goto L_80093544;
    }
    // 0x8009351C: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x80093520: j           L_800936B4
    // 0x80093524: nop

        goto L_800936B4;
    // 0x80093524: nop

L_80093528:
    // 0x80093528: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8009352C: beq         $v1, $v0, L_80093590
    if (ctx->r3 == ctx->r2) {
        // 0x80093530: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80093590;
    }
    // 0x80093530: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80093534: beq         $v1, $v0, L_8009365C
    if (ctx->r3 == ctx->r2) {
        // 0x80093538: sll         $v0, $a2, 1
        ctx->r2 = S32(ctx->r6 << 1);
            goto L_8009365C;
    }
    // 0x80093538: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x8009353C: j           L_800936B4
    // 0x80093540: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
        goto L_800936B4;
    // 0x80093540: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_80093544:
    // 0x80093544: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80093548: beq         $v0, $zero, L_8009357C
    if (ctx->r2 == 0) {
        // 0x8009354C: sll         $a0, $a2, 1
        ctx->r4 = S32(ctx->r6 << 1);
            goto L_8009357C;
    }
    // 0x8009354C: sll         $a0, $a2, 1
    ctx->r4 = S32(ctx->r6 << 1);
    // 0x80093550: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x80093554: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80093558: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x8009355C: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x80093560: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80093564: addiu       $v0, $v0, 0x5750
    ctx->r2 = ADD32(ctx->r2, 0X5750);
    // 0x80093568: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8009356C: jal         0x8009CD80
    // 0x80093570: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    __osMotorAccess_recomp(rdram, ctx);
        goto after_0;
    // 0x80093570: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80093574: j           L_80093584
    // 0x80093578: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
        goto L_80093584;
    // 0x80093578: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_8009357C:
    // 0x8009357C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80093580: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80093584:
    // 0x80093584: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80093588: j           L_800936AC
    // 0x8009358C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        goto L_800936AC;
    // 0x8009358C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_80093590:
    // 0x80093590: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x80093594: beq         $v0, $zero, L_80093614
    if (ctx->r2 == 0) {
        // 0x80093598: sll         $a0, $a2, 1
        ctx->r4 = S32(ctx->r6 << 1);
            goto L_80093614;
    }
    // 0x80093598: sll         $a0, $a2, 1
    ctx->r4 = S32(ctx->r6 << 1);
    // 0x8009359C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x800935A0: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x800935A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800935A8: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x800935AC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x800935B0: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x800935B4: beq         $v0, $zero, L_800935E4
    if (ctx->r2 == 0) {
        // 0x800935B8: sh          $v1, 0x4($s0)
        MEM_H(0X4, ctx->r16) = ctx->r3;
            goto L_800935E4;
    }
    // 0x800935B8: sh          $v1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r3;
    // 0x800935BC: sll         $a0, $a2, 1
    ctx->r4 = S32(ctx->r6 << 1);
    // 0x800935C0: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x800935C4: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x800935C8: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x800935CC: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x800935D0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x800935D4: addiu       $v0, $v0, 0x5750
    ctx->r2 = ADD32(ctx->r2, 0X5750);
    // 0x800935D8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x800935DC: j           L_80093604
    // 0x800935E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80093604;
    // 0x800935E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_800935E4:
    // 0x800935E4: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x800935E8: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x800935EC: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x800935F0: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x800935F4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x800935F8: addiu       $v0, $v0, 0x5750
    ctx->r2 = ADD32(ctx->r2, 0X5750);
    // 0x800935FC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80093600: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_80093604:
    // 0x80093604: jal         0x8009CD80
    // 0x80093608: nop

    __osMotorAccess_recomp(rdram, ctx);
        goto after_1;
    // 0x80093608: nop

    after_1:
    // 0x8009360C: j           L_8009364C
    // 0x80093610: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
        goto L_8009364C;
    // 0x80093610: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_80093614:
    // 0x80093614: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x80093618: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8009361C: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x80093620: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x80093624: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80093628: addiu       $v0, $v0, 0x5750
    ctx->r2 = ADD32(ctx->r2, 0X5750);
    // 0x8009362C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80093630: jal         0x8009CD80
    // 0x80093634: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    __osMotorAccess_recomp(rdram, ctx);
        goto after_2;
    // 0x80093634: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x80093638: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8009363C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80093640: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x80093644: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80093648: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8009364C:
    // 0x8009364C: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x80093650: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80093654: j           L_800936B0
    // 0x80093658: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
        goto L_800936B0;
    // 0x80093658: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
L_8009365C:
    // 0x8009365C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80093660: addiu       $a0, $a0, 0x58F8
    ctx->r4 = ADD32(ctx->r4, 0X58F8);
    // 0x80093664: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80093668: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8009366C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80093670: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80093674: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80093678: addiu       $v1, $v1, 0x5750
    ctx->r3 = ADD32(ctx->r3, 0X5750);
    // 0x8009367C: addu        $s2, $v0, $v1
    ctx->r18 = ADD32(ctx->r2, ctx->r3);
    // 0x80093680: jal         0x8009CEC4
    // 0x80093684: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    osMotorInit_recomp(rdram, ctx);
        goto after_3;
    // 0x80093684: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
    // 0x80093688: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8009368C: bne         $s1, $zero, L_800936A4
    if (ctx->r17 != 0) {
        // 0x80093690: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800936A4;
    }
    // 0x80093690: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80093694: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80093698: jal         0x8009CD80
    // 0x8009369C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    __osMotorAccess_recomp(rdram, ctx);
        goto after_4;
    // 0x8009369C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x800936A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800936A4:
    // 0x800936A4: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x800936A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800936AC:
    // 0x800936AC: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_800936B0:
    // 0x800936B0: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_800936B4:
    // 0x800936B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800936B8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x800936BC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800936C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800936C4: jr          $ra
    // 0x800936C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800936C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80028CFC_40FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80028CFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80028D00: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80028D04: jal         0x80026914
    // 0x80028D08: nop

    func_80026914_1D14(rdram, ctx);
        goto after_0;
    // 0x80028D08: nop

    after_0:
    // 0x80028D0C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80028D10: bne         $v0, $zero, L_80028D20
    if (ctx->r2 != 0) {
        // 0x80028D14: nop
    
            goto L_80028D20;
    }
    // 0x80028D14: nop

    // 0x80028D18: jal         0x80026838
    // 0x80028D1C: nop

    func_80026838_1C38(rdram, ctx);
        goto after_1;
    // 0x80028D1C: nop

    after_1:
L_80028D20:
    // 0x80028D20: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80028D24: jr          $ra
    // 0x80028D28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80028D28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80028D2C: nop

;}
RECOMP_FUNC void func_80086490_61890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80086490: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80086494: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x80086498: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x8008649C: sw          $s0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r16;
    // 0x800864A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800864A4: sw          $s3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r19;
    // 0x800864A8: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x800864AC: sw          $s1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r17;
    // 0x800864B0: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x800864B4: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x800864B8: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x800864BC: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x800864C0: sw          $s7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r23;
    // 0x800864C4: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x800864C8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800864CC: lui         $t5, 0x8000
    ctx->r13 = S32(0X8000 << 16);
    // 0x800864D0: sw          $fp, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r30;
    // 0x800864D4: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x800864D8: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x800864DC: addu        $t3, $s3, $zero
    ctx->r11 = ADD32(ctx->r19, 0);
    // 0x800864E0: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x800864E4: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x800864E8: addu        $v0, $t3, $s4
    ctx->r2 = ADD32(ctx->r11, ctx->r20);
    // 0x800864EC: slt         $v0, $t3, $v0
    ctx->r2 = SIGNED(ctx->r11) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800864F0: beq         $v0, $zero, L_80086630
    if (ctx->r2 == 0) {
        // 0x800864F4: sw          $s2, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r18;
            goto L_80086630;
    }
    // 0x800864F4: sw          $s2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r18;
    // 0x800864F8: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x800864FC: lbu         $t8, 0x6B40($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X6B40);
    // 0x80086500: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x80086504: lbu         $s2, -0x35BC($s2)
    ctx->r18 = MEM_BU(ctx->r18, -0X35BC);
    // 0x80086508: lui         $a3, 0x801C
    ctx->r7 = S32(0X801C << 16);
    // 0x8008650C: lbu         $a3, -0x39A6($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X39A6);
    // 0x80086510: addu        $t0, $s0, $zero
    ctx->r8 = ADD32(ctx->r16, 0);
L_80086514:
    // 0x80086514: addu        $v0, $t0, $s1
    ctx->r2 = ADD32(ctx->r8, ctx->r17);
    // 0x80086518: slt         $v0, $t0, $v0
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8008651C: beql        $v0, $zero, L_80086620
    if (ctx->r2 == 0) {
        // 0x80086520: addiu       $t3, $t3, 0x1
        ctx->r11 = ADD32(ctx->r11, 0X1);
            goto L_80086620;
    }
    goto skip_0;
    // 0x80086520: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    skip_0:
    // 0x80086524: slt         $a2, $t3, $a3
    ctx->r6 = SIGNED(ctx->r11) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80086528: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8008652C: lw          $a1, -0x35C0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X35C0);
    // 0x80086530: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80086534: lbu         $v0, 0x53D4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X53D4);
    // 0x80086538: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8008653C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80086540: lhu         $v1, 0x49AE($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49AE);
    // 0x80086544: slt         $a0, $t3, $v0
    ctx->r4 = SIGNED(ctx->r11) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80086548: subu        $v0, $t3, $a3
    ctx->r2 = SUB32(ctx->r11, ctx->r7);
    // 0x8008654C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80086550: mflo        $t9
    ctx->r25 = lo;
    // 0x80086554: slt         $v0, $t0, $t8
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80086558: nop

L_8008655C:
    // 0x8008655C: bnel        $v0, $zero, L_8008660C
    if (ctx->r2 != 0) {
        // 0x80086560: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_8008660C;
    }
    goto skip_1;
    // 0x80086560: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_1:
    // 0x80086564: slt         $v0, $t0, $s2
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80086568: beql        $v0, $zero, L_8008660C
    if (ctx->r2 == 0) {
        // 0x8008656C: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_8008660C;
    }
    goto skip_2;
    // 0x8008656C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_2:
    // 0x80086570: bnel        $a2, $zero, L_8008660C
    if (ctx->r6 != 0) {
        // 0x80086574: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_8008660C;
    }
    goto skip_3;
    // 0x80086574: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_3:
    // 0x80086578: beql        $a0, $zero, L_8008660C
    if (ctx->r4 == 0) {
        // 0x8008657C: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_8008660C;
    }
    goto skip_4;
    // 0x8008657C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_4:
    // 0x80086580: subu        $v0, $t0, $t8
    ctx->r2 = SUB32(ctx->r8, ctx->r24);
    // 0x80086584: addu        $v0, $t9, $v0
    ctx->r2 = ADD32(ctx->r25, ctx->r2);
    // 0x80086588: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8008658C: addu        $t2, $v0, $a1
    ctx->r10 = ADD32(ctx->r2, ctx->r5);
    // 0x80086590: lhu         $v1, 0x0($t2)
    ctx->r3 = MEM_HU(ctx->r10, 0X0);
    // 0x80086594: srl         $v0, $v1, 15
    ctx->r2 = S32(U32(ctx->r3) >> 15);
    // 0x80086598: beql        $v0, $zero, L_8008660C
    if (ctx->r2 == 0) {
        // 0x8008659C: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_8008660C;
    }
    goto skip_5;
    // 0x8008659C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_5:
    // 0x800865A0: bne         $t4, $t7, L_800865AC
    if (ctx->r12 != ctx->r15) {
        // 0x800865A4: andi        $v0, $v1, 0x7C
        ctx->r2 = ctx->r3 & 0X7C;
            goto L_800865AC;
    }
    // 0x800865A4: andi        $v0, $v1, 0x7C
    ctx->r2 = ctx->r3 & 0X7C;
    // 0x800865A8: srl         $t4, $v0, 2
    ctx->r12 = S32(U32(ctx->r2) >> 2);
L_800865AC:
    // 0x800865AC: beql        $t6, $t7, L_800865B4
    if (ctx->r14 == ctx->r15) {
        // 0x800865B0: andi        $t6, $v1, 0x3
        ctx->r14 = ctx->r3 & 0X3;
            goto L_800865B4;
    }
    goto skip_6;
    // 0x800865B0: andi        $t6, $v1, 0x3
    ctx->r14 = ctx->r3 & 0X3;
    skip_6:
L_800865B4:
    // 0x800865B4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x800865B8: bne         $t5, $v0, L_800865CC
    if (ctx->r13 != ctx->r2) {
        // 0x800865BC: andi        $v0, $v1, 0x7C
        ctx->r2 = ctx->r3 & 0X7C;
            goto L_800865CC;
    }
    // 0x800865BC: andi        $v0, $v1, 0x7C
    ctx->r2 = ctx->r3 & 0X7C;
    // 0x800865C0: andi        $v0, $v1, 0x1F00
    ctx->r2 = ctx->r3 & 0X1F00;
    // 0x800865C4: srl         $t5, $v0, 8
    ctx->r13 = S32(U32(ctx->r2) >> 8);
    // 0x800865C8: andi        $v0, $v1, 0x7C
    ctx->r2 = ctx->r3 & 0X7C;
L_800865CC:
    // 0x800865CC: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x800865D0: bne         $t4, $v0, L_80086640
    if (ctx->r12 != ctx->r2) {
        // 0x800865D4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80086640;
    }
    // 0x800865D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800865D8: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x800865DC: bne         $t6, $v0, L_80086640
    if (ctx->r14 != ctx->r2) {
        // 0x800865E0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80086640;
    }
    // 0x800865E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800865E4: andi        $v0, $v1, 0x1F00
    ctx->r2 = ctx->r3 & 0X1F00;
    // 0x800865E8: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x800865EC: bne         $t5, $v0, L_80086640
    if (ctx->r13 != ctx->r2) {
        // 0x800865F0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80086640;
    }
    // 0x800865F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800865F4: beq         $s5, $zero, L_80086604
    if (ctx->r21 == 0) {
        // 0x800865F8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80086604;
    }
    // 0x800865F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800865FC: beql        $s5, $v0, L_80086604
    if (ctx->r21 == ctx->r2) {
        // 0x80086600: sh          $zero, 0x0($t2)
        MEM_H(0X0, ctx->r10) = 0;
            goto L_80086604;
    }
    goto skip_7;
    // 0x80086600: sh          $zero, 0x0($t2)
    MEM_H(0X0, ctx->r10) = 0;
    skip_7:
L_80086604:
    // 0x80086604: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80086608: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_8008660C:
    // 0x8008660C: addu        $v0, $s0, $s1
    ctx->r2 = ADD32(ctx->r16, ctx->r17);
    // 0x80086610: slt         $v0, $t0, $v0
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80086614: bne         $v0, $zero, L_8008655C
    if (ctx->r2 != 0) {
        // 0x80086618: slt         $v0, $t0, $t8
        ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r24) ? 1 : 0;
            goto L_8008655C;
    }
    // 0x80086618: slt         $v0, $t0, $t8
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8008661C: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
L_80086620:
    // 0x80086620: addu        $v0, $s3, $s4
    ctx->r2 = ADD32(ctx->r19, ctx->r20);
    // 0x80086624: slt         $v0, $t3, $v0
    ctx->r2 = SIGNED(ctx->r11) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80086628: bnel        $v0, $zero, L_80086514
    if (ctx->r2 != 0) {
        // 0x8008662C: addu        $t0, $s0, $zero
        ctx->r8 = ADD32(ctx->r16, 0);
            goto L_80086514;
    }
    goto skip_8;
    // 0x8008662C: addu        $t0, $s0, $zero
    ctx->r8 = ADD32(ctx->r16, 0);
    skip_8:
L_80086630:
    // 0x80086630: addu        $v0, $t1, $zero
    ctx->r2 = ADD32(ctx->r9, 0);
    // 0x80086634: sw          $t4, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r12;
    // 0x80086638: sw          $t6, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r14;
    // 0x8008663C: sw          $t5, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r13;
L_80086640:
    // 0x80086640: lw          $fp, 0x20($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X20);
    // 0x80086644: lw          $s7, 0x1C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X1C);
    // 0x80086648: lw          $s6, 0x18($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X18);
    // 0x8008664C: lw          $s5, 0x14($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X14);
    // 0x80086650: lw          $s4, 0x10($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X10);
    // 0x80086654: lw          $s3, 0xC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XC);
    // 0x80086658: lw          $s2, 0x8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X8);
    // 0x8008665C: lw          $s1, 0x4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4);
    // 0x80086660: lw          $s0, 0x0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X0);
    // 0x80086664: jr          $ra
    // 0x80086668: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80086668: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80061F00_3D300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80061F00: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x80061F04: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
    // 0x80061F08: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
    // 0x80061F0C: jr          $ra
    // 0x80061F10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x80061F10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80036B74_11F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036B74: jr          $ra
    // 0x80036B78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x80036B78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void proutSprintf(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009A438: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009A43C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8009A440: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8009A444: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8009A448: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8009A44C: jal         0x8009A3B4
    // 0x8009A450: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8009A450: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    after_0:
    // 0x8009A454: addu        $v0, $s1, $s0
    ctx->r2 = ADD32(ctx->r17, ctx->r16);
    // 0x8009A458: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8009A45C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8009A460: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8009A464: jr          $ra
    // 0x8009A468: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8009A468: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80072BCC_4DFCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80072BCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80072BD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80072BD4: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80072BD8: addiu       $s0, $s0, -0x3BC8
    ctx->r16 = ADD32(ctx->r16, -0X3BC8);
    // 0x80072BDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80072BE0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80072BE4: addiu       $v0, $v1, -0x5
    ctx->r2 = ADD32(ctx->r3, -0X5);
    // 0x80072BE8: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80072BEC: beq         $v0, $zero, L_80072C7C
    if (ctx->r2 == 0) {
        // 0x80072BF0: sll         $v0, $v1, 24
        ctx->r2 = S32(ctx->r3 << 24);
            goto L_80072C7C;
    }
    // 0x80072BF0: sll         $v0, $v1, 24
    ctx->r2 = S32(ctx->r3 << 24);
    // 0x80072BF4: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80072BF8: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80072BFC: bne         $v0, $v1, L_80072C28
    if (ctx->r2 != ctx->r3) {
        // 0x80072C00: nop
    
            goto L_80072C28;
    }
    // 0x80072C00: nop

    // 0x80072C04: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80072C08: lw          $a1, 0x3614($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3614);
    // 0x80072C0C: jal         0x80072C8C
    // 0x80072C10: addiu       $a0, $s0, -0x1C
    ctx->r4 = ADD32(ctx->r16, -0X1C);
    func_80072C8C_4E08C(rdram, ctx);
        goto after_0;
    // 0x80072C10: addiu       $a0, $s0, -0x1C
    ctx->r4 = ADD32(ctx->r16, -0X1C);
    after_0:
    // 0x80072C14: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80072C18: lw          $a1, 0x3618($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3618);
    // 0x80072C1C: addiu       $a0, $s0, 0x16
    ctx->r4 = ADD32(ctx->r16, 0X16);
    // 0x80072C20: jal         0x80072D7C
    // 0x80072C24: lui         $a2, 0x8FFF
    ctx->r6 = S32(0X8FFF << 16);
    func_80072D7C_4E17C(rdram, ctx);
        goto after_1;
    // 0x80072C24: lui         $a2, 0x8FFF
    ctx->r6 = S32(0X8FFF << 16);
    after_1:
L_80072C28:
    // 0x80072C28: lb          $v1, 0x0($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X0);
    // 0x80072C2C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80072C30: bne         $v1, $v0, L_80072C7C
    if (ctx->r3 != ctx->r2) {
        // 0x80072C34: nop
    
            goto L_80072C7C;
    }
    // 0x80072C34: nop

    // 0x80072C38: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80072C3C: lw          $a1, 0x361C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X361C);
    // 0x80072C40: jal         0x80072C8C
    // 0x80072C44: addiu       $a0, $s0, -0x28
    ctx->r4 = ADD32(ctx->r16, -0X28);
    func_80072C8C_4E08C(rdram, ctx);
        goto after_2;
    // 0x80072C44: addiu       $a0, $s0, -0x28
    ctx->r4 = ADD32(ctx->r16, -0X28);
    after_2:
    // 0x80072C48: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80072C4C: lw          $a1, 0x3620($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3620);
    // 0x80072C50: jal         0x80072C8C
    // 0x80072C54: addiu       $a0, $s0, -0x24
    ctx->r4 = ADD32(ctx->r16, -0X24);
    func_80072C8C_4E08C(rdram, ctx);
        goto after_3;
    // 0x80072C54: addiu       $a0, $s0, -0x24
    ctx->r4 = ADD32(ctx->r16, -0X24);
    after_3:
    // 0x80072C58: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80072C5C: lw          $a1, 0x3624($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3624);
    // 0x80072C60: jal         0x80072C8C
    // 0x80072C64: addiu       $a0, $s0, -0x20
    ctx->r4 = ADD32(ctx->r16, -0X20);
    func_80072C8C_4E08C(rdram, ctx);
        goto after_4;
    // 0x80072C64: addiu       $a0, $s0, -0x20
    ctx->r4 = ADD32(ctx->r16, -0X20);
    after_4:
    // 0x80072C68: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80072C6C: lw          $a1, 0x3628($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3628);
    // 0x80072C70: addiu       $a0, $s0, 0x17
    ctx->r4 = ADD32(ctx->r16, 0X17);
    // 0x80072C74: jal         0x80072D7C
    // 0x80072C78: lui         $a2, 0x8FFF
    ctx->r6 = S32(0X8FFF << 16);
    func_80072D7C_4E17C(rdram, ctx);
        goto after_5;
    // 0x80072C78: lui         $a2, 0x8FFF
    ctx->r6 = S32(0X8FFF << 16);
    after_5:
L_80072C7C:
    // 0x80072C7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80072C80: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80072C84: jr          $ra
    // 0x80072C88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80072C88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80031CBC_D0BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80031CBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80031CC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80031CC4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80031CC8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80031CCC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80031CD0: jal         0x80032510
    // 0x80031CD4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_80032510_D910(rdram, ctx);
        goto after_0;
    // 0x80031CD4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80031CD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80031CDC: jal         0x800324D0
    // 0x80031CE0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_800324D0_D8D0(rdram, ctx);
        goto after_1;
    // 0x80031CE0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80031CE4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80031CE8: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x80031CEC: negu        $v1, $s0
    ctx->r3 = SUB32(0, ctx->r16);
    // 0x80031CF0: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    // 0x80031CF4: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x80031CF8: sh          $a0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r4;
    // 0x80031CFC: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x80031D00: sh          $s0, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r16;
    // 0x80031D04: sh          $a0, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r4;
    // 0x80031D08: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x80031D0C: sh          $zero, 0xC($v0)
    MEM_H(0XC, ctx->r2) = 0;
    // 0x80031D10: sh          $zero, 0xE($v0)
    MEM_H(0XE, ctx->r2) = 0;
    // 0x80031D14: sh          $v1, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r3;
    // 0x80031D18: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x80031D1C: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x80031D20: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x80031D24: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80031D28: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80031D2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80031D30: jr          $ra
    // 0x80031D34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80031D34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800622E8_3D6E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800622E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800622EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800622F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800622F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800622F8: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x800622FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80062300: lbu         $a0, 0x2($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X2);
    // 0x80062304: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x80062308: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006230C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80062310: jal         0x8002A2F8
    // 0x80062314: or          $a0, $v0, $a0
    ctx->r4 = ctx->r2 | ctx->r4;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x80062314: or          $a0, $v0, $a0
    ctx->r4 = ctx->r2 | ctx->r4;
    after_0:
    // 0x80062318: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x8006231C: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80062320: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
    // 0x80062324: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80062328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006232C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80062330: jr          $ra
    // 0x80062334: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80062334: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80038DB8_141B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80038DB8: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80038DBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80038DC0: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x80038DC4: beq         $a1, $v0, L_80038E70
    if (ctx->r5 == ctx->r2) {
        // 0x80038DC8: sw          $s0, 0x80($sp)
        MEM_W(0X80, ctx->r29) = ctx->r16;
            goto L_80038E70;
    }
    // 0x80038DC8: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    // 0x80038DCC: slti        $v0, $a1, 0x2
    ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x80038DD0: beql        $v0, $zero, L_80038DE8
    if (ctx->r2 == 0) {
        // 0x80038DD4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80038DE8;
    }
    goto skip_0;
    // 0x80038DD4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80038DD8: beq         $a1, $zero, L_80038E04
    if (ctx->r5 == 0) {
        // 0x80038DDC: nop
    
            goto L_80038E04;
    }
    // 0x80038DDC: nop

    // 0x80038DE0: j           L_80038F9C
    // 0x80038DE4: nop

        goto L_80038F9C;
    // 0x80038DE4: nop

L_80038DE8:
    // 0x80038DE8: beq         $a1, $v0, L_80038EDC
    if (ctx->r5 == ctx->r2) {
        // 0x80038DEC: nop
    
            goto L_80038EDC;
    }
    // 0x80038DEC: nop

    // 0x80038DF0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80038DF4: beq         $a1, $v0, L_80038F1C
    if (ctx->r5 == ctx->r2) {
        // 0x80038DF8: nop
    
            goto L_80038F1C;
    }
    // 0x80038DF8: nop

    // 0x80038DFC: j           L_80038F9C
    // 0x80038E00: nop

        goto L_80038F9C;
    // 0x80038E00: nop

L_80038E04:
    // 0x80038E04: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80038E08: addiu       $v0, $v0, -0x100
    ctx->r2 = ADD32(ctx->r2, -0X100);
    // 0x80038E0C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80038E10: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80038E14: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80038E18: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80038E1C: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x80038E20: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x80038E24: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80038E28: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x80038E2C: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80038E30: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80038E34: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80038E38: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80038E3C: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x80038E40: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x80038E44: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80038E48: addiu       $v0, $v0, -0x100
    ctx->r2 = ADD32(ctx->r2, -0X100);
    // 0x80038E4C: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x80038E50: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80038E54: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x80038E58: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80038E5C: addiu       $v0, $v0, -0x100
    ctx->r2 = ADD32(ctx->r2, -0X100);
    // 0x80038E60: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    // 0x80038E64: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80038E68: j           L_80038F84
    // 0x80038E6C: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
        goto L_80038F84;
    // 0x80038E6C: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
L_80038E70:
    // 0x80038E70: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80038E74: addiu       $v0, $v0, -0x100
    ctx->r2 = ADD32(ctx->r2, -0X100);
    // 0x80038E78: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80038E7C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80038E80: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80038E84: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80038E88: addiu       $v0, $v0, 0x300
    ctx->r2 = ADD32(ctx->r2, 0X300);
    // 0x80038E8C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x80038E90: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80038E94: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x80038E98: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80038E9C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80038EA0: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80038EA4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80038EA8: addiu       $v0, $v0, 0x300
    ctx->r2 = ADD32(ctx->r2, 0X300);
    // 0x80038EAC: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x80038EB0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80038EB4: addiu       $v0, $v0, -0x100
    ctx->r2 = ADD32(ctx->r2, -0X100);
    // 0x80038EB8: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x80038EBC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80038EC0: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x80038EC4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80038EC8: addiu       $v0, $v0, -0x100
    ctx->r2 = ADD32(ctx->r2, -0X100);
    // 0x80038ECC: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    // 0x80038ED0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80038ED4: j           L_80038F84
    // 0x80038ED8: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
        goto L_80038F84;
    // 0x80038ED8: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
L_80038EDC:
    // 0x80038EDC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80038EE0: addiu       $v0, $v0, -0x100
    ctx->r2 = ADD32(ctx->r2, -0X100);
    // 0x80038EE4: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80038EE8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80038EEC: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80038EF0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80038EF4: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x80038EF8: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x80038EFC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80038F00: addiu       $v0, $v0, 0x300
    ctx->r2 = ADD32(ctx->r2, 0X300);
    // 0x80038F04: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80038F08: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80038F0C: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80038F10: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80038F14: j           L_80038F58
    // 0x80038F18: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
        goto L_80038F58;
    // 0x80038F18: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
L_80038F1C:
    // 0x80038F1C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80038F20: addiu       $v0, $v0, -0x100
    ctx->r2 = ADD32(ctx->r2, -0X100);
    // 0x80038F24: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80038F28: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80038F2C: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80038F30: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80038F34: addiu       $v0, $v0, 0x300
    ctx->r2 = ADD32(ctx->r2, 0X300);
    // 0x80038F38: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x80038F3C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80038F40: addiu       $v0, $v0, 0x300
    ctx->r2 = ADD32(ctx->r2, 0X300);
    // 0x80038F44: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80038F48: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80038F4C: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80038F50: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80038F54: addiu       $v0, $v0, 0x300
    ctx->r2 = ADD32(ctx->r2, 0X300);
L_80038F58:
    // 0x80038F58: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x80038F5C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80038F60: addiu       $v0, $v0, -0x100
    ctx->r2 = ADD32(ctx->r2, -0X100);
    // 0x80038F64: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x80038F68: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80038F6C: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x80038F70: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80038F74: addiu       $v0, $v0, -0x100
    ctx->r2 = ADD32(ctx->r2, -0X100);
    // 0x80038F78: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    // 0x80038F7C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80038F80: addiu       $v0, $v0, 0x300
    ctx->r2 = ADD32(ctx->r2, 0X300);
L_80038F84:
    // 0x80038F84: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x80038F88: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80038F8C: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x80038F90: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80038F94: addiu       $v0, $v0, -0x100
    ctx->r2 = ADD32(ctx->r2, -0X100);
    // 0x80038F98: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
L_80038F9C:
    // 0x80038F9C: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x80038FA0: addiu       $s0, $s0, 0x4760
    ctx->r16 = ADD32(ctx->r16, 0X4760);
    // 0x80038FA4: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x80038FA8: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x80038FAC: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
L_80038FB0:
    // 0x80038FB0: lh          $v1, 0xC($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XC);
    // 0x80038FB4: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    // 0x80038FB8: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80038FBC: mflo        $v1
    ctx->r3 = lo;
    // 0x80038FC0: lh          $a1, 0xE($s0)
    ctx->r5 = MEM_H(ctx->r16, 0XE);
    // 0x80038FC4: lh          $v0, 0x2($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X2);
    // 0x80038FC8: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80038FCC: mflo        $a1
    ctx->r5 = lo;
    // 0x80038FD0: lh          $a0, 0x10($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X10);
    // 0x80038FD4: lh          $v0, 0x4($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X4);
    // 0x80038FD8: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80038FDC: mflo        $a0
    ctx->r4 = lo;
    // 0x80038FE0: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80038FE4: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x80038FE8: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80038FEC: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80038FF0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80038FF4: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80038FF8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80038FFC: sw          $v1, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r3;
    // 0x80039000: slti        $v0, $t1, 0x4
    ctx->r2 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x80039004: bne         $v0, $zero, L_80038FB0
    if (ctx->r2 != 0) {
        // 0x80039008: addiu       $a3, $a3, 0x10
        ctx->r7 = ADD32(ctx->r7, 0X10);
            goto L_80038FB0;
    }
    // 0x80039008: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x8003900C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80039010: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80039014: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x80039018: jal         0x8007BF70
    // 0x8003901C: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    func_8007BF70_57370(rdram, ctx);
        goto after_0;
    // 0x8003901C: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    after_0:
    // 0x80039020: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80039024: lh          $v1, -0x448($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X448);
    // 0x80039028: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003902C: bne         $v1, $zero, L_8003911C
    if (ctx->r3 != 0) {
        // 0x80039030: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8003911C;
    }
    // 0x80039030: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80039034: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x80039038: addiu       $t0, $sp, 0x10
    ctx->r8 = ADD32(ctx->r29, 0X10);
    // 0x8003903C: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x80039040: addu        $a2, $t0, $zero
    ctx->r6 = ADD32(ctx->r8, 0);
L_80039044:
    // 0x80039044: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    // 0x80039048: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    // 0x8003904C: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039050: mflo        $a0
    ctx->r4 = lo;
    // 0x80039054: lh          $a1, 0x2($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X2);
    // 0x80039058: lh          $v0, 0x2($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X2);
    // 0x8003905C: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039060: mflo        $a1
    ctx->r5 = lo;
    // 0x80039064: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
    // 0x80039068: lh          $v0, 0x4($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X4);
    // 0x8003906C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039070: mflo        $v1
    ctx->r3 = lo;
    // 0x80039074: lw          $v0, 0x8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X8);
    // 0x80039078: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8003907C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80039080: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x80039084: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80039088: sra         $a0, $a0, 12
    ctx->r4 = S32(SIGNED(ctx->r4) >> 12);
    // 0x8003908C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80039090: sll         $v1, $a0, 8
    ctx->r3 = S32(ctx->r4 << 8);
    // 0x80039094: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x80039098: bne         $v0, $zero, L_800390A4
    if (ctx->r2 != 0) {
        // 0x8003909C: nop
    
            goto L_800390A4;
    }
    // 0x8003909C: nop

    // 0x800390A0: break       7
    do_break(2147717280);
L_800390A4:
    // 0x800390A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800390A8: bne         $v0, $at, L_800390BC
    if (ctx->r2 != ctx->r1) {
        // 0x800390AC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800390BC;
    }
    // 0x800390AC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800390B0: bne         $v1, $at, L_800390BC
    if (ctx->r3 != ctx->r1) {
        // 0x800390B4: nop
    
            goto L_800390BC;
    }
    // 0x800390B4: nop

    // 0x800390B8: break       6
    do_break(2147717304);
L_800390BC:
    // 0x800390BC: mflo        $v1
    ctx->r3 = lo;
    // 0x800390C0: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x800390C4: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x800390C8: sw          $a0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r4;
    // 0x800390CC: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x800390D0: slti        $v0, $t1, 0x4
    ctx->r2 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x800390D4: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x800390D8: sw          $v1, 0x60($t0)
    MEM_W(0X60, ctx->r8) = ctx->r3;
    // 0x800390DC: bne         $v0, $zero, L_80039044
    if (ctx->r2 != 0) {
        // 0x800390E0: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_80039044;
    }
    // 0x800390E0: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x800390E4: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x800390E8: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    // 0x800390EC: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    // 0x800390F0: jal         0x8007BF9C
    // 0x800390F4: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    func_8007BF9C_5739C(rdram, ctx);
        goto after_1;
    // 0x800390F4: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    after_1:
    // 0x800390F8: slti        $v0, $v0, -0xC0
    ctx->r2 = SIGNED(ctx->r2) < -0XC0 ? 1 : 0;
    // 0x800390FC: bne         $v0, $zero, L_8003911C
    if (ctx->r2 != 0) {
        // 0x80039100: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8003911C;
    }
    // 0x80039100: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80039104: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x80039108: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    // 0x8003910C: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    // 0x80039110: jal         0x8007BF70
    // 0x80039114: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    func_8007BF70_57370(rdram, ctx);
        goto after_2;
    // 0x80039114: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    after_2:
    // 0x80039118: slti        $v0, $v0, 0xC1
    ctx->r2 = SIGNED(ctx->r2) < 0XC1 ? 1 : 0;
L_8003911C:
    // 0x8003911C: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x80039120: lw          $s0, 0x80($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X80);
    // 0x80039124: jr          $ra
    // 0x80039128: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x80039128: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_800540D0_2F4D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800540D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800540D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800540D8: jal         0x800540EC
    // 0x800540DC: lh          $a2, 0x56($a1)
    ctx->r6 = MEM_H(ctx->r5, 0X56);
    func_800540EC_2F4EC(rdram, ctx);
        goto after_0;
    // 0x800540DC: lh          $a2, 0x56($a1)
    ctx->r6 = MEM_H(ctx->r5, 0X56);
    after_0:
    // 0x800540E0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800540E4: jr          $ra
    // 0x800540E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800540E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002A398_5798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A398: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A39C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8002A3A0: jal         0x8002B274
    // 0x8002A3A4: nop

    func_8002B274_6674(rdram, ctx);
        goto after_0;
    // 0x8002A3A4: nop

    after_0:
    // 0x8002A3A8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002A3AC: jr          $ra
    // 0x8002A3B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002A3B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800A3490_7E890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800A3490: subu        $v0, $a0, $a1
    ctx->r2 = SUB32(ctx->r4, ctx->r5);
    // 0x800A3494: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x800A3498: beq         $v0, $zero, L_800A34F4
    if (ctx->r2 == 0) {
        // 0x800A349C: andi        $v0, $a0, 0x3
        ctx->r2 = ctx->r4 & 0X3;
            goto L_800A34F4;
    }
    // 0x800A349C: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
L_800A34A0:
    // 0x800A34A0: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x800A34A4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800A34A8: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x800A34AC: subu        $a2, $v1, $v0
    ctx->r6 = SUB32(ctx->r3, ctx->r2);
    // 0x800A34B0: sltu        $v0, $zero, $a2
    ctx->r2 = 0 < ctx->r6 ? 1 : 0;
    // 0x800A34B4: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x800A34B8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x800A34BC: beq         $v0, $zero, L_800A34A0
    if (ctx->r2 == 0) {
        // 0x800A34C0: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_800A34A0;
    }
    // 0x800A34C0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800A34C4: j           L_800A358C
    // 0x800A34C8: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
        goto L_800A358C;
    // 0x800A34C8: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
L_800A34CC:
    // 0x800A34CC: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x800A34D0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800A34D4: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x800A34D8: subu        $a2, $v1, $v0
    ctx->r6 = SUB32(ctx->r3, ctx->r2);
    // 0x800A34DC: sltu        $v0, $zero, $a2
    ctx->r2 = 0 < ctx->r6 ? 1 : 0;
    // 0x800A34E0: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x800A34E4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x800A34E8: bne         $v0, $zero, L_800A3588
    if (ctx->r2 != 0) {
        // 0x800A34EC: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_800A3588;
    }
    // 0x800A34EC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800A34F0: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
L_800A34F4:
    // 0x800A34F4: bne         $v0, $zero, L_800A34CC
    if (ctx->r2 != 0) {
        // 0x800A34F8: nop
    
            goto L_800A34CC;
    }
    // 0x800A34F8: nop

L_800A34FC:
    // 0x800A34FC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800A3500: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800A3504: lw          $a3, 0x0($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X0);
    // 0x800A3508: subu        $a2, $v1, $a3
    ctx->r6 = SUB32(ctx->r3, ctx->r7);
    // 0x800A350C: beq         $a2, $zero, L_800A355C
    if (ctx->r6 == 0) {
        // 0x800A3510: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_800A355C;
    }
    // 0x800A3510: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x800A3514: lui         $v0, 0xFF00
    ctx->r2 = S32(0XFF00 << 16);
    // 0x800A3518: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x800A351C: bnel        $v0, $zero, L_800A352C
    if (ctx->r2 != 0) {
        // 0x800A3520: lui         $v0, 0xFF
        ctx->r2 = S32(0XFF << 16);
            goto L_800A352C;
    }
    goto skip_0;
    // 0x800A3520: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    skip_0:
    // 0x800A3524: j           L_800A354C
    // 0x800A3528: lui         $a2, 0xFF00
    ctx->r6 = S32(0XFF00 << 16);
        goto L_800A354C;
    // 0x800A3528: lui         $a2, 0xFF00
    ctx->r6 = S32(0XFF00 << 16);
L_800A352C:
    // 0x800A352C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x800A3530: bnel        $v0, $zero, L_800A3540
    if (ctx->r2 != 0) {
        // 0x800A3534: andi        $v0, $v1, 0xFF00
        ctx->r2 = ctx->r3 & 0XFF00;
            goto L_800A3540;
    }
    goto skip_1;
    // 0x800A3534: andi        $v0, $v1, 0xFF00
    ctx->r2 = ctx->r3 & 0XFF00;
    skip_1:
    // 0x800A3538: j           L_800A354C
    // 0x800A353C: lui         $a2, 0xFFFF
    ctx->r6 = S32(0XFFFF << 16);
        goto L_800A354C;
    // 0x800A353C: lui         $a2, 0xFFFF
    ctx->r6 = S32(0XFFFF << 16);
L_800A3540:
    // 0x800A3540: bnel        $v0, $zero, L_800A358C
    if (ctx->r2 != 0) {
        // 0x800A3544: addu        $v0, $a2, $zero
        ctx->r2 = ADD32(ctx->r6, 0);
            goto L_800A358C;
    }
    goto skip_2;
    // 0x800A3544: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    skip_2:
    // 0x800A3548: addiu       $a2, $zero, -0x100
    ctx->r6 = ADD32(0, -0X100);
L_800A354C:
    // 0x800A354C: and         $v1, $v1, $a2
    ctx->r3 = ctx->r3 & ctx->r6;
    // 0x800A3550: and         $v0, $a3, $a2
    ctx->r2 = ctx->r7 & ctx->r6;
    // 0x800A3554: j           L_800A358C
    // 0x800A3558: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
        goto L_800A358C;
    // 0x800A3558: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
L_800A355C:
    // 0x800A355C: sll         $v0, $v1, 24
    ctx->r2 = S32(ctx->r3 << 24);
    // 0x800A3560: beq         $v0, $zero, L_800A3588
    if (ctx->r2 == 0) {
        // 0x800A3564: andi        $v0, $v1, 0xFF00
        ctx->r2 = ctx->r3 & 0XFF00;
            goto L_800A3588;
    }
    // 0x800A3564: andi        $v0, $v1, 0xFF00
    ctx->r2 = ctx->r3 & 0XFF00;
    // 0x800A3568: beq         $v0, $zero, L_800A3588
    if (ctx->r2 == 0) {
        // 0x800A356C: lui         $v0, 0xFF
        ctx->r2 = S32(0XFF << 16);
            goto L_800A3588;
    }
    // 0x800A356C: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x800A3570: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x800A3574: beq         $v0, $zero, L_800A3588
    if (ctx->r2 == 0) {
        // 0x800A3578: lui         $v0, 0xFF00
        ctx->r2 = S32(0XFF00 << 16);
            goto L_800A3588;
    }
    // 0x800A3578: lui         $v0, 0xFF00
    ctx->r2 = S32(0XFF00 << 16);
    // 0x800A357C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x800A3580: bne         $v0, $zero, L_800A34FC
    if (ctx->r2 != 0) {
        // 0x800A3584: nop
    
            goto L_800A34FC;
    }
    // 0x800A3584: nop

L_800A3588:
    // 0x800A3588: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
L_800A358C:
    // 0x800A358C: jr          $ra
    // 0x800A3590: nop

    TRACE_RETURN()
    return;
    // 0x800A3590: nop

    // 0x800A3594: nop

    // 0x800A3598: nop

    // 0x800A359C: nop

;}
RECOMP_FUNC void func_80066530_41930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80066530: lw          $v1, 0x6C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X6C);
    // 0x80066534: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x80066538: sb          $zero, 0x3D($a0)
    MEM_B(0X3D, ctx->r4) = 0;
    // 0x8006653C: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x80066540: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80066544: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80066548: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
    // 0x8006654C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80066550: sb          $v1, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = ctx->r3;
    // 0x80066554: jr          $ra
    // 0x80066558: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80066558: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
