#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8023CE58_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023CE58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023CE5C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023CE60: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023CE64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023CE68: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023CE6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023CE70: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x8023CE74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023CE78: beq         $v1, $v0, L_8023CEBC
    if (ctx->r3 == ctx->r2) {
        // 0x8023CE7C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023CEBC;
    }
    // 0x8023CE7C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023CE80: beql        $v0, $zero, L_8023CE98
    if (ctx->r2 == 0) {
        // 0x8023CE84: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023CE98;
    }
    goto skip_0;
    // 0x8023CE84: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023CE88: beq         $v1, $zero, L_8023CEA8
    if (ctx->r3 == 0) {
        // 0x8023CE8C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8023CEA8;
    }
    // 0x8023CE8C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023CE90: j           L_8023CFC4
    // 0x8023CE94: nop

        goto L_8023CFC4;
    // 0x8023CE94: nop

L_8023CE98:
    // 0x8023CE98: beq         $v1, $v0, L_8023CF40
    if (ctx->r3 == ctx->r2) {
        // 0x8023CE9C: nop
    
            goto L_8023CF40;
    }
    // 0x8023CE9C: nop

    // 0x8023CEA0: j           L_8023CFC4
    // 0x8023CEA4: nop

        goto L_8023CFC4;
    // 0x8023CEA4: nop

L_8023CEA8:
    // 0x8023CEA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023CEAC: jal         0x80036B00
    // 0x8023CEB0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_0;
    // 0x8023CEB0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8023CEB4: j           L_8023CF30
    // 0x8023CEB8: nop

        goto L_8023CF30;
    // 0x8023CEB8: nop

L_8023CEBC:
    // 0x8023CEBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023CEC0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CEC4: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8023CEC8: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x8023CECC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CED0: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8023CED4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023CED8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CEDC: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x8023CEE0: addiu       $v0, $zero, 0x70
    ctx->r2 = ADD32(0, 0X70);
    // 0x8023CEE4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CEE8: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x8023CEEC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023CEF0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CEF4: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x8023CEF8: addiu       $v0, $zero, 0xD8
    ctx->r2 = ADD32(0, 0XD8);
    // 0x8023CEFC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CF00: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x8023CF04: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x8023CF08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CF0C: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x8023CF10: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023CF14: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CF18: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8023CF1C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023CF20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CF24: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8023CF28: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CF2C: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
L_8023CF30:
    // 0x8023CF30: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x8023CF34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023CF38: j           L_8023CFC4
    // 0x8023CF3C: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_8023CFC4;
    // 0x8023CF3C: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_8023CF40:
    // 0x8023CF40: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8023CF44: addiu       $s2, $s2, 0x47CC
    ctx->r18 = ADD32(ctx->r18, 0X47CC);
    // 0x8023CF48: lb          $v0, 0x0($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X0);
    // 0x8023CF4C: bne         $v0, $v1, L_8023CFC4
    if (ctx->r2 != ctx->r3) {
        // 0x8023CF50: nop
    
            goto L_8023CFC4;
    }
    // 0x8023CF50: nop

    // 0x8023CF54: jal         0x80054578
    // 0x8023CF58: nop

    func_80054578_2F978(rdram, ctx);
        goto after_1;
    // 0x8023CF58: nop

    after_1:
    // 0x8023CF5C: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8023CF60: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8023CF64: jal         0x80070050
    // 0x8023CF68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_2;
    // 0x8023CF68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023CF6C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8023CF70: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023CF74: lbu         $a0, 0x3294($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3294);
    // 0x8023CF78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023CF7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CF80: sb          $zero, 0x4B18($at)
    MEM_B(0X4B18, ctx->r1) = 0;
    // 0x8023CF84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CF88: sb          $zero, 0x4B19($at)
    MEM_B(0X4B19, ctx->r1) = 0;
    // 0x8023CF8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CF90: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    // 0x8023CF94: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x8023CF98: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x8023CF9C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CFA0: jal         0x80034844
    // 0x8023CFA4: sb          $a0, 0x4B20($at)
    MEM_B(0X4B20, ctx->r1) = ctx->r4;
    func_80034844_FC44(rdram, ctx);
        goto after_3;
    // 0x8023CFA4: sb          $a0, 0x4B20($at)
    MEM_B(0X4B20, ctx->r1) = ctx->r4;
    after_3:
    // 0x8023CFA8: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8023CFAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023CFB0: jal         0x8006027C
    // 0x8023CFB4: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    func_8006027C_3B67C(rdram, ctx);
        goto after_4;
    // 0x8023CFB4: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    after_4:
    // 0x8023CFB8: jal         0x8006036C
    // 0x8023CFBC: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x8023CFBC: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    after_5:
    // 0x8023CFC0: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_8023CFC4:
    // 0x8023CFC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023CFC8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023CFCC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023CFD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023CFD4: jr          $ra
    // 0x8023CFD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023CFD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022BDE4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BDE4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022BDE8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022BDEC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022BDF0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022BDF4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8022BDF8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022BDFC: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x8022BE00: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x8022BE04: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8022BE08: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BE0C: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x8022BE10: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x8022BE14: beq         $v1, $v0, L_8022BE30
    if (ctx->r3 == ctx->r2) {
        // 0x8022BE18: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_8022BE30;
    }
    // 0x8022BE18: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022BE1C: bne         $v1, $v0, L_8022BE2C
    if (ctx->r3 != ctx->r2) {
        // 0x8022BE20: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022BE2C;
    }
    // 0x8022BE20: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022BE24: j           L_8022BE30
    // 0x8022BE28: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
        goto L_8022BE30;
    // 0x8022BE28: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
L_8022BE2C:
    // 0x8022BE2C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8022BE30:
    // 0x8022BE30: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x8022BE34: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x8022BE38: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022BE3C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BE40: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8022BE44: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x8022BE48: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x8022BE4C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BE50: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BE54: beq         $a0, $v1, L_8022BE7C
    if (ctx->r4 == ctx->r3) {
        // 0x8022BE58: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_8022BE7C;
    }
    // 0x8022BE58: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8022BE5C: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8022BE60: jal         0x8003B85C
    // 0x8022BE64: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x8022BE64: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x8022BE68: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8022BE6C: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x8022BE70: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x8022BE74: jal         0x8003B840
    // 0x8022BE78: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x8022BE78: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_8022BE7C:
    // 0x8022BE7C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8022BE80: lh          $a0, 0xA($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XA);
    // 0x8022BE84: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022BE88: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x8022BE8C: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8022BE90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BE94: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x8022BE98: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x8022BE9C: beq         $v1, $v0, L_8022BEB8
    if (ctx->r3 == ctx->r2) {
        // 0x8022BEA0: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_8022BEB8;
    }
    // 0x8022BEA0: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022BEA4: bne         $v1, $v0, L_8022BEB4
    if (ctx->r3 != ctx->r2) {
        // 0x8022BEA8: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022BEB4;
    }
    // 0x8022BEA8: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022BEAC: j           L_8022BEB8
    // 0x8022BEB0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8022BEB8;
    // 0x8022BEB0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022BEB4:
    // 0x8022BEB4: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
L_8022BEB8:
    // 0x8022BEB8: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
    // 0x8022BEBC: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022BEC0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022BEC4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BEC8: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8022BECC: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x8022BED0: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022BED4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BED8: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BEDC: beq         $a0, $v1, L_8022BF04
    if (ctx->r4 == ctx->r3) {
        // 0x8022BEE0: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_8022BF04;
    }
    // 0x8022BEE0: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8022BEE4: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8022BEE8: jal         0x8003B85C
    // 0x8022BEEC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x8022BEEC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x8022BEF0: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8022BEF4: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x8022BEF8: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x8022BEFC: jal         0x8003B840
    // 0x8022BF00: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x8022BF00: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_8022BF04:
    // 0x8022BF04: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x8022BF08: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022BF0C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022BF10: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022BF14: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022BF18: jr          $ra
    // 0x8022BF1C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022BF1C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8023B380_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B380: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B384: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B388: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B38C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023B390: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8023B394: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x8023B398: beq         $v1, $v0, L_8023B3E4
    if (ctx->r3 == ctx->r2) {
        // 0x8023B39C: slti        $v0, $v1, 0x24
        ctx->r2 = SIGNED(ctx->r3) < 0X24 ? 1 : 0;
            goto L_8023B3E4;
    }
    // 0x8023B39C: slti        $v0, $v1, 0x24
    ctx->r2 = SIGNED(ctx->r3) < 0X24 ? 1 : 0;
    // 0x8023B3A0: beq         $v0, $zero, L_8023B3B8
    if (ctx->r2 == 0) {
        // 0x8023B3A4: addiu       $v0, $zero, 0x19
        ctx->r2 = ADD32(0, 0X19);
            goto L_8023B3B8;
    }
    // 0x8023B3A4: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x8023B3A8: beq         $v1, $v0, L_8023B3D4
    if (ctx->r3 == ctx->r2) {
        // 0x8023B3AC: addiu       $v0, $zero, 0x82
        ctx->r2 = ADD32(0, 0X82);
            goto L_8023B3D4;
    }
    // 0x8023B3AC: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x8023B3B0: j           L_8023B400
    // 0x8023B3B4: nop

        goto L_8023B400;
    // 0x8023B3B4: nop

L_8023B3B8:
    // 0x8023B3B8: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x8023B3BC: beq         $v1, $v0, L_8023B3F4
    if (ctx->r3 == ctx->r2) {
        // 0x8023B3C0: addiu       $v0, $zero, 0x41
        ctx->r2 = ADD32(0, 0X41);
            goto L_8023B3F4;
    }
    // 0x8023B3C0: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8023B3C4: beq         $v1, $v0, L_8023B3F8
    if (ctx->r3 == ctx->r2) {
        // 0x8023B3C8: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8023B3F8;
    }
    // 0x8023B3C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8023B3CC: j           L_8023B400
    // 0x8023B3D0: nop

        goto L_8023B400;
    // 0x8023B3D0: nop

L_8023B3D4:
    // 0x8023B3D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B3D8: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8023B3DC: j           L_8023B3F8
    // 0x8023B3E0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
        goto L_8023B3F8;
    // 0x8023B3E0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_8023B3E4:
    // 0x8023B3E4: jal         0x8023B914
    // 0x8023B3E8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8023B914_ovl25(rdram, ctx);
        goto after_0;
    // 0x8023B3E8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x8023B3EC: j           L_8023B3F8
    // 0x8023B3F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_8023B3F8;
    // 0x8023B3F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8023B3F4:
    // 0x8023B3F4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_8023B3F8:
    // 0x8023B3F8: jal         0x8023B948
    // 0x8023B3FC: nop

    func_8023B948_ovl25(rdram, ctx);
        goto after_1;
    // 0x8023B3FC: nop

    after_1:
L_8023B400:
    // 0x8023B400: jal         0x8023B814
    // 0x8023B404: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023B814_ovl25(rdram, ctx);
        goto after_2;
    // 0x8023B404: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023B408: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023B40C: jal         0x8023B97C
    // 0x8023B410: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8023B97C_ovl25(rdram, ctx);
        goto after_3;
    // 0x8023B410: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_3:
    // 0x8023B414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023B418: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B41C: jr          $ra
    // 0x8023B420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802297D0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802297D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802297D4: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x802297D8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802297DC: lbu         $v0, 0x8($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X8);
    // 0x802297E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802297E4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802297E8: addu        $at, $at, $v0
    gpr jr_addend_802297F0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802297EC: lw          $v0, -0x22F0($at)
    ctx->r2 = ADD32(ctx->r1, -0X22F0);
    // 0x802297F0: jr          $v0
    // 0x802297F4: nop

    switch (jr_addend_802297F0 >> 2) {
        case 0: goto L_802297F8; break;
        case 1: goto L_80229810; break;
        case 2: goto L_80229894; break;
        default: switch_error(__func__, 0x802297F0, 0x8023DD10);
    }
    // 0x802297F4: nop

L_802297F8:
    // 0x802297F8: lbu         $v1, 0x8($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X8);
    // 0x802297FC: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x80229800: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80229804: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229808: sb          $v0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r2;
    // 0x8022980C: sb          $v1, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r3;
L_80229810:
    // 0x80229810: lbu         $v0, 0xD($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0XD);
    // 0x80229814: lw          $v1, 0x2C($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X2C);
    // 0x80229818: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022981C: sb          $v0, 0xD($t0)
    MEM_B(0XD, ctx->r8) = ctx->r2;
    // 0x80229820: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80229824: beq         $v0, $zero, L_80229838
    if (ctx->r2 == 0) {
        // 0x80229828: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229838;
    }
    // 0x80229828: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022982C: lbu         $v1, 0x8($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X8);
    // 0x80229830: bne         $v1, $v0, L_80229848
    if (ctx->r3 != ctx->r2) {
        // 0x80229834: nop
    
            goto L_80229848;
    }
    // 0x80229834: nop

L_80229838:
    // 0x80229838: lbu         $v0, 0x8($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X8);
    // 0x8022983C: sb          $zero, 0xD($t0)
    MEM_B(0XD, ctx->r8) = 0;
    // 0x80229840: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229844: sb          $v0, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r2;
L_80229848:
    // 0x80229848: lbu         $a2, 0xF($t0)
    ctx->r6 = MEM_BU(ctx->r8, 0XF);
    // 0x8022984C: lb          $v1, 0xD($t0)
    ctx->r3 = MEM_B(ctx->r8, 0XD);
    // 0x80229850: lhu         $a0, 0x24($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X24);
    // 0x80229854: lw          $a3, 0x28($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X28);
    // 0x80229858: lhu         $a1, 0x1E($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X1E);
    // 0x8022985C: sll         $a2, $a2, 24
    ctx->r6 = S32(ctx->r6 << 24);
    // 0x80229860: sra         $a2, $a2, 24
    ctx->r6 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80229864: sll         $v0, $v1, 8
    ctx->r2 = S32(ctx->r3 << 8);
    // 0x80229868: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8022986C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80229870: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229874: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x80229878: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022987C: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x80229880: addu        $a1, $a1, $a3
    ctx->r5 = ADD32(ctx->r5, ctx->r7);
    // 0x80229884: sw          $v0, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r2;
    // 0x80229888: sh          $a0, 0x24($t0)
    MEM_H(0X24, ctx->r8) = ctx->r4;
    // 0x8022988C: j           L_8022989C
    // 0x80229890: sh          $a1, 0x1E($t0)
    MEM_H(0X1E, ctx->r8) = ctx->r5;
        goto L_8022989C;
    // 0x80229890: sh          $a1, 0x1E($t0)
    MEM_H(0X1E, ctx->r8) = ctx->r5;
L_80229894:
    // 0x80229894: jal         0x8004F5C4
    // 0x80229898: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80229898: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    after_0:
L_8022989C:
    // 0x8022989C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802298A0: jr          $ra
    // 0x802298A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802298A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AB90_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AB90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AB94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AB98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AB9C: jal         0x800A3450
    // 0x8022ABA0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022ABA0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022ABA4: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022ABA8: bne         $v1, $zero, L_8022AC08
    if (ctx->r3 != 0) {
        // 0x8022ABAC: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_8022AC08;
    }
    // 0x8022ABAC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022ABB0: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022ABB4: andi        $v1, $a2, 0x7
    ctx->r3 = ctx->r6 & 0X7;
    // 0x8022ABB8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022ABBC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022ABC0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022ABC4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8022ABC8: srl         $v1, $a2, 2
    ctx->r3 = S32(U32(ctx->r6) >> 2);
    // 0x8022ABCC: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8022ABD0: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022ABD4: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8022ABD8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022ABDC: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8022ABE0: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022ABE4: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022ABE8: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8022ABEC: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x8022ABF0: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
    // 0x8022ABF4: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8022ABF8: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x8022ABFC: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x8022AC00: j           L_8022AC5C
    // 0x8022AC04: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_8022AC5C;
    // 0x8022AC04: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_8022AC08:
    // 0x8022AC08: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022AC0C: lhu         $v1, 0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6);
    // 0x8022AC10: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x8022AC14: lhu         $a1, 0xC($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XC);
    // 0x8022AC18: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022AC1C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022AC20: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x8022AC24: lhu         $v1, 0xE($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XE);
    // 0x8022AC28: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8022AC2C: addiu       $a1, $a1, -0x2
    ctx->r5 = ADD32(ctx->r5, -0X2);
    // 0x8022AC30: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8022AC34: srl         $v0, $a2, 4
    ctx->r2 = S32(U32(ctx->r6) >> 4);
    // 0x8022AC38: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    // 0x8022AC3C: lh          $a0, 0x6($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X6);
    // 0x8022AC40: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022AC44: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022AC48: sh          $a1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r5;
    // 0x8022AC4C: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
    // 0x8022AC50: bne         $a0, $zero, L_8022AC5C
    if (ctx->r4 != 0) {
        // 0x8022AC54: sh          $v1, 0xE($s0)
        MEM_H(0XE, ctx->r16) = ctx->r3;
            goto L_8022AC5C;
    }
    // 0x8022AC54: sh          $v1, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r3;
    // 0x8022AC58: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8022AC5C:
    // 0x8022AC5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AC60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AC64: jr          $ra
    // 0x8022AC68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AC68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A374_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A374: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022A378: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022A37C: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8022A380: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A384: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022A388: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022A38C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022A390: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A394: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
L_8022A398:
    // 0x8022A398: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022A39C: lbu         $v0, 0x3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3);
    // 0x8022A3A0: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x8022A3A4: beq         $v0, $zero, L_8022A3D4
    if (ctx->r2 == 0) {
        // 0x8022A3A8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8022A3D4;
    }
    // 0x8022A3A8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022A3AC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022A3B0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022A3B4:
    // 0x8022A3B4: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x8022A3B8: jal         0x8022A59C
    // 0x8022A3BC: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_8022A59C_ovl25(rdram, ctx);
        goto after_0;
    // 0x8022A3BC: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_0:
    // 0x8022A3C0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022A3C4: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8022A3C8: sltu        $v0, $v0, $s2
    ctx->r2 = ctx->r2 < ctx->r18 ? 1 : 0;
    // 0x8022A3CC: bne         $v0, $zero, L_8022A3B4
    if (ctx->r2 != 0) {
        // 0x8022A3D0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8022A3B4;
    }
    // 0x8022A3D0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022A3D4:
    // 0x8022A3D4: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022A3D8: addu        $a0, $s3, $v0
    ctx->r4 = ADD32(ctx->r19, ctx->r2);
    // 0x8022A3DC: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x8022A3E0: sltiu       $v0, $v1, 0x40
    ctx->r2 = ctx->r3 < 0X40 ? 1 : 0;
    // 0x8022A3E4: beq         $v0, $zero, L_8022A3F0
    if (ctx->r2 == 0) {
        // 0x8022A3E8: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022A3F0;
    }
    // 0x8022A3E8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022A3EC: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
L_8022A3F0:
    // 0x8022A3F0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8022A3F4: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022A3F8: sltiu       $v0, $v0, 0x9
    ctx->r2 = ctx->r2 < 0X9 ? 1 : 0;
    // 0x8022A3FC: bne         $v0, $zero, L_8022A398
    if (ctx->r2 != 0) {
        // 0x8022A400: andi        $v0, $s1, 0xFF
        ctx->r2 = ctx->r17 & 0XFF;
            goto L_8022A398;
    }
    // 0x8022A400: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022A404: lhu         $v0, 0x12($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X12);
    // 0x8022A408: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A40C: sh          $v0, 0x12($s3)
    MEM_H(0X12, ctx->r19) = ctx->r2;
    // 0x8022A410: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022A414: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A418: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022A41C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A420: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A424: jr          $ra
    // 0x8022A428: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022A428: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80233DF0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233DF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233DF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233DF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233DFC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80233E00: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80233E04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233E08: jal         0x8009A3B4
    // 0x80233E0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80233E0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80233E10: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80233E14: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80233E18: jal         0x8009A3B4
    // 0x80233E1C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80233E1C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80233E20: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80233E24: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80233E28: jal         0x8009A3B4
    // 0x80233E2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80233E2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80233E30: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80233E34: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233E38: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233E3C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233E40: lw          $v0, -0x1218($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1218);
    // 0x80233E44: jalr        $v0
    // 0x80233E48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80233E48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80233E4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233E50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233E54: jr          $ra
    // 0x80233E58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233E58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023C01C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C01C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023C020: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023C024: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023C028: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8023C02C: bne         $v1, $zero, L_8023C0A4
    if (ctx->r3 != 0) {
        // 0x8023C030: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023C0A4;
    }
    // 0x8023C030: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023C034: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023C038: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x8023C03C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023C040: addiu       $a1, $zero, -0x3
    ctx->r5 = ADD32(0, -0X3);
    // 0x8023C044: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C048: sb          $zero, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = 0;
    // 0x8023C04C: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x8023C050: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023C054: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x8023C058: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023C05C: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x8023C060: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023C064: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x8023C068: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023C06C: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8023C070: addiu       $s0, $s0, 0x178
    ctx->r16 = ADD32(ctx->r16, 0X178);
    // 0x8023C074: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C078: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x8023C07C: jal         0x8005FA7C
    // 0x8023C080: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x8023C080: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_0:
    // 0x8023C084: jal         0x8005FA7C
    // 0x8023C088: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x8023C088: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8023C08C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023C090: addiu       $a0, $a0, 0x47B8
    ctx->r4 = ADD32(ctx->r4, 0X47B8);
    // 0x8023C094: jal         0x8023C540
    // 0x8023C098: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8023C540_ovl25(rdram, ctx);
        goto after_2;
    // 0x8023C098: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8023C09C: j           L_8023C0D0
    // 0x8023C0A0: nop

        goto L_8023C0D0;
    // 0x8023C0A0: nop

L_8023C0A4:
    // 0x8023C0A4: bne         $v1, $v0, L_8023C0D0
    if (ctx->r3 != ctx->r2) {
        // 0x8023C0A8: nop
    
            goto L_8023C0D0;
    }
    // 0x8023C0A8: nop

    // 0x8023C0AC: jal         0x8004F228
    // 0x8023C0B0: nop

    func_8004F228_2A628(rdram, ctx);
        goto after_3;
    // 0x8023C0B0: nop

    after_3:
    // 0x8023C0B4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023C0B8: beq         $v1, $zero, L_8023C0D0
    if (ctx->r3 == 0) {
        // 0x8023C0BC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023C0D0;
    }
    // 0x8023C0BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023C0C0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023C0C4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8023C0C8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8023C0CC: sb          $zero, 0xF($v1)
    MEM_B(0XF, ctx->r3) = 0;
L_8023C0D0:
    // 0x8023C0D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023C0D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023C0D8: jr          $ra
    // 0x8023C0DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023C0DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234D20_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234D20: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80234D24: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80234D28: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80234D2C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80234D30: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x80234D34: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80234D38: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80234D3C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80234D40: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80234D44: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80234D48: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80234D4C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80234D50: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80234D54: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
L_80234D58:
    // 0x80234D58: sll         $s1, $v0, 3
    ctx->r17 = S32(ctx->r2 << 3);
    // 0x80234D5C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234D60: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80234D64: lh          $v0, -0x11D8($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X11D8);
    // 0x80234D68: lw          $v1, 0xD0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XD0);
    // 0x80234D6C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80234D70: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80234D74: beq         $v1, $zero, L_80234FCC
    if (ctx->r3 == 0) {
        // 0x80234D78: andi        $v0, $s6, 0xFF
        ctx->r2 = ctx->r22 & 0XFF;
            goto L_80234FCC;
    }
    // 0x80234D78: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x80234D7C: jal         0x8003B878
    // 0x80234D80: nop

    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x80234D80: nop

    after_0:
    // 0x80234D84: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234D88: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x80234D8C: lh          $v1, -0x11D8($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X11D8);
    // 0x80234D90: lw          $a0, 0xD0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XD0);
    // 0x80234D94: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x80234D98: sltu        $v1, $a0, $v1
    ctx->r3 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x80234D9C: beq         $v1, $zero, L_80234E14
    if (ctx->r3 == 0) {
        // 0x80234DA0: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_80234E14;
    }
    // 0x80234DA0: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80234DA4: addiu       $s5, $zero, 0x60
    ctx->r21 = ADD32(0, 0X60);
    // 0x80234DA8: addiu       $fp, $zero, 0xE0
    ctx->r30 = ADD32(0, 0XE0);
    // 0x80234DAC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234DB0: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80234DB4: lh          $v0, -0x11D2($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X11D2);
    // 0x80234DB8: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80234DBC: addu        $s0, $s0, $s1
    ctx->r16 = ADD32(ctx->r16, ctx->r17);
    // 0x80234DC0: lhu         $s0, -0x11D4($s0)
    ctx->r16 = MEM_HU(ctx->r16, -0X11D4);
    // 0x80234DC4: bgez        $v0, L_80234DD0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80234DC8: addiu       $s7, $zero, 0x60
        ctx->r23 = ADD32(0, 0X60);
            goto L_80234DD0;
    }
    // 0x80234DC8: addiu       $s7, $zero, 0x60
    ctx->r23 = ADD32(0, 0X60);
    // 0x80234DCC: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
L_80234DD0:
    // 0x80234DD0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234DD4: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x80234DD8: lh          $v1, -0x11D6($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X11D6);
    // 0x80234DDC: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80234DE0: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234DE4: mflo        $s4
    ctx->r20 = lo;
    // 0x80234DE8: nop

    // 0x80234DEC: nop

    // 0x80234DF0: bltzl       $v1, L_80234DF8
    if (SIGNED(ctx->r3) < 0) {
        // 0x80234DF4: addiu       $v1, $v1, 0xF
        ctx->r3 = ADD32(ctx->r3, 0XF);
            goto L_80234DF8;
    }
    goto skip_0;
    // 0x80234DF4: addiu       $v1, $v1, 0xF
    ctx->r3 = ADD32(ctx->r3, 0XF);
    skip_0:
L_80234DF8:
    // 0x80234DF8: sra         $v0, $v1, 4
    ctx->r2 = S32(SIGNED(ctx->r3) >> 4);
    // 0x80234DFC: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234E00: mflo        $s1
    ctx->r17 = lo;
    // 0x80234E04: nop

    // 0x80234E08: nop

    // 0x80234E0C: j           L_80234EF0
    // 0x80234E10: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
        goto L_80234EF0;
    // 0x80234E10: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
L_80234E14:
    // 0x80234E14: subu        $t1, $a0, $a3
    ctx->r9 = SUB32(ctx->r4, ctx->r7);
    // 0x80234E18: sll         $a0, $t1, 16
    ctx->r4 = S32(ctx->r9 << 16);
    // 0x80234E1C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80234E20: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80234E24: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80234E28: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80234E2C: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x80234E30: subu        $s5, $v1, $v0
    ctx->r21 = SUB32(ctx->r3, ctx->r2);
    // 0x80234E34: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x80234E38: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80234E3C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80234E40: addiu       $v1, $zero, -0x20
    ctx->r3 = ADD32(0, -0X20);
    // 0x80234E44: subu        $fp, $v1, $v0
    ctx->r30 = SUB32(ctx->r3, ctx->r2);
    // 0x80234E48: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234E4C: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x80234E50: lh          $v1, -0x11D2($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X11D2);
    // 0x80234E54: addu        $s7, $s5, $zero
    ctx->r23 = ADD32(ctx->r21, 0);
    // 0x80234E58: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80234E5C: addu        $s0, $s0, $s1
    ctx->r16 = ADD32(ctx->r16, ctx->r17);
    // 0x80234E60: lhu         $s0, -0x11D4($s0)
    ctx->r16 = MEM_HU(ctx->r16, -0X11D4);
    // 0x80234E64: bgez        $v1, L_80234E70
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80234E68: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_80234E70;
    }
    // 0x80234E68: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x80234E6C: addiu       $v0, $v1, 0xF
    ctx->r2 = ADD32(ctx->r3, 0XF);
L_80234E70:
    // 0x80234E70: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80234E74: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    // 0x80234E78: lh          $a1, -0x11D6($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X11D6);
    // 0x80234E7C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80234E80: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234E84: mflo        $t0
    ctx->r8 = lo;
    // 0x80234E88: nop

    // 0x80234E8C: nop

    // 0x80234E90: bgez        $a1, L_80234E9C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80234E94: addu        $a2, $a1, $zero
        ctx->r6 = ADD32(ctx->r5, 0);
            goto L_80234E9C;
    }
    // 0x80234E94: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x80234E98: addiu       $a2, $a1, 0xF
    ctx->r6 = ADD32(ctx->r5, 0XF);
L_80234E9C:
    // 0x80234E9C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80234EA0: sra         $v0, $a2, 4
    ctx->r2 = S32(SIGNED(ctx->r6) >> 4);
    // 0x80234EA4: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234EA8: mflo        $v1
    ctx->r3 = lo;
    // 0x80234EAC: nop

    // 0x80234EB0: nop

    // 0x80234EB4: bltzl       $a0, L_80234EBC
    if (SIGNED(ctx->r4) < 0) {
        // 0x80234EB8: addiu       $a0, $a0, 0x1F
        ctx->r4 = ADD32(ctx->r4, 0X1F);
            goto L_80234EBC;
    }
    goto skip_1;
    // 0x80234EB8: addiu       $a0, $a0, 0x1F
    ctx->r4 = ADD32(ctx->r4, 0X1F);
    skip_1:
L_80234EBC:
    // 0x80234EBC: sra         $v0, $a0, 5
    ctx->r2 = S32(SIGNED(ctx->r4) >> 5);
    // 0x80234EC0: mult        $t1, $v0
    result = S64(S32(ctx->r9)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234EC4: mflo        $v0
    ctx->r2 = lo;
    // 0x80234EC8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x80234ECC: nop

    // 0x80234ED0: bgez        $a0, L_80234EDC
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80234ED4: addu        $s4, $t0, $v0
        ctx->r20 = ADD32(ctx->r8, ctx->r2);
            goto L_80234EDC;
    }
    // 0x80234ED4: addu        $s4, $t0, $v0
    ctx->r20 = ADD32(ctx->r8, ctx->r2);
    // 0x80234ED8: addiu       $a0, $a0, 0x1F
    ctx->r4 = ADD32(ctx->r4, 0X1F);
L_80234EDC:
    // 0x80234EDC: sra         $v0, $a0, 5
    ctx->r2 = S32(SIGNED(ctx->r4) >> 5);
    // 0x80234EE0: mult        $t1, $v0
    result = S64(S32(ctx->r9)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234EE4: mflo        $v0
    ctx->r2 = lo;
    // 0x80234EE8: addu        $s1, $v1, $v0
    ctx->r17 = ADD32(ctx->r3, ctx->r2);
    // 0x80234EEC: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
L_80234EF0:
    // 0x80234EF0: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80234EF4: jal         0x800324B4
    // 0x80234EF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80234EF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80234EFC: sll         $s1, $s1, 16
    ctx->r17 = S32(ctx->r17 << 16);
    // 0x80234F00: sra         $s1, $s1, 16
    ctx->r17 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80234F04: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234F08: mflo        $v0
    ctx->r2 = lo;
    // 0x80234F0C: lhu         $v1, 0x14($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X14);
    // 0x80234F10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234F14: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80234F18: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234F1C: jal         0x80032498
    // 0x80234F20: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x80234F20: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_2:
    // 0x80234F24: nop

    // 0x80234F28: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234F2C: mflo        $v0
    ctx->r2 = lo;
    // 0x80234F30: lhu         $v1, 0x18($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X18);
    // 0x80234F34: lui         $a1, 0x3D48
    ctx->r5 = S32(0X3D48 << 16);
    // 0x80234F38: andi        $a0, $s7, 0xFF
    ctx->r4 = ctx->r23 & 0XFF;
    // 0x80234F3C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80234F40: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234F44: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    // 0x80234F48: lhu         $v0, 0x16($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X16);
    // 0x80234F4C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80234F50: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x80234F54: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x80234F58: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80234F5C: andi        $v0, $fp, 0xFF
    ctx->r2 = ctx->r30 & 0XFF;
    // 0x80234F60: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80234F64: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80234F68: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80234F6C: andi        $v0, $s5, 0xFF
    ctx->r2 = ctx->r21 & 0XFF;
    // 0x80234F70: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80234F74: sw          $a0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r4;
    // 0x80234F78: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x80234F7C: lh          $v1, 0x12($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X12);
    // 0x80234F80: ori         $a1, $a1, 0x2040
    ctx->r5 = ctx->r5 | 0X2040;
    // 0x80234F84: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234F88: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234F8C: sw          $v1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r3;
    // 0x80234F90: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x80234F94: lui         $v0, 0x2E
    ctx->r2 = S32(0X2E << 16);
    // 0x80234F98: ori         $v0, $v0, 0x205F
    ctx->r2 = ctx->r2 | 0X205F;
    // 0x80234F9C: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80234FA0: addiu       $v0, $zero, 0x3F40
    ctx->r2 = ADD32(0, 0X3F40);
    // 0x80234FA4: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x80234FA8: addiu       $v0, $zero, 0x3F5F
    ctx->r2 = ADD32(0, 0X3F5F);
    // 0x80234FAC: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x80234FB0: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80234FB4: sw          $a1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r5;
    // 0x80234FB8: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x80234FBC: sw          $zero, 0x20($s2)
    MEM_W(0X20, ctx->r18) = 0;
    // 0x80234FC0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80234FC4: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
    // 0x80234FC8: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
L_80234FCC:
    // 0x80234FCC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80234FD0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234FD4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234FD8: lh          $v0, -0x11D8($at)
    ctx->r2 = MEM_H(ctx->r1, -0X11D8);
    // 0x80234FDC: lw          $v1, 0xD0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XD0);
    // 0x80234FE0: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80234FE4: bne         $v1, $v0, L_80234FF8
    if (ctx->r3 != ctx->r2) {
        // 0x80234FE8: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_80234FF8;
    }
    // 0x80234FE8: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x80234FEC: lbu         $v0, 0xB($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XB);
    // 0x80234FF0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80234FF4: sb          $v0, 0xB($s3)
    MEM_B(0XB, ctx->r19) = ctx->r2;
L_80234FF8:
    // 0x80234FF8: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x80234FFC: sltiu       $v0, $v0, 0x18
    ctx->r2 = ctx->r2 < 0X18 ? 1 : 0;
    // 0x80235000: bne         $v0, $zero, L_80234D58
    if (ctx->r2 != 0) {
        // 0x80235004: andi        $v0, $s6, 0xFF
        ctx->r2 = ctx->r22 & 0XFF;
            goto L_80234D58;
    }
    // 0x80235004: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x80235008: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8023500C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80235010: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80235014: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80235018: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8023501C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80235020: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80235024: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80235028: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023502C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80235030: jr          $ra
    // 0x80235034: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80235034: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80235038: nop

    // 0x8023503C: nop

;}
RECOMP_FUNC void func_80233340_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233340: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233344: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233348: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023334C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233350: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233354: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233358: lw          $v0, -0x123C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X123C);
    // 0x8023335C: jalr        $v0
    // 0x80233360: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80233360: nop

    after_0:
    // 0x80233364: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233368: jr          $ra
    // 0x8023336C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023336C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CC74_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CC74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CC78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CC7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CC80: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CC84: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x8022CC88: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022CC8C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022CC90: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022CC94: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022CC98: jal         0x8004D5D4
    // 0x8022CC9C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022CC9C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022CCA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CCA4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022CCA8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x8022CCAC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022CCB0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022CCB4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022CCB8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022CCBC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022CCC0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022CCC4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022CCC8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022CCCC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022CCD0: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022CCD4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022CCD8: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x8022CCDC: jal         0x8022D2B4
    // 0x8022CCE0: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_8022D2B4_ovl25(rdram, ctx);
        goto after_1;
    // 0x8022CCE0: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_1:
    // 0x8022CCE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CCE8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022CCEC: jal         0x8022D2DC
    // 0x8022CCF0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8022D2DC_ovl25(rdram, ctx);
        goto after_2;
    // 0x8022CCF0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_2:
    // 0x8022CCF4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022CCF8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022CCFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CD00: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022CD04: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022CD08: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CD0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CD10: jr          $ra
    // 0x8022CD14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CD14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B674_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B674: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B678: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x8022B67C: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
    // 0x8022B680: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x8022B684: sb          $v0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r2;
    // 0x8022B688: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022B68C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022B690: lw          $v0, -0x1D84($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1D84);
    // 0x8022B694: jr          $ra
    // 0x8022B698: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022B698: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80233030_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233030: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233034: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233038: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023303C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233040: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80233044: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233048: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023304C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233050: lw          $v0, -0x13B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X13B0);
    // 0x80233054: jalr        $v0
    // 0x80233058: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80233058: nop

    after_0:
    // 0x8023305C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80233060: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80233064: jal         0x8009A3B4
    // 0x80233068: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80233068: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8023306C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80233070: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80233074: jal         0x8009A3B4
    // 0x80233078: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80233078: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8023307C: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80233080: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80233084: jal         0x8009A3B4
    // 0x80233088: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80233088: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8023308C: jal         0x800504EC
    // 0x80233090: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_4;
    // 0x80233090: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80233094: jal         0x8005129C
    // 0x80233098: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_5;
    // 0x80233098: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8023309C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802330A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802330A4: jr          $ra
    // 0x802330A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802330A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E6BC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E6BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E6C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E6C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E6C8: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022E6CC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022E6D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E6D4: jal         0x8009A3B4
    // 0x8022E6D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022E6D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022E6DC: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022E6E0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022E6E4: jal         0x8009A3B4
    // 0x8022E6E8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022E6E8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022E6EC: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022E6F0: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022E6F4: jal         0x8009A3B4
    // 0x8022E6F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022E6F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022E6FC: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022E700: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E704: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022E708: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022E70C: jal         0x8022E78C
    // 0x8022E710: sb          $v1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r3;
    func_8022E78C_ovl25(rdram, ctx);
        goto after_3;
    // 0x8022E710: sb          $v1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r3;
    after_3:
    // 0x8022E714: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022E718: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E71C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E720: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E724: lw          $v0, -0x1668($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1668);
    // 0x8022E728: jalr        $v0
    // 0x8022E72C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8022E72C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022E730: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022E734: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022E738: beq         $a1, $v0, L_8022E750
    if (ctx->r5 == ctx->r2) {
        // 0x8022E73C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E750;
    }
    // 0x8022E73C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E740: jal         0x80050294
    // 0x8022E744: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022E744: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022E748: j           L_8022E758
    // 0x8022E74C: nop

        goto L_8022E758;
    // 0x8022E74C: nop

L_8022E750:
    // 0x8022E750: jal         0x8005044C
    // 0x8022E754: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8022E754: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8022E758:
    // 0x8022E758: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E75C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E760: beq         $v1, $v0, L_8022E77C
    if (ctx->r3 == ctx->r2) {
        // 0x8022E764: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022E77C;
    }
    // 0x8022E764: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022E768: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022E76C: beq         $v1, $v0, L_8022E77C
    if (ctx->r3 == ctx->r2) {
        // 0x8022E770: nop
    
            goto L_8022E77C;
    }
    // 0x8022E770: nop

    // 0x8022E774: jal         0x8022E824
    // 0x8022E778: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022E824_ovl25(rdram, ctx);
        goto after_7;
    // 0x8022E778: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_8022E77C:
    // 0x8022E77C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E780: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E784: jr          $ra
    // 0x8022E788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B424_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B424: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B428: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023B42C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B430: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8023B434: bne         $v1, $zero, L_8023B4AC
    if (ctx->r3 != 0) {
        // 0x8023B438: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023B4AC;
    }
    // 0x8023B438: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B43C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023B440: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x8023B444: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023B448: addiu       $a1, $zero, -0x3
    ctx->r5 = ADD32(0, -0X3);
    // 0x8023B44C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B450: sb          $zero, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = 0;
    // 0x8023B454: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x8023B458: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023B45C: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x8023B460: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023B464: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x8023B468: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023B46C: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x8023B470: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023B474: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8023B478: addiu       $s0, $s0, -0x42C
    ctx->r16 = ADD32(ctx->r16, -0X42C);
    // 0x8023B47C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B480: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x8023B484: jal         0x8005FA7C
    // 0x8023B488: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x8023B488: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_0:
    // 0x8023B48C: jal         0x8005FA7C
    // 0x8023B490: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x8023B490: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8023B494: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023B498: addiu       $a0, $a0, 0x47B8
    ctx->r4 = ADD32(ctx->r4, 0X47B8);
    // 0x8023B49C: jal         0x8023B794
    // 0x8023B4A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8023B794_ovl25(rdram, ctx);
        goto after_2;
    // 0x8023B4A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8023B4A4: j           L_8023B4D8
    // 0x8023B4A8: nop

        goto L_8023B4D8;
    // 0x8023B4A8: nop

L_8023B4AC:
    // 0x8023B4AC: bne         $v1, $v0, L_8023B4D8
    if (ctx->r3 != ctx->r2) {
        // 0x8023B4B0: nop
    
            goto L_8023B4D8;
    }
    // 0x8023B4B0: nop

    // 0x8023B4B4: jal         0x8004F228
    // 0x8023B4B8: nop

    func_8004F228_2A628(rdram, ctx);
        goto after_3;
    // 0x8023B4B8: nop

    after_3:
    // 0x8023B4BC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023B4C0: beq         $v1, $zero, L_8023B4D8
    if (ctx->r3 == 0) {
        // 0x8023B4C4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023B4D8;
    }
    // 0x8023B4C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B4C8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023B4CC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8023B4D0: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8023B4D4: sb          $zero, 0xF($v1)
    MEM_B(0XF, ctx->r3) = 0;
L_8023B4D8:
    // 0x8023B4D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023B4DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B4E0: jr          $ra
    // 0x8023B4E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B4E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023AE1C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AE1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023AE20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023AE24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023AE28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023AE2C: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x8023AE30: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8023AE34: beq         $v0, $zero, L_8023AF6C
    if (ctx->r2 == 0) {
        // 0x8023AE38: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8023AF6C;
    }
    // 0x8023AE38: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023AE3C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023AE40: addu        $at, $at, $v0
    gpr jr_addend_8023AE48 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023AE44: lw          $v0, 0x1120($at)
    ctx->r2 = ADD32(ctx->r1, 0X1120);
    // 0x8023AE48: jr          $v0
    // 0x8023AE4C: nop

    switch (jr_addend_8023AE48 >> 2) {
        case 0: goto L_8023AE50; break;
        case 1: goto L_8023AEA0; break;
        case 2: goto L_8023AEC8; break;
        case 3: goto L_8023AEFC; break;
        case 4: goto L_8023AF14; break;
        default: switch_error(__func__, 0x8023AE48, 0x80241120);
    }
    // 0x8023AE4C: nop

L_8023AE50:
    // 0x8023AE50: jal         0x8005FB90
    // 0x8023AE54: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_0;
    // 0x8023AE54: nop

    after_0:
    // 0x8023AE58: jal         0x80036B7C
    // 0x8023AE5C: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_1;
    // 0x8023AE5C: nop

    after_1:
    // 0x8023AE60: beq         $v0, $zero, L_8023AF6C
    if (ctx->r2 == 0) {
        // 0x8023AE64: nop
    
            goto L_8023AF6C;
    }
    // 0x8023AE64: nop

    // 0x8023AE68: jal         0x80060170
    // 0x8023AE6C: nop

    func_80060170_3B570(rdram, ctx);
        goto after_2;
    // 0x8023AE6C: nop

    after_2:
    // 0x8023AE70: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8023AE74: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023AE78: addiu       $v0, $v0, -0x380
    ctx->r2 = ADD32(ctx->r2, -0X380);
    // 0x8023AE7C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8023AE80: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x8023AE84: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023AE88: addiu       $v0, $v0, 0x70
    ctx->r2 = ADD32(ctx->r2, 0X70);
    // 0x8023AE8C: jal         0x80036E48
    // 0x8023AE90: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    func_80036E48_12248(rdram, ctx);
        goto after_3;
    // 0x8023AE90: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    after_3:
    // 0x8023AE94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023AE98: j           L_8023AF6C
    // 0x8023AE9C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_8023AF6C;
    // 0x8023AE9C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_8023AEA0:
    // 0x8023AEA0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023AEA4: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8023AEA8: bne         $v0, $zero, L_8023AEC8
    if (ctx->r2 != 0) {
        // 0x8023AEAC: nop
    
            goto L_8023AEC8;
    }
    // 0x8023AEAC: nop

    // 0x8023AEB0: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x8023AEB4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023AEB8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023AEBC: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8023AEC0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023AEC4: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
L_8023AEC8:
    // 0x8023AEC8: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x8023AECC: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x8023AED0: jalr        $v0
    // 0x8023AED4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8023AED4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8023AED8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023AEDC: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x8023AEE0: bne         $v0, $zero, L_8023AF64
    if (ctx->r2 != 0) {
        // 0x8023AEE4: andi        $v0, $v1, 0x1
        ctx->r2 = ctx->r3 & 0X1;
            goto L_8023AF64;
    }
    // 0x8023AEE4: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8023AEE8: beq         $v0, $zero, L_8023AF64
    if (ctx->r2 == 0) {
        // 0x8023AEEC: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_8023AF64;
    }
    // 0x8023AEEC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x8023AEF0: ori         $v0, $v1, 0x2
    ctx->r2 = ctx->r3 | 0X2;
    // 0x8023AEF4: j           L_8023AF4C
    // 0x8023AEF8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8023AF4C;
    // 0x8023AEF8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023AEFC:
    // 0x8023AEFC: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x8023AF00: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x8023AF04: jalr        $v0
    // 0x8023AF08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8023AF08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8023AF0C: j           L_8023AF64
    // 0x8023AF10: nop

        goto L_8023AF64;
    // 0x8023AF10: nop

L_8023AF14:
    // 0x8023AF14: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8023AF18: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023AF1C: beq         $v1, $v0, L_8023AF54
    if (ctx->r3 == ctx->r2) {
        // 0x8023AF20: nop
    
            goto L_8023AF54;
    }
    // 0x8023AF20: nop

    // 0x8023AF24: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x8023AF28: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x8023AF2C: jalr        $v0
    // 0x8023AF30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x8023AF30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8023AF34: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023AF38: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x8023AF3C: bne         $v0, $zero, L_8023AF64
    if (ctx->r2 != 0) {
        // 0x8023AF40: andi        $v0, $v1, 0x1
        ctx->r2 = ctx->r3 & 0X1;
            goto L_8023AF64;
    }
    // 0x8023AF40: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8023AF44: beq         $v0, $zero, L_8023AF64
    if (ctx->r2 == 0) {
        // 0x8023AF48: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_8023AF64;
    }
    // 0x8023AF48: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_8023AF4C:
    // 0x8023AF4C: jal         0x80036E48
    // 0x8023AF50: nop

    func_80036E48_12248(rdram, ctx);
        goto after_7;
    // 0x8023AF50: nop

    after_7:
L_8023AF54:
    // 0x8023AF54: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8023AF58: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8023AF5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023AF60: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8023AF64:
    // 0x8023AF64: jal         0x8005FB90
    // 0x8023AF68: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_8;
    // 0x8023AF68: nop

    after_8:
L_8023AF6C:
    // 0x8023AF6C: jal         0x8006072C
    // 0x8023AF70: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_9;
    // 0x8023AF70: nop

    after_9:
    // 0x8023AF74: beq         $v0, $zero, L_8023AF88
    if (ctx->r2 == 0) {
        // 0x8023AF78: nop
    
            goto L_8023AF88;
    }
    // 0x8023AF78: nop

    // 0x8023AF7C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023AF80: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023AF84: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023AF88:
    // 0x8023AF88: jal         0x80060018
    // 0x8023AF8C: nop

    func_80060018_3B418(rdram, ctx);
        goto after_10;
    // 0x8023AF8C: nop

    after_10:
    // 0x8023AF90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023AF94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023AF98: jr          $ra
    // 0x8023AF9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023AF9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C6F0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C6F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022C6F4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022C6F8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8022C6FC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022C700: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022C704: lb          $v0, 0x5($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X5);
    // 0x8022C708: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022C70C: bne         $v0, $zero, L_8022C790
    if (ctx->r2 != 0) {
        // 0x8022C710: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022C790;
    }
    // 0x8022C710: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C714: lb          $v0, 0x4($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X4);
    // 0x8022C718: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x8022C71C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C720: lb          $v1, 0x0($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X0);
    // 0x8022C724: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8022C728: beq         $v1, $v0, L_8022C798
    if (ctx->r3 == ctx->r2) {
        // 0x8022C72C: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8022C798;
    }
    // 0x8022C72C: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022C730: beql        $v1, $v0, L_8022C738
    if (ctx->r3 == ctx->r2) {
        // 0x8022C734: sb          $zero, 0x4($s0)
        MEM_B(0X4, ctx->r16) = 0;
            goto L_8022C738;
    }
    goto skip_0;
    // 0x8022C734: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    skip_0:
L_8022C738:
    // 0x8022C738: lb          $v1, 0x4($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X4);
    // 0x8022C73C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8022C740: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8022C744: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C748: lb          $a0, 0x0($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X0);
    // 0x8022C74C: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8022C750: jal         0x8003B85C
    // 0x8022C754: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x8022C754: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x8022C758: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8022C75C: lui         $a1, 0x10
    ctx->r5 = S32(0X10 << 16);
    // 0x8022C760: ori         $a1, $a1, 0xF
    ctx->r5 = ctx->r5 | 0XF;
    // 0x8022C764: jal         0x8003B840
    // 0x8022C768: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x8022C768: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8022C76C: lb          $v1, 0x4($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X4);
    // 0x8022C770: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8022C774: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C778: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022C77C: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x8022C780: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022C784: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022C788: j           L_8022C798
    // 0x8022C78C: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
        goto L_8022C798;
    // 0x8022C78C: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
L_8022C790:
    // 0x8022C790: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022C794: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_8022C798:
    // 0x8022C798: lb          $v0, 0x7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X7);
    // 0x8022C79C: bne         $v0, $zero, L_8022C820
    if (ctx->r2 != 0) {
        // 0x8022C7A0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022C820;
    }
    // 0x8022C7A0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C7A4: lb          $v0, 0x6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X6);
    // 0x8022C7A8: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x8022C7AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C7B0: lb          $v1, 0x0($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X0);
    // 0x8022C7B4: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8022C7B8: beq         $v1, $v0, L_8022C828
    if (ctx->r3 == ctx->r2) {
        // 0x8022C7BC: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8022C828;
    }
    // 0x8022C7BC: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022C7C0: beql        $v1, $v0, L_8022C7C8
    if (ctx->r3 == ctx->r2) {
        // 0x8022C7C4: sb          $zero, 0x6($s0)
        MEM_B(0X6, ctx->r16) = 0;
            goto L_8022C7C8;
    }
    goto skip_1;
    // 0x8022C7C4: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    skip_1:
L_8022C7C8:
    // 0x8022C7C8: lb          $v1, 0x6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X6);
    // 0x8022C7CC: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x8022C7D0: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8022C7D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C7D8: lb          $a0, 0x0($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X0);
    // 0x8022C7DC: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8022C7E0: jal         0x8003B85C
    // 0x8022C7E4: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x8022C7E4: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x8022C7E8: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8022C7EC: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x8022C7F0: ori         $a1, $a1, 0x11
    ctx->r5 = ctx->r5 | 0X11;
    // 0x8022C7F4: jal         0x8003B840
    // 0x8022C7F8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x8022C7F8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
    // 0x8022C7FC: lb          $v1, 0x6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X6);
    // 0x8022C800: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x8022C804: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C808: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022C80C: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x8022C810: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022C814: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x8022C818: j           L_8022C828
    // 0x8022C81C: sb          $v1, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r3;
        goto L_8022C828;
    // 0x8022C81C: sb          $v1, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r3;
L_8022C820:
    // 0x8022C820: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022C824: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
L_8022C828:
    // 0x8022C828: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022C82C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022C830: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022C834: jr          $ra
    // 0x8022C838: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022C838: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022B7D0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B7D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022B7D4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022B7D8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8022B7DC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022B7E0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022B7E4: lb          $v0, 0x5($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X5);
    // 0x8022B7E8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022B7EC: bne         $v0, $zero, L_8022B870
    if (ctx->r2 != 0) {
        // 0x8022B7F0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022B870;
    }
    // 0x8022B7F0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B7F4: lb          $v0, 0x4($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X4);
    // 0x8022B7F8: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x8022B7FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B800: lb          $v1, 0x0($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X0);
    // 0x8022B804: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8022B808: beq         $v1, $v0, L_8022B878
    if (ctx->r3 == ctx->r2) {
        // 0x8022B80C: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8022B878;
    }
    // 0x8022B80C: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022B810: beql        $v1, $v0, L_8022B818
    if (ctx->r3 == ctx->r2) {
        // 0x8022B814: sb          $zero, 0x4($s0)
        MEM_B(0X4, ctx->r16) = 0;
            goto L_8022B818;
    }
    goto skip_0;
    // 0x8022B814: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    skip_0:
L_8022B818:
    // 0x8022B818: lb          $v1, 0x4($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X4);
    // 0x8022B81C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8022B820: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8022B824: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B828: lb          $a0, 0x0($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X0);
    // 0x8022B82C: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8022B830: jal         0x8003B85C
    // 0x8022B834: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x8022B834: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x8022B838: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8022B83C: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x8022B840: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x8022B844: jal         0x8003B840
    // 0x8022B848: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x8022B848: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8022B84C: lb          $v1, 0x4($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X4);
    // 0x8022B850: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8022B854: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B858: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B85C: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x8022B860: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022B864: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022B868: j           L_8022B878
    // 0x8022B86C: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
        goto L_8022B878;
    // 0x8022B86C: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
L_8022B870:
    // 0x8022B870: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022B874: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_8022B878:
    // 0x8022B878: lb          $v0, 0x7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X7);
    // 0x8022B87C: bne         $v0, $zero, L_8022B900
    if (ctx->r2 != 0) {
        // 0x8022B880: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022B900;
    }
    // 0x8022B880: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B884: lb          $v0, 0x6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X6);
    // 0x8022B888: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x8022B88C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B890: lb          $v1, 0x0($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X0);
    // 0x8022B894: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8022B898: beq         $v1, $v0, L_8022B908
    if (ctx->r3 == ctx->r2) {
        // 0x8022B89C: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8022B908;
    }
    // 0x8022B89C: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022B8A0: beql        $v1, $v0, L_8022B8A8
    if (ctx->r3 == ctx->r2) {
        // 0x8022B8A4: sb          $zero, 0x6($s0)
        MEM_B(0X6, ctx->r16) = 0;
            goto L_8022B8A8;
    }
    goto skip_1;
    // 0x8022B8A4: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    skip_1:
L_8022B8A8:
    // 0x8022B8A8: lb          $v1, 0x6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X6);
    // 0x8022B8AC: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x8022B8B0: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8022B8B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B8B8: lb          $a0, 0x0($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X0);
    // 0x8022B8BC: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8022B8C0: jal         0x8003B85C
    // 0x8022B8C4: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x8022B8C4: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x8022B8C8: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8022B8CC: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x8022B8D0: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x8022B8D4: jal         0x8003B840
    // 0x8022B8D8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x8022B8D8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
    // 0x8022B8DC: lb          $v1, 0x6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X6);
    // 0x8022B8E0: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x8022B8E4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B8E8: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022B8EC: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x8022B8F0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022B8F4: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x8022B8F8: j           L_8022B908
    // 0x8022B8FC: sb          $v1, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r3;
        goto L_8022B908;
    // 0x8022B8FC: sb          $v1, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r3;
L_8022B900:
    // 0x8022B900: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022B904: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
L_8022B908:
    // 0x8022B908: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022B90C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022B910: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022B914: jr          $ra
    // 0x8022B918: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022B918: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80225884_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225884: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225888: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x8022588C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225890: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80225894: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225898: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022589C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x802258A0: lui         $a1, 0xFF
    ctx->r5 = S32(0XFF << 16);
    // 0x802258A4: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x802258A8: lui         $a2, 0x1C00
    ctx->r6 = S32(0X1C00 << 16);
    // 0x802258AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802258B0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802258B4: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
L_802258B8:
    // 0x802258B8: sra         $v0, $v0, 21
    ctx->r2 = S32(SIGNED(ctx->r2) >> 21);
    // 0x802258BC: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x802258C0: lw          $v1, 0x3C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X3C);
    // 0x802258C4: and         $v0, $v1, $a1
    ctx->r2 = ctx->r3 & ctx->r5;
    // 0x802258C8: beq         $v0, $zero, L_802258D8
    if (ctx->r2 == 0) {
        // 0x802258CC: and         $v0, $v1, $a2
        ctx->r2 = ctx->r3 & ctx->r6;
            goto L_802258D8;
    }
    // 0x802258CC: and         $v0, $v1, $a2
    ctx->r2 = ctx->r3 & ctx->r6;
    // 0x802258D0: bnel        $v0, $zero, L_802258D8
    if (ctx->r2 != 0) {
        // 0x802258D4: addu        $s0, $v1, $zero
        ctx->r16 = ADD32(ctx->r3, 0);
            goto L_802258D8;
    }
    goto skip_0;
    // 0x802258D4: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
    skip_0:
L_802258D8:
    // 0x802258D8: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802258DC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802258E0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802258E4: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802258E8: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x802258EC: bne         $v0, $zero, L_802258B8
    if (ctx->r2 != 0) {
        // 0x802258F0: sll         $v0, $a0, 24
        ctx->r2 = S32(ctx->r4 << 24);
            goto L_802258B8;
    }
    // 0x802258F0: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
    // 0x802258F4: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x802258F8: beq         $v0, $zero, L_8022597C
    if (ctx->r2 == 0) {
        // 0x802258FC: nop
    
            goto L_8022597C;
    }
    // 0x802258FC: nop

    // 0x80225900: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80225904: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80225908: beql        $v0, $zero, L_80225970
    if (ctx->r2 == 0) {
        // 0x8022590C: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_80225970;
    }
    goto skip_1;
    // 0x8022590C: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_1:
    // 0x80225910: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225914: lhu         $v0, -0x3AA4($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3AA4);
    // 0x80225918: bne         $v0, $zero, L_8022597C
    if (ctx->r2 != 0) {
        // 0x8022591C: addiu       $a0, $zero, 0x1E
        ctx->r4 = ADD32(0, 0X1E);
            goto L_8022597C;
    }
    // 0x8022591C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x80225920: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x80225924: addiu       $s2, $a3, 0x14
    ctx->r18 = ADD32(ctx->r7, 0X14);
    // 0x80225928: addiu       $a2, $zero, 0x2800
    ctx->r6 = ADD32(0, 0X2800);
    // 0x8022592C: jal         0x8003491C
    // 0x80225930: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_8003491C_FD1C(rdram, ctx);
        goto after_0;
    // 0x80225930: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_0:
    // 0x80225934: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225938: lhu         $v0, -0x3BBC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3BBC);
    // 0x8022593C: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x80225940: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225944: sh          $v0, -0x3BBC($at)
    MEM_H(-0X3BBC, ctx->r1) = ctx->r2;
    // 0x80225948: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022594C: bgtz        $v0, L_80225968
    if (SIGNED(ctx->r2) > 0) {
        // 0x80225950: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80225968;
    }
    // 0x80225950: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80225954: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225958: sh          $zero, -0x3BBC($at)
    MEM_H(-0X3BBC, ctx->r1) = 0;
    // 0x8022595C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80225960: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80225964: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80225968:
    // 0x80225968: j           L_80225974
    // 0x8022596C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
        goto L_80225974;
    // 0x8022596C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
L_80225970:
    // 0x80225970: addiu       $a1, $a3, 0x14
    ctx->r5 = ADD32(ctx->r7, 0X14);
L_80225974:
    // 0x80225974: jal         0x8002A33C
    // 0x80225978: nop

    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80225978: nop

    after_1:
L_8022597C:
    // 0x8022597C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80225980: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80225984: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225988: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022598C: jr          $ra
    // 0x80225990: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225990: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80235070_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235070: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235074: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235078: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023507C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235080: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80235084: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80235088: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023508C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80235090: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80235094: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80235098: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023509C: jal         0x8009A3B4
    // 0x802350A0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802350A0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x802350A4: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802350A8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802350AC: jal         0x8009A3B4
    // 0x802350B0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802350B0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802350B4: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x802350B8: sb          $zero, 0x1($s1)
    MEM_B(0X1, ctx->r17) = 0;
    // 0x802350BC: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
    // 0x802350C0: jal         0x800A3450
    // 0x802350C4: sh          $zero, 0x6($s1)
    MEM_H(0X6, ctx->r17) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x802350C4: sh          $zero, 0x6($s1)
    MEM_H(0X6, ctx->r17) = 0;
    after_2:
    // 0x802350C8: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802350CC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802350D0: bltz        $v1, L_80235258
    if (SIGNED(ctx->r3) < 0) {
        // 0x802350D4: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_80235258;
    }
    // 0x802350D4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x802350D8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802350DC: bne         $v0, $zero, L_802350F4
    if (ctx->r2 != 0) {
        // 0x802350E0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802350F4;
    }
    // 0x802350E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802350E4: beq         $v1, $v0, L_80235184
    if (ctx->r3 == ctx->r2) {
        // 0x802350E8: nop
    
            goto L_80235184;
    }
    // 0x802350E8: nop

    // 0x802350EC: j           L_80235258
    // 0x802350F0: nop

        goto L_80235258;
    // 0x802350F0: nop

L_802350F4:
    // 0x802350F4: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x802350F8: bne         $v0, $zero, L_80235128
    if (ctx->r2 != 0) {
        // 0x802350FC: andi        $v1, $a0, 0xF
        ctx->r3 = ctx->r4 & 0XF;
            goto L_80235128;
    }
    // 0x802350FC: andi        $v1, $a0, 0xF
    ctx->r3 = ctx->r4 & 0XF;
    // 0x80235100: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80235104: andi        $v0, $a0, 0xF
    ctx->r2 = ctx->r4 & 0XF;
    // 0x80235108: addiu       $v0, $v0, 0x1900
    ctx->r2 = ADD32(ctx->r2, 0X1900);
    // 0x8023510C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80235110: sh          $v1, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r3;
    // 0x80235114: srl         $v1, $a0, 2
    ctx->r3 = S32(U32(ctx->r4) >> 2);
    // 0x80235118: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x8023511C: addiu       $v0, $zero, -0x50
    ctx->r2 = ADD32(0, -0X50);
    // 0x80235120: j           L_80235144
    // 0x80235124: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
        goto L_80235144;
    // 0x80235124: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
L_80235128:
    // 0x80235128: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8023512C: addiu       $v1, $v1, 0x1900
    ctx->r3 = ADD32(ctx->r3, 0X1900);
    // 0x80235130: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235134: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
    // 0x80235138: srl         $v0, $a0, 2
    ctx->r2 = S32(U32(ctx->r4) >> 2);
    // 0x8023513C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80235140: addiu       $v0, $v0, 0x50
    ctx->r2 = ADD32(ctx->r2, 0X50);
L_80235144:
    // 0x80235144: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80235148: lui         $v1, 0x3D08
    ctx->r3 = S32(0X3D08 << 16);
    // 0x8023514C: ori         $v1, $v1, 0xE
    ctx->r3 = ctx->r3 | 0XE;
    // 0x80235150: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x80235154: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80235158: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8023515C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80235160: sw          $v1, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r3;
    // 0x80235164: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x80235168: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023516C: lbu         $v0, -0x10F8($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X10F8);
    // 0x80235170: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x80235174: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235178: lbu         $v0, -0x10F7($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X10F7);
    // 0x8023517C: j           L_80235258
    // 0x80235180: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_80235258;
    // 0x80235180: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80235184:
    // 0x80235184: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80235188: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8023518C: beq         $v0, $zero, L_802351E0
    if (ctx->r2 == 0) {
        // 0x80235190: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802351E0;
    }
    // 0x80235190: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80235194: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235198: addu        $at, $at, $v0
    gpr jr_addend_802351A0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023519C: lw          $v0, 0x1010($at)
    ctx->r2 = ADD32(ctx->r1, 0X1010);
    // 0x802351A0: jr          $v0
    // 0x802351A4: nop

    switch (jr_addend_802351A0 >> 2) {
        case 0: goto L_802351A8; break;
        case 1: goto L_802351B8; break;
        case 2: goto L_802351C8; break;
        case 3: goto L_802351D4; break;
        case 4: goto L_802351D4; break;
        case 5: goto L_802351C8; break;
        case 6: goto L_802351B8; break;
        case 7: goto L_802351A8; break;
        default: switch_error(__func__, 0x802351A0, 0x80241010);
    }
    // 0x802351A4: nop

L_802351A8:
    // 0x802351A8: andi        $v1, $a1, 0xF
    ctx->r3 = ctx->r5 & 0XF;
    // 0x802351AC: addiu       $v0, $zero, -0x20
    ctx->r2 = ADD32(0, -0X20);
    // 0x802351B0: j           L_802351DC
    // 0x802351B4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
        goto L_802351DC;
    // 0x802351B4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
L_802351B8:
    // 0x802351B8: andi        $v1, $a1, 0x7
    ctx->r3 = ctx->r5 & 0X7;
    // 0x802351BC: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x802351C0: j           L_802351DC
    // 0x802351C4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
        goto L_802351DC;
    // 0x802351C4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
L_802351C8:
    // 0x802351C8: andi        $v0, $a1, 0x7
    ctx->r2 = ctx->r5 & 0X7;
    // 0x802351CC: j           L_802351DC
    // 0x802351D0: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
        goto L_802351DC;
    // 0x802351D0: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_802351D4:
    // 0x802351D4: andi        $v0, $a1, 0xF
    ctx->r2 = ctx->r5 & 0XF;
    // 0x802351D8: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
L_802351DC:
    // 0x802351DC: sh          $v0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r2;
L_802351E0:
    // 0x802351E0: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x802351E4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802351E8: bne         $v0, $zero, L_80235208
    if (ctx->r2 != 0) {
        // 0x802351EC: srl         $v0, $a1, 3
        ctx->r2 = S32(U32(ctx->r5) >> 3);
            goto L_80235208;
    }
    // 0x802351EC: srl         $v0, $a1, 3
    ctx->r2 = S32(U32(ctx->r5) >> 3);
    // 0x802351F0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802351F4: addiu       $v1, $zero, -0x20
    ctx->r3 = ADD32(0, -0X20);
    // 0x802351F8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802351FC: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x80235200: j           L_80235218
    // 0x80235204: sh          $v1, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r3;
        goto L_80235218;
    // 0x80235204: sh          $v1, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r3;
L_80235208:
    // 0x80235208: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8023520C: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80235210: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x80235214: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
L_80235218:
    // 0x80235218: sh          $v0, 0x50($s0)
    MEM_H(0X50, ctx->r16) = ctx->r2;
    // 0x8023521C: lui         $a0, 0x3C48
    ctx->r4 = S32(0X3C48 << 16);
    // 0x80235220: ori         $a0, $a0, 0xE
    ctx->r4 = ctx->r4 | 0XE;
    // 0x80235224: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x80235228: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8023522C: srl         $v0, $a1, 6
    ctx->r2 = S32(U32(ctx->r5) >> 6);
    // 0x80235230: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80235234: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x80235238: sw          $a0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r4;
    // 0x8023523C: sw          $v1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r3;
    // 0x80235240: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235244: lbu         $v0, -0x10EC($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X10EC);
    // 0x80235248: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x8023524C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235250: lbu         $v0, -0x10EB($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X10EB);
    // 0x80235254: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80235258:
    // 0x80235258: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8023525C: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80235260: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80235264: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80235268: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8023526C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235270: sh          $v0, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r2;
    // 0x80235274: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80235278: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x8023527C: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x80235280: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80235284: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x80235288: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023528C: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    // 0x80235290: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x80235294: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    // 0x80235298: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x8023529C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802352A0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802352A4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802352A8: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x802352AC: sh          $v1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r3;
    // 0x802352B0: sh          $a0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r4;
    // 0x802352B4: sh          $a1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r5;
    // 0x802352B8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802352BC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802352C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802352C4: jr          $ra
    // 0x802352C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802352C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802392D4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802392D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802392D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802392DC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802392E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802392E4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802392E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802392EC: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802392F0: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802392F4: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x802392F8: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x802392FC: beq         $v0, $zero, L_8023938C
    if (ctx->r2 == 0) {
        // 0x80239300: nop
    
            goto L_8023938C;
    }
    // 0x80239300: nop

    // 0x80239304: jal         0x8006072C
    // 0x80239308: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_0;
    // 0x80239308: nop

    after_0:
    // 0x8023930C: beq         $v0, $zero, L_8023938C
    if (ctx->r2 == 0) {
        // 0x80239310: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8023938C;
    }
    // 0x80239310: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80239314: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80239318: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8023931C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80239320: beq         $v0, $zero, L_80239340
    if (ctx->r2 == 0) {
        // 0x80239324: nop
    
            goto L_80239340;
    }
    // 0x80239324: nop

    // 0x80239328: jal         0x80061798
    // 0x8023932C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_1;
    // 0x8023932C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x80239330: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80239334: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80239338: jal         0x80036B00
    // 0x8023933C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_2;
    // 0x8023933C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
L_80239340:
    // 0x80239340: jal         0x8002A46C
    // 0x80239344: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    func_8002A46C_586C(rdram, ctx);
        goto after_3;
    // 0x80239344: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_3:
    // 0x80239348: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023934C: lw          $v0, 0x3230($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3230);
    // 0x80239350: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80239354: sb          $s0, 0xAC($v0)
    MEM_B(0XAC, ctx->r2) = ctx->r16;
    // 0x80239358: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023935C: lw          $v1, 0x3230($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3230);
    // 0x80239360: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80239364: sb          $v0, 0xAD($v1)
    MEM_B(0XAD, ctx->r3) = ctx->r2;
    // 0x80239368: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023936C: lw          $v1, 0x3230($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3230);
    // 0x80239370: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x80239374: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x80239378: jal         0x80036E48
    // 0x8023937C: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    func_80036E48_12248(rdram, ctx);
        goto after_4;
    // 0x8023937C: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    after_4:
    // 0x80239380: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80239384: sb          $s0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r16;
    // 0x80239388: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8023938C:
    // 0x8023938C: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80239390: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x80239394: beq         $v0, $zero, L_802395E8
    if (ctx->r2 == 0) {
        // 0x80239398: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802395E8;
    }
    // 0x80239398: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023939C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802393A0: addu        $at, $at, $v0
    gpr jr_addend_802393A8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802393A4: lw          $v0, 0x10E0($at)
    ctx->r2 = ADD32(ctx->r1, 0X10E0);
    // 0x802393A8: jr          $v0
    // 0x802393AC: nop

    switch (jr_addend_802393A8 >> 2) {
        case 0: goto L_802393B0; break;
        case 1: goto L_80239404; break;
        case 2: goto L_8023943C; break;
        case 3: goto L_802394BC; break;
        case 4: goto L_802394EC; break;
        case 5: goto L_80239514; break;
        case 6: goto L_80239520; break;
        case 7: goto L_80239574; break;
        case 8: goto L_8023959C; break;
        default: switch_error(__func__, 0x802393A8, 0x802410E0);
    }
    // 0x802393AC: nop

L_802393B0:
    // 0x802393B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802393B4: sh          $zero, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = 0;
    // 0x802393B8: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x802393BC: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x802393C0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802393C4: bne         $v1, $v0, L_802393E0
    if (ctx->r3 != ctx->r2) {
        // 0x802393C8: sw          $v1, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r3;
            goto L_802393E0;
    }
    // 0x802393C8: sw          $v1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r3;
    // 0x802393CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802393D0: jal         0x800616FC
    // 0x802393D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x802393D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x802393D8: j           L_802395E8
    // 0x802393DC: nop

        goto L_802395E8;
    // 0x802393DC: nop

L_802393E0:
    // 0x802393E0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802393E4: bne         $v1, $v0, L_802393F4
    if (ctx->r3 != ctx->r2) {
        // 0x802393E8: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_802393F4;
    }
    // 0x802393E8: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x802393EC: j           L_8023945C
    // 0x802393F0: addiu       $a0, $zero, 0x19E
    ctx->r4 = ADD32(0, 0X19E);
        goto L_8023945C;
    // 0x802393F0: addiu       $a0, $zero, 0x19E
    ctx->r4 = ADD32(0, 0X19E);
L_802393F4:
    // 0x802393F4: beq         $v1, $v0, L_8023958C
    if (ctx->r3 == ctx->r2) {
        // 0x802393F8: nop
    
            goto L_8023958C;
    }
    // 0x802393F8: nop

    // 0x802393FC: j           L_802395E8
    // 0x80239400: nop

        goto L_802395E8;
    // 0x80239400: nop

L_80239404:
    // 0x80239404: lhu         $v1, 0x126($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X126);
    // 0x80239408: lhu         $a0, 0x13E($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X13E);
    // 0x8023940C: lhu         $v0, 0x140($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X140);
    // 0x80239410: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80239414: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80239418: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023941C: sh          $v0, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = ctx->r2;
    // 0x80239420: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x80239424: addiu       $v1, $zero, 0x6C
    ctx->r3 = ADD32(0, 0X6C);
    // 0x80239428: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023942C: bne         $v0, $v1, L_802395E8
    if (ctx->r2 != ctx->r3) {
        // 0x80239430: sw          $v0, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r2;
            goto L_802395E8;
    }
    // 0x80239430: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80239434: j           L_8023958C
    // 0x80239438: nop

        goto L_8023958C;
    // 0x80239438: nop

L_8023943C:
    // 0x8023943C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239440: sh          $zero, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = 0;
    // 0x80239444: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x80239448: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x8023944C: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x80239450: bne         $v1, $v0, L_80239470
    if (ctx->r3 != ctx->r2) {
        // 0x80239454: sw          $v1, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r3;
            goto L_80239470;
    }
    // 0x80239454: sw          $v1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r3;
    // 0x80239458: addiu       $a0, $zero, 0x19F
    ctx->r4 = ADD32(0, 0X19F);
L_8023945C:
    // 0x8023945C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80239460: jal         0x8002A2F8
    // 0x80239464: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_6;
    // 0x80239464: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80239468: j           L_802395E8
    // 0x8023946C: nop

        goto L_802395E8;
    // 0x8023946C: nop

L_80239470:
    // 0x80239470: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x80239474: bne         $v1, $v0, L_802394AC
    if (ctx->r3 != ctx->r2) {
        // 0x80239478: addiu       $v0, $zero, 0x100
        ctx->r2 = ADD32(0, 0X100);
            goto L_802394AC;
    }
    // 0x80239478: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8023947C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80239480: lw          $v1, 0x3230($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3230);
    // 0x80239484: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239488: sb          $v0, 0xAC($v1)
    MEM_B(0XAC, ctx->r3) = ctx->r2;
    // 0x8023948C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80239490: lw          $v1, 0x3230($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3230);
    // 0x80239494: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80239498: sb          $v0, 0xAD($v1)
    MEM_B(0XAD, ctx->r3) = ctx->r2;
    // 0x8023949C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802394A0: lw          $v0, 0x3230($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3230);
    // 0x802394A4: j           L_802395E8
    // 0x802394A8: sb          $zero, 0xC($v0)
    MEM_B(0XC, ctx->r2) = 0;
        goto L_802395E8;
    // 0x802394A8: sb          $zero, 0xC($v0)
    MEM_B(0XC, ctx->r2) = 0;
L_802394AC:
    // 0x802394AC: bne         $v1, $v0, L_802395E8
    if (ctx->r3 != ctx->r2) {
        // 0x802394B0: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_802395E8;
    }
    // 0x802394B0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802394B4: j           L_802395E8
    // 0x802394B8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_802395E8;
    // 0x802394B8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_802394BC:
    // 0x802394BC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802394C0: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802394C4: bne         $v0, $zero, L_802395E8
    if (ctx->r2 != 0) {
        // 0x802394C8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802395E8;
    }
    // 0x802394C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802394CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802394D0: sh          $zero, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = 0;
    // 0x802394D4: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x802394D8: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x802394DC: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x802394E0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802394E4: j           L_802395E8
    // 0x802394E8: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
        goto L_802395E8;
    // 0x802394E8: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
L_802394EC:
    // 0x802394EC: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x802394F0: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x802394F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802394F8: bne         $v0, $v1, L_802395E8
    if (ctx->r2 != ctx->r3) {
        // 0x802394FC: sw          $v0, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r2;
            goto L_802395E8;
    }
    // 0x802394FC: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80239500: jal         0x80036E48
    // 0x80239504: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80036E48_12248(rdram, ctx);
        goto after_7;
    // 0x80239504: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x80239508: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8023950C: j           L_80239590
    // 0x80239510: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
        goto L_80239590;
    // 0x80239510: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
L_80239514:
    // 0x80239514: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80239518: j           L_80239584
    // 0x8023951C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
        goto L_80239584;
    // 0x8023951C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
L_80239520:
    // 0x80239520: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80239524: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80239528: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8023952C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80239530: beq         $v0, $zero, L_80239554
    if (ctx->r2 == 0) {
        // 0x80239534: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80239554;
    }
    // 0x80239534: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80239538: jal         0x80061798
    // 0x8023953C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_8;
    // 0x8023953C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_8:
    // 0x80239540: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80239544: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80239548: jal         0x80036B00
    // 0x8023954C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_9;
    // 0x8023954C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x80239550: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80239554:
    // 0x80239554: jal         0x800616FC
    // 0x80239558: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_10;
    // 0x80239558: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_10:
    // 0x8023955C: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    // 0x80239560: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80239564: jal         0x8002A2F8
    // 0x80239568: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_11;
    // 0x80239568: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_11:
    // 0x8023956C: j           L_8023958C
    // 0x80239570: nop

        goto L_8023958C;
    // 0x80239570: nop

L_80239574:
    // 0x80239574: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80239578: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8023957C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80239580: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_80239584:
    // 0x80239584: bne         $v0, $zero, L_802395E8
    if (ctx->r2 != 0) {
        // 0x80239588: nop
    
            goto L_802395E8;
    }
    // 0x80239588: nop

L_8023958C:
    // 0x8023958C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
L_80239590:
    // 0x80239590: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239594: j           L_802395E8
    // 0x80239598: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_802395E8;
    // 0x80239598: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8023959C:
    // 0x8023959C: jal         0x80070050
    // 0x802395A0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_12;
    // 0x802395A0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_12:
    // 0x802395A4: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x802395A8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802395AC: jal         0x8002A2F8
    // 0x802395B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_13;
    // 0x802395B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_13:
    // 0x802395B4: addiu       $a0, $zero, 0x19F
    ctx->r4 = ADD32(0, 0X19F);
    // 0x802395B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802395BC: jal         0x8002A2F8
    // 0x802395C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_14;
    // 0x802395C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_14:
    // 0x802395C4: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    // 0x802395C8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802395CC: jal         0x8002A2F8
    // 0x802395D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_15;
    // 0x802395D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_15:
    // 0x802395D4: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x802395D8: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x802395DC: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x802395E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802395E4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_802395E8:
    // 0x802395E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802395EC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802395F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802395F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802395F8: jr          $ra
    // 0x802395FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802395FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023C45C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C45C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023C460: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023C464: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8023C468: bne         $v0, $zero, L_8023C47C
    if (ctx->r2 != 0) {
        // 0x8023C46C: nop
    
            goto L_8023C47C;
    }
    // 0x8023C46C: nop

    // 0x8023C470: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023C474: jal         0x8005FA7C
    // 0x8023C478: addiu       $a0, $a0, 0x1C8
    ctx->r4 = ADD32(ctx->r4, 0X1C8);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x8023C478: addiu       $a0, $a0, 0x1C8
    ctx->r4 = ADD32(ctx->r4, 0X1C8);
    after_0:
L_8023C47C:
    // 0x8023C47C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023C480: jr          $ra
    // 0x8023C484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023C484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237DE0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237DE0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80237DE4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80237DE8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80237DEC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80237DF0: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x80237DF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237DF8: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80237DFC: lw          $a1, 0x1C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1C);
    // 0x80237E00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237E04: jal         0x8003BA58
    // 0x80237E08: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_8003BA58_16E58(rdram, ctx);
        goto after_0;
    // 0x80237E08: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x80237E0C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80237E10: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80237E14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237E18: jal         0x8003BB80
    // 0x80237E1C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003BB80_16F80(rdram, ctx);
        goto after_1;
    // 0x80237E1C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237E20: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80237E24: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80237E28: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x80237E2C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80237E30: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237E34: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x80237E38: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80237E3C: andi        $v0, $v0, 0x18
    ctx->r2 = ctx->r2 & 0X18;
    // 0x80237E40: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80237E44: addiu       $v1, $v0, 0x6
    ctx->r3 = ADD32(ctx->r2, 0X6);
    // 0x80237E48: sb          $v1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r3;
    // 0x80237E4C: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80237E50: sb          $v1, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r3;
    // 0x80237E54: addiu       $v1, $v0, 0x3D
    ctx->r3 = ADD32(ctx->r2, 0X3D);
    // 0x80237E58: addiu       $v0, $v0, 0x3F
    ctx->r2 = ADD32(ctx->r2, 0X3F);
    // 0x80237E5C: sb          $v1, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r3;
    // 0x80237E60: jal         0x8003BC68
    // 0x80237E64: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    func_8003BC68_17068(rdram, ctx);
        goto after_2;
    // 0x80237E64: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    after_2:
    // 0x80237E68: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80237E6C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80237E70: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80237E74: jr          $ra
    // 0x80237E78: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80237E78: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80237658_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237658: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023765C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237660: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237668: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8023766C: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80237670: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237674: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80237678: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023767C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80237680: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80237684: beq         $v1, $zero, L_802376A4
    if (ctx->r3 == 0) {
        // 0x80237688: nop
    
            goto L_802376A4;
    }
    // 0x80237688: nop

    // 0x8023768C: jal         0x80237A74
    // 0x80237690: nop

    func_80237A74_ovl25(rdram, ctx);
        goto after_0;
    // 0x80237690: nop

    after_0:
    // 0x80237694: beq         $v0, $zero, L_802376A4
    if (ctx->r2 == 0) {
        // 0x80237698: nop
    
            goto L_802376A4;
    }
    // 0x80237698: nop

    // 0x8023769C: jal         0x8004F62C
    // 0x802376A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x802376A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_802376A4:
    // 0x802376A4: jal         0x802376BC
    // 0x802376A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802376BC_ovl25(rdram, ctx);
        goto after_2;
    // 0x802376A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802376AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802376B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802376B4: jr          $ra
    // 0x802376B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802376B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225848_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225848: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022584C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225850: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225854: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225858: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022585C: jal         0x80225884
    // 0x80225860: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_80225884_ovl25(rdram, ctx);
        goto after_0;
    // 0x80225860: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80225864: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225868: jal         0x80225994
    // 0x8022586C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80225994_ovl25(rdram, ctx);
        goto after_1;
    // 0x8022586C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80225870: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225874: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225878: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022587C: jr          $ra
    // 0x80225880: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225880: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A1FC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A1FC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022A200: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8022A204: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x8022A208: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022A20C: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8022A210: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022A214: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x8022A218: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022A21C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022A220: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8022A224: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x8022A228: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8022A22C: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x8022A230: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022A234: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A238: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A23C: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
L_8022A240:
    // 0x8022A240: lui         $v0, 0xAAAA
    ctx->r2 = S32(0XAAAA << 16);
    // 0x8022A244: ori         $v0, $v0, 0xAAAB
    ctx->r2 = ctx->r2 | 0XAAAB;
    // 0x8022A248: multu       $a0, $v0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A24C: mfhi        $a3
    ctx->r7 = hi;
    // 0x8022A250: srl         $v1, $a3, 1
    ctx->r3 = S32(U32(ctx->r7) >> 1);
    // 0x8022A254: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022A258: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A25C: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8022A260: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8022A264: beq         $a0, $s7, L_8022A2A4
    if (ctx->r4 == ctx->r23) {
        // 0x8022A268: nop
    
            goto L_8022A2A4;
    }
    // 0x8022A268: nop

    // 0x8022A26C: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8022A270: beq         $v0, $zero, L_8022A288
    if (ctx->r2 == 0) {
        // 0x8022A274: nop
    
            goto L_8022A288;
    }
    // 0x8022A274: nop

    // 0x8022A278: beq         $a0, $zero, L_8022A298
    if (ctx->r4 == 0) {
        // 0x8022A27C: andi        $v0, $s4, 0xFF
        ctx->r2 = ctx->r20 & 0XFF;
            goto L_8022A298;
    }
    // 0x8022A27C: andi        $v0, $s4, 0xFF
    ctx->r2 = ctx->r20 & 0XFF;
    // 0x8022A280: j           L_8022A2C8
    // 0x8022A284: nop

        goto L_8022A2C8;
    // 0x8022A284: nop

L_8022A288:
    // 0x8022A288: beq         $a0, $s6, L_8022A2B4
    if (ctx->r4 == ctx->r22) {
        // 0x8022A28C: andi        $v0, $s4, 0xFF
        ctx->r2 = ctx->r20 & 0XFF;
            goto L_8022A2B4;
    }
    // 0x8022A28C: andi        $v0, $s4, 0xFF
    ctx->r2 = ctx->r20 & 0XFF;
    // 0x8022A290: j           L_8022A2C8
    // 0x8022A294: nop

        goto L_8022A2C8;
    // 0x8022A294: nop

L_8022A298:
    // 0x8022A298: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x8022A29C: j           L_8022A2C0
    // 0x8022A2A0: sb          $zero, 0x0($s3)
    MEM_B(0X0, ctx->r19) = 0;
        goto L_8022A2C0;
    // 0x8022A2A0: sb          $zero, 0x0($s3)
    MEM_B(0X0, ctx->r19) = 0;
L_8022A2A4:
    // 0x8022A2A4: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x8022A2A8: sb          $s7, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r23;
    // 0x8022A2AC: j           L_8022A2C0
    // 0x8022A2B0: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
        goto L_8022A2C0;
    // 0x8022A2B0: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
L_8022A2B4:
    // 0x8022A2B4: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x8022A2B8: sb          $s6, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r22;
    // 0x8022A2BC: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
L_8022A2C0:
    // 0x8022A2C0: andi        $s4, $v0, 0x1
    ctx->r20 = ctx->r2 & 0X1;
    // 0x8022A2C4: andi        $v0, $s4, 0xFF
    ctx->r2 = ctx->r20 & 0XFF;
L_8022A2C8:
    // 0x8022A2C8: beq         $v0, $zero, L_8022A328
    if (ctx->r2 == 0) {
        // 0x8022A2CC: andi        $v0, $s2, 0xFF
        ctx->r2 = ctx->r18 & 0XFF;
            goto L_8022A328;
    }
    // 0x8022A2CC: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x8022A2D0: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022A2D4: lbu         $v0, 0x3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3);
    // 0x8022A2D8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x8022A2DC: beq         $v0, $zero, L_8022A30C
    if (ctx->r2 == 0) {
        // 0x8022A2E0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8022A30C;
    }
    // 0x8022A2E0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022A2E4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022A2E8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022A2EC:
    // 0x8022A2EC: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    // 0x8022A2F0: jal         0x8022A59C
    // 0x8022A2F4: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_8022A59C_ovl25(rdram, ctx);
        goto after_0;
    // 0x8022A2F4: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_0:
    // 0x8022A2F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022A2FC: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8022A300: sltu        $v0, $v0, $s1
    ctx->r2 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x8022A304: bne         $v0, $zero, L_8022A2EC
    if (ctx->r2 != 0) {
        // 0x8022A308: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8022A2EC;
    }
    // 0x8022A308: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022A30C:
    // 0x8022A30C: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x8022A310: addu        $a0, $s3, $v0
    ctx->r4 = ADD32(ctx->r19, ctx->r2);
    // 0x8022A314: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x8022A318: sltiu       $v0, $v1, 0x40
    ctx->r2 = ctx->r3 < 0X40 ? 1 : 0;
    // 0x8022A31C: beq         $v0, $zero, L_8022A328
    if (ctx->r2 == 0) {
        // 0x8022A320: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022A328;
    }
    // 0x8022A320: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022A324: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
L_8022A328:
    // 0x8022A328: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8022A32C: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x8022A330: sltiu       $v0, $v0, 0x9
    ctx->r2 = ctx->r2 < 0X9 ? 1 : 0;
    // 0x8022A334: bne         $v0, $zero, L_8022A240
    if (ctx->r2 != 0) {
        // 0x8022A338: andi        $a0, $s2, 0xFF
        ctx->r4 = ctx->r18 & 0XFF;
            goto L_8022A240;
    }
    // 0x8022A338: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x8022A33C: lhu         $v0, 0x12($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X12);
    // 0x8022A340: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A344: sh          $v0, 0x12($s3)
    MEM_H(0X12, ctx->r19) = ctx->r2;
    // 0x8022A348: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022A34C: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8022A350: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8022A354: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8022A358: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022A35C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A360: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022A364: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A368: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A36C: jr          $ra
    // 0x8022A370: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022A370: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80234008_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234008: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023400C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80234010: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234014: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80234018: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8023401C: lbu         $a1, 0xF($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XF);
    // 0x80234020: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x80234024: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x80234028: bne         $v0, $zero, L_80234044
    if (ctx->r2 != 0) {
        // 0x8023402C: sb          $v1, 0xB($s0)
        MEM_B(0XB, ctx->r16) = ctx->r3;
            goto L_80234044;
    }
    // 0x8023402C: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
    // 0x80234030: lhu         $v0, 0x9A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X9A);
    // 0x80234034: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80234038: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8023403C: j           L_802340E8
    // 0x80234040: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
        goto L_802340E8;
    // 0x80234040: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
L_80234044:
    // 0x80234044: lui         $a0, 0x2AAA
    ctx->r4 = S32(0X2AAA << 16);
    // 0x80234048: ori         $a0, $a0, 0xAAAB
    ctx->r4 = ctx->r4 | 0XAAAB;
    // 0x8023404C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x80234050: addiu       $v1, $zero, 0xF0
    ctx->r3 = ADD32(0, 0XF0);
    // 0x80234054: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80234058: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023405C: sra         $v0, $v1, 31
    ctx->r2 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80234060: mfhi        $t2
    ctx->r10 = hi;
    // 0x80234064: subu        $a0, $t2, $v0
    ctx->r4 = SUB32(ctx->r10, ctx->r2);
    // 0x80234068: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8023406C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80234070: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80234074: subu        $a0, $v1, $v0
    ctx->r4 = SUB32(ctx->r3, ctx->r2);
    // 0x80234078: andi        $v0, $a1, 0x8
    ctx->r2 = ctx->r5 & 0X8;
    // 0x8023407C: bne         $v0, $zero, L_802340A8
    if (ctx->r2 != 0) {
        // 0x80234080: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_802340A8;
    }
    // 0x80234080: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80234084: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234088: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023408C: lbu         $v1, -0x1230($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1230);
    // 0x80234090: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80234094: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234098: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023409C: lbu         $v0, -0x122F($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X122F);
    // 0x802340A0: j           L_802340C8
    // 0x802340A4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_802340C8;
    // 0x802340A4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_802340A8:
    // 0x802340A8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802340AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802340B0: lbu         $v1, -0x1224($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1224);
    // 0x802340B4: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x802340B8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802340BC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802340C0: lbu         $v0, -0x1223($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X1223);
    // 0x802340C4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_802340C8:
    // 0x802340C8: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x802340CC: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802340D0: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x802340D4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802340D8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x802340DC: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802340E0: jal         0x8003B6B8
    // 0x802340E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B6B8_16AB8(rdram, ctx);
        goto after_0;
    // 0x802340E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
L_802340E8:
    // 0x802340E8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802340EC: beql        $v0, $zero, L_80234194
    if (ctx->r2 == 0) {
        // 0x802340F0: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_80234194;
    }
    goto skip_0;
    // 0x802340F0: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_0:
    // 0x802340F4: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x802340F8: bgezl       $v0, L_80234194
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802340FC: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_80234194;
    }
    goto skip_1;
    // 0x802340FC: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_1:
    // 0x80234100: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80234104: lhu         $v1, 0x4C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4C);
    // 0x80234108: lhu         $t0, 0x4E($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X4E);
    // 0x8023410C: lhu         $t1, 0x50($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X50);
    // 0x80234110: lw          $a3, 0x1C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X1C);
    // 0x80234114: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234118: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8023411C: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80234120: lhu         $v1, 0x48($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X48);
    // 0x80234124: lh          $a2, 0x44($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X44);
    // 0x80234128: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8023412C: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x80234130: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80234134: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80234138: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x8023413C: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x80234140: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x80234144: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80234148: lh          $a2, 0x48($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X48);
    // 0x8023414C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80234150: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80234154: sw          $a3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r7;
    // 0x80234158: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    // 0x8023415C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80234160: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234164: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x80234168: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x8023416C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80234170: jal         0x8004DD04
    // 0x80234174: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80234174: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    after_1:
    // 0x80234178: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8023417C: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80234180: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x80234184: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
    // 0x80234188: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    // 0x8023418C: j           L_8023419C
    // 0x80234190: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
        goto L_8023419C;
    // 0x80234190: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
L_80234194:
    // 0x80234194: jal         0x8004F4F8
    // 0x80234198: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x80234198: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8023419C:
    // 0x8023419C: lw          $v0, 0xC0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC0);
    // 0x802341A0: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x802341A4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802341A8: beq         $v0, $zero, L_802341C4
    if (ctx->r2 == 0) {
        // 0x802341AC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802341C4;
    }
    // 0x802341AC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802341B0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802341B4: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x802341B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802341BC: j           L_8023423C
    // 0x802341C0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8023423C;
    // 0x802341C0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802341C4:
    // 0x802341C4: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x802341C8: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x802341CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802341D0: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x802341D4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802341D8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x802341DC: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x802341E0: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x802341E4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802341E8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802341EC: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x802341F0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802341F4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802341F8: jal         0x80051E18
    // 0x802341FC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x802341FC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_3:
    // 0x80234200: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234204: jal         0x8003F754
    // 0x80234208: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    func_8003F754_1AB54(rdram, ctx);
        goto after_4;
    // 0x80234208: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    after_4:
    // 0x8023420C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80234210: beq         $a0, $zero, L_80234224
    if (ctx->r4 == 0) {
        // 0x80234214: nop
    
            goto L_80234224;
    }
    // 0x80234214: nop

    // 0x80234218: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023421C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234220: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80234224:
    // 0x80234224: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80234228: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8023422C: bne         $v0, $zero, L_8023423C
    if (ctx->r2 != 0) {
        // 0x80234230: nop
    
            goto L_8023423C;
    }
    // 0x80234230: nop

    // 0x80234234: jal         0x800711A8
    // 0x80234238: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_800711A8_4C5A8(rdram, ctx);
        goto after_5;
    // 0x80234238: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_5:
L_8023423C:
    // 0x8023423C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80234240: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80234244: jr          $ra
    // 0x80234248: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80234248: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8023B814_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B814: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023B818: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023B81C: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x8023B820: lw          $s1, -0x5858($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X5858);
    // 0x8023B824: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8023B828: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023B82C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023B830: sb          $v0, 0x7($s1)
    MEM_B(0X7, ctx->r17) = ctx->r2;
    // 0x8023B834: lbu         $v1, 0x7($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X7);
    // 0x8023B838: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023B83C: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8023B840: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x8023B844: sh          $v0, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r2;
    // 0x8023B848: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x8023B84C: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x8023B850: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x8023B854: sh          $v0, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r2;
    // 0x8023B858: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8023B85C: sb          $v1, 0x7($s1)
    MEM_B(0X7, ctx->r17) = ctx->r3;
    // 0x8023B860: lbu         $v1, 0xB($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XB);
    // 0x8023B864: sltiu       $v0, $v1, 0x1E
    ctx->r2 = ctx->r3 < 0X1E ? 1 : 0;
    // 0x8023B868: beq         $v0, $zero, L_8023B88C
    if (ctx->r2 == 0) {
        // 0x8023B86C: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_8023B88C;
    }
    // 0x8023B86C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023B870: sb          $v1, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r3;
    // 0x8023B874: sb          $v1, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r3;
    // 0x8023B878: sb          $v1, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r3;
    // 0x8023B87C: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x8023B880: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B884: j           L_8023B898
    // 0x8023B888: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
        goto L_8023B898;
    // 0x8023B888: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
L_8023B88C:
    // 0x8023B88C: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x8023B890: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x8023B894: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
L_8023B898:
    // 0x8023B898: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x8023B89C: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x8023B8A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023B8A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023B8A8: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
    // 0x8023B8AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8023B8B0: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8023B8B4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8023B8B8: sw          $s0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r16;
    // 0x8023B8BC: jal         0x8003055C
    // 0x8023B8C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003055C_B95C(rdram, ctx);
        goto after_0;
    // 0x8023B8C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8023B8C4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023B8C8: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8023B8CC: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8023B8D0: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8023B8D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023B8D8: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x8023B8DC: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8023B8E0: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8023B8E4: jal         0x8002FD30
    // 0x8023B8E8: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_1;
    // 0x8023B8E8: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_1:
    // 0x8023B8EC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023B8F0: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8023B8F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023B8F8: jal         0x8002FD30
    // 0x8023B8FC: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_2;
    // 0x8023B8FC: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_2:
    // 0x8023B900: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023B904: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023B908: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023B90C: jr          $ra
    // 0x8023B910: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023B910: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022C83C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C83C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C840: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C844: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C848: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022C84C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022C850: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C854: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C858: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022C85C: jal         0x8009A3B4
    // 0x8022C860: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022C860: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022C864: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022C868: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022C86C: jal         0x8009A3B4
    // 0x8022C870: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022C870: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022C874: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022C878: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022C87C: jal         0x8009A3B4
    // 0x8022C880: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022C880: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022C884: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x8022C888: addiu       $s2, $s2, -0x3A50
    ctx->r18 = ADD32(ctx->r18, -0X3A50);
    // 0x8022C88C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C890: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C894: beq         $v1, $v0, L_8022C95C
    if (ctx->r3 == ctx->r2) {
        // 0x8022C898: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8022C95C;
    }
    // 0x8022C898: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022C89C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022C8A0: beql        $v0, $zero, L_8022C8B8
    if (ctx->r2 == 0) {
        // 0x8022C8A4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C8B8;
    }
    goto skip_0;
    // 0x8022C8A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022C8A8: beq         $v1, $zero, L_8022C8D0
    if (ctx->r3 == 0) {
        // 0x8022C8AC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C8D0;
    }
    // 0x8022C8AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C8B0: j           L_8022C964
    // 0x8022C8B4: nop

        goto L_8022C964;
    // 0x8022C8B4: nop

L_8022C8B8:
    // 0x8022C8B8: beq         $v1, $v0, L_8022C964
    if (ctx->r3 == ctx->r2) {
        // 0x8022C8BC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022C964;
    }
    // 0x8022C8BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C8C0: beq         $v1, $v0, L_8022C95C
    if (ctx->r3 == ctx->r2) {
        // 0x8022C8C4: nop
    
            goto L_8022C95C;
    }
    // 0x8022C8C4: nop

    // 0x8022C8C8: j           L_8022C964
    // 0x8022C8CC: nop

        goto L_8022C964;
    // 0x8022C8CC: nop

L_8022C8D0:
    // 0x8022C8D0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C8D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C8D8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022C8DC: jal         0x8004D5D4
    // 0x8022C8E0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x8022C8E0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022C8E4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022C8E8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022C8EC: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022C8F0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022C8F4: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022C8F8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022C8FC: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022C900: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022C904: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022C908: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022C90C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022C910: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022C914: sb          $zero, 0x4E4($s0)
    MEM_B(0X4E4, ctx->r16) = 0;
    // 0x8022C918: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C91C: lw          $v0, -0x1B44($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1B44);
    // 0x8022C920: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C924: sb          $zero, 0x4E5($s0)
    MEM_B(0X4E5, ctx->r16) = 0;
    // 0x8022C928: sb          $zero, 0x4E6($s0)
    MEM_B(0X4E6, ctx->r16) = 0;
    // 0x8022C92C: sw          $v0, 0x4E8($s0)
    MEM_W(0X4E8, ctx->r16) = ctx->r2;
    // 0x8022C930: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C934: lw          $v0, -0x1B28($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1B28);
    // 0x8022C938: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022C93C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C940: sb          $zero, 0x4E7($s0)
    MEM_B(0X4E7, ctx->r16) = 0;
    // 0x8022C944: jal         0x80050294
    // 0x8022C948: sw          $v0, 0x4EC($s0)
    MEM_W(0X4EC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8022C948: sw          $v0, 0x4EC($s0)
    MEM_W(0X4EC, ctx->r16) = ctx->r2;
    after_4:
    // 0x8022C94C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C950: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C954: j           L_8022C964
    // 0x8022C958: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022C964;
    // 0x8022C958: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022C95C:
    // 0x8022C95C: jal         0x8005044C
    // 0x8022C960: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8022C960: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_8022C964:
    // 0x8022C964: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8022C968: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022C96C: bne         $v1, $v0, L_8022C988
    if (ctx->r3 != ctx->r2) {
        // 0x8022C970: addiu       $v0, $zero, 0x55
        ctx->r2 = ADD32(0, 0X55);
            goto L_8022C988;
    }
    // 0x8022C970: addiu       $v0, $zero, 0x55
    ctx->r2 = ADD32(0, 0X55);
    // 0x8022C974: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    // 0x8022C978: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C97C: lw          $v0, -0x1B24($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1B24);
    // 0x8022C980: j           L_8022C9E0
    // 0x8022C984: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
        goto L_8022C9E0;
    // 0x8022C984: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
L_8022C988:
    // 0x8022C988: bne         $v1, $v0, L_8022C9AC
    if (ctx->r3 != ctx->r2) {
        // 0x8022C98C: addiu       $v0, $zero, 0x69
        ctx->r2 = ADD32(0, 0X69);
            goto L_8022C9AC;
    }
    // 0x8022C98C: addiu       $v0, $zero, 0x69
    ctx->r2 = ADD32(0, 0X69);
    // 0x8022C990: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    // 0x8022C994: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C998: lw          $v0, -0x1B28($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1B28);
    // 0x8022C99C: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
    // 0x8022C9A0: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
    // 0x8022C9A4: j           L_8022C9FC
    // 0x8022C9A8: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
        goto L_8022C9FC;
    // 0x8022C9A8: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
L_8022C9AC:
    // 0x8022C9AC: bne         $v1, $v0, L_8022C9C8
    if (ctx->r3 != ctx->r2) {
        // 0x8022C9B0: addiu       $v0, $zero, 0x96
        ctx->r2 = ADD32(0, 0X96);
            goto L_8022C9C8;
    }
    // 0x8022C9B0: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x8022C9B4: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    // 0x8022C9B8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C9BC: lw          $v0, -0x1B24($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1B24);
    // 0x8022C9C0: j           L_8022C9E0
    // 0x8022C9C4: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
        goto L_8022C9E0;
    // 0x8022C9C4: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
L_8022C9C8:
    // 0x8022C9C8: bne         $v1, $v0, L_8022C9E8
    if (ctx->r3 != ctx->r2) {
        // 0x8022C9CC: addiu       $v0, $zero, 0xA0
        ctx->r2 = ADD32(0, 0XA0);
            goto L_8022C9E8;
    }
    // 0x8022C9CC: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8022C9D0: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    // 0x8022C9D4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C9D8: lw          $v0, -0x1B28($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1B28);
    // 0x8022C9DC: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
L_8022C9E0:
    // 0x8022C9E0: j           L_8022CA0C
    // 0x8022C9E4: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
        goto L_8022CA0C;
    // 0x8022C9E4: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
L_8022C9E8:
    // 0x8022C9E8: beq         $v1, $v0, L_8022C9F8
    if (ctx->r3 == ctx->r2) {
        // 0x8022C9EC: addiu       $v0, $zero, 0xAA
        ctx->r2 = ADD32(0, 0XAA);
            goto L_8022C9F8;
    }
    // 0x8022C9EC: addiu       $v0, $zero, 0xAA
    ctx->r2 = ADD32(0, 0XAA);
    // 0x8022C9F0: bne         $v1, $v0, L_8022CA10
    if (ctx->r3 != ctx->r2) {
        // 0x8022C9F4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CA10;
    }
    // 0x8022C9F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022C9F8:
    // 0x8022C9F8: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
L_8022C9FC:
    // 0x8022C9FC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022CA00: lw          $v0, -0x1B40($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1B40);
    // 0x8022CA04: sb          $zero, 0x5($s1)
    MEM_B(0X5, ctx->r17) = 0;
    // 0x8022CA08: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
L_8022CA0C:
    // 0x8022CA0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022CA10:
    // 0x8022CA10: jal         0x8022C6F0
    // 0x8022CA14: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8022C6F0_ovl25(rdram, ctx);
        goto after_6;
    // 0x8022CA14: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x8022CA18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CA1C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022CA20: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CA24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CA28: jr          $ra
    // 0x8022CA2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CA2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023B700_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B700: jr          $ra
    // 0x8023B704: nop

    TRACE_RETURN()
    return;
    // 0x8023B704: nop

;}
RECOMP_FUNC void func_80238244_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238244: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238248: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023824C: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80238250: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80238254: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238258: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023825C: lw          $v0, -0xC94($at)
    ctx->r2 = MEM_W(ctx->r1, -0XC94);
    // 0x80238260: jalr        $v0
    // 0x80238264: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80238264: nop

    after_0:
    // 0x80238268: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023826C: jr          $ra
    // 0x80238270: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238270: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802269FC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802269FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80226A00: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80226A04: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x80226A08: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80226A0C: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x80226A10: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80226A14: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80226A18: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80226A1C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226A20: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226A24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226A28: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x80226A2C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x80226A30: beq         $v0, $zero, L_80226B80
    if (ctx->r2 == 0) {
        // 0x80226A34: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_80226B80;
    }
    // 0x80226A34: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80226A38: lui         $s6, 0x8024
    ctx->r22 = S32(0X8024 << 16);
    // 0x80226A3C: addiu       $s6, $s6, 0xC70
    ctx->r22 = ADD32(ctx->r22, 0XC70);
    // 0x80226A40: andi        $v1, $s2, 0xFF
    ctx->r3 = ctx->r18 & 0XFF;
L_80226A44:
    // 0x80226A44: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80226A48: beq         $v0, $zero, L_80226AA8
    if (ctx->r2 == 0) {
        // 0x80226A4C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80226AA8;
    }
    // 0x80226A4C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226A50: addu        $v0, $v0, $s6
    gpr jr_addend_80226A58 = ctx->r2;
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x80226A54: lw          $v0, 0x0($v0)
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x80226A58: jr          $v0
    // 0x80226A5C: nop

    switch (jr_addend_80226A58 >> 2) {
        case 0: goto L_80226A60; break;
        case 1: goto L_80226A6C; break;
        case 2: goto L_80226A78; break;
        case 3: goto L_80226A84; break;
        case 4: goto L_80226A90; break;
        case 5: goto L_80226A9C; break;
        default: switch_error(__func__, 0x80226A58, 0x80240C70);
    }
    // 0x80226A5C: nop

L_80226A60:
    // 0x80226A60: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x80226A64: j           L_80226AA8
    // 0x80226A68: andi        $s3, $v0, 0x1
    ctx->r19 = ctx->r2 & 0X1;
        goto L_80226AA8;
    // 0x80226A68: andi        $s3, $v0, 0x1
    ctx->r19 = ctx->r2 & 0X1;
L_80226A6C:
    // 0x80226A6C: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x80226A70: j           L_80226AA4
    // 0x80226A74: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
        goto L_80226AA4;
    // 0x80226A74: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
L_80226A78:
    // 0x80226A78: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x80226A7C: j           L_80226AA4
    // 0x80226A80: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
        goto L_80226AA4;
    // 0x80226A80: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
L_80226A84:
    // 0x80226A84: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x80226A88: j           L_80226AA4
    // 0x80226A8C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80226AA4;
    // 0x80226A8C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80226A90:
    // 0x80226A90: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x80226A94: j           L_80226AA4
    // 0x80226A98: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
        goto L_80226AA4;
    // 0x80226A98: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
L_80226A9C:
    // 0x80226A9C: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x80226AA0: srl         $v0, $v0, 5
    ctx->r2 = S32(U32(ctx->r2) >> 5);
L_80226AA4:
    // 0x80226AA4: andi        $s3, $v0, 0x1
    ctx->r19 = ctx->r2 & 0X1;
L_80226AA8:
    // 0x80226AA8: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x80226AAC: beq         $v0, $zero, L_80226B10
    if (ctx->r2 == 0) {
        // 0x80226AB0: andi        $v0, $s2, 0xFF
        ctx->r2 = ctx->r18 & 0XFF;
            goto L_80226B10;
    }
    // 0x80226AB0: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x80226AB4: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x80226AB8: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x80226ABC: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x80226AC0: beq         $v0, $zero, L_80226AF0
    if (ctx->r2 == 0) {
        // 0x80226AC4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80226AF0;
    }
    // 0x80226AC4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80226AC8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80226ACC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
L_80226AD0:
    // 0x80226AD0: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    // 0x80226AD4: jal         0x80226C60
    // 0x80226AD8: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_80226C60_ovl25(rdram, ctx);
        goto after_0;
    // 0x80226AD8: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_0:
    // 0x80226ADC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80226AE0: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x80226AE4: sltu        $v0, $v0, $s1
    ctx->r2 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x80226AE8: bne         $v0, $zero, L_80226AD0
    if (ctx->r2 != 0) {
        // 0x80226AEC: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_80226AD0;
    }
    // 0x80226AEC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
L_80226AF0:
    // 0x80226AF0: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x80226AF4: addu        $a0, $s4, $v0
    ctx->r4 = ADD32(ctx->r20, ctx->r2);
    // 0x80226AF8: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x80226AFC: sltiu       $v0, $v1, 0x40
    ctx->r2 = ctx->r3 < 0X40 ? 1 : 0;
    // 0x80226B00: beq         $v0, $zero, L_80226B68
    if (ctx->r2 == 0) {
        // 0x80226B04: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80226B68;
    }
    // 0x80226B04: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80226B08: j           L_80226B68
    // 0x80226B0C: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
        goto L_80226B68;
    // 0x80226B0C: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
L_80226B10:
    // 0x80226B10: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x80226B14: addu        $v1, $s4, $a0
    ctx->r3 = ADD32(ctx->r20, ctx->r4);
    // 0x80226B18: lbu         $v0, 0x4($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4);
    // 0x80226B1C: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x80226B20: bne         $v0, $zero, L_80226B68
    if (ctx->r2 != 0) {
        // 0x80226B24: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80226B68;
    }
    // 0x80226B24: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80226B28: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x80226B2C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80226B30: sll         $v0, $a0, 7
    ctx->r2 = S32(ctx->r4 << 7);
    // 0x80226B34: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x80226B38: addu        $v1, $s4, $v0
    ctx->r3 = ADD32(ctx->r20, ctx->r2);
    // 0x80226B3C: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_80226B40:
    // 0x80226B40: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80226B44: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80226B48: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80226B4C: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x80226B50: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x80226B54: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x80226B58: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x80226B5C: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x80226B60: bne         $v0, $zero, L_80226B40
    if (ctx->r2 != 0) {
        // 0x80226B64: andi        $v0, $s0, 0xFF
        ctx->r2 = ctx->r16 & 0XFF;
            goto L_80226B40;
    }
    // 0x80226B64: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_80226B68:
    // 0x80226B68: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x80226B6C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80226B70: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x80226B74: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80226B78: bne         $v0, $zero, L_80226A44
    if (ctx->r2 != 0) {
        // 0x80226B7C: andi        $v1, $s2, 0xFF
        ctx->r3 = ctx->r18 & 0XFF;
            goto L_80226A44;
    }
    // 0x80226B7C: andi        $v1, $s2, 0xFF
    ctx->r3 = ctx->r18 & 0XFF;
L_80226B80:
    // 0x80226B80: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80226B84: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80226B88: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80226B8C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80226B90: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80226B94: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226B98: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226B9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226BA0: jr          $ra
    // 0x80226BA4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80226BA4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80226F14_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226F14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226F18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226F1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226F20: jal         0x800A3450
    // 0x80226F24: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80226F24: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80226F28: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80226F2C: bne         $v1, $zero, L_80226FA8
    if (ctx->r3 != 0) {
        // 0x80226F30: addu        $a3, $v0, $zero
        ctx->r7 = ADD32(ctx->r2, 0);
            goto L_80226FA8;
    }
    // 0x80226F30: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80226F34: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80226F38: andi        $v1, $a3, 0x7
    ctx->r3 = ctx->r7 & 0X7;
    // 0x80226F3C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x80226F40: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80226F44: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80226F48: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x80226F4C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80226F50: sra         $v1, $a0, 18
    ctx->r3 = S32(SIGNED(ctx->r4) >> 18);
    // 0x80226F54: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x80226F58: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x80226F5C: addiu       $v0, $zero, 0xC4
    ctx->r2 = ADD32(0, 0XC4);
    // 0x80226F60: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80226F64: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80226F68: sra         $v0, $a0, 20
    ctx->r2 = S32(SIGNED(ctx->r4) >> 20);
    // 0x80226F6C: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80226F70: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x80226F74: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80226F78: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80226F7C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226F80: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    // 0x80226F84: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x80226F88: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80226F8C: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x80226F90: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x80226F94: sra         $a0, $a0, 22
    ctx->r4 = S32(SIGNED(ctx->r4) >> 22);
    // 0x80226F98: andi        $a0, $a0, 0x3F
    ctx->r4 = ctx->r4 & 0X3F;
    // 0x80226F9C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80226FA0: j           L_80227020
    // 0x80226FA4: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_80227020;
    // 0x80226FA4: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_80226FA8:
    // 0x80226FA8: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80226FAC: lhu         $v1, 0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6);
    // 0x80226FB0: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x80226FB4: lhu         $a2, 0xA($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XA);
    // 0x80226FB8: lhu         $a1, 0xC($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XC);
    // 0x80226FBC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80226FC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226FC4: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x80226FC8: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    // 0x80226FCC: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x80226FD0: andi        $v0, $a3, 0x7
    ctx->r2 = ctx->r7 & 0X7;
    // 0x80226FD4: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80226FD8: addiu       $a1, $a1, -0xC
    ctx->r5 = ADD32(ctx->r5, -0XC);
    // 0x80226FDC: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x80226FE0: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
    // 0x80226FE4: sra         $v0, $v1, 18
    ctx->r2 = S32(SIGNED(ctx->r3) >> 18);
    // 0x80226FE8: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    // 0x80226FEC: lhu         $a0, 0xE($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XE);
    // 0x80226FF0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80226FF4: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x80226FF8: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
    // 0x80226FFC: sra         $v1, $v1, 20
    ctx->r3 = S32(SIGNED(ctx->r3) >> 20);
    // 0x80227000: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x80227004: sh          $a2, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r6;
    // 0x80227008: sh          $a1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r5;
    // 0x8022700C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80227010: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80227014: bne         $v0, $zero, L_80227020
    if (ctx->r2 != 0) {
        // 0x80227018: sh          $a0, 0xE($s0)
        MEM_H(0XE, ctx->r16) = ctx->r4;
            goto L_80227020;
    }
    // 0x80227018: sh          $a0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r4;
    // 0x8022701C: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_80227020:
    // 0x80227020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227024: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227028: jr          $ra
    // 0x8022702C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022702C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E78C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E78C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E790: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E794: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E798: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E79C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022E7A0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022E7A4: beq         $v1, $v0, L_8022E814
    if (ctx->r3 == ctx->r2) {
        // 0x8022E7A8: lui         $a0, 0xFF
        ctx->r4 = S32(0XFF << 16);
            goto L_8022E814;
    }
    // 0x8022E7A8: lui         $a0, 0xFF
    ctx->r4 = S32(0XFF << 16);
    // 0x8022E7AC: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x8022E7B0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8022E7B4:
    // 0x8022E7B4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022E7B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E7BC: lw          $v0, 0x11B0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X11B0);
    // 0x8022E7C0: and         $a1, $v0, $a0
    ctx->r5 = ctx->r2 & ctx->r4;
    // 0x8022E7C4: bne         $a1, $zero, L_8022E7E0
    if (ctx->r5 != 0) {
        // 0x8022E7C8: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_8022E7E0;
    }
    // 0x8022E7C8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8022E7CC: slti        $v0, $v1, 0x40
    ctx->r2 = SIGNED(ctx->r3) < 0X40 ? 1 : 0;
    // 0x8022E7D0: beq         $v0, $zero, L_8022E814
    if (ctx->r2 == 0) {
        // 0x8022E7D4: nop
    
            goto L_8022E814;
    }
    // 0x8022E7D4: nop

    // 0x8022E7D8: j           L_8022E7B4
    // 0x8022E7DC: nop

        goto L_8022E7B4;
    // 0x8022E7DC: nop

L_8022E7E0:
    // 0x8022E7E0: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022E7E4: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8022E7E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E7EC: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8022E7F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E7F4: jal         0x8002A2F8
    // 0x8022E7F8: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x8022E7F8: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022E7FC: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x8022E800: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022E804: bgtz        $v1, L_8022E814
    if (SIGNED(ctx->r3) > 0) {
        // 0x8022E808: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_8022E814;
    }
    // 0x8022E808: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022E80C: jal         0x8022F4F0
    // 0x8022E810: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022F4F0_ovl25(rdram, ctx);
        goto after_1;
    // 0x8022E810: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022E814:
    // 0x8022E814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E818: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E81C: jr          $ra
    // 0x8022E820: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E820: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230ED4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230ED4: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x80230ED8: lbu         $v0, 0xA($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0XA);
    // 0x80230EDC: bne         $v0, $zero, L_80230F00
    if (ctx->r2 != 0) {
        // 0x80230EE0: addu        $t1, $a1, $zero
        ctx->r9 = ADD32(ctx->r5, 0);
            goto L_80230F00;
    }
    // 0x80230EE0: addu        $t1, $a1, $zero
    ctx->r9 = ADD32(ctx->r5, 0);
    // 0x80230EE4: sh          $zero, 0x18($t1)
    MEM_H(0X18, ctx->r9) = 0;
    // 0x80230EE8: lbu         $v0, 0xA($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0XA);
    // 0x80230EEC: sh          $zero, 0x4C($t0)
    MEM_H(0X4C, ctx->r8) = 0;
    // 0x80230EF0: sh          $zero, 0x4E($t0)
    MEM_H(0X4E, ctx->r8) = 0;
    // 0x80230EF4: sh          $zero, 0x50($t0)
    MEM_H(0X50, ctx->r8) = 0;
    // 0x80230EF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230EFC: sb          $v0, 0xA($t0)
    MEM_B(0XA, ctx->r8) = ctx->r2;
L_80230F00:
    // 0x80230F00: lh          $v1, 0x18($t1)
    ctx->r3 = MEM_H(ctx->r9, 0X18);
    // 0x80230F04: slti        $v0, $v1, 0x2F8
    ctx->r2 = SIGNED(ctx->r3) < 0X2F8 ? 1 : 0;
    // 0x80230F08: beq         $v0, $zero, L_80231014
    if (ctx->r2 == 0) {
        // 0x80230F0C: addiu       $v0, $zero, 0x16C
        ctx->r2 = ADD32(0, 0X16C);
            goto L_80231014;
    }
    // 0x80230F0C: addiu       $v0, $zero, 0x16C
    ctx->r2 = ADD32(0, 0X16C);
    // 0x80230F10: beq         $v1, $v0, L_80230FBC
    if (ctx->r3 == ctx->r2) {
        // 0x80230F14: slti        $v0, $v1, 0x16D
        ctx->r2 = SIGNED(ctx->r3) < 0X16D ? 1 : 0;
            goto L_80230FBC;
    }
    // 0x80230F14: slti        $v0, $v1, 0x16D
    ctx->r2 = SIGNED(ctx->r3) < 0X16D ? 1 : 0;
    // 0x80230F18: beq         $v0, $zero, L_80230F5C
    if (ctx->r2 == 0) {
        // 0x80230F1C: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80230F5C;
    }
    // 0x80230F1C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80230F20: beq         $v1, $v0, L_80230FD4
    if (ctx->r3 == ctx->r2) {
        // 0x80230F24: slti        $v0, $v1, 0x11
        ctx->r2 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
            goto L_80230FD4;
    }
    // 0x80230F24: slti        $v0, $v1, 0x11
    ctx->r2 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
    // 0x80230F28: beql        $v0, $zero, L_80230F40
    if (ctx->r2 == 0) {
        // 0x80230F2C: addiu       $v0, $zero, 0x74
        ctx->r2 = ADD32(0, 0X74);
            goto L_80230F40;
    }
    goto skip_0;
    // 0x80230F2C: addiu       $v0, $zero, 0x74
    ctx->r2 = ADD32(0, 0X74);
    skip_0:
    // 0x80230F30: beq         $v1, $zero, L_80230FA4
    if (ctx->r3 == 0) {
        // 0x80230F34: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80230FA4;
    }
    // 0x80230F34: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230F38: j           L_80231004
    // 0x80230F3C: nop

        goto L_80231004;
    // 0x80230F3C: nop

L_80230F40:
    // 0x80230F40: beq         $v1, $v0, L_80230FAC
    if (ctx->r3 == ctx->r2) {
        // 0x80230F44: nop
    
            goto L_80230FAC;
    }
    // 0x80230F44: nop

    // 0x80230F48: addiu       $v0, $zero, 0x84
    ctx->r2 = ADD32(0, 0X84);
    // 0x80230F4C: beql        $v1, $v0, L_80231004
    if (ctx->r3 == ctx->r2) {
        // 0x80230F50: sh          $zero, 0x4C($t0)
        MEM_H(0X4C, ctx->r8) = 0;
            goto L_80231004;
    }
    goto skip_1;
    // 0x80230F50: sh          $zero, 0x4C($t0)
    MEM_H(0X4C, ctx->r8) = 0;
    skip_1:
    // 0x80230F54: j           L_80231004
    // 0x80230F58: nop

        goto L_80231004;
    // 0x80230F58: nop

L_80230F5C:
    // 0x80230F5C: addiu       $v0, $zero, 0x274
    ctx->r2 = ADD32(0, 0X274);
    // 0x80230F60: beq         $v1, $v0, L_80230FDC
    if (ctx->r3 == ctx->r2) {
        // 0x80230F64: slti        $v0, $v1, 0x275
        ctx->r2 = SIGNED(ctx->r3) < 0X275 ? 1 : 0;
            goto L_80230FDC;
    }
    // 0x80230F64: slti        $v0, $v1, 0x275
    ctx->r2 = SIGNED(ctx->r3) < 0X275 ? 1 : 0;
    // 0x80230F68: beq         $v0, $zero, L_80230F88
    if (ctx->r2 == 0) {
        // 0x80230F6C: addiu       $v0, $zero, 0x17C
        ctx->r2 = ADD32(0, 0X17C);
            goto L_80230F88;
    }
    // 0x80230F6C: addiu       $v0, $zero, 0x17C
    ctx->r2 = ADD32(0, 0X17C);
    // 0x80230F70: beq         $v1, $v0, L_80230FC4
    if (ctx->r3 == ctx->r2) {
        // 0x80230F74: addiu       $v0, $zero, 0x18C
        ctx->r2 = ADD32(0, 0X18C);
            goto L_80230FC4;
    }
    // 0x80230F74: addiu       $v0, $zero, 0x18C
    ctx->r2 = ADD32(0, 0X18C);
    // 0x80230F78: beql        $v1, $v0, L_80231004
    if (ctx->r3 == ctx->r2) {
        // 0x80230F7C: sh          $zero, 0x4E($t0)
        MEM_H(0X4E, ctx->r8) = 0;
            goto L_80231004;
    }
    goto skip_2;
    // 0x80230F7C: sh          $zero, 0x4E($t0)
    MEM_H(0X4E, ctx->r8) = 0;
    skip_2:
    // 0x80230F80: j           L_80231004
    // 0x80230F84: nop

        goto L_80231004;
    // 0x80230F84: nop

L_80230F88:
    // 0x80230F88: addiu       $v0, $zero, 0x284
    ctx->r2 = ADD32(0, 0X284);
    // 0x80230F8C: beq         $v1, $v0, L_80230FF8
    if (ctx->r3 == ctx->r2) {
        // 0x80230F90: addiu       $v0, $zero, 0x2E8
        ctx->r2 = ADD32(0, 0X2E8);
            goto L_80230FF8;
    }
    // 0x80230F90: addiu       $v0, $zero, 0x2E8
    ctx->r2 = ADD32(0, 0X2E8);
    // 0x80230F94: beq         $v1, $v0, L_80231000
    if (ctx->r3 == ctx->r2) {
        // 0x80230F98: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80231000;
    }
    // 0x80230F98: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230F9C: j           L_80231004
    // 0x80230FA0: nop

        goto L_80231004;
    // 0x80230FA0: nop

L_80230FA4:
    // 0x80230FA4: j           L_80231000
    // 0x80230FA8: sh          $zero, 0x4C($t0)
    MEM_H(0X4C, ctx->r8) = 0;
        goto L_80231000;
    // 0x80230FA8: sh          $zero, 0x4C($t0)
    MEM_H(0X4C, ctx->r8) = 0;
L_80230FAC:
    // 0x80230FAC: lbu         $v0, 0x9($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X9);
    // 0x80230FB0: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x80230FB4: j           L_80230FE8
    // 0x80230FB8: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
        goto L_80230FE8;
    // 0x80230FB8: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
L_80230FBC:
    // 0x80230FBC: j           L_80231000
    // 0x80230FC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80231000;
    // 0x80230FC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80230FC4:
    // 0x80230FC4: lhu         $v0, 0x14($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X14);
    // 0x80230FC8: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80230FCC: j           L_80231004
    // 0x80230FD0: sh          $v0, 0x14($t1)
    MEM_H(0X14, ctx->r9) = ctx->r2;
        goto L_80231004;
    // 0x80230FD0: sh          $v0, 0x14($t1)
    MEM_H(0X14, ctx->r9) = ctx->r2;
L_80230FD4:
    // 0x80230FD4: j           L_80231004
    // 0x80230FD8: sh          $zero, 0x4E($t0)
    MEM_H(0X4E, ctx->r8) = 0;
        goto L_80231004;
    // 0x80230FD8: sh          $zero, 0x4E($t0)
    MEM_H(0X4E, ctx->r8) = 0;
L_80230FDC:
    // 0x80230FDC: lbu         $v0, 0x9($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X9);
    // 0x80230FE0: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x80230FE4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_80230FE8:
    // 0x80230FE8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80230FEC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80230FF0: j           L_80231004
    // 0x80230FF4: sh          $v0, 0x4C($t0)
    MEM_H(0X4C, ctx->r8) = ctx->r2;
        goto L_80231004;
    // 0x80230FF4: sh          $v0, 0x4C($t0)
    MEM_H(0X4C, ctx->r8) = ctx->r2;
L_80230FF8:
    // 0x80230FF8: j           L_80231004
    // 0x80230FFC: sh          $zero, 0x4C($t0)
    MEM_H(0X4C, ctx->r8) = 0;
        goto L_80231004;
    // 0x80230FFC: sh          $zero, 0x4C($t0)
    MEM_H(0X4C, ctx->r8) = 0;
L_80231000:
    // 0x80231000: sh          $v0, 0x4E($t0)
    MEM_H(0X4E, ctx->r8) = ctx->r2;
L_80231004:
    // 0x80231004: lhu         $v0, 0x18($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X18);
    // 0x80231008: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023100C: j           L_8023102C
    // 0x80231010: sh          $v0, 0x18($t1)
    MEM_H(0X18, ctx->r9) = ctx->r2;
        goto L_8023102C;
    // 0x80231010: sh          $v0, 0x18($t1)
    MEM_H(0X18, ctx->r9) = ctx->r2;
L_80231014:
    // 0x80231014: lhu         $v0, 0x14($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X14);
    // 0x80231018: sh          $zero, 0x18($t1)
    MEM_H(0X18, ctx->r9) = 0;
    // 0x8023101C: ori         $v0, $v0, 0x5
    ctx->r2 = ctx->r2 | 0X5;
    // 0x80231020: sh          $v0, 0x14($t1)
    MEM_H(0X14, ctx->r9) = ctx->r2;
    // 0x80231024: sh          $zero, 0x4C($t0)
    MEM_H(0X4C, ctx->r8) = 0;
    // 0x80231028: sh          $zero, 0x4E($t0)
    MEM_H(0X4E, ctx->r8) = 0;
L_8023102C:
    // 0x8023102C: lhu         $v0, 0x44($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X44);
    // 0x80231030: lhu         $a1, 0x4C($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X4C);
    // 0x80231034: lhu         $v1, 0x46($t0)
    ctx->r3 = MEM_HU(ctx->r8, 0X46);
    // 0x80231038: lhu         $a2, 0x4E($t0)
    ctx->r6 = MEM_HU(ctx->r8, 0X4E);
    // 0x8023103C: lhu         $a0, 0x48($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X48);
    // 0x80231040: lhu         $a3, 0x50($t0)
    ctx->r7 = MEM_HU(ctx->r8, 0X50);
    // 0x80231044: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80231048: sh          $v0, 0x44($t0)
    MEM_H(0X44, ctx->r8) = ctx->r2;
    // 0x8023104C: lhu         $v0, 0x14($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X14);
    // 0x80231050: lhu         $a1, 0x44($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X44);
    // 0x80231054: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80231058: sh          $v1, 0x46($t0)
    MEM_H(0X46, ctx->r8) = ctx->r3;
    // 0x8023105C: lhu         $v1, 0x16($t0)
    ctx->r3 = MEM_HU(ctx->r8, 0X16);
    // 0x80231060: lhu         $a2, 0x46($t0)
    ctx->r6 = MEM_HU(ctx->r8, 0X46);
    // 0x80231064: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x80231068: sh          $a0, 0x48($t0)
    MEM_H(0X48, ctx->r8) = ctx->r4;
    // 0x8023106C: lhu         $a0, 0x18($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X18);
    // 0x80231070: lhu         $a3, 0x48($t0)
    ctx->r7 = MEM_HU(ctx->r8, 0X48);
    // 0x80231074: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80231078: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8023107C: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x80231080: sh          $v0, 0x14($t0)
    MEM_H(0X14, ctx->r8) = ctx->r2;
    // 0x80231084: sh          $v1, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r3;
    // 0x80231088: sh          $a0, 0x18($t0)
    MEM_H(0X18, ctx->r8) = ctx->r4;
    // 0x8023108C: lhu         $v0, 0x14($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X14);
    // 0x80231090: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80231094: beq         $v0, $zero, L_802310F4
    if (ctx->r2 == 0) {
        // 0x80231098: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802310F4;
    }
    // 0x80231098: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023109C: lbu         $v1, 0xA($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0XA);
    // 0x802310A0: bne         $v1, $v0, L_802310C4
    if (ctx->r3 != ctx->r2) {
        // 0x802310A4: addiu       $v1, $zero, -0x340
        ctx->r3 = ADD32(0, -0X340);
            goto L_802310C4;
    }
    // 0x802310A4: addiu       $v1, $zero, -0x340
    ctx->r3 = ADD32(0, -0X340);
    // 0x802310A8: lbu         $v1, 0xA($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0XA);
    // 0x802310AC: addiu       $v0, $zero, -0x1A00
    ctx->r2 = ADD32(0, -0X1A00);
    // 0x802310B0: sh          $zero, 0x14($t0)
    MEM_H(0X14, ctx->r8) = 0;
    // 0x802310B4: sh          $v0, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r2;
    // 0x802310B8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802310BC: j           L_802310E8
    // 0x802310C0: sb          $v1, 0xA($t0)
    MEM_B(0XA, ctx->r8) = ctx->r3;
        goto L_802310E8;
    // 0x802310C0: sb          $v1, 0xA($t0)
    MEM_B(0XA, ctx->r8) = ctx->r3;
L_802310C4:
    // 0x802310C4: lbu         $v0, 0x9($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X9);
    // 0x802310C8: sh          $v1, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r3;
    // 0x802310CC: addiu       $v1, $zero, -0x1000
    ctx->r3 = ADD32(0, -0X1000);
    // 0x802310D0: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x802310D4: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x802310D8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802310DC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802310E0: ori         $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 | 0X1000;
    // 0x802310E4: sh          $v0, 0x14($t0)
    MEM_H(0X14, ctx->r8) = ctx->r2;
L_802310E8:
    // 0x802310E8: lhu         $v0, 0x14($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X14);
    // 0x802310EC: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x802310F0: sh          $v0, 0x14($t1)
    MEM_H(0X14, ctx->r9) = ctx->r2;
L_802310F4:
    // 0x802310F4: lh          $v0, 0x14($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X14);
    // 0x802310F8: lh          $v1, 0x16($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X16);
    // 0x802310FC: lh          $a0, 0x18($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X18);
    // 0x80231100: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231104: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80231108: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023110C: sw          $v0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r2;
    // 0x80231110: sw          $v1, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->r3;
    // 0x80231114: jr          $ra
    // 0x80231118: sw          $a0, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x80231118: sw          $a0, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r4;
;}
RECOMP_FUNC void func_80232284_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232284: lh          $v1, 0x18($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X18);
    // 0x80232288: slti        $v0, $v1, 0x1BC
    ctx->r2 = SIGNED(ctx->r3) < 0X1BC ? 1 : 0;
    // 0x8023228C: beq         $v0, $zero, L_80232370
    if (ctx->r2 == 0) {
        // 0x80232290: addiu       $v0, $zero, 0xBC
        ctx->r2 = ADD32(0, 0XBC);
            goto L_80232370;
    }
    // 0x80232290: addiu       $v0, $zero, 0xBC
    ctx->r2 = ADD32(0, 0XBC);
    // 0x80232294: beq         $v1, $v0, L_80232324
    if (ctx->r3 == ctx->r2) {
        // 0x80232298: slti        $v0, $v1, 0xBD
        ctx->r2 = SIGNED(ctx->r3) < 0XBD ? 1 : 0;
            goto L_80232324;
    }
    // 0x80232298: slti        $v0, $v1, 0xBD
    ctx->r2 = SIGNED(ctx->r3) < 0XBD ? 1 : 0;
    // 0x8023229C: beq         $v0, $zero, L_802322D4
    if (ctx->r2 == 0) {
        // 0x802322A0: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_802322D4;
    }
    // 0x802322A0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802322A4: beq         $v1, $v0, L_8023233C
    if (ctx->r3 == ctx->r2) {
        // 0x802322A8: slti        $v0, $v1, 0x11
        ctx->r2 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
            goto L_8023233C;
    }
    // 0x802322A8: slti        $v0, $v1, 0x11
    ctx->r2 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
    // 0x802322AC: beql        $v0, $zero, L_802322C4
    if (ctx->r2 == 0) {
        // 0x802322B0: addiu       $v0, $zero, 0xAC
        ctx->r2 = ADD32(0, 0XAC);
            goto L_802322C4;
    }
    goto skip_0;
    // 0x802322B0: addiu       $v0, $zero, 0xAC
    ctx->r2 = ADD32(0, 0XAC);
    skip_0:
    // 0x802322B4: beq         $v1, $zero, L_8023230C
    if (ctx->r3 == 0) {
        // 0x802322B8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023230C;
    }
    // 0x802322B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802322BC: j           L_80232360
    // 0x802322C0: nop

        goto L_80232360;
    // 0x802322C0: nop

L_802322C4:
    // 0x802322C4: beq         $v1, $v0, L_80232314
    if (ctx->r3 == ctx->r2) {
        // 0x802322C8: nop
    
            goto L_80232314;
    }
    // 0x802322C8: nop

    // 0x802322CC: j           L_80232360
    // 0x802322D0: nop

        goto L_80232360;
    // 0x802322D0: nop

L_802322D4:
    // 0x802322D4: addiu       $v0, $zero, 0x130
    ctx->r2 = ADD32(0, 0X130);
    // 0x802322D8: beq         $v1, $v0, L_80232338
    if (ctx->r3 == ctx->r2) {
        // 0x802322DC: slti        $v0, $v1, 0x131
        ctx->r2 = SIGNED(ctx->r3) < 0X131 ? 1 : 0;
            goto L_80232338;
    }
    // 0x802322DC: slti        $v0, $v1, 0x131
    ctx->r2 = SIGNED(ctx->r3) < 0X131 ? 1 : 0;
    // 0x802322E0: beq         $v0, $zero, L_802322F8
    if (ctx->r2 == 0) {
        // 0x802322E4: addiu       $v0, $zero, 0x120
        ctx->r2 = ADD32(0, 0X120);
            goto L_802322F8;
    }
    // 0x802322E4: addiu       $v0, $zero, 0x120
    ctx->r2 = ADD32(0, 0X120);
    // 0x802322E8: beq         $v1, $v0, L_8023232C
    if (ctx->r3 == ctx->r2) {
        // 0x802322EC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023232C;
    }
    // 0x802322EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802322F0: j           L_80232360
    // 0x802322F4: nop

        goto L_80232360;
    // 0x802322F4: nop

L_802322F8:
    // 0x802322F8: addiu       $v0, $zero, 0x1AC
    ctx->r2 = ADD32(0, 0X1AC);
    // 0x802322FC: beq         $v1, $v0, L_80232344
    if (ctx->r3 == ctx->r2) {
        // 0x80232300: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80232344;
    }
    // 0x80232300: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80232304: j           L_80232360
    // 0x80232308: nop

        goto L_80232360;
    // 0x80232308: nop

L_8023230C:
    // 0x8023230C: j           L_80232360
    // 0x80232310: sh          $v0, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r2;
        goto L_80232360;
    // 0x80232310: sh          $v0, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r2;
L_80232314:
    // 0x80232314: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80232318: xori        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 ^ 0X2;
    // 0x8023231C: j           L_80232354
    // 0x80232320: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
        goto L_80232354;
    // 0x80232320: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
L_80232324:
    // 0x80232324: j           L_80232360
    // 0x80232328: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
        goto L_80232360;
    // 0x80232328: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
L_8023232C:
    // 0x8023232C: sh          $v0, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r2;
    // 0x80232330: j           L_80232360
    // 0x80232334: sh          $v0, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r2;
        goto L_80232360;
    // 0x80232334: sh          $v0, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r2;
L_80232338:
    // 0x80232338: sh          $zero, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = 0;
L_8023233C:
    // 0x8023233C: j           L_80232360
    // 0x80232340: sh          $zero, 0x50($a0)
    MEM_H(0X50, ctx->r4) = 0;
        goto L_80232360;
    // 0x80232340: sh          $zero, 0x50($a0)
    MEM_H(0X50, ctx->r4) = 0;
L_80232344:
    // 0x80232344: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80232348: sh          $v1, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r3;
    // 0x8023234C: xori        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 ^ 0X2;
    // 0x80232350: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_80232354:
    // 0x80232354: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80232358: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023235C: sh          $v0, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = ctx->r2;
L_80232360:
    // 0x80232360: lhu         $v0, 0x18($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X18);
    // 0x80232364: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232368: j           L_8023238C
    // 0x8023236C: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
        goto L_8023238C;
    // 0x8023236C: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
L_80232370:
    // 0x80232370: lhu         $v0, 0x14($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X14);
    // 0x80232374: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x80232378: ori         $v0, $v0, 0x5
    ctx->r2 = ctx->r2 | 0X5;
    // 0x8023237C: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x80232380: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
    // 0x80232384: sh          $zero, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = 0;
    // 0x80232388: sh          $zero, 0x50($a0)
    MEM_H(0X50, ctx->r4) = 0;
L_8023238C:
    // 0x8023238C: jr          $ra
    // 0x80232390: nop

    TRACE_RETURN()
    return;
    // 0x80232390: nop

;}
RECOMP_FUNC void func_802278D0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802278D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802278D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802278D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802278DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802278E0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802278E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802278E8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802278EC: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802278F0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802278F4: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802278F8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802278FC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80227900: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80227904: jal         0x8004D5D4
    // 0x80227908: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80227908: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022790C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227910: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227914: jal         0x80050294
    // 0x80227918: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80227918: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022791C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227920: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227924: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80227928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022792C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227930: jr          $ra
    // 0x80227934: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227934: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232F40_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232F40: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80232F44: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80232F48: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80232F4C: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x80232F50: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x80232F54: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80232F58: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x80232F5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232F60: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80232F64: addiu       $a1, $a1, 0xFE8
    ctx->r5 = ADD32(ctx->r5, 0XFE8);
    // 0x80232F68: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80232F6C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80232F70: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x80232F74: jal         0x8009A3B4
    // 0x80232F78: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80232F78: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    after_0:
    // 0x80232F7C: jal         0x8002C654
    // 0x80232F80: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x80232F80: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x80232F84: addiu       $a0, $s1, 0x54
    ctx->r4 = ADD32(ctx->r17, 0X54);
    // 0x80232F88: jal         0x80031600
    // 0x80232F8C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80031600_CA00(rdram, ctx);
        goto after_2;
    // 0x80232F8C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x80232F90: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80232F94: jal         0x80031DA8
    // 0x80232F98: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x80232F98: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80232F9C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80232FA0: lui         $s4, 0x8024
    ctx->r20 = S32(0X8024 << 16);
    // 0x80232FA4: addiu       $s4, $s4, -0x1440
    ctx->r20 = ADD32(ctx->r20, -0X1440);
L_80232FA8:
    // 0x80232FA8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80232FAC: sll         $s0, $s2, 24
    ctx->r16 = S32(ctx->r18 << 24);
    // 0x80232FB0: sra         $s0, $s0, 21
    ctx->r16 = S32(SIGNED(ctx->r16) >> 21);
    // 0x80232FB4: addu        $a1, $s0, $s4
    ctx->r5 = ADD32(ctx->r16, ctx->r20);
    // 0x80232FB8: addiu       $a2, $s0, 0x8
    ctx->r6 = ADD32(ctx->r16, 0X8);
    // 0x80232FBC: jal         0x80031270
    // 0x80232FC0: addu        $a2, $s3, $a2
    ctx->r6 = ADD32(ctx->r19, ctx->r6);
    func_80031270_C670(rdram, ctx);
        goto after_4;
    // 0x80232FC0: addu        $a2, $s3, $a2
    ctx->r6 = ADD32(ctx->r19, ctx->r6);
    after_4:
    // 0x80232FC4: addu        $s0, $s3, $s0
    ctx->r16 = ADD32(ctx->r19, ctx->r16);
    // 0x80232FC8: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80232FCC: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x80232FD0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232FD4: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80232FD8: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x80232FDC: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x80232FE0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232FE4: lhu         $v1, 0xC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XC);
    // 0x80232FE8: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x80232FEC: lhu         $a0, 0x18($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X18);
    // 0x80232FF0: addiu       $v0, $s2, 0x1
    ctx->r2 = ADD32(ctx->r18, 0X1);
    // 0x80232FF4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80232FF8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80232FFC: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80233000: slti        $v0, $v0, 0x12
    ctx->r2 = SIGNED(ctx->r2) < 0X12 ? 1 : 0;
    // 0x80233004: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80233008: bne         $v0, $zero, L_80232FA8
    if (ctx->r2 != 0) {
        // 0x8023300C: sh          $v1, 0xC($s0)
        MEM_H(0XC, ctx->r16) = ctx->r3;
            goto L_80232FA8;
    }
    // 0x8023300C: sh          $v1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r3;
    // 0x80233010: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80233014: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x80233018: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8023301C: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x80233020: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80233024: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80233028: jr          $ra
    // 0x8023302C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x8023302C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80225DC0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225DC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225DC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225DC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225DCC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80225DD0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80225DD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225DD8: jal         0x8009A3B4
    // 0x80225DDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80225DDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80225DE0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80225DE4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80225DE8: jal         0x8009A3B4
    // 0x80225DEC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80225DEC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80225DF0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80225DF4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80225DF8: jal         0x8009A3B4
    // 0x80225DFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80225DFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80225E00: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80225E04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225E08: beq         $v1, $v0, L_80225E9C
    if (ctx->r3 == ctx->r2) {
        // 0x80225E0C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80225E9C;
    }
    // 0x80225E0C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225E10: beql        $v0, $zero, L_80225E28
    if (ctx->r2 == 0) {
        // 0x80225E14: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225E28;
    }
    goto skip_0;
    // 0x80225E14: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80225E18: beq         $v1, $zero, L_80225E38
    if (ctx->r3 == 0) {
        // 0x80225E1C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80225E38;
    }
    // 0x80225E1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225E20: j           L_80225EE0
    // 0x80225E24: nop

        goto L_80225EE0;
    // 0x80225E24: nop

L_80225E28:
    // 0x80225E28: beq         $v1, $v0, L_80225ED8
    if (ctx->r3 == ctx->r2) {
        // 0x80225E2C: nop
    
            goto L_80225ED8;
    }
    // 0x80225E2C: nop

    // 0x80225E30: j           L_80225EE0
    // 0x80225E34: nop

        goto L_80225EE0;
    // 0x80225E34: nop

L_80225E38:
    // 0x80225E38: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80225E3C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225E40: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225E44: jal         0x8004D5FC
    // 0x80225E48: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5FC_289FC(rdram, ctx);
        goto after_3;
    // 0x80225E48: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_3:
    // 0x80225E4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225E50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225E54: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225E58: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80225E5C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80225E60: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80225E64: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80225E68: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80225E6C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80225E70: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80225E74: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80225E78: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80225E7C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80225E80: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80225E84: jal         0x80050294
    // 0x80225E88: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80225E88: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    after_4:
    // 0x80225E8C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80225E90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225E94: j           L_80225EE0
    // 0x80225E98: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80225EE0;
    // 0x80225E98: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80225E9C:
    // 0x80225E9C: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80225EA0: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80225EA4: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80225EA8: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x80225EAC: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80225EB0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225EB4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80225EB8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80225EBC: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80225EC0: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80225EC4: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80225EC8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80225ECC: lw          $a0, -0x3A24($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A24);
    // 0x80225ED0: jal         0x80048694
    // 0x80225ED4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80048694_23A94(rdram, ctx);
        goto after_5;
    // 0x80225ED4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
L_80225ED8:
    // 0x80225ED8: jal         0x8005044C
    // 0x80225EDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x80225EDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_80225EE0:
    // 0x80225EE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225EE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225EE8: jr          $ra
    // 0x80225EEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225EEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023CADC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023CADC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023CAE0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023CAE4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023CAE8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023CAEC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023CAF0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023CAF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023CAF8: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x8023CAFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023CB00: beq         $v1, $v0, L_8023CC9C
    if (ctx->r3 == ctx->r2) {
        // 0x8023CB04: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023CC9C;
    }
    // 0x8023CB04: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023CB08: beq         $v0, $zero, L_8023CCCC
    if (ctx->r2 == 0) {
        // 0x8023CB0C: nop
    
            goto L_8023CCCC;
    }
    // 0x8023CB0C: nop

    // 0x8023CB10: bne         $v1, $zero, L_8023CCCC
    if (ctx->r3 != 0) {
        // 0x8023CB14: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023CCCC;
    }
    // 0x8023CB14: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023CB18: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023CB1C: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8023CB20: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8023CB24: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023CB28: lbu         $a0, 0x4A6D($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4A6D);
    // 0x8023CB2C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8023CB30: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CB34: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x8023CB38: addiu       $v0, $zero, 0xA40
    ctx->r2 = ADD32(0, 0XA40);
    // 0x8023CB3C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CB40: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x8023CB44: addiu       $v0, $zero, -0x186B
    ctx->r2 = ADD32(0, -0X186B);
    // 0x8023CB48: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CB4C: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x8023CB50: addiu       $v0, $zero, -0xB3C
    ctx->r2 = ADD32(0, -0XB3C);
    // 0x8023CB54: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CB58: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x8023CB5C: lui         $v0, 0xA40
    ctx->r2 = S32(0XA40 << 16);
    // 0x8023CB60: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CB64: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x8023CB68: lui         $v0, 0xE795
    ctx->r2 = S32(0XE795 << 16);
    // 0x8023CB6C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CB70: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x8023CB74: lui         $v0, 0xF4C4
    ctx->r2 = S32(0XF4C4 << 16);
    // 0x8023CB78: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CB7C: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x8023CB80: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8023CB84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CB88: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x8023CB8C: addiu       $v0, $zero, 0x84
    ctx->r2 = ADD32(0, 0X84);
    // 0x8023CB90: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CB94: sb          $s0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r16;
    // 0x8023CB98: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CB9C: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x8023CBA0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CBA4: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x8023CBA8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CBAC: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8023CBB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CBB4: sb          $s0, 0x4A26($at)
    MEM_B(0X4A26, ctx->r1) = ctx->r16;
    // 0x8023CBB8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CBBC: sb          $zero, 0x4A24($at)
    MEM_B(0X4A24, ctx->r1) = 0;
    // 0x8023CBC0: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x8023CBC4: ori         $a0, $a0, 0x10
    ctx->r4 = ctx->r4 | 0X10;
    // 0x8023CBC8: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x8023CBCC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CBD0: sb          $a0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r4;
    // 0x8023CBD4: lw          $v0, 0x28($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X28);
    // 0x8023CBD8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CBDC: sb          $zero, 0x4B20($at)
    MEM_B(0X4B20, ctx->r1) = 0;
    // 0x8023CBE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CBE4: sw          $v0, 0x4A70($at)
    MEM_W(0X4A70, ctx->r1) = ctx->r2;
    // 0x8023CBE8: jal         0x800736E0
    // 0x8023CBEC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_800736E0_4EAE0(rdram, ctx);
        goto after_0;
    // 0x8023CBEC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x8023CBF0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023CBF4: lw          $v0, 0x82C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X82C);
    // 0x8023CBF8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023CBFC: lw          $v1, 0x850($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X850);
    // 0x8023CC00: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CC04: sb          $zero, 0x3282($at)
    MEM_B(0X3282, ctx->r1) = 0;
    // 0x8023CC08: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CC0C: sb          $zero, 0x3281($at)
    MEM_B(0X3281, ctx->r1) = 0;
    // 0x8023CC10: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CC14: sb          $zero, 0x3280($at)
    MEM_B(0X3280, ctx->r1) = 0;
    // 0x8023CC18: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CC1C: sb          $zero, 0x3285($at)
    MEM_B(0X3285, ctx->r1) = 0;
    // 0x8023CC20: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CC24: sb          $zero, 0x3284($at)
    MEM_B(0X3284, ctx->r1) = 0;
    // 0x8023CC28: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CC2C: sb          $zero, 0x3283($at)
    MEM_B(0X3283, ctx->r1) = 0;
    // 0x8023CC30: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CC34: sw          $v0, 0x3288($at)
    MEM_W(0X3288, ctx->r1) = ctx->r2;
    // 0x8023CC38: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CC3C: jal         0x8004F144
    // 0x8023CC40: sw          $v1, 0x328C($at)
    MEM_W(0X328C, ctx->r1) = ctx->r3;
    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x8023CC40: sw          $v1, 0x328C($at)
    MEM_W(0X328C, ctx->r1) = ctx->r3;
    after_1:
    // 0x8023CC44: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023CC48: beq         $v1, $zero, L_8023CC58
    if (ctx->r3 == 0) {
        // 0x8023CC4C: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_8023CC58;
    }
    // 0x8023CC4C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8023CC50: sb          $s0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r16;
    // 0x8023CC54: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
L_8023CC58:
    // 0x8023CC58: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8023CC5C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x8023CC60: addiu       $s2, $zero, 0x16
    ctx->r18 = ADD32(0, 0X16);
L_8023CC64:
    // 0x8023CC64: jal         0x8004F144
    // 0x8023CC68: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x8023CC68: nop

    after_2:
    // 0x8023CC6C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023CC70: beql        $v1, $zero, L_8023CC88
    if (ctx->r3 == 0) {
        // 0x8023CC74: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8023CC88;
    }
    goto skip_0;
    // 0x8023CC74: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x8023CC78: sb          $s3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r19;
    // 0x8023CC7C: sb          $s2, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r18;
    // 0x8023CC80: sb          $s0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r16;
    // 0x8023CC84: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8023CC88:
    // 0x8023CC88: slti        $v0, $s0, 0x9
    ctx->r2 = SIGNED(ctx->r16) < 0X9 ? 1 : 0;
    // 0x8023CC8C: beq         $v0, $zero, L_8023CCC0
    if (ctx->r2 == 0) {
        // 0x8023CC90: nop
    
            goto L_8023CCC0;
    }
    // 0x8023CC90: nop

    // 0x8023CC94: j           L_8023CC64
    // 0x8023CC98: nop

        goto L_8023CC64;
    // 0x8023CC98: nop

L_8023CC9C:
    // 0x8023CC9C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023CCA0: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8023CCA4: bne         $v0, $zero, L_8023CCCC
    if (ctx->r2 != 0) {
        // 0x8023CCA8: addiu       $v1, $zero, -0x81
        ctx->r3 = ADD32(0, -0X81);
            goto L_8023CCCC;
    }
    // 0x8023CCA8: addiu       $v1, $zero, -0x81
    ctx->r3 = ADD32(0, -0X81);
    // 0x8023CCAC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023CCB0: lw          $v0, 0x3290($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3290);
    // 0x8023CCB4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023CCB8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CCBC: sw          $v0, 0x3290($at)
    MEM_W(0X3290, ctx->r1) = ctx->r2;
L_8023CCC0:
    // 0x8023CCC0: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8023CCC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023CCC8: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_8023CCCC:
    // 0x8023CCCC: jal         0x8023C5C0
    // 0x8023CCD0: nop

    func_8023C5C0_ovl25(rdram, ctx);
        goto after_3;
    // 0x8023CCD0: nop

    after_3:
    // 0x8023CCD4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023CCD8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023CCDC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023CCE0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023CCE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023CCE8: jr          $ra
    // 0x8023CCEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023CCEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80237A74_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237A74: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x80237A78: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x80237A7C: lhu         $v1, 0x1A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X1A);
    // 0x80237A80: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x80237A84: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
    // 0x80237A88: lb          $v1, 0x3($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X3);
    // 0x80237A8C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80237A90: bgez        $v1, L_80237AD0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80237A94: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80237AD0;
    }
    // 0x80237A94: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80237A98: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80237A9C: bne         $v1, $v0, L_80237ABC
    if (ctx->r3 != ctx->r2) {
        // 0x80237AA0: andi        $v0, $a1, 0x7F
        ctx->r2 = ctx->r5 & 0X7F;
            goto L_80237ABC;
    }
    // 0x80237AA0: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x80237AA4: lb          $v1, 0xC($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XC);
    // 0x80237AA8: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x80237AAC: bne         $v1, $v0, L_80237ADC
    if (ctx->r3 != ctx->r2) {
        // 0x80237AB0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80237ADC;
    }
    // 0x80237AB0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80237AB4: j           L_80237B00
    // 0x80237AB8: nop

        goto L_80237B00;
    // 0x80237AB8: nop

L_80237ABC:
    // 0x80237ABC: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x80237AC0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80237AC4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237AC8: j           L_80237ADC
    // 0x80237ACC: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
        goto L_80237ADC;
    // 0x80237ACC: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
L_80237AD0:
    // 0x80237AD0: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80237AD4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80237AD8: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_80237ADC:
    // 0x80237ADC: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x80237AE0: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x80237AE4: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80237AE8: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x80237AEC: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80237AF0: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x80237AF4: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x80237AF8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80237AFC: sh          $v1, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r3;
L_80237B00:
    // 0x80237B00: jr          $ra
    // 0x80237B04: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80237B04: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80237B08: nop

    // 0x80237B0C: nop

;}
RECOMP_FUNC void func_8022F448_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F448: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F44C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F450: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F454: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F458: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F45C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022F460: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022F464: addiu       $a0, $v0, -0x400
    ctx->r4 = ADD32(ctx->r2, -0X400);
    // 0x8022F468: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x8022F46C: sh          $v0, 0x4F8($s0)
    MEM_H(0X4F8, ctx->r16) = ctx->r2;
    // 0x8022F470: jal         0x800324B4
    // 0x8022F474: sh          $a0, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = ctx->r4;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x8022F474: sh          $a0, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = ctx->r4;
    after_0:
    // 0x8022F478: lh          $a0, 0x4E0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4E0);
    // 0x8022F47C: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8022F480: lhu         $a1, 0x4EA($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X4EA);
    // 0x8022F484: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022F488: srl         $v1, $v1, 3
    ctx->r3 = S32(U32(ctx->r3) >> 3);
    // 0x8022F48C: sh          $v1, 0x4F0($s0)
    MEM_H(0X4F0, ctx->r16) = ctx->r3;
    // 0x8022F490: addiu       $a1, $a1, -0x800
    ctx->r5 = ADD32(ctx->r5, -0X800);
    // 0x8022F494: jal         0x80032498
    // 0x8022F498: sh          $a1, 0x4F2($s0)
    MEM_H(0X4F2, ctx->r16) = ctx->r5;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x8022F498: sh          $a1, 0x4F2($s0)
    MEM_H(0X4F2, ctx->r16) = ctx->r5;
    after_1:
    // 0x8022F49C: addiu       $a0, $zero, 0x1A6
    ctx->r4 = ADD32(0, 0X1A6);
    // 0x8022F4A0: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8022F4A4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022F4A8: srl         $v1, $v1, 3
    ctx->r3 = S32(U32(ctx->r3) >> 3);
    // 0x8022F4AC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022F4B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F4B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F4B8: sh          $v1, 0x4F4($s0)
    MEM_H(0X4F4, ctx->r16) = ctx->r3;
    // 0x8022F4BC: jal         0x8002A2F8
    // 0x8022F4C0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x8022F4C0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022F4C4: addiu       $v0, $zero, -0x600
    ctx->r2 = ADD32(0, -0X600);
    // 0x8022F4C8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022F4CC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F4D0: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022F4D4: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022F4D8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022F4DC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022F4E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F4E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F4E8: jr          $ra
    // 0x8022F4EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F4EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226CFC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226CFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226D00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226D04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226D08: jal         0x800A3450
    // 0x80226D0C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80226D0C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80226D10: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80226D14: bne         $v1, $zero, L_80226D8C
    if (ctx->r3 != 0) {
        // 0x80226D18: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_80226D8C;
    }
    // 0x80226D18: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80226D1C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80226D20: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x80226D24: andi        $v0, $a2, 0x7
    ctx->r2 = ctx->r6 & 0X7;
    // 0x80226D28: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x80226D2C: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x80226D30: sll         $a0, $a2, 16
    ctx->r4 = S32(ctx->r6 << 16);
    // 0x80226D34: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x80226D38: sra         $v0, $a0, 18
    ctx->r2 = S32(SIGNED(ctx->r4) >> 18);
    // 0x80226D3C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80226D40: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80226D44: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80226D48: sra         $v0, $a0, 20
    ctx->r2 = S32(SIGNED(ctx->r4) >> 20);
    // 0x80226D4C: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80226D50: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
    // 0x80226D54: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x80226D58: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80226D5C: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80226D60: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80226D64: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    // 0x80226D68: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x80226D6C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80226D70: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x80226D74: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x80226D78: sra         $a0, $a0, 22
    ctx->r4 = S32(SIGNED(ctx->r4) >> 22);
    // 0x80226D7C: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80226D80: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80226D84: j           L_80226DE8
    // 0x80226D88: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_80226DE8;
    // 0x80226D88: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_80226D8C:
    // 0x80226D8C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80226D90: lhu         $v1, 0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6);
    // 0x80226D94: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x80226D98: lhu         $a1, 0xC($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XC);
    // 0x80226D9C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80226DA0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80226DA4: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x80226DA8: lhu         $v1, 0xE($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XE);
    // 0x80226DAC: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80226DB0: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
    // 0x80226DB4: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x80226DB8: andi        $v0, $a2, 0x7
    ctx->r2 = ctx->r6 & 0X7;
    // 0x80226DBC: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x80226DC0: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    // 0x80226DC4: lh          $a0, 0x6($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X6);
    // 0x80226DC8: srl         $v0, $a2, 2
    ctx->r2 = S32(U32(ctx->r6) >> 2);
    // 0x80226DCC: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80226DD0: sh          $a1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r5;
    // 0x80226DD4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80226DD8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226DDC: bne         $a0, $zero, L_80226DE8
    if (ctx->r4 != 0) {
        // 0x80226DE0: sh          $v1, 0xE($s0)
        MEM_H(0XE, ctx->r16) = ctx->r3;
            goto L_80226DE8;
    }
    // 0x80226DE0: sh          $v1, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r3;
    // 0x80226DE4: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_80226DE8:
    // 0x80226DE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226DEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226DF0: jr          $ra
    // 0x80226DF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226DF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023CCF0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023CCF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023CCF4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023CCF8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8023CCFC: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023CD00: beq         $v1, $v0, L_8023CD80
    if (ctx->r3 == ctx->r2) {
        // 0x8023CD04: slti        $v0, $v1, 0x1F
        ctx->r2 = SIGNED(ctx->r3) < 0X1F ? 1 : 0;
            goto L_8023CD80;
    }
    // 0x8023CD04: slti        $v0, $v1, 0x1F
    ctx->r2 = SIGNED(ctx->r3) < 0X1F ? 1 : 0;
    // 0x8023CD08: beql        $v0, $zero, L_8023CD28
    if (ctx->r2 == 0) {
        // 0x8023CD0C: addiu       $v0, $zero, 0xA0
        ctx->r2 = ADD32(0, 0XA0);
            goto L_8023CD28;
    }
    goto skip_0;
    // 0x8023CD0C: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    skip_0:
    // 0x8023CD10: beq         $v1, $zero, L_8023CD40
    if (ctx->r3 == 0) {
        // 0x8023CD14: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8023CD40;
    }
    // 0x8023CD14: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023CD18: beq         $v1, $v0, L_8023CD54
    if (ctx->r3 == ctx->r2) {
        // 0x8023CD1C: nop
    
            goto L_8023CD54;
    }
    // 0x8023CD1C: nop

    // 0x8023CD20: j           L_8023CE44
    // 0x8023CD24: nop

        goto L_8023CE44;
    // 0x8023CD24: nop

L_8023CD28:
    // 0x8023CD28: beq         $v1, $v0, L_8023CD94
    if (ctx->r3 == ctx->r2) {
        // 0x8023CD2C: addiu       $v0, $zero, 0xD2
        ctx->r2 = ADD32(0, 0XD2);
            goto L_8023CD94;
    }
    // 0x8023CD2C: addiu       $v0, $zero, 0xD2
    ctx->r2 = ADD32(0, 0XD2);
    // 0x8023CD30: beq         $v1, $v0, L_8023CDF4
    if (ctx->r3 == ctx->r2) {
        // 0x8023CD34: nop
    
            goto L_8023CDF4;
    }
    // 0x8023CD34: nop

    // 0x8023CD38: j           L_8023CE44
    // 0x8023CD3C: nop

        goto L_8023CE44;
    // 0x8023CD3C: nop

L_8023CD40:
    // 0x8023CD40: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x8023CD44: lbu         $v0, 0x8($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X8);
    // 0x8023CD48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023CD4C: j           L_8023CD80
    // 0x8023CD50: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
        goto L_8023CD80;
    // 0x8023CD50: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
L_8023CD54:
    // 0x8023CD54: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023CD58: lw          $v0, 0x838($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X838);
    // 0x8023CD5C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CD60: sb          $zero, 0x3282($at)
    MEM_B(0X3282, ctx->r1) = 0;
    // 0x8023CD64: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CD68: sb          $zero, 0x3281($at)
    MEM_B(0X3281, ctx->r1) = 0;
    // 0x8023CD6C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CD70: sb          $zero, 0x3280($at)
    MEM_B(0X3280, ctx->r1) = 0;
    // 0x8023CD74: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CD78: j           L_8023CE44
    // 0x8023CD7C: sw          $v0, 0x3288($at)
    MEM_W(0X3288, ctx->r1) = ctx->r2;
        goto L_8023CE44;
    // 0x8023CD7C: sw          $v0, 0x3288($at)
    MEM_W(0X3288, ctx->r1) = ctx->r2;
L_8023CD80:
    // 0x8023CD80: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x8023CD84: lbu         $v0, 0x8($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X8);
    // 0x8023CD88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023CD8C: j           L_8023CE44
    // 0x8023CD90: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
        goto L_8023CE44;
    // 0x8023CD90: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
L_8023CD94:
    // 0x8023CD94: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023CD98: lw          $v0, 0x830($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X830);
    // 0x8023CD9C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023CDA0: lw          $a0, 0x854($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X854);
    // 0x8023CDA4: addiu       $v1, $zero, 0x83
    ctx->r3 = ADD32(0, 0X83);
    // 0x8023CDA8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023CDAC: sb          $v1, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r3;
    // 0x8023CDB0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CDB4: sb          $zero, 0x3282($at)
    MEM_B(0X3282, ctx->r1) = 0;
    // 0x8023CDB8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CDBC: sb          $zero, 0x3281($at)
    MEM_B(0X3281, ctx->r1) = 0;
    // 0x8023CDC0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CDC4: sb          $zero, 0x3280($at)
    MEM_B(0X3280, ctx->r1) = 0;
    // 0x8023CDC8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CDCC: sb          $zero, 0x3285($at)
    MEM_B(0X3285, ctx->r1) = 0;
    // 0x8023CDD0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CDD4: sb          $zero, 0x3284($at)
    MEM_B(0X3284, ctx->r1) = 0;
    // 0x8023CDD8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CDDC: sb          $zero, 0x3283($at)
    MEM_B(0X3283, ctx->r1) = 0;
    // 0x8023CDE0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CDE4: sw          $v0, 0x3288($at)
    MEM_W(0X3288, ctx->r1) = ctx->r2;
    // 0x8023CDE8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CDEC: j           L_8023CE44
    // 0x8023CDF0: sw          $a0, 0x328C($at)
    MEM_W(0X328C, ctx->r1) = ctx->r4;
        goto L_8023CE44;
    // 0x8023CDF0: sw          $a0, 0x328C($at)
    MEM_W(0X328C, ctx->r1) = ctx->r4;
L_8023CDF4:
    // 0x8023CDF4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023CDF8: lw          $v0, 0x834($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X834);
    // 0x8023CDFC: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023CE00: lw          $v1, 0x858($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X858);
    // 0x8023CE04: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CE08: sb          $zero, 0x3282($at)
    MEM_B(0X3282, ctx->r1) = 0;
    // 0x8023CE0C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CE10: sb          $zero, 0x3281($at)
    MEM_B(0X3281, ctx->r1) = 0;
    // 0x8023CE14: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CE18: sb          $zero, 0x3280($at)
    MEM_B(0X3280, ctx->r1) = 0;
    // 0x8023CE1C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CE20: sb          $zero, 0x3285($at)
    MEM_B(0X3285, ctx->r1) = 0;
    // 0x8023CE24: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CE28: sb          $zero, 0x3284($at)
    MEM_B(0X3284, ctx->r1) = 0;
    // 0x8023CE2C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CE30: sb          $zero, 0x3283($at)
    MEM_B(0X3283, ctx->r1) = 0;
    // 0x8023CE34: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CE38: sw          $v0, 0x3288($at)
    MEM_W(0X3288, ctx->r1) = ctx->r2;
    // 0x8023CE3C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CE40: sw          $v1, 0x328C($at)
    MEM_W(0X328C, ctx->r1) = ctx->r3;
L_8023CE44:
    // 0x8023CE44: jal         0x8023C5C0
    // 0x8023CE48: nop

    func_8023C5C0_ovl25(rdram, ctx);
        goto after_0;
    // 0x8023CE48: nop

    after_0:
    // 0x8023CE4C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023CE50: jr          $ra
    // 0x8023CE54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023CE54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A128_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A128: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023A12C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A130: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A134: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023A138: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023A13C: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8023A140: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8023A144: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8023A148: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8023A14C: beq         $v1, $v0, L_8023A278
    if (ctx->r3 == ctx->r2) {
        // 0x8023A150: slti        $v0, $v1, 0x10
        ctx->r2 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
            goto L_8023A278;
    }
    // 0x8023A150: slti        $v0, $v1, 0x10
    ctx->r2 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x8023A154: beql        $v0, $zero, L_8023A174
    if (ctx->r2 == 0) {
        // 0x8023A158: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_8023A174;
    }
    goto skip_0;
    // 0x8023A158: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    skip_0:
    // 0x8023A15C: beq         $v1, $zero, L_8023A1A8
    if (ctx->r3 == 0) {
        // 0x8023A160: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023A1A8;
    }
    // 0x8023A160: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023A164: beq         $v1, $v0, L_8023A1F8
    if (ctx->r3 == ctx->r2) {
        // 0x8023A168: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8023A1F8;
    }
    // 0x8023A168: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023A16C: j           L_8023A28C
    // 0x8023A170: nop

        goto L_8023A28C;
    // 0x8023A170: nop

L_8023A174:
    // 0x8023A174: beq         $v1, $v0, L_8023A280
    if (ctx->r3 == ctx->r2) {
        // 0x8023A178: slti        $v0, $v1, 0x33
        ctx->r2 = SIGNED(ctx->r3) < 0X33 ? 1 : 0;
            goto L_8023A280;
    }
    // 0x8023A178: slti        $v0, $v1, 0x33
    ctx->r2 = SIGNED(ctx->r3) < 0X33 ? 1 : 0;
    // 0x8023A17C: beq         $v0, $zero, L_8023A194
    if (ctx->r2 == 0) {
        // 0x8023A180: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_8023A194;
    }
    // 0x8023A180: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023A184: beq         $v1, $v0, L_8023A284
    if (ctx->r3 == ctx->r2) {
        // 0x8023A188: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8023A284;
    }
    // 0x8023A188: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8023A18C: j           L_8023A28C
    // 0x8023A190: nop

        goto L_8023A28C;
    // 0x8023A190: nop

L_8023A194:
    // 0x8023A194: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x8023A198: beq         $v1, $v0, L_8023A284
    if (ctx->r3 == ctx->r2) {
        // 0x8023A19C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8023A284;
    }
    // 0x8023A19C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023A1A0: j           L_8023A28C
    // 0x8023A1A4: nop

        goto L_8023A28C;
    // 0x8023A1A4: nop

L_8023A1A8:
    // 0x8023A1A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023A1AC: jal         0x8023A980
    // 0x8023A1B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8023A980_ovl25(rdram, ctx);
        goto after_0;
    // 0x8023A1B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8023A1B4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x8023A1B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A1BC: sb          $zero, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = 0;
    // 0x8023A1C0: jal         0x8023AB14
    // 0x8023A1C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8023AB14_ovl25(rdram, ctx);
        goto after_1;
    // 0x8023A1C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x8023A1C8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023A1CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A1D0: sb          $v0, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = ctx->r2;
    // 0x8023A1D4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8023A1D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A1DC: sb          $v0, 0x445F($at)
    MEM_B(0X445F, ctx->r1) = ctx->r2;
    // 0x8023A1E0: jal         0x8004F418
    // 0x8023A1E4: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    func_8004F418_2A818(rdram, ctx);
        goto after_2;
    // 0x8023A1E4: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    after_2:
    // 0x8023A1E8: jal         0x8004F488
    // 0x8023A1EC: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    func_8004F488_2A888(rdram, ctx);
        goto after_3;
    // 0x8023A1EC: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    after_3:
    // 0x8023A1F0: j           L_8023A28C
    // 0x8023A1F4: nop

        goto L_8023A28C;
    // 0x8023A1F4: nop

L_8023A1F8:
    // 0x8023A1F8: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8023A1FC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023A200: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A204: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8023A208: addiu       $v0, $zero, -0x1A4
    ctx->r2 = ADD32(0, -0X1A4);
    // 0x8023A20C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A210: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x8023A214: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8023A218: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A21C: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x8023A220: addiu       $v0, $zero, -0x12C
    ctx->r2 = ADD32(0, -0X12C);
    // 0x8023A224: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A228: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x8023A22C: lui         $v0, 0xFE5C
    ctx->r2 = S32(0XFE5C << 16);
    // 0x8023A230: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A234: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x8023A238: lui         $v0, 0x14
    ctx->r2 = S32(0X14 << 16);
    // 0x8023A23C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A240: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x8023A244: lui         $v0, 0xFED4
    ctx->r2 = S32(0XFED4 << 16);
    // 0x8023A248: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A24C: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x8023A250: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8023A254: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A258: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x8023A25C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A260: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x8023A264: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A268: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x8023A26C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8023A270: j           L_8023A284
    // 0x8023A274: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
        goto L_8023A284;
    // 0x8023A274: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
L_8023A278:
    // 0x8023A278: j           L_8023A284
    // 0x8023A27C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_8023A284;
    // 0x8023A27C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8023A280:
    // 0x8023A280: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_8023A284:
    // 0x8023A284: jal         0x8023A9E0
    // 0x8023A288: nop

    func_8023A9E0_ovl25(rdram, ctx);
        goto after_4;
    // 0x8023A288: nop

    after_4:
L_8023A28C:
    // 0x8023A28C: jal         0x8023AA40
    // 0x8023A290: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8023AA40_ovl25(rdram, ctx);
        goto after_5;
    // 0x8023A290: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8023A294: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023A298: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023A29C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A2A0: jr          $ra
    // 0x8023A2A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023A2A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80234320_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234320: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234324: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80234328: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023432C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234330: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234334: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234338: lw          $v0, -0x11E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X11E8);
    // 0x8023433C: jalr        $v0
    // 0x80234340: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80234340: nop

    after_0:
    // 0x80234344: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80234348: jr          $ra
    // 0x8023434C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023434C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D440_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D440: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D444: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D448: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D44C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022D450: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022D454: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D458: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022D45C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D460: jal         0x8009A3B4
    // 0x8022D464: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022D464: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022D468: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022D46C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022D470: jal         0x8009A3B4
    // 0x8022D474: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022D474: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022D478: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022D47C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022D480: jal         0x8009A3B4
    // 0x8022D484: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022D484: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022D488: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D48C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022D490: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x8022D494: addiu       $s2, $s2, -0x3A50
    ctx->r18 = ADD32(ctx->r18, -0X3A50);
    // 0x8022D498: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022D49C: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x8022D4A0: beq         $v0, $zero, L_8022D794
    if (ctx->r2 == 0) {
        // 0x8022D4A4: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8022D794;
    }
    // 0x8022D4A4: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022D4A8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022D4AC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D4B0: addu        $at, $at, $v0
    gpr jr_addend_8022D4B8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D4B4: lw          $v0, 0xED0($at)
    ctx->r2 = ADD32(ctx->r1, 0XED0);
    // 0x8022D4B8: jr          $v0
    // 0x8022D4BC: nop

    switch (jr_addend_8022D4B8 >> 2) {
        case 0: goto L_8022D4C0; break;
        case 1: goto L_8022D530; break;
        case 2: goto L_8022D560; break;
        case 3: goto L_8022D5C8; break;
        case 4: goto L_8022D60C; break;
        case 5: goto L_8022D6A8; break;
        case 6: goto L_8022D73C; break;
        default: switch_error(__func__, 0x8022D4B8, 0x80240ED0);
    }
    // 0x8022D4BC: nop

L_8022D4C0:
    // 0x8022D4C0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022D4C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D4C8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D4CC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022D4D0: jal         0x8004D5D4
    // 0x8022D4D4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x8022D4D4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022D4D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D4DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D4E0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8022D4E4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022D4E8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022D4EC: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022D4F0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022D4F4: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022D4F8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022D4FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D500: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D504: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022D508: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022D50C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022D510: jal         0x8022D7E4
    // 0x8022D514: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_8022D7E4_ovl25(rdram, ctx);
        goto after_4;
    // 0x8022D514: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_4:
    // 0x8022D518: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D51C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D520: jal         0x8022D80C
    // 0x8022D524: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8022D80C_ovl25(rdram, ctx);
        goto after_5;
    // 0x8022D524: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_5:
    // 0x8022D528: j           L_8022D72C
    // 0x8022D52C: nop

        goto L_8022D72C;
    // 0x8022D52C: nop

L_8022D530:
    // 0x8022D530: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x8022D534: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x8022D538: bne         $v1, $v0, L_8022D798
    if (ctx->r3 != ctx->r2) {
        // 0x8022D53C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D798;
    }
    // 0x8022D53C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D540: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D544: jal         0x8022D7E4
    // 0x8022D548: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8022D7E4_ovl25(rdram, ctx);
        goto after_6;
    // 0x8022D548: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_6:
    // 0x8022D54C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022D550: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022D554: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x8022D558: j           L_8022D72C
    // 0x8022D55C: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
        goto L_8022D72C;
    // 0x8022D55C: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_8022D560:
    // 0x8022D560: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022D564: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022D568: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8022D56C: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x8022D570: bne         $v1, $v0, L_8022D588
    if (ctx->r3 != ctx->r2) {
        // 0x8022D574: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_8022D588;
    }
    // 0x8022D574: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x8022D578: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D57C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D580: j           L_8022D78C
    // 0x8022D584: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
        goto L_8022D78C;
    // 0x8022D584: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
L_8022D588:
    // 0x8022D588: bne         $v1, $v0, L_8022D5B8
    if (ctx->r3 != ctx->r2) {
        // 0x8022D58C: addiu       $v0, $zero, 0xA0
        ctx->r2 = ADD32(0, 0XA0);
            goto L_8022D5B8;
    }
    // 0x8022D58C: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8022D590: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D594: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D598: jal         0x8022D7E4
    // 0x8022D59C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8022D7E4_ovl25(rdram, ctx);
        goto after_7;
    // 0x8022D59C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8022D5A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D5A4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D5A8: jal         0x8022D80C
    // 0x8022D5AC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8022D80C_ovl25(rdram, ctx);
        goto after_8;
    // 0x8022D5AC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_8:
    // 0x8022D5B0: j           L_8022D72C
    // 0x8022D5B4: nop

        goto L_8022D72C;
    // 0x8022D5B4: nop

L_8022D5B8:
    // 0x8022D5B8: bne         $v1, $v0, L_8022D798
    if (ctx->r3 != ctx->r2) {
        // 0x8022D5BC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D798;
    }
    // 0x8022D5BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D5C0: j           L_8022D72C
    // 0x8022D5C4: nop

        goto L_8022D72C;
    // 0x8022D5C4: nop

L_8022D5C8:
    // 0x8022D5C8: lbu         $v1, 0x9($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X9);
    // 0x8022D5CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022D5D0: beq         $v1, $a0, L_8022D794
    if (ctx->r3 == ctx->r4) {
        // 0x8022D5D4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022D794;
    }
    // 0x8022D5D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D5D8: bnel        $v1, $v0, L_8022D798
    if (ctx->r3 != ctx->r2) {
        // 0x8022D5DC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D798;
    }
    goto skip_0;
    // 0x8022D5DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x8022D5E0: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x8022D5E4: bne         $v0, $a0, L_8022D798
    if (ctx->r2 != ctx->r4) {
        // 0x8022D5E8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D798;
    }
    // 0x8022D5E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D5EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D5F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D5F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D5F8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D5FC: jal         0x8022D80C
    // 0x8022D600: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_8022D80C_ovl25(rdram, ctx);
        goto after_9;
    // 0x8022D600: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_9:
    // 0x8022D604: j           L_8022D72C
    // 0x8022D608: nop

        goto L_8022D72C;
    // 0x8022D608: nop

L_8022D60C:
    // 0x8022D60C: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8022D610: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022D614: beq         $v1, $v0, L_8022D664
    if (ctx->r3 == ctx->r2) {
        // 0x8022D618: slti        $v0, $v1, 0x3D
        ctx->r2 = SIGNED(ctx->r3) < 0X3D ? 1 : 0;
            goto L_8022D664;
    }
    // 0x8022D618: slti        $v0, $v1, 0x3D
    ctx->r2 = SIGNED(ctx->r3) < 0X3D ? 1 : 0;
    // 0x8022D61C: beq         $v0, $zero, L_8022D634
    if (ctx->r2 == 0) {
        // 0x8022D620: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022D634;
    }
    // 0x8022D620: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022D624: beq         $v1, $v0, L_8022D648
    if (ctx->r3 == ctx->r2) {
        // 0x8022D628: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D648;
    }
    // 0x8022D628: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D62C: j           L_8022D794
    // 0x8022D630: nop

        goto L_8022D794;
    // 0x8022D630: nop

L_8022D634:
    // 0x8022D634: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x8022D638: beq         $v1, $v0, L_8022D684
    if (ctx->r3 == ctx->r2) {
        // 0x8022D63C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D684;
    }
    // 0x8022D63C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D640: j           L_8022D794
    // 0x8022D644: nop

        goto L_8022D794;
    // 0x8022D644: nop

L_8022D648:
    // 0x8022D648: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D64C: jal         0x8022D7E4
    // 0x8022D650: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8022D7E4_ovl25(rdram, ctx);
        goto after_10;
    // 0x8022D650: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_10:
    // 0x8022D654: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D658: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D65C: j           L_8022D78C
    // 0x8022D660: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
        goto L_8022D78C;
    // 0x8022D660: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_8022D664:
    // 0x8022D664: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D668: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D66C: jal         0x8022D7E4
    // 0x8022D670: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8022D7E4_ovl25(rdram, ctx);
        goto after_11;
    // 0x8022D670: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_11:
    // 0x8022D674: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D678: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D67C: j           L_8022D78C
    // 0x8022D680: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
        goto L_8022D78C;
    // 0x8022D680: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_8022D684:
    // 0x8022D684: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D688: jal         0x8022D7E4
    // 0x8022D68C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8022D7E4_ovl25(rdram, ctx);
        goto after_12;
    // 0x8022D68C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_12:
    // 0x8022D690: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D694: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D698: jal         0x8022D80C
    // 0x8022D69C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8022D80C_ovl25(rdram, ctx);
        goto after_13;
    // 0x8022D69C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_13:
    // 0x8022D6A0: j           L_8022D724
    // 0x8022D6A4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8022D724;
    // 0x8022D6A4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022D6A8:
    // 0x8022D6A8: lbu         $v1, 0x9($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X9);
    // 0x8022D6AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D6B0: bne         $v1, $v0, L_8022D70C
    if (ctx->r3 != ctx->r2) {
        // 0x8022D6B4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022D70C;
    }
    // 0x8022D6B4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D6B8: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8022D6BC: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x8022D6C0: bne         $v1, $v0, L_8022D6E8
    if (ctx->r3 != ctx->r2) {
        // 0x8022D6C4: addiu       $v0, $zero, 0xC8
        ctx->r2 = ADD32(0, 0XC8);
            goto L_8022D6E8;
    }
    // 0x8022D6C4: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x8022D6C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D6CC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D6D0: jal         0x8022D7E4
    // 0x8022D6D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8022D7E4_ovl25(rdram, ctx);
        goto after_14;
    // 0x8022D6D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_14:
    // 0x8022D6D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D6DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D6E0: j           L_8022D78C
    // 0x8022D6E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
        goto L_8022D78C;
    // 0x8022D6E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_8022D6E8:
    // 0x8022D6E8: bne         $v1, $v0, L_8022D798
    if (ctx->r3 != ctx->r2) {
        // 0x8022D6EC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D798;
    }
    // 0x8022D6EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D6F0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D6F4: jal         0x8022D7E4
    // 0x8022D6F8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8022D7E4_ovl25(rdram, ctx);
        goto after_15;
    // 0x8022D6F8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_15:
    // 0x8022D6FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D700: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D704: j           L_8022D78C
    // 0x8022D708: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_8022D78C;
    // 0x8022D708: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_8022D70C:
    // 0x8022D70C: bne         $v1, $v0, L_8022D798
    if (ctx->r3 != ctx->r2) {
        // 0x8022D710: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D798;
    }
    // 0x8022D710: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D714: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8022D718: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D71C: bne         $v1, $v0, L_8022D798
    if (ctx->r3 != ctx->r2) {
        // 0x8022D720: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022D798;
    }
    // 0x8022D720: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022D724:
    // 0x8022D724: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D728: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
L_8022D72C:
    // 0x8022D72C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022D730: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D734: j           L_8022D794
    // 0x8022D738: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022D794;
    // 0x8022D738: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022D73C:
    // 0x8022D73C: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8022D740: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D744: bne         $v1, $v0, L_8022D76C
    if (ctx->r3 != ctx->r2) {
        // 0x8022D748: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_8022D76C;
    }
    // 0x8022D748: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022D74C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D750: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D754: jal         0x8022D7E4
    // 0x8022D758: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8022D7E4_ovl25(rdram, ctx);
        goto after_16;
    // 0x8022D758: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_16:
    // 0x8022D75C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D760: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D764: j           L_8022D78C
    // 0x8022D768: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
        goto L_8022D78C;
    // 0x8022D768: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
L_8022D76C:
    // 0x8022D76C: bne         $v1, $v0, L_8022D798
    if (ctx->r3 != ctx->r2) {
        // 0x8022D770: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D798;
    }
    // 0x8022D770: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D774: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D778: jal         0x8022D7E4
    // 0x8022D77C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8022D7E4_ovl25(rdram, ctx);
        goto after_17;
    // 0x8022D77C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_17:
    // 0x8022D780: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D784: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D788: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
L_8022D78C:
    // 0x8022D78C: jal         0x8022D80C
    // 0x8022D790: nop

    func_8022D80C_ovl25(rdram, ctx);
        goto after_18;
    // 0x8022D790: nop

    after_18:
L_8022D794:
    // 0x8022D794: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022D798:
    // 0x8022D798: jal         0x8022D834
    // 0x8022D79C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8022D834_ovl25(rdram, ctx);
        goto after_19;
    // 0x8022D79C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_19:
    // 0x8022D7A0: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D7A4: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022D7A8: beq         $a1, $v0, L_8022D7C4
    if (ctx->r5 == ctx->r2) {
        // 0x8022D7AC: nop
    
            goto L_8022D7C4;
    }
    // 0x8022D7AC: nop

    // 0x8022D7B0: lh          $a2, 0x2($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X2);
    // 0x8022D7B4: jal         0x80050294
    // 0x8022D7B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_20;
    // 0x8022D7B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_20:
    // 0x8022D7BC: j           L_8022D7CC
    // 0x8022D7C0: nop

        goto L_8022D7CC;
    // 0x8022D7C0: nop

L_8022D7C4:
    // 0x8022D7C4: jal         0x8005044C
    // 0x8022D7C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_21;
    // 0x8022D7C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_21:
L_8022D7CC:
    // 0x8022D7CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D7D0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D7D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D7D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D7DC: jr          $ra
    // 0x8022D7E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D7E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023A868_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A868: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A86C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023A870: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8023A874: bne         $v0, $zero, L_8023A8A4
    if (ctx->r2 != 0) {
        // 0x8023A878: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_8023A8A4;
    }
    // 0x8023A878: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8023A87C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A880: sb          $zero, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = 0;
    // 0x8023A884: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A888: sb          $zero, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = 0;
    // 0x8023A88C: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x8023A890: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x8023A894: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x8023A898: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x8023A89C: jal         0x8004F418
    // 0x8023A8A0: lw          $a0, 0x24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X24);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8023A8A0: lw          $a0, 0x24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X24);
    after_0:
L_8023A8A4:
    // 0x8023A8A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023A8A8: jr          $ra
    // 0x8023A8AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A8AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F04C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F04C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F050: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F054: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F058: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F05C: lh          $v0, 0x4E2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4E2);
    // 0x8022F060: bne         $v0, $zero, L_8022F07C
    if (ctx->r2 != 0) {
        // 0x8022F064: addiu       $v1, $zero, 0x7
        ctx->r3 = ADD32(0, 0X7);
            goto L_8022F07C;
    }
    // 0x8022F064: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x8022F068: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F06C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022F070: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F074: j           L_8022F0BC
    // 0x8022F078: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022F0BC;
    // 0x8022F078: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022F07C:
    // 0x8022F07C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022F080: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022F084: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8022F088: jal         0x8004DA90
    // 0x8022F08C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022F08C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022F090: lh          $v0, 0x4E2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4E2);
    // 0x8022F094: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8022F098: bne         $v0, $zero, L_8022F0B0
    if (ctx->r2 != 0) {
        // 0x8022F09C: nop
    
            goto L_8022F0B0;
    }
    // 0x8022F09C: nop

    // 0x8022F0A0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F0A4: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022F0A8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022F0AC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022F0B0:
    // 0x8022F0B0: lhu         $v0, 0x4E2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4E2);
    // 0x8022F0B4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F0B8: sh          $v0, 0x4E2($s0)
    MEM_H(0X4E2, ctx->r16) = ctx->r2;
L_8022F0BC:
    // 0x8022F0BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F0C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F0C4: jr          $ra
    // 0x8022F0C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F0C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235CE4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235CE4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80235CE8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80235CEC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80235CF0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80235CF4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80235CF8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80235CFC: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x80235D00: lbu         $a0, 0x6($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X6);
    // 0x80235D04: lbu         $a1, 0x3($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X3);
    // 0x80235D08: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235D0C: addiu       $v0, $v0, -0x10C0
    ctx->r2 = ADD32(ctx->r2, -0X10C0);
    // 0x80235D10: sw          $zero, 0xC8($s2)
    MEM_W(0XC8, ctx->r18) = 0;
    // 0x80235D14: sw          $zero, 0xCC($s2)
    MEM_W(0XCC, ctx->r18) = 0;
    // 0x80235D18: sw          $v0, 0x78($s2)
    MEM_W(0X78, ctx->r18) = ctx->r2;
    // 0x80235D1C: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x80235D20: ori         $a0, $a0, 0x20
    ctx->r4 = ctx->r4 | 0X20;
    // 0x80235D24: andi        $a1, $a1, 0x40
    ctx->r5 = ctx->r5 & 0X40;
    // 0x80235D28: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
    // 0x80235D2C: beq         $a1, $zero, L_80235D40
    if (ctx->r5 == 0) {
        // 0x80235D30: sb          $a0, 0x6($s2)
        MEM_B(0X6, ctx->r18) = ctx->r4;
            goto L_80235D40;
    }
    // 0x80235D30: sb          $a0, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r4;
    // 0x80235D34: lhu         $v0, 0x66($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X66);
    // 0x80235D38: j           L_80235D58
    // 0x80235D3C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
        goto L_80235D58;
    // 0x80235D3C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
L_80235D40:
    // 0x80235D40: lb          $a0, 0xD($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XD);
    // 0x80235D44: jal         0x800530E8
    // 0x80235D48: nop

    func_800530E8_2E4E8(rdram, ctx);
        goto after_0;
    // 0x80235D48: nop

    after_0:
    // 0x80235D4C: jal         0x80034B34
    // 0x80235D50: nop

    func_80034B34_FF34(rdram, ctx);
        goto after_1;
    // 0x80235D50: nop

    after_1:
    // 0x80235D54: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
L_80235D58:
    // 0x80235D58: lhu         $v0, 0x64($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X64);
    // 0x80235D5C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    // 0x80235D60: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80235D64: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80235D68: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x80235D6C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80235D70: beql        $v0, $zero, L_80235DAC
    if (ctx->r2 == 0) {
        // 0x80235D74: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80235DAC;
    }
    goto skip_0;
    // 0x80235D74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x80235D78: jal         0x800A3450
    // 0x80235D7C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80235D7C: nop

    after_2:
    // 0x80235D80: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80235D84: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x80235D88: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80235D8C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80235D90: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235D94: jal         0x800A3450
    // 0x80235D98: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80235D98: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x80235D9C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80235DA0: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x80235DA4: j           L_80235E68
    // 0x80235DA8: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
        goto L_80235E68;
    // 0x80235DA8: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
L_80235DAC:
    // 0x80235DAC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80235DB0: lb          $v1, 0x4EB8($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X4EB8);
    // 0x80235DB4: beq         $v1, $v0, L_80235E04
    if (ctx->r3 == ctx->r2) {
        // 0x80235DB8: nop
    
            goto L_80235E04;
    }
    // 0x80235DB8: nop

    // 0x80235DBC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80235DC0: beq         $v0, $zero, L_80235E38
    if (ctx->r2 == 0) {
        // 0x80235DC4: nop
    
            goto L_80235E38;
    }
    // 0x80235DC4: nop

    // 0x80235DC8: bne         $v1, $zero, L_80235E38
    if (ctx->r3 != 0) {
        // 0x80235DCC: nop
    
            goto L_80235E38;
    }
    // 0x80235DCC: nop

    // 0x80235DD0: jal         0x800A3450
    // 0x80235DD4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80235DD4: nop

    after_4:
    // 0x80235DD8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80235DDC: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x80235DE0: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x80235DE4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80235DE8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235DEC: jal         0x800A3450
    // 0x80235DF0: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80235DF0: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_5:
    // 0x80235DF4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80235DF8: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x80235DFC: j           L_80235E68
    // 0x80235E00: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
        goto L_80235E68;
    // 0x80235E00: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
L_80235E04:
    // 0x80235E04: jal         0x800A3450
    // 0x80235E08: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80235E08: nop

    after_6:
    // 0x80235E0C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80235E10: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x80235E14: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80235E18: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80235E1C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235E20: jal         0x800A3450
    // 0x80235E24: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_7;
    // 0x80235E24: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_7:
    // 0x80235E28: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80235E2C: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x80235E30: j           L_80235E68
    // 0x80235E34: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
        goto L_80235E68;
    // 0x80235E34: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
L_80235E38:
    // 0x80235E38: jal         0x800A3450
    // 0x80235E3C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x80235E3C: nop

    after_8:
    // 0x80235E40: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80235E44: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x80235E48: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x80235E4C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80235E50: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235E54: jal         0x800A3450
    // 0x80235E58: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_9;
    // 0x80235E58: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_9:
    // 0x80235E5C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80235E60: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x80235E64: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
L_80235E68:
    // 0x80235E68: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80235E6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235E70: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x80235E74: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80235E78: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    // 0x80235E7C: jal         0x80031600
    // 0x80235E80: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_10;
    // 0x80235E80: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
    // 0x80235E84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235E88: addiu       $s1, $sp, 0x18
    ctx->r17 = ADD32(ctx->r29, 0X18);
    // 0x80235E8C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235E90: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80235E94: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80235E98: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80235E9C: jal         0x80031DA8
    // 0x80235EA0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_11;
    // 0x80235EA0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_11:
    // 0x80235EA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235EA8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80235EAC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x80235EB0: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x80235EB4: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x80235EB8: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x80235EBC: jal         0x800308E8
    // 0x80235EC0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_12;
    // 0x80235EC0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_12:
    // 0x80235EC4: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x80235EC8: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80235ECC: bne         $v0, $zero, L_80235F24
    if (ctx->r2 != 0) {
        // 0x80235ED0: nop
    
            goto L_80235F24;
    }
    // 0x80235ED0: nop

    // 0x80235ED4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80235ED8: lb          $v0, 0x4EB7($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4EB7);
    // 0x80235EDC: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80235EE0: bne         $v0, $zero, L_80235F24
    if (ctx->r2 != 0) {
        // 0x80235EE4: nop
    
            goto L_80235F24;
    }
    // 0x80235EE4: nop

    // 0x80235EE8: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80235EEC: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x80235EF0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80235EF4: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80235EF8: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x80235EFC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80235F00: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x80235F04: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80235F08: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80235F0C: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    // 0x80235F10: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80235F14: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x80235F18: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80235F1C: j           L_80235F74
    // 0x80235F20: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
        goto L_80235F74;
    // 0x80235F20: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
L_80235F24:
    // 0x80235F24: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80235F28: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80235F2C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235F30: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80235F34: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235F38: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x80235F3C: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x80235F40: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80235F44: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80235F48: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235F4C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80235F50: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235F54: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x80235F58: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    // 0x80235F5C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80235F60: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80235F64: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235F68: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80235F6C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235F70: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
L_80235F74:
    // 0x80235F74: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
    // 0x80235F78: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x80235F7C: sh          $zero, 0x4C($s2)
    MEM_H(0X4C, ctx->r18) = 0;
    // 0x80235F80: sh          $zero, 0x4E($s2)
    MEM_H(0X4E, ctx->r18) = 0;
    // 0x80235F84: sh          $zero, 0x50($s2)
    MEM_H(0X50, ctx->r18) = 0;
    // 0x80235F88: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80235F8C: beq         $v0, $zero, L_80235FE8
    if (ctx->r2 == 0) {
        // 0x80235F90: sh          $zero, 0x7C($s2)
        MEM_H(0X7C, ctx->r18) = 0;
            goto L_80235FE8;
    }
    // 0x80235F90: sh          $zero, 0x7C($s2)
    MEM_H(0X7C, ctx->r18) = 0;
    // 0x80235F94: lh          $v1, 0x44($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X44);
    // 0x80235F98: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x80235F9C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80235FA0: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x80235FA4: lh          $a0, 0x46($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X46);
    // 0x80235FA8: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80235FAC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235FB0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x80235FB4: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80235FB8: sw          $v1, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r3;
    // 0x80235FBC: lw          $v1, 0x20($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X20);
    // 0x80235FC0: lh          $a0, 0x48($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X48);
    // 0x80235FC4: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80235FC8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235FCC: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x80235FD0: sw          $v1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r3;
    // 0x80235FD4: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x80235FD8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80235FDC: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80235FE0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235FE4: sw          $v1, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r3;
L_80235FE8:
    // 0x80235FE8: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x80235FEC: lhu         $v0, 0x1C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1C);
    // 0x80235FF0: lhu         $v1, 0x20($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X20);
    // 0x80235FF4: lhu         $a3, 0x24($s2)
    ctx->r7 = MEM_HU(ctx->r18, 0X24);
    // 0x80235FF8: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x80235FFC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80236000: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x80236004: sh          $v0, 0xAC($s2)
    MEM_H(0XAC, ctx->r18) = ctx->r2;
    // 0x80236008: sh          $v1, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r3;
    // 0x8023600C: sh          $v1, 0xAE($s2)
    MEM_H(0XAE, ctx->r18) = ctx->r3;
    // 0x80236010: sh          $a3, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r7;
    // 0x80236014: jal         0x8009A3B4
    // 0x80236018: sh          $a3, 0xB0($s2)
    MEM_H(0XB0, ctx->r18) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x80236018: sh          $a3, 0xB0($s2)
    MEM_H(0XB0, ctx->r18) = ctx->r7;
    after_13:
    // 0x8023601C: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x80236020: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x80236024: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80236028: jal         0x8009A3B4
    // 0x8023602C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x8023602C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_14:
    // 0x80236030: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x80236034: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80236038: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023603C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80236040: sw          $v0, 0xB4($s2)
    MEM_W(0XB4, ctx->r18) = ctx->r2;
    // 0x80236044: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x80236048: jal         0x8004D5D4
    // 0x8023604C: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_15;
    // 0x8023604C: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    after_15:
    // 0x80236050: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80236054: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80236058: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8023605C: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x80236060: jal         0x800710B8
    // 0x80236064: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    func_800710B8_4C4B8(rdram, ctx);
        goto after_16;
    // 0x80236064: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    after_16:
    // 0x80236068: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x8023606C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80236070: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80236074: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x80236078: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023607C: jal         0x80236324
    // 0x80236080: sb          $v1, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r3;
    func_80236324_ovl25(rdram, ctx);
        goto after_17;
    // 0x80236080: sb          $v1, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r3;
    after_17:
    // 0x80236084: jal         0x802361F0
    // 0x80236088: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_802361F0_ovl25(rdram, ctx);
        goto after_18;
    // 0x80236088: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_18:
    // 0x8023608C: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    // 0x80236090: jal         0x8002A33C
    // 0x80236094: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_19;
    // 0x80236094: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_19:
    // 0x80236098: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8023609C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802360A0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802360A4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802360A8: jr          $ra
    // 0x802360AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802360AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
