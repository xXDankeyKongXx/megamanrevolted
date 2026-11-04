#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022EB00_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EB00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022EB04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022EB08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EB0C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022EB10: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022EB14: lb          $v1, 0x385($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X385);
    // 0x8022EB18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EB1C: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x8022EB20: beq         $v1, $zero, L_8022EB5C
    if (ctx->r3 == 0) {
        // 0x8022EB24: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_8022EB5C;
    }
    // 0x8022EB24: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8022EB28: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022EB2C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022EB30: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022EB34: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022EB38: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022EB3C: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x8022EB40: jal         0x8004F820
    // 0x8022EB44: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022EB44: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022EB48: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022EB4C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EB50: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022EB54: j           L_8022EBAC
    // 0x8022EB58: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
        goto L_8022EBAC;
    // 0x8022EB58: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022EB5C:
    // 0x8022EB5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EB60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022EB64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EB68: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x8022EB6C: jal         0x80050294
    // 0x8022EB70: sb          $s1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r17;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022EB70: sb          $s1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r17;
    after_1:
    // 0x8022EB74: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022EB78: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EB7C: bne         $v1, $v0, L_8022EB9C
    if (ctx->r3 != ctx->r2) {
        // 0x8022EB80: addiu       $v0, $zero, 0x1E0
        ctx->r2 = ADD32(0, 0X1E0);
            goto L_8022EB9C;
    }
    // 0x8022EB80: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
    // 0x8022EB84: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022EB88: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x8022EB8C: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x8022EB90: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x8022EB94: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    // 0x8022EB98: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
L_8022EB9C:
    // 0x8022EB9C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022EBA0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022EBA4: sb          $s1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r17;
    // 0x8022EBA8: sh          $v0, 0x382($s0)
    MEM_H(0X382, ctx->r16) = ctx->r2;
L_8022EBAC:
    // 0x8022EBAC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022EBB0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022EBB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022EBB8: jr          $ra
    // 0x8022EBBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022EBBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022DBA4_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DBA4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8022DBA8: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x8022DBAC: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x8022DBB0: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x8022DBB4: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x8022DBB8: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x8022DBBC: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x8022DBC0: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8022DBC4: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8022DBC8: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8022DBCC: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022DBD0: addiu       $a0, $s4, 0x368
    ctx->r4 = ADD32(ctx->r20, 0X368);
    // 0x8022DBD4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8022DBD8: addiu       $s5, $s4, 0x348
    ctx->r21 = ADD32(ctx->r20, 0X348);
    // 0x8022DBDC: addiu       $s6, $s4, 0xC4
    ctx->r22 = ADD32(ctx->r20, 0XC4);
    // 0x8022DBE0: addiu       $s1, $s4, 0x1D8
    ctx->r17 = ADD32(ctx->r20, 0X1D8);
    // 0x8022DBE4: addiu       $s3, $s4, 0x64
    ctx->r19 = ADD32(ctx->r20, 0X64);
    // 0x8022DBE8: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022DBEC: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022DBF0: andi        $v0, $v0, 0xF7
    ctx->r2 = ctx->r2 & 0XF7;
    // 0x8022DBF4: jal         0x800540D0
    // 0x8022DBF8: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x8022DBF8: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
    after_0:
    // 0x8022DBFC: beq         $v0, $zero, L_8022DC10
    if (ctx->r2 == 0) {
        // 0x8022DC00: nop
    
            goto L_8022DC10;
    }
    // 0x8022DC00: nop

    // 0x8022DC04: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022DC08: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8022DC0C: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
L_8022DC10:
    // 0x8022DC10: lbu         $v0, 0x1DD($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1DD);
    // 0x8022DC14: beq         $v0, $zero, L_8022DC20
    if (ctx->r2 == 0) {
        // 0x8022DC18: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022DC20;
    }
    // 0x8022DC18: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DC1C: sb          $v0, 0x1DD($s4)
    MEM_B(0X1DD, ctx->r20) = ctx->r2;
L_8022DC20:
    // 0x8022DC20: lhu         $v0, 0x1D8($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1D8);
    // 0x8022DC24: beq         $v0, $zero, L_8022DC30
    if (ctx->r2 == 0) {
        // 0x8022DC28: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022DC30;
    }
    // 0x8022DC28: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DC2C: sh          $v0, 0x1D8($s4)
    MEM_H(0X1D8, ctx->r20) = ctx->r2;
L_8022DC30:
    // 0x8022DC30: lw          $v1, 0x350($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X350);
    // 0x8022DC34: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022DC38: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022DC3C: and         $a1, $v1, $v0
    ctx->r5 = ctx->r3 & ctx->r2;
    // 0x8022DC40: beq         $a1, $zero, L_8022DE90
    if (ctx->r5 == 0) {
        // 0x8022DC44: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022DE90;
    }
    // 0x8022DC44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DC48: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x8022DC4C: bne         $v1, $v0, L_8022DC60
    if (ctx->r3 != ctx->r2) {
        // 0x8022DC50: nop
    
            goto L_8022DC60;
    }
    // 0x8022DC50: nop

    // 0x8022DC54: lbu         $v0, 0x1DC($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1DC);
    // 0x8022DC58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DC5C: sb          $v0, 0x1DC($s4)
    MEM_B(0X1DC, ctx->r20) = ctx->r2;
L_8022DC60:
    // 0x8022DC60: lhu         $v0, 0x6E($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X6E);
    // 0x8022DC64: lhu         $a0, 0x6E($s4)
    ctx->r4 = MEM_HU(ctx->r20, 0X6E);
    // 0x8022DC68: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8022DC6C: sh          $v0, 0x6E($s4)
    MEM_H(0X6E, ctx->r20) = ctx->r2;
    // 0x8022DC70: lhu         $v0, 0x1D8($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1D8);
    // 0x8022DC74: lh          $v1, 0x6E($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X6E);
    // 0x8022DC78: sh          $a0, 0xB2($s4)
    MEM_H(0XB2, ctx->r20) = ctx->r4;
    // 0x8022DC7C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8022DC80: bgtz        $v1, L_8022DC9C
    if (SIGNED(ctx->r3) > 0) {
        // 0x8022DC84: sh          $v0, 0x1D8($s4)
        MEM_H(0X1D8, ctx->r20) = ctx->r2;
            goto L_8022DC9C;
    }
    // 0x8022DC84: sh          $v0, 0x1D8($s4)
    MEM_H(0X1D8, ctx->r20) = ctx->r2;
    // 0x8022DC88: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022DC8C: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x8022DC90: sb          $v1, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r3;
    // 0x8022DC94: j           L_8022E134
    // 0x8022DC98: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
        goto L_8022E134;
    // 0x8022DC98: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
L_8022DC9C:
    // 0x8022DC9C: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022DCA0: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x8022DCA4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022DCA8: bne         $v0, $zero, L_8022DCDC
    if (ctx->r2 != 0) {
        // 0x8022DCAC: sh          $v1, 0x15E($s4)
        MEM_H(0X15E, ctx->r20) = ctx->r3;
            goto L_8022DCDC;
    }
    // 0x8022DCAC: sh          $v1, 0x15E($s4)
    MEM_H(0X15E, ctx->r20) = ctx->r3;
    // 0x8022DCB0: lbu         $v0, 0x2($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X2);
    // 0x8022DCB4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022DCB8: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022DCBC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DCC0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022DCC4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8022DCC8: lhu         $v0, 0x1D8($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1D8);
    // 0x8022DCCC: lbu         $v1, 0x9($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X9);
    // 0x8022DCD0: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022DCD4: beq         $v0, $zero, L_8022DCF0
    if (ctx->r2 == 0) {
        // 0x8022DCD8: nop
    
            goto L_8022DCF0;
    }
    // 0x8022DCD8: nop

L_8022DCDC:
    // 0x8022DCDC: lw          $v0, 0x350($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X350);
    // 0x8022DCE0: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x8022DCE4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022DCE8: beq         $v0, $zero, L_8022DDAC
    if (ctx->r2 == 0) {
        // 0x8022DCEC: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022DDAC;
    }
    // 0x8022DCEC: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_8022DCF0:
    // 0x8022DCF0: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x8022DCF4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022DCF8: beq         $v1, $v0, L_8022E138
    if (ctx->r3 == ctx->r2) {
        // 0x8022DCFC: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_8022E138;
    }
    // 0x8022DCFC: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8022DD00: addiu       $s0, $s4, 0x14
    ctx->r16 = ADD32(ctx->r20, 0X14);
    // 0x8022DD04: jal         0x8002A33C
    // 0x8022DD08: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022DD08: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022DD0C: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x8022DD10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DD14: addiu       $a1, $s5, 0x10
    ctx->r5 = ADD32(ctx->r21, 0X10);
    // 0x8022DD18: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8022DD1C: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
    // 0x8022DD20: sb          $v0, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r2;
    // 0x8022DD24: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022DD28: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x8022DD2C: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
    // 0x8022DD30: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x8022DD34: lh          $a2, 0x56($s4)
    ctx->r6 = MEM_H(ctx->r20, 0X56);
    // 0x8022DD38: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022DD3C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022DD40: jal         0x8004FEA0
    // 0x8022DD44: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_2;
    // 0x8022DD44: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    after_2:
    // 0x8022DD48: addiu       $v1, $zero, 0xC0
    ctx->r3 = ADD32(0, 0XC0);
    // 0x8022DD4C: sh          $v1, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r3;
    // 0x8022DD50: addiu       $v1, $zero, -0xC0
    ctx->r3 = ADD32(0, -0XC0);
    // 0x8022DD54: sh          $v1, 0x46($s4)
    MEM_H(0X46, ctx->r20) = ctx->r3;
    // 0x8022DD58: lbu         $v1, 0x6($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X6);
    // 0x8022DD5C: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8022DD60: sb          $v1, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r3;
    // 0x8022DD64: addiu       $v1, $v0, 0x800
    ctx->r3 = ADD32(ctx->r2, 0X800);
    // 0x8022DD68: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022DD6C: sh          $v1, 0x56($s4)
    MEM_H(0X56, ctx->r20) = ctx->r3;
    // 0x8022DD70: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8022DD74: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022DD78: bne         $v0, $zero, L_8022DD94
    if (ctx->r2 != 0) {
        // 0x8022DD7C: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_8022DD94;
    }
    // 0x8022DD7C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022DD80: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022DD84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DD88: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022DD8C: j           L_8022DE80
    // 0x8022DD90: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
        goto L_8022DE80;
    // 0x8022DD90: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
L_8022DD94:
    // 0x8022DD94: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8022DD98: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DD9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DDA0: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8022DDA4: j           L_8022DE80
    // 0x8022DDA8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_8022DE80;
    // 0x8022DDA8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_8022DDAC:
    // 0x8022DDAC: addiu       $s0, $s4, 0x14
    ctx->r16 = ADD32(ctx->r20, 0X14);
    // 0x8022DDB0: jal         0x8002A33C
    // 0x8022DDB4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8022DDB4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022DDB8: lbu         $v0, 0x1DD($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1DD);
    // 0x8022DDBC: beq         $v0, $zero, L_8022DE08
    if (ctx->r2 == 0) {
        // 0x8022DDC0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022DE08;
    }
    // 0x8022DDC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DDC4: lbu         $v1, 0x1DC($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X1DC);
    // 0x8022DDC8: bne         $v1, $v0, L_8022E138
    if (ctx->r3 != ctx->r2) {
        // 0x8022DDCC: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022E138;
    }
    // 0x8022DDCC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022DDD0: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x8022DDD4: beq         $v1, $v0, L_8022E138
    if (ctx->r3 == ctx->r2) {
        // 0x8022DDD8: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_8022E138;
    }
    // 0x8022DDD8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022DDDC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022DDE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DDE4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022DDE8: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022DDEC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022DDF0: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
    // 0x8022DDF4: jal         0x80050294
    // 0x8022DDF8: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8022DDF8: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    after_4:
    // 0x8022DDFC: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022DE00: j           L_8022E134
    // 0x8022DE04: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
        goto L_8022E134;
    // 0x8022DE04: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
L_8022DE08:
    // 0x8022DE08: addiu       $a0, $s4, 0x1C
    ctx->r4 = ADD32(ctx->r20, 0X1C);
    // 0x8022DE0C: lh          $a1, 0x56($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X56);
    // 0x8022DE10: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8022DE14: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022DE18: sb          $v0, 0x1DD($s4)
    MEM_B(0X1DD, ctx->r20) = ctx->r2;
    // 0x8022DE1C: sb          $zero, 0x1DC($s4)
    MEM_B(0X1DC, ctx->r20) = 0;
    // 0x8022DE20: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022DE24: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x8022DE28: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x8022DE2C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022DE30: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022DE34: jal         0x8004FAEC
    // 0x8022DE38: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_5;
    // 0x8022DE38: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_5:
    // 0x8022DE3C: bne         $v0, $zero, L_8022E138
    if (ctx->r2 != 0) {
        // 0x8022DE40: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022E138;
    }
    // 0x8022DE40: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022DE44: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x8022DE48: beq         $v1, $v0, L_8022E138
    if (ctx->r3 == ctx->r2) {
        // 0x8022DE4C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E138;
    }
    // 0x8022DE4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DE50: lh          $a2, 0x56($s4)
    ctx->r6 = MEM_H(ctx->r20, 0X56);
    // 0x8022DE54: lh          $a3, 0x382($s4)
    ctx->r7 = MEM_H(ctx->r20, 0X382);
    // 0x8022DE58: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022DE5C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022DE60: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022DE64: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022DE68: jal         0x8004F820
    // 0x8022DE6C: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x8022DE6C: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    after_6:
    // 0x8022DE70: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022DE74: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8022DE78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DE7C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_8022DE80:
    // 0x8022DE80: jal         0x80050294
    // 0x8022DE84: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x8022DE84: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    after_7:
    // 0x8022DE88: j           L_8022E138
    // 0x8022DE8C: nop

        goto L_8022E138;
    // 0x8022DE8C: nop

L_8022DE90:
    // 0x8022DE90: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x8022DE94: addiu       $v0, $v1, -0x2
    ctx->r2 = ADD32(ctx->r3, -0X2);
    // 0x8022DE98: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022DE9C: bne         $v0, $zero, L_8022E138
    if (ctx->r2 != 0) {
        // 0x8022DEA0: addiu       $v0, $v1, -0x4
        ctx->r2 = ADD32(ctx->r3, -0X4);
            goto L_8022E138;
    }
    // 0x8022DEA0: addiu       $v0, $v1, -0x4
    ctx->r2 = ADD32(ctx->r3, -0X4);
    // 0x8022DEA4: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022DEA8: bne         $v0, $zero, L_8022E138
    if (ctx->r2 != 0) {
        // 0x8022DEAC: nop
    
            goto L_8022E138;
    }
    // 0x8022DEAC: nop

    // 0x8022DEB0: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022DEB4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022DEB8: bne         $v0, $zero, L_8022E138
    if (ctx->r2 != 0) {
        // 0x8022DEBC: andi        $v1, $v1, 0xFF
        ctx->r3 = ctx->r3 & 0XFF;
            goto L_8022E138;
    }
    // 0x8022DEBC: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x8022DEC0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022DEC4: beq         $v1, $v0, L_8022E138
    if (ctx->r3 == ctx->r2) {
        // 0x8022DEC8: nop
    
            goto L_8022E138;
    }
    // 0x8022DEC8: nop

    // 0x8022DECC: lb          $v0, 0x386($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X386);
    // 0x8022DED0: beq         $v0, $zero, L_8022DEE0
    if (ctx->r2 == 0) {
        // 0x8022DED4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022DEE0;
    }
    // 0x8022DED4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022DED8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022DEDC: sb          $v0, 0x386($s4)
    MEM_B(0X386, ctx->r20) = ctx->r2;
L_8022DEE0:
    // 0x8022DEE0: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022DEE4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022DEE8: beq         $v0, $zero, L_8022E0F8
    if (ctx->r2 == 0) {
        // 0x8022DEEC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E0F8;
    }
    // 0x8022DEEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DEF0: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x8022DEF4: beq         $v1, $v0, L_8022E0B4
    if (ctx->r3 == ctx->r2) {
        // 0x8022DEF8: addiu       $a0, $s4, 0x1C
        ctx->r4 = ADD32(ctx->r20, 0X1C);
            goto L_8022E0B4;
    }
    // 0x8022DEF8: addiu       $a0, $s4, 0x1C
    ctx->r4 = ADD32(ctx->r20, 0X1C);
    // 0x8022DEFC: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8022DF00: lh          $a1, 0x56($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X56);
    // 0x8022DF04: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022DF08: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x8022DF0C: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x8022DF10: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022DF14: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022DF18: jal         0x8004FAEC
    // 0x8022DF1C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_8;
    // 0x8022DF1C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_8:
    // 0x8022DF20: beq         $v0, $zero, L_8022E020
    if (ctx->r2 == 0) {
        // 0x8022DF24: lui         $v0, 0x8
        ctx->r2 = S32(0X8 << 16);
            goto L_8022E020;
    }
    // 0x8022DF24: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x8022DF28: lw          $v1, 0x80($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X80);
    // 0x8022DF2C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022DF30: beq         $v0, $zero, L_8022DF44
    if (ctx->r2 == 0) {
        // 0x8022DF34: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022DF44;
    }
    // 0x8022DF34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DF38: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022DF3C: j           L_8022E0B4
    // 0x8022DF40: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
        goto L_8022E0B4;
    // 0x8022DF40: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
L_8022DF44:
    // 0x8022DF44: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x8022DF48: ori         $v0, $v0, 0xE847
    ctx->r2 = ctx->r2 | 0XE847;
    // 0x8022DF4C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022DF50: bne         $v0, $zero, L_8022DF9C
    if (ctx->r2 != 0) {
        // 0x8022DF54: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022DF9C;
    }
    // 0x8022DF54: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022DF58: lb          $v0, 0x386($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X386);
    // 0x8022DF5C: bne         $v0, $zero, L_8022DF9C
    if (ctx->r2 != 0) {
        // 0x8022DF60: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022DF9C;
    }
    // 0x8022DF60: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022DF64: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x8022DF68: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DF6C: beq         $v1, $v0, L_8022DF80
    if (ctx->r3 == ctx->r2) {
        // 0x8022DF70: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022DF80;
    }
    // 0x8022DF70: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022DF74: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022DF78: j           L_8022E0AC
    // 0x8022DF7C: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
        goto L_8022E0AC;
    // 0x8022DF7C: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
L_8022DF80:
    // 0x8022DF80: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022DF84: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022DF88: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8022DF8C: sb          $zero, 0x66($s4)
    MEM_B(0X66, ctx->r20) = 0;
    // 0x8022DF90: sb          $zero, 0x65($s4)
    MEM_B(0X65, ctx->r20) = 0;
    // 0x8022DF94: j           L_8022E0AC
    // 0x8022DF98: sb          $zero, 0x64($s4)
    MEM_B(0X64, ctx->r20) = 0;
        goto L_8022E0AC;
    // 0x8022DF98: sb          $zero, 0x64($s4)
    MEM_B(0X64, ctx->r20) = 0;
L_8022DF9C:
    // 0x8022DF9C: sb          $zero, 0x9($s4)
    MEM_B(0X9, ctx->r20) = 0;
    // 0x8022DFA0: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8022DFA4: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x8022DFA8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022DFAC: bne         $v0, $zero, L_8022DFC8
    if (ctx->r2 != 0) {
        // 0x8022DFB0: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8022DFC8;
    }
    // 0x8022DFB0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022DFB4: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x8022DFB8: sb          $zero, 0x7($s6)
    MEM_B(0X7, ctx->r22) = 0;
    // 0x8022DFBC: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8022DFC0: sb          $v0, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r2;
    // 0x8022DFC4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8022DFC8:
    // 0x8022DFC8: sh          $v0, 0x3A($s5)
    MEM_H(0X3A, ctx->r21) = ctx->r2;
    // 0x8022DFCC: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x8022DFD0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DFD4: beq         $v1, $v0, L_8022E0B4
    if (ctx->r3 == ctx->r2) {
        // 0x8022DFD8: nop
    
            goto L_8022E0B4;
    }
    // 0x8022DFD8: nop

    // 0x8022DFDC: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x8022DFE0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022DFE4: bne         $v0, $zero, L_8022E0B4
    if (ctx->r2 != 0) {
        // 0x8022DFE8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022E0B4;
    }
    // 0x8022DFE8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022DFEC: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022DFF0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022DFF4: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    // 0x8022DFF8: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x8022DFFC: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x8022E000: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8022E004: sb          $v0, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r2;
    // 0x8022E008: lbu         $a1, 0xAC($s4)
    ctx->r5 = MEM_BU(ctx->r20, 0XAC);
    // 0x8022E00C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022E010: jal         0x80050294
    // 0x8022E014: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_9;
    // 0x8022E014: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x8022E018: j           L_8022E0B4
    // 0x8022E01C: nop

        goto L_8022E0B4;
    // 0x8022E01C: nop

L_8022E020:
    // 0x8022E020: lbu         $v1, 0xCA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022E024: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022E028: sb          $zero, 0x9($s4)
    MEM_B(0X9, ctx->r20) = 0;
    // 0x8022E02C: andi        $v1, $v1, 0x80
    ctx->r3 = ctx->r3 & 0X80;
    // 0x8022E030: bne         $v1, $zero, L_8022E048
    if (ctx->r3 != 0) {
        // 0x8022E034: sb          $v0, 0xA($s4)
        MEM_B(0XA, ctx->r20) = ctx->r2;
            goto L_8022E048;
    }
    // 0x8022E034: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8022E038: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022E03C: sb          $zero, 0xCB($s4)
    MEM_B(0XCB, ctx->r20) = 0;
    // 0x8022E040: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8022E044: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
L_8022E048:
    // 0x8022E048: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x8022E04C: lw          $a0, 0x80($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X80);
    // 0x8022E050: ori         $v0, $v0, 0xE847
    ctx->r2 = ctx->r2 | 0XE847;
    // 0x8022E054: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8022E058: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x8022E05C: bne         $v0, $zero, L_8022E0B4
    if (ctx->r2 != 0) {
        // 0x8022E060: sh          $v1, 0x382($s4)
        MEM_H(0X382, ctx->r20) = ctx->r3;
            goto L_8022E0B4;
    }
    // 0x8022E060: sh          $v1, 0x382($s4)
    MEM_H(0X382, ctx->r20) = ctx->r3;
    // 0x8022E064: lb          $v0, 0x386($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X386);
    // 0x8022E068: bne         $v0, $zero, L_8022E0B4
    if (ctx->r2 != 0) {
        // 0x8022E06C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022E0B4;
    }
    // 0x8022E06C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E070: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x8022E074: beq         $v1, $v0, L_8022E088
    if (ctx->r3 == ctx->r2) {
        // 0x8022E078: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022E088;
    }
    // 0x8022E078: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022E07C: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022E080: j           L_8022E0A0
    // 0x8022E084: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
        goto L_8022E0A0;
    // 0x8022E084: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
L_8022E088:
    // 0x8022E088: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022E08C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022E090: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8022E094: sb          $zero, 0x66($s4)
    MEM_B(0X66, ctx->r20) = 0;
    // 0x8022E098: sb          $zero, 0x65($s4)
    MEM_B(0X65, ctx->r20) = 0;
    // 0x8022E09C: sb          $zero, 0x64($s4)
    MEM_B(0X64, ctx->r20) = 0;
L_8022E0A0:
    // 0x8022E0A0: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x8022E0A4: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8022E0A8: sb          $v0, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r2;
L_8022E0AC:
    // 0x8022E0AC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022E0B0: sh          $v0, 0x3A($s5)
    MEM_H(0X3A, ctx->r21) = ctx->r2;
L_8022E0B4:
    // 0x8022E0B4: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x8022E0B8: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8022E0BC: ori         $v1, $v1, 0xFF00
    ctx->r3 = ctx->r3 | 0XFF00;
    // 0x8022E0C0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022E0C4: addiu       $v1, $zero, 0x600
    ctx->r3 = ADD32(0, 0X600);
    // 0x8022E0C8: bne         $v0, $v1, L_8022E138
    if (ctx->r2 != ctx->r3) {
        // 0x8022E0CC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E138;
    }
    // 0x8022E0CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E0D0: lbu         $v1, 0xAC($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XAC);
    // 0x8022E0D4: beq         $v1, $v0, L_8022E138
    if (ctx->r3 == ctx->r2) {
        // 0x8022E0D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E138;
    }
    // 0x8022E0D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E0DC: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    // 0x8022E0E0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022E0E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022E0E8: jal         0x80050294
    // 0x8022E0EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_10;
    // 0x8022E0EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x8022E0F0: j           L_8022E138
    // 0x8022E0F4: nop

        goto L_8022E138;
    // 0x8022E0F4: nop

L_8022E0F8:
    // 0x8022E0F8: lbu         $v0, 0x9($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X9);
    // 0x8022E0FC: bne         $v0, $zero, L_8022E140
    if (ctx->r2 != 0) {
        // 0x8022E100: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_8022E140;
    }
    // 0x8022E100: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E104: lbu         $v1, 0xA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA);
    // 0x8022E108: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022E10C: bne         $v1, $v0, L_8022E138
    if (ctx->r3 != ctx->r2) {
        // 0x8022E110: addiu       $v1, $zero, 0x50
        ctx->r3 = ADD32(0, 0X50);
            goto L_8022E138;
    }
    // 0x8022E110: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
    // 0x8022E114: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022E118: sh          $v1, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r3;
    // 0x8022E11C: addiu       $v1, $zero, 0x78
    ctx->r3 = ADD32(0, 0X78);
    // 0x8022E120: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
    // 0x8022E124: sb          $zero, 0xF($s4)
    MEM_B(0XF, ctx->r20) = 0;
    // 0x8022E128: sb          $v1, 0x385($s4)
    MEM_B(0X385, ctx->r20) = ctx->r3;
    // 0x8022E12C: sb          $zero, 0x384($s4)
    MEM_B(0X384, ctx->r20) = 0;
    // 0x8022E130: andi        $v0, $v0, 0x7E
    ctx->r2 = ctx->r2 & 0X7E;
L_8022E134:
    // 0x8022E134: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
L_8022E138:
    // 0x8022E138: lbu         $v0, 0x9($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X9);
    // 0x8022E13C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8022E140:
    // 0x8022E140: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E144: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E148: lw          $v0, -0x6454($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6454);
    // 0x8022E14C: jalr        $v0
    // 0x8022E150: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_11;
    // 0x8022E150: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_11:
    // 0x8022E154: lbu         $v1, 0xA6($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA6);
    // 0x8022E158: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x8022E15C: bne         $v0, $zero, L_8022E170
    if (ctx->r2 != 0) {
        // 0x8022E160: addiu       $a0, $zero, 0x159
        ctx->r4 = ADD32(0, 0X159);
            goto L_8022E170;
    }
    // 0x8022E160: addiu       $a0, $zero, 0x159
    ctx->r4 = ADD32(0, 0X159);
    // 0x8022E164: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x8022E168: beq         $v0, $zero, L_8022E178
    if (ctx->r2 == 0) {
        // 0x8022E16C: addiu       $a0, $zero, 0x15A
        ctx->r4 = ADD32(0, 0X15A);
            goto L_8022E178;
    }
    // 0x8022E16C: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
L_8022E170:
    // 0x8022E170: jal         0x8002A33C
    // 0x8022E174: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_12;
    // 0x8022E174: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    after_12:
L_8022E178:
    // 0x8022E178: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x8022E17C: addiu       $v0, $v1, -0x5
    ctx->r2 = ADD32(ctx->r3, -0X5);
    // 0x8022E180: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022E184: bne         $v0, $zero, L_8022E1A0
    if (ctx->r2 != 0) {
        // 0x8022E188: andi        $v1, $v1, 0xFF
        ctx->r3 = ctx->r3 & 0XFF;
            goto L_8022E1A0;
    }
    // 0x8022E188: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x8022E18C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022E190: beq         $v1, $v0, L_8022E1A0
    if (ctx->r3 == ctx->r2) {
        // 0x8022E194: nop
    
            goto L_8022E1A0;
    }
    // 0x8022E194: nop

    // 0x8022E198: jal         0x8022FE3C
    // 0x8022E19C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8022FE3C_ovl22(rdram, ctx);
        goto after_13;
    // 0x8022E19C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_13:
L_8022E1A0:
    // 0x8022E1A0: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x8022E1A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E1A8: bnel        $v1, $v0, L_8022E230
    if (ctx->r3 != ctx->r2) {
        // 0x8022E1AC: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_8022E230;
    }
    goto skip_0;
    // 0x8022E1AC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    skip_0:
    // 0x8022E1B0: lh          $v0, 0x15E($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X15E);
    // 0x8022E1B4: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x8022E1B8: beq         $v0, $zero, L_8022E1D8
    if (ctx->r2 == 0) {
        // 0x8022E1BC: nop
    
            goto L_8022E1D8;
    }
    // 0x8022E1BC: nop

    // 0x8022E1C0: lb          $v0, 0x2($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X2);
    // 0x8022E1C4: bne         $v0, $zero, L_8022E1D8
    if (ctx->r2 != 0) {
        // 0x8022E1C8: nop
    
            goto L_8022E1D8;
    }
    // 0x8022E1C8: nop

    // 0x8022E1CC: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8022E1D0: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022E1D4: sb          $v0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r2;
L_8022E1D8:
    // 0x8022E1D8: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8022E1DC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022E1E0: bne         $v0, $zero, L_8022E230
    if (ctx->r2 != 0) {
        // 0x8022E1E4: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_8022E230;
    }
    // 0x8022E1E4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022E1E8: addiu       $a1, $s4, 0x180
    ctx->r5 = ADD32(ctx->r20, 0X180);
    // 0x8022E1EC: jal         0x8009A3B4
    // 0x8022E1F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x8022E1F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_14:
    // 0x8022E1F4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022E1F8: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8022E1FC: lbu         $v1, 0x1($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X1);
    // 0x8022E200: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E204: addiu       $v0, $s5, 0x8
    ctx->r2 = ADD32(ctx->r21, 0X8);
    // 0x8022E208: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022E20C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022E210: lb          $v1, 0x73($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X73);
    // 0x8022E214: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022E218: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022E21C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022E220: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022E224: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022E228: j           L_8022E270
    // 0x8022E22C: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
        goto L_8022E270;
    // 0x8022E22C: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
L_8022E230:
    // 0x8022E230: addiu       $a1, $s4, 0x180
    ctx->r5 = ADD32(ctx->r20, 0X180);
    // 0x8022E234: jal         0x8009A3B4
    // 0x8022E238: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x8022E238: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_15:
    // 0x8022E23C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022E240: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8022E244: lbu         $v1, 0x1($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X1);
    // 0x8022E248: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E24C: addiu       $v0, $s5, 0x8
    ctx->r2 = ADD32(ctx->r21, 0X8);
    // 0x8022E250: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022E254: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022E258: lb          $v1, 0x73($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X73);
    // 0x8022E25C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022E260: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022E264: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022E268: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x8022E26C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_8022E270:
    // 0x8022E270: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022E274: jal         0x80051E18
    // 0x8022E278: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_16;
    // 0x8022E278: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_16:
    // 0x8022E27C: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x8022E280: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022E284: beq         $v0, $zero, L_8022E394
    if (ctx->r2 == 0) {
        // 0x8022E288: addiu       $a0, $s4, 0x228
        ctx->r4 = ADD32(ctx->r20, 0X228);
            goto L_8022E394;
    }
    // 0x8022E288: addiu       $a0, $s4, 0x228
    ctx->r4 = ADD32(ctx->r20, 0X228);
    // 0x8022E28C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8022E290: addiu       $s3, $sp, 0x30
    ctx->r19 = ADD32(ctx->r29, 0X30);
    // 0x8022E294: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x8022E298: addiu       $v0, $zero, 0x4D0
    ctx->r2 = ADD32(0, 0X4D0);
    // 0x8022E29C: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8022E2A0: addiu       $v0, $zero, -0x20
    ctx->r2 = ADD32(0, -0X20);
    // 0x8022E2A4: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
    // 0x8022E2A8: jal         0x800308E8
    // 0x8022E2AC: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_17;
    // 0x8022E2AC: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    after_17:
    // 0x8022E2B0: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x8022E2B4: lhu         $v0, 0x190($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X190);
    // 0x8022E2B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E2BC: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x8022E2C0: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x8022E2C4: lhu         $v0, 0x192($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X192);
    // 0x8022E2C8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022E2CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E2D0: sh          $v0, 0x2($s5)
    MEM_H(0X2, ctx->r21) = ctx->r2;
    // 0x8022E2D4: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x8022E2D8: lhu         $v0, 0x194($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X194);
    // 0x8022E2DC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022E2E0: addiu       $s2, $s5, 0x18
    ctx->r18 = ADD32(ctx->r21, 0X18);
    // 0x8022E2E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E2E8: sh          $v0, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r2;
    // 0x8022E2EC: lbu         $v0, 0x1($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1);
    // 0x8022E2F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E2F4: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022E2F8: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x8022E2FC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022E300: lhu         $v0, 0x4($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X4);
    // 0x8022E304: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
    // 0x8022E308: lui         $s0, 0x508
    ctx->r16 = S32(0X508 << 16);
    // 0x8022E30C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022E310: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8022E314: or          $v0, $v0, $s0
    ctx->r2 = ctx->r2 | ctx->r16;
    // 0x8022E318: jal         0x80051E18
    // 0x8022E31C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_18;
    // 0x8022E31C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_18:
    // 0x8022E320: addiu       $a0, $s4, 0x268
    ctx->r4 = ADD32(ctx->r20, 0X268);
    // 0x8022E324: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8022E328: jal         0x800308E8
    // 0x8022E32C: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_800308E8_BCE8(rdram, ctx);
        goto after_19;
    // 0x8022E32C: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_19:
    // 0x8022E330: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x8022E334: lhu         $v0, 0x1A0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1A0);
    // 0x8022E338: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E33C: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x8022E340: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x8022E344: lhu         $v0, 0x1A2($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1A2);
    // 0x8022E348: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E34C: sh          $v0, 0x2($s5)
    MEM_H(0X2, ctx->r21) = ctx->r2;
    // 0x8022E350: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x8022E354: lhu         $v0, 0x1A4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1A4);
    // 0x8022E358: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E35C: sh          $v0, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r2;
    // 0x8022E360: lbu         $v0, 0x1($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1);
    // 0x8022E364: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022E368: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022E36C: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x8022E370: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022E374: lhu         $v0, 0x4($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X4);
    // 0x8022E378: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E37C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022E380: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022E384: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8022E388: or          $v0, $v0, $s0
    ctx->r2 = ctx->r2 | ctx->r16;
    // 0x8022E38C: jal         0x80051E18
    // 0x8022E390: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_20;
    // 0x8022E390: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_20:
L_8022E394:
    // 0x8022E394: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x8022E398: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E39C: beq         $v1, $v0, L_8022E3C4
    if (ctx->r3 == ctx->r2) {
        // 0x8022E3A0: nop
    
            goto L_8022E3C4;
    }
    // 0x8022E3A0: nop

    // 0x8022E3A4: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8022E3A8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022E3AC: beq         $v0, $zero, L_8022E3C4
    if (ctx->r2 == 0) {
        // 0x8022E3B0: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_8022E3C4;
    }
    // 0x8022E3B0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022E3B4: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x8022E3B8: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022E3BC: jal         0x8003B564
    // 0x8022E3C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_21;
    // 0x8022E3C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_21:
L_8022E3C4:
    // 0x8022E3C4: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x8022E3C8: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x8022E3CC: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x8022E3D0: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x8022E3D4: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x8022E3D8: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8022E3DC: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8022E3E0: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8022E3E4: jr          $ra
    // 0x8022E3E8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x8022E3E8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80230BBC_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230BBC: jr          $ra
    // 0x80230BC0: nop

    TRACE_RETURN()
    return;
    // 0x80230BC0: nop

;}
RECOMP_FUNC void func_8022B23C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B23C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B240: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B244: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B248: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B24C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B254: beq         $v1, $v0, L_8022B2BC
    if (ctx->r3 == ctx->r2) {
        // 0x8022B258: addiu       $a0, $s0, 0x328
        ctx->r4 = ADD32(ctx->r16, 0X328);
            goto L_8022B2BC;
    }
    // 0x8022B258: addiu       $a0, $s0, 0x328
    ctx->r4 = ADD32(ctx->r16, 0X328);
    // 0x8022B25C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022B260: beql        $v0, $zero, L_8022B278
    if (ctx->r2 == 0) {
        // 0x8022B264: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022B278;
    }
    goto skip_0;
    // 0x8022B264: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022B268: beq         $v1, $zero, L_8022B288
    if (ctx->r3 == 0) {
        // 0x8022B26C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022B288;
    }
    // 0x8022B26C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022B270: j           L_8022B348
    // 0x8022B274: nop

        goto L_8022B348;
    // 0x8022B274: nop

L_8022B278:
    // 0x8022B278: beq         $v1, $v0, L_8022B2E4
    if (ctx->r3 == ctx->r2) {
        // 0x8022B27C: nop
    
            goto L_8022B2E4;
    }
    // 0x8022B27C: nop

    // 0x8022B280: j           L_8022B348
    // 0x8022B284: nop

        goto L_8022B348;
    // 0x8022B284: nop

L_8022B288:
    // 0x8022B288: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022B28C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022B290: beq         $v0, $zero, L_8022B2A0
    if (ctx->r2 == 0) {
        // 0x8022B294: sb          $v1, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r3;
            goto L_8022B2A0;
    }
    // 0x8022B294: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022B298: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B29C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022B2A0:
    // 0x8022B2A0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022B2A4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022B2A8: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022B2AC: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x8022B2B0: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x8022B2B4: andi        $v1, $v1, 0x7F
    ctx->r3 = ctx->r3 & 0X7F;
    // 0x8022B2B8: sb          $v1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r3;
L_8022B2BC:
    // 0x8022B2BC: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x8022B2C0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B2C4: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x8022B2C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B2CC: bgez        $v0, L_8022B348
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B2D0: nop
    
            goto L_8022B348;
    }
    // 0x8022B2D0: nop

    // 0x8022B2D4: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8022B2D8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022B2DC: j           L_8022B348
    // 0x8022B2E0: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
        goto L_8022B348;
    // 0x8022B2E0: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_8022B2E4:
    // 0x8022B2E4: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022B2E8: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022B2EC: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8022B2F0: andi        $v1, $v1, 0x20
    ctx->r3 = ctx->r3 & 0X20;
    // 0x8022B2F4: beq         $v1, $zero, L_8022B310
    if (ctx->r3 == 0) {
        // 0x8022B2F8: sh          $v0, 0x328($s0)
        MEM_H(0X328, ctx->r16) = ctx->r2;
            goto L_8022B310;
    }
    // 0x8022B2F8: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    // 0x8022B2FC: lhu         $a0, 0x362($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X362);
    // 0x8022B300: jal         0x8006033C
    // 0x8022B304: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022B304: nop

    after_0:
    // 0x8022B308: j           L_8022B334
    // 0x8022B30C: nop

        goto L_8022B334;
    // 0x8022B30C: nop

L_8022B310:
    // 0x8022B310: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022B314: lui         $v0, 0x31
    ctx->r2 = S32(0X31 << 16);
    // 0x8022B318: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022B31C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022B320: beq         $v0, $zero, L_8022B33C
    if (ctx->r2 == 0) {
        // 0x8022B324: lui         $v1, 0xFF
        ctx->r3 = S32(0XFF << 16);
            goto L_8022B33C;
    }
    // 0x8022B324: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8022B328: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x8022B32C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8022B330: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_8022B334:
    // 0x8022B334: beq         $v0, $zero, L_8022B348
    if (ctx->r2 == 0) {
        // 0x8022B338: nop
    
            goto L_8022B348;
    }
    // 0x8022B338: nop

L_8022B33C:
    // 0x8022B33C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B340: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B344: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022B348:
    // 0x8022B348: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B34C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B350: jr          $ra
    // 0x8022B354: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B354: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FEC0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FEC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FEC4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022FEC8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022FECC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FED0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022FED4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FED8: lw          $v0, -0x63C0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X63C0);
    // 0x8022FEDC: jalr        $v0
    // 0x8022FEE0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022FEE0: nop

    after_0:
    // 0x8022FEE4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022FEE8: jr          $ra
    // 0x8022FEEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FEEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235784_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235784: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80235788: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8023578C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235790: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80235794: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80235798: lw          $v1, 0xEC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XEC);
    // 0x8023579C: beq         $v1, $zero, L_80235818
    if (ctx->r3 == 0) {
        // 0x802357A0: addiu       $s1, $s0, 0xD0
        ctx->r17 = ADD32(ctx->r16, 0XD0);
            goto L_80235818;
    }
    // 0x802357A0: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x802357A4: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x802357A8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802357AC: beq         $v0, $zero, L_802357D8
    if (ctx->r2 == 0) {
        // 0x802357B0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802357D8;
    }
    // 0x802357B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802357B4: lh          $a2, 0xF4($s0)
    ctx->r6 = MEM_H(ctx->r16, 0XF4);
    // 0x802357B8: lh          $a3, 0xF8($s0)
    ctx->r7 = MEM_H(ctx->r16, 0XF8);
    // 0x802357BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802357C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802357C4: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x802357C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802357CC: jal         0x8005F7D4
    // 0x802357D0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    func_8005F7D4_3ABD4(rdram, ctx);
        goto after_0;
    // 0x802357D0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    after_0:
    // 0x802357D4: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
L_802357D8:
    // 0x802357D8: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    // 0x802357DC: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x802357E0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802357E4: beq         $v0, $zero, L_802357F0
    if (ctx->r2 == 0) {
        // 0x802357E8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802357F0;
    }
    // 0x802357E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802357EC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802357F0:
    // 0x802357F0: lw          $v1, 0xEC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XEC);
    // 0x802357F4: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x802357F8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802357FC: beq         $v0, $zero, L_80235818
    if (ctx->r2 == 0) {
        // 0x80235800: lui         $v0, 0xFF
        ctx->r2 = S32(0XFF << 16);
            goto L_80235818;
    }
    // 0x80235800: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80235804: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80235808: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023580C: beq         $v0, $zero, L_80235818
    if (ctx->r2 == 0) {
        // 0x80235810: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80235818;
    }
    // 0x80235810: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80235814: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80235818:
    // 0x80235818: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023581C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235820: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235824: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235828: lw          $v0, -0x60AC($at)
    ctx->r2 = MEM_W(ctx->r1, -0X60AC);
    // 0x8023582C: jalr        $v0
    // 0x80235830: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80235830: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80235834: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80235838: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8023583C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80235840: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80235844: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80235848: addiu       $v0, $s1, 0x1C
    ctx->r2 = ADD32(ctx->r17, 0X1C);
    // 0x8023584C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80235850: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x80235854: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80235858: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023585C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80235860: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80235864: jal         0x80051E18
    // 0x80235868: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_2;
    // 0x80235868: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_2:
    // 0x8023586C: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x80235870: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80235874: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80235878: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8023587C: jr          $ra
    // 0x80235880: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80235880: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80235AFC_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235AFC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80235B00: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80235B04: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235B08: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80235B0C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80235B10: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80235B14: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80235B18: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80235B1C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80235B20: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80235B24: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80235B28: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80235B2C: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80235B30: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x80235B34: jal         0x8009A3B4
    // 0x80235B38: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80235B38: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80235B3C: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x80235B40: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x80235B44: jal         0x80031428
    // 0x80235B48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80031428_C828(rdram, ctx);
        goto after_1;
    // 0x80235B48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80235B4C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80235B50: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80235B54: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80235B58: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80235B5C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80235B60: jal         0x80031DA8
    // 0x80235B64: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x80235B64: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x80235B68: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80235B6C: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80235B70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235B74: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80235B78: jal         0x8004D5D4
    // 0x80235B7C: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x80235B7C: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    after_3:
    // 0x80235B80: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80235B84: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235B88: addiu       $v0, $v0, -0x6090
    ctx->r2 = ADD32(ctx->r2, -0X6090);
    // 0x80235B8C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80235B90: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80235B94: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80235B98: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80235B9C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80235BA0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80235BA4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80235BA8: jr          $ra
    // 0x80235BAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80235BAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80229238_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229238: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x8022923C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80229240: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80229244: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229248: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8022924C: jr          $ra
    // 0x80229250: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80229250: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80236AD0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236AD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236AD4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236AD8: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80236ADC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236AE0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236AE4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236AE8: lw          $v0, -0x5D04($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5D04);
    // 0x80236AEC: jalr        $v0
    // 0x80236AF0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80236AF0: nop

    after_0:
    // 0x80236AF4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236AF8: jr          $ra
    // 0x80236AFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236AFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236208_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236208: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023620C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236210: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236214: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236218: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8023621C: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80236220: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236224: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80236228: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023622C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80236230: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80236234: beq         $v1, $zero, L_80236254
    if (ctx->r3 == 0) {
        // 0x80236238: nop
    
            goto L_80236254;
    }
    // 0x80236238: nop

    // 0x8023623C: jal         0x80236624
    // 0x80236240: nop

    func_80236624_ovl22(rdram, ctx);
        goto after_0;
    // 0x80236240: nop

    after_0:
    // 0x80236244: beq         $v0, $zero, L_80236254
    if (ctx->r2 == 0) {
        // 0x80236248: nop
    
            goto L_80236254;
    }
    // 0x80236248: nop

    // 0x8023624C: jal         0x8004F62C
    // 0x80236250: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x80236250: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80236254:
    // 0x80236254: jal         0x8023626C
    // 0x80236258: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023626C_ovl22(rdram, ctx);
        goto after_2;
    // 0x80236258: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023625C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236260: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236264: jr          $ra
    // 0x80236268: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236268: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802288D0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802288D0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802288D4: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x802288D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802288DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802288E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802288E4: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x802288E8: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x802288EC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802288F0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x802288F4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x802288F8: addiu       $s4, $s0, 0x2C
    ctx->r20 = ADD32(ctx->r16, 0X2C);
    // 0x802288FC: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80228900: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80228904: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80228908: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022890C: bne         $v1, $v0, L_8022893C
    if (ctx->r3 != ctx->r2) {
        // 0x80228910: sw          $s2, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r18;
            goto L_8022893C;
    }
    // 0x80228910: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228914: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x80228918: addiu       $s2, $zero, 0x609
    ctx->r18 = ADD32(0, 0X609);
    // 0x8022891C: addiu       $s3, $zero, 0x60A
    ctx->r19 = ADD32(0, 0X60A);
    // 0x80228920: addiu       $s5, $zero, 0x60B
    ctx->r21 = ADD32(0, 0X60B);
    // 0x80228924: addiu       $v0, $zero, 0x52E
    ctx->r2 = ADD32(0, 0X52E);
    // 0x80228928: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x8022892C: addiu       $v0, $zero, 0x52F
    ctx->r2 = ADD32(0, 0X52F);
    // 0x80228930: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x80228934: j           L_80228990
    // 0x80228938: addiu       $v0, $zero, 0x530
    ctx->r2 = ADD32(0, 0X530);
        goto L_80228990;
    // 0x80228938: addiu       $v0, $zero, 0x530
    ctx->r2 = ADD32(0, 0X530);
L_8022893C:
    // 0x8022893C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80228940: bne         $v1, $v0, L_80228970
    if (ctx->r3 != ctx->r2) {
        // 0x80228944: addiu       $a0, $zero, 0x44
        ctx->r4 = ADD32(0, 0X44);
            goto L_80228970;
    }
    // 0x80228944: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    // 0x80228948: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    // 0x8022894C: addiu       $s2, $zero, 0x606
    ctx->r18 = ADD32(0, 0X606);
    // 0x80228950: addiu       $s3, $zero, 0x607
    ctx->r19 = ADD32(0, 0X607);
    // 0x80228954: addiu       $s5, $zero, 0x608
    ctx->r21 = ADD32(0, 0X608);
    // 0x80228958: addiu       $v0, $zero, 0x531
    ctx->r2 = ADD32(0, 0X531);
    // 0x8022895C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x80228960: addiu       $v0, $zero, 0x532
    ctx->r2 = ADD32(0, 0X532);
    // 0x80228964: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x80228968: j           L_80228990
    // 0x8022896C: addiu       $v0, $zero, 0x533
    ctx->r2 = ADD32(0, 0X533);
        goto L_80228990;
    // 0x8022896C: addiu       $v0, $zero, 0x533
    ctx->r2 = ADD32(0, 0X533);
L_80228970:
    // 0x80228970: addiu       $s2, $zero, 0x63E
    ctx->r18 = ADD32(0, 0X63E);
    // 0x80228974: addiu       $s3, $zero, 0x63F
    ctx->r19 = ADD32(0, 0X63F);
    // 0x80228978: addiu       $s5, $zero, 0x640
    ctx->r21 = ADD32(0, 0X640);
    // 0x8022897C: addiu       $v0, $zero, 0x534
    ctx->r2 = ADD32(0, 0X534);
    // 0x80228980: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x80228984: addiu       $v0, $zero, 0x535
    ctx->r2 = ADD32(0, 0X535);
    // 0x80228988: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x8022898C: addiu       $v0, $zero, 0x536
    ctx->r2 = ADD32(0, 0X536);
L_80228990:
    // 0x80228990: jal         0x8006033C
    // 0x80228994: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80228994: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    after_0:
    // 0x80228998: bne         $v0, $zero, L_80228B28
    if (ctx->r2 != 0) {
        // 0x8022899C: nop
    
            goto L_80228B28;
    }
    // 0x8022899C: nop

    // 0x802289A0: jal         0x8006033C
    // 0x802289A4: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802289A4: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    after_1:
    // 0x802289A8: bnel        $v0, $zero, L_802289B0
    if (ctx->r2 != 0) {
        // 0x802289AC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802289B0;
    }
    goto skip_0;
    // 0x802289AC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
L_802289B0:
    // 0x802289B0: lw          $a0, 0x4($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X4);
    // 0x802289B4: jal         0x8006033C
    // 0x802289B8: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802289B8: nop

    after_2:
    // 0x802289BC: bnel        $v0, $zero, L_802289C4
    if (ctx->r2 != 0) {
        // 0x802289C0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802289C4;
    }
    goto skip_1;
    // 0x802289C0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
L_802289C4:
    // 0x802289C4: lw          $a0, 0x8($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X8);
    // 0x802289C8: jal         0x8006033C
    // 0x802289CC: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x802289CC: nop

    after_3:
    // 0x802289D0: bnel        $v0, $zero, L_802289D8
    if (ctx->r2 != 0) {
        // 0x802289D4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802289D8;
    }
    goto skip_2;
    // 0x802289D4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
L_802289D8:
    // 0x802289D8: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x802289DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802289E0: bne         $v1, $v0, L_80228A4C
    if (ctx->r3 != ctx->r2) {
        // 0x802289E4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80228A4C;
    }
    // 0x802289E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802289E8: jal         0x8006036C
    // 0x802289EC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x802289EC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x802289F0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802289F4: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x802289F8: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x802289FC: bne         $v1, $v0, L_80228A94
    if (ctx->r3 != ctx->r2) {
        // 0x80228A00: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_80228A94;
    }
    // 0x80228A00: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80228A04: jal         0x8006033C
    // 0x80228A08: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80228A08: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    after_5:
    // 0x80228A0C: bne         $v0, $zero, L_80228A88
    if (ctx->r2 != 0) {
        // 0x80228A10: lui         $v1, 0x80
        ctx->r3 = S32(0X80 << 16);
            goto L_80228A88;
    }
    // 0x80228A10: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80228A14: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228A18: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80228A1C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228A20: bne         $v0, $zero, L_80228A88
    if (ctx->r2 != 0) {
        // 0x80228A24: nop
    
            goto L_80228A88;
    }
    // 0x80228A24: nop

    // 0x80228A28: jal         0x8006036C
    // 0x80228A2C: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x80228A2C: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    after_6:
    // 0x80228A30: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80228A34: jal         0x800616FC
    // 0x80228A38: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_7;
    // 0x80228A38: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_7:
    // 0x80228A3C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80228A40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228A44: j           L_80228A88
    // 0x80228A48: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80228A88;
    // 0x80228A48: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80228A4C:
    // 0x80228A4C: bne         $v1, $v0, L_80228A64
    if (ctx->r3 != ctx->r2) {
        // 0x80228A50: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80228A64;
    }
    // 0x80228A50: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228A54: jal         0x8006036C
    // 0x80228A58: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8006036C_3B76C(rdram, ctx);
        goto after_8;
    // 0x80228A58: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_8:
    // 0x80228A5C: j           L_80228A80
    // 0x80228A60: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
        goto L_80228A80;
    // 0x80228A60: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_80228A64:
    // 0x80228A64: bne         $v1, $v0, L_80228A88
    if (ctx->r3 != ctx->r2) {
        // 0x80228A68: nop
    
            goto L_80228A88;
    }
    // 0x80228A68: nop

    // 0x80228A6C: jal         0x8006036C
    // 0x80228A70: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x80228A70: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_9:
    // 0x80228A74: jal         0x8006036C
    // 0x80228A78: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8006036C_3B76C(rdram, ctx);
        goto after_10;
    // 0x80228A78: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_10:
    // 0x80228A7C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
L_80228A80:
    // 0x80228A80: jal         0x8006036C
    // 0x80228A84: nop

    func_8006036C_3B76C(rdram, ctx);
        goto after_11;
    // 0x80228A84: nop

    after_11:
L_80228A88:
    // 0x80228A88: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80228A8C: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80228A90: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
L_80228A94:
    // 0x80228A94: bne         $v1, $v0, L_80228AB8
    if (ctx->r3 != ctx->r2) {
        // 0x80228A98: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80228AB8;
    }
    // 0x80228A98: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80228A9C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80228AA0: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80228AA4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228AA8: lui         $s6, 0x8024
    ctx->r22 = S32(0X8024 << 16);
    // 0x80228AAC: addu        $s6, $s6, $v0
    ctx->r22 = ADD32(ctx->r22, ctx->r2);
    // 0x80228AB0: j           L_80228AD8
    // 0x80228AB4: lw          $s6, -0x6A2C($s6)
    ctx->r22 = MEM_W(ctx->r22, -0X6A2C);
        goto L_80228AD8;
    // 0x80228AB4: lw          $s6, -0x6A2C($s6)
    ctx->r22 = MEM_W(ctx->r22, -0X6A2C);
L_80228AB8:
    // 0x80228AB8: bne         $v1, $v0, L_80228AD8
    if (ctx->r3 != ctx->r2) {
        // 0x80228ABC: nop
    
            goto L_80228AD8;
    }
    // 0x80228ABC: nop

    // 0x80228AC0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80228AC4: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80228AC8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228ACC: lui         $s6, 0x8024
    ctx->r22 = S32(0X8024 << 16);
    // 0x80228AD0: addu        $s6, $s6, $v0
    ctx->r22 = ADD32(ctx->r22, ctx->r2);
    // 0x80228AD4: lw          $s6, -0x6A20($s6)
    ctx->r22 = MEM_W(ctx->r22, -0X6A20);
L_80228AD8:
    // 0x80228AD8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80228ADC: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80228AE0: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80228AE4: bne         $v1, $v0, L_80228B00
    if (ctx->r3 != ctx->r2) {
        // 0x80228AE8: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80228B00;
    }
    // 0x80228AE8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80228AEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228AF0: jal         0x80228B58
    // 0x80228AF4: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    func_80228B58_ovl22(rdram, ctx);
        goto after_12;
    // 0x80228AF4: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_12:
    // 0x80228AF8: j           L_80228B28
    // 0x80228AFC: nop

        goto L_80228B28;
    // 0x80228AFC: nop

L_80228B00:
    // 0x80228B00: bne         $v1, $v0, L_80228B30
    if (ctx->r3 != ctx->r2) {
        // 0x80228B04: nop
    
            goto L_80228B30;
    }
    // 0x80228B04: nop

    // 0x80228B08: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80228B0C: bne         $v0, $zero, L_80228B30
    if (ctx->r2 != 0) {
        // 0x80228B10: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228B30;
    }
    // 0x80228B10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228B14: jal         0x80228DA8
    // 0x80228B18: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    func_80228DA8_ovl22(rdram, ctx);
        goto after_13;
    // 0x80228B18: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_13:
    // 0x80228B1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228B20: j           L_80228B30
    // 0x80228B24: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80228B30;
    // 0x80228B24: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80228B28:
    // 0x80228B28: jal         0x8004F684
    // 0x80228B2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_14;
    // 0x80228B2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_14:
L_80228B30:
    // 0x80228B30: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80228B34: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80228B38: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80228B3C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80228B40: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80228B44: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228B48: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228B4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228B50: jr          $ra
    // 0x80228B54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80228B54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022CDC8_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CDC8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8022CDCC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8022CDD0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CDD4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8022CDD8: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8022CDDC: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8022CDE0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022CDE4: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022CDE8: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022CDEC: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x8022CDF0: beq         $v0, $zero, L_8022D160
    if (ctx->r2 == 0) {
        // 0x8022CDF4: addiu       $s2, $s0, 0x308
        ctx->r18 = ADD32(ctx->r16, 0X308);
            goto L_8022D160;
    }
    // 0x8022CDF4: addiu       $s2, $s0, 0x308
    ctx->r18 = ADD32(ctx->r16, 0X308);
    // 0x8022CDF8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022CDFC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022CE00: addu        $at, $at, $v0
    gpr jr_addend_8022CE08 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CE04: lw          $v0, -0x5BB8($at)
    ctx->r2 = ADD32(ctx->r1, -0X5BB8);
    // 0x8022CE08: jr          $v0
    // 0x8022CE0C: nop

    switch (jr_addend_8022CE08 >> 2) {
        case 0: goto L_8022CE10; break;
        case 1: goto L_8022CE24; break;
        case 2: goto L_8022CE70; break;
        case 3: goto L_8022CE9C; break;
        case 4: goto L_8022CEF4; break;
        case 5: goto L_8022CF00; break;
        case 6: goto L_8022D100; break;
        case 7: goto L_8022CF48; break;
        case 8: goto L_8022D0A4; break;
        case 9: goto L_8022D100; break;
        case 10: goto L_8022D128; break;
        default: switch_error(__func__, 0x8022CE08, 0x8023A448);
    }
    // 0x8022CE0C: nop

L_8022CE10:
    // 0x8022CE10: jal         0x8022CC4C
    // 0x8022CE14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022CC4C_ovl22(rdram, ctx);
        goto after_0;
    // 0x8022CE14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022CE18: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022CE1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CE20: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022CE24:
    // 0x8022CE24: jal         0x8022D5B0
    // 0x8022CE28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022D5B0_ovl22(rdram, ctx);
        goto after_1;
    // 0x8022CE28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022CE2C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022CE30: beq         $v0, $zero, L_8022CE4C
    if (ctx->r2 == 0) {
        // 0x8022CE34: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CE4C;
    }
    // 0x8022CE34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CE38: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022CE3C: jal         0x80050294
    // 0x8022CE40: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022CE40: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022CE44: j           L_8022CE64
    // 0x8022CE48: nop

        goto L_8022CE64;
    // 0x8022CE48: nop

L_8022CE4C:
    // 0x8022CE4C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022CE50: jal         0x80050294
    // 0x8022CE54: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022CE54: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x8022CE58: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022CE5C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022CE60: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8022CE64:
    // 0x8022CE64: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022CE68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CE6C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022CE70:
    // 0x8022CE70: lw          $v0, 0x184($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X184);
    // 0x8022CE74: bne         $v0, $s0, L_8022D164
    if (ctx->r2 != ctx->r16) {
        // 0x8022CE78: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D164;
    }
    // 0x8022CE78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CE7C: jal         0x8022D5F8
    // 0x8022CE80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022D5F8_ovl22(rdram, ctx);
        goto after_4;
    // 0x8022CE80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022CE84: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022CE88: beql        $v0, $zero, L_8022D160
    if (ctx->r2 == 0) {
        // 0x8022CE8C: sw          $zero, 0x184($s1)
        MEM_W(0X184, ctx->r17) = 0;
            goto L_8022D160;
    }
    goto skip_0;
    // 0x8022CE8C: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    skip_0:
    // 0x8022CE90: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022CE94: j           L_8022D15C
    // 0x8022CE98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022D15C;
    // 0x8022CE98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022CE9C:
    // 0x8022CE9C: jal         0x8006FF84
    // 0x8022CEA0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_5;
    // 0x8022CEA0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8022CEA4: beq         $v0, $zero, L_8022D160
    if (ctx->r2 == 0) {
        // 0x8022CEA8: addiu       $a0, $zero, 0x3FE
        ctx->r4 = ADD32(0, 0X3FE);
            goto L_8022D160;
    }
    // 0x8022CEA8: addiu       $a0, $zero, 0x3FE
    ctx->r4 = ADD32(0, 0X3FE);
    // 0x8022CEAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022CEB0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022CEB4: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8022CEB8: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022CEBC: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8022CEC0: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x8022CEC4: jal         0x8004CB2C
    // 0x8022CEC8: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_6;
    // 0x8022CEC8: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    after_6:
    // 0x8022CECC: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x8022CED0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022CED4: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x8022CED8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022CEDC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022CEE0: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x8022CEE4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022CEE8: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
    // 0x8022CEEC: j           L_8022D160
    // 0x8022CEF0: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
        goto L_8022D160;
    // 0x8022CEF0: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
L_8022CEF4:
    // 0x8022CEF4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022CEF8: j           L_8022D15C
    // 0x8022CEFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022D15C;
    // 0x8022CEFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022CF00:
    // 0x8022CF00: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022CF04: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022CF08: bne         $v0, $zero, L_8022CF30
    if (ctx->r2 != 0) {
        // 0x8022CF0C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CF30;
    }
    // 0x8022CF0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CF10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022CF14: jal         0x80050294
    // 0x8022CF18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x8022CF18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8022CF1C: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    // 0x8022CF20: jal         0x8002A33C
    // 0x8022CF24: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x8022CF24: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_8:
    // 0x8022CF28: j           L_8022CF3C
    // 0x8022CF2C: nop

        goto L_8022CF3C;
    // 0x8022CF2C: nop

L_8022CF30:
    // 0x8022CF30: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022CF34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CF38: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022CF3C:
    // 0x8022CF3C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022CF40: j           L_8022D15C
    // 0x8022CF44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022D15C;
    // 0x8022CF44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022CF48:
    // 0x8022CF48: jal         0x8022D5B0
    // 0x8022CF4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022D5B0_ovl22(rdram, ctx);
        goto after_9;
    // 0x8022CF4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8022CF50: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022CF54: beql        $v0, $zero, L_8022D088
    if (ctx->r2 == 0) {
        // 0x8022CF58: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_8022D088;
    }
    goto skip_1;
    // 0x8022CF58: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    skip_1:
    // 0x8022CF5C: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022CF60: bne         $v1, $zero, L_8022CF84
    if (ctx->r3 != 0) {
        // 0x8022CF64: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8022CF84;
    }
    // 0x8022CF64: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8022CF68: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022CF6C: lb          $a3, 0xE($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XE);
    // 0x8022CF70: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022CF74: jal         0x800610AC
    // 0x8022CF78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_10;
    // 0x8022CF78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x8022CF7C: j           L_8022D098
    // 0x8022CF80: nop

        goto L_8022D098;
    // 0x8022CF80: nop

L_8022CF84:
    // 0x8022CF84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CF88: bnel        $v1, $v0, L_8022CFAC
    if (ctx->r3 != ctx->r2) {
        // 0x8022CF8C: andi        $v0, $v1, 0x80
        ctx->r2 = ctx->r3 & 0X80;
            goto L_8022CFAC;
    }
    goto skip_2;
    // 0x8022CF8C: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    skip_2:
    // 0x8022CF90: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022CF94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022CF98: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CF9C: jal         0x800610AC
    // 0x8022CFA0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_11;
    // 0x8022CFA0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_11:
    // 0x8022CFA4: j           L_8022D098
    // 0x8022CFA8: nop

        goto L_8022D098;
    // 0x8022CFA8: nop

L_8022CFAC:
    // 0x8022CFAC: beq         $v0, $zero, L_8022D010
    if (ctx->r2 == 0) {
        // 0x8022CFB0: lui         $a0, 0x6666
        ctx->r4 = S32(0X6666 << 16);
            goto L_8022D010;
    }
    // 0x8022CFB0: lui         $a0, 0x6666
    ctx->r4 = S32(0X6666 << 16);
    // 0x8022CFB4: ori         $a0, $a0, 0x6667
    ctx->r4 = ctx->r4 | 0X6667;
    // 0x8022CFB8: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x8022CFBC: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x8022CFC0: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022CFC4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022CFC8: sll         $a2, $v0, 2
    ctx->r6 = S32(ctx->r2 << 2);
    // 0x8022CFCC: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022CFD0: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x8022CFD4: mult        $a2, $a0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022CFD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022CFDC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022CFE0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8022CFE4: sra         $a2, $a2, 31
    ctx->r6 = S32(SIGNED(ctx->r6) >> 31);
    // 0x8022CFE8: mfhi        $t0
    ctx->r8 = hi;
    // 0x8022CFEC: sra         $v0, $t0, 2
    ctx->r2 = S32(SIGNED(ctx->r8) >> 2);
    // 0x8022CFF0: nop

    // 0x8022CFF4: jal         0x80069754
    // 0x8022CFF8: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
    func_80069754_44B54(rdram, ctx);
        goto after_12;
    // 0x8022CFF8: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
    after_12:
    // 0x8022CFFC: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8022D000: jal         0x8006036C
    // 0x8022D004: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_13;
    // 0x8022D004: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_13:
    // 0x8022D008: j           L_8022D098
    // 0x8022D00C: nop

        goto L_8022D098;
    // 0x8022D00C: nop

L_8022D010:
    // 0x8022D010: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022D014: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022D018: beq         $v1, $v0, L_8022D084
    if (ctx->r3 == ctx->r2) {
        // 0x8022D01C: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_8022D084;
    }
    // 0x8022D01C: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x8022D020: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022D024: xori        $v1, $v0, 0x40
    ctx->r3 = ctx->r2 ^ 0X40;
    // 0x8022D028: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022D02C: xori        $v0, $v0, 0x42
    ctx->r2 = ctx->r2 ^ 0X42;
    // 0x8022D030: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022D034: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022D038: beq         $v1, $zero, L_8022D058
    if (ctx->r3 == 0) {
        // 0x8022D03C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022D058;
    }
    // 0x8022D03C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D040: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022D044: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D048: jal         0x800610AC
    // 0x8022D04C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_14;
    // 0x8022D04C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    after_14:
    // 0x8022D050: j           L_8022D06C
    // 0x8022D054: nop

        goto L_8022D06C;
    // 0x8022D054: nop

L_8022D058:
    // 0x8022D058: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8022D05C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D060: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x8022D064: jal         0x80069754
    // 0x8022D068: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_15;
    // 0x8022D068: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_15:
L_8022D06C:
    // 0x8022D06C: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8022D070: jal         0x8006036C
    // 0x8022D074: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_16;
    // 0x8022D074: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_16:
    // 0x8022D078: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x8022D07C: j           L_8022D098
    // 0x8022D080: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
        goto L_8022D098;
    // 0x8022D080: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
L_8022D084:
    // 0x8022D084: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_8022D088:
    // 0x8022D088: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022D08C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D090: jal         0x80069754
    // 0x8022D094: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_17;
    // 0x8022D094: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_17:
L_8022D098:
    // 0x8022D098: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022D09C: j           L_8022D15C
    // 0x8022D0A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022D15C;
    // 0x8022D0A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022D0A4:
    // 0x8022D0A4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022D0A8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022D0AC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022D0B0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022D0B4: bne         $v0, $zero, L_8022D164
    if (ctx->r2 != 0) {
        // 0x8022D0B8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D164;
    }
    // 0x8022D0B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D0BC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022D0C0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022D0C4: bne         $v0, $zero, L_8022D0E8
    if (ctx->r2 != 0) {
        // 0x8022D0C8: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_8022D0E8;
    }
    // 0x8022D0C8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022D0CC: jal         0x80050294
    // 0x8022D0D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_18;
    // 0x8022D0D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_18:
    // 0x8022D0D4: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    // 0x8022D0D8: jal         0x8002A33C
    // 0x8022D0DC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_19;
    // 0x8022D0DC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_19:
    // 0x8022D0E0: j           L_8022D0F4
    // 0x8022D0E4: nop

        goto L_8022D0F4;
    // 0x8022D0E4: nop

L_8022D0E8:
    // 0x8022D0E8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022D0EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D0F0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022D0F4:
    // 0x8022D0F4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022D0F8: j           L_8022D15C
    // 0x8022D0FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022D15C;
    // 0x8022D0FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022D100:
    // 0x8022D100: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022D104: bgez        $v0, L_8022D118
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D108: nop
    
            goto L_8022D118;
    }
    // 0x8022D108: nop

    // 0x8022D10C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022D110: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D114: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022D118:
    // 0x8022D118: jal         0x8005044C
    // 0x8022D11C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_20;
    // 0x8022D11C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_20:
    // 0x8022D120: j           L_8022D164
    // 0x8022D124: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8022D164;
    // 0x8022D124: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022D128:
    // 0x8022D128: addiu       $a0, $zero, 0x3FE
    ctx->r4 = ADD32(0, 0X3FE);
    // 0x8022D12C: jal         0x8004CB2C
    // 0x8022D130: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_21;
    // 0x8022D130: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_21:
    // 0x8022D134: jal         0x80070050
    // 0x8022D138: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_22;
    // 0x8022D138: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_22:
    // 0x8022D13C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022D140: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x8022D144: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022D148: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022D14C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022D150: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x8022D154: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x8022D158: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022D15C:
    // 0x8022D15C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022D160:
    // 0x8022D160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022D164:
    // 0x8022D164: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022D168: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D16C: jal         0x80047284
    // 0x8022D170: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_23;
    // 0x8022D170: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_23:
    // 0x8022D174: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D178: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022D17C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D180: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022D184: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022D188: addiu       $v0, $s2, 0x18
    ctx->r2 = ADD32(ctx->r18, 0X18);
    // 0x8022D18C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022D190: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8022D194: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022D198: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022D19C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022D1A0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022D1A4: jal         0x80051E18
    // 0x8022D1A8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_24;
    // 0x8022D1A8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_24:
    // 0x8022D1AC: sw          $zero, 0x18($s2)
    MEM_W(0X18, ctx->r18) = 0;
    // 0x8022D1B0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8022D1B4: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8022D1B8: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8022D1BC: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8022D1C0: jr          $ra
    // 0x8022D1C4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8022D1C4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80226C30_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226C30: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80226C34: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80226C38: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226C3C: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x80226C40: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80226C44: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80226C48: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80226C4C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80226C50: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80226C54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226C58: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80226C5C: jal         0x8002C654
    // 0x80226C60: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x80226C60: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_0:
    // 0x80226C64: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x80226C68: addiu       $a0, $s1, 0x30
    ctx->r4 = ADD32(ctx->r17, 0X30);
    // 0x80226C6C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80226C70: sh          $zero, 0x30($s1)
    MEM_H(0X30, ctx->r17) = 0;
    // 0x80226C74: sh          $zero, 0x34($s1)
    MEM_H(0X34, ctx->r17) = 0;
    // 0x80226C78: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80226C7C: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x80226C80: jal         0x80031600
    // 0x80226C84: sh          $v0, 0x32($s1)
    MEM_H(0X32, ctx->r17) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_1;
    // 0x80226C84: sh          $v0, 0x32($s1)
    MEM_H(0X32, ctx->r17) = ctx->r2;
    after_1:
    // 0x80226C88: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80226C8C: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80226C90: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80226C94: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80226C98: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80226C9C: bne         $v1, $v0, L_80226CB0
    if (ctx->r3 != ctx->r2) {
        // 0x80226CA0: addiu       $s3, $s1, 0x2C
        ctx->r19 = ADD32(ctx->r17, 0X2C);
            goto L_80226CB0;
    }
    // 0x80226CA0: addiu       $s3, $s1, 0x2C
    ctx->r19 = ADD32(ctx->r17, 0X2C);
    // 0x80226CA4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226CA8: j           L_80226CB8
    // 0x80226CAC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_80226CB8;
    // 0x80226CAC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_80226CB0:
    // 0x80226CB0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226CB4: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
L_80226CB8:
    // 0x80226CB8: jal         0x8004D5D4
    // 0x80226CBC: nop

    func_8004D5D4_289D4(rdram, ctx);
        goto after_2;
    // 0x80226CBC: nop

    after_2:
    // 0x80226CC0: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x80226CC4: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80226CC8: addiu       $a0, $a0, -0x3BC8
    ctx->r4 = ADD32(ctx->r4, -0X3BC8);
    // 0x80226CCC: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x80226CD0: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x80226CD4: xori        $v1, $v0, 0xE
    ctx->r3 = ctx->r2 ^ 0XE;
    // 0x80226CD8: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80226CDC: xori        $v0, $v0, 0x14
    ctx->r2 = ctx->r2 ^ 0X14;
    // 0x80226CE0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80226CE4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80226CE8: bne         $v1, $zero, L_80226D04
    if (ctx->r3 != 0) {
        // 0x80226CEC: lui         $v1, 0xFFFF
        ctx->r3 = S32(0XFFFF << 16);
            goto L_80226D04;
    }
    // 0x80226CEC: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80226CF0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80226CF4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226CF8: lui         $v1, 0x1300
    ctx->r3 = S32(0X1300 << 16);
    // 0x80226CFC: bne         $v0, $v1, L_80226F24
    if (ctx->r2 != ctx->r3) {
        // 0x80226D00: nop
    
            goto L_80226F24;
    }
    // 0x80226D00: nop

L_80226D04:
    // 0x80226D04: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80226D08: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226D0C: addiu       $v1, $v1, -0x6BE4
    ctx->r3 = ADD32(ctx->r3, -0X6BE4);
    // 0x80226D10: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80226D14: bne         $v0, $zero, L_80226D2C
    if (ctx->r2 != 0) {
        // 0x80226D18: sw          $v1, 0x10($s1)
        MEM_W(0X10, ctx->r17) = ctx->r3;
            goto L_80226D2C;
    }
    // 0x80226D18: sw          $v1, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r3;
    // 0x80226D1C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80226D20: lh          $v0, -0x3A84($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3A84);
    // 0x80226D24: beq         $v0, $zero, L_80226D70
    if (ctx->r2 == 0) {
        // 0x80226D28: nop
    
            goto L_80226D70;
    }
    // 0x80226D28: nop

L_80226D2C:
    // 0x80226D2C: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80226D30: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80226D34: lb          $v1, 0x0($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X0);
    // 0x80226D38: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80226D3C: bne         $v1, $v0, L_80226D4C
    if (ctx->r3 != ctx->r2) {
        // 0x80226D40: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80226D4C;
    }
    // 0x80226D40: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80226D44: j           L_80226D60
    // 0x80226D48: addiu       $v0, $zero, -0x181
    ctx->r2 = ADD32(0, -0X181);
        goto L_80226D60;
    // 0x80226D48: addiu       $v0, $zero, -0x181
    ctx->r2 = ADD32(0, -0X181);
L_80226D4C:
    // 0x80226D4C: beq         $v1, $v0, L_80226D5C
    if (ctx->r3 == ctx->r2) {
        // 0x80226D50: addiu       $v0, $zero, 0x13
        ctx->r2 = ADD32(0, 0X13);
            goto L_80226D5C;
    }
    // 0x80226D50: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x80226D54: bne         $v1, $v0, L_80226D68
    if (ctx->r3 != ctx->r2) {
        // 0x80226D58: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80226D68;
    }
    // 0x80226D58: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80226D5C:
    // 0x80226D5C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80226D60:
    // 0x80226D60: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    // 0x80226D64: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80226D68:
    // 0x80226D68: j           L_80226FD8
    // 0x80226D6C: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
        goto L_80226FD8;
    // 0x80226D6C: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
L_80226D70:
    // 0x80226D70: lh          $v1, 0x38($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X38);
    // 0x80226D74: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x80226D78: bne         $v1, $v0, L_80226ECC
    if (ctx->r3 != ctx->r2) {
        // 0x80226D7C: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_80226ECC;
    }
    // 0x80226D7C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80226D80: lh          $v1, 0x3C($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X3C);
    // 0x80226D84: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x80226D88: bnel        $v1, $v0, L_80226ED0
    if (ctx->r3 != ctx->r2) {
        // 0x80226D8C: sb          $zero, 0x9($s1)
        MEM_B(0X9, ctx->r17) = 0;
            goto L_80226ED0;
    }
    goto skip_0;
    // 0x80226D8C: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    skip_0:
    // 0x80226D90: sh          $a0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r4;
    // 0x80226D94: sh          $a0, 0x438($s2)
    MEM_H(0X438, ctx->r18) = ctx->r4;
    // 0x80226D98: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x80226D9C: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    // 0x80226DA0: sh          $v0, 0x43A($s2)
    MEM_H(0X43A, ctx->r18) = ctx->r2;
    // 0x80226DA4: lhu         $a1, 0x3C($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X3C);
    // 0x80226DA8: lh          $v0, 0x438($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X438);
    // 0x80226DAC: lh          $v1, 0x43A($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X43A);
    // 0x80226DB0: sh          $a1, 0x43C($s2)
    MEM_H(0X43C, ctx->r18) = ctx->r5;
    // 0x80226DB4: lh          $a0, 0x43C($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X43C);
    // 0x80226DB8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226DBC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80226DC0: sw          $v0, 0x428($s2)
    MEM_W(0X428, ctx->r18) = ctx->r2;
    // 0x80226DC4: sh          $a1, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r5;
    // 0x80226DC8: sw          $v1, 0x42C($s2)
    MEM_W(0X42C, ctx->r18) = ctx->r3;
    // 0x80226DCC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80226DD0: sw          $a0, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r4;
    // 0x80226DD4: lhu         $v0, 0x6($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X6);
    // 0x80226DD8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80226DDC: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80226DE0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226DE4: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x80226DE8: jal         0x8006FF84
    // 0x80226DEC: sh          $v0, 0x442($s2)
    MEM_H(0X442, ctx->r18) = ctx->r2;
    func_8006FF84_4B384(rdram, ctx);
        goto after_3;
    // 0x80226DEC: sh          $v0, 0x442($s2)
    MEM_H(0X442, ctx->r18) = ctx->r2;
    after_3:
    // 0x80226DF0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80226DF4: bne         $v0, $v1, L_80226FFC
    if (ctx->r2 != ctx->r3) {
        // 0x80226DF8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80226FFC;
    }
    // 0x80226DF8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226DFC: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x80226E00: beq         $v1, $v0, L_80226FFC
    if (ctx->r3 == ctx->r2) {
        // 0x80226E04: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80226FFC;
    }
    // 0x80226E04: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226E08: lbu         $v1, 0xBD($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XBD);
    // 0x80226E0C: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80226E10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226E14: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x80226E18: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80226E1C: sb          $v1, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r3;
    // 0x80226E20: lhu         $v0, 0x38($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X38);
    // 0x80226E24: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x80226E28: sh          $v0, 0x438($s2)
    MEM_H(0X438, ctx->r18) = ctx->r2;
    // 0x80226E2C: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x80226E30: addiu       $s0, $s1, 0x38
    ctx->r16 = ADD32(ctx->r17, 0X38);
    // 0x80226E34: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    // 0x80226E38: sh          $v0, 0x43A($s2)
    MEM_H(0X43A, ctx->r18) = ctx->r2;
    // 0x80226E3C: lhu         $a1, 0x3C($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X3C);
    // 0x80226E40: lh          $v0, 0x438($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X438);
    // 0x80226E44: lh          $v1, 0x43A($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X43A);
    // 0x80226E48: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226E4C: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    // 0x80226E50: sh          $zero, 0x440($s2)
    MEM_H(0X440, ctx->r18) = 0;
    // 0x80226E54: sh          $zero, 0x444($s2)
    MEM_H(0X444, ctx->r18) = 0;
    // 0x80226E58: sb          $zero, 0x448($s2)
    MEM_B(0X448, ctx->r18) = 0;
    // 0x80226E5C: sh          $a1, 0x43C($s2)
    MEM_H(0X43C, ctx->r18) = ctx->r5;
    // 0x80226E60: lh          $a0, 0x43C($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X43C);
    // 0x80226E64: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226E68: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80226E6C: sw          $v0, 0x428($s2)
    MEM_W(0X428, ctx->r18) = ctx->r2;
    // 0x80226E70: sh          $a1, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r5;
    // 0x80226E74: sw          $v1, 0x42C($s2)
    MEM_W(0X42C, ctx->r18) = ctx->r3;
    // 0x80226E78: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80226E7C: sw          $a0, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r4;
    // 0x80226E80: lhu         $v0, 0x6($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X6);
    // 0x80226E84: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80226E88: addiu       $a1, $a1, -0x6BF0
    ctx->r5 = ADD32(ctx->r5, -0X6BF0);
    // 0x80226E8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226E90: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80226E94: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226E98: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x80226E9C: sh          $v0, 0x442($s2)
    MEM_H(0X442, ctx->r18) = ctx->r2;
    // 0x80226EA0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80226EA4: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x80226EA8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226EAC: jal         0x8003E964
    // 0x80226EB0: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    func_8003E964_19D64(rdram, ctx);
        goto after_4;
    // 0x80226EB0: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    after_4:
    // 0x80226EB4: addiu       $a0, $zero, 0x176
    ctx->r4 = ADD32(0, 0X176);
    // 0x80226EB8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80226EBC: jal         0x8002A33C
    // 0x80226EC0: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x80226EC0: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    after_5:
    // 0x80226EC4: j           L_80226F14
    // 0x80226EC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80226F14;
    // 0x80226EC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80226ECC:
    // 0x80226ECC: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80226ED0:
    // 0x80226ED0: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80226ED4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80226ED8: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80226EDC: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80226EE0: bne         $v1, $v0, L_80226EF0
    if (ctx->r3 != ctx->r2) {
        // 0x80226EE4: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80226EF0;
    }
    // 0x80226EE4: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80226EE8: j           L_80226F04
    // 0x80226EEC: addiu       $v0, $zero, -0x181
    ctx->r2 = ADD32(0, -0X181);
        goto L_80226F04;
    // 0x80226EEC: addiu       $v0, $zero, -0x181
    ctx->r2 = ADD32(0, -0X181);
L_80226EF0:
    // 0x80226EF0: beq         $v1, $v0, L_80226F00
    if (ctx->r3 == ctx->r2) {
        // 0x80226EF4: addiu       $v0, $zero, 0x13
        ctx->r2 = ADD32(0, 0X13);
            goto L_80226F00;
    }
    // 0x80226EF4: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x80226EF8: bne         $v1, $v0, L_80226F0C
    if (ctx->r3 != ctx->r2) {
        // 0x80226EFC: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80226F0C;
    }
    // 0x80226EFC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80226F00:
    // 0x80226F00: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80226F04:
    // 0x80226F04: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    // 0x80226F08: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80226F0C:
    // 0x80226F0C: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x80226F10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80226F14:
    // 0x80226F14: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80226F18: sh          $v0, -0x3A84($at)
    MEM_H(-0X3A84, ctx->r1) = ctx->r2;
    // 0x80226F1C: j           L_80226FDC
    // 0x80226F20: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
        goto L_80226FDC;
    // 0x80226F20: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
L_80226F24:
    // 0x80226F24: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80226F28: bne         $v0, $zero, L_80226F40
    if (ctx->r2 != 0) {
        // 0x80226F2C: nop
    
            goto L_80226F40;
    }
    // 0x80226F2C: nop

    // 0x80226F30: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226F34: addiu       $v0, $v0, -0x6BE4
    ctx->r2 = ADD32(ctx->r2, -0X6BE4);
    // 0x80226F38: j           L_80226F4C
    // 0x80226F3C: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
        goto L_80226F4C;
    // 0x80226F3C: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
L_80226F40:
    // 0x80226F40: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226F44: addiu       $v0, $v0, -0x6BD8
    ctx->r2 = ADD32(ctx->r2, -0X6BD8);
    // 0x80226F48: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
L_80226F4C:
    // 0x80226F4C: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x80226F50: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226F54: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80226F58: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x80226F5C: bne         $v1, $v0, L_80226F94
    if (ctx->r3 != ctx->r2) {
        // 0x80226F60: sb          $zero, 0xA($s1)
        MEM_B(0XA, ctx->r17) = 0;
            goto L_80226F94;
    }
    // 0x80226F60: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80226F64: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80226F68: lh          $v0, -0x3A7E($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3A7E);
    // 0x80226F6C: beq         $v0, $zero, L_80226F88
    if (ctx->r2 == 0) {
        // 0x80226F70: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80226F88;
    }
    // 0x80226F70: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226F74: lh          $v0, 0x3A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3A);
    // 0x80226F78: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x80226F7C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80226F80: j           L_80226FD4
    // 0x80226F84: sh          $v1, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r3;
        goto L_80226FD4;
    // 0x80226F84: sh          $v1, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r3;
L_80226F88:
    // 0x80226F88: lh          $v0, 0x3A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3A);
    // 0x80226F8C: j           L_80226FD8
    // 0x80226F90: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
        goto L_80226FD8;
    // 0x80226F90: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
L_80226F94:
    // 0x80226F94: lh          $v0, 0x3A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3A);
    // 0x80226F98: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x80226F9C: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80226FA0: bne         $v0, $zero, L_80226FB4
    if (ctx->r2 != 0) {
        // 0x80226FA4: nop
    
            goto L_80226FB4;
    }
    // 0x80226FA4: nop

    // 0x80226FA8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80226FAC: j           L_80226FBC
    // 0x80226FB0: lh          $v0, -0x3A82($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3A82);
        goto L_80226FBC;
    // 0x80226FB0: lh          $v0, -0x3A82($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3A82);
L_80226FB4:
    // 0x80226FB4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80226FB8: lh          $v0, -0x3A80($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3A80);
L_80226FBC:
    // 0x80226FBC: beq         $v0, $zero, L_80226FD8
    if (ctx->r2 == 0) {
        // 0x80226FC0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80226FD8;
    }
    // 0x80226FC0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226FC4: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80226FC8: sh          $v1, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r3;
    // 0x80226FCC: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x80226FD0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_80226FD4:
    // 0x80226FD4: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_80226FD8:
    // 0x80226FD8: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
L_80226FDC:
    // 0x80226FDC: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80226FE0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226FE4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80226FE8: sw          $v0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r2;
    // 0x80226FEC: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80226FF0: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
    // 0x80226FF4: jal         0x80227018
    // 0x80226FF8: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    func_80227018_ovl22(rdram, ctx);
        goto after_6;
    // 0x80226FF8: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    after_6:
L_80226FFC:
    // 0x80226FFC: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x80227000: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80227004: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80227008: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022700C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80227010: jr          $ra
    // 0x80227014: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80227014: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80233770_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233770: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233774: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233778: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023377C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80233780: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80233784: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80233788: beq         $v0, $zero, L_80233804
    if (ctx->r2 == 0) {
        // 0x8023378C: nop
    
            goto L_80233804;
    }
    // 0x8023378C: nop

    // 0x80233790: jal         0x8004F144
    // 0x80233794: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80233794: nop

    after_0:
    // 0x80233798: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8023379C: beq         $s1, $zero, L_802337CC
    if (ctx->r17 == 0) {
        // 0x802337A0: addiu       $a1, $s0, 0x14
        ctx->r5 = ADD32(ctx->r16, 0X14);
            goto L_802337CC;
    }
    // 0x802337A0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802337A4: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x802337A8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802337AC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x802337B0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802337B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802337B8: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x802337BC: jal         0x8009A3B4
    // 0x802337C0: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802337C0: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    after_1:
    // 0x802337C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802337C8: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
L_802337CC:
    // 0x802337CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802337D0: jal         0x8007A1B8
    // 0x802337D4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x802337D4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x802337D8: jal         0x80049EDC
    // 0x802337DC: nop

    func_80049EDC_252DC(rdram, ctx);
        goto after_3;
    // 0x802337DC: nop

    after_3:
    // 0x802337E0: jal         0x8004A0DC
    // 0x802337E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004A0DC_254DC(rdram, ctx);
        goto after_4;
    // 0x802337E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802337E8: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802337EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802337F0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802337F4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802337F8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802337FC: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80233800: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
L_80233804:
    // 0x80233804: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80233808: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023380C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233810: jr          $ra
    // 0x80233814: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233814: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F650_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F650: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F654: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F658: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F65C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F660: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022F664: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022F668: jal         0x8004DA90
    // 0x8022F66C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022F66C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022F670: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022F674: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022F678: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F67C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022F680: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F684: bltz        $v0, L_8022F6C8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022F688: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022F6C8;
    }
    // 0x8022F688: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F68C: lbu         $v1, 0x1DC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1DC);
    // 0x8022F690: bne         $v1, $v0, L_8022F6BC
    if (ctx->r3 != ctx->r2) {
        // 0x8022F694: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022F6BC;
    }
    // 0x8022F694: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F698: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F69C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022F6A0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022F6A4: jal         0x8004F820
    // 0x8022F6A8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022F6A8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_1:
    // 0x8022F6AC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F6B0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F6B4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022F6B8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022F6BC:
    // 0x8022F6BC: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022F6C0: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022F6C4: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
L_8022F6C8:
    // 0x8022F6C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F6CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F6D0: jr          $ra
    // 0x8022F6D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F6D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022543C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022543C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225440: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225444: jal         0x8006033C
    // 0x80225448: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225448: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_0:
    // 0x8022544C: beq         $v0, $zero, L_8022545C
    if (ctx->r2 == 0) {
        // 0x80225450: nop
    
            goto L_8022545C;
    }
    // 0x80225450: nop

    // 0x80225454: jal         0x80060690
    // 0x80225458: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x80225458: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_8022545C:
    // 0x8022545C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225460: jr          $ra
    // 0x80225464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231FEC_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231FEC: lhu         $v1, 0x32C($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X32C);
    // 0x80231FF0: andi        $v0, $v1, 0x200
    ctx->r2 = ctx->r3 & 0X200;
    // 0x80231FF4: beq         $v0, $zero, L_80232010
    if (ctx->r2 == 0) {
        // 0x80231FF8: addiu       $a1, $a0, 0x328
        ctx->r5 = ADD32(ctx->r4, 0X328);
            goto L_80232010;
    }
    // 0x80231FF8: addiu       $a1, $a0, 0x328
    ctx->r5 = ADD32(ctx->r4, 0X328);
    // 0x80231FFC: andi        $v0, $v1, 0xFDFF
    ctx->r2 = ctx->r3 & 0XFDFF;
    // 0x80232000: sh          $v0, 0x32C($a0)
    MEM_H(0X32C, ctx->r4) = ctx->r2;
    // 0x80232004: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80232008: j           L_80232154
    // 0x8023200C: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
        goto L_80232154;
    // 0x8023200C: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80232010:
    // 0x80232010: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x80232014: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x80232018: beq         $v0, $zero, L_80232154
    if (ctx->r2 == 0) {
        // 0x8023201C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80232154;
    }
    // 0x8023201C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80232020: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232024: addu        $at, $at, $v0
    gpr jr_addend_8023202C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232028: lw          $v0, -0x5AD8($at)
    ctx->r2 = ADD32(ctx->r1, -0X5AD8);
    // 0x8023202C: jr          $v0
    // 0x80232030: nop

    switch (jr_addend_8023202C >> 2) {
        case 0: goto L_80232034; break;
        case 1: goto L_802320A4; break;
        case 2: goto L_802320B0; break;
        case 3: goto L_802320C8; break;
        case 4: goto L_802320D4; break;
        case 5: goto L_80232144; break;
        case 6: goto L_80232144; break;
        case 7: goto L_80232150; break;
        default: switch_error(__func__, 0x8023202C, 0x8023A528);
    }
    // 0x80232030: nop

L_80232034:
    // 0x80232034: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80232038: andi        $v1, $v0, 0xFFFB
    ctx->r3 = ctx->r2 & 0XFFFB;
    // 0x8023203C: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x80232040: beq         $v0, $zero, L_8023208C
    if (ctx->r2 == 0) {
        // 0x80232044: sh          $v1, 0x4($a1)
        MEM_H(0X4, ctx->r5) = ctx->r3;
            goto L_8023208C;
    }
    // 0x80232044: sh          $v1, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r3;
    // 0x80232048: lh          $v0, 0x3E($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X3E);
    // 0x8023204C: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80232050: beq         $v0, $zero, L_8023208C
    if (ctx->r2 == 0) {
        // 0x80232054: ori         $v0, $v1, 0x4
        ctx->r2 = ctx->r3 | 0X4;
            goto L_8023208C;
    }
    // 0x80232054: ori         $v0, $v1, 0x4
    ctx->r2 = ctx->r3 | 0X4;
    // 0x80232058: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8023205C: lw          $v1, 0x80($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X80);
    // 0x80232060: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x80232064: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80232068: bne         $v0, $zero, L_80232090
    if (ctx->r2 != 0) {
        // 0x8023206C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80232090;
    }
    // 0x8023206C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80232070: lhu         $v0, 0x6($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X6);
    // 0x80232074: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80232078: sltiu       $v0, $v0, 0xD
    ctx->r2 = ctx->r2 < 0XD ? 1 : 0;
    // 0x8023207C: bne         $v0, $zero, L_80232090
    if (ctx->r2 != 0) {
        // 0x80232080: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80232090;
    }
    // 0x80232080: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80232084: j           L_80232090
    // 0x80232088: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80232090;
    // 0x80232088: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8023208C:
    // 0x8023208C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80232090:
    // 0x80232090: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80232094: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80232098: andi        $v0, $v0, 0xFEFF
    ctx->r2 = ctx->r2 & 0XFEFF;
    // 0x8023209C: j           L_80232154
    // 0x802320A0: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
        goto L_80232154;
    // 0x802320A0: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
L_802320A4:
    // 0x802320A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802320A8: j           L_80232154
    // 0x802320AC: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
        goto L_80232154;
    // 0x802320AC: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_802320B0:
    // 0x802320B0: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x802320B4: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x802320B8: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x802320BC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802320C0: j           L_80232154
    // 0x802320C4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
        goto L_80232154;
    // 0x802320C4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_802320C8:
    // 0x802320C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802320CC: j           L_80232154
    // 0x802320D0: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
        goto L_80232154;
    // 0x802320D0: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_802320D4:
    // 0x802320D4: lhu         $v1, 0x4($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4);
    // 0x802320D8: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x802320DC: beq         $v0, $zero, L_8023212C
    if (ctx->r2 == 0) {
        // 0x802320E0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023212C;
    }
    // 0x802320E0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802320E4: lh          $v0, 0x3E($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X3E);
    // 0x802320E8: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x802320EC: beq         $v0, $zero, L_80232128
    if (ctx->r2 == 0) {
        // 0x802320F0: ori         $v0, $v1, 0x4
        ctx->r2 = ctx->r3 | 0X4;
            goto L_80232128;
    }
    // 0x802320F0: ori         $v0, $v1, 0x4
    ctx->r2 = ctx->r3 | 0X4;
    // 0x802320F4: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x802320F8: lw          $v1, 0x80($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X80);
    // 0x802320FC: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x80232100: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80232104: bne         $v0, $zero, L_80232130
    if (ctx->r2 != 0) {
        // 0x80232108: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80232130;
    }
    // 0x80232108: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023210C: lhu         $v0, 0x6($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X6);
    // 0x80232110: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80232114: sltiu       $v0, $v0, 0xD
    ctx->r2 = ctx->r2 < 0XD ? 1 : 0;
    // 0x80232118: bne         $v0, $zero, L_80232130
    if (ctx->r2 != 0) {
        // 0x8023211C: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80232130;
    }
    // 0x8023211C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80232120: j           L_80232130
    // 0x80232124: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80232130;
    // 0x80232124: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80232128:
    // 0x80232128: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8023212C:
    // 0x8023212C: sh          $zero, 0x3E($a1)
    MEM_H(0X3E, ctx->r5) = 0;
L_80232130:
    // 0x80232130: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80232134: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80232138: andi        $v0, $v0, 0xFF7F
    ctx->r2 = ctx->r2 & 0XFF7F;
    // 0x8023213C: j           L_80232154
    // 0x80232140: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
        goto L_80232154;
    // 0x80232140: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
L_80232144:
    // 0x80232144: lhu         $v0, 0x3E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X3E);
    // 0x80232148: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023214C: sh          $v0, 0x3E($a1)
    MEM_H(0X3E, ctx->r5) = ctx->r2;
L_80232150:
    // 0x80232150: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_80232154:
    // 0x80232154: jr          $ra
    // 0x80232158: nop

    TRACE_RETURN()
    return;
    // 0x80232158: nop

;}
RECOMP_FUNC void func_8023626C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023626C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80236270: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80236274: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80236278: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x8023627C: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80236280: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80236284: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80236288: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8023628C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80236290: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80236294: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x80236298: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8023629C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802362A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802362A4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802362A8: lui         $s5, 0x8024
    ctx->r21 = S32(0X8024 << 16);
    // 0x802362AC: addu        $s5, $s5, $v0
    ctx->r21 = ADD32(ctx->r21, ctx->r2);
    // 0x802362B0: lhu         $s5, -0x5E2C($s5)
    ctx->r21 = MEM_HU(ctx->r21, -0X5E2C);
    // 0x802362B4: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x802362B8: lui         $s6, 0x8024
    ctx->r22 = S32(0X8024 << 16);
    // 0x802362BC: addu        $s6, $s6, $v0
    ctx->r22 = ADD32(ctx->r22, ctx->r2);
    // 0x802362C0: lhu         $s6, -0x5E2A($s6)
    ctx->r22 = MEM_HU(ctx->r22, -0X5E2A);
    // 0x802362C4: jal         0x800874D0
    // 0x802362C8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_800874D0_628D0(rdram, ctx);
        goto after_0;
    // 0x802362C8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_0:
    // 0x802362CC: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x802362D0: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x802362D4: lh          $a2, 0x1A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1A);
    // 0x802362D8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802362DC: addiu       $a0, $a0, -0x59F0
    ctx->r4 = ADD32(ctx->r4, -0X59F0);
    // 0x802362E0: sll         $a3, $s6, 16
    ctx->r7 = S32(ctx->r22 << 16);
    // 0x802362E4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802362E8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802362EC: lbu         $v1, -0x5D88($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5D88);
    // 0x802362F0: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x802362F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802362F8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802362FC: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80236300: jal         0x80086F94
    // 0x80236304: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80086F94_62394(rdram, ctx);
        goto after_1;
    // 0x80236304: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_1:
    // 0x80236308: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x8023630C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80236310: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80236314: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80236318: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023631C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236320: lhu         $v0, -0x5E28($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X5E28);
    // 0x80236324: beq         $v0, $zero, L_80236540
    if (ctx->r2 == 0) {
        // 0x80236328: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_80236540;
    }
    // 0x80236328: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
L_8023632C:
    // 0x8023632C: bgez        $s6, L_80236338
    if (SIGNED(ctx->r22) >= 0) {
        // 0x80236330: addu        $v0, $s6, $zero
        ctx->r2 = ADD32(ctx->r22, 0);
            goto L_80236338;
    }
    // 0x80236330: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x80236334: addiu       $v0, $s6, 0xF
    ctx->r2 = ADD32(ctx->r22, 0XF);
L_80236338:
    // 0x80236338: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023633C: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80236340: beq         $v0, $zero, L_802365FC
    if (ctx->r2 == 0) {
        // 0x80236344: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_802365FC;
    }
    // 0x80236344: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80236348: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8023634C: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x80236350: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x80236354: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x80236358: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8023635C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80236360: jal         0x800874D0
    // 0x80236364: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_2;
    // 0x80236364: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_2:
    // 0x80236368: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8023636C: jal         0x80087248
    // 0x80236370: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_3;
    // 0x80236370: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_3:
    // 0x80236374: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80236378: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8023637C: lh          $v0, 0x18($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X18);
    // 0x80236380: lh          $a0, 0x1A($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X1A);
    // 0x80236384: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x80236388: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8023638C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80236390: jal         0x800874D0
    // 0x80236394: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_4;
    // 0x80236394: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_4:
    // 0x80236398: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8023639C: jal         0x80087248
    // 0x802363A0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_5;
    // 0x802363A0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_5:
    // 0x802363A4: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
    // 0x802363A8: bgez        $s5, L_802363B4
    if (SIGNED(ctx->r21) >= 0) {
        // 0x802363AC: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_802363B4;
    }
    // 0x802363AC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x802363B0: addiu       $v1, $s5, 0xFF
    ctx->r3 = ADD32(ctx->r21, 0XFF);
L_802363B4:
    // 0x802363B4: addu        $a0, $s5, $s0
    ctx->r4 = ADD32(ctx->r21, ctx->r16);
    // 0x802363B8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x802363BC: jal         0x800874D0
    // 0x802363C0: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_6;
    // 0x802363C0: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_6:
    // 0x802363C4: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x802363C8: jal         0x80087248
    // 0x802363CC: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_7;
    // 0x802363CC: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_7:
    // 0x802363D0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802363D4: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x802363D8: sltiu       $v1, $s2, 0x1
    ctx->r3 = ctx->r18 < 0X1 ? 1 : 0;
    // 0x802363DC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x802363E0: bnel        $v0, $zero, L_8023632C
    if (ctx->r2 != 0) {
        // 0x802363E4: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8023632C;
    }
    goto skip_0;
    // 0x802363E4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x802363E8: beq         $a1, $zero, L_80236538
    if (ctx->r5 == 0) {
        // 0x802363EC: addu        $t7, $zero, $zero
        ctx->r15 = ADD32(0, 0);
            goto L_80236538;
    }
    // 0x802363EC: addu        $t7, $zero, $zero
    ctx->r15 = ADD32(0, 0);
    // 0x802363F0: addu        $t6, $a1, $zero
    ctx->r14 = ADD32(ctx->r5, 0);
    // 0x802363F4: addu        $t5, $s2, $zero
    ctx->r13 = ADD32(ctx->r18, 0);
    // 0x802363F8: addu        $t4, $s1, $zero
    ctx->r12 = ADD32(ctx->r17, 0);
L_802363FC:
    // 0x802363FC: lhu         $t1, 0x0($t4)
    ctx->r9 = MEM_HU(ctx->r12, 0X0);
    // 0x80236400: lhu         $v1, 0x0($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0X0);
    // 0x80236404: lb          $t3, 0xD($s3)
    ctx->r11 = MEM_B(ctx->r19, 0XD);
    // 0x80236408: andi        $a2, $t1, 0xFFFF
    ctx->r6 = ctx->r9 & 0XFFFF;
    // 0x8023640C: srl         $t2, $a2, 11
    ctx->r10 = S32(U32(ctx->r6) >> 11);
    // 0x80236410: srl         $a3, $v1, 11
    ctx->r7 = S32(U32(ctx->r3) >> 11);
    // 0x80236414: subu        $a3, $a3, $t2
    ctx->r7 = SUB32(ctx->r7, ctx->r10);
    // 0x80236418: mult        $a3, $t3
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023641C: mflo        $a3
    ctx->r7 = lo;
    // 0x80236420: lb          $a1, 0xC($s3)
    ctx->r5 = MEM_B(ctx->r19, 0XC);
    // 0x80236424: nop

    // 0x80236428: div         $zero, $a3, $a1
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r5)));
    // 0x8023642C: bne         $a1, $zero, L_80236438
    if (ctx->r5 != 0) {
        // 0x80236430: nop
    
            goto L_80236438;
    }
    // 0x80236430: nop

    // 0x80236434: break       7
    do_break(2149803060);
L_80236438:
    // 0x80236438: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023643C: bne         $a1, $at, L_80236450
    if (ctx->r5 != ctx->r1) {
        // 0x80236440: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80236450;
    }
    // 0x80236440: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80236444: bne         $a3, $at, L_80236450
    if (ctx->r7 != ctx->r1) {
        // 0x80236448: nop
    
            goto L_80236450;
    }
    // 0x80236448: nop

    // 0x8023644C: break       6
    do_break(2149803084);
L_80236450:
    // 0x80236450: mflo        $a3
    ctx->r7 = lo;
    // 0x80236454: sra         $t0, $a2, 6
    ctx->r8 = S32(SIGNED(ctx->r6) >> 6);
    // 0x80236458: andi        $t0, $t0, 0x1F
    ctx->r8 = ctx->r8 & 0X1F;
    // 0x8023645C: sra         $v0, $v1, 6
    ctx->r2 = S32(SIGNED(ctx->r3) >> 6);
    // 0x80236460: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80236464: subu        $v0, $v0, $t0
    ctx->r2 = SUB32(ctx->r2, ctx->r8);
    // 0x80236468: mult        $v0, $t3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023646C: mflo        $v0
    ctx->r2 = lo;
    // 0x80236470: nop

    // 0x80236474: nop

    // 0x80236478: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x8023647C: bne         $a1, $zero, L_80236488
    if (ctx->r5 != 0) {
        // 0x80236480: nop
    
            goto L_80236488;
    }
    // 0x80236480: nop

    // 0x80236484: break       7
    do_break(2149803140);
L_80236488:
    // 0x80236488: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023648C: bne         $a1, $at, L_802364A0
    if (ctx->r5 != ctx->r1) {
        // 0x80236490: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802364A0;
    }
    // 0x80236490: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80236494: bne         $v0, $at, L_802364A0
    if (ctx->r2 != ctx->r1) {
        // 0x80236498: nop
    
            goto L_802364A0;
    }
    // 0x80236498: nop

    // 0x8023649C: break       6
    do_break(2149803164);
L_802364A0:
    // 0x802364A0: mflo        $v0
    ctx->r2 = lo;
    // 0x802364A4: sra         $a2, $a2, 1
    ctx->r6 = S32(SIGNED(ctx->r6) >> 1);
    // 0x802364A8: andi        $a2, $a2, 0x1F
    ctx->r6 = ctx->r6 & 0X1F;
    // 0x802364AC: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x802364B0: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x802364B4: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x802364B8: mult        $v1, $t3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802364BC: mflo        $v1
    ctx->r3 = lo;
    // 0x802364C0: nop

    // 0x802364C4: nop

    // 0x802364C8: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x802364CC: bne         $a1, $zero, L_802364D8
    if (ctx->r5 != 0) {
        // 0x802364D0: nop
    
            goto L_802364D8;
    }
    // 0x802364D0: nop

    // 0x802364D4: break       7
    do_break(2149803220);
L_802364D8:
    // 0x802364D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802364DC: bne         $a1, $at, L_802364F0
    if (ctx->r5 != ctx->r1) {
        // 0x802364E0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802364F0;
    }
    // 0x802364E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802364E4: bne         $v1, $at, L_802364F0
    if (ctx->r3 != ctx->r1) {
        // 0x802364E8: nop
    
            goto L_802364F0;
    }
    // 0x802364E8: nop

    // 0x802364EC: break       6
    do_break(2149803244);
L_802364F0:
    // 0x802364F0: mflo        $v1
    ctx->r3 = lo;
    // 0x802364F4: addiu       $t5, $t5, 0x2
    ctx->r13 = ADD32(ctx->r13, 0X2);
    // 0x802364F8: addiu       $t4, $t4, 0x2
    ctx->r12 = ADD32(ctx->r12, 0X2);
    // 0x802364FC: addiu       $t7, $t7, 0x1
    ctx->r15 = ADD32(ctx->r15, 0X1);
    // 0x80236500: andi        $t1, $t1, 0x1
    ctx->r9 = ctx->r9 & 0X1;
    // 0x80236504: addu        $t2, $t2, $a3
    ctx->r10 = ADD32(ctx->r10, ctx->r7);
    // 0x80236508: sll         $t2, $t2, 11
    ctx->r10 = S32(ctx->r10 << 11);
    // 0x8023650C: or          $t1, $t1, $t2
    ctx->r9 = ctx->r9 | ctx->r10;
    // 0x80236510: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x80236514: sll         $t0, $t0, 6
    ctx->r8 = S32(ctx->r8 << 6);
    // 0x80236518: or          $t1, $t1, $t0
    ctx->r9 = ctx->r9 | ctx->r8;
    // 0x8023651C: slti        $v0, $t7, 0x10
    ctx->r2 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x80236520: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80236524: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x80236528: or          $t1, $t1, $a2
    ctx->r9 = ctx->r9 | ctx->r6;
    // 0x8023652C: sh          $t1, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r9;
    // 0x80236530: bne         $v0, $zero, L_802363FC
    if (ctx->r2 != 0) {
        // 0x80236534: addiu       $t6, $t6, 0x2
        ctx->r14 = ADD32(ctx->r14, 0X2);
            goto L_802363FC;
    }
    // 0x80236534: addiu       $t6, $t6, 0x2
    ctx->r14 = ADD32(ctx->r14, 0X2);
L_80236538:
    // 0x80236538: j           L_8023632C
    // 0x8023653C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_8023632C;
    // 0x8023653C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_80236540:
    // 0x80236540: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x80236544: bne         $v0, $zero, L_802365FC
    if (ctx->r2 != 0) {
        // 0x80236548: nop
    
            goto L_802365FC;
    }
    // 0x80236548: nop

L_8023654C:
    // 0x8023654C: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x80236550: bltzl       $v0, L_80236558
    if (SIGNED(ctx->r2) < 0) {
        // 0x80236554: addiu       $v0, $v0, 0xF
        ctx->r2 = ADD32(ctx->r2, 0XF);
            goto L_80236558;
    }
    goto skip_1;
    // 0x80236554: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    skip_1:
L_80236558:
    // 0x80236558: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023655C: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80236560: beq         $v0, $zero, L_802365FC
    if (ctx->r2 == 0) {
        // 0x80236564: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_802365FC;
    }
    // 0x80236564: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80236568: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8023656C: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x80236570: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x80236574: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x80236578: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8023657C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80236580: jal         0x800874D0
    // 0x80236584: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_8;
    // 0x80236584: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_8:
    // 0x80236588: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8023658C: jal         0x80087248
    // 0x80236590: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_9;
    // 0x80236590: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_9:
    // 0x80236594: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80236598: bgez        $s5, L_802365A4
    if (SIGNED(ctx->r21) >= 0) {
        // 0x8023659C: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_802365A4;
    }
    // 0x8023659C: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x802365A0: addiu       $v0, $s5, 0xFF
    ctx->r2 = ADD32(ctx->r21, 0XFF);
L_802365A4:
    // 0x802365A4: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x802365A8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802365AC: subu        $v1, $s5, $v0
    ctx->r3 = SUB32(ctx->r21, ctx->r2);
    // 0x802365B0: addu        $a0, $s0, $v1
    ctx->r4 = ADD32(ctx->r16, ctx->r3);
    // 0x802365B4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802365B8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x802365BC: jal         0x800874D0
    // 0x802365C0: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_10;
    // 0x802365C0: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_10:
    // 0x802365C4: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x802365C8: jal         0x80087248
    // 0x802365CC: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_11;
    // 0x802365CC: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_11:
    // 0x802365D0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802365D4: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x802365D8: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x802365DC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x802365E0: bnel        $v0, $zero, L_8023654C
    if (ctx->r2 != 0) {
        // 0x802365E4: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8023654C;
    }
    goto skip_2;
    // 0x802365E4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_2:
    // 0x802365E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802365EC: jal         0x80099F90
    // 0x802365F0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    bcopy_recomp(rdram, ctx);
        goto after_12;
    // 0x802365F0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_12:
    // 0x802365F4: j           L_8023654C
    // 0x802365F8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_8023654C;
    // 0x802365F8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_802365FC:
    // 0x802365FC: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80236600: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80236604: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x80236608: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x8023660C: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80236610: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80236614: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80236618: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8023661C: jr          $ra
    // 0x80236620: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x80236620: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80236E2C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236E2C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80236E30: lb          $v1, 0xC($a2)
    ctx->r3 = MEM_B(ctx->r6, 0XC);
    // 0x80236E34: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80236E38: addu        $a1, $v0, $v1
    ctx->r5 = ADD32(ctx->r2, ctx->r3);
    // 0x80236E3C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80236E40: addiu       $v1, $v1, -0x5CE0
    ctx->r3 = ADD32(ctx->r3, -0X5CE0);
    // 0x80236E44: lhu         $v0, 0x14($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X14);
    // 0x80236E48: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80236E4C: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80236E50: lbu         $a0, 0x2($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X2);
    // 0x80236E54: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236E58: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80236E5C: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80236E60: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80236E64: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80236E68: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80236E6C: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80236E70: beq         $v0, $zero, L_80236EC8
    if (ctx->r2 == 0) {
        // 0x80236E74: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80236EC8;
    }
    // 0x80236E74: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80236E78: lhu         $v0, 0x18($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X18);
    // 0x80236E7C: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x80236E80: lbu         $a0, 0x3($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X3);
    // 0x80236E84: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236E88: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80236E8C: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80236E90: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80236E94: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80236E98: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80236E9C: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80236EA0: beq         $v0, $zero, L_80236EC8
    if (ctx->r2 == 0) {
        // 0x80236EA4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80236EC8;
    }
    // 0x80236EA4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80236EA8: lb          $v1, 0x4($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X4);
    // 0x80236EAC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80236EB0: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80236EB4: beq         $v1, $v0, L_80236EC4
    if (ctx->r3 == ctx->r2) {
        // 0x80236EB8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80236EC4;
    }
    // 0x80236EB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80236EBC: bne         $v1, $v0, L_80236EC8
    if (ctx->r3 != ctx->r2) {
        // 0x80236EC0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80236EC8;
    }
    // 0x80236EC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80236EC4:
    // 0x80236EC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80236EC8:
    // 0x80236EC8: jr          $ra
    // 0x80236ECC: nop

    TRACE_RETURN()
    return;
    // 0x80236ECC: nop

;}
RECOMP_FUNC void func_802258B0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802258B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802258B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802258B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802258BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802258C0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802258C4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802258C8: beq         $v1, $v0, L_8022592C
    if (ctx->r3 == ctx->r2) {
        // 0x802258CC: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_8022592C;
    }
    // 0x802258CC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x802258D0: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x802258D4: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x802258D8: jalr        $v0
    // 0x802258DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802258DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802258E0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802258E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802258E8: bne         $v1, $v0, L_80225900
    if (ctx->r3 != ctx->r2) {
        // 0x802258EC: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_80225900;
    }
    // 0x802258EC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x802258F0: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x802258F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802258F8: j           L_8022592C
    // 0x802258FC: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
        goto L_8022592C;
    // 0x802258FC: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
L_80225900:
    // 0x80225900: jal         0x8006072C
    // 0x80225904: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_1;
    // 0x80225904: nop

    after_1:
    // 0x80225908: beq         $v0, $zero, L_80225944
    if (ctx->r2 == 0) {
        // 0x8022590C: nop
    
            goto L_80225944;
    }
    // 0x8022590C: nop

    // 0x80225910: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225914: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80225918: beq         $v0, $zero, L_80225928
    if (ctx->r2 == 0) {
        // 0x8022591C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225928;
    }
    // 0x8022591C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225920: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x80225924: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
L_80225928:
    // 0x80225928: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_8022592C:
    // 0x8022592C: jal         0x80036E48
    // 0x80225930: nop

    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x80225930: nop

    after_2:
    // 0x80225934: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225938: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022593C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225940: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225944:
    // 0x80225944: jal         0x8005FB90
    // 0x80225948: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_3;
    // 0x80225948: nop

    after_3:
    // 0x8022594C: jal         0x80060018
    // 0x80225950: nop

    func_80060018_3B418(rdram, ctx);
        goto after_4;
    // 0x80225950: nop

    after_4:
    // 0x80225954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225958: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022595C: jr          $ra
    // 0x80225960: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225960: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D7A4_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D7A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D7A8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D7AC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022D7B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022D7B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D7B8: jal         0x8004EFE4
    // 0x8022D7BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8022D7BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022D7C0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022D7C4: beq         $s1, $zero, L_8022D878
    if (ctx->r17 == 0) {
        // 0x8022D7C8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022D878;
    }
    // 0x8022D7C8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022D7CC: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    // 0x8022D7D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D7D4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D7D8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022D7DC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022D7E0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022D7E4: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8022D7E8: jal         0x8004DA90
    // 0x8022D7EC: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022D7EC: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    after_1:
    // 0x8022D7F0: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022D7F4: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x8022D7F8: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x8022D7FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D800: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D804: addiu       $v0, $v0, -0x3C
    ctx->r2 = ADD32(ctx->r2, -0X3C);
    // 0x8022D808: jal         0x8009A3B4
    // 0x8022D80C: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022D80C: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    after_2:
    // 0x8022D810: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D814: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022D818: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x8022D81C: lh          $a2, 0x18($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X18);
    // 0x8022D820: addiu       $a1, $s2, 0x2C
    ctx->r5 = ADD32(ctx->r18, 0X2C);
    // 0x8022D824: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D828: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022D82C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022D830: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8022D834: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x8022D838: sw          $a2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r6;
    // 0x8022D83C: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x8022D840: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D844: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022D848: sw          $v0, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = ctx->r2;
    // 0x8022D84C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022D850: sw          $v0, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->r2;
    // 0x8022D854: jal         0x8009A3B4
    // 0x8022D858: sh          $v1, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022D858: sh          $v1, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r3;
    after_3:
    // 0x8022D85C: addiu       $a0, $s2, 0x1C
    ctx->r4 = ADD32(ctx->r18, 0X1C);
    // 0x8022D860: addiu       $a1, $s2, 0x34
    ctx->r5 = ADD32(ctx->r18, 0X34);
    // 0x8022D864: jal         0x8009A3B4
    // 0x8022D868: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022D868: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x8022D86C: addiu       $a0, $zero, 0xB2
    ctx->r4 = ADD32(0, 0XB2);
    // 0x8022D870: jal         0x8002A33C
    // 0x8022D874: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8022D874: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
L_8022D878:
    // 0x8022D878: sltu        $v0, $zero, $s1
    ctx->r2 = 0 < ctx->r17 ? 1 : 0;
    // 0x8022D87C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D880: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D884: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D888: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D88C: jr          $ra
    // 0x8022D890: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D890: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022D894: nop

    // 0x8022D898: nop

    // 0x8022D89C: nop

;}
RECOMP_FUNC void func_802256A0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802256A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802256A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802256A8: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x802256AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802256B0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802256B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802256B8: lw          $v0, -0x7030($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7030);
    // 0x802256BC: jalr        $v0
    // 0x802256C0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802256C0: nop

    after_0:
    // 0x802256C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802256C8: jr          $ra
    // 0x802256CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802256CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C5CC_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C5CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C5D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C5D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C5D8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022C5DC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C5E0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C5E4: beq         $v1, $zero, L_8022C600
    if (ctx->r3 == 0) {
        // 0x8022C5E8: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022C600;
    }
    // 0x8022C5E8: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022C5EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C5F0: beq         $v1, $v0, L_8022C644
    if (ctx->r3 == ctx->r2) {
        // 0x8022C5F4: nop
    
            goto L_8022C644;
    }
    // 0x8022C5F4: nop

    // 0x8022C5F8: j           L_8022C734
    // 0x8022C5FC: nop

        goto L_8022C734;
    // 0x8022C5FC: nop

L_8022C600:
    // 0x8022C600: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C604: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C608: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C60C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022C610: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C614: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8022C618: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x8022C61C: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x8022C620: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x8022C624: lh          $v0, 0x32E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X32E);
    // 0x8022C628: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022C62C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022C630: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022C634: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022C638: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C63C: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x8022C640: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
L_8022C644:
    // 0x8022C644: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x8022C648: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C64C: bne         $v1, $v0, L_8022C65C
    if (ctx->r3 != ctx->r2) {
        // 0x8022C650: addiu       $a0, $zero, 0xB5
        ctx->r4 = ADD32(0, 0XB5);
            goto L_8022C65C;
    }
    // 0x8022C650: addiu       $a0, $zero, 0xB5
    ctx->r4 = ADD32(0, 0XB5);
    // 0x8022C654: jal         0x8002A33C
    // 0x8022C658: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022C658: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
L_8022C65C:
    // 0x8022C65C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022C660: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C664: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022C668: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C66C: bgtz        $v0, L_8022C688
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022C670: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022C688;
    }
    // 0x8022C670: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C674: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022C678: addiu       $v1, $zero, 0x2D
    ctx->r3 = ADD32(0, 0X2D);
    // 0x8022C67C: sh          $v1, 0x36($s1)
    MEM_H(0X36, ctx->r17) = ctx->r3;
    // 0x8022C680: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022C684: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022C688:
    // 0x8022C688: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022C68C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022C690: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022C694: jal         0x8004F820
    // 0x8022C698: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022C698: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_1:
    // 0x8022C69C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C6A0: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x8022C6A4: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022C6A8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C6AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C6B0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022C6B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C6B8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C6BC: jal         0x8004DA90
    // 0x8022C6C0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022C6C0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022C6C4: jal         0x80040F30
    // 0x8022C6C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022C6C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022C6CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C6D0: jal         0x8003E934
    // 0x8022C6D4: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x8022C6D4: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    after_4:
    // 0x8022C6D8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C6DC: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022C6E0: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022C6E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C6E8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022C6EC: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022C6F0: bltz        $v0, L_8022C708
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022C6F4: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022C708;
    }
    // 0x8022C6F4: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022C6F8: beq         $v0, $zero, L_8022C718
    if (ctx->r2 == 0) {
        // 0x8022C6FC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022C718;
    }
    // 0x8022C6FC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C700: j           L_8022C734
    // 0x8022C704: nop

        goto L_8022C734;
    // 0x8022C704: nop

L_8022C708:
    // 0x8022C708: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022C70C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022C710: bne         $v0, $zero, L_8022C734
    if (ctx->r2 != 0) {
        // 0x8022C714: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022C734;
    }
    // 0x8022C714: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022C718:
    // 0x8022C718: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022C71C: jal         0x8009A3B4
    // 0x8022C720: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022C720: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022C724: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022C728: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022C72C: jal         0x8009A3B4
    // 0x8022C730: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022C730: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
L_8022C734:
    // 0x8022C734: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C738: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C73C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C740: jr          $ra
    // 0x8022C744: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C744: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232C68_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232C68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232C6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232C70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232C74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232C78: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232C7C: bne         $v0, $zero, L_80232C9C
    if (ctx->r2 != 0) {
        // 0x80232C80: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80232C9C;
    }
    // 0x80232C80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80232C84: jal         0x80050294
    // 0x80232C88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80232C88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80232C8C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232C90: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80232C94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232C98: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80232C9C:
    // 0x80232C9C: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x80232CA0: addiu       $v0, $zero, 0x56
    ctx->r2 = ADD32(0, 0X56);
    // 0x80232CA4: bne         $v1, $v0, L_80232CB8
    if (ctx->r3 != ctx->r2) {
        // 0x80232CA8: nop
    
            goto L_80232CB8;
    }
    // 0x80232CA8: nop

    // 0x80232CAC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80232CB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232CB4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80232CB8:
    // 0x80232CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232CBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232CC0: jr          $ra
    // 0x80232CC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232CC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225E24_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225E28: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225E2C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80225E30: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225E34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225E38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225E3C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225E40: jal         0x80036B00
    // 0x80225E44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80036B00_11F00(rdram, ctx);
        goto after_0;
    // 0x80225E44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80225E48: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x80225E4C: jal         0x8004CB2C
    // 0x80225E50: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_1;
    // 0x80225E50: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_1:
    // 0x80225E54: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    // 0x80225E58: jal         0x8004F488
    // 0x80225E5C: nop

    func_8004F488_2A888(rdram, ctx);
        goto after_2;
    // 0x80225E5C: nop

    after_2:
    // 0x80225E60: jal         0x80225F88
    // 0x80225E64: nop

    func_80225F88_ovl22(rdram, ctx);
        goto after_3;
    // 0x80225E64: nop

    after_3:
    // 0x80225E68: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80225E6C: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80225E70: jal         0x80070050
    // 0x80225E74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_4;
    // 0x80225E74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80225E78: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80225E7C: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x80225E80: jal         0x80054578
    // 0x80225E84: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_80054578_2F978(rdram, ctx);
        goto after_5;
    // 0x80225E84: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_5:
    // 0x80225E88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225E8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225E90: jal         0x80034844
    // 0x80225E94: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_6;
    // 0x80225E94: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_6:
    // 0x80225E98: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x80225E9C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225EA0: jal         0x8002A2F8
    // 0x80225EA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_7;
    // 0x80225EA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80225EA8: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x80225EAC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225EB0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225EB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225EB8: jr          $ra
    // 0x80225EBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225EBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232C48_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232C48: lb          $v0, 0xE($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XE);
    // 0x80232C4C: bne         $v0, $zero, L_80232C60
    if (ctx->r2 != 0) {
        // 0x80232C50: nop
    
            goto L_80232C60;
    }
    // 0x80232C50: nop

    // 0x80232C54: lhu         $v0, 0x16($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X16);
    // 0x80232C58: addiu       $v0, $v0, -0x6
    ctx->r2 = ADD32(ctx->r2, -0X6);
    // 0x80232C5C: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
L_80232C60:
    // 0x80232C60: jr          $ra
    // 0x80232C64: nop

    TRACE_RETURN()
    return;
    // 0x80232C64: nop

;}
RECOMP_FUNC void func_80230BC4_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230BC4: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80230BC8: sh          $v0, 0x37C($a0)
    MEM_H(0X37C, ctx->r4) = ctx->r2;
    // 0x80230BCC: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x80230BD0: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x80230BD4: jr          $ra
    // 0x80230BD8: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x80230BD8: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80233AB0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233AB0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80233AB4: addiu       $v0, $zero, 0x68
    ctx->r2 = ADD32(0, 0X68);
    // 0x80233AB8: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
    // 0x80233ABC: addiu       $v0, $zero, 0x72
    ctx->r2 = ADD32(0, 0X72);
    // 0x80233AC0: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80233AC4: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x80233AC8: sh          $zero, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = 0;
    // 0x80233ACC: sh          $v0, 0x568($a0)
    MEM_H(0X568, ctx->r4) = ctx->r2;
    // 0x80233AD0: sh          $zero, 0x570($a0)
    MEM_H(0X570, ctx->r4) = 0;
    // 0x80233AD4: sb          $v1, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r3;
    // 0x80233AD8: jr          $ra
    // 0x80233ADC: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x80233ADC: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8022B8D0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B8D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B8D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B8D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B8DC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B8E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B8E4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B8E8: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022B8EC: beq         $v0, $zero, L_8022BB04
    if (ctx->r2 == 0) {
        // 0x8022B8F0: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022BB04;
    }
    // 0x8022B8F0: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022B8F4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022B8F8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B8FC: addu        $at, $at, $v0
    gpr jr_addend_8022B904 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B900: lw          $v0, -0x5BD0($at)
    ctx->r2 = ADD32(ctx->r1, -0X5BD0);
    // 0x8022B904: jr          $v0
    // 0x8022B908: nop

    switch (jr_addend_8022B904 >> 2) {
        case 0: goto L_8022B90C; break;
        case 1: goto L_8022B934; break;
        case 2: goto L_8022B9B8; break;
        case 3: goto L_8022B9F8; break;
        case 4: goto L_8022BA34; break;
        default: switch_error(__func__, 0x8022B904, 0x8023A430);
    }
    // 0x8022B908: nop

L_8022B90C:
    // 0x8022B90C: addiu       $a0, $zero, 0xB1
    ctx->r4 = ADD32(0, 0XB1);
    // 0x8022B910: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022B914: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B918: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B91C: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x8022B920: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B924: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022B928: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B92C: jal         0x8002A33C
    // 0x8022B930: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022B930: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    after_0:
L_8022B934:
    // 0x8022B934: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022B938: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B93C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B940: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B944: bgez        $v0, L_8022B970
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B948: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B970;
    }
    // 0x8022B948: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B94C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B950: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B954: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x8022B958: beq         $v0, $zero, L_8022B968
    if (ctx->r2 == 0) {
        // 0x8022B95C: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8022B968;
    }
    // 0x8022B95C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022B960: j           L_8022B9B8
    // 0x8022B964: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
        goto L_8022B9B8;
    // 0x8022B964: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
L_8022B968:
    // 0x8022B968: j           L_8022B9B8
    // 0x8022B96C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022B9B8;
    // 0x8022B96C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022B970:
    // 0x8022B970: addiu       $a1, $zero, -0x70
    ctx->r5 = ADD32(0, -0X70);
L_8022B974:
    // 0x8022B974: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B978: jal         0x8004DA90
    // 0x8022B97C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022B97C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022B980: jal         0x80040F30
    // 0x8022B984: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022B984: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022B988: jal         0x8003E934
    // 0x8022B98C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022B98C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022B990: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022B994: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022B998: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022B99C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B9A0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022B9A4: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022B9A8: bgez        $v0, L_8022BAC8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B9AC: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022BAC8;
    }
    // 0x8022B9AC: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022B9B0: j           L_8022BADC
    // 0x8022B9B4: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
        goto L_8022BADC;
    // 0x8022B9B4: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
L_8022B9B8:
    // 0x8022B9B8: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022B9BC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B9C0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B9C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B9C8: bgtz        $v0, L_8022BB04
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022B9CC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022BB04;
    }
    // 0x8022B9CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B9D0: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022B9D4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022B9D8: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    // 0x8022B9DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B9E0: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022B9E4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022B9E8: jal         0x8022C800
    // 0x8022B9EC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    func_8022C800_ovl22(rdram, ctx);
        goto after_4;
    // 0x8022B9EC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    after_4:
    // 0x8022B9F0: j           L_8022BB04
    // 0x8022B9F4: nop

        goto L_8022BB04;
    // 0x8022B9F4: nop

L_8022B9F8:
    // 0x8022B9F8: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022B9FC: addiu       $a1, $v0, -0x1
    ctx->r5 = ADD32(ctx->r2, -0X1);
    // 0x8022BA00: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8022BA04: bgez        $v0, L_8022BA20
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022BA08: sh          $a1, 0x4($s1)
        MEM_H(0X4, ctx->r17) = ctx->r5;
            goto L_8022BA20;
    }
    // 0x8022BA08: sh          $a1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r5;
    // 0x8022BA0C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022BA10: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022BA14: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022BA18: j           L_8022BA34
    // 0x8022BA1C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022BA34;
    // 0x8022BA1C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022BA20:
    // 0x8022BA20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BA24: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x8022BA28: sll         $a1, $a1, 21
    ctx->r5 = S32(ctx->r5 << 21);
    // 0x8022BA2C: j           L_8022B974
    // 0x8022BA30: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
        goto L_8022B974;
    // 0x8022BA30: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
L_8022BA34:
    // 0x8022BA34: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022BA38: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022BA3C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022BA40: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BA44: bgez        $v0, L_8022BA88
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022BA48: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022BA88;
    }
    // 0x8022BA48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BA4C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022BA50: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022BA54: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022BA58: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BA5C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BA60: lh          $v1, 0x6($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X6);
    // 0x8022BA64: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022BA68: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022BA6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BA70: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022BA74: lbu         $v1, 0xC($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XC);
    // 0x8022BA78: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022BA7C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022BA80: j           L_8022BB04
    // 0x8022BA84: sh          $v1, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r3;
        goto L_8022BB04;
    // 0x8022BA84: sh          $v1, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r3;
L_8022BA88:
    // 0x8022BA88: addiu       $a1, $zero, 0xE0
    ctx->r5 = ADD32(0, 0XE0);
    // 0x8022BA8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BA90: jal         0x8004DA90
    // 0x8022BA94: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x8022BA94: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
    // 0x8022BA98: jal         0x80040F30
    // 0x8022BA9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_6;
    // 0x8022BA9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022BAA0: jal         0x8003E934
    // 0x8022BAA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_7;
    // 0x8022BAA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022BAA8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022BAAC: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022BAB0: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022BAB4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BAB8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022BABC: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022BAC0: bltz        $v0, L_8022BAD8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022BAC4: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022BAD8;
    }
    // 0x8022BAC4: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
L_8022BAC8:
    // 0x8022BAC8: beq         $v0, $zero, L_8022BAE8
    if (ctx->r2 == 0) {
        // 0x8022BACC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022BAE8;
    }
    // 0x8022BACC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022BAD0: j           L_8022BB04
    // 0x8022BAD4: nop

        goto L_8022BB04;
    // 0x8022BAD4: nop

L_8022BAD8:
    // 0x8022BAD8: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
L_8022BADC:
    // 0x8022BADC: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022BAE0: bne         $v0, $zero, L_8022BB04
    if (ctx->r2 != 0) {
        // 0x8022BAE4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022BB04;
    }
    // 0x8022BAE4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022BAE8:
    // 0x8022BAE8: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022BAEC: jal         0x8009A3B4
    // 0x8022BAF0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022BAF0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8022BAF4: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022BAF8: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022BAFC: jal         0x8009A3B4
    // 0x8022BB00: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8022BB00: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_9:
L_8022BB04:
    // 0x8022BB04: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022BB08: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022BB0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BB10: jr          $ra
    // 0x8022BB14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022BB14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802351EC_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802351EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802351F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802351F4: jal         0x8004F4F8
    // 0x802351F8: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x802351F8: nop

    after_0:
    // 0x802351FC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80235200: jr          $ra
    // 0x80235204: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235204: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80235208: nop

    // 0x8023520C: nop

;}
RECOMP_FUNC void func_802366F0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802366F0: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802366F4: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x802366F8: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x802366FC: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
    // 0x80236700: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236704: jr          $ra
    // 0x80236708: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80236708: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_802360D0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802360D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802360D4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802360D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802360DC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802360E0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802360E4: lb          $a0, 0xF($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XF);
    // 0x802360E8: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x802360EC: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x802360F0: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x802360F4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802360F8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802360FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236100: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x80236104: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x80236108: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023610C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80236110: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x80236114: sll         $a1, $a0, 1
    ctx->r5 = S32(ctx->r4 << 1);
    // 0x80236118: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x8023611C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80236120: jal         0x80051E18
    // 0x80236124: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x80236124: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    after_0:
    // 0x80236128: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x8023612C: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    // 0x80236130: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x80236134: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    // 0x80236138: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8023613C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80236140: jr          $ra
    // 0x80236144: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80236144: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80236148: nop

    // 0x8023614C: nop

;}
RECOMP_FUNC void func_80230A7C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230A7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230A80: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230A84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230A88: jal         0x80230B54
    // 0x80230A8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80230B54_ovl22(rdram, ctx);
        goto after_0;
    // 0x80230A8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80230A90: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x80230A94: bne         $v0, $zero, L_80230AD4
    if (ctx->r2 != 0) {
        // 0x80230A98: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80230AD4;
    }
    // 0x80230A98: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80230A9C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80230AA0: bne         $v1, $v0, L_80230AB4
    if (ctx->r3 != ctx->r2) {
        // 0x80230AA4: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_80230AB4;
    }
    // 0x80230AA4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80230AA8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80230AAC: j           L_80230ABC
    // 0x80230AB0: addiu       $v0, $zero, -0xE0
    ctx->r2 = ADD32(0, -0XE0);
        goto L_80230ABC;
    // 0x80230AB0: addiu       $v0, $zero, -0xE0
    ctx->r2 = ADD32(0, -0XE0);
L_80230AB4:
    // 0x80230AB4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80230AB8: addiu       $v0, $zero, -0xA0
    ctx->r2 = ADD32(0, -0XA0);
L_80230ABC:
    // 0x80230ABC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80230AC0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80230AC4: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x80230AC8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230ACC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230AD0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80230AD4:
    // 0x80230AD4: jal         0x80230B74
    // 0x80230AD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80230B74_ovl22(rdram, ctx);
        goto after_1;
    // 0x80230AD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80230ADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230AE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230AE4: jr          $ra
    // 0x80230AE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230AE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C800_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C800: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022C804: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022C808: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C80C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022C810: jal         0x8004EFE4
    // 0x8022C814: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8022C814: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022C818: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C81C: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022C820: beq         $v1, $zero, L_8022C90C
    if (ctx->r3 == 0) {
        // 0x8022C824: sw          $v1, 0x374($s0)
        MEM_W(0X374, ctx->r16) = ctx->r3;
            goto L_8022C90C;
    }
    // 0x8022C824: sw          $v1, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->r3;
    // 0x8022C828: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C82C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022C830: lh          $v0, 0x32E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X32E);
    // 0x8022C834: bne         $v0, $zero, L_8022C890
    if (ctx->r2 != 0) {
        // 0x8022C838: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8022C890;
    }
    // 0x8022C838: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022C83C: lw          $v1, 0x374($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X374);
    // 0x8022C840: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022C844: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022C848: lw          $v0, 0x374($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X374);
    // 0x8022C84C: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x8022C850: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x8022C854: lw          $a0, 0x374($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X374);
    // 0x8022C858: lui         $v1, 0xFFC4
    ctx->r3 = S32(0XFFC4 << 16);
    // 0x8022C85C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C860: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x8022C864: lw          $v1, 0x374($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X374);
    // 0x8022C868: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022C86C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022C870: sw          $v0, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->r2;
    // 0x8022C874: lw          $v1, 0x374($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X374);
    // 0x8022C878: addiu       $a0, $zero, 0xB2
    ctx->r4 = ADD32(0, 0XB2);
    // 0x8022C87C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022C880: jal         0x8002A33C
    // 0x8022C884: sw          $v0, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022C884: sw          $v0, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r2;
    after_1:
    // 0x8022C888: j           L_8022C8B8
    // 0x8022C88C: nop

        goto L_8022C8B8;
    // 0x8022C88C: nop

L_8022C890:
    // 0x8022C890: lw          $v1, 0x374($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X374);
    // 0x8022C894: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022C898: lw          $v1, 0x374($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X374);
    // 0x8022C89C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C8A0: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x8022C8A4: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x8022C8A8: lw          $a0, 0x374($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X374);
    // 0x8022C8AC: lui         $v1, 0xFFB0
    ctx->r3 = S32(0XFFB0 << 16);
    // 0x8022C8B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C8B4: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_8022C8B8:
    // 0x8022C8B8: lw          $v1, 0x4C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4C);
    // 0x8022C8BC: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8022C8C0: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x8022C8C4: lw          $v1, 0x4C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4C);
    // 0x8022C8C8: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8022C8CC: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x8022C8D0: lw          $v1, 0x4C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4C);
    // 0x8022C8D4: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C8D8: sh          $v0, 0x64($v1)
    MEM_H(0X64, ctx->r3) = ctx->r2;
    // 0x8022C8DC: lw          $a1, 0x4C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4C);
    // 0x8022C8E0: addiu       $a0, $a1, 0x1C
    ctx->r4 = ADD32(ctx->r5, 0X1C);
    // 0x8022C8E4: jal         0x8004DD04
    // 0x8022C8E8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x8022C8E8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_2:
    // 0x8022C8EC: lw          $a1, 0x4C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4C);
    // 0x8022C8F0: addiu       $a3, $zero, 0x6E0
    ctx->r7 = ADD32(0, 0X6E0);
    // 0x8022C8F4: lh          $a2, 0x64($a1)
    ctx->r6 = MEM_H(ctx->r5, 0X64);
    // 0x8022C8F8: addiu       $a0, $a1, 0x14
    ctx->r4 = ADD32(ctx->r5, 0X14);
    // 0x8022C8FC: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    // 0x8022C900: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022C904: jal         0x8004DBA0
    // 0x8022C908: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x8022C908: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
L_8022C90C:
    // 0x8022C90C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022C910: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C914: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022C918: jr          $ra
    // 0x8022C91C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022C91C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80236B00_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236B00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236B04: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236B08: jal         0x8004F62C
    // 0x80236B0C: nop

    func_8004F62C_2AA2C(rdram, ctx);
        goto after_0;
    // 0x80236B0C: nop

    after_0:
    // 0x80236B10: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236B14: jr          $ra
    // 0x80236B18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236B18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232CC8_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232CC8: lb          $v0, 0xE($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XE);
    // 0x80232CCC: bne         $v0, $zero, L_80232CE0
    if (ctx->r2 != 0) {
        // 0x80232CD0: nop
    
            goto L_80232CE0;
    }
    // 0x80232CD0: nop

    // 0x80232CD4: lhu         $v0, 0x16($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X16);
    // 0x80232CD8: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80232CDC: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
L_80232CE0:
    // 0x80232CE0: jr          $ra
    // 0x80232CE4: nop

    TRACE_RETURN()
    return;
    // 0x80232CE4: nop

;}
RECOMP_FUNC void func_80235F28_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235F28: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80235F2C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80235F30: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80235F34: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80235F38: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80235F3C: addiu       $s2, $s1, 0x88
    ctx->r18 = ADD32(ctx->r17, 0X88);
    // 0x80235F40: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80235F44: jal         0x80071110
    // 0x80235F48: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    func_80071110_4C510(rdram, ctx);
        goto after_0;
    // 0x80235F48: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x80235F4C: bne         $v0, $zero, L_80235F74
    if (ctx->r2 != 0) {
        // 0x80235F50: nop
    
            goto L_80235F74;
    }
    // 0x80235F50: nop

    // 0x80235F54: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x80235F58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235F5C: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x80235F60: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80235F64: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80235F68: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80235F6C: bne         $v1, $v0, L_80235F84
    if (ctx->r3 != ctx->r2) {
        // 0x80235F70: slti        $v0, $v1, 0x30
        ctx->r2 = SIGNED(ctx->r3) < 0X30 ? 1 : 0;
            goto L_80235F84;
    }
    // 0x80235F70: slti        $v0, $v1, 0x30
    ctx->r2 = SIGNED(ctx->r3) < 0X30 ? 1 : 0;
L_80235F74:
    // 0x80235F74: jal         0x8004F4F8
    // 0x80235F78: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_1;
    // 0x80235F78: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80235F7C: j           L_802360B8
    // 0x80235F80: nop

        goto L_802360B8;
    // 0x80235F80: nop

L_80235F84:
    // 0x80235F84: beq         $v0, $zero, L_80235F98
    if (ctx->r2 == 0) {
        // 0x80235F88: lui         $v0, 0x280
        ctx->r2 = S32(0X280 << 16);
            goto L_80235F98;
    }
    // 0x80235F88: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x80235F8C: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80235F90: j           L_80235FC8
    // 0x80235F94: sw          $v0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r2;
        goto L_80235FC8;
    // 0x80235F94: sw          $v0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r2;
L_80235F98:
    // 0x80235F98: addiu       $v1, $v1, -0x30
    ctx->r3 = ADD32(ctx->r3, -0X30);
    // 0x80235F9C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80235FA0: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x80235FA4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80235FA8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80235FAC: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x80235FB0: sll         $v1, $v0, 8
    ctx->r3 = S32(ctx->r2 << 8);
    // 0x80235FB4: lui         $a1, 0x200
    ctx->r5 = S32(0X200 << 16);
    // 0x80235FB8: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80235FBC: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80235FC0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80235FC4: sw          $a0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r4;
L_80235FC8:
    // 0x80235FC8: lhu         $v0, 0x64($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X64);
    // 0x80235FCC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80235FD0: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x80235FD4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80235FD8: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80235FDC: lhu         $v0, 0x66($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X66);
    // 0x80235FE0: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x80235FE4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80235FE8: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    // 0x80235FEC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80235FF0: jal         0x80031600
    // 0x80235FF4: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_2;
    // 0x80235FF4: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    after_2:
    // 0x80235FF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235FFC: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80236000: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80236004: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x80236008: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8023600C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80236010: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x80236014: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80236018: jal         0x80031DA8
    // 0x8023601C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x8023601C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x80236020: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80236024: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80236028: jal         0x8009A3B4
    // 0x8023602C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8023602C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x80236030: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80236034: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80236038: jal         0x8009A3B4
    // 0x8023603C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8023603C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80236040: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x80236044: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x80236048: lh          $a0, 0x46($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X46);
    // 0x8023604C: lw          $a1, 0x20($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X20);
    // 0x80236050: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236054: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236058: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x8023605C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80236060: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80236064: sw          $v1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r3;
    // 0x80236068: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x8023606C: lhu         $a0, 0x1C($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X1C);
    // 0x80236070: sw          $a1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r5;
    // 0x80236074: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236078: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023607C: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    // 0x80236080: sh          $a0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r4;
    // 0x80236084: sh          $a0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r4;
    // 0x80236088: lhu         $v0, 0x20($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X20);
    // 0x8023608C: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80236090: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
    // 0x80236094: lhu         $v0, 0x24($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X24);
    // 0x80236098: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x8023609C: sh          $v0, 0x28($s2)
    MEM_H(0X28, ctx->r18) = ctx->r2;
    // 0x802360A0: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x802360A4: slti        $v0, $v0, 0x3C
    ctx->r2 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x802360A8: beq         $v0, $zero, L_802360B8
    if (ctx->r2 == 0) {
        // 0x802360AC: nop
    
            goto L_802360B8;
    }
    // 0x802360AC: nop

    // 0x802360B0: jal         0x802360D0
    // 0x802360B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_802360D0_ovl22(rdram, ctx);
        goto after_6;
    // 0x802360B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_802360B8:
    // 0x802360B8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802360BC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802360C0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802360C4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802360C8: jr          $ra
    // 0x802360CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802360CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022D530_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D530: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D534: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D53C: jal         0x8004F144
    // 0x8022D540: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022D540: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022D544: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022D548: beq         $v1, $zero, L_8022D584
    if (ctx->r3 == 0) {
        // 0x8022D54C: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8022D584;
    }
    // 0x8022D54C: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022D550: addiu       $a1, $s0, 0x310
    ctx->r5 = ADD32(ctx->r16, 0X310);
    // 0x8022D554: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022D558: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022D55C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022D560: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D564: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022D568: jal         0x8009A3B4
    // 0x8022D56C: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022D56C: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    after_1:
    // 0x8022D570: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D574: jal         0x8007A1B8
    // 0x8022D578: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x8022D578: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8022D57C: jal         0x8004F418
    // 0x8022D580: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_3;
    // 0x8022D580: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8022D584:
    // 0x8022D584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D588: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D58C: jr          $ra
    // 0x8022D590: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D590: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236ED0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236ED0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236ED4: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80236ED8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236EDC: lb          $v1, 0xC($a2)
    ctx->r3 = MEM_B(ctx->r6, 0XC);
    // 0x80236EE0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80236EE4: addu        $a1, $v0, $v1
    ctx->r5 = ADD32(ctx->r2, ctx->r3);
    // 0x80236EE8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80236EEC: addiu       $v1, $v1, -0x5CE0
    ctx->r3 = ADD32(ctx->r3, -0X5CE0);
    // 0x80236EF0: lhu         $v0, 0x14($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X14);
    // 0x80236EF4: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80236EF8: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80236EFC: lbu         $a0, 0x2($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X2);
    // 0x80236F00: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236F04: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80236F08: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80236F0C: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80236F10: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80236F14: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80236F18: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80236F1C: beq         $v0, $zero, L_80236F74
    if (ctx->r2 == 0) {
        // 0x80236F20: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80236F74;
    }
    // 0x80236F20: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80236F24: lhu         $v0, 0x18($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X18);
    // 0x80236F28: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x80236F2C: lbu         $a0, 0x3($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X3);
    // 0x80236F30: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236F34: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80236F38: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80236F3C: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80236F40: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80236F44: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80236F48: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80236F4C: beq         $v0, $zero, L_80236F74
    if (ctx->r2 == 0) {
        // 0x80236F50: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80236F74;
    }
    // 0x80236F50: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80236F54: lb          $v1, 0x4($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X4);
    // 0x80236F58: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80236F5C: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80236F60: beq         $v1, $v0, L_80236F70
    if (ctx->r3 == ctx->r2) {
        // 0x80236F64: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80236F70;
    }
    // 0x80236F64: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80236F68: bne         $v1, $v0, L_80236F74
    if (ctx->r3 != ctx->r2) {
        // 0x80236F6C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80236F74;
    }
    // 0x80236F6C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80236F70:
    // 0x80236F70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80236F74:
    // 0x80236F74: beq         $v0, $zero, L_80236F98
    if (ctx->r2 == 0) {
        // 0x80236F78: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80236F98;
    }
    // 0x80236F78: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80236F7C: jal         0x8006033C
    // 0x80236F80: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80236F80: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    after_0:
    // 0x80236F84: beq         $v0, $zero, L_80236F98
    if (ctx->r2 == 0) {
        // 0x80236F88: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80236F98;
    }
    // 0x80236F88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80236F8C: jal         0x8006036C
    // 0x80236F90: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x80236F90: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    after_1:
    // 0x80236F94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80236F98:
    // 0x80236F98: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236F9C: jr          $ra
    // 0x80236FA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236FA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225F3C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F3C: jr          $ra
    // 0x80225F40: nop

    TRACE_RETURN()
    return;
    // 0x80225F40: nop

;}
RECOMP_FUNC void func_80236FA4_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236FA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236FA8: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80236FAC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236FB0: lb          $v1, 0xC($a2)
    ctx->r3 = MEM_B(ctx->r6, 0XC);
    // 0x80236FB4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80236FB8: addu        $a1, $v0, $v1
    ctx->r5 = ADD32(ctx->r2, ctx->r3);
    // 0x80236FBC: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80236FC0: addiu       $v1, $v1, -0x5CE0
    ctx->r3 = ADD32(ctx->r3, -0X5CE0);
    // 0x80236FC4: lhu         $v0, 0x14($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X14);
    // 0x80236FC8: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80236FCC: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80236FD0: lbu         $a0, 0x2($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X2);
    // 0x80236FD4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236FD8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80236FDC: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80236FE0: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80236FE4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80236FE8: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80236FEC: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80236FF0: beq         $v0, $zero, L_80237048
    if (ctx->r2 == 0) {
        // 0x80236FF4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80237048;
    }
    // 0x80236FF4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80236FF8: lhu         $v0, 0x18($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X18);
    // 0x80236FFC: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x80237000: lbu         $a0, 0x3($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X3);
    // 0x80237004: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80237008: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8023700C: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80237010: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80237014: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80237018: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8023701C: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80237020: beq         $v0, $zero, L_80237048
    if (ctx->r2 == 0) {
        // 0x80237024: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80237048;
    }
    // 0x80237024: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80237028: lb          $v1, 0x4($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X4);
    // 0x8023702C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80237030: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80237034: beq         $v1, $v0, L_80237044
    if (ctx->r3 == ctx->r2) {
        // 0x80237038: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80237044;
    }
    // 0x80237038: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023703C: bne         $v1, $v0, L_80237048
    if (ctx->r3 != ctx->r2) {
        // 0x80237040: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80237048;
    }
    // 0x80237040: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80237044:
    // 0x80237044: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80237048:
    // 0x80237048: beq         $v0, $zero, L_8023705C
    if (ctx->r2 == 0) {
        // 0x8023704C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8023705C;
    }
    // 0x8023704C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80237050: jal         0x8006036C
    // 0x80237054: addiu       $a0, $zero, 0x5D
    ctx->r4 = ADD32(0, 0X5D);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x80237054: addiu       $a0, $zero, 0x5D
    ctx->r4 = ADD32(0, 0X5D);
    after_0:
    // 0x80237058: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023705C:
    // 0x8023705C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80237060: jr          $ra
    // 0x80237064: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237064: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F9EC_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F9EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F9F0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F9F4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022F9F8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F9FC: jal         0x8004F144
    // 0x8022FA00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022FA00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022FA04: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022FA08: beq         $v1, $zero, L_8022FA44
    if (ctx->r3 == 0) {
        // 0x8022FA0C: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8022FA44;
    }
    // 0x8022FA0C: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022FA10: addiu       $s0, $s1, 0x180
    ctx->r16 = ADD32(ctx->r17, 0X180);
    // 0x8022FA14: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022FA18: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022FA1C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022FA20: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022FA24: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022FA28: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022FA2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022FA30: jal         0x8009A3B4
    // 0x8022FA34: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022FA34: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_1:
    // 0x8022FA38: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022FA3C: jal         0x8007A1B8
    // 0x8022FA40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x8022FA40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_8022FA44:
    // 0x8022FA44: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022FA48: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022FA4C: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    // 0x8022FA50: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022FA54: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022FA58: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022FA5C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022FA60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FA64: jr          $ra
    // 0x8022FA68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FA68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80235D70_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235D70: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80235D74: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80235D78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235D7C: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80235D80: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80235D84: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x80235D88: lhu         $v1, 0x64($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X64);
    // 0x80235D8C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80235D90: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235D94: addiu       $v0, $v0, -0x6070
    ctx->r2 = ADD32(ctx->r2, -0X6070);
    // 0x80235D98: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x80235D9C: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    // 0x80235DA0: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x80235DA4: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    // 0x80235DA8: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80235DAC: ori         $a1, $a1, 0x6
    ctx->r5 = ctx->r5 | 0X6;
    // 0x80235DB0: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    // 0x80235DB4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80235DB8: sb          $a1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r5;
    // 0x80235DBC: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x80235DC0: lhu         $v0, 0x66($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X66);
    // 0x80235DC4: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x80235DC8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235DCC: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    // 0x80235DD0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80235DD4: jal         0x80031600
    // 0x80235DD8: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_0;
    // 0x80235DD8: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    after_0:
    // 0x80235DDC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80235DE0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80235DE4: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80235DE8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80235DEC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80235DF0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80235DF4: jal         0x80031DA8
    // 0x80235DF8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_1;
    // 0x80235DF8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x80235DFC: lh          $a0, 0x66($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X66);
    // 0x80235E00: jal         0x800324B4
    // 0x80235E04: nop

    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x80235E04: nop

    after_2:
    // 0x80235E08: lh          $a0, 0x66($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X66);
    // 0x80235E0C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80235E10: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80235E14: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235E18: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80235E1C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235E20: srl         $v1, $v1, 11
    ctx->r3 = S32(U32(ctx->r3) >> 11);
    // 0x80235E24: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80235E28: jal         0x80032498
    // 0x80235E2C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    func_80032498_D898(rdram, ctx);
        goto after_3;
    // 0x80235E2C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    after_3:
    // 0x80235E30: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80235E34: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80235E38: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235E3C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80235E40: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235E44: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80235E48: lhu         $a2, 0x44($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X44);
    // 0x80235E4C: srl         $v1, $v1, 11
    ctx->r3 = S32(U32(ctx->r3) >> 11);
    // 0x80235E50: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x80235E54: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80235E58: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x80235E5C: lhu         $t0, 0x48($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X48);
    // 0x80235E60: lhu         $a3, 0x46($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X46);
    // 0x80235E64: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80235E68: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x80235E6C: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80235E70: lhu         $t0, 0x14($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X14);
    // 0x80235E74: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x80235E78: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x80235E7C: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
    // 0x80235E80: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80235E84: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80235E88: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80235E8C: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80235E90: sh          $a1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r5;
    // 0x80235E94: lhu         $t2, 0x18($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X18);
    // 0x80235E98: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80235E9C: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80235EA0: lh          $a3, 0x18($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X18);
    // 0x80235EA4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80235EA8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80235EAC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235EB0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80235EB4: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80235EB8: sh          $t0, 0xAC($s0)
    MEM_H(0XAC, ctx->r16) = ctx->r8;
    // 0x80235EBC: sh          $t1, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r9;
    // 0x80235EC0: sh          $t2, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r10;
    // 0x80235EC4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80235EC8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80235ECC: jal         0x8009A3B4
    // 0x80235ED0: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80235ED0: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    after_4:
    // 0x80235ED4: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80235ED8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80235EDC: jal         0x8009A3B4
    // 0x80235EE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80235EE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80235EE4: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x80235EE8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80235EEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235EF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80235EF4: jal         0x8004D5D4
    // 0x80235EF8: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_6;
    // 0x80235EF8: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    after_6:
    // 0x80235EFC: jal         0x802360D0
    // 0x80235F00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802360D0_ovl22(rdram, ctx);
        goto after_7;
    // 0x80235F00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80235F04: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235F08: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80235F0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235F10: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80235F14: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80235F18: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80235F1C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80235F20: jr          $ra
    // 0x80235F24: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80235F24: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022D6E4_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D6E4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8022D6E8: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x8022D6EC: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x8022D6F0: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x8022D6F4: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8022D6F8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8022D6FC: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x8022D700: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x8022D704: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x8022D708: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x8022D70C: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022D710: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x8022D714: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x8022D718: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8022D71C: bgez        $v0, L_8022D730
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D720: addu        $s2, $v1, $zero
        ctx->r18 = ADD32(ctx->r3, 0);
            goto L_8022D730;
    }
    // 0x8022D720: addu        $s2, $v1, $zero
    ctx->r18 = ADD32(ctx->r3, 0);
    // 0x8022D724: negu        $s3, $a2
    ctx->r19 = SUB32(0, ctx->r6);
    // 0x8022D728: negu        $s2, $v1
    ctx->r18 = SUB32(0, ctx->r3);
    // 0x8022D72C: addiu       $s1, $s1, 0x800
    ctx->r17 = ADD32(ctx->r17, 0X800);
L_8022D730:
    // 0x8022D730: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x8022D734: jal         0x8002C654
    // 0x8022D738: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8022D738: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022D73C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D740: jal         0x800319B4
    // 0x8022D744: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8022D744: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022D748: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D74C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022D750: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x8022D754: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x8022D758: negu        $v0, $s3
    ctx->r2 = SUB32(0, ctx->r19);
    // 0x8022D75C: sh          $s2, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r18;
    // 0x8022D760: sh          $s4, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r20;
    // 0x8022D764: jal         0x80031270
    // 0x8022D768: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_80031270_C670(rdram, ctx);
        goto after_2;
    // 0x8022D768: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022D76C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022D770: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D774: jal         0x8009A3B4
    // 0x8022D778: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022D778: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022D77C: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x8022D780: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x8022D784: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x8022D788: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x8022D78C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8022D790: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8022D794: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8022D798: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8022D79C: jr          $ra
    // 0x8022D7A0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x8022D7A0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80233504_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233504: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80233508: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023350C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80233510: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80233514: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80233518: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023351C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233520: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x80233524: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x80233528: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8023352C: beq         $v0, $zero, L_80233544
    if (ctx->r2 == 0) {
        // 0x80233530: addiu       $s2, $s1, 0x4E0
        ctx->r18 = ADD32(ctx->r17, 0X4E0);
            goto L_80233544;
    }
    // 0x80233530: addiu       $s2, $s1, 0x4E0
    ctx->r18 = ADD32(ctx->r17, 0X4E0);
    // 0x80233534: jal         0x80233AB0
    // 0x80233538: nop

    func_80233AB0_ovl22(rdram, ctx);
        goto after_0;
    // 0x80233538: nop

    after_0:
    // 0x8023353C: j           L_80233698
    // 0x80233540: nop

        goto L_80233698;
    // 0x80233540: nop

L_80233544:
    // 0x80233544: lbu         $v1, 0xA4($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA4);
    // 0x80233548: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8023354C: bne         $v1, $v0, L_80233564
    if (ctx->r3 != ctx->r2) {
        // 0x80233550: addiu       $v0, $zero, 0x15
        ctx->r2 = ADD32(0, 0X15);
            goto L_80233564;
    }
    // 0x80233550: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80233554: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80233558: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8023355C: lbu         $v1, 0xA4($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA4);
    // 0x80233560: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
L_80233564:
    // 0x80233564: bne         $v1, $v0, L_802335D0
    if (ctx->r3 != ctx->r2) {
        // 0x80233568: addiu       $a0, $zero, 0x19C
        ctx->r4 = ADD32(0, 0X19C);
            goto L_802335D0;
    }
    // 0x80233568: addiu       $a0, $zero, 0x19C
    ctx->r4 = ADD32(0, 0X19C);
    // 0x8023356C: jal         0x8002A33C
    // 0x80233570: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80233570: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_1:
    // 0x80233574: lhu         $v1, 0x56C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56C);
    // 0x80233578: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8023357C: lui         $a1, 0x8019
    ctx->r5 = S32(0X8019 << 16);
    // 0x80233580: lw          $a1, 0x3C60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3C60);
    // 0x80233584: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80233588: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023358C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233590: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80233594: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80233598: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8023359C: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x802335A0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x802335A4: lbu         $v1, 0x2($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2);
    // 0x802335A8: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x802335AC: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x802335B0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802335B4: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x802335B8: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x802335BC: sw          $v0, 0x54C($s1)
    MEM_W(0X54C, ctx->r17) = ctx->r2;
    // 0x802335C0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802335C4: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x802335C8: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x802335CC: sw          $v0, 0x550($s1)
    MEM_W(0X550, ctx->r17) = ctx->r2;
L_802335D0:
    // 0x802335D0: lbu         $v1, 0xA4($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA4);
    // 0x802335D4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802335D8: bne         $v1, $v0, L_80233608
    if (ctx->r3 != ctx->r2) {
        // 0x802335DC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_80233608;
    }
    // 0x802335DC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x802335E0: addiu       $a0, $zero, 0x19D
    ctx->r4 = ADD32(0, 0X19D);
    // 0x802335E4: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x802335E8: jal         0x8002A33C
    // 0x802335EC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x802335EC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802335F0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x802335F4: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x802335F8: addiu       $a2, $zero, 0x1388
    ctx->r6 = ADD32(0, 0X1388);
    // 0x802335FC: jal         0x8003491C
    // 0x80233600: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003491C_FD1C(rdram, ctx);
        goto after_3;
    // 0x80233600: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80233604: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_80233608:
    // 0x80233608: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023360C: lui         $a2, 0x200
    ctx->r6 = S32(0X200 << 16);
    // 0x80233610: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_80233614:
    // 0x80233614: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
    // 0x80233618: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8023361C: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x80233620: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80233624: slti        $v0, $a1, 0x6
    ctx->r2 = SIGNED(ctx->r5) < 0X6 ? 1 : 0;
    // 0x80233628: bne         $v0, $zero, L_80233614
    if (ctx->r2 != 0) {
        // 0x8023362C: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_80233614;
    }
    // 0x8023362C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80233630: lbu         $v0, 0xA4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA4);
    // 0x80233634: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x80233638: xori        $v0, $v0, 0x28
    ctx->r2 = ctx->r2 ^ 0X28;
    // 0x8023363C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80233640: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80233644: beq         $v0, $zero, L_80233658
    if (ctx->r2 == 0) {
        // 0x80233648: nop
    
            goto L_80233658;
    }
    // 0x80233648: nop

    // 0x8023364C: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x80233650: sw          $zero, 0x6C($s2)
    MEM_W(0X6C, ctx->r18) = 0;
    // 0x80233654: sw          $zero, 0x70($s2)
    MEM_W(0X70, ctx->r18) = 0;
L_80233658:
    // 0x80233658: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x8023365C: beq         $v0, $zero, L_80233698
    if (ctx->r2 == 0) {
        // 0x80233660: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_80233698;
    }
    // 0x80233660: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80233664: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80233668: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x8023366C: jal         0x8004F820
    // 0x80233670: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x80233670: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_4:
    // 0x80233674: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80233678: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x8023367C: lhu         $v1, 0x56($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X56);
    // 0x80233680: lh          $a2, 0x46($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X46);
    // 0x80233684: lh          $a3, 0x48($a0)
    ctx->r7 = MEM_H(ctx->r4, 0X48);
    // 0x80233688: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023368C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80233690: jal         0x8004DA90
    // 0x80233694: sh          $v1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x80233694: sh          $v1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r3;
    after_5:
L_80233698:
    // 0x80233698: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023369C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802336A0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802336A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802336A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802336AC: jr          $ra
    // 0x802336B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802336B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80227964_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227964: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80227968: lb          $v1, 0x47CC($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X47CC);
    // 0x8022796C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227970: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227974: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227978: bne         $v1, $v0, L_802279A4
    if (ctx->r3 != ctx->r2) {
        // 0x8022797C: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_802279A4;
    }
    // 0x8022797C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80227980: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227984: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80227988: bne         $v0, $zero, L_802279A4
    if (ctx->r2 != 0) {
        // 0x8022798C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802279A4;
    }
    // 0x8022798C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80227990: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227994: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80227998: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022799C: jal         0x80070050
    // 0x802279A0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_0;
    // 0x802279A0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
L_802279A4:
    // 0x802279A4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802279A8: jr          $ra
    // 0x802279AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802279AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230C6C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230C6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230C70: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230C74: jal         0x8004F418
    // 0x80230C78: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80230C78: nop

    after_0:
    // 0x80230C7C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230C80: jr          $ra
    // 0x80230C84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230C84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80230C88: nop

    // 0x80230C8C: nop

;}
RECOMP_FUNC void func_8022D2C8_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D2C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D2CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D2D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D2D4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D2D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D2DC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D2E0: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022D2E4: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022D2E8: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022D2EC: beq         $v0, $zero, L_8022D3F4
    if (ctx->r2 == 0) {
        // 0x8022D2F0: addiu       $a0, $s0, 0x308
        ctx->r4 = ADD32(ctx->r16, 0X308);
            goto L_8022D3F4;
    }
    // 0x8022D2F0: addiu       $a0, $s0, 0x308
    ctx->r4 = ADD32(ctx->r16, 0X308);
    // 0x8022D2F4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022D2F8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D2FC: addu        $at, $at, $v0
    gpr jr_addend_8022D304 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D300: lw          $v0, -0x5B88($at)
    ctx->r2 = ADD32(ctx->r1, -0X5B88);
    // 0x8022D304: jr          $v0
    // 0x8022D308: nop

    switch (jr_addend_8022D304 >> 2) {
        case 0: goto L_8022D30C; break;
        case 1: goto L_8022D330; break;
        case 2: goto L_8022D35C; break;
        case 3: goto L_8022D368; break;
        case 4: goto L_8022D3A4; break;
        case 5: goto L_8022D3C0; break;
        default: switch_error(__func__, 0x8022D304, 0x8023A478);
    }
    // 0x8022D308: nop

L_8022D30C:
    // 0x8022D30C: jal         0x8022CC4C
    // 0x8022D310: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022CC4C_ovl22(rdram, ctx);
        goto after_0;
    // 0x8022D310: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022D314: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D318: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D31C: jal         0x80050294
    // 0x8022D320: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022D320: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022D324: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D328: j           L_8022D3B8
    // 0x8022D32C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022D3B8;
    // 0x8022D32C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022D330:
    // 0x8022D330: lw          $v0, 0x184($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X184);
    // 0x8022D334: bne         $v0, $s0, L_8022D3F4
    if (ctx->r2 != ctx->r16) {
        // 0x8022D338: nop
    
            goto L_8022D3F4;
    }
    // 0x8022D338: nop

    // 0x8022D33C: jal         0x8022D5F8
    // 0x8022D340: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022D5F8_ovl22(rdram, ctx);
        goto after_2;
    // 0x8022D340: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022D344: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022D348: beql        $v0, $zero, L_8022D3F4
    if (ctx->r2 == 0) {
        // 0x8022D34C: sw          $zero, 0x184($s1)
        MEM_W(0X184, ctx->r17) = 0;
            goto L_8022D3F4;
    }
    goto skip_0;
    // 0x8022D34C: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    skip_0:
    // 0x8022D350: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D354: j           L_8022D3B8
    // 0x8022D358: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022D3B8;
    // 0x8022D358: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022D35C:
    // 0x8022D35C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D360: j           L_8022D3B8
    // 0x8022D364: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022D3B8;
    // 0x8022D364: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022D368:
    // 0x8022D368: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8022D36C: lw          $a1, 0x2B94($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B94);
    // 0x8022D370: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8022D374: jal         0x80061510
    // 0x8022D378: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_3;
    // 0x8022D378: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_3:
    // 0x8022D37C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D380: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022D384: jal         0x80050294
    // 0x8022D388: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8022D388: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022D38C: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    // 0x8022D390: jal         0x8002A33C
    // 0x8022D394: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8022D394: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_5:
    // 0x8022D398: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D39C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D3A0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022D3A4:
    // 0x8022D3A4: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x8022D3A8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D3AC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022D3B0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022D3B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022D3B8:
    // 0x8022D3B8: j           L_8022D3F4
    // 0x8022D3BC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022D3F4;
    // 0x8022D3BC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022D3C0:
    // 0x8022D3C0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D3C4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D3C8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D3CC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022D3D0: bne         $v0, $zero, L_8022D3F4
    if (ctx->r2 != 0) {
        // 0x8022D3D4: lui         $v0, 0x48C
        ctx->r2 = S32(0X48C << 16);
            goto L_8022D3F4;
    }
    // 0x8022D3D4: lui         $v0, 0x48C
    ctx->r2 = S32(0X48C << 16);
    // 0x8022D3D8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022D3DC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022D3E0: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8022D3E4: addiu       $v1, $zero, 0x2D
    ctx->r3 = ADD32(0, 0X2D);
    // 0x8022D3E8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022D3EC: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022D3F0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_8022D3F4:
    // 0x8022D3F4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D3F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D3FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D400: jr          $ra
    // 0x8022D404: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D404: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230D80_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230D80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230D84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230D88: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230D8C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230D90: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230D94: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230D98: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80230D9C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80230DA0: sb          $s1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r17;
    // 0x80230DA4: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80230DA8: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80230DAC: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80230DB0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80230DB4: jal         0x8004D5D4
    // 0x80230DB8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80230DB8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80230DBC: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80230DC0: sw          $zero, 0x330($s0)
    MEM_W(0X330, ctx->r16) = 0;
    // 0x80230DC4: sw          $zero, 0x334($s0)
    MEM_W(0X334, ctx->r16) = 0;
    // 0x80230DC8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80230DCC: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80230DD0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80230DD4: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80230DD8: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80230DDC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80230DE0: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80230DE4: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
    // 0x80230DE8: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x80230DEC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80230DF0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80230DF4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80230DF8: lbu         $a1, 0xF($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XF);
    // 0x80230DFC: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x80230E00: jal         0x800540BC
    // 0x80230E04: addiu       $a0, $s0, 0x350
    ctx->r4 = ADD32(ctx->r16, 0X350);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x80230E04: addiu       $a0, $s0, 0x350
    ctx->r4 = ADD32(ctx->r16, 0X350);
    after_1:
    // 0x80230E08: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80230E0C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80230E10: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80230E14: sw          $zero, 0x340($s0)
    MEM_W(0X340, ctx->r16) = 0;
    // 0x80230E18: sw          $zero, 0x344($s0)
    MEM_W(0X344, ctx->r16) = 0;
    // 0x80230E1C: sw          $zero, 0x354($s0)
    MEM_W(0X354, ctx->r16) = 0;
    // 0x80230E20: sh          $zero, 0x366($s0)
    MEM_H(0X366, ctx->r16) = 0;
    // 0x80230E24: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230E28: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230E2C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80230E30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230E34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80230E38: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x80230E3C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230E40: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80230E44: addiu       $v0, $v0, -0x6340
    ctx->r2 = ADD32(ctx->r2, -0X6340);
    // 0x80230E48: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80230E4C: sb          $s1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r17;
    // 0x80230E50: sb          $s1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r17;
    // 0x80230E54: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80230E58: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80230E5C: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x80230E60: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x80230E64: jal         0x80050294
    // 0x80230E68: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80230E68: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    after_2:
    // 0x80230E6C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80230E70: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80230E74: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x80230E78: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80230E7C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80230E80: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80230E84: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x80230E88: sw          $zero, 0x50($s0)
    MEM_W(0X50, ctx->r16) = 0;
    // 0x80230E8C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230E90: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230E94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230E98: jr          $ra
    // 0x80230E9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230E9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80235884_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235884: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80235888: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023588C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235890: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80235894: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80235898: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023589C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802358A0: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x802358A4: jal         0x8004D5D4
    // 0x802358A8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802358A8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x802358AC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802358B0: addiu       $v0, $v0, -0x60D0
    ctx->r2 = ADD32(ctx->r2, -0X60D0);
    // 0x802358B4: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x802358B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802358BC: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    // 0x802358C0: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x802358C4: jal         0x800A3450
    // 0x802358C8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x802358C8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    after_1:
    // 0x802358CC: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x802358D0: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x802358D4: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x802358D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802358DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802358E0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802358E4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802358E8: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x802358EC: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x802358F0: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
    // 0x802358F4: jal         0x800540BC
    // 0x802358F8: sw          $v0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r2;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_2;
    // 0x802358F8: sw          $v0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r2;
    after_2:
    // 0x802358FC: sw          $zero, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = 0;
    // 0x80235900: jal         0x800A3450
    // 0x80235904: sw          $zero, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80235904: sw          $zero, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = 0;
    after_3:
    // 0x80235908: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023590C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80235910: jal         0x8003E934
    // 0x80235914: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x80235914: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    after_4:
    // 0x80235918: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8023591C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80235920: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80235924: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80235928: addiu       $v0, $v0, -0x82
    ctx->r2 = ADD32(ctx->r2, -0X82);
    // 0x8023592C: sh          $a0, 0xE2($s0)
    MEM_H(0XE2, ctx->r16) = ctx->r4;
    // 0x80235930: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80235934: beq         $v0, $zero, L_8023594C
    if (ctx->r2 == 0) {
        // 0x80235938: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8023594C;
    }
    // 0x80235938: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8023593C: addiu       $v0, $a0, -0x82
    ctx->r2 = ADD32(ctx->r4, -0X82);
    // 0x80235940: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80235944: j           L_80235950
    // 0x80235948: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
        goto L_80235950;
    // 0x80235948: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
L_8023594C:
    // 0x8023594C: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
L_80235950:
    // 0x80235950: sh          $v0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r2;
    // 0x80235954: addiu       $v0, $zero, -0x82
    ctx->r2 = ADD32(0, -0X82);
    // 0x80235958: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8023595C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235960: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235964: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80235968: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023596C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80235970: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80235974: jr          $ra
    // 0x80235978: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80235978: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
