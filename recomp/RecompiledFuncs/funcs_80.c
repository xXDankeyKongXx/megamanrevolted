#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022DB34_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DB34: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022DB38: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022DB3C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022DB40: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022DB44: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022DB48: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022DB4C: lbu         $s0, 0x9($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X9);
    // 0x8022DB50: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022DB54: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022DB58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DB5C: beq         $s0, $v0, L_8022DBC4
    if (ctx->r16 == ctx->r2) {
        // 0x8022DB60: slti        $v0, $s0, 0x2
        ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
            goto L_8022DBC4;
    }
    // 0x8022DB60: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x8022DB64: beql        $v0, $zero, L_8022DB7C
    if (ctx->r2 == 0) {
        // 0x8022DB68: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022DB7C;
    }
    goto skip_0;
    // 0x8022DB68: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022DB6C: beq         $s0, $zero, L_8022DB8C
    if (ctx->r16 == 0) {
        // 0x8022DB70: nop
    
            goto L_8022DB8C;
    }
    // 0x8022DB70: nop

    // 0x8022DB74: j           L_8022DCF4
    // 0x8022DB78: nop

        goto L_8022DCF4;
    // 0x8022DB78: nop

L_8022DB7C:
    // 0x8022DB7C: beq         $s0, $v0, L_8022DCB8
    if (ctx->r16 == ctx->r2) {
        // 0x8022DB80: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8022DCB8;
    }
    // 0x8022DB80: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022DB84: j           L_8022DCF4
    // 0x8022DB88: nop

        goto L_8022DCF4;
    // 0x8022DB88: nop

L_8022DB8C:
    // 0x8022DB8C: jal         0x8006FF84
    // 0x8022DB90: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8022DB90: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x8022DB94: beq         $v0, $zero, L_8022DCF4
    if (ctx->r2 == 0) {
        // 0x8022DB98: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022DCF4;
    }
    // 0x8022DB98: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022DB9C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022DBA0: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x8022DBA4: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022DBA8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022DBAC: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x8022DBB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022DBB4: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8022DBB8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022DBBC: j           L_8022DCA8
    // 0x8022DBC0: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
        goto L_8022DCA8;
    // 0x8022DBC0: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
L_8022DBC4:
    // 0x8022DBC4: jal         0x8022DD7C
    // 0x8022DBC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8022DD7C_ovl9(rdram, ctx);
        goto after_1;
    // 0x8022DBC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022DBCC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022DBD0: beql        $v0, $zero, L_8022DC98
    if (ctx->r2 == 0) {
        // 0x8022DBD4: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8022DC98;
    }
    goto skip_1;
    // 0x8022DBD4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_1:
    // 0x8022DBD8: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8022DBDC: bne         $v0, $zero, L_8022DC00
    if (ctx->r2 != 0) {
        // 0x8022DBE0: addu        $a1, $v0, $zero
        ctx->r5 = ADD32(ctx->r2, 0);
            goto L_8022DC00;
    }
    // 0x8022DBE0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022DBE4: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x8022DBE8: lb          $a3, 0xE($s1)
    ctx->r7 = MEM_B(ctx->r17, 0XE);
    // 0x8022DBEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022DBF0: jal         0x800610AC
    // 0x8022DBF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_2;
    // 0x8022DBF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022DBF8: j           L_8022DCA8
    // 0x8022DBFC: nop

        goto L_8022DCA8;
    // 0x8022DBFC: nop

L_8022DC00:
    // 0x8022DC00: beq         $v0, $s0, L_8022DCA8
    if (ctx->r2 == ctx->r16) {
        // 0x8022DC04: andi        $v0, $v0, 0x80
        ctx->r2 = ctx->r2 & 0X80;
            goto L_8022DCA8;
    }
    // 0x8022DC04: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022DC08: beq         $v0, $zero, L_8022DC58
    if (ctx->r2 == 0) {
        // 0x8022DC0C: lui         $a0, 0x6666
        ctx->r4 = S32(0X6666 << 16);
            goto L_8022DC58;
    }
    // 0x8022DC0C: lui         $a0, 0x6666
    ctx->r4 = S32(0X6666 << 16);
    // 0x8022DC10: ori         $a0, $a0, 0x6667
    ctx->r4 = ctx->r4 | 0X6667;
    // 0x8022DC14: lbu         $v1, 0xE($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XE);
    // 0x8022DC18: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x8022DC1C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022DC20: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022DC24: sll         $a2, $v0, 2
    ctx->r6 = S32(ctx->r2 << 2);
    // 0x8022DC28: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022DC2C: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x8022DC30: mult        $a2, $a0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022DC34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022DC38: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022DC3C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022DC40: sra         $a2, $a2, 31
    ctx->r6 = S32(SIGNED(ctx->r6) >> 31);
    // 0x8022DC44: mfhi        $t0
    ctx->r8 = hi;
    // 0x8022DC48: sra         $v0, $t0, 2
    ctx->r2 = S32(SIGNED(ctx->r8) >> 2);
    // 0x8022DC4C: nop

    // 0x8022DC50: j           L_8022DC78
    // 0x8022DC54: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
        goto L_8022DC78;
    // 0x8022DC54: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
L_8022DC58:
    // 0x8022DC58: lb          $v1, 0xE($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XE);
    // 0x8022DC5C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022DC60: beq         $v1, $v0, L_8022DC94
    if (ctx->r3 == ctx->r2) {
        // 0x8022DC64: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_8022DC94;
    }
    // 0x8022DC64: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x8022DC68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022DC6C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022DC70: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x8022DC74: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_8022DC78:
    // 0x8022DC78: jal         0x80069754
    // 0x8022DC7C: nop

    func_80069754_44B54(rdram, ctx);
        goto after_3;
    // 0x8022DC7C: nop

    after_3:
    // 0x8022DC80: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8022DC84: jal         0x8006036C
    // 0x8022DC88: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x8022DC88: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_4:
    // 0x8022DC8C: j           L_8022DCA8
    // 0x8022DC90: nop

        goto L_8022DCA8;
    // 0x8022DC90: nop

L_8022DC94:
    // 0x8022DC94: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8022DC98:
    // 0x8022DC98: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022DC9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DCA0: jal         0x80069754
    // 0x8022DCA4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_5;
    // 0x8022DCA4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
L_8022DCA8:
    // 0x8022DCA8: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8022DCAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DCB0: j           L_8022DCF4
    // 0x8022DCB4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_8022DCF4;
    // 0x8022DCB4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8022DCB8:
    // 0x8022DCB8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022DCBC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022DCC0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022DCC4: bne         $v0, $zero, L_8022DCF4
    if (ctx->r2 != 0) {
        // 0x8022DCC8: nop
    
            goto L_8022DCF4;
    }
    // 0x8022DCC8: nop

    // 0x8022DCCC: jal         0x80070050
    // 0x8022DCD0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_6;
    // 0x8022DCD0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x8022DCD4: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022DCD8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022DCDC: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x8022DCE0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022DCE4: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8022DCE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DCEC: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8022DCF0: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_8022DCF4:
    // 0x8022DCF4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022DCF8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022DCFC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022DD00: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022DD04: jr          $ra
    // 0x8022DD08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022DD08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80228958_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228958: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022895C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228960: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228964: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228968: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022896C: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80228970: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80228974: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x80228978: jal         0x8004FA7C
    // 0x8022897C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022897C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x80228980: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80228984: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80228988: beq         $v0, $zero, L_80228A1C
    if (ctx->r2 == 0) {
        // 0x8022898C: nop
    
            goto L_80228A1C;
    }
    // 0x8022898C: nop

    // 0x80228990: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80228994: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80228998: bne         $v0, $zero, L_80228A1C
    if (ctx->r2 != 0) {
        // 0x8022899C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228A1C;
    }
    // 0x8022899C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802289A0: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x802289A4: beq         $v1, $v0, L_802289BC
    if (ctx->r3 == ctx->r2) {
        // 0x802289A8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802289BC;
    }
    // 0x802289A8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802289AC: beq         $v1, $v0, L_802289EC
    if (ctx->r3 == ctx->r2) {
        // 0x802289B0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802289EC;
    }
    // 0x802289B0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802289B4: j           L_80228A10
    // 0x802289B8: nop

        goto L_80228A10;
    // 0x802289B8: nop

L_802289BC:
    // 0x802289BC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802289C0: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x802289C4: bne         $v0, $zero, L_80228A10
    if (ctx->r2 != 0) {
        // 0x802289C8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80228A10;
    }
    // 0x802289C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802289CC: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x802289D0: bne         $v0, $zero, L_80228A10
    if (ctx->r2 != 0) {
        // 0x802289D4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228A10;
    }
    // 0x802289D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802289D8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802289DC: bne         $v1, $v0, L_80228A10
    if (ctx->r3 != ctx->r2) {
        // 0x802289E0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80228A10;
    }
    // 0x802289E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802289E4: j           L_80228A10
    // 0x802289E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80228A10;
    // 0x802289E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802289EC:
    // 0x802289EC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802289F0: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x802289F4: beq         $v0, $zero, L_80228A0C
    if (ctx->r2 == 0) {
        // 0x802289F8: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_80228A0C;
    }
    // 0x802289F8: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x802289FC: bne         $v0, $zero, L_80228A10
    if (ctx->r2 != 0) {
        // 0x80228A00: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80228A10;
    }
    // 0x80228A00: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80228A04: j           L_80228A10
    // 0x80228A08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80228A10;
    // 0x80228A08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80228A0C:
    // 0x80228A0C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80228A10:
    // 0x80228A10: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228A14: beq         $v0, $zero, L_80228A40
    if (ctx->r2 == 0) {
        // 0x80228A18: nop
    
            goto L_80228A40;
    }
    // 0x80228A18: nop

L_80228A1C:
    // 0x80228A1C: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80228A20: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228A24: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80228A28: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80228A2C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80228A30: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80228A34: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80228A38: j           L_80228A50
    // 0x80228A3C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80228A50;
    // 0x80228A3C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80228A40:
    // 0x80228A40: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228A44: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80228A48: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228A4C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80228A50:
    // 0x80228A50: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228A54: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228A58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228A5C: jr          $ra
    // 0x80228A60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228A60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229040_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229044: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229048: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022904C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229050: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229054: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229058: lw          $v0, 0x678($at)
    ctx->r2 = MEM_W(ctx->r1, 0X678);
    // 0x8022905C: jalr        $v0
    // 0x80229060: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80229060: nop

    after_0:
    // 0x80229064: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229068: jr          $ra
    // 0x8022906C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022906C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228434_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228434: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228438: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022843C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228440: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80228444: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80228448: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022844C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228450: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80228454: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80228458: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022845C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80228460: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228464: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x80228468: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x8022846C: jal         0x80229358
    // 0x80228470: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_80229358_ovl9(rdram, ctx);
        goto after_0;
    // 0x80228470: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x80228474: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80228478: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022847C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228480: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80228484: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x80228488: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022848C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80228490: jal         0x8004F820
    // 0x80228494: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80228494: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x80228498: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022849C: bgez        $v0, L_802284CC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802284A0: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_802284CC;
    }
    // 0x802284A0: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x802284A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802284A8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802284AC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802284B0: jal         0x8004F820
    // 0x802284B4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x802284B4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x802284B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802284BC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802284C0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802284C4: j           L_802284E8
    // 0x802284C8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_802284E8;
    // 0x802284C8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_802284CC:
    // 0x802284CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802284D0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802284D4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802284D8: jal         0x8004F820
    // 0x802284DC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x802284DC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x802284E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802284E4: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_802284E8:
    // 0x802284E8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802284EC: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x802284F0: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x802284F4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802284F8: jal         0x800610AC
    // 0x802284FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x802284FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80228500: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80228504: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80228508: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022850C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228510: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228514: jr          $ra
    // 0x80228518: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228518: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022D26C_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D26C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022D270: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022D274: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D278: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022D27C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022D280: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022D284: lbu         $s1, 0xA($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D288: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022D28C: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022D290: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D294: beq         $s1, $v0, L_8022D2FC
    if (ctx->r17 == ctx->r2) {
        // 0x8022D298: slti        $v0, $s1, 0x2
        ctx->r2 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
            goto L_8022D2FC;
    }
    // 0x8022D298: slti        $v0, $s1, 0x2
    ctx->r2 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x8022D29C: beql        $v0, $zero, L_8022D2B4
    if (ctx->r2 == 0) {
        // 0x8022D2A0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022D2B4;
    }
    goto skip_0;
    // 0x8022D2A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022D2A4: beq         $s1, $zero, L_8022D2C4
    if (ctx->r17 == 0) {
        // 0x8022D2A8: nop
    
            goto L_8022D2C4;
    }
    // 0x8022D2A8: nop

    // 0x8022D2AC: j           L_8022D424
    // 0x8022D2B0: nop

        goto L_8022D424;
    // 0x8022D2B0: nop

L_8022D2B4:
    // 0x8022D2B4: beq         $s1, $v0, L_8022D3EC
    if (ctx->r17 == ctx->r2) {
        // 0x8022D2B8: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8022D3EC;
    }
    // 0x8022D2B8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022D2BC: j           L_8022D424
    // 0x8022D2C0: nop

        goto L_8022D424;
    // 0x8022D2C0: nop

L_8022D2C4:
    // 0x8022D2C4: jal         0x8006FF84
    // 0x8022D2C8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8022D2C8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x8022D2CC: beq         $v0, $zero, L_8022D424
    if (ctx->r2 == 0) {
        // 0x8022D2D0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022D424;
    }
    // 0x8022D2D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D2D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022D2D8: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x8022D2DC: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022D2E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022D2E4: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x8022D2E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022D2EC: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8022D2F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022D2F4: j           L_8022D3DC
    // 0x8022D2F8: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
        goto L_8022D3DC;
    // 0x8022D2F8: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
L_8022D2FC:
    // 0x8022D2FC: jal         0x8022D874
    // 0x8022D300: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022D874_ovl9(rdram, ctx);
        goto after_1;
    // 0x8022D300: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022D304: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022D308: beql        $v0, $zero, L_8022D3CC
    if (ctx->r2 == 0) {
        // 0x8022D30C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022D3CC;
    }
    goto skip_1;
    // 0x8022D30C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_1:
    // 0x8022D310: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022D314: bne         $v0, $zero, L_8022D338
    if (ctx->r2 != 0) {
        // 0x8022D318: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_8022D338;
    }
    // 0x8022D318: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022D31C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8022D320: lb          $a3, 0xE($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XE);
    // 0x8022D324: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022D328: jal         0x800610AC
    // 0x8022D32C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_2;
    // 0x8022D32C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022D330: j           L_8022D3DC
    // 0x8022D334: nop

        goto L_8022D3DC;
    // 0x8022D334: nop

L_8022D338:
    // 0x8022D338: beq         $v0, $s1, L_8022D3DC
    if (ctx->r2 == ctx->r17) {
        // 0x8022D33C: andi        $v0, $v0, 0x80
        ctx->r2 = ctx->r2 & 0X80;
            goto L_8022D3DC;
    }
    // 0x8022D33C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022D340: beq         $v0, $zero, L_8022D38C
    if (ctx->r2 == 0) {
        // 0x8022D344: andi        $v0, $a0, 0x7F
        ctx->r2 = ctx->r4 & 0X7F;
            goto L_8022D38C;
    }
    // 0x8022D344: andi        $v0, $a0, 0x7F
    ctx->r2 = ctx->r4 & 0X7F;
    // 0x8022D348: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x8022D34C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022D350: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022D354: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8022D358: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D35C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022D360: lui         $v0, 0xCCCC
    ctx->r2 = S32(0XCCCC << 16);
    // 0x8022D364: ori         $v0, $v0, 0xCCCD
    ctx->r2 = ctx->r2 | 0XCCCD;
    // 0x8022D368: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022D36C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022D370: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022D374: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022D378: mfhi        $t0
    ctx->r8 = hi;
    // 0x8022D37C: nop

    // 0x8022D380: nop

    // 0x8022D384: j           L_8022D3AC
    // 0x8022D388: srl         $a2, $t0, 3
    ctx->r6 = S32(U32(ctx->r8) >> 3);
        goto L_8022D3AC;
    // 0x8022D388: srl         $a2, $t0, 3
    ctx->r6 = S32(U32(ctx->r8) >> 3);
L_8022D38C:
    // 0x8022D38C: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022D390: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022D394: beq         $v1, $v0, L_8022D3C8
    if (ctx->r3 == ctx->r2) {
        // 0x8022D398: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_8022D3C8;
    }
    // 0x8022D398: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x8022D39C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022D3A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D3A4: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x8022D3A8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_8022D3AC:
    // 0x8022D3AC: jal         0x80069754
    // 0x8022D3B0: nop

    func_80069754_44B54(rdram, ctx);
        goto after_3;
    // 0x8022D3B0: nop

    after_3:
    // 0x8022D3B4: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8022D3B8: jal         0x8006036C
    // 0x8022D3BC: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x8022D3BC: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_4:
    // 0x8022D3C0: j           L_8022D3DC
    // 0x8022D3C4: nop

        goto L_8022D3DC;
    // 0x8022D3C4: nop

L_8022D3C8:
    // 0x8022D3C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8022D3CC:
    // 0x8022D3CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022D3D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D3D4: jal         0x80069754
    // 0x8022D3D8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_5;
    // 0x8022D3D8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
L_8022D3DC:
    // 0x8022D3DC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D3E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D3E4: j           L_8022D424
    // 0x8022D3E8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022D424;
    // 0x8022D3E8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022D3EC:
    // 0x8022D3EC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022D3F0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022D3F4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022D3F8: bne         $v0, $zero, L_8022D424
    if (ctx->r2 != 0) {
        // 0x8022D3FC: nop
    
            goto L_8022D424;
    }
    // 0x8022D3FC: nop

    // 0x8022D400: jal         0x80070050
    // 0x8022D404: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_6;
    // 0x8022D404: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x8022D408: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022D40C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022D410: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x8022D414: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022D418: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8022D41C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022D420: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022D424:
    // 0x8022D424: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022D428: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022D42C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022D430: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022D434: jr          $ra
    // 0x8022D438: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022D438: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022BAC8_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BAC8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022BACC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BAD0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BAD4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022BAD8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022BADC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022BAE0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022BAE4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022BAE8: beq         $v1, $zero, L_8022BB04
    if (ctx->r3 == 0) {
        // 0x8022BAEC: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022BB04;
    }
    // 0x8022BAEC: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022BAF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BAF4: beq         $v1, $v0, L_8022BC0C
    if (ctx->r3 == ctx->r2) {
        // 0x8022BAF8: nop
    
            goto L_8022BC0C;
    }
    // 0x8022BAF8: nop

    // 0x8022BAFC: j           L_8022BC54
    // 0x8022BB00: nop

        goto L_8022BC54;
    // 0x8022BB00: nop

L_8022BB04:
    // 0x8022BB04: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022BB08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BB0C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022BB10: bne         $v1, $zero, L_8022BB80
    if (ctx->r3 != 0) {
        // 0x8022BB14: sb          $v0, 0xAC($s0)
        MEM_B(0XAC, ctx->r16) = ctx->r2;
            goto L_8022BB80;
    }
    // 0x8022BB14: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022BB18: lhu         $v0, 0x384($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X384);
    // 0x8022BB1C: lhu         $a0, 0x384($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X384);
    // 0x8022BB20: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022BB24: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022BB28: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BB2C: lhu         $v1, 0x7AC($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X7AC);
    // 0x8022BB30: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022BB34: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BB38: lhu         $v0, 0x7A8($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X7A8);
    // 0x8022BB3C: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x8022BB40: sh          $zero, 0x37E($s0)
    MEM_H(0X37E, ctx->r16) = 0;
    // 0x8022BB44: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022BB48: sra         $v1, $v1, 17
    ctx->r3 = S32(SIGNED(ctx->r3) >> 17);
    // 0x8022BB4C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BB50: sh          $v0, 0x37C($s0)
    MEM_H(0X37C, ctx->r16) = ctx->r2;
    // 0x8022BB54: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022BB58: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022BB5C: lhu         $v0, 0x7AE($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7AE);
    // 0x8022BB60: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022BB64: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022BB68: lhu         $v1, 0x7AA($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X7AA);
    // 0x8022BB6C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BB70: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x8022BB74: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BB78: j           L_8022BB98
    // 0x8022BB7C: sh          $v1, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r3;
        goto L_8022BB98;
    // 0x8022BB7C: sh          $v1, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r3;
L_8022BB80:
    // 0x8022BB80: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022BB84: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022BB88: sh          $zero, 0x37E($s0)
    MEM_H(0X37E, ctx->r16) = 0;
    // 0x8022BB8C: addiu       $v0, $v0, -0x100
    ctx->r2 = ADD32(ctx->r2, -0X100);
    // 0x8022BB90: sh          $v1, 0x37C($s0)
    MEM_H(0X37C, ctx->r16) = ctx->r3;
    // 0x8022BB94: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
L_8022BB98:
    // 0x8022BB98: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022BB9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022BBA0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022BBA4: addiu       $s2, $s3, 0x34
    ctx->r18 = ADD32(ctx->r19, 0X34);
    // 0x8022BBA8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022BBAC: jal         0x8004F820
    // 0x8022BBB0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022BBB0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_0:
    // 0x8022BBB4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BBB8: bgez        $v0, L_8022BBE4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022BBBC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022BBE4;
    }
    // 0x8022BBBC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022BBC0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022BBC4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022BBC8: jal         0x8004F820
    // 0x8022BBCC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022BBCC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x8022BBD0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BBD4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BBD8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022BBDC: j           L_8022BBFC
    // 0x8022BBE0: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022BBFC;
    // 0x8022BBE0: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022BBE4:
    // 0x8022BBE4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022BBE8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022BBEC: jal         0x8004F820
    // 0x8022BBF0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022BBF0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022BBF4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BBF8: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022BBFC:
    // 0x8022BBFC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022BC00: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022BC04: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x8022BC08: sh          $zero, 0x8($s3)
    MEM_H(0X8, ctx->r19) = 0;
L_8022BC0C:
    // 0x8022BC0C: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x8022BC10: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022BC14: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x8022BC18: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BC1C: bgtz        $v0, L_8022BC30
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022BC20: nop
    
            goto L_8022BC30;
    }
    // 0x8022BC20: nop

    // 0x8022BC24: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8022BC28: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022BC2C: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
L_8022BC30:
    // 0x8022BC30: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022BC34: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022BC38: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022BC3C: jal         0x8004F820
    // 0x8022BC40: addiu       $a1, $s3, 0x34
    ctx->r5 = ADD32(ctx->r19, 0X34);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022BC40: addiu       $a1, $s3, 0x34
    ctx->r5 = ADD32(ctx->r19, 0X34);
    after_3:
    // 0x8022BC44: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022BC48: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BC4C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022BC50: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022BC54:
    // 0x8022BC54: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022BC58: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BC5C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022BC60: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022BC64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BC68: jr          $ra
    // 0x8022BC6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022BC6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80226E10_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226E14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226E18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226E1C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226E20: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226E24: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80226E28: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80226E2C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80226E30: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226E34: beq         $v1, $zero, L_80226E44
    if (ctx->r3 == 0) {
        // 0x80226E38: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_80226E44;
    }
    // 0x80226E38: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80226E3C: j           L_80226E4C
    // 0x80226E40: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
        goto L_80226E4C;
    // 0x80226E40: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
L_80226E44:
    // 0x80226E44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226E48: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_80226E4C:
    // 0x80226E4C: jal         0x8004D5D4
    // 0x80226E50: nop

    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80226E50: nop

    after_0:
    // 0x80226E54: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226E58: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x80226E5C: bne         $a0, $v0, L_80226E6C
    if (ctx->r4 != ctx->r2) {
        // 0x80226E60: xori        $v1, $a0, 0x24
        ctx->r3 = ctx->r4 ^ 0X24;
            goto L_80226E6C;
    }
    // 0x80226E60: xori        $v1, $a0, 0x24
    ctx->r3 = ctx->r4 ^ 0X24;
    // 0x80226E64: j           L_80226EE0
    // 0x80226E68: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
        goto L_80226EE0;
    // 0x80226E68: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
L_80226E6C:
    // 0x80226E6C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80226E70: xori        $v0, $a0, 0x30
    ctx->r2 = ctx->r4 ^ 0X30;
    // 0x80226E74: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80226E78: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80226E7C: bne         $v1, $zero, L_80226EE0
    if (ctx->r3 != 0) {
        // 0x80226E80: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_80226EE0;
    }
    // 0x80226E80: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80226E84: xori        $v1, $a0, 0x42
    ctx->r3 = ctx->r4 ^ 0X42;
    // 0x80226E88: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80226E8C: xori        $v0, $a0, 0x53
    ctx->r2 = ctx->r4 ^ 0X53;
    // 0x80226E90: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80226E94: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80226E98: bne         $v1, $zero, L_80226EE0
    if (ctx->r3 != 0) {
        // 0x80226E9C: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_80226EE0;
    }
    // 0x80226E9C: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80226EA0: xori        $v1, $a0, 0x5C
    ctx->r3 = ctx->r4 ^ 0X5C;
    // 0x80226EA4: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80226EA8: xori        $v0, $a0, 0x44
    ctx->r2 = ctx->r4 ^ 0X44;
    // 0x80226EAC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80226EB0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80226EB4: bne         $v1, $zero, L_80226EE0
    if (ctx->r3 != 0) {
        // 0x80226EB8: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_80226EE0;
    }
    // 0x80226EB8: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80226EBC: addiu       $v0, $zero, 0x5E
    ctx->r2 = ADD32(0, 0X5E);
    // 0x80226EC0: bnel        $a0, $v0, L_80226EE0
    if (ctx->r4 != ctx->r2) {
        // 0x80226EC4: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_80226EE0;
    }
    goto skip_0;
    // 0x80226EC4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    skip_0:
    // 0x80226EC8: addiu       $v0, $zero, 0x1C0
    ctx->r2 = ADD32(0, 0X1C0);
    // 0x80226ECC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80226ED0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80226ED4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80226ED8: j           L_80226EE8
    // 0x80226EDC: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
        goto L_80226EE8;
    // 0x80226EDC: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
L_80226EE0:
    // 0x80226EE0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80226EE4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
L_80226EE8:
    // 0x80226EE8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80226EEC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80226EF0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80226EF4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226EF8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80226EFC: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x80226F00: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80226F04: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80226F08: bne         $v0, $zero, L_80226F14
    if (ctx->r2 != 0) {
        // 0x80226F0C: addiu       $v0, $zero, 0x2710
        ctx->r2 = ADD32(0, 0X2710);
            goto L_80226F14;
    }
    // 0x80226F0C: addiu       $v0, $zero, 0x2710
    ctx->r2 = ADD32(0, 0X2710);
    // 0x80226F10: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
L_80226F14:
    // 0x80226F14: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x80226F18: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
    // 0x80226F1C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80226F20: jal         0x8009A3B4
    // 0x80226F24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80226F24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80226F28: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80226F2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226F30: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226F34: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
    // 0x80226F38: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x80226F3C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226F40: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226F44: addiu       $v0, $v0, 0x440
    ctx->r2 = ADD32(ctx->r2, 0X440);
    // 0x80226F48: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80226F4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226F50: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80226F54: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80226F58: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80226F5C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80226F60: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80226F64: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80226F68: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80226F6C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80226F70: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80226F74: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80226F78: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80226F7C: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x80226F80: jal         0x80050294
    // 0x80226F84: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80226F84: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    after_2:
    // 0x80226F88: jal         0x80226FA4
    // 0x80226F8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226FA4_ovl9(rdram, ctx);
        goto after_3;
    // 0x80226F8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80226F90: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226F94: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226F98: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226F9C: jr          $ra
    // 0x80226FA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226FA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227EFC_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227EFC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80227F00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227F04: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227F08: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80227F0C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80227F10: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80227F14: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227F18: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227F1C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80227F20: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80227F24: bne         $v1, $v0, L_80227F40
    if (ctx->r3 != ctx->r2) {
        // 0x80227F28: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80227F40;
    }
    // 0x80227F28: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80227F2C: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80227F30: addiu       $s1, $s1, 0x5F0
    ctx->r17 = ADD32(ctx->r17, 0X5F0);
    // 0x80227F34: lui         $s3, 0x8023
    ctx->r19 = S32(0X8023 << 16);
    // 0x80227F38: j           L_80227F50
    // 0x80227F3C: addiu       $s3, $s3, 0x610
    ctx->r19 = ADD32(ctx->r19, 0X610);
        goto L_80227F50;
    // 0x80227F3C: addiu       $s3, $s3, 0x610
    ctx->r19 = ADD32(ctx->r19, 0X610);
L_80227F40:
    // 0x80227F40: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80227F44: addiu       $s1, $s1, 0x5E0
    ctx->r17 = ADD32(ctx->r17, 0X5E0);
    // 0x80227F48: lui         $s3, 0x8023
    ctx->r19 = S32(0X8023 << 16);
    // 0x80227F4C: addiu       $s3, $s3, 0x600
    ctx->r19 = ADD32(ctx->r19, 0X600);
L_80227F50:
    // 0x80227F50: lui         $s4, 0x8023
    ctx->r20 = S32(0X8023 << 16);
    // 0x80227F54: jal         0x800A3450
    // 0x80227F58: addiu       $s4, $s4, 0x620
    ctx->r20 = ADD32(ctx->r20, 0X620);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80227F58: addiu       $s4, $s4, 0x620
    ctx->r20 = ADD32(ctx->r20, 0X620);
    after_0:
    // 0x80227F5C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80227F60: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80227F64: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
    // 0x80227F68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227F6C: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x80227F70: beq         $v1, $v0, L_80227FFC
    if (ctx->r3 == ctx->r2) {
        // 0x80227F74: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80227FFC;
    }
    // 0x80227F74: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80227F78: beql        $v0, $zero, L_80227F90
    if (ctx->r2 == 0) {
        // 0x80227F7C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227F90;
    }
    goto skip_0;
    // 0x80227F7C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80227F80: beq         $v1, $zero, L_80227FA0
    if (ctx->r3 == 0) {
        // 0x80227F84: nop
    
            goto L_80227FA0;
    }
    // 0x80227F84: nop

    // 0x80227F88: j           L_8022808C
    // 0x80227F8C: nop

        goto L_8022808C;
    // 0x80227F8C: nop

L_80227F90:
    // 0x80227F90: beq         $v1, $v0, L_80228010
    if (ctx->r3 == ctx->r2) {
        // 0x80227F94: nop
    
            goto L_80228010;
    }
    // 0x80227F94: nop

    // 0x80227F98: j           L_8022808C
    // 0x80227F9C: nop

        goto L_8022808C;
    // 0x80227F9C: nop

L_80227FA0:
    // 0x80227FA0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227FA4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80227FA8: bne         $v0, $zero, L_80227FCC
    if (ctx->r2 != 0) {
        // 0x80227FAC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227FCC;
    }
    // 0x80227FAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227FB0: jal         0x800A3450
    // 0x80227FB4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80227FB4: nop

    after_1:
    // 0x80227FB8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80227FBC: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x80227FC0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80227FC4: beq         $v0, $zero, L_80227FD8
    if (ctx->r2 == 0) {
        // 0x80227FC8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227FD8;
    }
    // 0x80227FC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80227FCC:
    // 0x80227FCC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80227FD0: j           L_80227FEC
    // 0x80227FD4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80227FEC;
    // 0x80227FD4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80227FD8:
    // 0x80227FD8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227FDC: jal         0x80229368
    // 0x80227FE0: nop

    func_80229368_ovl9(rdram, ctx);
        goto after_2;
    // 0x80227FE0: nop

    after_2:
    // 0x80227FE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227FE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80227FEC:
    // 0x80227FEC: jal         0x802293A8
    // 0x80227FF0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_802293A8_ovl9(rdram, ctx);
        goto after_3;
    // 0x80227FF0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_3:
    // 0x80227FF4: j           L_802280B0
    // 0x80227FF8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_802280B0;
    // 0x80227FF8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_80227FFC:
    // 0x80227FFC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80228000: jal         0x80229358
    // 0x80228004: nop

    func_80229358_ovl9(rdram, ctx);
        goto after_4;
    // 0x80228004: nop

    after_4:
    // 0x80228008: j           L_802280B0
    // 0x8022800C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_802280B0;
    // 0x8022800C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80228010:
    // 0x80228010: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80228014: lhu         $v0, 0xC($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XC);
    // 0x80228018: lhu         $a2, 0x14($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X14);
    // 0x8022801C: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x80228020: lhu         $a0, 0x16($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X16);
    // 0x80228024: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80228028: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022802C: sra         $a3, $a2, 17
    ctx->r7 = S32(SIGNED(ctx->r6) >> 17);
    // 0x80228030: lhu         $v0, 0x10($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X10);
    // 0x80228034: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x80228038: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022803C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80228040: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x80228044: slt         $v1, $v1, $a2
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80228048: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022804C: sra         $v0, $a0, 17
    ctx->r2 = S32(SIGNED(ctx->r4) >> 17);
    // 0x80228050: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80228054: beq         $v1, $zero, L_80228084
    if (ctx->r3 == 0) {
        // 0x80228058: sra         $a0, $a0, 16
        ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
            goto L_80228084;
    }
    // 0x80228058: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8022805C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80228060: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80228064: beq         $v0, $zero, L_80228084
    if (ctx->r2 == 0) {
        // 0x80228068: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228084;
    }
    // 0x80228068: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022806C: jal         0x802293A8
    // 0x80228070: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_802293A8_ovl9(rdram, ctx);
        goto after_5;
    // 0x80228070: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80228074: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228078: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022807C: j           L_802280B0
    // 0x80228080: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_802280B0;
    // 0x80228080: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80228084:
    // 0x80228084: j           L_802280B0
    // 0x80228088: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
        goto L_802280B0;
    // 0x80228088: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
L_8022808C:
    // 0x8022808C: jal         0x800A3450
    // 0x80228090: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80228090: nop

    after_6:
    // 0x80228094: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80228098: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022809C: jal         0x80229368
    // 0x802280A0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80229368_ovl9(rdram, ctx);
        goto after_7;
    // 0x802280A0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_7:
    // 0x802280A4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802280A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802280AC: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
L_802280B0:
    // 0x802280B0: jal         0x800A3450
    // 0x802280B4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x802280B4: nop

    after_8:
    // 0x802280B8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802280BC: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x802280C0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802280C4: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x802280C8: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x802280CC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802280D0: beq         $v1, $v0, L_802280E8
    if (ctx->r3 == ctx->r2) {
        // 0x802280D4: nop
    
            goto L_802280E8;
    }
    // 0x802280D4: nop

    // 0x802280D8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802280DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802280E0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x802280E4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802280E8:
    // 0x802280E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802280EC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x802280F0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802280F4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802280F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802280FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228100: jr          $ra
    // 0x80228104: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228104: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022678C_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022678C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226790: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226794: jal         0x8006033C
    // 0x80226798: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80226798: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    after_0:
    // 0x8022679C: beq         $v0, $zero, L_802267D4
    if (ctx->r2 == 0) {
        // 0x802267A0: nop
    
            goto L_802267D4;
    }
    // 0x802267A0: nop

    // 0x802267A4: jal         0x8006036C
    // 0x802267A8: addiu       $a0, $zero, 0x7E2
    ctx->r4 = ADD32(0, 0X7E2);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x802267A8: addiu       $a0, $zero, 0x7E2
    ctx->r4 = ADD32(0, 0X7E2);
    after_1:
    // 0x802267AC: jal         0x8006036C
    // 0x802267B0: addiu       $a0, $zero, 0x7E3
    ctx->r4 = ADD32(0, 0X7E3);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x802267B0: addiu       $a0, $zero, 0x7E3
    ctx->r4 = ADD32(0, 0X7E3);
    after_2:
    // 0x802267B4: jal         0x8006036C
    // 0x802267B8: addiu       $a0, $zero, 0x7E4
    ctx->r4 = ADD32(0, 0X7E4);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x802267B8: addiu       $a0, $zero, 0x7E4
    ctx->r4 = ADD32(0, 0X7E4);
    after_3:
    // 0x802267BC: jal         0x8006036C
    // 0x802267C0: addiu       $a0, $zero, 0x7E5
    ctx->r4 = ADD32(0, 0X7E5);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x802267C0: addiu       $a0, $zero, 0x7E5
    ctx->r4 = ADD32(0, 0X7E5);
    after_4:
    // 0x802267C4: jal         0x8006036C
    // 0x802267C8: addiu       $a0, $zero, 0x7E6
    ctx->r4 = ADD32(0, 0X7E6);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x802267C8: addiu       $a0, $zero, 0x7E6
    ctx->r4 = ADD32(0, 0X7E6);
    after_5:
    // 0x802267CC: jal         0x8006036C
    // 0x802267D0: addiu       $a0, $zero, 0x7E7
    ctx->r4 = ADD32(0, 0X7E7);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x802267D0: addiu       $a0, $zero, 0x7E7
    ctx->r4 = ADD32(0, 0X7E7);
    after_6:
L_802267D4:
    // 0x802267D4: jal         0x8006036C
    // 0x802267D8: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x802267D8: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_7:
    // 0x802267DC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802267E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802267E4: jr          $ra
    // 0x802267E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802267E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802296C8_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802296C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802296CC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802296D0: jal         0x8004F418
    // 0x802296D4: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x802296D4: nop

    after_0:
    // 0x802296D8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802296DC: jr          $ra
    // 0x802296E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802296E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229C00_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229C00: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80229C04: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80229C08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229C0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229C10: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80229C14: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80229C18: beq         $v0, $zero, L_80229C98
    if (ctx->r2 == 0) {
        // 0x80229C1C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80229C98;
    }
    // 0x80229C1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229C20: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80229C24: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229C28: addu        $at, $at, $v0
    gpr jr_addend_80229C30 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229C2C: lw          $v0, 0xA28($at)
    ctx->r2 = ADD32(ctx->r1, 0XA28);
    // 0x80229C30: jr          $v0
    // 0x80229C34: nop

    switch (jr_addend_80229C30 >> 2) {
        case 0: goto L_80229C38; break;
        case 1: goto L_80229C98; break;
        case 2: goto L_80229C98; break;
        case 3: goto L_80229C64; break;
        case 4: goto L_80229C98; break;
        case 5: goto L_80229C98; break;
        default: switch_error(__func__, 0x80229C30, 0x80230A28);
    }
    // 0x80229C34: nop

L_80229C38:
    // 0x80229C38: jal         0x8006033C
    // 0x80229C3C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80229C3C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_0:
    // 0x80229C40: bne         $v0, $zero, L_80229C98
    if (ctx->r2 != 0) {
        // 0x80229C44: addiu       $s0, $zero, 0x40
        ctx->r16 = ADD32(0, 0X40);
            goto L_80229C98;
    }
    // 0x80229C44: addiu       $s0, $zero, 0x40
    ctx->r16 = ADD32(0, 0X40);
    // 0x80229C48: jal         0x8006033C
    // 0x80229C4C: addiu       $a0, $zero, 0x60E
    ctx->r4 = ADD32(0, 0X60E);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80229C4C: addiu       $a0, $zero, 0x60E
    ctx->r4 = ADD32(0, 0X60E);
    after_1:
    // 0x80229C50: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80229C54: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80229C58: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80229C5C: j           L_80229C98
    // 0x80229C60: ori         $s0, $v0, 0x3E
    ctx->r16 = ctx->r2 | 0X3E;
        goto L_80229C98;
    // 0x80229C60: ori         $s0, $v0, 0x3E
    ctx->r16 = ctx->r2 | 0X3E;
L_80229C64:
    // 0x80229C64: jal         0x8006033C
    // 0x80229C68: addiu       $a0, $zero, 0x211
    ctx->r4 = ADD32(0, 0X211);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80229C68: addiu       $a0, $zero, 0x211
    ctx->r4 = ADD32(0, 0X211);
    after_2:
    // 0x80229C6C: bne         $v0, $zero, L_80229C98
    if (ctx->r2 != 0) {
        // 0x80229C70: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80229C98;
    }
    // 0x80229C70: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80229C74: jal         0x8006033C
    // 0x80229C78: addiu       $a0, $zero, 0x20B
    ctx->r4 = ADD32(0, 0X20B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80229C78: addiu       $a0, $zero, 0x20B
    ctx->r4 = ADD32(0, 0X20B);
    after_3:
    // 0x80229C7C: beq         $v0, $zero, L_80229C94
    if (ctx->r2 == 0) {
        // 0x80229C80: addiu       $s0, $zero, 0x20
        ctx->r16 = ADD32(0, 0X20);
            goto L_80229C94;
    }
    // 0x80229C80: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x80229C84: jal         0x8006036C
    // 0x80229C88: addiu       $a0, $zero, 0x20C
    ctx->r4 = ADD32(0, 0X20C);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80229C88: addiu       $a0, $zero, 0x20C
    ctx->r4 = ADD32(0, 0X20C);
    after_4:
    // 0x80229C8C: j           L_80229C9C
    // 0x80229C90: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_80229C9C;
    // 0x80229C90: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_80229C94:
    // 0x80229C94: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_80229C98:
    // 0x80229C98: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_80229C9C:
    // 0x80229C9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229CA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229CA4: jr          $ra
    // 0x80229CA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229CA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80229CAC: nop

;}
RECOMP_FUNC void func_80227C04_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227C04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227C08: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227C0C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227C10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227C14: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227C18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227C1C: lh          $a0, 0x64($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X64);
    // 0x80227C20: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x80227C24: lb          $a2, 0xF($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XF);
    // 0x80227C28: jal         0x8004FA7C
    // 0x80227C2C: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80227C2C: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    after_0:
    // 0x80227C30: lh          $a1, 0x362($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X362);
    // 0x80227C34: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80227C38: sll         $v1, $s2, 16
    ctx->r3 = S32(ctx->r18 << 16);
    // 0x80227C3C: sra         $a0, $v1, 16
    ctx->r4 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80227C40: srl         $v1, $a0, 31
    ctx->r3 = S32(U32(ctx->r4) >> 31);
    // 0x80227C44: sltiu       $v0, $a1, 0x1
    ctx->r2 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x80227C48: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227C4C: bnel        $v0, $zero, L_80227C6C
    if (ctx->r2 != 0) {
        // 0x80227C50: negu        $s2, $s2
        ctx->r18 = SUB32(0, ctx->r18);
            goto L_80227C6C;
    }
    goto skip_0;
    // 0x80227C50: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
    skip_0:
    // 0x80227C54: sltu        $v0, $zero, $a1
    ctx->r2 = 0 < ctx->r5 ? 1 : 0;
    // 0x80227C58: slt         $v1, $zero, $a0
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80227C5C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227C60: beq         $v0, $zero, L_80227C70
    if (ctx->r2 == 0) {
        // 0x80227C64: sll         $v0, $s2, 16
        ctx->r2 = S32(ctx->r18 << 16);
            goto L_80227C70;
    }
    // 0x80227C64: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80227C68: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
L_80227C6C:
    // 0x80227C6C: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
L_80227C70:
    // 0x80227C70: bne         $v0, $zero, L_80227CA0
    if (ctx->r2 != 0) {
        // 0x80227C74: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227CA0;
    }
    // 0x80227C74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227C78: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80227C7C: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x80227C80: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x80227C84: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x80227C88: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80227C8C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80227C90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227C94: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x80227C98: j           L_80227CF8
    // 0x80227C9C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
        goto L_80227CF8;
    // 0x80227C9C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
L_80227CA0:
    // 0x80227CA0: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80227CA4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227CA8: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80227CAC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227CB0: beq         $v0, $zero, L_80227CF4
    if (ctx->r2 == 0) {
        // 0x80227CB4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80227CF4;
    }
    // 0x80227CB4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227CB8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80227CBC: jal         0x802293F4
    // 0x80227CC0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_802293F4_ovl9(rdram, ctx);
        goto after_1;
    // 0x80227CC0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x80227CC4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80227CC8: beq         $v0, $zero, L_80227D00
    if (ctx->r2 == 0) {
        // 0x80227CCC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80227D00;
    }
    // 0x80227CCC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227CD0: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80227CD4: jal         0x80229358
    // 0x80227CD8: nop

    func_80229358_ovl9(rdram, ctx);
        goto after_2;
    // 0x80227CD8: nop

    after_2:
    // 0x80227CDC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80227CE0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80227CE4: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80227CE8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80227CEC: j           L_80227D20
    // 0x80227CF0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80227D20;
    // 0x80227CF0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80227CF4:
    // 0x80227CF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80227CF8:
    // 0x80227CF8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80227CFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_80227D00:
    // 0x80227D00: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x80227D04: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80227D08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227D0C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80227D10: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80227D14: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227D18: jal         0x8004DA90
    // 0x80227D1C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x80227D1C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    after_3:
L_80227D20:
    // 0x80227D20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227D24: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227D28: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227D2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227D30: jr          $ra
    // 0x80227D34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227D34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802267EC_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802267EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802267F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802267F4: jal         0x8006036C
    // 0x802267F8: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x802267F8: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_0:
    // 0x802267FC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226800: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80226804: jr          $ra
    // 0x80226808: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226808: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022680C: nop

;}
RECOMP_FUNC void func_8022C3A0_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C3A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C3A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022C3A8: jal         0x8004F4F8
    // 0x8022C3AC: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x8022C3AC: nop

    after_0:
    // 0x8022C3B0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022C3B4: jr          $ra
    // 0x8022C3B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C3B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226414_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226414: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226418: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022641C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226420: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226424: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226428: bne         $v0, $zero, L_80226458
    if (ctx->r2 != 0) {
        // 0x8022642C: nop
    
            goto L_80226458;
    }
    // 0x8022642C: nop

    // 0x80226430: jal         0x80226AEC
    // 0x80226434: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80226434: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x80226438: jal         0x8006033C
    // 0x8022643C: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022643C: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    after_1:
    // 0x80226440: beq         $v0, $zero, L_80226454
    if (ctx->r2 == 0) {
        // 0x80226444: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80226454;
    }
    // 0x80226444: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226448: jal         0x80226D0C
    // 0x8022644C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80226D0C_ovl9(rdram, ctx);
        goto after_2;
    // 0x8022644C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_2:
    // 0x80226450: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80226454:
    // 0x80226454: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226458:
    // 0x80226458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022645C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226460: jr          $ra
    // 0x80226464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227D5C_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227D5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227D60: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227D64: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227D68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227D6C: lh          $a0, 0x364($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X364);
    // 0x80227D70: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80227D74: jal         0x8004FA7C
    // 0x80227D78: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80227D78: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    after_0:
    // 0x80227D7C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80227D80: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80227D84: bne         $v0, $zero, L_80227DD0
    if (ctx->r2 != 0) {
        // 0x80227D88: nop
    
            goto L_80227DD0;
    }
    // 0x80227D88: nop

    // 0x80227D8C: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x80227D90: beq         $v0, $zero, L_80227DA4
    if (ctx->r2 == 0) {
        // 0x80227D94: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227DA4;
    }
    // 0x80227D94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227D98: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x80227D9C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80227DA0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_80227DA4:
    // 0x80227DA4: lhu         $a0, 0x362($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X362);
    // 0x80227DA8: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x80227DAC: lhu         $a1, 0x360($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X360);
    // 0x80227DB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227DB4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227DB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227DBC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80227DC0: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80227DC4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227DC8: sh          $v0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r2;
    // 0x80227DCC: sh          $v1, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r3;
L_80227DD0:
    // 0x80227DD0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227DD4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80227DD8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227DDC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80227DE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227DE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227DE8: jr          $ra
    // 0x80227DEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227DEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226750_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226750: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226754: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226758: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022675C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226760: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226764: bne         $v0, $zero, L_8022677C
    if (ctx->r2 != 0) {
        // 0x80226768: nop
    
            goto L_8022677C;
    }
    // 0x80226768: nop

    // 0x8022676C: jal         0x80226AEC
    // 0x80226770: addiu       $a0, $zero, 0x39
    ctx->r4 = ADD32(0, 0X39);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80226770: addiu       $a0, $zero, 0x39
    ctx->r4 = ADD32(0, 0X39);
    after_0:
    // 0x80226774: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226778: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022677C:
    // 0x8022677C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226780: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226784: jr          $ra
    // 0x80226788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227530_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227530: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x80227534: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227538: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022753C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227540: bne         $v0, $zero, L_8022754C
    if (ctx->r2 != 0) {
        // 0x80227544: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022754C;
    }
    // 0x80227544: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227548: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022754C:
    // 0x8022754C: jr          $ra
    // 0x80227550: nop

    TRACE_RETURN()
    return;
    // 0x80227550: nop

;}
RECOMP_FUNC void func_8022CC04_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CC04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CC08: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x8022CC0C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022CC10: lhu         $v0, 0x44($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X44);
    // 0x8022CC14: lhu         $v1, 0x4C($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X4C);
    // 0x8022CC18: lhu         $a0, 0x4E($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X4E);
    // 0x8022CC1C: lhu         $a1, 0x50($a2)
    ctx->r5 = MEM_HU(ctx->r6, 0X50);
    // 0x8022CC20: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022CC24: sh          $v0, 0x44($a2)
    MEM_H(0X44, ctx->r6) = ctx->r2;
    // 0x8022CC28: lhu         $v0, 0x46($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X46);
    // 0x8022CC2C: lhu         $v1, 0x48($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X48);
    // 0x8022CC30: lh          $a3, 0x44($a2)
    ctx->r7 = MEM_H(ctx->r6, 0X44);
    // 0x8022CC34: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022CC38: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022CC3C: sh          $v0, 0x46($a2)
    MEM_H(0X46, ctx->r6) = ctx->r2;
    // 0x8022CC40: slti        $v0, $a3, -0x6000
    ctx->r2 = SIGNED(ctx->r7) < -0X6000 ? 1 : 0;
    // 0x8022CC44: beq         $v0, $zero, L_8022CC54
    if (ctx->r2 == 0) {
        // 0x8022CC48: sh          $v1, 0x48($a2)
        MEM_H(0X48, ctx->r6) = ctx->r3;
            goto L_8022CC54;
    }
    // 0x8022CC48: sh          $v1, 0x48($a2)
    MEM_H(0X48, ctx->r6) = ctx->r3;
    // 0x8022CC4C: j           L_8022CC60
    // 0x8022CC50: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
        goto L_8022CC60;
    // 0x8022CC50: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
L_8022CC54:
    // 0x8022CC54: slti        $v0, $a3, 0x6001
    ctx->r2 = SIGNED(ctx->r7) < 0X6001 ? 1 : 0;
    // 0x8022CC58: bne         $v0, $zero, L_8022CC64
    if (ctx->r2 != 0) {
        // 0x8022CC5C: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_8022CC64;
    }
    // 0x8022CC5C: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_8022CC60:
    // 0x8022CC60: sh          $v0, 0x44($a2)
    MEM_H(0X44, ctx->r6) = ctx->r2;
L_8022CC64:
    // 0x8022CC64: lh          $v1, 0x46($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X46);
    // 0x8022CC68: slti        $v0, $v1, -0x6000
    ctx->r2 = SIGNED(ctx->r3) < -0X6000 ? 1 : 0;
    // 0x8022CC6C: bne         $v0, $zero, L_8022CC80
    if (ctx->r2 != 0) {
        // 0x8022CC70: addiu       $v0, $zero, -0x6000
        ctx->r2 = ADD32(0, -0X6000);
            goto L_8022CC80;
    }
    // 0x8022CC70: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
    // 0x8022CC74: slti        $v0, $v1, 0x6001
    ctx->r2 = SIGNED(ctx->r3) < 0X6001 ? 1 : 0;
    // 0x8022CC78: bne         $v0, $zero, L_8022CC84
    if (ctx->r2 != 0) {
        // 0x8022CC7C: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_8022CC84;
    }
    // 0x8022CC7C: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_8022CC80:
    // 0x8022CC80: sh          $v0, 0x46($a2)
    MEM_H(0X46, ctx->r6) = ctx->r2;
L_8022CC84:
    // 0x8022CC84: lh          $v1, 0x48($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X48);
    // 0x8022CC88: slti        $v0, $v1, -0x6000
    ctx->r2 = SIGNED(ctx->r3) < -0X6000 ? 1 : 0;
    // 0x8022CC8C: bne         $v0, $zero, L_8022CCA0
    if (ctx->r2 != 0) {
        // 0x8022CC90: addiu       $v0, $zero, -0x6000
        ctx->r2 = ADD32(0, -0X6000);
            goto L_8022CCA0;
    }
    // 0x8022CC90: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
    // 0x8022CC94: slti        $v0, $v1, 0x6001
    ctx->r2 = SIGNED(ctx->r3) < 0X6001 ? 1 : 0;
    // 0x8022CC98: bne         $v0, $zero, L_8022CCA4
    if (ctx->r2 != 0) {
        // 0x8022CC9C: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_8022CCA4;
    }
    // 0x8022CC9C: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_8022CCA0:
    // 0x8022CCA0: sh          $v0, 0x48($a2)
    MEM_H(0X48, ctx->r6) = ctx->r2;
L_8022CCA4:
    // 0x8022CCA4: lh          $v0, 0x44($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X44);
    // 0x8022CCA8: lw          $v1, 0x1C($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X1C);
    // 0x8022CCAC: lh          $a0, 0x48($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X48);
    // 0x8022CCB0: lw          $a1, 0x24($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X24);
    // 0x8022CCB4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022CCB8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CCBC: lh          $v0, 0x46($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X46);
    // 0x8022CCC0: sw          $v1, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r3;
    // 0x8022CCC4: lw          $v1, 0x20($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X20);
    // 0x8022CCC8: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8022CCCC: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x8022CCD0: addiu       $a0, $a2, 0x1C
    ctx->r4 = ADD32(ctx->r6, 0X1C);
    // 0x8022CCD4: sw          $a1, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r5;
    // 0x8022CCD8: addiu       $a1, $a2, 0x14
    ctx->r5 = ADD32(ctx->r6, 0X14);
    // 0x8022CCDC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022CCE0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CCE4: jal         0x8004DD04
    // 0x8022CCE8: sw          $v1, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r3;
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x8022CCE8: sw          $v1, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r3;
    after_0:
    // 0x8022CCEC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022CCF0: jr          $ra
    // 0x8022CCF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CCF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022CCF8: nop

    // 0x8022CCFC: nop

;}
RECOMP_FUNC void func_80226DE0_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226DE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226DE4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226DE8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80226DEC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226DF0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226DF4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226DF8: lw          $v0, 0x44C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X44C);
    // 0x80226DFC: jalr        $v0
    // 0x80226E00: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226E00: nop

    after_0:
    // 0x80226E04: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226E08: jr          $ra
    // 0x80226E0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226E0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229CE0_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229CE0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80229CE4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80229CE8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80229CEC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80229CF0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80229CF4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80229CF8: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80229CFC: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x80229D00: addiu       $s0, $s2, 0x348
    ctx->r16 = ADD32(ctx->r18, 0X348);
    // 0x80229D04: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229D08: beq         $v1, $zero, L_80229D18
    if (ctx->r3 == 0) {
        // 0x80229D0C: sb          $v0, 0x0($s2)
        MEM_B(0X0, ctx->r18) = ctx->r2;
            goto L_80229D18;
    }
    // 0x80229D0C: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80229D10: j           L_80229D20
    // 0x80229D14: addiu       $a1, $s2, 0x3
    ctx->r5 = ADD32(ctx->r18, 0X3);
        goto L_80229D20;
    // 0x80229D14: addiu       $a1, $s2, 0x3
    ctx->r5 = ADD32(ctx->r18, 0X3);
L_80229D18:
    // 0x80229D18: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80229D1C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_80229D20:
    // 0x80229D20: jal         0x8004D5D4
    // 0x80229D24: nop

    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80229D24: nop

    after_0:
    // 0x80229D28: addiu       $s1, $sp, 0x18
    ctx->r17 = ADD32(ctx->r29, 0X18);
    // 0x80229D2C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229D30: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x80229D34: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80229D38: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80229D3C: sh          $v0, 0x15C($s2)
    MEM_H(0X15C, ctx->r18) = ctx->r2;
    // 0x80229D40: sh          $v0, 0x15A($s2)
    MEM_H(0X15A, ctx->r18) = ctx->r2;
    // 0x80229D44: sh          $v0, 0x158($s2)
    MEM_H(0X158, ctx->r18) = ctx->r2;
    // 0x80229D48: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80229D4C: sh          $v0, 0x15E($s2)
    MEM_H(0X15E, ctx->r18) = ctx->r2;
    // 0x80229D50: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229D54: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x80229D58: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80229D5C: jal         0x8009A3B4
    // 0x80229D60: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80229D60: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    after_1:
    // 0x80229D64: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80229D68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229D6C: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80229D70: jal         0x8009A3B4
    // 0x80229D74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80229D74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80229D78: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80229D7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229D80: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80229D84: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x80229D88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80229D8C: jal         0x8004DBA0
    // 0x80229D90: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x80229D90: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x80229D94: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80229D98: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229D9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229DA0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80229DA4: sh          $v0, 0x6E($s2)
    MEM_H(0X6E, ctx->r18) = ctx->r2;
    // 0x80229DA8: sh          $v0, 0xB0($s2)
    MEM_H(0XB0, ctx->r18) = ctx->r2;
    // 0x80229DAC: sh          $v0, 0xB2($s2)
    MEM_H(0XB2, ctx->r18) = ctx->r2;
    // 0x80229DB0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80229DB4: addiu       $v0, $v0, 0x6E4
    ctx->r2 = ADD32(ctx->r2, 0X6E4);
    // 0x80229DB8: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x80229DBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229DC0: sw          $zero, 0x78($s2)
    MEM_W(0X78, ctx->r18) = 0;
    // 0x80229DC4: sh          $zero, 0x44($s2)
    MEM_H(0X44, ctx->r18) = 0;
    // 0x80229DC8: sh          $zero, 0x46($s2)
    MEM_H(0X46, ctx->r18) = 0;
    // 0x80229DCC: sh          $zero, 0x48($s2)
    MEM_H(0X48, ctx->r18) = 0;
    // 0x80229DD0: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80229DD4: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x80229DD8: jal         0x80050294
    // 0x80229DDC: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80229DDC: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    after_4:
    // 0x80229DE0: jal         0x80229E00
    // 0x80229DE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80229E00_ovl9(rdram, ctx);
        goto after_5;
    // 0x80229DE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
    // 0x80229DE8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80229DEC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80229DF0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80229DF4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80229DF8: jr          $ra
    // 0x80229DFC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80229DFC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022E258_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E258: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022E25C: lh          $v1, 0xA00($v1)
    ctx->r3 = MEM_H(ctx->r3, 0XA00);
    // 0x8022E260: lh          $a1, 0x14($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X14);
    // 0x8022E264: slt         $v1, $v1, $a1
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022E268: bne         $v1, $zero, L_8022E2D8
    if (ctx->r3 != 0) {
        // 0x8022E26C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022E2D8;
    }
    // 0x8022E26C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022E270: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022E274: lh          $v1, 0xA08($v1)
    ctx->r3 = MEM_H(ctx->r3, 0XA08);
    // 0x8022E278: slt         $v1, $a1, $v1
    ctx->r3 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022E27C: bne         $v1, $zero, L_8022E2D8
    if (ctx->r3 != 0) {
        // 0x8022E280: nop
    
            goto L_8022E2D8;
    }
    // 0x8022E280: nop

    // 0x8022E284: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022E288: lh          $v1, 0xA02($v1)
    ctx->r3 = MEM_H(ctx->r3, 0XA02);
    // 0x8022E28C: lh          $a1, 0x16($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X16);
    // 0x8022E290: slt         $v1, $v1, $a1
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022E294: bne         $v1, $zero, L_8022E2D8
    if (ctx->r3 != 0) {
        // 0x8022E298: nop
    
            goto L_8022E2D8;
    }
    // 0x8022E298: nop

    // 0x8022E29C: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022E2A0: lh          $v1, 0xA0A($v1)
    ctx->r3 = MEM_H(ctx->r3, 0XA0A);
    // 0x8022E2A4: slt         $v1, $a1, $v1
    ctx->r3 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022E2A8: bne         $v1, $zero, L_8022E2D8
    if (ctx->r3 != 0) {
        // 0x8022E2AC: nop
    
            goto L_8022E2D8;
    }
    // 0x8022E2AC: nop

    // 0x8022E2B0: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022E2B4: lh          $v1, 0xA04($v1)
    ctx->r3 = MEM_H(ctx->r3, 0XA04);
    // 0x8022E2B8: lh          $a0, 0x18($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X18);
    // 0x8022E2BC: slt         $v1, $v1, $a0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022E2C0: bne         $v1, $zero, L_8022E2D8
    if (ctx->r3 != 0) {
        // 0x8022E2C4: nop
    
            goto L_8022E2D8;
    }
    // 0x8022E2C4: nop

    // 0x8022E2C8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022E2CC: lh          $v0, 0xA0C($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XA0C);
    // 0x8022E2D0: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022E2D4: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_8022E2D8:
    // 0x8022E2D8: jr          $ra
    // 0x8022E2DC: nop

    TRACE_RETURN()
    return;
    // 0x8022E2DC: nop

;}
RECOMP_FUNC void func_8022CD00_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CD00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CD04: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022CD08: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022CD0C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CD10: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CD14: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CD18: lw          $v0, 0x910($at)
    ctx->r2 = MEM_W(ctx->r1, 0X910);
    // 0x8022CD1C: jalr        $v0
    // 0x8022CD20: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022CD20: nop

    after_0:
    // 0x8022CD24: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022CD28: jr          $ra
    // 0x8022CD2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CD2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D874_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D874: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D878: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D87C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D880: lui         $a0, 0xFF
    ctx->r4 = S32(0XFF << 16);
    // 0x8022D884: ori         $a0, $a0, 0xFF00
    ctx->r4 = ctx->r4 | 0XFF00;
    // 0x8022D888: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x8022D88C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D890: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x8022D894: ori         $v1, $v1, 0x1000
    ctx->r3 = ctx->r3 | 0X1000;
    // 0x8022D898: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    // 0x8022D89C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8022D8A0: beql        $v0, $v1, L_8022D8E8
    if (ctx->r2 == ctx->r3) {
        // 0x8022D8A4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022D8E8;
    }
    goto skip_0;
    // 0x8022D8A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x8022D8A8: beq         $a1, $zero, L_8022D8C0
    if (ctx->r5 == 0) {
        // 0x8022D8AC: nop
    
            goto L_8022D8C0;
    }
    // 0x8022D8AC: nop

    // 0x8022D8B0: jal         0x8006033C
    // 0x8022D8B4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022D8B4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022D8B8: beq         $v0, $zero, L_8022D8E8
    if (ctx->r2 == 0) {
        // 0x8022D8BC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022D8E8;
    }
    // 0x8022D8BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022D8C0:
    // 0x8022D8C0: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8022D8C4: jal         0x8006033C
    // 0x8022D8C8: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022D8C8: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_1:
    // 0x8022D8CC: bne         $v0, $zero, L_8022D8E8
    if (ctx->r2 != 0) {
        // 0x8022D8D0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022D8E8;
    }
    // 0x8022D8D0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022D8D4: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022D8D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022D8DC: bne         $v1, $v0, L_8022D8E8
    if (ctx->r3 != ctx->r2) {
        // 0x8022D8E0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D8E8;
    }
    // 0x8022D8E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D8E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022D8E8:
    // 0x8022D8E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D8EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D8F0: jr          $ra
    // 0x8022D8F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D8F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802264A4_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802264A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802264A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802264AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802264B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802264B4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802264B8: bne         $v0, $zero, L_802264D0
    if (ctx->r2 != 0) {
        // 0x802264BC: nop
    
            goto L_802264D0;
    }
    // 0x802264BC: nop

    // 0x802264C0: jal         0x80226AEC
    // 0x802264C4: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x802264C4: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    after_0:
    // 0x802264C8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802264CC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802264D0:
    // 0x802264D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802264D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802264D8: jr          $ra
    // 0x802264DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802264DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225C30_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225C34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225C38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225C3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225C40: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225C44: bne         $v0, $zero, L_80225C5C
    if (ctx->r2 != 0) {
        // 0x80225C48: nop
    
            goto L_80225C5C;
    }
    // 0x80225C48: nop

    // 0x80225C4C: jal         0x80226AEC
    // 0x80225C50: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80225C50: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_0:
    // 0x80225C54: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225C58: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225C5C:
    // 0x80225C5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225C60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225C64: jr          $ra
    // 0x80225C68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225C68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802272C8_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802272C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802272CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802272D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802272D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802272D8: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x802272DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802272E0: sh          $zero, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = 0;
    // 0x802272E4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802272E8: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x802272EC: jal         0x802293A8
    // 0x802272F0: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    func_802293A8_ovl9(rdram, ctx);
        goto after_0;
    // 0x802272F0: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    after_0:
    // 0x802272F4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802272F8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802272FC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80227300: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80227304: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227308: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022730C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227310: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227314: jr          $ra
    // 0x80227318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225A4C_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225A50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225A54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225A58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225A5C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225A60: bne         $v0, $zero, L_80225A78
    if (ctx->r2 != 0) {
        // 0x80225A64: nop
    
            goto L_80225A78;
    }
    // 0x80225A64: nop

    // 0x80225A68: jal         0x80226AEC
    // 0x80225A6C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80225A6C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_0:
    // 0x80225A70: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225A74: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225A78:
    // 0x80225A78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225A7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225A80: jr          $ra
    // 0x80225A84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225A84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225B78_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225B7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225B80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225B84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225B88: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225B8C: bne         $v0, $zero, L_80225BA8
    if (ctx->r2 != 0) {
        // 0x80225B90: nop
    
            goto L_80225BA8;
    }
    // 0x80225B90: nop

    // 0x80225B94: jal         0x80226AEC
    // 0x80225B98: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80225B98: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_0:
    // 0x80225B9C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225BA0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225BA4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225BA8:
    // 0x80225BA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225BAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225BB0: jr          $ra
    // 0x80225BB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225BB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229F60_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229F60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80229F64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229F68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229F6C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80229F70: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80229F74: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80229F78: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229F7C: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80229F80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229F84: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80229F88: beq         $v1, $v0, L_8022A01C
    if (ctx->r3 == ctx->r2) {
        // 0x80229F8C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022A01C;
    }
    // 0x80229F8C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80229F90: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80229F94: beq         $v0, $zero, L_8022A060
    if (ctx->r2 == 0) {
        // 0x80229F98: nop
    
            goto L_8022A060;
    }
    // 0x80229F98: nop

    // 0x80229F9C: bne         $v1, $zero, L_8022A060
    if (ctx->r3 != 0) {
        // 0x80229FA0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022A060;
    }
    // 0x80229FA0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80229FA4: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80229FA8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229FAC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229FB0: addiu       $s2, $s0, 0x354
    ctx->r18 = ADD32(ctx->r16, 0X354);
    // 0x80229FB4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229FB8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80229FBC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229FC0: jal         0x8004F820
    // 0x80229FC4: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80229FC4: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    after_0:
    // 0x80229FC8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229FCC: bgez        $v0, L_80229FF8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229FD0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80229FF8;
    }
    // 0x80229FD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229FD4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229FD8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229FDC: jal         0x8004F820
    // 0x80229FE0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80229FE0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x80229FE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229FE8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229FEC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80229FF0: j           L_8022A010
    // 0x80229FF4: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022A010;
    // 0x80229FF4: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80229FF8:
    // 0x80229FF8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229FFC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022A000: jal         0x8004F820
    // 0x8022A004: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022A004: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022A008: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A00C: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022A010:
    // 0x8022A010: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022A014: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022A018: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
L_8022A01C:
    // 0x8022A01C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A020: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022A024: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A028: jal         0x8004F820
    // 0x8022A02C: addiu       $a1, $s3, 0xC
    ctx->r5 = ADD32(ctx->r19, 0XC);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022A02C: addiu       $a1, $s3, 0xC
    ctx->r5 = ADD32(ctx->r19, 0XC);
    after_3:
    // 0x8022A030: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A034: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A038: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A03C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A040: bne         $v0, $zero, L_8022A060
    if (ctx->r2 != 0) {
        // 0x8022A044: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022A060;
    }
    // 0x8022A044: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022A048: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8022A04C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022A050: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
    // 0x8022A054: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A058: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A05C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022A060:
    // 0x8022A060: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022A064: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A068: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022A06C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A070: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A074: jr          $ra
    // 0x8022A078: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022A078: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80228108_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228108: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022810C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80228110: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228114: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80228118: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x8022811C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80228120: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80228124: jal         0x802293F4
    // 0x80228128: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_802293F4_ovl9(rdram, ctx);
        goto after_0;
    // 0x80228128: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022812C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228130: beq         $v0, $zero, L_80228160
    if (ctx->r2 == 0) {
        // 0x80228134: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_80228160;
    }
    // 0x80228134: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80228138: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022813C: bne         $v1, $v0, L_80228288
    if (ctx->r3 != ctx->r2) {
        // 0x80228140: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228288;
    }
    // 0x80228140: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228144: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228148: lbu         $a0, 0xAC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022814C: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80228150: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80228154: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x80228158: j           L_8022828C
    // 0x8022815C: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
        goto L_8022828C;
    // 0x8022815C: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
L_80228160:
    // 0x80228160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228164: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80228168: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022816C: jal         0x8004DA90
    // 0x80228170: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80228170: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80228174: lh          $a3, 0x354($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X354);
    // 0x80228178: lh          $a2, 0x35C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X35C);
    // 0x8022817C: lh          $a1, 0x14($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X14);
    // 0x80228180: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x80228184: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x80228188: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022818C: beq         $v0, $zero, L_8022819C
    if (ctx->r2 == 0) {
        // 0x80228190: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8022819C;
    }
    // 0x80228190: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x80228194: j           L_802281AC
    // 0x80228198: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
        goto L_802281AC;
    // 0x80228198: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
L_8022819C:
    // 0x8022819C: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x802281A0: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802281A4: beq         $v0, $zero, L_802281DC
    if (ctx->r2 == 0) {
        // 0x802281A8: subu        $v0, $a0, $v1
        ctx->r2 = SUB32(ctx->r4, ctx->r3);
            goto L_802281DC;
    }
    // 0x802281A8: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
L_802281AC:
    // 0x802281AC: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x802281B0: lhu         $v1, 0x350($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X350);
    // 0x802281B4: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x802281B8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802281BC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802281C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802281C4: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x802281C8: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x802281CC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802281D0: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x802281D4: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x802281D8: sh          $v1, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r3;
L_802281DC:
    // 0x802281DC: lh          $a3, 0x10($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X10);
    // 0x802281E0: lh          $a2, 0x16($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X16);
    // 0x802281E4: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x802281E8: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x802281EC: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x802281F0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802281F4: beq         $v0, $zero, L_80228208
    if (ctx->r2 == 0) {
        // 0x802281F8: addu        $a0, $a2, $zero
        ctx->r4 = ADD32(ctx->r6, 0);
            goto L_80228208;
    }
    // 0x802281F8: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x802281FC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228200: j           L_8022821C
    // 0x80228204: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
        goto L_8022821C;
    // 0x80228204: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
L_80228208:
    // 0x80228208: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x8022820C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80228210: beq         $v0, $zero, L_8022824C
    if (ctx->r2 == 0) {
        // 0x80228214: subu        $v0, $a1, $a0
        ctx->r2 = SUB32(ctx->r5, ctx->r4);
            goto L_8022824C;
    }
    // 0x80228214: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x80228218: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
L_8022821C:
    // 0x8022821C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80228220: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228224: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228228: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022822C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80228230: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228234: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80228238: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022823C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80228240: sh          $v1, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r3;
    // 0x80228244: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80228248: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
L_8022824C:
    // 0x8022824C: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80228250: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80228254: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80228258: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022825C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80228260: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80228264: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80228268: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022826C: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80228270: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80228274: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228278: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022827C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228280: bne         $v0, $zero, L_8022828C
    if (ctx->r2 != 0) {
        // 0x80228284: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022828C;
    }
    // 0x80228284: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80228288:
    // 0x80228288: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022828C:
    // 0x8022828C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80228290: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80228294: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80228298: jr          $ra
    // 0x8022829C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022829C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80225A10_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225A14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225A18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225A1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225A20: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225A24: bne         $v0, $zero, L_80225A3C
    if (ctx->r2 != 0) {
        // 0x80225A28: nop
    
            goto L_80225A3C;
    }
    // 0x80225A28: nop

    // 0x80225A2C: jal         0x80226AEC
    // 0x80225A30: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80225A30: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_0:
    // 0x80225A34: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225A38: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225A3C:
    // 0x80225A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225A40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225A44: jr          $ra
    // 0x80225A48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225A48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022669C_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022669C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802266A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802266A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802266A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802266AC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802266B0: bne         $v0, $zero, L_802266C8
    if (ctx->r2 != 0) {
        // 0x802266B4: nop
    
            goto L_802266C8;
    }
    // 0x802266B4: nop

    // 0x802266B8: jal         0x80226AEC
    // 0x802266BC: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x802266BC: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_0:
    // 0x802266C0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802266C4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802266C8:
    // 0x802266C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802266CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802266D0: jr          $ra
    // 0x802266D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802266D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CD30_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CD30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CD34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CD38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CD3C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022CD40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CD44: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022CD48: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022CD4C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022CD50: jal         0x8004D5D4
    // 0x8022CD54: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022CD54: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022CD58: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x8022CD5C: jal         0x8002C678
    // 0x8022CD60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C678_7A78(rdram, ctx);
        goto after_1;
    // 0x8022CD60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022CD64: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8022CD68: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022CD6C: jal         0x800319B4
    // 0x8022CD70: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x8022CD70: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_2:
    // 0x8022CD74: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022CD78: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8022CD7C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022CD80: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x8022CD84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CD88: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022CD8C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022CD90: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CD94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CD98: jr          $ra
    // 0x8022CD9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CD9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225A88_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225A8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225A90: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225A94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225A98: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225A9C: bne         $v0, $zero, L_80225AB4
    if (ctx->r2 != 0) {
        // 0x80225AA0: nop
    
            goto L_80225AB4;
    }
    // 0x80225AA0: nop

    // 0x80225AA4: jal         0x80226AEC
    // 0x80225AA8: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80225AA8: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_0:
    // 0x80225AAC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225AB0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225AB4:
    // 0x80225AB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225AB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225ABC: jr          $ra
    // 0x80225AC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225AC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228674_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228674: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228678: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022867C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228680: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228684: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228688: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022868C: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80228690: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x80228694: jal         0x8004FA7C
    // 0x80228698: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80228698: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022869C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802286A0: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x802286A4: beq         $v0, $zero, L_80228738
    if (ctx->r2 == 0) {
        // 0x802286A8: nop
    
            goto L_80228738;
    }
    // 0x802286A8: nop

    // 0x802286AC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802286B0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802286B4: bne         $v0, $zero, L_80228738
    if (ctx->r2 != 0) {
        // 0x802286B8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228738;
    }
    // 0x802286B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802286BC: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x802286C0: beq         $v1, $v0, L_802286D8
    if (ctx->r3 == ctx->r2) {
        // 0x802286C4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802286D8;
    }
    // 0x802286C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802286C8: beq         $v1, $v0, L_80228708
    if (ctx->r3 == ctx->r2) {
        // 0x802286CC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80228708;
    }
    // 0x802286CC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802286D0: j           L_8022872C
    // 0x802286D4: nop

        goto L_8022872C;
    // 0x802286D4: nop

L_802286D8:
    // 0x802286D8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802286DC: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x802286E0: bne         $v0, $zero, L_8022872C
    if (ctx->r2 != 0) {
        // 0x802286E4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022872C;
    }
    // 0x802286E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802286E8: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x802286EC: bne         $v0, $zero, L_8022872C
    if (ctx->r2 != 0) {
        // 0x802286F0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022872C;
    }
    // 0x802286F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802286F4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802286F8: bne         $v1, $v0, L_8022872C
    if (ctx->r3 != ctx->r2) {
        // 0x802286FC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022872C;
    }
    // 0x802286FC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80228700: j           L_8022872C
    // 0x80228704: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022872C;
    // 0x80228704: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80228708:
    // 0x80228708: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022870C: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x80228710: beq         $v0, $zero, L_80228728
    if (ctx->r2 == 0) {
        // 0x80228714: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_80228728;
    }
    // 0x80228714: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80228718: bne         $v0, $zero, L_8022872C
    if (ctx->r2 != 0) {
        // 0x8022871C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022872C;
    }
    // 0x8022871C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80228720: j           L_8022872C
    // 0x80228724: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022872C;
    // 0x80228724: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80228728:
    // 0x80228728: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022872C:
    // 0x8022872C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228730: beq         $v0, $zero, L_8022875C
    if (ctx->r2 == 0) {
        // 0x80228734: nop
    
            goto L_8022875C;
    }
    // 0x80228734: nop

L_80228738:
    // 0x80228738: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022873C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228740: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80228744: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80228748: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022874C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80228750: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80228754: j           L_8022876C
    // 0x80228758: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022876C;
    // 0x80228758: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022875C:
    // 0x8022875C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228760: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80228764: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228768: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022876C:
    // 0x8022876C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228770: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228774: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228778: jr          $ra
    // 0x8022877C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022877C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CFA0_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CFA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CFA4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022CFA8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022CFAC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CFB0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CFB4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CFB8: lw          $v0, 0x940($at)
    ctx->r2 = MEM_W(ctx->r1, 0X940);
    // 0x8022CFBC: jalr        $v0
    // 0x8022CFC0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022CFC0: nop

    after_0:
    // 0x8022CFC4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022CFC8: jr          $ra
    // 0x8022CFCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CFCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BD54_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BD54: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022BD58: lw          $v1, 0x4B34($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4B34);
    // 0x8022BD5C: bne         $v1, $a0, L_8022BD90
    if (ctx->r3 != ctx->r4) {
        // 0x8022BD60: nop
    
            goto L_8022BD90;
    }
    // 0x8022BD60: nop

    // 0x8022BD64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BD68: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8022BD6C: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
    // 0x8022BD70: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022BD74: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x8022BD78: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8022BD7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022BD80: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x8022BD84: lhu         $v0, 0x348($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X348);
    // 0x8022BD88: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
    // 0x8022BD8C: sh          $v0, 0x348($v1)
    MEM_H(0X348, ctx->r3) = ctx->r2;
L_8022BD90:
    // 0x8022BD90: jr          $ra
    // 0x8022BD94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8022BD94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BD98: nop

    // 0x8022BD9C: nop

;}
RECOMP_FUNC void func_8022B470_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B470: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8022B474: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B478: beq         $v1, $v0, L_8022B4CC
    if (ctx->r3 == ctx->r2) {
        // 0x8022B47C: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_8022B4CC;
    }
    // 0x8022B47C: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x8022B480: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022B484: beql        $v0, $zero, L_8022B49C
    if (ctx->r2 == 0) {
        // 0x8022B488: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022B49C;
    }
    goto skip_0;
    // 0x8022B488: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022B48C: beq         $v1, $zero, L_8022B4B4
    if (ctx->r3 == 0) {
        // 0x8022B490: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B4B4;
    }
    // 0x8022B490: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B494: j           L_8022B55C
    // 0x8022B498: nop

        goto L_8022B55C;
    // 0x8022B498: nop

L_8022B49C:
    // 0x8022B49C: beq         $v1, $v0, L_8022B50C
    if (ctx->r3 == ctx->r2) {
        // 0x8022B4A0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022B50C;
    }
    // 0x8022B4A0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B4A4: beq         $v1, $v0, L_8022B538
    if (ctx->r3 == ctx->r2) {
        // 0x8022B4A8: nop
    
            goto L_8022B538;
    }
    // 0x8022B4A8: nop

    // 0x8022B4AC: j           L_8022B55C
    // 0x8022B4B0: nop

        goto L_8022B55C;
    // 0x8022B4B0: nop

L_8022B4B4:
    // 0x8022B4B4: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022B4B8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022B4BC: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022B4C0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022B4C4: sh          $v0, 0x34C($a0)
    MEM_H(0X34C, ctx->r4) = ctx->r2;
    // 0x8022B4C8: sh          $zero, 0x350($a0)
    MEM_H(0X350, ctx->r4) = 0;
L_8022B4CC:
    // 0x8022B4CC: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022B4D0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B4D4: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022B4D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B4DC: bgez        $v0, L_8022B55C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B4E0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022B55C;
    }
    // 0x8022B4E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B4E4: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022B4E8: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022B4EC: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022B4F0: lhu         $v1, 0x2($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X2);
    // 0x8022B4F4: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x8022B4F8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022B4FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B500: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022B504: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022B508: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
L_8022B50C:
    // 0x8022B50C: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022B510: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B514: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022B518: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B51C: bgez        $v0, L_8022B55C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B520: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022B55C;
    }
    // 0x8022B520: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B524: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022B528: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x8022B52C: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022B530: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022B534: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
L_8022B538:
    // 0x8022B538: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022B53C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B540: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022B544: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B548: bgez        $v0, L_8022B55C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B54C: nop
    
            goto L_8022B55C;
    }
    // 0x8022B54C: nop

    // 0x8022B550: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8022B554: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022B558: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_8022B55C:
    // 0x8022B55C: jr          $ra
    // 0x8022B560: nop

    TRACE_RETURN()
    return;
    // 0x8022B560: nop

;}
RECOMP_FUNC void func_8022E0C8_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E0C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E0CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E0D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E0D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E0D8: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x8022E0DC: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022E0E0: bne         $v0, $zero, L_8022E104
    if (ctx->r2 != 0) {
        // 0x8022E0E4: nop
    
            goto L_8022E104;
    }
    // 0x8022E0E4: nop

    // 0x8022E0E8: jal         0x8022E258
    // 0x8022E0EC: nop

    func_8022E258_ovl9(rdram, ctx);
        goto after_0;
    // 0x8022E0EC: nop

    after_0:
    // 0x8022E0F0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022E0F4: beq         $v0, $zero, L_8022E104
    if (ctx->r2 == 0) {
        // 0x8022E0F8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022E104;
    }
    // 0x8022E0F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E0FC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022E100: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022E104:
    // 0x8022E104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E108: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E10C: jr          $ra
    // 0x8022E110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226840_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226840: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226844: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226848: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022684C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226850: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80226854: bne         $v0, $zero, L_8022689C
    if (ctx->r2 != 0) {
        // 0x80226858: nop
    
            goto L_8022689C;
    }
    // 0x80226858: nop

    // 0x8022685C: jal         0x80060170
    // 0x80226860: nop

    func_80060170_3B570(rdram, ctx);
        goto after_0;
    // 0x80226860: nop

    after_0:
    // 0x80226864: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226868: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022686C: jal         0x8005F6B4
    // 0x80226870: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_1;
    // 0x80226870: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80226874: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226878: addiu       $v0, $v0, -0x328
    ctx->r2 = ADD32(ctx->r2, -0X328);
    // 0x8022687C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226880: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80226884: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80226888: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022688C: addiu       $v1, $v1, -0x330
    ctx->r3 = ADD32(ctx->r3, -0X330);
    // 0x80226890: sw          $v1, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r3;
    // 0x80226894: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226898: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_8022689C:
    // 0x8022689C: lw          $a0, 0xA4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA4);
    // 0x802268A0: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x802268A4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802268A8: beq         $v1, $v0, L_802268BC
    if (ctx->r3 == ctx->r2) {
        // 0x802268AC: nop
    
            goto L_802268BC;
    }
    // 0x802268AC: nop

    // 0x802268B0: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x802268B4: jalr        $v0
    // 0x802268B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x802268B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_802268BC:
    // 0x802268BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802268C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802268C4: jr          $ra
    // 0x802268C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802268C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802260B4_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802260B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802260B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802260BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802260C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802260C4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802260C8: bne         $v0, $zero, L_802260E0
    if (ctx->r2 != 0) {
        // 0x802260CC: nop
    
            goto L_802260E0;
    }
    // 0x802260CC: nop

    // 0x802260D0: jal         0x80226AEC
    // 0x802260D4: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x802260D4: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_0:
    // 0x802260D8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802260DC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802260E0:
    // 0x802260E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802260E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802260E8: jr          $ra
    // 0x802260EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802260EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CF90_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CF90: jr          $ra
    // 0x8022CF94: nop

    TRACE_RETURN()
    return;
    // 0x8022CF94: nop

    // 0x8022CF98: nop

    // 0x8022CF9C: nop

;}
RECOMP_FUNC void func_802295C0_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802295C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802295C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802295C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802295CC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802295D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802295D4: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x802295D8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802295DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802295E0: jal         0x8009A3B4
    // 0x802295E4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802295E4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x802295E8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802295EC: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802295F0: jal         0x8009A3B4
    // 0x802295F4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802295F4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802295F8: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802295FC: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80229600: jal         0x8009A3B4
    // 0x80229604: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80229604: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80229608: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022960C: jal         0x800A3450
    // 0x80229610: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80229610: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x80229614: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80229618: sh          $v0, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = ctx->r2;
    // 0x8022961C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80229620: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80229624: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229628: lw          $v0, 0x69C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X69C);
    // 0x8022962C: jalr        $v0
    // 0x80229630: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80229630: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80229634: lhu         $v0, 0x368($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X368);
    // 0x80229638: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022963C: beq         $v0, $zero, L_8022965C
    if (ctx->r2 == 0) {
        // 0x80229640: nop
    
            goto L_8022965C;
    }
    // 0x80229640: nop

    // 0x80229644: jal         0x8004F418
    // 0x80229648: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_5;
    // 0x80229648: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022964C: lhu         $v0, 0x368($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X368);
    // 0x80229650: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80229654: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80229658: sh          $v0, 0x368($s0)
    MEM_H(0X368, ctx->r16) = ctx->r2;
L_8022965C:
    // 0x8022965C: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80229660: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80229664: beq         $v0, $a1, L_8022967C
    if (ctx->r2 == ctx->r5) {
        // 0x80229668: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022967C;
    }
    // 0x80229668: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022966C: jal         0x80050294
    // 0x80229670: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x80229670: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80229674: j           L_80229684
    // 0x80229678: nop

        goto L_80229684;
    // 0x80229678: nop

L_8022967C:
    // 0x8022967C: jal         0x8005044C
    // 0x80229680: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_7;
    // 0x80229680: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_80229684:
    // 0x80229684: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80229688: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022968C: beq         $v0, $zero, L_802296A4
    if (ctx->r2 == 0) {
        // 0x80229690: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802296A4;
    }
    // 0x80229690: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229694: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80229698: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022969C: jal         0x8003B564
    // 0x802296A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_8;
    // 0x802296A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_8:
L_802296A4:
    // 0x802296A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802296A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802296AC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x802296B0: jal         0x80047284
    // 0x802296B4: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    func_80047284_22684(rdram, ctx);
        goto after_9;
    // 0x802296B4: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    after_9:
    // 0x802296B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802296BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802296C0: jr          $ra
    // 0x802296C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802296C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802294D0_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802294D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802294D4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802294D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802294DC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802294E0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802294E4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802294E8: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802294EC: addiu       $s1, $s0, 0x368
    ctx->r17 = ADD32(ctx->r16, 0X368);
    // 0x802294F0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802294F4: beq         $v1, $zero, L_80229504
    if (ctx->r3 == 0) {
        // 0x802294F8: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_80229504;
    }
    // 0x802294F8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802294FC: j           L_8022950C
    // 0x80229500: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
        goto L_8022950C;
    // 0x80229500: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
L_80229504:
    // 0x80229504: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229508: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8022950C:
    // 0x8022950C: jal         0x8004D5D4
    // 0x80229510: nop

    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80229510: nop

    after_0:
    // 0x80229514: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80229518: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022951C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80229520: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80229524: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80229528: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022952C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80229530: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80229534: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80229538: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x8022953C: jal         0x8009A3B4
    // 0x80229540: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80229540: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    after_1:
    // 0x80229544: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229548: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022954C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229550: addiu       $v0, $zero, -0xDFC
    ctx->r2 = ADD32(0, -0XDFC);
    // 0x80229554: sh          $v0, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r2;
    // 0x80229558: addiu       $v0, $zero, 0xB90
    ctx->r2 = ADD32(0, 0XB90);
    // 0x8022955C: sh          $v0, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r2;
    // 0x80229560: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229564: sh          $zero, 0xE($s1)
    MEM_H(0XE, ctx->r17) = 0;
    // 0x80229568: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022956C: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80229570: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80229574: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80229578: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022957C: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80229580: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80229584: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80229588: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022958C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80229590: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80229594: jal         0x80050294
    // 0x80229598: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80229598: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_2:
    // 0x8022959C: jal         0x8006036C
    // 0x802295A0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x802295A0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_3:
    // 0x802295A4: jal         0x802295C0
    // 0x802295A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802295C0_ovl9(rdram, ctx);
        goto after_4;
    // 0x802295A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802295AC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802295B0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802295B4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802295B8: jr          $ra
    // 0x802295BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802295BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022D12C_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D12C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D130: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D134: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D138: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D13C: jal         0x8004F144
    // 0x8022D140: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022D140: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022D144: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022D148: beq         $s0, $zero, L_8022D188
    if (ctx->r16 == 0) {
        // 0x8022D14C: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_8022D188;
    }
    // 0x8022D14C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8022D150: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022D154: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022D158: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022D15C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022D160: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8022D164: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x8022D168: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D16C: jal         0x8009A3B4
    // 0x8022D170: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022D170: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022D174: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x8022D178: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D17C: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x8022D180: jal         0x8004F684
    // 0x8022D184: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    func_8004F684_2AA84(rdram, ctx);
        goto after_2;
    // 0x8022D184: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    after_2:
L_8022D188:
    // 0x8022D188: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D18C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D190: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D194: jr          $ra
    // 0x8022D198: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D198: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A820_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A820: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A824: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A828: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A82C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022A830: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022A834: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A838: jal         0x8009A3B4
    // 0x8022A83C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022A83C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022A840: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022A844: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022A848: jal         0x8009A3B4
    // 0x8022A84C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022A84C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022A850: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022A854: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022A858: jal         0x8009A3B4
    // 0x8022A85C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022A85C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022A860: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022A864: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A868: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022A86C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A870: lw          $v0, 0x750($at)
    ctx->r2 = MEM_W(ctx->r1, 0X750);
    // 0x8022A874: jalr        $v0
    // 0x8022A878: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022A878: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022A87C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022A880: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022A884: beq         $v0, $zero, L_8022A89C
    if (ctx->r2 == 0) {
        // 0x8022A888: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A89C;
    }
    // 0x8022A888: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A88C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022A890: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022A894: jal         0x8003B564
    // 0x8022A898: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x8022A898: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8022A89C:
    // 0x8022A89C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022A8A0: beq         $v0, $zero, L_8022A8B8
    if (ctx->r2 == 0) {
        // 0x8022A8A4: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8022A8B8;
    }
    // 0x8022A8A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A8A8: jal         0x8005044C
    // 0x8022A8AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8022A8AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022A8B0: j           L_8022A8BC
    // 0x8022A8B4: nop

        goto L_8022A8BC;
    // 0x8022A8B4: nop

L_8022A8B8:
    // 0x8022A8B8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022A8BC:
    // 0x8022A8BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A8C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A8C4: jr          $ra
    // 0x8022A8C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A8C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227EA4_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227EA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227EA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227EAC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227EB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227EB4: jal         0x802293A8
    // 0x80227EB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_802293A8_ovl9(rdram, ctx);
        goto after_0;
    // 0x80227EB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80227EBC: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80227EC0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80227EC4: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80227EC8: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x80227ECC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80227ED0: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80227ED4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80227ED8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80227EDC: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80227EE0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x80227EE4: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
    // 0x80227EE8: sb          $a0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r4;
    // 0x80227EEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227EF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227EF4: jr          $ra
    // 0x80227EF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227EF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226000_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226004: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226008: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022600C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226010: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226014: bne         $v0, $zero, L_8022602C
    if (ctx->r2 != 0) {
        // 0x80226018: nop
    
            goto L_8022602C;
    }
    // 0x80226018: nop

    // 0x8022601C: jal         0x80226AEC
    // 0x80226020: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80226020: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_0:
    // 0x80226024: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226028: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022602C:
    // 0x8022602C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226030: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226034: jr          $ra
    // 0x80226038: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226038: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802264E0_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802264E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802264E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802264E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802264EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802264F0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802264F4: bne         $v0, $zero, L_8022650C
    if (ctx->r2 != 0) {
        // 0x802264F8: nop
    
            goto L_8022650C;
    }
    // 0x802264F8: nop

    // 0x802264FC: jal         0x80226AEC
    // 0x80226500: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80226500: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    after_0:
    // 0x80226504: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226508: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022650C:
    // 0x8022650C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226510: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226514: jr          $ra
    // 0x80226518: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226518: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
