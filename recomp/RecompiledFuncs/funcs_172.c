#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8024A200_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024A200: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024A204: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024A208: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8024A20C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024A210: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024A214: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024A218: lw          $v0, 0x5200($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5200);
    // 0x8024A21C: jalr        $v0
    // 0x8024A220: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024A220: nop

    after_0:
    // 0x8024A224: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024A228: jr          $ra
    // 0x8024A22C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024A22C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FEA8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FEA8: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8022FEAC: xori        $v0, $v0, 0x11
    ctx->r2 = ctx->r2 ^ 0X11;
    // 0x8022FEB0: jr          $ra
    // 0x8022FEB4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    TRACE_RETURN()
    return;
    // 0x8022FEB4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_8024511C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024511C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80245120: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80245124: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80245128: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8024512C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80245130: lh          $a0, 0x44($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X44);
    // 0x80245134: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80245138: lh          $a1, 0x48($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X48);
    // 0x8024513C: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x80245140: jal         0x80032664
    // 0x80245144: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80032664_DA64(rdram, ctx);
        goto after_0;
    // 0x80245144: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x80245148: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8024514C: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x80245150: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80245154: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80245158: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8024515C: jal         0x80031600
    // 0x80245160: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    func_80031600_CA00(rdram, ctx);
        goto after_1;
    // 0x80245160: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    after_1:
    // 0x80245164: lh          $v0, 0xB2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XB2);
    // 0x80245168: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8024516C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80245170: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80245174: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80245178: jal         0x80031DA8
    // 0x8024517C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x8024517C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x80245180: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80245184: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80245188: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8024518C: jr          $ra
    // 0x80245190: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80245190: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80228E18_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228E18: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228E1C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80228E20: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80228E24: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80228E28: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80228E2C: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x80228E30: addiu       $t0, $t0, 0x49B0
    ctx->r8 = ADD32(ctx->r8, 0X49B0);
    // 0x80228E34: beq         $v1, $zero, L_80228E4C
    if (ctx->r3 == 0) {
        // 0x80228E38: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80228E4C;
    }
    // 0x80228E38: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80228E3C: beq         $v1, $v0, L_80228FC0
    if (ctx->r3 == ctx->r2) {
        // 0x80228E40: nop
    
            goto L_80228FC0;
    }
    // 0x80228E40: nop

    // 0x80228E44: j           L_80228FE8
    // 0x80228E48: nop

        goto L_80228FE8;
    // 0x80228E48: nop

L_80228E4C:
    // 0x80228E4C: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80228E50: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80228E54: addiu       $a0, $zero, -0xC1
    ctx->r4 = ADD32(0, -0XC1);
    // 0x80228E58: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80228E5C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80228E60: lbu         $a1, 0x0($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X0);
    // 0x80228E64: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80228E68: lbu         $a2, 0x4A6D($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X4A6D);
    // 0x80228E6C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80228E70: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228E74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228E78: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80228E7C: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x80228E80: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228E84: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80228E88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228E8C: addiu       $v1, $zero, 0x898
    ctx->r3 = ADD32(0, 0X898);
    // 0x80228E90: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228E94: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80228E98: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80228E9C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228EA0: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80228EA4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228EA8: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80228EAC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228EB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228EB4: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80228EB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228EBC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228EC0: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x80228EC4: lui         $v0, 0xFF3F
    ctx->r2 = S32(0XFF3F << 16);
    // 0x80228EC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228ECC: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x80228ED0: lui         $v0, 0x898
    ctx->r2 = S32(0X898 << 16);
    // 0x80228ED4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228ED8: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80228EDC: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x80228EE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228EE4: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80228EE8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228EEC: sh          $a0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r4;
    // 0x80228EF0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228EF4: sh          $v1, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r3;
    // 0x80228EF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228EFC: sh          $a3, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r7;
    // 0x80228F00: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228F04: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80228F08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228F0C: sh          $zero, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = 0;
    // 0x80228F10: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228F14: sh          $a0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r4;
    // 0x80228F18: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228F1C: sh          $v1, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r3;
    // 0x80228F20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228F24: sw          $zero, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = 0;
    // 0x80228F28: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228F2C: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x80228F30: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228F34: sh          $a3, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r7;
    // 0x80228F38: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228F3C: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x80228F40: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228F44: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80228F48: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228F4C: sb          $zero, 0x4A26($at)
    MEM_B(0X4A26, ctx->r1) = 0;
    // 0x80228F50: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228F54: sb          $zero, 0x4A24($at)
    MEM_B(0X4A24, ctx->r1) = 0;
    // 0x80228F58: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228F5C: sb          $zero, 0x63CD($at)
    MEM_B(0X63CD, ctx->r1) = 0;
    // 0x80228F60: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228F64: sb          $zero, 0x63CC($at)
    MEM_B(0X63CC, ctx->r1) = 0;
    // 0x80228F68: ori         $a1, $a1, 0x3
    ctx->r5 = ctx->r5 | 0X3;
    // 0x80228F6C: ori         $a2, $a2, 0x10
    ctx->r6 = ctx->r6 | 0X10;
    // 0x80228F70: sb          $a1, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r5;
    // 0x80228F74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228F78: sb          $a2, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r6;
    // 0x80228F7C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228F80: sb          $zero, 0x63CB($at)
    MEM_B(0X63CB, ctx->r1) = 0;
    // 0x80228F84: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80228F88: lw          $v0, 0x1998($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1998);
    // 0x80228F8C: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80228F90: lw          $v1, 0x1954($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1954);
    // 0x80228F94: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228F98: sb          $zero, 0x63CA($at)
    MEM_B(0X63CA, ctx->r1) = 0;
    // 0x80228F9C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228FA0: sb          $zero, 0x63C9($at)
    MEM_B(0X63C9, ctx->r1) = 0;
    // 0x80228FA4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228FA8: sb          $zero, 0x63C8($at)
    MEM_B(0X63C8, ctx->r1) = 0;
    // 0x80228FAC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228FB0: sw          $v0, 0x63D4($at)
    MEM_W(0X63D4, ctx->r1) = ctx->r2;
    // 0x80228FB4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228FB8: j           L_80228FE8
    // 0x80228FBC: sw          $v1, 0x63D0($at)
    MEM_W(0X63D0, ctx->r1) = ctx->r3;
        goto L_80228FE8;
    // 0x80228FBC: sw          $v1, 0x63D0($at)
    MEM_W(0X63D0, ctx->r1) = ctx->r3;
L_80228FC0:
    // 0x80228FC0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80228FC4: lw          $v0, 0x1960($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1960);
    // 0x80228FC8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228FCC: sb          $zero, 0x63CA($at)
    MEM_B(0X63CA, ctx->r1) = 0;
    // 0x80228FD0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228FD4: sb          $zero, 0x63C9($at)
    MEM_B(0X63C9, ctx->r1) = 0;
    // 0x80228FD8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228FDC: sb          $zero, 0x63C8($at)
    MEM_B(0X63C8, ctx->r1) = 0;
    // 0x80228FE0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228FE4: sw          $v0, 0x63D0($at)
    MEM_W(0X63D0, ctx->r1) = ctx->r2;
L_80228FE8:
    // 0x80228FE8: jal         0x80228310
    // 0x80228FEC: nop

    func_80228310_ovl28(rdram, ctx);
        goto after_0;
    // 0x80228FEC: nop

    after_0:
    // 0x80228FF0: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x80228FF4: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x80228FF8: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80228FFC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229000: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    // 0x80229004: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x80229008: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022900C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229010: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80229014: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80229018: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022901C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x80229020: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x80229024: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80229028: sb          $v1, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r3;
    // 0x8022902C: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x80229030: lw          $s1, -0x5858($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X5858);
    // 0x80229034: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
    // 0x80229038: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x8022903C: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x80229040: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x80229044: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80229048: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x8022904C: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x80229050: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80229054: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x80229058: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8022905C: sw          $s1, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r17;
    // 0x80229060: jal         0x8003055C
    // 0x80229064: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003055C_B95C(rdram, ctx);
        goto after_1;
    // 0x80229064: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80229068: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022906C: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80229070: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80229074: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x80229078: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022907C: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80229080: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80229084: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x80229088: jal         0x8002FD30
    // 0x8022908C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_2;
    // 0x8022908C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_2:
    // 0x80229090: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80229094: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80229098: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022909C: jal         0x8002FD30
    // 0x802290A0: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_3;
    // 0x802290A0: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_3:
    // 0x802290A4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802290A8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802290AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802290B0: jr          $ra
    // 0x802290B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802290B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80245768_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80245768: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8024576C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80245770: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80245774: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80245778: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8024577C: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x80245780: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80245784: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80245788: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8024578C: jal         0x8009A3B4
    // 0x80245790: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80245790: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_0:
    // 0x80245794: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80245798: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8024579C: jal         0x8009A3B4
    // 0x802457A0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802457A0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802457A4: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802457A8: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802457AC: jal         0x8009A3B4
    // 0x802457B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802457B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802457B4: jal         0x800A3450
    // 0x802457B8: addiu       $s1, $s0, 0xC0
    ctx->r17 = ADD32(ctx->r16, 0XC0);
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x802457B8: addiu       $s1, $s0, 0xC0
    ctx->r17 = ADD32(ctx->r16, 0XC0);
    after_3:
    // 0x802457BC: lhu         $v1, 0xC0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XC0);
    // 0x802457C0: sh          $v0, 0xC2($s0)
    MEM_H(0XC2, ctx->r16) = ctx->r2;
    // 0x802457C4: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x802457C8: beq         $v0, $zero, L_802458E4
    if (ctx->r2 == 0) {
        // 0x802457CC: andi        $v0, $v1, 0x10
        ctx->r2 = ctx->r3 & 0X10;
            goto L_802458E4;
    }
    // 0x802457CC: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x802457D0: beq         $v0, $zero, L_8024589C
    if (ctx->r2 == 0) {
        // 0x802457D4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8024589C;
    }
    // 0x802457D4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802457D8: lb          $a1, 0xD($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XD);
    // 0x802457DC: lw          $v0, 0xF4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF4);
    // 0x802457E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802457E4: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x802457E8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802457EC: jal         0x8009A3B4
    // 0x802457F0: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802457F0: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    after_4:
    // 0x802457F4: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x802457F8: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x802457FC: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80245800: lw          $a1, 0xF4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XF4);
    // 0x80245804: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80245808: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8024580C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80245810: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80245814: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80245818: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8024581C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80245820: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80245824: bne         $v0, $zero, L_8024583C
    if (ctx->r2 != 0) {
        // 0x80245828: nop
    
            goto L_8024583C;
    }
    // 0x80245828: nop

    // 0x8024582C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80245830: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80245834: j           L_802458E4
    // 0x80245838: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_802458E4;
    // 0x80245838: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8024583C:
    // 0x8024583C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80245840: lw          $v1, 0xF4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XF4);
    // 0x80245844: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80245848: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8024584C: lhu         $a1, 0x186($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X186);
    // 0x80245850: lbu         $v1, 0xF($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XF);
    // 0x80245854: andi        $v0, $a1, 0x1F
    ctx->r2 = ctx->r5 & 0X1F;
    // 0x80245858: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
    // 0x8024585C: andi        $v0, $a1, 0x3E0
    ctx->r2 = ctx->r5 & 0X3E0;
    // 0x80245860: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80245864: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80245868: andi        $v0, $a1, 0x7C00
    ctx->r2 = ctx->r5 & 0X7C00;
    // 0x8024586C: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80245870: andi        $v1, $v1, 0x2
    ctx->r3 = ctx->r3 & 0X2;
    // 0x80245874: beq         $v1, $zero, L_80245894
    if (ctx->r3 == 0) {
        // 0x80245878: or          $a0, $a0, $v0
        ctx->r4 = ctx->r4 | ctx->r2;
            goto L_80245894;
    }
    // 0x80245878: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8024587C: andi        $v0, $a1, 0x8000
    ctx->r2 = ctx->r5 & 0X8000;
    // 0x80245880: beq         $v0, $zero, L_80245894
    if (ctx->r2 == 0) {
        // 0x80245884: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_80245894;
    }
    // 0x80245884: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80245888: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x8024588C: j           L_802458E4
    // 0x80245890: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
        goto L_802458E4;
    // 0x80245890: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
L_80245894:
    // 0x80245894: j           L_802458E4
    // 0x80245898: sw          $a0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r4;
        goto L_802458E4;
    // 0x80245898: sw          $a0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r4;
L_8024589C:
    // 0x8024589C: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x802458A0: lw          $v1, 0xF4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XF4);
    // 0x802458A4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802458A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802458AC: lhu         $a0, 0x180($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X180);
    // 0x802458B0: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x802458B4: lw          $v1, 0xF4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XF4);
    // 0x802458B8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802458BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802458C0: sh          $a0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r4;
    // 0x802458C4: lhu         $v0, 0x184($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X184);
    // 0x802458C8: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x802458CC: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x802458D0: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x802458D4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802458D8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802458DC: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802458E0: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
L_802458E4:
    // 0x802458E4: lw          $v0, 0x34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X34);
    // 0x802458E8: lbu         $v0, 0xF($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XF);
    // 0x802458EC: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x802458F0: beq         $v0, $zero, L_80245944
    if (ctx->r2 == 0) {
        // 0x802458F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80245944;
    }
    // 0x802458F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802458F8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802458FC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80245900: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80245904: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
    // 0x80245908: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8024590C: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80245910: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    // 0x80245914: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80245918: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024591C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80245920: lw          $v0, 0x34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X34);
    // 0x80245924: lh          $v0, 0x1B2($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X1B2);
    // 0x80245928: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8024592C: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    // 0x80245930: bgez        $v0, L_80245940
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80245934: addiu       $v0, $v1, -0x400
        ctx->r2 = ADD32(ctx->r3, -0X400);
            goto L_80245940;
    }
    // 0x80245934: addiu       $v0, $v1, -0x400
    ctx->r2 = ADD32(ctx->r3, -0X400);
    // 0x80245938: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8024593C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
L_80245940:
    // 0x80245940: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
L_80245944:
    // 0x80245944: lw          $v0, 0x34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X34);
    // 0x80245948: lbu         $v0, 0xF($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XF);
    // 0x8024594C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80245950: beq         $v0, $zero, L_8024596C
    if (ctx->r2 == 0) {
        // 0x80245954: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024596C;
    }
    // 0x80245954: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80245958: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8024595C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80245960: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80245964: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
    // 0x80245968: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8024596C:
    // 0x8024596C: lw          $v0, 0x34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X34);
    // 0x80245970: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x80245974: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80245978: beq         $v0, $zero, L_802459A4
    if (ctx->r2 == 0) {
        // 0x8024597C: nop
    
            goto L_802459A4;
    }
    // 0x8024597C: nop

    // 0x80245980: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80245984: slti        $v0, $v0, 0x7
    ctx->r2 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x80245988: beq         $v0, $zero, L_802459A4
    if (ctx->r2 == 0) {
        // 0x8024598C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802459A4;
    }
    // 0x8024598C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80245990: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80245994: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80245998: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8024599C: andi        $v0, $v0, 0xFFAF
    ctx->r2 = ctx->r2 & 0XFFAF;
    // 0x802459A0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_802459A4:
    // 0x802459A4: lw          $v0, 0x34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X34);
    // 0x802459A8: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x802459AC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802459B0: beq         $v0, $zero, L_802459DC
    if (ctx->r2 == 0) {
        // 0x802459B4: nop
    
            goto L_802459DC;
    }
    // 0x802459B4: nop

    // 0x802459B8: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x802459BC: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x802459C0: bne         $v0, $zero, L_802459DC
    if (ctx->r2 != 0) {
        // 0x802459C4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802459DC;
    }
    // 0x802459C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802459C8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802459CC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802459D0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802459D4: andi        $v0, $v0, 0xFFAF
    ctx->r2 = ctx->r2 & 0XFFAF;
    // 0x802459D8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_802459DC:
    // 0x802459DC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802459E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802459E4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802459E8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802459EC: lw          $v0, 0x4C8C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4C8C);
    // 0x802459F0: jalr        $v0
    // 0x802459F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x802459F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802459F8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802459FC: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80245A00: beq         $v0, $zero, L_80245A24
    if (ctx->r2 == 0) {
        // 0x80245A04: addiu       $a0, $s0, 0x8C
        ctx->r4 = ADD32(ctx->r16, 0X8C);
            goto L_80245A24;
    }
    // 0x80245A04: addiu       $a0, $s0, 0x8C
    ctx->r4 = ADD32(ctx->r16, 0X8C);
    // 0x80245A08: lb          $a1, 0xD($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XD);
    // 0x80245A0C: lw          $v0, 0x34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X34);
    // 0x80245A10: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x80245A14: sll         $a1, $a1, 5
    ctx->r5 = S32(ctx->r5 << 5);
    // 0x80245A18: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80245A1C: jal         0x8009A3B4
    // 0x80245A20: addiu       $a1, $a1, 0x240
    ctx->r5 = ADD32(ctx->r5, 0X240);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80245A20: addiu       $a1, $a1, 0x240
    ctx->r5 = ADD32(ctx->r5, 0X240);
    after_6:
L_80245A24:
    // 0x80245A24: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80245A28: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80245A2C: jal         0x8009A3B4
    // 0x80245A30: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80245A30: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x80245A34: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80245A38: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80245A3C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80245A40: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x80245A44: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80245A48: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80245A4C: beq         $v0, $zero, L_80245A68
    if (ctx->r2 == 0) {
        // 0x80245A50: nop
    
            goto L_80245A68;
    }
    // 0x80245A50: nop

    // 0x80245A54: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80245A58: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80245A5C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80245A60: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80245A64: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80245A68:
    // 0x80245A68: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x80245A6C: beq         $v0, $zero, L_80245A7C
    if (ctx->r2 == 0) {
        // 0x80245A70: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80245A7C;
    }
    // 0x80245A70: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80245A74: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80245A78: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_80245A7C:
    // 0x80245A7C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80245A80: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80245A84: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80245A88: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80245A8C: jr          $ra
    // 0x80245A90: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80245A90: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80227E14_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227E14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227E18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227E1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227E20: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227E24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227E28: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80227E2C: bne         $v1, $zero, L_80227E8C
    if (ctx->r3 != 0) {
        // 0x80227E30: slti        $v0, $v1, 0x20
        ctx->r2 = SIGNED(ctx->r3) < 0X20 ? 1 : 0;
            goto L_80227E8C;
    }
    // 0x80227E30: slti        $v0, $v1, 0x20
    ctx->r2 = SIGNED(ctx->r3) < 0X20 ? 1 : 0;
    // 0x80227E34: lw          $a0, 0xA0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA0);
    // 0x80227E38: jal         0x8004F5C4
    // 0x80227E3C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80227E3C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    after_0:
    // 0x80227E40: jal         0x8004F144
    // 0x80227E44: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x80227E44: nop

    after_1:
    // 0x80227E48: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80227E4C: beq         $a0, $zero, L_80227E70
    if (ctx->r4 == 0) {
        // 0x80227E50: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80227E70;
    }
    // 0x80227E50: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80227E54: lbu         $v1, 0x6($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X6);
    // 0x80227E58: sb          $s1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r17;
    // 0x80227E5C: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80227E60: sb          $s1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r17;
    // 0x80227E64: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x80227E68: sb          $v1, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r3;
    // 0x80227E6C: sw          $a0, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->r4;
L_80227E70:
    // 0x80227E70: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x80227E74: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80227E78: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x80227E7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227E80: sb          $zero, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = 0;
    // 0x80227E84: j           L_80227EC0
    // 0x80227E88: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
        goto L_80227EC0;
    // 0x80227E88: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_80227E8C:
    // 0x80227E8C: bne         $v0, $zero, L_80227EC0
    if (ctx->r2 != 0) {
        // 0x80227E90: sll         $a3, $v1, 3
        ctx->r7 = S32(ctx->r3 << 3);
            goto L_80227EC0;
    }
    // 0x80227E90: sll         $a3, $v1, 3
    ctx->r7 = S32(ctx->r3 << 3);
    // 0x80227E94: slti        $v0, $v1, 0x40
    ctx->r2 = SIGNED(ctx->r3) < 0X40 ? 1 : 0;
    // 0x80227E98: bne         $v0, $zero, L_80227EC0
    if (ctx->r2 != 0) {
        // 0x80227E9C: addiu       $a3, $zero, 0xFF
        ctx->r7 = ADD32(0, 0XFF);
            goto L_80227EC0;
    }
    // 0x80227E9C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x80227EA0: slti        $v0, $v1, 0x60
    ctx->r2 = SIGNED(ctx->r3) < 0X60 ? 1 : 0;
    // 0x80227EA4: beq         $v0, $zero, L_80227EBC
    if (ctx->r2 == 0) {
        // 0x80227EA8: addiu       $v0, $v1, -0x40
        ctx->r2 = ADD32(ctx->r3, -0X40);
            goto L_80227EBC;
    }
    // 0x80227EA8: addiu       $v0, $v1, -0x40
    ctx->r2 = ADD32(ctx->r3, -0X40);
    // 0x80227EAC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80227EB0: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80227EB4: j           L_80227EC0
    // 0x80227EB8: subu        $a3, $v1, $v0
    ctx->r7 = SUB32(ctx->r3, ctx->r2);
        goto L_80227EC0;
    // 0x80227EB8: subu        $a3, $v1, $v0
    ctx->r7 = SUB32(ctx->r3, ctx->r2);
L_80227EBC:
    // 0x80227EBC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_80227EC0:
    // 0x80227EC0: addiu       $a0, $zero, 0xAA
    ctx->r4 = ADD32(0, 0XAA);
    // 0x80227EC4: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80227EC8: addiu       $a1, $zero, 0x6C
    ctx->r5 = ADD32(0, 0X6C);
    // 0x80227ECC: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x80227ED0: jal         0x80226DB0
    // 0x80227ED4: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    func_80226DB0_ovl28(rdram, ctx);
        goto after_2;
    // 0x80227ED4: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    after_2:
    // 0x80227ED8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227EDC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227EE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227EE4: jr          $ra
    // 0x80227EE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227EE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023624C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023624C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236250: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236254: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80236258: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023625C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80236260: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236264: lw          $v0, 0x3C98($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3C98);
    // 0x80236268: jalr        $v0
    // 0x8023626C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023626C: nop

    after_0:
    // 0x80236270: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236274: jr          $ra
    // 0x80236278: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236278: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239200_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239200: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80239204: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239208: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023920C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80239210: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x80239214: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80239218: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023921C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80239220: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80239224: jal         0x8004D5D4
    // 0x80239228: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80239228: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023922C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239230: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239234: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80239238: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023923C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80239240: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80239244: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80239248: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8023924C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80239250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239254: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80239258: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023925C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80239260: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80239264: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x80239268: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    // 0x8023926C: jal         0x80239CB4
    // 0x80239270: sb          $zero, 0x12($s1)
    MEM_B(0X12, ctx->r17) = 0;
    func_80239CB4_ovl28(rdram, ctx);
        goto after_1;
    // 0x80239270: sb          $zero, 0x12($s1)
    MEM_B(0X12, ctx->r17) = 0;
    after_1:
    // 0x80239274: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239278: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023927C: jal         0x80239CDC
    // 0x80239280: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80239CDC_ovl28(rdram, ctx);
        goto after_2;
    // 0x80239280: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80239284: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80239288: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023928C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80239290: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80239294: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239298: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023929C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802392A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802392A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802392A8: jr          $ra
    // 0x802392AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802392AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233AD0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233AD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233AD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233AD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233ADC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233AE0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80233AE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233AE8: beq         $v1, $v0, L_80233C10
    if (ctx->r3 == ctx->r2) {
        // 0x80233AEC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80233C10;
    }
    // 0x80233AEC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80233AF0: beql        $v0, $zero, L_80233B08
    if (ctx->r2 == 0) {
        // 0x80233AF4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80233B08;
    }
    goto skip_0;
    // 0x80233AF4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80233AF8: beq         $v1, $zero, L_80233B18
    if (ctx->r3 == 0) {
        // 0x80233AFC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80233B18;
    }
    // 0x80233AFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233B00: j           L_80233CA8
    // 0x80233B04: nop

        goto L_80233CA8;
    // 0x80233B04: nop

L_80233B08:
    // 0x80233B08: beq         $v1, $v0, L_80233C48
    if (ctx->r3 == ctx->r2) {
        // 0x80233B0C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80233C48;
    }
    // 0x80233B0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233B10: j           L_80233CA8
    // 0x80233B14: nop

        goto L_80233CA8;
    // 0x80233B14: nop

L_80233B18:
    // 0x80233B18: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80233B1C: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80233B20: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80233B24: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80233B28: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80233B2C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233B30: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80233B34: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233B38: lbu         $v0, 0x3971($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X3971);
    // 0x80233B3C: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80233B40: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80233B44: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80233B48: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233B4C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80233B50: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233B54: lbu         $v0, 0x3970($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X3970);
    // 0x80233B58: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80233B5C: jal         0x8004D5D4
    // 0x80233B60: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80233B60: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    after_0:
    // 0x80233B64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233B68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80233B6C: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80233B70: lh          $a3, 0x18($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X18);
    // 0x80233B74: lh          $t0, 0x16($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X16);
    // 0x80233B78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233B7C: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x80233B80: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80233B84: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80233B88: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80233B8C: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80233B90: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80233B94: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80233B98: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80233B9C: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80233BA0: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80233BA4: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80233BA8: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80233BAC: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x80233BB0: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x80233BB4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80233BB8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80233BBC: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80233BC0: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x80233BC4: sw          $v1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r3;
    // 0x80233BC8: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x80233BCC: sw          $a3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r7;
    // 0x80233BD0: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    // 0x80233BD4: sw          $t0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r8;
    // 0x80233BD8: jal         0x80050294
    // 0x80233BDC: sw          $t0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r8;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80233BDC: sw          $t0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r8;
    after_1:
    // 0x80233BE0: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80233BE4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80233BE8: bne         $v1, $v0, L_80233C00
    if (ctx->r3 != ctx->r2) {
        // 0x80233BEC: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_80233C00;
    }
    // 0x80233BEC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80233BF0: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80233BF4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80233BF8: j           L_80233CA8
    // 0x80233BFC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80233CA8;
    // 0x80233BFC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80233C00:
    // 0x80233C00: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80233C04: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233C08: j           L_80233CA8
    // 0x80233C0C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80233CA8;
    // 0x80233C0C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80233C10:
    // 0x80233C10: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80233C14: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x80233C18: lh          $a1, 0x16($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16);
    // 0x80233C1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233C20: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233C24: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80233C28: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80233C2C: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x80233C30: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80233C34: sw          $v1, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r3;
    // 0x80233C38: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x80233C3C: sw          $a1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r5;
    // 0x80233C40: j           L_80233C78
    // 0x80233C44: sw          $a1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r5;
        goto L_80233C78;
    // 0x80233C44: sw          $a1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r5;
L_80233C48:
    // 0x80233C48: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80233C4C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80233C50: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233C54: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80233C58: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80233C5C: jal         0x8004DA90
    // 0x80233C60: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80233C60: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    after_2:
    // 0x80233C64: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80233C68: bne         $v0, $zero, L_80233C78
    if (ctx->r2 != 0) {
        // 0x80233C6C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80233C78;
    }
    // 0x80233C6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233C70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233C74: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80233C78:
    // 0x80233C78: jal         0x8005044C
    // 0x80233C7C: nop

    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x80233C7C: nop

    after_3:
    // 0x80233C80: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80233C84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233C88: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80233C8C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233C90: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80233C94: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80233C98: lbu         $a1, 0x3972($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3972);
    // 0x80233C9C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80233CA0: jal         0x8003B564
    // 0x80233CA4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x80233CA4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_80233CA8:
    // 0x80233CA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233CAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233CB0: jr          $ra
    // 0x80233CB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233CB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80233CB8: nop

    // 0x80233CBC: nop

;}
RECOMP_FUNC void func_8023CFD8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023CFD8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023CFDC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023CFE0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023CFE4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023CFE8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8023CFEC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8023CFF0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023CFF4: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8023CFF8: beq         $v0, $zero, L_8023D37C
    if (ctx->r2 == 0) {
        // 0x8023CFFC: addiu       $s1, $s0, 0x440
        ctx->r17 = ADD32(ctx->r16, 0X440);
            goto L_8023D37C;
    }
    // 0x8023CFFC: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    // 0x8023D000: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023D004: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023D008: addu        $at, $at, $v0
    gpr jr_addend_8023D010 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023D00C: lw          $v0, 0x6010($at)
    ctx->r2 = ADD32(ctx->r1, 0X6010);
    // 0x8023D010: jr          $v0
    // 0x8023D014: nop

    switch (jr_addend_8023D010 >> 2) {
        case 0: goto L_8023D018; break;
        case 1: goto L_8023D0A0; break;
        case 2: goto L_8023D0D8; break;
        case 3: goto L_8023D1BC; break;
        case 4: goto L_8023D2FC; break;
        default: switch_error(__func__, 0x8023D010, 0x80256010);
    }
    // 0x8023D014: nop

L_8023D018:
    // 0x8023D018: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023D01C: addiu       $v1, $zero, 0xD
    ctx->r3 = ADD32(0, 0XD);
    // 0x8023D020: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8023D024: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023D028: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023D02C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023D030: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
    // 0x8023D034: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8023D038: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8023D03C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8023D040: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8023D044: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8023D048: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023D04C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023D050: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023D054: lh          $a0, 0x7A($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X7A);
    // 0x8023D058: lbu         $v1, 0xB($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XB);
    // 0x8023D05C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023D060: sb          $v0, 0x53($s1)
    MEM_B(0X53, ctx->r17) = ctx->r2;
    // 0x8023D064: sb          $zero, 0x52($s1)
    MEM_B(0X52, ctx->r17) = 0;
    // 0x8023D068: bgtz        $a0, L_8023D37C
    if (SIGNED(ctx->r4) > 0) {
        // 0x8023D06C: sh          $v1, 0x8($s1)
        MEM_H(0X8, ctx->r17) = ctx->r3;
            goto L_8023D37C;
    }
    // 0x8023D06C: sh          $v1, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r3;
    // 0x8023D070: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x8023D074: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023D078: bne         $v0, $zero, L_8023D37C
    if (ctx->r2 != 0) {
        // 0x8023D07C: addiu       $a0, $zero, 0x1E4
        ctx->r4 = ADD32(0, 0X1E4);
            goto L_8023D37C;
    }
    // 0x8023D07C: addiu       $a0, $zero, 0x1E4
    ctx->r4 = ADD32(0, 0X1E4);
    // 0x8023D080: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023D084: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023D088: sh          $v0, 0x7A($s1)
    MEM_H(0X7A, ctx->r17) = ctx->r2;
    // 0x8023D08C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8023D090: jal         0x8002A33C
    // 0x8023D094: sh          $v0, 0x78($s1)
    MEM_H(0X78, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8023D094: sh          $v0, 0x78($s1)
    MEM_H(0X78, ctx->r17) = ctx->r2;
    after_0:
    // 0x8023D098: j           L_8023D37C
    // 0x8023D09C: nop

        goto L_8023D37C;
    // 0x8023D09C: nop

L_8023D0A0:
    // 0x8023D0A0: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8023D0A4: bgez        $v0, L_8023D37C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023D0A8: addiu       $v1, $zero, 0xE
        ctx->r3 = ADD32(0, 0XE);
            goto L_8023D37C;
    }
    // 0x8023D0A8: addiu       $v1, $zero, 0xE
    ctx->r3 = ADD32(0, 0XE);
    // 0x8023D0AC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023D0B0: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8023D0B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023D0B8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023D0BC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023D0C0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8023D0C4: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x8023D0C8: sh          $v0, 0x50($s1)
    MEM_H(0X50, ctx->r17) = ctx->r2;
    // 0x8023D0CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023D0D0: j           L_8023D37C
    // 0x8023D0D4: sb          $v0, 0x52($s1)
    MEM_B(0X52, ctx->r17) = ctx->r2;
        goto L_8023D37C;
    // 0x8023D0D4: sb          $v0, 0x52($s1)
    MEM_B(0X52, ctx->r17) = ctx->r2;
L_8023D0D8:
    // 0x8023D0D8: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x8023D0DC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023D0E0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023D0E4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023D0E8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8023D0EC: jal         0x8004F820
    // 0x8023D0F0: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8023D0F0: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    after_1:
    // 0x8023D0F4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8023D0F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023D0FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023D100: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023D104: jal         0x8003E934
    // 0x8023D108: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8023D108: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x8023D10C: lhu         $a0, 0x50($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X50);
    // 0x8023D110: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8023D114: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8023D118: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8023D11C: sh          $v1, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r3;
    // 0x8023D120: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8023D124: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023D128: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8023D12C: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023D130: lh          $a2, -0x23C0($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X23C0);
    // 0x8023D134: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023D138: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023D13C: mult        $a2, $v1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023D140: mflo        $a2
    ctx->r6 = lo;
    // 0x8023D144: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023D148: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023D14C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023D150: sll         $a2, $a2, 4
    ctx->r6 = S32(ctx->r6 << 4);
    // 0x8023D154: jal         0x8004DA90
    // 0x8023D158: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8023D158: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_3:
    // 0x8023D15C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8023D160: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023D164: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8023D168: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D16C: bgez        $v0, L_8023D37C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023D170: addiu       $a0, $zero, 0x1D3
        ctx->r4 = ADD32(0, 0X1D3);
            goto L_8023D37C;
    }
    // 0x8023D170: addiu       $a0, $zero, 0x1D3
    ctx->r4 = ADD32(0, 0X1D3);
    // 0x8023D174: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023D178: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023D17C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8023D180: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023D184: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8023D188: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023D18C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8023D190: sh          $v0, 0x54($s1)
    MEM_H(0X54, ctx->r17) = ctx->r2;
    // 0x8023D194: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x8023D198: sh          $v0, 0x50($s1)
    MEM_H(0X50, ctx->r17) = ctx->r2;
    // 0x8023D19C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023D1A0: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
    // 0x8023D1A4: sh          $zero, 0x6($s1)
    MEM_H(0X6, ctx->r17) = 0;
    // 0x8023D1A8: jal         0x8002A33C
    // 0x8023D1AC: sb          $v0, 0x52($s1)
    MEM_B(0X52, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8023D1AC: sb          $v0, 0x52($s1)
    MEM_B(0X52, ctx->r17) = ctx->r2;
    after_4:
    // 0x8023D1B0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023D1B4: j           L_8023D378
    // 0x8023D1B8: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
        goto L_8023D378;
    // 0x8023D1B8: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
L_8023D1BC:
    // 0x8023D1BC: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x8023D1C0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023D1C4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023D1C8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023D1CC: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8023D1D0: jal         0x8004F820
    // 0x8023D1D4: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8023D1D4: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_5:
    // 0x8023D1D8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8023D1DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023D1E0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023D1E4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8023D1E8: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x8023D1EC: lhu         $a2, 0x4D5A($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X4D5A);
    // 0x8023D1F0: lhu         $v0, 0x50($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X50);
    // 0x8023D1F4: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8023D1F8: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023D1FC: subu        $a2, $a2, $v1
    ctx->r6 = SUB32(ctx->r6, ctx->r3);
    // 0x8023D200: sh          $a2, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r6;
    // 0x8023D204: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8023D208: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023D20C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023D210: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023D214: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023D218: lh          $v0, -0x2400($at)
    ctx->r2 = MEM_H(ctx->r1, -0X2400);
    // 0x8023D21C: lh          $a1, 0x4C($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X4C);
    // 0x8023D220: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023D224: sra         $v0, $v0, 6
    ctx->r2 = S32(SIGNED(ctx->r2) >> 6);
    // 0x8023D228: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023D22C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8023D230: jal         0x8004DA90
    // 0x8023D234: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_6;
    // 0x8023D234: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_6:
    // 0x8023D238: lh          $v0, 0x4C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4C);
    // 0x8023D23C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023D240: slti        $v0, $v0, 0x600
    ctx->r2 = SIGNED(ctx->r2) < 0X600 ? 1 : 0;
    // 0x8023D244: beq         $v0, $zero, L_8023D250
    if (ctx->r2 == 0) {
        // 0x8023D248: addiu       $v0, $v1, 0x60
        ctx->r2 = ADD32(ctx->r3, 0X60);
            goto L_8023D250;
    }
    // 0x8023D248: addiu       $v0, $v1, 0x60
    ctx->r2 = ADD32(ctx->r3, 0X60);
    // 0x8023D24C: sh          $v0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r2;
L_8023D250:
    // 0x8023D250: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8023D254: lh          $v1, 0x6($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X6);
    // 0x8023D258: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8023D25C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8023D260: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8023D264: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8023D268: slti        $v1, $v1, 0x40
    ctx->r3 = SIGNED(ctx->r3) < 0X40 ? 1 : 0;
    // 0x8023D26C: beq         $v1, $zero, L_8023D278
    if (ctx->r3 == 0) {
        // 0x8023D270: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8023D278;
    }
    // 0x8023D270: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8023D274: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
L_8023D278:
    // 0x8023D278: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x8023D27C: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8023D280: bne         $v0, $zero, L_8023D2A0
    if (ctx->r2 != 0) {
        // 0x8023D284: nop
    
            goto L_8023D2A0;
    }
    // 0x8023D284: nop

    // 0x8023D288: lhu         $v0, 0x54($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X54);
    // 0x8023D28C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023D290: sh          $v0, 0x54($s1)
    MEM_H(0X54, ctx->r17) = ctx->r2;
    // 0x8023D294: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D298: bgez        $v0, L_8023D37C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023D29C: nop
    
            goto L_8023D37C;
    }
    // 0x8023D29C: nop

L_8023D2A0:
    // 0x8023D2A0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023D2A4: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8023D2A8: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8023D2AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023D2B0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023D2B4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023D2B8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8023D2BC: addiu       $v0, $zero, -0x180
    ctx->r2 = ADD32(0, -0X180);
    // 0x8023D2C0: sh          $v0, 0x50($s1)
    MEM_H(0X50, ctx->r17) = ctx->r2;
    // 0x8023D2C4: sb          $zero, 0x52($s1)
    MEM_B(0X52, ctx->r17) = 0;
    // 0x8023D2C8: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8023D2CC: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8023D2D0: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8023D2D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023D2D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023D2DC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023D2E0: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x8023D2E4: addiu       $a0, $zero, 0x1D4
    ctx->r4 = ADD32(0, 0X1D4);
    // 0x8023D2E8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023D2EC: jal         0x8002A33C
    // 0x8023D2F0: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x8023D2F0: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    after_7:
    // 0x8023D2F4: j           L_8023D37C
    // 0x8023D2F8: nop

        goto L_8023D37C;
    // 0x8023D2F8: nop

L_8023D2FC:
    // 0x8023D2FC: jal         0x8003E934
    // 0x8023D300: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_8;
    // 0x8023D300: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8023D304: lhu         $a0, 0x50($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X50);
    // 0x8023D308: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8023D30C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8023D310: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8023D314: sh          $v1, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r3;
    // 0x8023D318: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8023D31C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023D320: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8023D324: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023D328: lh          $a2, -0x23C0($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X23C0);
    // 0x8023D32C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023D330: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023D334: mult        $a2, $v1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023D338: mflo        $a2
    ctx->r6 = lo;
    // 0x8023D33C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023D340: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023D344: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023D348: sll         $a2, $a2, 4
    ctx->r6 = S32(ctx->r6 << 4);
    // 0x8023D34C: jal         0x8004DA90
    // 0x8023D350: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_9;
    // 0x8023D350: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_9:
    // 0x8023D354: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8023D358: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023D35C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8023D360: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D364: bgez        $v0, L_8023D37C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023D368: nop
    
            goto L_8023D37C;
    }
    // 0x8023D368: nop

    // 0x8023D36C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023D370: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023D374: andi        $v0, $v0, 0xFBFF
    ctx->r2 = ctx->r2 & 0XFBFF;
L_8023D378:
    // 0x8023D378: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8023D37C:
    // 0x8023D37C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8023D380: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8023D384: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023D388: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023D38C: jr          $ra
    // 0x8023D390: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023D390: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802263FC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802263FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226400: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226404: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226408: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x8022640C: bne         $v0, $zero, L_8022641C
    if (ctx->r2 != 0) {
        // 0x80226410: nop
    
            goto L_8022641C;
    }
    // 0x80226410: nop

    // 0x80226414: jal         0x80226BC4
    // 0x80226418: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80226BC4_ovl28(rdram, ctx);
        goto after_0;
    // 0x80226418: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
L_8022641C:
    // 0x8022641C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226420: jr          $ra
    // 0x80226424: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226424: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A350_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A350: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A354: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023A358: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8023A35C: bne         $v0, $zero, L_8023A374
    if (ctx->r2 != 0) {
        // 0x8023A360: nop
    
            goto L_8023A374;
    }
    // 0x8023A360: nop

    // 0x8023A364: jal         0x8023A388
    // 0x8023A368: nop

    func_8023A388_ovl28(rdram, ctx);
        goto after_0;
    // 0x8023A368: nop

    after_0:
    // 0x8023A36C: j           L_8023A37C
    // 0x8023A370: nop

        goto L_8023A37C;
    // 0x8023A370: nop

L_8023A374:
    // 0x8023A374: jal         0x8023A3F8
    // 0x8023A378: nop

    func_8023A3F8_ovl28(rdram, ctx);
        goto after_1;
    // 0x8023A378: nop

    after_1:
L_8023A37C:
    // 0x8023A37C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023A380: jr          $ra
    // 0x8023A384: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A384: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024918C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024918C: lw          $v1, 0x44($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X44);
    // 0x80249190: lbu         $v0, 0x8($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X8);
    // 0x80249194: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x80249198: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x8024919C: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x802491A0: lw          $v0, 0x40($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X40);
    // 0x802491A4: lb          $v1, 0xE($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XE);
    // 0x802491A8: bne         $v1, $zero, L_802491BC
    if (ctx->r3 != 0) {
        // 0x802491AC: sw          $v0, 0x40($a0)
        MEM_W(0X40, ctx->r4) = ctx->r2;
            goto L_802491BC;
    }
    // 0x802491AC: sw          $v0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r2;
    // 0x802491B0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x802491B4: j           L_802491C4
    // 0x802491B8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
        goto L_802491C4;
    // 0x802491B8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
L_802491BC:
    // 0x802491BC: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x802491C0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_802491C4:
    // 0x802491C4: jr          $ra
    // 0x802491C8: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802491C8: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80248240_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80248240: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80248244: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80248248: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024824C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80248250: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80248254: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80248258: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8024825C: addiu       $a1, $a1, -0x3A50
    ctx->r5 = ADD32(ctx->r5, -0X3A50);
    // 0x80248260: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80248264: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80248268: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024826C: lw          $v0, 0x50F0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X50F0);
    // 0x80248270: addiu       $s1, $s0, 0x4C
    ctx->r17 = ADD32(ctx->r16, 0X4C);
    // 0x80248274: jalr        $v0
    // 0x80248278: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80248278: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8024827C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80248280: jal         0x80248414
    // 0x80248284: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80248414_ovl28(rdram, ctx);
        goto after_1;
    // 0x80248284: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80248288: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8024828C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80248290: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80248294: jr          $ra
    // 0x80248298: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80248298: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022BD80_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BD80: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022BD84: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022BD88: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BD8C: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022BD90: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022BD94: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022BD98: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8022BD9C: bne         $v0, $zero, L_8022BDC8
    if (ctx->r2 != 0) {
        // 0x8022BDA0: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022BDC8;
    }
    // 0x8022BDA0: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022BDA4: addiu       $a0, $s0, 0x34C
    ctx->r4 = ADD32(ctx->r16, 0X34C);
    // 0x8022BDA8: jal         0x800540D0
    // 0x8022BDAC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x8022BDAC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022BDB0: beq         $v0, $zero, L_8022BDC8
    if (ctx->r2 == 0) {
        // 0x8022BDB4: nop
    
            goto L_8022BDC8;
    }
    // 0x8022BDB4: nop

    // 0x8022BDB8: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022BDBC: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8022BDC0: j           L_8022BDD4
    // 0x8022BDC4: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
        goto L_8022BDD4;
    // 0x8022BDC4: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_8022BDC8:
    // 0x8022BDC8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022BDCC: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
    // 0x8022BDD0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022BDD4:
    // 0x8022BDD4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022BDD8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022BDDC: beq         $v0, $zero, L_8022BDEC
    if (ctx->r2 == 0) {
        // 0x8022BDE0: nop
    
            goto L_8022BDEC;
    }
    // 0x8022BDE0: nop

    // 0x8022BDE4: jal         0x8022D690
    // 0x8022BDE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022D690_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022BDE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022BDEC:
    // 0x8022BDEC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BDF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BDF4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022BDF8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BDFC: lw          $v0, 0x300C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X300C);
    // 0x8022BE00: jalr        $v0
    // 0x8022BE04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8022BE04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022BE08: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x8022BE0C: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
    // 0x8022BE10: beq         $v0, $zero, L_8022BEA8
    if (ctx->r2 == 0) {
        // 0x8022BE14: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022BEA8;
    }
    // 0x8022BE14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BE18: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BE1C: beq         $v1, $v0, L_8022BE34
    if (ctx->r3 == ctx->r2) {
        // 0x8022BE20: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022BE34;
    }
    // 0x8022BE20: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022BE24: beq         $v1, $v0, L_8022BE40
    if (ctx->r3 == ctx->r2) {
        // 0x8022BE28: nop
    
            goto L_8022BE40;
    }
    // 0x8022BE28: nop

    // 0x8022BE2C: j           L_8022BE6C
    // 0x8022BE30: nop

        goto L_8022BE6C;
    // 0x8022BE30: nop

L_8022BE34:
    // 0x8022BE34: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022BE38: j           L_8022BE8C
    // 0x8022BE3C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022BE8C;
    // 0x8022BE3C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022BE40:
    // 0x8022BE40: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8022BE44: slti        $v0, $v0, 0x33
    ctx->r2 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x8022BE48: beq         $v0, $zero, L_8022BE58
    if (ctx->r2 == 0) {
        // 0x8022BE4C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022BE58;
    }
    // 0x8022BE4C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022BE50: j           L_8022BE8C
    // 0x8022BE54: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022BE8C;
    // 0x8022BE54: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022BE58:
    // 0x8022BE58: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x8022BE5C: bne         $v0, $zero, L_8022BE7C
    if (ctx->r2 != 0) {
        // 0x8022BE60: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8022BE7C;
    }
    // 0x8022BE60: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022BE64: j           L_8022BE84
    // 0x8022BE68: nop

        goto L_8022BE84;
    // 0x8022BE68: nop

L_8022BE6C:
    // 0x8022BE6C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022BE70: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022BE74: beq         $v0, $zero, L_8022BE84
    if (ctx->r2 == 0) {
        // 0x8022BE78: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8022BE84;
    }
    // 0x8022BE78: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022BE7C:
    // 0x8022BE7C: j           L_8022BE8C
    // 0x8022BE80: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022BE8C;
    // 0x8022BE80: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022BE84:
    // 0x8022BE84: jal         0x8022D4B8
    // 0x8022BE88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022D4B8_ovl28(rdram, ctx);
        goto after_3;
    // 0x8022BE88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8022BE8C:
    // 0x8022BE8C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022BE90: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022BE94: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022BE98: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022BE9C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022BEA0: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8022BEA4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022BEA8:
    // 0x8022BEA8: lh          $v0, 0x34($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X34);
    // 0x8022BEAC: beq         $v0, $zero, L_8022BEBC
    if (ctx->r2 == 0) {
        // 0x8022BEB0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022BEBC;
    }
    // 0x8022BEB0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022BEB4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022BEB8: sh          $v0, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r2;
L_8022BEBC:
    // 0x8022BEBC: lh          $v0, 0x36($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X36);
    // 0x8022BEC0: beq         $v0, $zero, L_8022BED0
    if (ctx->r2 == 0) {
        // 0x8022BEC4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022BED0;
    }
    // 0x8022BEC4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022BEC8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022BECC: sh          $v0, 0x36($s1)
    MEM_H(0X36, ctx->r17) = ctx->r2;
L_8022BED0:
    // 0x8022BED0: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x8022BED4: beq         $v0, $zero, L_8022BEE4
    if (ctx->r2 == 0) {
        // 0x8022BED8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022BEE4;
    }
    // 0x8022BED8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022BEDC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022BEE0: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_8022BEE4:
    // 0x8022BEE4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022BEE8: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022BEEC: beq         $v0, $zero, L_8022BF7C
    if (ctx->r2 == 0) {
        // 0x8022BEF0: nop
    
            goto L_8022BF7C;
    }
    // 0x8022BEF0: nop

    // 0x8022BEF4: lhu         $v0, 0x38($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X38);
    // 0x8022BEF8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022BEFC: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    // 0x8022BF00: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BF04: bgez        $v0, L_8022BF7C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022BF08: nop
    
            goto L_8022BF7C;
    }
    // 0x8022BF08: nop

    // 0x8022BF0C: jal         0x8004F144
    // 0x8022BF10: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x8022BF10: nop

    after_4:
    // 0x8022BF14: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022BF18: beq         $v1, $zero, L_8022BF54
    if (ctx->r3 == 0) {
        // 0x8022BF1C: sw          $v1, 0x40($s1)
        MEM_W(0X40, ctx->r17) = ctx->r3;
            goto L_8022BF54;
    }
    // 0x8022BF1C: sw          $v1, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r3;
    // 0x8022BF20: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022BF24: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022BF28: lw          $v1, 0x40($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X40);
    // 0x8022BF2C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022BF30: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022BF34: lw          $v1, 0x40($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X40);
    // 0x8022BF38: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8022BF3C: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x8022BF40: lw          $a0, 0x40($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X40);
    // 0x8022BF44: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022BF48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022BF4C: jal         0x8009A3B4
    // 0x8022BF50: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022BF50: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    after_5:
L_8022BF54:
    // 0x8022BF54: jal         0x8004F418
    // 0x8022BF58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_6;
    // 0x8022BF58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022BF5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BF60: lh          $a2, 0x6($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X6);
    // 0x8022BF64: addiu       $s0, $a0, 0x180
    ctx->r16 = ADD32(ctx->r4, 0X180);
    // 0x8022BF68: jal         0x8007A290
    // 0x8022BF6C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8007A290_55690(rdram, ctx);
        goto after_7;
    // 0x8022BF6C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022BF70: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    // 0x8022BF74: jal         0x8002A33C
    // 0x8022BF78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x8022BF78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
L_8022BF7C:
    // 0x8022BF7C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022BF80: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022BF84: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022BF88: jr          $ra
    // 0x8022BF8C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022BF8C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022568C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022568C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225690: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225694: jal         0x8006033C
    // 0x80225698: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225698: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_0:
    // 0x8022569C: beq         $v0, $zero, L_802256AC
    if (ctx->r2 == 0) {
        // 0x802256A0: nop
    
            goto L_802256AC;
    }
    // 0x802256A0: nop

    // 0x802256A4: jal         0x80060690
    // 0x802256A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x802256A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_802256AC:
    // 0x802256AC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802256B0: jr          $ra
    // 0x802256B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802256B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80241E88_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241E88: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80241E8C: lhu         $v0, 0x16($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X16);
    // 0x80241E90: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80241E94: sh          $v0, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r2;
    // 0x80241E98: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80241E9C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80241EA0: slti        $v0, $v0, -0x32
    ctx->r2 = SIGNED(ctx->r2) < -0X32 ? 1 : 0;
    // 0x80241EA4: beq         $v0, $zero, L_80241EB8
    if (ctx->r2 == 0) {
        // 0x80241EA8: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_80241EB8;
    }
    // 0x80241EA8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80241EAC: addiu       $v0, $zero, -0x33
    ctx->r2 = ADD32(0, -0X33);
    // 0x80241EB0: sh          $v0, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r2;
    // 0x80241EB4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_80241EB8:
    // 0x80241EB8: lh          $v0, 0x14($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X14);
    // 0x80241EBC: lh          $v1, 0x16($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X16);
    // 0x80241EC0: lh          $a0, 0x18($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X18);
    // 0x80241EC4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80241EC8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80241ECC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80241ED0: sw          $v0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r2;
    // 0x80241ED4: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x80241ED8: sw          $v1, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r3;
    // 0x80241EDC: jr          $ra
    // 0x80241EE0: sw          $a0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x80241EE0: sw          $a0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r4;
;}
RECOMP_FUNC void func_8022F954_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F954: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F958: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F95C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F960: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022F964: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022F968: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F96C: jal         0x8003516C
    // 0x8022F970: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003516C_1056C(rdram, ctx);
        goto after_0;
    // 0x8022F970: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022F974: bne         $v0, $zero, L_8022F998
    if (ctx->r2 != 0) {
        // 0x8022F978: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022F998;
    }
    // 0x8022F978: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F97C: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022F980: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8022F984: jal         0x800610AC
    // 0x8022F988: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x8022F988: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022F98C: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022F990: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F994: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022F998:
    // 0x8022F998: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F99C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022F9A0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F9A4: jal         0x8004F820
    // 0x8022F9A8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022F9A8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x8022F9AC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F9B0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8022F9B4: sb          $a0, 0x11B($s0)
    MEM_B(0X11B, ctx->r16) = ctx->r4;
    // 0x8022F9B8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F9BC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022F9C0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022F9C4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F9C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F9CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F9D0: jr          $ra
    // 0x8022F9D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F9D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80240B18_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80240B18: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80240B1C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80240B20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80240B24: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80240B28: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80240B2C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80240B30: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x80240B34: beq         $v0, $zero, L_80240B54
    if (ctx->r2 == 0) {
        // 0x80240B38: addiu       $s1, $s0, 0x440
        ctx->r17 = ADD32(ctx->r16, 0X440);
            goto L_80240B54;
    }
    // 0x80240B38: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    // 0x80240B3C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80240B40: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80240B44: addu        $at, $at, $v0
    gpr jr_addend_80240B4C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80240B48: lw          $v0, 0x6140($at)
    ctx->r2 = ADD32(ctx->r1, 0X6140);
    // 0x80240B4C: jr          $v0
    // 0x80240B50: nop

    switch (jr_addend_80240B4C >> 2) {
        case 0: goto L_80240B54; break;
        case 1: goto L_80240B70; break;
        case 2: goto L_80240BFC; break;
        case 3: goto L_80240C40; break;
        case 4: goto L_80240C8C; break;
        case 5: goto L_80240C9C; break;
        case 6: goto L_80240C9C; break;
        case 7: goto L_80240C9C; break;
        case 8: goto L_80240C9C; break;
        default: switch_error(__func__, 0x80240B4C, 0x80256140);
    }
    // 0x80240B50: nop

L_80240B54:
    // 0x80240B54: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80240B58: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80240B5C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80240B60: jal         0x8009A3B4
    // 0x80240B64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80240B64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80240B68: j           L_80240C7C
    // 0x80240B6C: nop

        goto L_80240C7C;
    // 0x80240B6C: nop

L_80240B70:
    // 0x80240B70: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80240B74: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x80240B78: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80240B7C: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x80240B80: jal         0x8004F820
    // 0x80240B84: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80240B84: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_1:
    // 0x80240B88: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80240B8C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80240B90: beq         $v1, $zero, L_80240BA8
    if (ctx->r3 == 0) {
        // 0x80240B94: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80240BA8;
    }
    // 0x80240B94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240B98: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80240B9C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80240BA0: j           L_80240C9C
    // 0x80240BA4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_80240C9C;
    // 0x80240BA4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80240BA8:
    // 0x80240BA8: sh          $v0, 0x98($s1)
    MEM_H(0X98, ctx->r17) = ctx->r2;
    // 0x80240BAC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80240BB0: sb          $v0, 0x9A($s1)
    MEM_B(0X9A, ctx->r17) = ctx->r2;
    // 0x80240BB4: sb          $zero, 0x9B($s1)
    MEM_B(0X9B, ctx->r17) = 0;
    // 0x80240BB8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80240BBC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240BC0: jal         0x8004EFE4
    // 0x80240BC4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_2;
    // 0x80240BC4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_2:
    // 0x80240BC8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80240BCC: beq         $a0, $zero, L_80240C9C
    if (ctx->r4 == 0) {
        // 0x80240BD0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80240C9C;
    }
    // 0x80240BD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240BD4: addiu       $v1, $zero, 0x33
    ctx->r3 = ADD32(0, 0X33);
    // 0x80240BD8: sw          $a0, 0xD8($s1)
    MEM_W(0XD8, ctx->r17) = ctx->r4;
    // 0x80240BDC: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80240BE0: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x80240BE4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80240BE8: addiu       $v0, $v0, 0x4D58
    ctx->r2 = ADD32(ctx->r2, 0X4D58);
    // 0x80240BEC: sb          $v1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r3;
    // 0x80240BF0: sw          $v0, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r2;
    // 0x80240BF4: j           L_80240C9C
    // 0x80240BF8: sw          $s0, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r16;
        goto L_80240C9C;
    // 0x80240BF8: sw          $s0, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r16;
L_80240BFC:
    // 0x80240BFC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80240C00: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x80240C04: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80240C08: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80240C0C: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x80240C10: jal         0x8004F820
    // 0x80240C14: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80240C14: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_3:
    // 0x80240C18: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80240C1C: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x80240C20: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80240C24: bgez        $a0, L_80240C9C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80240C28: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80240C9C;
    }
    // 0x80240C28: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80240C2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240C30: sh          $v0, 0x98($s1)
    MEM_H(0X98, ctx->r17) = ctx->r2;
    // 0x80240C34: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80240C38: j           L_80240C78
    // 0x80240C3C: sb          $v0, 0x9A($s1)
    MEM_B(0X9A, ctx->r17) = ctx->r2;
        goto L_80240C78;
    // 0x80240C3C: sb          $v0, 0x9A($s1)
    MEM_B(0X9A, ctx->r17) = ctx->r2;
L_80240C40:
    // 0x80240C40: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x80240C44: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80240C48: bne         $v1, $v0, L_80240C64
    if (ctx->r3 != ctx->r2) {
        // 0x80240C4C: addiu       $a0, $zero, 0x1FD
        ctx->r4 = ADD32(0, 0X1FD);
            goto L_80240C64;
    }
    // 0x80240C4C: addiu       $a0, $zero, 0x1FD
    ctx->r4 = ADD32(0, 0X1FD);
    // 0x80240C50: jal         0x8002A33C
    // 0x80240C54: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80240C54: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_4:
    // 0x80240C58: lw          $v1, 0xD8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XD8);
    // 0x80240C5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240C60: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_80240C64:
    // 0x80240C64: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80240C68: bgez        $v0, L_80240C9C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80240C6C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80240C9C;
    }
    // 0x80240C6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240C70: sh          $v0, 0x98($s1)
    MEM_H(0X98, ctx->r17) = ctx->r2;
    // 0x80240C74: sb          $zero, 0x9A($s1)
    MEM_B(0X9A, ctx->r17) = 0;
L_80240C78:
    // 0x80240C78: sb          $zero, 0x9B($s1)
    MEM_B(0X9B, ctx->r17) = 0;
L_80240C7C:
    // 0x80240C7C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80240C80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240C84: j           L_80240C9C
    // 0x80240C88: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80240C9C;
    // 0x80240C88: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80240C8C:
    // 0x80240C8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240C90: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80240C94: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80240C98: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80240C9C:
    // 0x80240C9C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80240CA0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80240CA4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80240CA8: jr          $ra
    // 0x80240CAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80240CAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802349D8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802349D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802349DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802349E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802349E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802349E8: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x802349EC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802349F0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802349F4: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802349F8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802349FC: jal         0x8004F820
    // 0x80234A00: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80234A00: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_0:
    // 0x80234A04: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80234A08: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80234A0C: lbu         $v0, 0x3B4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3B4);
    // 0x80234A10: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80234A14: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80234A18: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80234A1C: beq         $v0, $zero, L_80234A44
    if (ctx->r2 == 0) {
        // 0x80234A20: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80234A44;
    }
    // 0x80234A20: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80234A24: lbu         $v1, 0x3B4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3B4);
    // 0x80234A28: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80234A2C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80234A30: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80234A34: sh          $zero, 0x1D8($s0)
    MEM_H(0X1D8, ctx->r16) = 0;
    // 0x80234A38: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x80234A3C: j           L_80234A5C
    // 0x80234A40: sb          $v1, 0x3B4($s0)
    MEM_B(0X3B4, ctx->r16) = ctx->r3;
        goto L_80234A5C;
    // 0x80234A40: sb          $v1, 0x3B4($s0)
    MEM_B(0X3B4, ctx->r16) = ctx->r3;
L_80234A44:
    // 0x80234A44: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80234A48: bne         $v0, $zero, L_80234A5C
    if (ctx->r2 != 0) {
        // 0x80234A4C: nop
    
            goto L_80234A5C;
    }
    // 0x80234A4C: nop

    // 0x80234A50: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80234A54: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80234A58: sh          $zero, 0x1D8($s0)
    MEM_H(0X1D8, ctx->r16) = 0;
L_80234A5C:
    // 0x80234A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234A60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234A64: jr          $ra
    // 0x80234A68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234A68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802312F8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802312F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802312FC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231300: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80231304: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80231308: beq         $v1, $zero, L_80231324
    if (ctx->r3 == 0) {
        // 0x8023130C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80231324;
    }
    // 0x8023130C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231314: beq         $v1, $v0, L_80231328
    if (ctx->r3 == ctx->r2) {
        // 0x80231318: nop
    
            goto L_80231328;
    }
    // 0x80231318: nop

    // 0x8023131C: j           L_80231348
    // 0x80231320: nop

        goto L_80231348;
    // 0x80231320: nop

L_80231324:
    // 0x80231324: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80231328:
    // 0x80231328: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8023132C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231330: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80231334: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80231338: bne         $v0, $zero, L_80231348
    if (ctx->r2 != 0) {
        // 0x8023133C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80231348;
    }
    // 0x8023133C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80231340: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x80231344: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_80231348:
    // 0x80231348: jal         0x8023156C
    // 0x8023134C: nop

    func_8023156C_ovl28(rdram, ctx);
        goto after_0;
    // 0x8023134C: nop

    after_0:
    // 0x80231350: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231354: jr          $ra
    // 0x80231358: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231358: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234364_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234364: lh          $v1, 0x56($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X56);
    // 0x80234368: lh          $v0, 0x3AC($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X3AC);
    // 0x8023436C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80234370: bne         $v1, $v0, L_80234384
    if (ctx->r3 != ctx->r2) {
        // 0x80234374: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80234384;
    }
    // 0x80234374: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80234378: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8023437C: j           L_8023439C
    // 0x80234380: sh          $zero, 0x1D8($a0)
    MEM_H(0X1D8, ctx->r4) = 0;
        goto L_8023439C;
    // 0x80234380: sh          $zero, 0x1D8($a0)
    MEM_H(0X1D8, ctx->r4) = 0;
L_80234384:
    // 0x80234384: lb          $v0, 0xC($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XC);
    // 0x80234388: bne         $v0, $zero, L_80234394
    if (ctx->r2 != 0) {
        // 0x8023438C: addiu       $v0, $a1, -0x20
        ctx->r2 = ADD32(ctx->r5, -0X20);
            goto L_80234394;
    }
    // 0x8023438C: addiu       $v0, $a1, -0x20
    ctx->r2 = ADD32(ctx->r5, -0X20);
    // 0x80234390: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
L_80234394:
    // 0x80234394: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80234398: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
L_8023439C:
    // 0x8023439C: jr          $ra
    // 0x802343A0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x802343A0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8022E9C4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E9C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E9C8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E9CC: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022E9D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E9D4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022E9D8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E9DC: lw          $v0, 0x3754($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3754);
    // 0x8022E9E0: jalr        $v0
    // 0x8022E9E4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E9E4: nop

    after_0:
    // 0x8022E9E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E9EC: jr          $ra
    // 0x8022E9F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E9F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230AB0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230AB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230AB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230AB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230ABC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80230AC0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80230AC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230AC8: jal         0x8009A3B4
    // 0x80230ACC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80230ACC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80230AD0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80230AD4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80230AD8: jal         0x8009A3B4
    // 0x80230ADC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230ADC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80230AE0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80230AE4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80230AE8: jal         0x8009A3B4
    // 0x80230AEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80230AEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80230AF0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80230AF4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230AF8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80230AFC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230B00: lw          $v0, 0x3870($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3870);
    // 0x80230B04: jalr        $v0
    // 0x80230B08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80230B08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80230B0C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230B10: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80230B14: beq         $v0, $zero, L_80230B2C
    if (ctx->r2 == 0) {
        // 0x80230B18: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230B2C;
    }
    // 0x80230B18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230B1C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80230B20: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80230B24: jal         0x8003B564
    // 0x80230B28: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x80230B28: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_80230B2C:
    // 0x80230B2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230B30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230B34: jr          $ra
    // 0x80230B38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230B38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225DC0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225DC0: jr          $ra
    // 0x80225DC4: nop

    TRACE_RETURN()
    return;
    // 0x80225DC4: nop

;}
RECOMP_FUNC void func_80248FDC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80248FDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80248FE0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80248FE4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80248FE8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80248FEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80248FF0: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80248FF4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80248FF8: beq         $v1, $a0, L_8024906C
    if (ctx->r3 == ctx->r4) {
        // 0x80248FFC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8024906C;
    }
    // 0x80248FFC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80249000: beql        $v0, $zero, L_80249018
    if (ctx->r2 == 0) {
        // 0x80249004: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80249018;
    }
    goto skip_0;
    // 0x80249004: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80249008: beq         $v1, $zero, L_80249030
    if (ctx->r3 == 0) {
        // 0x8024900C: nop
    
            goto L_80249030;
    }
    // 0x8024900C: nop

    // 0x80249010: j           L_80249178
    // 0x80249014: nop

        goto L_80249178;
    // 0x80249014: nop

L_80249018:
    // 0x80249018: beq         $v1, $v0, L_802490C8
    if (ctx->r3 == ctx->r2) {
        // 0x8024901C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802490C8;
    }
    // 0x8024901C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80249020: beq         $v1, $v0, L_802490FC
    if (ctx->r3 == ctx->r2) {
        // 0x80249024: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_802490FC;
    }
    // 0x80249024: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80249028: j           L_80249178
    // 0x8024902C: nop

        goto L_80249178;
    // 0x8024902C: nop

L_80249030:
    // 0x80249030: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80249034: addiu       $v1, $v1, -0x3A9C
    ctx->r3 = ADD32(ctx->r3, -0X3A9C);
    // 0x80249038: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8024903C: bne         $v0, $a0, L_80249050
    if (ctx->r2 != ctx->r4) {
        // 0x80249040: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80249050;
    }
    // 0x80249040: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80249044: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    // 0x80249048: j           L_80249178
    // 0x8024904C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80249178;
    // 0x8024904C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80249050:
    // 0x80249050: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80249054: lw          $v0, -0x3AA4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3AA4);
    // 0x80249058: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8024905C: beq         $v0, $zero, L_80249178
    if (ctx->r2 == 0) {
        // 0x80249060: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80249178;
    }
    // 0x80249060: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80249064: j           L_80249178
    // 0x80249068: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80249178;
    // 0x80249068: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8024906C:
    // 0x8024906C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80249070: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80249074: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80249078: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024907C: bne         $v0, $zero, L_80249178
    if (ctx->r2 != 0) {
        // 0x80249080: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80249178;
    }
    // 0x80249080: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80249084: jal         0x800616FC
    // 0x80249088: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x80249088: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_0:
    // 0x8024908C: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80249090: addiu       $a1, $a1, -0x3AA4
    ctx->r5 = ADD32(ctx->r5, -0X3AA4);
    // 0x80249094: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80249098: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x8024909C: addiu       $a2, $a2, 0x4A6D
    ctx->r6 = ADD32(ctx->r6, 0X4A6D);
    // 0x802490A0: lbu         $a0, 0x0($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X0);
    // 0x802490A4: addiu       $v0, $zero, -0x11
    ctx->r2 = ADD32(0, -0X11);
    // 0x802490A8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x802490AC: ori         $a0, $a0, 0x40
    ctx->r4 = ctx->r4 | 0X40;
    // 0x802490B0: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x802490B4: sb          $a0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r4;
    // 0x802490B8: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x802490BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802490C0: j           L_80249178
    // 0x802490C4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80249178;
    // 0x802490C4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_802490C8:
    // 0x802490C8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802490CC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802490D0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802490D4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802490D8: bne         $v0, $zero, L_80249178
    if (ctx->r2 != 0) {
        // 0x802490DC: nop
    
            goto L_80249178;
    }
    // 0x802490DC: nop

    // 0x802490E0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802490E4: addiu       $v1, $v1, 0x4A6D
    ctx->r3 = ADD32(ctx->r3, 0X4A6D);
    // 0x802490E8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802490EC: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x802490F0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802490F4: j           L_80249178
    // 0x802490F8: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
        goto L_80249178;
    // 0x802490F8: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_802490FC:
    // 0x802490FC: lb          $v1, 0xE($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XE);
    // 0x80249100: bne         $v1, $v0, L_80249114
    if (ctx->r3 != ctx->r2) {
        // 0x80249104: addiu       $a0, $zero, 0x105
        ctx->r4 = ADD32(0, 0X105);
            goto L_80249114;
    }
    // 0x80249104: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    // 0x80249108: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8024910C: jal         0x8002A2F8
    // 0x80249110: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_1;
    // 0x80249110: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
L_80249114:
    // 0x80249114: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x80249118: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8024911C: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x80249120: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80249124: bne         $v0, $zero, L_80249178
    if (ctx->r2 != 0) {
        // 0x80249128: addiu       $a0, $zero, 0x185
        ctx->r4 = ADD32(0, 0X185);
            goto L_80249178;
    }
    // 0x80249128: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    // 0x8024912C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80249130: jal         0x8002A2F8
    // 0x80249134: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x80249134: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80249138: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x8024913C: addiu       $s0, $s0, 0x516C
    ctx->r16 = ADD32(ctx->r16, 0X516C);
    // 0x80249140: jal         0x8003E6BC
    // 0x80249144: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_3;
    // 0x80249144: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80249148: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8024914C: lui         $a1, 0x1006
    ctx->r5 = S32(0X1006 << 16);
    // 0x80249150: jal         0x80071ACC
    // 0x80249154: ori         $a1, $a1, 0x100
    ctx->r5 = ctx->r5 | 0X100;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_4;
    // 0x80249154: ori         $a1, $a1, 0x100
    ctx->r5 = ctx->r5 | 0X100;
    after_4:
    // 0x80249158: jal         0x8003E6BC
    // 0x8024915C: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_5;
    // 0x8024915C: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    after_5:
    // 0x80249160: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80249164: lui         $a1, 0x1006
    ctx->r5 = S32(0X1006 << 16);
    // 0x80249168: jal         0x80071ACC
    // 0x8024916C: ori         $a1, $a1, 0x102
    ctx->r5 = ctx->r5 | 0X102;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_6;
    // 0x8024916C: ori         $a1, $a1, 0x102
    ctx->r5 = ctx->r5 | 0X102;
    after_6:
    // 0x80249170: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80249174: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80249178:
    // 0x80249178: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8024917C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80249180: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80249184: jr          $ra
    // 0x80249188: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80249188: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023E224_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023E224: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023E228: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8023E22C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8023E230: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023E234: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8023E238: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023E23C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023E240: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023E244: lbu         $a0, 0xA($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0XA);
    // 0x8023E248: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023E24C: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8023E250: beq         $v1, $v0, L_8023E3DC
    if (ctx->r3 == ctx->r2) {
        // 0x8023E254: addiu       $s4, $s3, 0x440
        ctx->r20 = ADD32(ctx->r19, 0X440);
            goto L_8023E3DC;
    }
    // 0x8023E254: addiu       $s4, $s3, 0x440
    ctx->r20 = ADD32(ctx->r19, 0X440);
    // 0x8023E258: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023E25C: beql        $v0, $zero, L_8023E274
    if (ctx->r2 == 0) {
        // 0x8023E260: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023E274;
    }
    goto skip_0;
    // 0x8023E260: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023E264: beq         $v1, $zero, L_8023E28C
    if (ctx->r3 == 0) {
        // 0x8023E268: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8023E28C;
    }
    // 0x8023E268: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8023E26C: j           L_8023E64C
    // 0x8023E270: nop

        goto L_8023E64C;
    // 0x8023E270: nop

L_8023E274:
    // 0x8023E274: beq         $v1, $v0, L_8023E544
    if (ctx->r3 == ctx->r2) {
        // 0x8023E278: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023E544;
    }
    // 0x8023E278: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023E27C: beq         $v1, $v0, L_8023E628
    if (ctx->r3 == ctx->r2) {
        // 0x8023E280: nop
    
            goto L_8023E628;
    }
    // 0x8023E280: nop

    // 0x8023E284: j           L_8023E64C
    // 0x8023E288: nop

        goto L_8023E64C;
    // 0x8023E288: nop

L_8023E28C:
    // 0x8023E28C: lhu         $a0, 0x440($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X440);
    // 0x8023E290: lbu         $v1, 0x2($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X2);
    // 0x8023E294: sb          $v0, 0xA($s3)
    MEM_B(0XA, ctx->r19) = ctx->r2;
    // 0x8023E298: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023E29C: sb          $v0, 0xAC($s3)
    MEM_B(0XAC, ctx->r19) = ctx->r2;
    // 0x8023E2A0: lui         $a1, 0x8019
    ctx->r5 = S32(0X8019 << 16);
    // 0x8023E2A4: lw          $a1, 0x3C60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3C60);
    // 0x8023E2A8: addiu       $v0, $zero, -0x60
    ctx->r2 = ADD32(0, -0X60);
    // 0x8023E2AC: sh          $v0, 0x490($s3)
    MEM_H(0X490, ctx->r19) = ctx->r2;
    // 0x8023E2B0: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023E2B4: sh          $v0, 0x444($s3)
    MEM_H(0X444, ctx->r19) = ctx->r2;
    // 0x8023E2B8: ori         $a0, $a0, 0x20
    ctx->r4 = ctx->r4 | 0X20;
    // 0x8023E2BC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8023E2C0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8023E2C4: sh          $a0, 0x440($s3)
    MEM_H(0X440, ctx->r19) = ctx->r4;
    // 0x8023E2C8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8023E2CC: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x8023E2D0: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8023E2D4: addiu       $s1, $s1, 0x49C4
    ctx->r17 = ADD32(ctx->r17, 0X49C4);
    // 0x8023E2D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023E2DC: sb          $zero, 0x493($s3)
    MEM_B(0X493, ctx->r19) = 0;
    // 0x8023E2E0: sb          $zero, 0x492($s3)
    MEM_B(0X492, ctx->r19) = 0;
    // 0x8023E2E4: jal         0x80241758
    // 0x8023E2E8: sh          $v0, 0x448($s3)
    MEM_H(0X448, ctx->r19) = ctx->r2;
    func_80241758_ovl28(rdram, ctx);
        goto after_0;
    // 0x8023E2E8: sh          $v0, 0x448($s3)
    MEM_H(0X448, ctx->r19) = ctx->r2;
    after_0:
    // 0x8023E2EC: beq         $v0, $zero, L_8023E308
    if (ctx->r2 == 0) {
        // 0x8023E2F0: addiu       $a0, $s3, 0x478
        ctx->r4 = ADD32(ctx->r19, 0X478);
            goto L_8023E308;
    }
    // 0x8023E2F0: addiu       $a0, $s3, 0x478
    ctx->r4 = ADD32(ctx->r19, 0X478);
    // 0x8023E2F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023E2F8: jal         0x8009A3B4
    // 0x8023E2FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023E2FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8023E300: j           L_8023E374
    // 0x8023E304: addiu       $s1, $s3, 0x14
    ctx->r17 = ADD32(ctx->r19, 0X14);
        goto L_8023E374;
    // 0x8023E304: addiu       $s1, $s3, 0x14
    ctx->r17 = ADD32(ctx->r19, 0X14);
L_8023E308:
    // 0x8023E308: addiu       $s2, $s3, 0x480
    ctx->r18 = ADD32(ctx->r19, 0X480);
    // 0x8023E30C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023E310: addiu       $s0, $s3, 0x478
    ctx->r16 = ADD32(ctx->r19, 0X478);
    // 0x8023E314: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023E318: lui         $v0, 0xFF3F
    ctx->r2 = S32(0XFF3F << 16);
    // 0x8023E31C: sw          $v0, 0x484($s3)
    MEM_W(0X484, ctx->r19) = ctx->r2;
    // 0x8023E320: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8023E324: sw          $zero, 0x480($s3)
    MEM_W(0X480, ctx->r19) = 0;
    // 0x8023E328: jal         0x8004DD04
    // 0x8023E32C: sw          $v0, 0x488($s3)
    MEM_W(0X488, ctx->r19) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x8023E32C: sw          $v0, 0x488($s3)
    MEM_W(0X488, ctx->r19) = ctx->r2;
    after_2:
    // 0x8023E330: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023E334: jal         0x8004EC38
    // 0x8023E338: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x8023E338: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8023E33C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023E340: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023E344: jal         0x8004DEE8
    // 0x8023E348: andi        $s1, $v0, 0xFFF
    ctx->r17 = ctx->r2 & 0XFFF;
    func_8004DEE8_292E8(rdram, ctx);
        goto after_4;
    // 0x8023E348: andi        $s1, $v0, 0xFFF
    ctx->r17 = ctx->r2 & 0XFFF;
    after_4:
    // 0x8023E34C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023E350: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023E354: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x8023E358: addiu       $v0, $v0, -0x100
    ctx->r2 = ADD32(ctx->r2, -0X100);
    // 0x8023E35C: sll         $v0, $v0, 20
    ctx->r2 = S32(ctx->r2 << 20);
    // 0x8023E360: sra         $a3, $v0, 16
    ctx->r7 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023E364: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8023E368: jal         0x8004DBA0
    // 0x8023E36C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_5;
    // 0x8023E36C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_5:
    // 0x8023E370: addiu       $s1, $s3, 0x14
    ctx->r17 = ADD32(ctx->r19, 0X14);
L_8023E374:
    // 0x8023E374: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023E378: lh          $a2, 0x56($s3)
    ctx->r6 = MEM_H(ctx->r19, 0X56);
    // 0x8023E37C: addiu       $s0, $s4, 0x38
    ctx->r16 = ADD32(ctx->r20, 0X38);
    // 0x8023E380: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023E384: jal         0x8004F820
    // 0x8023E388: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x8023E388: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_6:
    // 0x8023E38C: lhu         $v1, 0x56($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X56);
    // 0x8023E390: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023E394: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023E398: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023E39C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023E3A0: jal         0x8004DEE8
    // 0x8023E3A4: sh          $v1, 0x56($s3)
    MEM_H(0X56, ctx->r19) = ctx->r3;
    func_8004DEE8_292E8(rdram, ctx);
        goto after_7;
    // 0x8023E3A4: sh          $v1, 0x56($s3)
    MEM_H(0X56, ctx->r19) = ctx->r3;
    after_7:
    // 0x8023E3A8: lh          $v1, 0x4($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X4);
    // 0x8023E3AC: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8023E3B0: divu        $zero, $v0, $v1
    lo = S32(U32(ctx->r2) / U32(ctx->r3)); hi = S32(U32(ctx->r2) % U32(ctx->r3));
    // 0x8023E3B4: bne         $v1, $zero, L_8023E3C0
    if (ctx->r3 != 0) {
        // 0x8023E3B8: nop
    
            goto L_8023E3C0;
    }
    // 0x8023E3B8: nop

    // 0x8023E3BC: break       7
    do_break(2149835708);
L_8023E3C0:
    // 0x8023E3C0: mflo        $v0
    ctx->r2 = lo;
    // 0x8023E3C4: addiu       $a0, $zero, 0x1D5
    ctx->r4 = ADD32(0, 0X1D5);
    // 0x8023E3C8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023E3CC: jal         0x8002A33C
    // 0x8023E3D0: sh          $v0, 0x4C($s3)
    MEM_H(0X4C, ctx->r19) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x8023E3D0: sh          $v0, 0x4C($s3)
    MEM_H(0X4C, ctx->r19) = ctx->r2;
    after_8:
    // 0x8023E3D4: j           L_8023E64C
    // 0x8023E3D8: nop

        goto L_8023E64C;
    // 0x8023E3D8: nop

L_8023E3DC:
    // 0x8023E3DC: lhu         $t0, 0x444($s3)
    ctx->r8 = MEM_HU(ctx->r19, 0X444);
    // 0x8023E3E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8023E3E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023E3E8: lhu         $v1, 0x444($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X444);
    // 0x8023E3EC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023E3F0: lhu         $a1, 0x4C($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X4C);
    // 0x8023E3F4: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x8023E3F8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023E3FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023E400: sh          $v0, 0x4E($s3)
    MEM_H(0X4E, ctx->r19) = ctx->r2;
    // 0x8023E404: lhu         $a2, 0x4E($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X4E);
    // 0x8023E408: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8023E40C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8023E410: sh          $t0, 0x444($s3)
    MEM_H(0X444, ctx->r19) = ctx->r8;
    // 0x8023E414: sll         $a2, $a2, 20
    ctx->r6 = S32(ctx->r6 << 20);
    // 0x8023E418: jal         0x8004DA90
    // 0x8023E41C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_9;
    // 0x8023E41C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_9:
    // 0x8023E420: lb          $v0, 0xA7($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XA7);
    // 0x8023E424: bgez        $v0, L_8023E474
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023E428: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_8023E474;
    }
    // 0x8023E428: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8023E42C: lbu         $v1, 0xAC($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XAC);
    // 0x8023E430: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8023E434: beq         $v0, $a0, L_8023E474
    if (ctx->r2 == ctx->r4) {
        // 0x8023E438: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8023E474;
    }
    // 0x8023E438: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8023E43C: sb          $v0, 0xAC($s3)
    MEM_B(0XAC, ctx->r19) = ctx->r2;
    // 0x8023E440: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023E444: bne         $v0, $a0, L_8023E474
    if (ctx->r2 != ctx->r4) {
        // 0x8023E448: nop
    
            goto L_8023E474;
    }
    // 0x8023E448: nop

    // 0x8023E44C: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
    // 0x8023E450: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8023E454: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8023E458: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023E45C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023E460: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023E464: lbu         $v1, 0xC($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XC);
    // 0x8023E468: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023E46C: sb          $v0, 0x492($s3)
    MEM_B(0X492, ctx->r19) = ctx->r2;
    // 0x8023E470: sh          $v1, 0x448($s3)
    MEM_H(0X448, ctx->r19) = ctx->r3;
L_8023E474:
    // 0x8023E474: jal         0x8003E934
    // 0x8023E478: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_10;
    // 0x8023E478: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_10:
    // 0x8023E47C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023E480: lh          $v1, 0x16($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X16);
    // 0x8023E484: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023E488: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023E48C: slt         $v1, $v0, $v1
    ctx->r3 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023E490: beq         $v1, $zero, L_8023E64C
    if (ctx->r3 == 0) {
        // 0x8023E494: sll         $v0, $v0, 16
        ctx->r2 = S32(ctx->r2 << 16);
            goto L_8023E64C;
    }
    // 0x8023E494: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023E498: lbu         $v1, 0xA($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XA);
    // 0x8023E49C: addiu       $s2, $zero, 0x5
    ctx->r18 = ADD32(0, 0X5);
    // 0x8023E4A0: sh          $a0, 0x16($s3)
    MEM_H(0X16, ctx->r19) = ctx->r4;
    // 0x8023E4A4: sw          $v0, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r2;
    // 0x8023E4A8: sb          $s2, 0xAC($s3)
    MEM_B(0XAC, ctx->r19) = ctx->r18;
    // 0x8023E4AC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023E4B0: sb          $v1, 0xA($s3)
    MEM_B(0XA, ctx->r19) = ctx->r3;
    // 0x8023E4B4: sh          $zero, 0x4($s4)
    MEM_H(0X4, ctx->r20) = 0;
    // 0x8023E4B8: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
    // 0x8023E4BC: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8023E4C0: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8023E4C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023E4C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023E4CC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023E4D0: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x8023E4D4: sb          $zero, 0x52($s4)
    MEM_B(0X52, ctx->r20) = 0;
    // 0x8023E4D8: jal         0x8004F144
    // 0x8023E4DC: sh          $v0, 0x8($s4)
    MEM_H(0X8, ctx->r20) = ctx->r2;
    func_8004F144_2A544(rdram, ctx);
        goto after_11;
    // 0x8023E4DC: sh          $v0, 0x8($s4)
    MEM_H(0X8, ctx->r20) = ctx->r2;
    after_11:
    // 0x8023E4E0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8023E4E4: beq         $s1, $zero, L_8023E64C
    if (ctx->r17 == 0) {
        // 0x8023E4E8: addiu       $a0, $s1, 0x38
        ctx->r4 = ADD32(ctx->r17, 0X38);
            goto L_8023E64C;
    }
    // 0x8023E4E8: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x8023E4EC: addiu       $s0, $s3, 0x14
    ctx->r16 = ADD32(ctx->r19, 0X14);
    // 0x8023E4F0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023E4F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023E4F8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023E4FC: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8023E500: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8023E504: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8023E508: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023E50C: sb          $s2, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r18;
    // 0x8023E510: jal         0x8009A3B4
    // 0x8023E514: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x8023E514: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    after_12:
    // 0x8023E518: jal         0x8003E934
    // 0x8023E51C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_13;
    // 0x8023E51C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_13:
    // 0x8023E520: addiu       $a0, $zero, 0x1E0
    ctx->r4 = ADD32(0, 0X1E0);
    // 0x8023E524: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023E528: jal         0x8002A33C
    // 0x8023E52C: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_14;
    // 0x8023E52C: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    after_14:
    // 0x8023E530: addiu       $a0, $zero, 0x1D6
    ctx->r4 = ADD32(0, 0X1D6);
    // 0x8023E534: jal         0x8002A33C
    // 0x8023E538: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_15;
    // 0x8023E538: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_15:
    // 0x8023E53C: j           L_8023E64C
    // 0x8023E540: nop

        goto L_8023E64C;
    // 0x8023E540: nop

L_8023E544:
    // 0x8023E544: lhu         $v0, 0x444($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X444);
    // 0x8023E548: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023E54C: bne         $v0, $zero, L_8023E5F8
    if (ctx->r2 != 0) {
        // 0x8023E550: nop
    
            goto L_8023E5F8;
    }
    // 0x8023E550: nop

    // 0x8023E554: jal         0x8004F144
    // 0x8023E558: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_16;
    // 0x8023E558: nop

    after_16:
    // 0x8023E55C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8023E560: beq         $s1, $zero, L_8023E5F8
    if (ctx->r17 == 0) {
        // 0x8023E564: addiu       $s0, $s1, 0x38
        ctx->r16 = ADD32(ctx->r17, 0X38);
            goto L_8023E5F8;
    }
    // 0x8023E564: addiu       $s0, $s1, 0x38
    ctx->r16 = ADD32(ctx->r17, 0X38);
    // 0x8023E568: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023E56C: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x8023E570: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023E574: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023E578: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8023E57C: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x8023E580: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8023E584: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8023E588: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8023E58C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023E590: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x8023E594: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023E598: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x8023E59C: jal         0x8009A3B4
    // 0x8023E5A0: sb          $zero, 0xE($s1)
    MEM_B(0XE, ctx->r17) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_17;
    // 0x8023E5A0: sb          $zero, 0xE($s1)
    MEM_B(0XE, ctx->r17) = 0;
    after_17:
    // 0x8023E5A4: jal         0x800A3450
    // 0x8023E5A8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_18;
    // 0x8023E5A8: nop

    after_18:
    // 0x8023E5AC: lhu         $v1, 0x38($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X38);
    // 0x8023E5B0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8023E5B4: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x8023E5B8: addiu       $v1, $v1, -0x100
    ctx->r3 = ADD32(ctx->r3, -0X100);
    // 0x8023E5BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023E5C0: jal         0x8003E934
    // 0x8023E5C4: sh          $v1, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_19;
    // 0x8023E5C4: sh          $v1, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r3;
    after_19:
    // 0x8023E5C8: jal         0x800A3450
    // 0x8023E5CC: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_20;
    // 0x8023E5CC: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    after_20:
    // 0x8023E5D0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x8023E5D4: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    // 0x8023E5D8: lhu         $v1, 0x3C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3C);
    // 0x8023E5DC: addiu       $a2, $zero, 0xC00
    ctx->r6 = ADD32(0, 0XC00);
    // 0x8023E5E0: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8023E5E4: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x8023E5E8: addiu       $v1, $v1, -0x100
    ctx->r3 = ADD32(ctx->r3, -0X100);
    // 0x8023E5EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023E5F0: jal         0x8003491C
    // 0x8023E5F4: sh          $v1, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r3;
    func_8003491C_FD1C(rdram, ctx);
        goto after_21;
    // 0x8023E5F4: sh          $v1, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r3;
    after_21:
L_8023E5F8:
    // 0x8023E5F8: lhu         $v0, 0x4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X4);
    // 0x8023E5FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023E600: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
    // 0x8023E604: lb          $v0, 0xA7($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XA7);
    // 0x8023E608: bgez        $v0, L_8023E64C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023E60C: nop
    
            goto L_8023E64C;
    }
    // 0x8023E60C: nop

    // 0x8023E610: lbu         $v0, 0xA($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XA);
    // 0x8023E614: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023E618: sb          $v0, 0xA($s3)
    MEM_B(0XA, ctx->r19) = ctx->r2;
    // 0x8023E61C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023E620: j           L_8023E64C
    // 0x8023E624: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
        goto L_8023E64C;
    // 0x8023E624: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
L_8023E628:
    // 0x8023E628: lhu         $v0, 0x444($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X444);
    // 0x8023E62C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023E630: sh          $v0, 0x444($s3)
    MEM_H(0X444, ctx->r19) = ctx->r2;
    // 0x8023E634: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023E638: bgez        $v0, L_8023E64C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023E63C: nop
    
            goto L_8023E64C;
    }
    // 0x8023E63C: nop

    // 0x8023E640: lhu         $v0, 0x440($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X440);
    // 0x8023E644: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023E648: sh          $v0, 0x440($s3)
    MEM_H(0X440, ctx->r19) = ctx->r2;
L_8023E64C:
    // 0x8023E64C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8023E650: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8023E654: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023E658: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023E65C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023E660: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023E664: jr          $ra
    // 0x8023E668: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023E668: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80233008_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023300C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233010: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80233014: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233018: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023301C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233020: lw          $v0, 0x3950($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3950);
    // 0x80233024: jalr        $v0
    // 0x80233028: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80233028: nop

    after_0:
    // 0x8023302C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233030: jr          $ra
    // 0x80233034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EEB0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EEB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EEB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EEB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EEBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EEC0: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x8022EEC4: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022EEC8: jal         0x8004FA7C
    // 0x8022EECC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022EECC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8022EED0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022EED4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022EED8: bne         $v0, $zero, L_8022EEE8
    if (ctx->r2 != 0) {
        // 0x8022EEDC: nop
    
            goto L_8022EEE8;
    }
    // 0x8022EEDC: nop

    // 0x8022EEE0: lhu         $v0, 0x366($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X366);
    // 0x8022EEE4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022EEE8:
    // 0x8022EEE8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022EEEC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022EEF0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EEF4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022EEF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EEFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EF00: jr          $ra
    // 0x8022EF04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EF04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802256C0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802256C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802256C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802256C8: jal         0x8006033C
    // 0x802256CC: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802256CC: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_0:
    // 0x802256D0: beq         $v0, $zero, L_802256E0
    if (ctx->r2 == 0) {
        // 0x802256D4: nop
    
            goto L_802256E0;
    }
    // 0x802256D4: nop

    // 0x802256D8: jal         0x80060690
    // 0x802256DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x802256DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_802256E0:
    // 0x802256E0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802256E4: jr          $ra
    // 0x802256E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802256E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023248C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023248C: jr          $ra
    // 0x80232490: nop

    TRACE_RETURN()
    return;
    // 0x80232490: nop

;}
RECOMP_FUNC void func_80245AB0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80245AB0: jr          $ra
    // 0x80245AB4: nop

    TRACE_RETURN()
    return;
    // 0x80245AB4: nop

;}
RECOMP_FUNC void func_80246D70_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80246D70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80246D74: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80246D78: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80246D7C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80246D80: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80246D84: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80246D88: lw          $v0, 0x4D58($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4D58);
    // 0x80246D8C: jalr        $v0
    // 0x80246D90: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80246D90: nop

    after_0:
    // 0x80246D94: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80246D98: jr          $ra
    // 0x80246D9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80246D9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024D520_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024D520: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024D524: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024D528: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8024D52C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024D530: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024D534: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024D538: lw          $v0, 0x5C30($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5C30);
    // 0x8024D53C: jalr        $v0
    // 0x8024D540: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024D540: nop

    after_0:
    // 0x8024D544: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024D548: jr          $ra
    // 0x8024D54C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024D54C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023F324_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023F324: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023F328: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023F32C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023F330: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023F334: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023F338: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023F33C: lw          $v1, 0x458($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X458);
    // 0x8023F340: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8023F344: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8023F348: and         $s2, $v1, $v0
    ctx->r18 = ctx->r3 & ctx->r2;
    // 0x8023F34C: beq         $s2, $zero, L_8023F628
    if (ctx->r18 == 0) {
        // 0x8023F350: addiu       $s0, $s1, 0x440
        ctx->r16 = ADD32(ctx->r17, 0X440);
            goto L_8023F628;
    }
    // 0x8023F350: addiu       $s0, $s1, 0x440
    ctx->r16 = ADD32(ctx->r17, 0X440);
    // 0x8023F354: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x8023F358: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023F35C: beql        $v0, $zero, L_8023F620
    if (ctx->r2 == 0) {
        // 0x8023F360: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_8023F620;
    }
    goto skip_0;
    // 0x8023F360: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x8023F364: lhu         $v0, 0x6E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6E);
    // 0x8023F368: lhu         $v1, 0x6E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X6E);
    // 0x8023F36C: subu        $v0, $v0, $s2
    ctx->r2 = SUB32(ctx->r2, ctx->r18);
    // 0x8023F370: sh          $v0, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r2;
    // 0x8023F374: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023F378: bgtz        $v0, L_8023F3C8
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023F37C: sh          $v1, 0xB2($s1)
        MEM_H(0XB2, ctx->r17) = ctx->r3;
            goto L_8023F3C8;
    }
    // 0x8023F37C: sh          $v1, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = ctx->r3;
    // 0x8023F380: jal         0x8006FF58
    // 0x8023F384: nop

    func_8006FF58_4B358(rdram, ctx);
        goto after_0;
    // 0x8023F384: nop

    after_0:
    // 0x8023F388: beq         $v0, $zero, L_8023F3C4
    if (ctx->r2 == 0) {
        // 0x8023F38C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023F3C4;
    }
    // 0x8023F38C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023F390: lhu         $v1, 0x440($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X440);
    // 0x8023F394: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8023F398: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x8023F39C: lw          $a0, 0x3C60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3C60);
    // 0x8023F3A0: sh          $zero, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = 0;
    // 0x8023F3A4: sh          $zero, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = 0;
    // 0x8023F3A8: andi        $v1, $v1, 0xFFF3
    ctx->r3 = ctx->r3 & 0XFFF3;
    // 0x8023F3AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023F3B0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023F3B4: sh          $v1, 0x440($s1)
    MEM_H(0X440, ctx->r17) = ctx->r3;
    // 0x8023F3B8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023F3BC: j           L_8023F3C8
    // 0x8023F3C0: lbu         $s2, 0x9($v0)
    ctx->r18 = MEM_BU(ctx->r2, 0X9);
        goto L_8023F3C8;
    // 0x8023F3C0: lbu         $s2, 0x9($v0)
    ctx->r18 = MEM_BU(ctx->r2, 0X9);
L_8023F3C4:
    // 0x8023F3C4: sh          $v0, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r2;
L_8023F3C8:
    // 0x8023F3C8: lh          $v0, 0x7A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X7A);
    // 0x8023F3CC: bgez        $v0, L_8023F414
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023F3D0: slti        $v0, $v0, 0x3
        ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
            goto L_8023F414;
    }
    // 0x8023F3D0: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8023F3D4: lw          $v0, 0x74($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X74);
    // 0x8023F3D8: lh          $v1, 0x6E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X6E);
    // 0x8023F3DC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023F3E0: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023F3E4: beq         $v1, $zero, L_8023F40C
    if (ctx->r3 == 0) {
        // 0x8023F3E8: addiu       $a0, $zero, 0x1E1
        ctx->r4 = ADD32(0, 0X1E1);
            goto L_8023F40C;
    }
    // 0x8023F3E8: addiu       $a0, $zero, 0x1E1
    ctx->r4 = ADD32(0, 0X1E1);
    // 0x8023F3EC: lw          $v1, 0x74($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X74);
    // 0x8023F3F0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8023F3F4: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8023F3F8: sh          $zero, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = 0;
    // 0x8023F3FC: sh          $v0, 0x78($s0)
    MEM_H(0X78, ctx->r16) = ctx->r2;
    // 0x8023F400: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8023F404: jal         0x8002A33C
    // 0x8023F408: sw          $v1, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8023F408: sw          $v1, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r3;
    after_1:
L_8023F40C:
    // 0x8023F40C: lh          $v0, 0x7A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X7A);
    // 0x8023F410: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
L_8023F414:
    // 0x8023F414: beq         $v0, $zero, L_8023F57C
    if (ctx->r2 == 0) {
        // 0x8023F418: lui         $a0, 0x6666
        ctx->r4 = S32(0X6666 << 16);
            goto L_8023F57C;
    }
    // 0x8023F418: lui         $a0, 0x6666
    ctx->r4 = S32(0X6666 << 16);
    // 0x8023F41C: lhu         $v1, 0xB0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XB0);
    // 0x8023F420: ori         $a0, $a0, 0x6667
    ctx->r4 = ctx->r4 | 0X6667;
    // 0x8023F424: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023F428: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023F42C: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023F430: lh          $a0, 0x6E($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X6E);
    // 0x8023F434: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8023F438: mfhi        $a2
    ctx->r6 = hi;
    // 0x8023F43C: sra         $v0, $a2, 2
    ctx->r2 = S32(SIGNED(ctx->r6) >> 2);
    // 0x8023F440: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023F444: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023F448: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023F44C: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8023F450: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023F454: slt         $a0, $a0, $v1
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023F458: beq         $a0, $zero, L_8023F490
    if (ctx->r4 == 0) {
        // 0x8023F45C: nop
    
            goto L_8023F490;
    }
    // 0x8023F45C: nop

    // 0x8023F460: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023F464: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x8023F468: bne         $v0, $zero, L_8023F490
    if (ctx->r2 != 0) {
        // 0x8023F46C: addiu       $a0, $zero, 0x1E5
        ctx->r4 = ADD32(0, 0X1E5);
            goto L_8023F490;
    }
    // 0x8023F46C: addiu       $a0, $zero, 0x1E5
    ctx->r4 = ADD32(0, 0X1E5);
    // 0x8023F470: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023F474: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8023F478: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8023F47C: sh          $v1, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r3;
    // 0x8023F480: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x8023F484: sh          $v1, 0x78($s0)
    MEM_H(0X78, ctx->r16) = ctx->r3;
    // 0x8023F488: j           L_8023F574
    // 0x8023F48C: ori         $v0, $v0, 0x800
    ctx->r2 = ctx->r2 | 0X800;
        goto L_8023F574;
    // 0x8023F48C: ori         $v0, $v0, 0x800
    ctx->r2 = ctx->r2 | 0X800;
L_8023F490:
    // 0x8023F490: lhu         $v1, 0xB0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XB0);
    // 0x8023F494: lui         $a0, 0x6666
    ctx->r4 = S32(0X6666 << 16);
    // 0x8023F498: ori         $a0, $a0, 0x6667
    ctx->r4 = ctx->r4 | 0X6667;
    // 0x8023F49C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023F4A0: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023F4A4: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023F4A8: lh          $a0, 0x6E($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X6E);
    // 0x8023F4AC: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8023F4B0: mfhi        $a2
    ctx->r6 = hi;
    // 0x8023F4B4: sra         $v0, $a2, 2
    ctx->r2 = S32(SIGNED(ctx->r6) >> 2);
    // 0x8023F4B8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023F4BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023F4C0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023F4C4: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8023F4C8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023F4CC: slt         $a0, $a0, $v1
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023F4D0: beq         $a0, $zero, L_8023F508
    if (ctx->r4 == 0) {
        // 0x8023F4D4: nop
    
            goto L_8023F508;
    }
    // 0x8023F4D4: nop

    // 0x8023F4D8: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023F4DC: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8023F4E0: bne         $v0, $zero, L_8023F508
    if (ctx->r2 != 0) {
        // 0x8023F4E4: addiu       $a0, $zero, 0x1E6
        ctx->r4 = ADD32(0, 0X1E6);
            goto L_8023F508;
    }
    // 0x8023F4E4: addiu       $a0, $zero, 0x1E6
    ctx->r4 = ADD32(0, 0X1E6);
    // 0x8023F4E8: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023F4EC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8023F4F0: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8023F4F4: sh          $v1, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r3;
    // 0x8023F4F8: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x8023F4FC: sh          $v1, 0x78($s0)
    MEM_H(0X78, ctx->r16) = ctx->r3;
    // 0x8023F500: j           L_8023F574
    // 0x8023F504: ori         $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 | 0X1000;
        goto L_8023F574;
    // 0x8023F504: ori         $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 | 0X1000;
L_8023F508:
    // 0x8023F508: lhu         $v1, 0xB0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XB0);
    // 0x8023F50C: lui         $a0, 0x6666
    ctx->r4 = S32(0X6666 << 16);
    // 0x8023F510: ori         $a0, $a0, 0x6667
    ctx->r4 = ctx->r4 | 0X6667;
    // 0x8023F514: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023F518: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023F51C: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023F520: lh          $a0, 0x6E($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X6E);
    // 0x8023F524: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8023F528: mfhi        $a2
    ctx->r6 = hi;
    // 0x8023F52C: sra         $v0, $a2, 2
    ctx->r2 = S32(SIGNED(ctx->r6) >> 2);
    // 0x8023F530: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023F534: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023F538: sra         $v0, $v0, 15
    ctx->r2 = S32(SIGNED(ctx->r2) >> 15);
    // 0x8023F53C: slt         $a0, $a0, $v0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023F540: beq         $a0, $zero, L_8023F57C
    if (ctx->r4 == 0) {
        // 0x8023F544: nop
    
            goto L_8023F57C;
    }
    // 0x8023F544: nop

    // 0x8023F548: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023F54C: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x8023F550: bne         $v0, $zero, L_8023F57C
    if (ctx->r2 != 0) {
        // 0x8023F554: addiu       $a0, $zero, 0x1E7
        ctx->r4 = ADD32(0, 0X1E7);
            goto L_8023F57C;
    }
    // 0x8023F554: addiu       $a0, $zero, 0x1E7
    ctx->r4 = ADD32(0, 0X1E7);
    // 0x8023F558: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023F55C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8023F560: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8023F564: sh          $v1, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r3;
    // 0x8023F568: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x8023F56C: sh          $v1, 0x78($s0)
    MEM_H(0X78, ctx->r16) = ctx->r3;
    // 0x8023F570: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
L_8023F574:
    // 0x8023F574: jal         0x8002A33C
    // 0x8023F578: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8023F578: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    after_2:
L_8023F57C:
    // 0x8023F57C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023F580: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8023F584: beq         $v0, $zero, L_8023F5EC
    if (ctx->r2 == 0) {
        // 0x8023F588: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8023F5EC;
    }
    // 0x8023F588: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8023F58C: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x8023F590: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x8023F594: addu        $a0, $v0, $s2
    ctx->r4 = ADD32(ctx->r2, ctx->r18);
    // 0x8023F598: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x8023F59C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8023F5A0: bne         $v1, $zero, L_8023F5D8
    if (ctx->r3 != 0) {
        // 0x8023F5A4: sh          $a0, 0xA($s0)
        MEM_H(0XA, ctx->r16) = ctx->r4;
            goto L_8023F5D8;
    }
    // 0x8023F5A4: sh          $a0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r4;
    // 0x8023F5A8: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8023F5AC: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8023F5B0: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8023F5B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023F5B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023F5BC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023F5C0: lbu         $v1, 0x9($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X9);
    // 0x8023F5C4: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8023F5C8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023F5CC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023F5D0: bne         $v0, $zero, L_8023F5F8
    if (ctx->r2 != 0) {
        // 0x8023F5D4: addiu       $a0, $zero, 0x7FFF
        ctx->r4 = ADD32(0, 0X7FFF);
            goto L_8023F5F8;
    }
    // 0x8023F5D4: addiu       $a0, $zero, 0x7FFF
    ctx->r4 = ADD32(0, 0X7FFF);
L_8023F5D8:
    // 0x8023F5D8: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8023F5DC: jal         0x8002A33C
    // 0x8023F5E0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8023F5E0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x8023F5E4: j           L_8023F5F4
    // 0x8023F5E8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8023F5F4;
    // 0x8023F5E8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8023F5EC:
    // 0x8023F5EC: jal         0x8002A33C
    // 0x8023F5F0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8023F5F0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_4:
L_8023F5F4:
    // 0x8023F5F4: addiu       $a0, $zero, 0x7FFF
    ctx->r4 = ADD32(0, 0X7FFF);
L_8023F5F8:
    // 0x8023F5F8: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x8023F5FC: addiu       $v0, $s1, 0x78
    ctx->r2 = ADD32(ctx->r17, 0X78);
L_8023F600:
    // 0x8023F600: sh          $a0, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r4;
    // 0x8023F604: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8023F608: bgez        $v1, L_8023F600
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8023F60C: addiu       $v0, $v0, -0x8
        ctx->r2 = ADD32(ctx->r2, -0X8);
            goto L_8023F600;
    }
    // 0x8023F60C: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8023F610: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x8023F614: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023F618: j           L_8023F628
    // 0x8023F61C: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
        goto L_8023F628;
    // 0x8023F61C: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
L_8023F620:
    // 0x8023F620: jal         0x8002A33C
    // 0x8023F624: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8023F624: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_5:
L_8023F628:
    // 0x8023F628: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023F62C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F630: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023F634: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023F638: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023F63C: jr          $ra
    // 0x8023F640: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023F640: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023F644: nop

    // 0x8023F648: nop

    // 0x8023F64C: nop

;}
RECOMP_FUNC void func_8024C2C0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024C2C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024C2C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024C2C8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8024C2CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024C2D0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024C2D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024C2D8: lw          $v0, 0x549C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X549C);
    // 0x8024C2DC: jalr        $v0
    // 0x8024C2E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024C2E0: nop

    after_0:
    // 0x8024C2E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024C2E8: jr          $ra
    // 0x8024C2EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024C2EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A0D0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A0D0: jr          $ra
    // 0x8022A0D4: nop

    TRACE_RETURN()
    return;
    // 0x8022A0D4: nop

;}
RECOMP_FUNC void func_802496F4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802496F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802496F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802496FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80249700: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80249704: jal         0x80249DD8
    // 0x80249708: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    func_80249DD8_ovl28(rdram, ctx);
        goto after_0;
    // 0x80249708: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    after_0:
    // 0x8024970C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80249710: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x80249714: jal         0x80249E34
    // 0x80249718: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    func_80249E34_ovl28(rdram, ctx);
        goto after_1;
    // 0x80249718: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    after_1:
    // 0x8024971C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80249720: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80249724: jr          $ra
    // 0x80249728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80249728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237DB0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237DB0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80237DB4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80237DB8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80237DBC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80237DC0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80237DC4: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80237DC8: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x80237DCC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80237DD0: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x80237DD4: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x80237DD8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80237DDC: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x80237DE0: beq         $a0, $v0, L_80237DFC
    if (ctx->r4 == ctx->r2) {
        // 0x80237DE4: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_80237DFC;
    }
    // 0x80237DE4: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80237DE8: bne         $a0, $v0, L_80237DF8
    if (ctx->r4 != ctx->r2) {
        // 0x80237DEC: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80237DF8;
    }
    // 0x80237DEC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80237DF0: j           L_80237DFC
    // 0x80237DF4: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_80237DFC;
    // 0x80237DF4: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_80237DF8:
    // 0x80237DF8: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80237DFC:
    // 0x80237DFC: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80237E00: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80237E04: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80237E08: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80237E0C: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80237E10: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80237E14: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80237E18: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80237E1C: beq         $a0, $v1, L_80237E44
    if (ctx->r4 == ctx->r3) {
        // 0x80237E20: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80237E44;
    }
    // 0x80237E20: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80237E24: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80237E28: jal         0x8003B85C
    // 0x80237E2C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80237E2C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x80237E30: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80237E34: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80237E38: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80237E3C: jal         0x8003B840
    // 0x80237E40: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80237E40: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_80237E44:
    // 0x80237E44: lb          $a0, 0x11($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X11);
    // 0x80237E48: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80237E4C: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x80237E50: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80237E54: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x80237E58: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x80237E5C: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x80237E60: beq         $v1, $v0, L_80237E7C
    if (ctx->r3 == ctx->r2) {
        // 0x80237E64: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_80237E7C;
    }
    // 0x80237E64: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80237E68: bne         $v1, $v0, L_80237E78
    if (ctx->r3 != ctx->r2) {
        // 0x80237E6C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80237E78;
    }
    // 0x80237E6C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80237E70: j           L_80237E7C
    // 0x80237E74: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
        goto L_80237E7C;
    // 0x80237E74: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
L_80237E78:
    // 0x80237E78: sb          $v0, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r2;
L_80237E7C:
    // 0x80237E7C: lb          $v1, 0x11($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X11);
    // 0x80237E80: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80237E84: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80237E88: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80237E8C: lb          $v1, 0x10($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X10);
    // 0x80237E90: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x80237E94: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80237E98: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80237E9C: beq         $a0, $v1, L_80237EC4
    if (ctx->r4 == ctx->r3) {
        // 0x80237EA0: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80237EC4;
    }
    // 0x80237EA0: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80237EA4: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80237EA8: jal         0x8003B85C
    // 0x80237EAC: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80237EAC: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x80237EB0: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80237EB4: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x80237EB8: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x80237EBC: jal         0x8003B840
    // 0x80237EC0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80237EC0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_80237EC4:
    // 0x80237EC4: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80237EC8: sb          $v0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r2;
    // 0x80237ECC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80237ED0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80237ED4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80237ED8: jr          $ra
    // 0x80237EDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80237EDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022A0D8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A0D8: jr          $ra
    // 0x8022A0DC: nop

    TRACE_RETURN()
    return;
    // 0x8022A0DC: nop

;}
RECOMP_FUNC void func_8022A89C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A89C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A8A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A8A4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022A8A8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A8AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A8B0: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x8022A8B4: bne         $v0, $zero, L_8022A9E0
    if (ctx->r2 != 0) {
        // 0x8022A8B8: nop
    
            goto L_8022A9E0;
    }
    // 0x8022A8B8: nop

    // 0x8022A8BC: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    // 0x8022A8C0: jal         0x8004F418
    // 0x8022A8C4: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022A8C4: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    after_0:
    // 0x8022A8C8: lw          $a0, 0x28($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X28);
    // 0x8022A8CC: jal         0x8004F684
    // 0x8022A8D0: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_1;
    // 0x8022A8D0: nop

    after_1:
    // 0x8022A8D4: jal         0x8004F418
    // 0x8022A8D8: lw          $a0, 0x2C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2C);
    func_8004F418_2A818(rdram, ctx);
        goto after_2;
    // 0x8022A8D8: lw          $a0, 0x2C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2C);
    after_2:
    // 0x8022A8DC: jal         0x8004F418
    // 0x8022A8E0: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    func_8004F418_2A818(rdram, ctx);
        goto after_3;
    // 0x8022A8E0: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    after_3:
    // 0x8022A8E4: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
L_8022A8E8:
    // 0x8022A8E8: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x8022A8EC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022A8F0: jal         0x8004F4F8
    // 0x8022A8F4: lw          $a0, 0x24($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X24);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_4;
    // 0x8022A8F4: lw          $a0, 0x24($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X24);
    after_4:
    // 0x8022A8F8: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8022A8FC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022A900: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022A904: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022A908: slti        $v0, $v0, 0xA
    ctx->r2 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x8022A90C: bne         $v0, $zero, L_8022A8E8
    if (ctx->r2 != 0) {
        // 0x8022A910: sll         $v0, $s0, 24
        ctx->r2 = S32(ctx->r16 << 24);
            goto L_8022A8E8;
    }
    // 0x8022A910: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
    // 0x8022A914: lw          $a0, 0x4C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4C);
    // 0x8022A918: jal         0x8004F418
    // 0x8022A91C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_5;
    // 0x8022A91C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    after_5:
    // 0x8022A920: lw          $a0, 0x50($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X50);
    // 0x8022A924: jal         0x8004F418
    // 0x8022A928: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_6;
    // 0x8022A928: nop

    after_6:
    // 0x8022A92C: jal         0x8004F418
    // 0x8022A930: lw          $a0, 0x54($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X54);
    func_8004F418_2A818(rdram, ctx);
        goto after_7;
    // 0x8022A930: lw          $a0, 0x54($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X54);
    after_7:
    // 0x8022A934: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
L_8022A938:
    // 0x8022A938: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x8022A93C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022A940: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // 0x8022A944: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8022A948: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022A94C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022A950: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022A954: slti        $v0, $v0, 0xD
    ctx->r2 = SIGNED(ctx->r2) < 0XD ? 1 : 0;
    // 0x8022A958: bne         $v0, $zero, L_8022A938
    if (ctx->r2 != 0) {
        // 0x8022A95C: sll         $v0, $s0, 24
        ctx->r2 = S32(ctx->r16 << 24);
            goto L_8022A938;
    }
    // 0x8022A95C: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
    // 0x8022A960: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022A964: jal         0x8005FA7C
    // 0x8022A968: addiu       $a0, $a0, 0x2060
    ctx->r4 = ADD32(ctx->r4, 0X2060);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_8;
    // 0x8022A968: addiu       $a0, $a0, 0x2060
    ctx->r4 = ADD32(ctx->r4, 0X2060);
    after_8:
    // 0x8022A96C: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x8022A970: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022A974: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022A978: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022A97C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8022A980: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x8022A984: addiu       $v0, $zero, 0x500
    ctx->r2 = ADD32(0, 0X500);
    // 0x8022A988: sw          $v0, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->r2;
    // 0x8022A98C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A990: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A994: sb          $v0, 0x44A0($at)
    MEM_B(0X44A0, ctx->r1) = ctx->r2;
    // 0x8022A998: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A99C: sh          $zero, 0x44AC($at)
    MEM_H(0X44AC, ctx->r1) = 0;
    // 0x8022A9A0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A9A4: sh          $zero, 0x44AE($at)
    MEM_H(0X44AE, ctx->r1) = 0;
    // 0x8022A9A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A9AC: sw          $zero, 0x44A4($at)
    MEM_W(0X44A4, ctx->r1) = 0;
    // 0x8022A9B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A9B4: sw          $zero, 0x44A8($at)
    MEM_W(0X44A8, ctx->r1) = 0;
    // 0x8022A9B8: jal         0x80036B00
    // 0x8022A9BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_9;
    // 0x8022A9BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x8022A9C0: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022A9C4: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x8022A9C8: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    // 0x8022A9CC: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8022A9D0: jal         0x8022B6D0
    // 0x8022A9D4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    func_8022B6D0_ovl28(rdram, ctx);
        goto after_10;
    // 0x8022A9D4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    after_10:
    // 0x8022A9D8: j           L_8022A9F0
    // 0x8022A9DC: nop

        goto L_8022A9F0;
    // 0x8022A9DC: nop

L_8022A9E0:
    // 0x8022A9E0: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x8022A9E4: lw          $v0, 0x4C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4C);
    // 0x8022A9E8: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8022A9EC: sw          $v0, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->r2;
L_8022A9F0:
    // 0x8022A9F0: lbu         $a0, 0x6($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X6);
    // 0x8022A9F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A9F8: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022A9FC: beq         $v1, $v0, L_8022AA4C
    if (ctx->r3 == ctx->r2) {
        // 0x8022AA00: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022AA4C;
    }
    // 0x8022AA00: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022AA04: beql        $v0, $zero, L_8022AA1C
    if (ctx->r2 == 0) {
        // 0x8022AA08: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022AA1C;
    }
    goto skip_0;
    // 0x8022AA08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022AA0C: beq         $v1, $zero, L_8022AA34
    if (ctx->r3 == 0) {
        // 0x8022AA10: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022AA34;
    }
    // 0x8022AA10: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022AA14: j           L_8022AA9C
    // 0x8022AA18: nop

        goto L_8022AA9C;
    // 0x8022AA18: nop

L_8022AA1C:
    // 0x8022AA1C: beq         $v1, $v0, L_8022AA58
    if (ctx->r3 == ctx->r2) {
        // 0x8022AA20: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022AA58;
    }
    // 0x8022AA20: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022AA24: beq         $v1, $v0, L_8022AA80
    if (ctx->r3 == ctx->r2) {
        // 0x8022AA28: nop
    
            goto L_8022AA80;
    }
    // 0x8022AA28: nop

    // 0x8022AA2C: j           L_8022AA9C
    // 0x8022AA30: nop

        goto L_8022AA9C;
    // 0x8022AA30: nop

L_8022AA34:
    // 0x8022AA34: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022AA38: bne         $v1, $v0, L_8022AA9C
    if (ctx->r3 != ctx->r2) {
        // 0x8022AA3C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022AA9C;
    }
    // 0x8022AA3C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022AA40: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8022AA44: j           L_8022AA74
    // 0x8022AA48: sb          $v1, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r3;
        goto L_8022AA74;
    // 0x8022AA48: sb          $v1, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r3;
L_8022AA4C:
    // 0x8022AA4C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022AA50: j           L_8022AA9C
    // 0x8022AA54: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
        goto L_8022AA9C;
    // 0x8022AA54: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_8022AA58:
    // 0x8022AA58: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x8022AA5C: slti        $v0, $v0, 0xA0
    ctx->r2 = SIGNED(ctx->r2) < 0XA0 ? 1 : 0;
    // 0x8022AA60: bne         $v0, $zero, L_8022AA9C
    if (ctx->r2 != 0) {
        // 0x8022AA64: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_8022AA9C;
    }
    // 0x8022AA64: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x8022AA68: jal         0x80036B1C
    // 0x8022AA6C: ori         $a0, $a0, 0x4501
    ctx->r4 = ctx->r4 | 0X4501;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_11;
    // 0x8022AA6C: ori         $a0, $a0, 0x4501
    ctx->r4 = ctx->r4 | 0X4501;
    after_11:
    // 0x8022AA70: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
L_8022AA74:
    // 0x8022AA74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AA78: j           L_8022AA9C
    // 0x8022AA7C: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
        goto L_8022AA9C;
    // 0x8022AA7C: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_8022AA80:
    // 0x8022AA80: jal         0x80036B7C
    // 0x8022AA84: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_12;
    // 0x8022AA84: nop

    after_12:
    // 0x8022AA88: beq         $v0, $zero, L_8022AA9C
    if (ctx->r2 == 0) {
        // 0x8022AA8C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022AA9C;
    }
    // 0x8022AA8C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022AA90: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x8022AA94: jal         0x800600F8
    // 0x8022AA98: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_13;
    // 0x8022AA98: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    after_13:
L_8022AA9C:
    // 0x8022AA9C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022AAA0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AAA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AAA8: jr          $ra
    // 0x8022AAAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AAAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225510_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225510: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80225514: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80225518: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022551C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80225520: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x80225524: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80225528: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8022552C: addiu       $a1, $a1, 0x5C60
    ctx->r5 = ADD32(ctx->r5, 0X5C60);
    // 0x80225530: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80225534: jal         0x8009A3B4
    // 0x80225538: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80225538: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022553C: jal         0x8006033C
    // 0x80225540: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80225540: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_1:
    // 0x80225544: beq         $v0, $zero, L_8022555C
    if (ctx->r2 == 0) {
        // 0x80225548: nop
    
            goto L_8022555C;
    }
    // 0x80225548: nop

    // 0x8022554C: jal         0x80060690
    // 0x80225550: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060690_3BA90(rdram, ctx);
        goto after_2;
    // 0x80225550: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x80225554: j           L_802255D0
    // 0x80225558: nop

        goto L_802255D0;
    // 0x80225558: nop

L_8022555C:
    // 0x8022555C: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225560: beq         $v1, $zero, L_80225578
    if (ctx->r3 == 0) {
        // 0x80225564: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225578;
    }
    // 0x80225564: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225568: beq         $v1, $v0, L_802255A8
    if (ctx->r3 == ctx->r2) {
        // 0x8022556C: nop
    
            goto L_802255A8;
    }
    // 0x8022556C: nop

    // 0x80225570: j           L_802255D0
    // 0x80225574: nop

        goto L_802255D0;
    // 0x80225574: nop

L_80225578:
    // 0x80225578: jal         0x8006033C
    // 0x8022557C: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x8022557C: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    after_3:
    // 0x80225580: beq         $v0, $zero, L_802255CC
    if (ctx->r2 == 0) {
        // 0x80225584: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802255CC;
    }
    // 0x80225584: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225588: jal         0x8003E6BC
    // 0x8022558C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_4;
    // 0x8022558C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80225590: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80225594: lui         $a1, 0x3
    ctx->r5 = S32(0X3 << 16);
    // 0x80225598: jal         0x80071ACC
    // 0x8022559C: ori         $a1, $a1, 0x1500
    ctx->r5 = ctx->r5 | 0X1500;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_5;
    // 0x8022559C: ori         $a1, $a1, 0x1500
    ctx->r5 = ctx->r5 | 0X1500;
    after_5:
    // 0x802255A0: j           L_802255CC
    // 0x802255A4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_802255CC;
    // 0x802255A4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802255A8:
    // 0x802255A8: jal         0x8006033C
    // 0x802255AC: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x802255AC: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_6:
    // 0x802255B0: beq         $v0, $zero, L_802255D0
    if (ctx->r2 == 0) {
        // 0x802255B4: nop
    
            goto L_802255D0;
    }
    // 0x802255B4: nop

    // 0x802255B8: jal         0x8006036C
    // 0x802255BC: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x802255BC: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    after_7:
    // 0x802255C0: jal         0x80060690
    // 0x802255C4: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    func_80060690_3BA90(rdram, ctx);
        goto after_8;
    // 0x802255C4: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    after_8:
    // 0x802255C8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802255CC:
    // 0x802255CC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802255D0:
    // 0x802255D0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802255D4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802255D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802255DC: jr          $ra
    // 0x802255E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802255E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023C508_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C508: jr          $ra
    // 0x8023C50C: nop

    TRACE_RETURN()
    return;
    // 0x8023C50C: nop

;}
RECOMP_FUNC void func_802425BC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802425BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802425C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802425C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802425C8: jal         0x8004F144
    // 0x802425CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802425CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x802425D0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802425D4: beql        $a1, $zero, L_80242608
    if (ctx->r5 == 0) {
        // 0x802425D8: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_80242608;
    }
    goto skip_0;
    // 0x802425D8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_0:
    // 0x802425DC: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x802425E0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802425E4: beq         $v0, $zero, L_802425FC
    if (ctx->r2 == 0) {
        // 0x802425E8: nop
    
            goto L_802425FC;
    }
    // 0x802425E8: nop

    // 0x802425EC: jal         0x80242620
    // 0x802425F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80242620_ovl28(rdram, ctx);
        goto after_1;
    // 0x802425F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802425F4: j           L_80242608
    // 0x802425F8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_80242608;
    // 0x802425F8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_802425FC:
    // 0x802425FC: jal         0x80242660
    // 0x80242600: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80242660_ovl28(rdram, ctx);
        goto after_2;
    // 0x80242600: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80242604: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_80242608:
    // 0x80242608: jal         0x8004F4F8
    // 0x8024260C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_3;
    // 0x8024260C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80242610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80242614: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80242618: jr          $ra
    // 0x8024261C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024261C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023AC08_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AC08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023AC0C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023AC10: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x8023AC14: beq         $v0, $zero, L_8023AC34
    if (ctx->r2 == 0) {
        // 0x8023AC18: nop
    
            goto L_8023AC34;
    }
    // 0x8023AC18: nop

    // 0x8023AC1C: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x8023AC20: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    // 0x8023AC24: jal         0x8023ACE4
    // 0x8023AC28: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    func_8023ACE4_ovl28(rdram, ctx);
        goto after_0;
    // 0x8023AC28: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    after_0:
    // 0x8023AC2C: j           L_8023AC3C
    // 0x8023AC30: nop

        goto L_8023AC3C;
    // 0x8023AC30: nop

L_8023AC34:
    // 0x8023AC34: jal         0x8005044C
    // 0x8023AC38: nop

    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8023AC38: nop

    after_1:
L_8023AC3C:
    // 0x8023AC3C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023AC40: jr          $ra
    // 0x8023AC44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023AC44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802283E0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802283E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802283E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802283E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802283EC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802283F0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802283F4: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x802283F8: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x802283FC: beq         $v0, $zero, L_8022859C
    if (ctx->r2 == 0) {
        // 0x80228400: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022859C;
    }
    // 0x80228400: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228404: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228408: addu        $at, $at, $v0
    gpr jr_addend_80228410 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022840C: lw          $v0, 0x5C90($at)
    ctx->r2 = ADD32(ctx->r1, 0X5C90);
    // 0x80228410: jr          $v0
    // 0x80228414: nop

    switch (jr_addend_80228410 >> 2) {
        case 0: goto L_8022846C; break;
        case 1: goto L_80228418; break;
        case 2: goto L_80228438; break;
        case 3: goto L_80228514; break;
        case 4: goto L_80228534; break;
        case 5: goto L_8022855C; break;
        case 6: goto L_80228578; break;
        default: switch_error(__func__, 0x80228410, 0x80255C90);
    }
    // 0x80228414: nop

L_80228418:
    // 0x80228418: jal         0x80036E48
    // 0x8022841C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x8022841C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_0:
    // 0x80228420: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80228424: lw          $v0, 0x63C0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X63C0);
    // 0x80228428: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8022842C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228430: j           L_80228568
    // 0x80228434: sw          $v0, 0x63C0($at)
    MEM_W(0X63C0, ctx->r1) = ctx->r2;
        goto L_80228568;
    // 0x80228434: sw          $v0, 0x63C0($at)
    MEM_W(0X63C0, ctx->r1) = ctx->r2;
L_80228438:
    // 0x80228438: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022843C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80228440: bne         $v0, $zero, L_8022846C
    if (ctx->r2 != 0) {
        // 0x80228444: nop
    
            goto L_8022846C;
    }
    // 0x80228444: nop

    // 0x80228448: jal         0x8004F488
    // 0x8022844C: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    func_8004F488_2A888(rdram, ctx);
        goto after_1;
    // 0x8022844C: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    after_1:
    // 0x80228450: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    // 0x80228454: jal         0x8004CB2C
    // 0x80228458: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_2;
    // 0x80228458: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_2:
    // 0x8022845C: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80228460: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x80228464: j           L_8022856C
    // 0x80228468: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_8022856C;
    // 0x80228468: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022846C:
    // 0x8022846C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80228470: slti        $v0, $v0, 0xC9
    ctx->r2 = SIGNED(ctx->r2) < 0XC9 ? 1 : 0;
    // 0x80228474: bne         $v0, $zero, L_8022859C
    if (ctx->r2 != 0) {
        // 0x80228478: nop
    
            goto L_8022859C;
    }
    // 0x80228478: nop

    // 0x8022847C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80228480: lhu         $a0, -0x730C($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X730C);
    // 0x80228484: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
    // 0x80228488: bne         $v0, $zero, L_8022859C
    if (ctx->r2 != 0) {
        // 0x8022848C: srl         $a0, $a0, 2
        ctx->r4 = S32(U32(ctx->r4) >> 2);
            goto L_8022859C;
    }
    // 0x8022848C: srl         $a0, $a0, 2
    ctx->r4 = S32(U32(ctx->r4) >> 2);
    // 0x80228490: srl         $v1, $a0, 1
    ctx->r3 = S32(U32(ctx->r4) >> 1);
    // 0x80228494: lui         $v0, 0x9249
    ctx->r2 = S32(0X9249 << 16);
    // 0x80228498: ori         $v0, $v0, 0x2493
    ctx->r2 = ctx->r2 | 0X2493;
    // 0x8022849C: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802284A0: lw          $s0, 0x24($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X24);
    // 0x802284A4: mfhi        $a3
    ctx->r7 = hi;
    // 0x802284A8: srl         $v1, $a3, 2
    ctx->r3 = S32(U32(ctx->r7) >> 2);
    // 0x802284AC: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x802284B0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802284B4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802284B8: jal         0x8004F144
    // 0x802284BC: subu        $s1, $a0, $v0
    ctx->r17 = SUB32(ctx->r4, ctx->r2);
    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x802284BC: subu        $s1, $a0, $v0
    ctx->r17 = SUB32(ctx->r4, ctx->r2);
    after_3:
    // 0x802284C0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802284C4: beq         $v1, $zero, L_8022859C
    if (ctx->r3 == 0) {
        // 0x802284C8: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8022859C;
    }
    // 0x802284C8: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x802284CC: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x802284D0: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x802284D4: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x802284D8: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    // 0x802284DC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802284E0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802284E4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802284E8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x802284EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802284F0: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x802284F4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802284F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802284FC: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    // 0x80228500: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x80228504: jal         0x8009A3B4
    // 0x80228508: sb          $zero, 0xE($v1)
    MEM_B(0XE, ctx->r3) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80228508: sb          $zero, 0xE($v1)
    MEM_B(0XE, ctx->r3) = 0;
    after_4:
    // 0x8022850C: j           L_8022859C
    // 0x80228510: nop

        goto L_8022859C;
    // 0x80228510: nop

L_80228514:
    // 0x80228514: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228518: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022851C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228520: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228524: beq         $v0, $zero, L_80228568
    if (ctx->r2 == 0) {
        // 0x80228528: nop
    
            goto L_80228568;
    }
    // 0x80228528: nop

    // 0x8022852C: j           L_8022859C
    // 0x80228530: nop

        goto L_8022859C;
    // 0x80228530: nop

L_80228534:
    // 0x80228534: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x80228538: jal         0x80036340
    // 0x8022853C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80036340_11740(rdram, ctx);
        goto after_5;
    // 0x8022853C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_5:
    // 0x80228540: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80228544: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80228548: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022854C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228550: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x80228554: j           L_8022859C
    // 0x80228558: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
        goto L_8022859C;
    // 0x80228558: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
L_8022855C:
    // 0x8022855C: lui         $a0, 0x117
    ctx->r4 = S32(0X117 << 16);
    // 0x80228560: jal         0x80036B1C
    // 0x80228564: ori         $a0, $a0, 0x6800
    ctx->r4 = ctx->r4 | 0X6800;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_6;
    // 0x80228564: ori         $a0, $a0, 0x6800
    ctx->r4 = ctx->r4 | 0X6800;
    after_6:
L_80228568:
    // 0x80228568: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
L_8022856C:
    // 0x8022856C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228570: j           L_8022859C
    // 0x80228574: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_8022859C;
    // 0x80228574: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80228578:
    // 0x80228578: jal         0x80036B7C
    // 0x8022857C: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_7;
    // 0x8022857C: nop

    after_7:
    // 0x80228580: beq         $v0, $zero, L_8022859C
    if (ctx->r2 == 0) {
        // 0x80228584: nop
    
            goto L_8022859C;
    }
    // 0x80228584: nop

    // 0x80228588: jal         0x80036E48
    // 0x8022858C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80036E48_12248(rdram, ctx);
        goto after_8;
    // 0x8022858C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_8:
    // 0x80228590: jal         0x800600F8
    // 0x80228594: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_9;
    // 0x80228594: nop

    after_9:
    // 0x80228598: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
L_8022859C:
    // 0x8022859C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802285A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802285A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802285A8: jr          $ra
    // 0x802285AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802285AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022AEB8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AEB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022AEBC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022AEC0: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x8022AEC4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022AEC8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022AECC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022AED0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022AED4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AED8: lw          $v1, 0x10($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X10);
    // 0x8022AEDC: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x8022AEE0: addiu       $a2, $a2, 0x49B0
    ctx->r6 = ADD32(ctx->r6, 0X49B0);
    // 0x8022AEE4: addiu       $v0, $zero, 0x104
    ctx->r2 = ADD32(0, 0X104);
    // 0x8022AEE8: beq         $v1, $v0, L_8022B0F4
    if (ctx->r3 == ctx->r2) {
        // 0x8022AEEC: slti        $v0, $v1, 0x105
        ctx->r2 = SIGNED(ctx->r3) < 0X105 ? 1 : 0;
            goto L_8022B0F4;
    }
    // 0x8022AEEC: slti        $v0, $v1, 0x105
    ctx->r2 = SIGNED(ctx->r3) < 0X105 ? 1 : 0;
    // 0x8022AEF0: beq         $v0, $zero, L_8022AF38
    if (ctx->r2 == 0) {
        // 0x8022AEF4: addiu       $v0, $zero, 0xB4
        ctx->r2 = ADD32(0, 0XB4);
            goto L_8022AF38;
    }
    // 0x8022AEF4: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x8022AEF8: beq         $v1, $v0, L_8022B0C4
    if (ctx->r3 == ctx->r2) {
        // 0x8022AEFC: slti        $v0, $v1, 0xB5
        ctx->r2 = SIGNED(ctx->r3) < 0XB5 ? 1 : 0;
            goto L_8022B0C4;
    }
    // 0x8022AEFC: slti        $v0, $v1, 0xB5
    ctx->r2 = SIGNED(ctx->r3) < 0XB5 ? 1 : 0;
    // 0x8022AF00: beql        $v0, $zero, L_8022AF20
    if (ctx->r2 == 0) {
        // 0x8022AF04: addiu       $v0, $zero, 0xFA
        ctx->r2 = ADD32(0, 0XFA);
            goto L_8022AF20;
    }
    goto skip_0;
    // 0x8022AF04: addiu       $v0, $zero, 0xFA
    ctx->r2 = ADD32(0, 0XFA);
    skip_0:
    // 0x8022AF08: beq         $v1, $zero, L_8022AF9C
    if (ctx->r3 == 0) {
        // 0x8022AF0C: addiu       $v0, $zero, 0x46
        ctx->r2 = ADD32(0, 0X46);
            goto L_8022AF9C;
    }
    // 0x8022AF0C: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x8022AF10: beq         $v1, $v0, L_8022B0C4
    if (ctx->r3 == ctx->r2) {
        // 0x8022AF14: nop
    
            goto L_8022B0C4;
    }
    // 0x8022AF14: nop

    // 0x8022AF18: j           L_8022B128
    // 0x8022AF1C: nop

        goto L_8022B128;
    // 0x8022AF1C: nop

L_8022AF20:
    // 0x8022AF20: beq         $v1, $v0, L_8022B0D4
    if (ctx->r3 == ctx->r2) {
        // 0x8022AF24: addiu       $v0, $zero, 0xFE
        ctx->r2 = ADD32(0, 0XFE);
            goto L_8022B0D4;
    }
    // 0x8022AF24: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
    // 0x8022AF28: beq         $v1, $v0, L_8022B0E4
    if (ctx->r3 == ctx->r2) {
        // 0x8022AF2C: nop
    
            goto L_8022B0E4;
    }
    // 0x8022AF2C: nop

    // 0x8022AF30: j           L_8022B128
    // 0x8022AF34: nop

        goto L_8022B128;
    // 0x8022AF34: nop

L_8022AF38:
    // 0x8022AF38: addiu       $v0, $zero, 0x14A
    ctx->r2 = ADD32(0, 0X14A);
    // 0x8022AF3C: beq         $v1, $v0, L_8022B10C
    if (ctx->r3 == ctx->r2) {
        // 0x8022AF40: slti        $v0, $v1, 0x14B
        ctx->r2 = SIGNED(ctx->r3) < 0X14B ? 1 : 0;
            goto L_8022B10C;
    }
    // 0x8022AF40: slti        $v0, $v1, 0x14B
    ctx->r2 = SIGNED(ctx->r3) < 0X14B ? 1 : 0;
    // 0x8022AF44: beq         $v0, $zero, L_8022AF64
    if (ctx->r2 == 0) {
        // 0x8022AF48: addiu       $v0, $zero, 0x124
        ctx->r2 = ADD32(0, 0X124);
            goto L_8022AF64;
    }
    // 0x8022AF48: addiu       $v0, $zero, 0x124
    ctx->r2 = ADD32(0, 0X124);
    // 0x8022AF4C: beq         $v1, $v0, L_8022B104
    if (ctx->r3 == ctx->r2) {
        // 0x8022AF50: addiu       $v0, $zero, 0x13B
        ctx->r2 = ADD32(0, 0X13B);
            goto L_8022B104;
    }
    // 0x8022AF50: addiu       $v0, $zero, 0x13B
    ctx->r2 = ADD32(0, 0X13B);
    // 0x8022AF54: beq         $v1, $v0, L_8022B120
    if (ctx->r3 == ctx->r2) {
        // 0x8022AF58: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_8022B120;
    }
    // 0x8022AF58: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x8022AF5C: j           L_8022B128
    // 0x8022AF60: nop

        goto L_8022B128;
    // 0x8022AF60: nop

L_8022AF64:
    // 0x8022AF64: addiu       $v0, $zero, 0x168
    ctx->r2 = ADD32(0, 0X168);
    // 0x8022AF68: beq         $v1, $v0, L_8022B11C
    if (ctx->r3 == ctx->r2) {
        // 0x8022AF6C: slti        $v0, $v1, 0x169
        ctx->r2 = SIGNED(ctx->r3) < 0X169 ? 1 : 0;
            goto L_8022B11C;
    }
    // 0x8022AF6C: slti        $v0, $v1, 0x169
    ctx->r2 = SIGNED(ctx->r3) < 0X169 ? 1 : 0;
    // 0x8022AF70: beq         $v0, $zero, L_8022AF88
    if (ctx->r2 == 0) {
        // 0x8022AF74: addiu       $v0, $zero, 0x159
        ctx->r2 = ADD32(0, 0X159);
            goto L_8022AF88;
    }
    // 0x8022AF74: addiu       $v0, $zero, 0x159
    ctx->r2 = ADD32(0, 0X159);
    // 0x8022AF78: beq         $v1, $v0, L_8022B120
    if (ctx->r3 == ctx->r2) {
        // 0x8022AF7C: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_8022B120;
    }
    // 0x8022AF7C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x8022AF80: j           L_8022B128
    // 0x8022AF84: nop

        goto L_8022B128;
    // 0x8022AF84: nop

L_8022AF88:
    // 0x8022AF88: addiu       $v0, $zero, 0x186
    ctx->r2 = ADD32(0, 0X186);
    // 0x8022AF8C: beq         $v1, $v0, L_8022B120
    if (ctx->r3 == ctx->r2) {
        // 0x8022AF90: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_8022B120;
    }
    // 0x8022AF90: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x8022AF94: j           L_8022B128
    // 0x8022AF98: nop

        goto L_8022B128;
    // 0x8022AF98: nop

L_8022AF9C:
    // 0x8022AF9C: lw          $v1, 0x28($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X28);
    // 0x8022AFA0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022AFA4: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
    // 0x8022AFA8: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8022AFAC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022AFB0: lw          $v1, 0x2C($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X2C);
    // 0x8022AFB4: addiu       $s3, $zero, 0x80
    ctx->r19 = ADD32(0, 0X80);
    // 0x8022AFB8: addiu       $s2, $zero, -0xC1
    ctx->r18 = ADD32(0, -0XC1);
    // 0x8022AFBC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022AFC0: lui         $s1, 0x80
    ctx->r17 = S32(0X80 << 16);
    // 0x8022AFC4: lui         $s0, 0xFF3F
    ctx->r16 = S32(0XFF3F << 16);
    // 0x8022AFC8: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8022AFCC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022AFD0: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x8022AFD4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022AFD8: lbu         $a1, 0x4A6D($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X4A6D);
    // 0x8022AFDC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022AFE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AFE4: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x8022AFE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AFEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AFF0: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x8022AFF4: addiu       $v0, $zero, 0x640
    ctx->r2 = ADD32(0, 0X640);
    // 0x8022AFF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AFFC: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x8022B000: lui         $v0, 0x640
    ctx->r2 = S32(0X640 << 16);
    // 0x8022B004: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B008: sh          $s3, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r19;
    // 0x8022B00C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B010: sh          $s2, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r18;
    // 0x8022B014: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B018: sw          $s1, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r17;
    // 0x8022B01C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B020: sw          $s0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r16;
    // 0x8022B024: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B028: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x8022B02C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B030: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x8022B034: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B038: sh          $zero, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = 0;
    // 0x8022B03C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B040: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x8022B044: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022B048: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x8022B04C: sb          $v1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r3;
    // 0x8022B050: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B054: sb          $a1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r5;
    // 0x8022B058: jal         0x8022B750
    // 0x8022B05C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8022B750_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022B05C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_0:
    // 0x8022B060: jal         0x8022B784
    // 0x8022B064: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8022B784_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022B064: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x8022B068: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022B06C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B070: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8022B074: lw          $v0, 0x24($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X24);
    // 0x8022B078: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x8022B07C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8022B080: addiu       $v1, $zero, 0x5C0
    ctx->r3 = ADD32(0, 0X5C0);
    // 0x8022B084: sh          $v1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r3;
    // 0x8022B088: lui         $v1, 0x5C0
    ctx->r3 = S32(0X5C0 << 16);
    // 0x8022B08C: sw          $v1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r3;
    // 0x8022B090: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x8022B094: sh          $s3, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r19;
    // 0x8022B098: sh          $s2, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r18;
    // 0x8022B09C: sw          $s1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r17;
    // 0x8022B0A0: sw          $s0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r16;
    // 0x8022B0A4: sh          $zero, 0x58($v0)
    MEM_H(0X58, ctx->r2) = 0;
    // 0x8022B0A8: sh          $zero, 0x54($v0)
    MEM_H(0X54, ctx->r2) = 0;
    // 0x8022B0AC: sh          $v1, 0x56($v0)
    MEM_H(0X56, ctx->r2) = ctx->r3;
    // 0x8022B0B0: ori         $a1, $a1, 0x2
    ctx->r5 = ctx->r5 | 0X2;
    // 0x8022B0B4: jal         0x8022B6D0
    // 0x8022B0B8: sb          $a1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r5;
    func_8022B6D0_ovl28(rdram, ctx);
        goto after_2;
    // 0x8022B0B8: sb          $a1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r5;
    after_2:
    // 0x8022B0BC: j           L_8022B128
    // 0x8022B0C0: nop

        goto L_8022B128;
    // 0x8022B0C0: nop

L_8022B0C4:
    // 0x8022B0C4: jal         0x8022B750
    // 0x8022B0C8: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    func_8022B750_ovl28(rdram, ctx);
        goto after_3;
    // 0x8022B0C8: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_3:
    // 0x8022B0CC: j           L_8022B128
    // 0x8022B0D0: nop

        goto L_8022B128;
    // 0x8022B0D0: nop

L_8022B0D4:
    // 0x8022B0D4: addiu       $v0, $zero, 0x8B
    ctx->r2 = ADD32(0, 0X8B);
    // 0x8022B0D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B0DC: j           L_8022B128
    // 0x8022B0E0: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
        goto L_8022B128;
    // 0x8022B0E0: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
L_8022B0E4:
    // 0x8022B0E4: jal         0x8022B750
    // 0x8022B0E8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8022B750_ovl28(rdram, ctx);
        goto after_4;
    // 0x8022B0E8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_4:
    // 0x8022B0EC: j           L_8022B128
    // 0x8022B0F0: nop

        goto L_8022B128;
    // 0x8022B0F0: nop

L_8022B0F4:
    // 0x8022B0F4: jal         0x8022B750
    // 0x8022B0F8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8022B750_ovl28(rdram, ctx);
        goto after_5;
    // 0x8022B0F8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_5:
    // 0x8022B0FC: j           L_8022B128
    // 0x8022B100: nop

        goto L_8022B128;
    // 0x8022B100: nop

L_8022B104:
    // 0x8022B104: j           L_8022B120
    // 0x8022B108: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
        goto L_8022B120;
    // 0x8022B108: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
L_8022B10C:
    // 0x8022B10C: jal         0x8022B750
    // 0x8022B110: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_8022B750_ovl28(rdram, ctx);
        goto after_6;
    // 0x8022B110: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_6:
    // 0x8022B114: j           L_8022B120
    // 0x8022B118: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
        goto L_8022B120;
    // 0x8022B118: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
L_8022B11C:
    // 0x8022B11C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
L_8022B120:
    // 0x8022B120: jal         0x8022B784
    // 0x8022B124: nop

    func_8022B784_ovl28(rdram, ctx);
        goto after_7;
    // 0x8022B124: nop

    after_7:
L_8022B128:
    // 0x8022B128: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022B12C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022B130: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B134: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022B138: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B13C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B140: jr          $ra
    // 0x8022B144: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022B144: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80228280_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228280: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228284: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228288: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8022828C: bne         $v1, $zero, L_802282A8
    if (ctx->r3 != 0) {
        // 0x80228290: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_802282A8;
    }
    // 0x80228290: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80228294: lw          $a0, 0x40($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X40);
    // 0x80228298: jal         0x8004F684
    // 0x8022829C: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x8022829C: nop

    after_0:
    // 0x802282A0: j           L_802282B8
    // 0x802282A4: nop

        goto L_802282B8;
    // 0x802282A4: nop

L_802282A8:
    // 0x802282A8: bne         $v1, $v0, L_802282B8
    if (ctx->r3 != ctx->r2) {
        // 0x802282AC: nop
    
            goto L_802282B8;
    }
    // 0x802282AC: nop

    // 0x802282B0: jal         0x80036E48
    // 0x802282B4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80036E48_12248(rdram, ctx);
        goto after_1;
    // 0x802282B4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
L_802282B8:
    // 0x802282B8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802282BC: jr          $ra
    // 0x802282C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802282C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80244810_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244810: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80244814: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80244818: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8024481C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80244820: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80244824: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80244828: lw          $v0, 0x4C38($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4C38);
    // 0x8024482C: jalr        $v0
    // 0x80244830: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80244830: nop

    after_0:
    // 0x80244834: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80244838: jr          $ra
    // 0x8024483C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024483C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802449E4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802449E4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802449E8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802449EC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802449F0: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x802449F4: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x802449F8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x802449FC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80244A00: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80244A04: jal         0x8009A3B4
    // 0x80244A08: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80244A08: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x80244A0C: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x80244A10: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x80244A14: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80244A18: jal         0x8009A3B4
    // 0x80244A1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80244A1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80244A20: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x80244A24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80244A28: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    // 0x80244A2C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80244A30: sltiu       $v0, $v0, 0x1E
    ctx->r2 = ctx->r2 < 0X1E ? 1 : 0;
    // 0x80244A34: beq         $v0, $zero, L_80244A48
    if (ctx->r2 == 0) {
        // 0x80244A38: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80244A48;
    }
    // 0x80244A38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80244A3C: lhu         $v0, 0xB2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XB2);
    // 0x80244A40: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80244A44: sh          $v0, 0xB2($s2)
    MEM_H(0XB2, ctx->r18) = ctx->r2;
L_80244A48:
    // 0x80244A48: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x80244A4C: lw          $a1, 0xD8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0XD8);
    // 0x80244A50: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80244A54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80244A58: addiu       $a1, $a1, 0x1F8
    ctx->r5 = ADD32(ctx->r5, 0X1F8);
    // 0x80244A5C: jal         0x8009A3B4
    // 0x80244A60: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80244A60: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    after_2:
    // 0x80244A64: lhu         $a1, 0x14($s2)
    ctx->r5 = MEM_HU(ctx->r18, 0X14);
    // 0x80244A68: lhu         $a2, 0x16($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X16);
    // 0x80244A6C: lhu         $a3, 0x18($s2)
    ctx->r7 = MEM_HU(ctx->r18, 0X18);
    // 0x80244A70: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x80244A74: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x80244A78: lh          $a0, 0x18($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X18);
    // 0x80244A7C: lb          $t0, 0xC($s2)
    ctx->r8 = MEM_B(ctx->r18, 0XC);
    // 0x80244A80: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80244A84: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80244A88: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80244A8C: sh          $a1, 0xAC($s2)
    MEM_H(0XAC, ctx->r18) = ctx->r5;
    // 0x80244A90: sh          $a2, 0xAE($s2)
    MEM_H(0XAE, ctx->r18) = ctx->r6;
    // 0x80244A94: sh          $a3, 0xB0($s2)
    MEM_H(0XB0, ctx->r18) = ctx->r7;
    // 0x80244A98: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x80244A9C: sw          $v1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r3;
    // 0x80244AA0: beq         $t0, $zero, L_80244BC8
    if (ctx->r8 == 0) {
        // 0x80244AA4: sw          $a0, 0x24($s2)
        MEM_W(0X24, ctx->r18) = ctx->r4;
            goto L_80244BC8;
    }
    // 0x80244AA4: sw          $a0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r4;
    // 0x80244AA8: addiu       $a0, $zero, 0x1F5
    ctx->r4 = ADD32(0, 0X1F5);
    // 0x80244AAC: jal         0x8002A33C
    // 0x80244AB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80244AB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80244AB4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80244AB8: sb          $zero, 0xC($s2)
    MEM_B(0XC, ctx->r18) = 0;
    // 0x80244ABC: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
    // 0x80244AC0: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80244AC4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80244AC8: lh          $v0, 0x4D58($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4D58);
    // 0x80244ACC: lh          $v1, 0x14($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X14);
    // 0x80244AD0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80244AD4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80244AD8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80244ADC: lh          $v0, 0x4D5A($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4D5A);
    // 0x80244AE0: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x80244AE4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80244AE8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80244AEC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80244AF0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80244AF4: lh          $v0, 0x4D5C($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4D5C);
    // 0x80244AF8: lh          $v1, 0x18($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X18);
    // 0x80244AFC: addiu       $s1, $s2, 0x44
    ctx->r17 = ADD32(ctx->r18, 0X44);
    // 0x80244B00: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80244B04: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80244B08: jal         0x80032308
    // 0x80244B0C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80032308_D708(rdram, ctx);
        goto after_4;
    // 0x80244B0C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_4:
    // 0x80244B10: addiu       $s0, $s2, 0xD0
    ctx->r16 = ADD32(ctx->r18, 0XD0);
    // 0x80244B14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80244B18: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80244B1C: jal         0x8009A3B4
    // 0x80244B20: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80244B20: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80244B24: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80244B28: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80244B2C: jal         0x8009A3B4
    // 0x80244B30: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80244B30: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80244B34: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80244B38: lhu         $v0, 0x4C2C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4C2C);
    // 0x80244B3C: sh          $v0, 0x6E($s2)
    MEM_H(0X6E, ctx->r18) = ctx->r2;
    // 0x80244B40: lh          $v1, 0x20($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X20);
    // 0x80244B44: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80244B48: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80244B4C: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80244B50: mflo        $v1
    ctx->r3 = lo;
    // 0x80244B54: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x80244B58: sh          $v1, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r3;
    // 0x80244B5C: lh          $v0, 0x22($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X22);
    // 0x80244B60: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80244B64: mflo        $v0
    ctx->r2 = lo;
    // 0x80244B68: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80244B6C: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    // 0x80244B70: lh          $v0, 0x24($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X24);
    // 0x80244B74: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80244B78: mflo        $v0
    ctx->r2 = lo;
    // 0x80244B7C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80244B80: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
    // 0x80244B84: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80244B88: lh          $a0, 0x4C30($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4C30);
    // 0x80244B8C: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x80244B90: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80244B94: mflo        $v0
    ctx->r2 = lo;
    // 0x80244B98: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80244B9C: sh          $v0, 0x4C($s2)
    MEM_H(0X4C, ctx->r18) = ctx->r2;
    // 0x80244BA0: lh          $v0, 0x22($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X22);
    // 0x80244BA4: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80244BA8: mflo        $v0
    ctx->r2 = lo;
    // 0x80244BAC: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80244BB0: sh          $v0, 0x4E($s2)
    MEM_H(0X4E, ctx->r18) = ctx->r2;
    // 0x80244BB4: lh          $v0, 0x24($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X24);
    // 0x80244BB8: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80244BBC: mflo        $v0
    ctx->r2 = lo;
    // 0x80244BC0: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80244BC4: sh          $v0, 0x50($s2)
    MEM_H(0X50, ctx->r18) = ctx->r2;
L_80244BC8:
    // 0x80244BC8: jal         0x8024511C
    // 0x80244BCC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8024511C_ovl28(rdram, ctx);
        goto after_7;
    // 0x80244BCC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_7:
    // 0x80244BD0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80244BD4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80244BD8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80244BDC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80244BE0: jr          $ra
    // 0x80244BE4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80244BE4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
