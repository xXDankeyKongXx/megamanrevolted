#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8023B1D0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B1D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023B1D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B1D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B1DC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023B1E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023B1E4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023B1E8: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8023B1EC: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8023B1F0: jal         0x8004D5D4
    // 0x8023B1F4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8023B1F4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023B1F8: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x8023B1FC: jal         0x8002C678
    // 0x8023B200: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C678_7A78(rdram, ctx);
        goto after_1;
    // 0x8023B200: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8023B204: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8023B208: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023B20C: jal         0x800319B4
    // 0x8023B210: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x8023B210: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_2:
    // 0x8023B214: jal         0x8003E6BC
    // 0x8023B218: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_3;
    // 0x8023B218: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    after_3:
    // 0x8023B21C: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
    // 0x8023B220: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023B224: lw          $v1, 0x44($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X44);
    // 0x8023B228: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B22C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023B230: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023B234: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023B238: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B23C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023B240: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B244: lw          $v0, 0x5088($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5088);
    // 0x8023B248: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8023B24C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8023B250: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x8023B254: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023B258: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x8023B25C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8023B260: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023B264: addiu       $a0, $zero, -0x1001
    ctx->r4 = ADD32(0, -0X1001);
    // 0x8023B268: jal         0x80071A70
    // 0x8023B26C: and         $a0, $v0, $a0
    ctx->r4 = ctx->r2 & ctx->r4;
    func_80071A70_4CE70(rdram, ctx);
        goto after_4;
    // 0x8023B26C: and         $a0, $v0, $a0
    ctx->r4 = ctx->r2 & ctx->r4;
    after_4:
    // 0x8023B270: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x8023B274: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023B278: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023B27C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B280: jr          $ra
    // 0x8023B284: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023B284: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022BAFC_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BAFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BB00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BB04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BB08: jal         0x8004F418
    // 0x8022BB0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022BB0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022BB10: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022BB14: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022BB18: bne         $v0, $zero, L_8022BB58
    if (ctx->r2 != 0) {
        // 0x8022BB1C: nop
    
            goto L_8022BB58;
    }
    // 0x8022BB1C: nop

    // 0x8022BB20: jal         0x8004F5C4
    // 0x8022BB24: lw          $a0, 0x378($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X378);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x8022BB24: lw          $a0, 0x378($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X378);
    after_1:
    // 0x8022BB28: jal         0x8004F5C4
    // 0x8022BB2C: lw          $a0, 0x37C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X37C);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_2;
    // 0x8022BB2C: lw          $a0, 0x37C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X37C);
    after_2:
    // 0x8022BB30: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022BB34: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022BB38: bne         $v0, $zero, L_8022BB58
    if (ctx->r2 != 0) {
        // 0x8022BB3C: nop
    
            goto L_8022BB58;
    }
    // 0x8022BB3C: nop

    // 0x8022BB40: jal         0x8004F418
    // 0x8022BB44: lw          $a0, 0x374($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X374);
    func_8004F418_2A818(rdram, ctx);
        goto after_3;
    // 0x8022BB44: lw          $a0, 0x374($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X374);
    after_3:
    // 0x8022BB48: jal         0x8004F5C4
    // 0x8022BB4C: lw          $a0, 0x380($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X380);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_4;
    // 0x8022BB4C: lw          $a0, 0x380($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X380);
    after_4:
    // 0x8022BB50: jal         0x8004F5C4
    // 0x8022BB54: lw          $a0, 0x384($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X384);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_5;
    // 0x8022BB54: lw          $a0, 0x384($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X384);
    after_5:
L_8022BB58:
    // 0x8022BB58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BB5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BB60: jr          $ra
    // 0x8022BB64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BB64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239D50_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239D50: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80239D54: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80239D58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80239D5C: beq         $v1, $a0, L_80239DE4
    if (ctx->r3 == ctx->r4) {
        // 0x80239D60: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_80239DE4;
    }
    // 0x80239D60: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80239D64: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80239D68: beq         $v0, $zero, L_80239E1C
    if (ctx->r2 == 0) {
        // 0x80239D6C: nop
    
            goto L_80239E1C;
    }
    // 0x80239D6C: nop

    // 0x80239D70: bne         $v1, $zero, L_80239E1C
    if (ctx->r3 != 0) {
        // 0x80239D74: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80239E1C;
    }
    // 0x80239D74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239D78: lb          $v1, 0xC($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XC);
    // 0x80239D7C: beq         $v1, $a0, L_80239DC0
    if (ctx->r3 == ctx->r4) {
        // 0x80239D80: sb          $v0, 0x9($a1)
        MEM_B(0X9, ctx->r5) = ctx->r2;
            goto L_80239DC0;
    }
    // 0x80239D80: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80239D84: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80239D88: beql        $v0, $zero, L_80239DA0
    if (ctx->r2 == 0) {
        // 0x80239D8C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80239DA0;
    }
    goto skip_0;
    // 0x80239D8C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80239D90: beq         $v1, $zero, L_80239DB0
    if (ctx->r3 == 0) {
        // 0x80239D94: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_80239DB0;
    }
    // 0x80239D94: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80239D98: j           L_80239DE4
    // 0x80239D9C: nop

        goto L_80239DE4;
    // 0x80239D9C: nop

L_80239DA0:
    // 0x80239DA0: beq         $v1, $v0, L_80239DD4
    if (ctx->r3 == ctx->r2) {
        // 0x80239DA4: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_80239DD4;
    }
    // 0x80239DA4: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80239DA8: j           L_80239DE4
    // 0x80239DAC: nop

        goto L_80239DE4;
    // 0x80239DAC: nop

L_80239DB0:
    // 0x80239DB0: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80239DB4: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x80239DB8: j           L_80239DE0
    // 0x80239DBC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80239DE0;
    // 0x80239DBC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80239DC0:
    // 0x80239DC0: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80239DC4: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80239DC8: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x80239DCC: j           L_80239DE0
    // 0x80239DD0: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
        goto L_80239DE0;
    // 0x80239DD0: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
L_80239DD4:
    // 0x80239DD4: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80239DD8: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x80239DDC: addiu       $v0, $zero, 0x808
    ctx->r2 = ADD32(0, 0X808);
L_80239DE0:
    // 0x80239DE0: sh          $v0, 0x26($a1)
    MEM_H(0X26, ctx->r5) = ctx->r2;
L_80239DE4:
    // 0x80239DE4: lh          $v0, 0x24($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X24);
    // 0x80239DE8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80239DEC: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80239DF0: bne         $v0, $zero, L_80239E08
    if (ctx->r2 != 0) {
        // 0x80239DF4: addiu       $a0, $a0, 0x6
        ctx->r4 = ADD32(ctx->r4, 0X6);
            goto L_80239E08;
    }
    // 0x80239DF4: addiu       $a0, $a0, 0x6
    ctx->r4 = ADD32(ctx->r4, 0X6);
    // 0x80239DF8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80239DFC: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80239E00: j           L_80239E1C
    // 0x80239E04: sh          $zero, 0x24($a1)
    MEM_H(0X24, ctx->r5) = 0;
        goto L_80239E1C;
    // 0x80239E04: sh          $zero, 0x24($a1)
    MEM_H(0X24, ctx->r5) = 0;
L_80239E08:
    // 0x80239E08: lhu         $v0, 0x26($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X26);
    // 0x80239E0C: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x80239E10: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
    // 0x80239E14: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80239E18: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
L_80239E1C:
    // 0x80239E1C: jr          $ra
    // 0x80239E20: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80239E20: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80230FA8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230FA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230FAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80230FB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230FB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80230FB8: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x80230FBC: lh          $v0, 0x380($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X380);
    // 0x80230FC0: bne         $a0, $v0, L_8023100C
    if (ctx->r4 != ctx->r2) {
        // 0x80230FC4: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_8023100C;
    }
    // 0x80230FC4: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x80230FC8: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x80230FCC: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
    // 0x80230FD0: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80230FD4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80230FD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230FDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80230FE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230FE4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230FE8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80230FEC: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80230FF0: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x80230FF4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80230FF8: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x80230FFC: jal         0x80050294
    // 0x80231000: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80231000: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    after_0:
    // 0x80231004: j           L_80231020
    // 0x80231008: nop

        goto L_80231020;
    // 0x80231008: nop

L_8023100C:
    // 0x8023100C: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80231010: bne         $v0, $zero, L_8023101C
    if (ctx->r2 != 0) {
        // 0x80231014: addiu       $v0, $v1, -0x80
        ctx->r2 = ADD32(ctx->r3, -0X80);
            goto L_8023101C;
    }
    // 0x80231014: addiu       $v0, $v1, -0x80
    ctx->r2 = ADD32(ctx->r3, -0X80);
    // 0x80231018: addiu       $v0, $v1, 0x80
    ctx->r2 = ADD32(ctx->r3, 0X80);
L_8023101C:
    // 0x8023101C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80231020:
    // 0x80231020: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80231024: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80231028: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8023102C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80231030: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80231034: jr          $ra
    // 0x80231038: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231038: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229F38_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229F38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229F3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229F40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229F44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229F48: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80229F4C: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80229F50: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229F54: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80229F58: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80229F5C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80229F60: lbu         $v1, -0x2348($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X2348);
    // 0x80229F64: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80229F68: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80229F6C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80229F70: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80229F74: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229F78: sb          $v1, 0x17E0($at)
    MEM_B(0X17E0, ctx->r1) = ctx->r3;
    // 0x80229F7C: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80229F80: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80229F84: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80229F88: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229F8C: sb          $zero, 0x17E1($at)
    MEM_B(0X17E1, ctx->r1) = 0;
    // 0x80229F90: jal         0x8004D5D4
    // 0x80229F94: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80229F94: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80229F98: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80229F9C: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x80229FA0: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x80229FA4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80229FA8: lw          $a1, 0x298($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X298);
    // 0x80229FAC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80229FB0: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x80229FB4: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80229FB8: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80229FBC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80229FC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229FC4: sw          $v0, 0x380($s0)
    MEM_W(0X380, ctx->r16) = ctx->r2;
    // 0x80229FC8: addiu       $v0, $zero, 0xEE
    ctx->r2 = ADD32(0, 0XEE);
    // 0x80229FCC: sw          $v1, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->r3;
    // 0x80229FD0: sw          $v1, 0x384($s0)
    MEM_W(0X384, ctx->r16) = ctx->r3;
    // 0x80229FD4: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80229FD8: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    // 0x80229FDC: sw          $zero, 0x360($s0)
    MEM_W(0X360, ctx->r16) = 0;
    // 0x80229FE0: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80229FE4: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80229FE8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80229FEC: lbu         $a1, 0xF($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XF);
    // 0x80229FF0: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x80229FF4: jal         0x800540BC
    // 0x80229FF8: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x80229FF8: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    after_1:
    // 0x80229FFC: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A000: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022A004: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022A008: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A00C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A010: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022A014: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x8022A018: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A01C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022A020: addiu       $v0, $v0, 0x834
    ctx->r2 = ADD32(ctx->r2, 0X834);
    // 0x8022A024: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022A028: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022A02C: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x8022A030: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x8022A034: jal         0x8003E934
    // 0x8022A038: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022A038: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022A03C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A040: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8022A044: addiu       $v0, $v0, 0x32
    ctx->r2 = ADD32(ctx->r2, 0X32);
    // 0x8022A048: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022A04C: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022A050: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A054: addiu       $v0, $zero, -0x32
    ctx->r2 = ADD32(0, -0X32);
    // 0x8022A058: sh          $v0, 0x38C($s0)
    MEM_H(0X38C, ctx->r16) = ctx->r2;
    // 0x8022A05C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A060: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022A064: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022A068: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022A06C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022A070: jal         0x80050294
    // 0x8022A074: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022A074: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    after_3:
    // 0x8022A078: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022A07C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022A080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A084: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A088: jr          $ra
    // 0x8022A08C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A08C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DAF8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DAF8: lhu         $v0, 0x34A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X34A);
    // 0x8022DAFC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022DB00: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x8022DB04: andi        $a2, $v0, 0xF
    ctx->r6 = ctx->r2 & 0XF;
    // 0x8022DB08: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_8022DB0C:
    // 0x8022DB0C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022DB10: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022DB14: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DB18: lbu         $v0, 0xA50($at)
    ctx->r2 = MEM_BU(ctx->r1, 0XA50);
    // 0x8022DB1C: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8022DB20: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022DB24: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DB28: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022DB2C: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022DB30: bne         $v0, $zero, L_8022DB50
    if (ctx->r2 != 0) {
        // 0x8022DB34: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022DB50;
    }
    // 0x8022DB34: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022DB38: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022DB3C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DB40: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022DB44: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8022DB48: bne         $v0, $zero, L_8022DB0C
    if (ctx->r2 != 0) {
        // 0x8022DB4C: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8022DB0C;
    }
    // 0x8022DB4C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_8022DB50:
    // 0x8022DB50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DB54: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8022DB58: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022DB5C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022DB60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DB64: beql        $v1, $v0, L_8022DBAC
    if (ctx->r3 == ctx->r2) {
        // 0x8022DB68: sh          $zero, 0x66($a0)
        MEM_H(0X66, ctx->r4) = 0;
            goto L_8022DBAC;
    }
    goto skip_0;
    // 0x8022DB68: sh          $zero, 0x66($a0)
    MEM_H(0X66, ctx->r4) = 0;
    skip_0:
    // 0x8022DB6C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022DB70: beql        $v0, $zero, L_8022DB88
    if (ctx->r2 == 0) {
        // 0x8022DB74: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022DB88;
    }
    goto skip_1;
    // 0x8022DB74: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x8022DB78: beql        $v1, $zero, L_8022DBA4
    if (ctx->r3 == 0) {
        // 0x8022DB7C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022DBA4;
    }
    goto skip_2;
    // 0x8022DB7C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_2:
    // 0x8022DB80: j           L_8022DBB4
    // 0x8022DB84: nop

        goto L_8022DBB4;
    // 0x8022DB84: nop

L_8022DB88:
    // 0x8022DB88: beq         $v1, $v0, L_8022DBB0
    if (ctx->r3 == ctx->r2) {
        // 0x8022DB8C: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8022DBB0;
    }
    // 0x8022DB8C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022DB90: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022DB94: beql        $v1, $v0, L_8022DBB0
    if (ctx->r3 == ctx->r2) {
        // 0x8022DB98: addiu       $v0, $zero, -0x10
        ctx->r2 = ADD32(0, -0X10);
            goto L_8022DBB0;
    }
    goto skip_3;
    // 0x8022DB98: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    skip_3:
    // 0x8022DB9C: j           L_8022DBB4
    // 0x8022DBA0: nop

        goto L_8022DBB4;
    // 0x8022DBA0: nop

L_8022DBA4:
    // 0x8022DBA4: j           L_8022DBB4
    // 0x8022DBA8: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
        goto L_8022DBB4;
    // 0x8022DBA8: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8022DBAC:
    // 0x8022DBAC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8022DBB0:
    // 0x8022DBB0: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
L_8022DBB4:
    // 0x8022DBB4: jr          $ra
    // 0x8022DBB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8022DBB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80230EF8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230EF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230EFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230F00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230F04: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230F08: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230F0C: lw          $v0, 0xC4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC4);
    // 0x80230F10: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80230F14: bne         $v0, $zero, L_80230F30
    if (ctx->r2 != 0) {
        // 0x80230F18: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80230F30;
    }
    // 0x80230F18: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80230F1C: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80230F20: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x80230F24: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80230F28: beq         $v0, $zero, L_80230F84
    if (ctx->r2 == 0) {
        // 0x80230F2C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230F84;
    }
    // 0x80230F2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80230F30:
    // 0x80230F30: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80230F34: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x80230F38: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80230F3C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80230F40: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
    // 0x80230F44: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80230F48: bne         $v0, $zero, L_80230F54
    if (ctx->r2 != 0) {
        // 0x80230F4C: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_80230F54;
    }
    // 0x80230F4C: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80230F50: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_80230F54:
    // 0x80230F54: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80230F58: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80230F5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230F60: jal         0x80050294
    // 0x80230F64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80230F64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80230F68: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80230F6C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80230F70: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80230F74: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80230F78: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80230F7C: j           L_80230F94
    // 0x80230F80: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
        goto L_80230F94;
    // 0x80230F80: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
L_80230F84:
    // 0x80230F84: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80230F88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230F8C: jal         0x8004DA90
    // 0x80230F90: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80230F90: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
L_80230F94:
    // 0x80230F94: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230F98: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230F9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230FA0: jr          $ra
    // 0x80230FA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230FA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802329A8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802329A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802329AC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802329B0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802329B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802329B8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802329BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802329C0: lh          $v1, 0x34C($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X34C);
    // 0x802329C4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x802329C8: slti        $v0, $v1, 0x9
    ctx->r2 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
    // 0x802329CC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802329D0: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x802329D4: slti        $v1, $v1, 0x5
    ctx->r3 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x802329D8: beq         $v1, $zero, L_802329E4
    if (ctx->r3 == 0) {
        // 0x802329DC: andi        $s0, $v0, 0x18
        ctx->r16 = ctx->r2 & 0X18;
            goto L_802329E4;
    }
    // 0x802329DC: andi        $s0, $v0, 0x18
    ctx->r16 = ctx->r2 & 0X18;
    // 0x802329E0: addiu       $s0, $zero, 0x38
    ctx->r16 = ADD32(0, 0X38);
L_802329E4:
    // 0x802329E4: lh          $v1, 0x34E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X34E);
    // 0x802329E8: slti        $v0, $v1, 0x9
    ctx->r2 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
    // 0x802329EC: bnel        $v0, $zero, L_802329F4
    if (ctx->r2 != 0) {
        // 0x802329F0: addiu       $s2, $zero, 0x15
        ctx->r18 = ADD32(0, 0X15);
            goto L_802329F4;
    }
    goto skip_0;
    // 0x802329F0: addiu       $s2, $zero, 0x15
    ctx->r18 = ADD32(0, 0X15);
    skip_0:
L_802329F4:
    // 0x802329F4: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x802329F8: bnel        $v0, $zero, L_80232A00
    if (ctx->r2 != 0) {
        // 0x802329FC: addiu       $s2, $zero, -0x15
        ctx->r18 = ADD32(0, -0X15);
            goto L_80232A00;
    }
    goto skip_1;
    // 0x802329FC: addiu       $s2, $zero, -0x15
    ctx->r18 = ADD32(0, -0X15);
    skip_1:
L_80232A00:
    // 0x80232A00: lhu         $v1, 0x34E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X34E);
    // 0x80232A04: lw          $a0, 0x354($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X354);
    // 0x80232A08: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80232A0C: sh          $v0, 0x34C($s1)
    MEM_H(0X34C, ctx->r17) = ctx->r2;
    // 0x80232A10: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80232A14: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x80232A18: jal         0x800324B4
    // 0x80232A1C: sh          $v1, 0x34E($s1)
    MEM_H(0X34E, ctx->r17) = ctx->r3;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80232A1C: sh          $v1, 0x34E($s1)
    MEM_H(0X34E, ctx->r17) = ctx->r3;
    after_0:
    // 0x80232A20: nop

    // 0x80232A24: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80232A28: mflo        $v0
    ctx->r2 = lo;
    // 0x80232A2C: lw          $a0, 0x354($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X354);
    // 0x80232A30: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x80232A34: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x80232A38: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80232A3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232A40: jal         0x80032498
    // 0x80232A44: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80232A44: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    after_1:
    // 0x80232A48: nop

    // 0x80232A4C: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80232A50: mflo        $v0
    ctx->r2 = lo;
    // 0x80232A54: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x80232A58: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x80232A5C: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    // 0x80232A60: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x80232A64: lb          $a0, 0xA7($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XA7);
    // 0x80232A68: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80232A6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232A70: bgez        $a0, L_80232AA0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80232A74: sh          $v1, 0x18($s1)
        MEM_H(0X18, ctx->r17) = ctx->r3;
            goto L_80232AA0;
    }
    // 0x80232A74: sh          $v1, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r3;
    // 0x80232A78: lhu         $v0, 0x348($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X348);
    // 0x80232A7C: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80232A80: bne         $v0, $zero, L_80232A8C
    if (ctx->r2 != 0) {
        // 0x80232A84: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_80232A8C;
    }
    // 0x80232A84: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80232A88: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_80232A8C:
    // 0x80232A8C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80232A90: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80232A94: sb          $zero, 0x74($s1)
    MEM_B(0X74, ctx->r17) = 0;
    // 0x80232A98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232A9C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80232AA0:
    // 0x80232AA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80232AA4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80232AA8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80232AAC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80232AB0: jr          $ra
    // 0x80232AB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80232AB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023A154_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A154: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023A158: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8023A15C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
L_8023A160:
    // 0x8023A160: addu        $a1, $a0, $a3
    ctx->r5 = ADD32(ctx->r4, ctx->r7);
    // 0x8023A164: lbu         $v0, 0x5($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X5);
    // 0x8023A168: beq         $v0, $zero, L_8023A178
    if (ctx->r2 == 0) {
        // 0x8023A16C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8023A178;
    }
    // 0x8023A16C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023A170: j           L_8023A244
    // 0x8023A174: sb          $v0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r2;
        goto L_8023A244;
    // 0x8023A174: sb          $v0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r2;
L_8023A178:
    // 0x8023A178: lb          $v0, 0x8($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X8);
    // 0x8023A17C: beq         $v0, $zero, L_8023A194
    if (ctx->r2 == 0) {
        // 0x8023A180: nop
    
            goto L_8023A194;
    }
    // 0x8023A180: nop

    // 0x8023A184: beq         $v0, $t0, L_8023A1F0
    if (ctx->r2 == ctx->r8) {
        // 0x8023A188: nop
    
            goto L_8023A1F0;
    }
    // 0x8023A188: nop

    // 0x8023A18C: j           L_8023A248
    // 0x8023A190: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
        goto L_8023A248;
    // 0x8023A190: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_8023A194:
    // 0x8023A194: lhu         $v0, 0xC($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0XC);
    // 0x8023A198: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8023A19C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023A1A0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8023A1A4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8023A1A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023A1AC: lhu         $v0, 0x5082($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X5082);
    // 0x8023A1B0: addiu       $v0, $v0, -0x3
    ctx->r2 = ADD32(ctx->r2, -0X3);
    // 0x8023A1B4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023A1B8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8023A1BC: sh          $v0, 0x5082($at)
    MEM_H(0X5082, ctx->r1) = ctx->r2;
    // 0x8023A1C0: lhu         $v1, 0xC($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0XC);
    // 0x8023A1C4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023A1C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023A1CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023A1D0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023A1D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023A1D8: lh          $v0, 0x5082($at)
    ctx->r2 = MEM_H(ctx->r1, 0X5082);
    // 0x8023A1DC: slti        $v0, $v0, -0x2FF
    ctx->r2 = SIGNED(ctx->r2) < -0X2FF ? 1 : 0;
    // 0x8023A1E0: bnel        $v0, $zero, L_8023A244
    if (ctx->r2 != 0) {
        // 0x8023A1E4: sb          $t0, 0x8($a1)
        MEM_B(0X8, ctx->r5) = ctx->r8;
            goto L_8023A244;
    }
    goto skip_0;
    // 0x8023A1E4: sb          $t0, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r8;
    skip_0:
    // 0x8023A1E8: j           L_8023A248
    // 0x8023A1EC: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
        goto L_8023A248;
    // 0x8023A1EC: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_8023A1F0:
    // 0x8023A1F0: lhu         $v0, 0xC($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0XC);
    // 0x8023A1F4: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8023A1F8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023A1FC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8023A200: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8023A204: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023A208: lhu         $v0, 0x5082($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X5082);
    // 0x8023A20C: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x8023A210: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023A214: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8023A218: sh          $v0, 0x5082($at)
    MEM_H(0X5082, ctx->r1) = ctx->r2;
    // 0x8023A21C: lhu         $v1, 0xC($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0XC);
    // 0x8023A220: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023A224: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023A228: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023A22C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023A230: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023A234: lh          $v0, 0x5082($at)
    ctx->r2 = MEM_H(ctx->r1, 0X5082);
    // 0x8023A238: slti        $v0, $v0, -0x180
    ctx->r2 = SIGNED(ctx->r2) < -0X180 ? 1 : 0;
    // 0x8023A23C: beql        $v0, $zero, L_8023A244
    if (ctx->r2 == 0) {
        // 0x8023A240: sb          $zero, 0x8($a1)
        MEM_B(0X8, ctx->r5) = 0;
            goto L_8023A244;
    }
    goto skip_1;
    // 0x8023A240: sb          $zero, 0x8($a1)
    MEM_B(0X8, ctx->r5) = 0;
    skip_1:
L_8023A244:
    // 0x8023A244: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_8023A248:
    // 0x8023A248: sltiu       $v0, $a3, 0x3
    ctx->r2 = ctx->r7 < 0X3 ? 1 : 0;
    // 0x8023A24C: bne         $v0, $zero, L_8023A160
    if (ctx->r2 != 0) {
        // 0x8023A250: addiu       $a2, $a2, 0x2
        ctx->r6 = ADD32(ctx->r6, 0X2);
            goto L_8023A160;
    }
    // 0x8023A250: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x8023A254: jr          $ra
    // 0x8023A258: nop

    TRACE_RETURN()
    return;
    // 0x8023A258: nop

    // 0x8023A25C: nop

;}
RECOMP_FUNC void func_80236EA0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236EA0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80236EA4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80236EA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236EAC: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80236EB0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80236EB4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80236EB8: jal         0x8009A3B4
    // 0x80236EBC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80236EBC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80236EC0: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80236EC4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80236EC8: jal         0x8009A3B4
    // 0x80236ECC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80236ECC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80236ED0: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80236ED4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236ED8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80236EDC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80236EE0: bne         $v0, $zero, L_80236EF8
    if (ctx->r2 != 0) {
        // 0x80236EE4: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80236EF8;
    }
    // 0x80236EE4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80236EE8: jal         0x8004F4F8
    // 0x80236EEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x80236EEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80236EF0: j           L_80237020
    // 0x80236EF4: nop

        goto L_80237020;
    // 0x80236EF4: nop

L_80236EF8:
    // 0x80236EF8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80236EFC: bne         $v1, $v0, L_80236F08
    if (ctx->r3 != ctx->r2) {
        // 0x80236F00: addiu       $v0, $v1, 0x2
        ctx->r2 = ADD32(ctx->r3, 0X2);
            goto L_80236F08;
    }
    // 0x80236F00: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x80236F04: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80236F08:
    // 0x80236F08: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80236F0C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80236F10: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236F14: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236F18: lbu         $v0, 0xDA4($at)
    ctx->r2 = MEM_BU(ctx->r1, 0XDA4);
    // 0x80236F1C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80236F20: lh          $a2, 0x4C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X4C);
    // 0x80236F24: lh          $a3, 0x50($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X50);
    // 0x80236F28: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x80236F2C: lhu         $v0, 0x9A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X9A);
    // 0x80236F30: lui         $t0, 0x8024
    ctx->r8 = S32(0X8024 << 16);
    // 0x80236F34: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
    // 0x80236F38: lbu         $t0, 0xDA5($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0XDA5);
    // 0x80236F3C: lh          $v1, 0x44($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X44);
    // 0x80236F40: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80236F44: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80236F48: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
    // 0x80236F4C: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80236F50: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80236F54: lh          $a2, 0x48($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X48);
    // 0x80236F58: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80236F5C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80236F60: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80236F64: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80236F68: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80236F6C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80236F70: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80236F74: sb          $t0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r8;
    // 0x80236F78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236F7C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236F80: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80236F84: addu        $a2, $a2, $a3
    ctx->r6 = ADD32(ctx->r6, ctx->r7);
    // 0x80236F88: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80236F8C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80236F90: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80236F94: jal         0x8004DD04
    // 0x80236F98: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x80236F98: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    after_3:
    // 0x80236F9C: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80236FA0: beq         $v0, $zero, L_80236FBC
    if (ctx->r2 == 0) {
        // 0x80236FA4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80236FBC;
    }
    // 0x80236FA4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80236FA8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80236FAC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80236FB0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236FB4: bne         $v0, $zero, L_80237008
    if (ctx->r2 != 0) {
        // 0x80236FB8: nop
    
            goto L_80237008;
    }
    // 0x80236FB8: nop

L_80236FBC:
    // 0x80236FBC: jal         0x8004F144
    // 0x80236FC0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x80236FC0: nop

    after_4:
    // 0x80236FC4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80236FC8: beq         $v1, $zero, L_80237008
    if (ctx->r3 == 0) {
        // 0x80236FCC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80237008;
    }
    // 0x80236FCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236FD0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80236FD4: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80236FD8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80236FDC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80236FE0: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80236FE4: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    // 0x80236FE8: lhu         $v0, 0x90($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X90);
    // 0x80236FEC: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80236FF0: lhu         $v0, 0x92($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X92);
    // 0x80236FF4: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x80236FF8: lhu         $v0, 0x94($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X94);
    // 0x80236FFC: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    // 0x80237000: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80237004: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80237008:
    // 0x80237008: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8023700C: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80237010: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x80237014: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
    // 0x80237018: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    // 0x8023701C: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
L_80237020:
    // 0x80237020: jal         0x8003F754
    // 0x80237024: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_5;
    // 0x80237024: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80237028: bne         $v0, $zero, L_80237044
    if (ctx->r2 != 0) {
        // 0x8023702C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80237044;
    }
    // 0x8023702C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80237030: lw          $v0, 0x9C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X9C);
    // 0x80237034: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80237038: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023703C: beq         $v0, $zero, L_80237058
    if (ctx->r2 == 0) {
        // 0x80237040: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80237058;
    }
    // 0x80237040: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80237044:
    // 0x80237044: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80237048: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8023704C: sb          $zero, 0x96($s0)
    MEM_B(0X96, ctx->r16) = 0;
    // 0x80237050: j           L_802370A8
    // 0x80237054: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_802370A8;
    // 0x80237054: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80237058:
    // 0x80237058: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023705C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80237060: beq         $v0, $zero, L_802370A8
    if (ctx->r2 == 0) {
        // 0x80237064: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802370A8;
    }
    // 0x80237064: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80237068: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x8023706C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80237070: addiu       $v0, $s0, 0x9C
    ctx->r2 = ADD32(ctx->r16, 0X9C);
    // 0x80237074: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237078: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023707C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80237080: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80237084: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80237088: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x8023708C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x80237090: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80237094: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80237098: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023709C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802370A0: jal         0x80051E18
    // 0x802370A4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_6;
    // 0x802370A4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_6:
L_802370A8:
    // 0x802370A8: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x802370AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802370B0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802370B4: jr          $ra
    // 0x802370B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802370B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8023B640_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B640: lw          $v1, 0x44($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X44);
    // 0x8023B644: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x8023B648: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023B64C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023B650: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B654: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023B658: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B65C: sw          $a1, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = ctx->r5;
    // 0x8023B660: jr          $ra
    // 0x8023B664: sb          $zero, 0x8($a0)
    MEM_B(0X8, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x8023B664: sb          $zero, 0x8($a0)
    MEM_B(0X8, ctx->r4) = 0;
    // 0x8023B668: nop

    // 0x8023B66C: nop

;}
RECOMP_FUNC void func_80239F98_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239F98: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80239F9C: lui         $t0, 0x1
    ctx->r8 = S32(0X1 << 16);
    // 0x80239FA0: ori         $t0, $t0, 0x1
    ctx->r8 = ctx->r8 | 0X1;
    // 0x80239FA4: lui         $t1, 0xC0C0
    ctx->r9 = S32(0XC0C0 << 16);
    // 0x80239FA8: ori         $t1, $t1, 0xFEBF
    ctx->r9 = ctx->r9 | 0XFEBF;
L_80239FAC:
    // 0x80239FAC: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x80239FB0: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x80239FB4: lw          $a2, 0x4($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X4);
    // 0x80239FB8: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x80239FBC: sltu        $v0, $t1, $a1
    ctx->r2 = ctx->r9 < ctx->r5 ? 1 : 0;
    // 0x80239FC0: beq         $v0, $zero, L_80239FD8
    if (ctx->r2 == 0) {
        // 0x80239FC4: addu        $a2, $a2, $t0
        ctx->r6 = ADD32(ctx->r6, ctx->r8);
            goto L_80239FD8;
    }
    // 0x80239FC4: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x80239FC8: lui         $a1, 0xC080
    ctx->r5 = S32(0XC080 << 16);
    // 0x80239FCC: ori         $a1, $a1, 0xFE80
    ctx->r5 = ctx->r5 | 0XFE80;
    // 0x80239FD0: lui         $a2, 0xC0BF
    ctx->r6 = S32(0XC0BF << 16);
    // 0x80239FD4: ori         $a2, $a2, 0xFEBF
    ctx->r6 = ctx->r6 | 0XFEBF;
L_80239FD8:
    // 0x80239FD8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80239FDC: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80239FE0: slti        $v0, $a3, 0x2
    ctx->r2 = SIGNED(ctx->r7) < 0X2 ? 1 : 0;
    // 0x80239FE4: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x80239FE8: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x80239FEC: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    // 0x80239FF0: sw          $a2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r6;
    // 0x80239FF4: sw          $a1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r5;
    // 0x80239FF8: sw          $a2, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r6;
    // 0x80239FFC: sw          $a1, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r5;
    // 0x8023A000: bne         $v0, $zero, L_80239FAC
    if (ctx->r2 != 0) {
        // 0x8023A004: sw          $a2, 0x1C($v1)
        MEM_W(0X1C, ctx->r3) = ctx->r6;
            goto L_80239FAC;
    }
    // 0x8023A004: sw          $a2, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r6;
    // 0x8023A008: jr          $ra
    // 0x8023A00C: nop

    TRACE_RETURN()
    return;
    // 0x8023A00C: nop

;}
RECOMP_FUNC void func_80228CD8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228CD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228CDC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228CE0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80228CE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80228CE8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228CEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228CF0: lw          $v0, 0x33C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X33C);
    // 0x80228CF4: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80228CF8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228CFC: beq         $v0, $zero, L_80228D08
    if (ctx->r2 == 0) {
        // 0x80228D00: addiu       $s2, $s1, 0x328
        ctx->r18 = ADD32(ctx->r17, 0X328);
            goto L_80228D08;
    }
    // 0x80228D00: addiu       $s2, $s1, 0x328
    ctx->r18 = ADD32(ctx->r17, 0X328);
    // 0x80228D04: sh          $zero, 0x330($s1)
    MEM_H(0X330, ctx->r17) = 0;
L_80228D08:
    // 0x80228D08: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80228D0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228D10: beq         $v1, $v0, L_80228DC4
    if (ctx->r3 == ctx->r2) {
        // 0x80228D14: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80228DC4;
    }
    // 0x80228D14: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80228D18: beql        $v0, $zero, L_80228D30
    if (ctx->r2 == 0) {
        // 0x80228D1C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80228D30;
    }
    goto skip_0;
    // 0x80228D1C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80228D20: beq         $v1, $zero, L_80228D40
    if (ctx->r3 == 0) {
        // 0x80228D24: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228D40;
    }
    // 0x80228D24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228D28: j           L_80228F80
    // 0x80228D2C: nop

        goto L_80228F80;
    // 0x80228D2C: nop

L_80228D30:
    // 0x80228D30: beq         $v1, $v0, L_80228F54
    if (ctx->r3 == ctx->r2) {
        // 0x80228D34: nop
    
            goto L_80228F54;
    }
    // 0x80228D34: nop

    // 0x80228D38: j           L_80228F80
    // 0x80228D3C: nop

        goto L_80228F80;
    // 0x80228D3C: nop

L_80228D40:
    // 0x80228D40: lh          $a0, 0x56($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X56);
    // 0x80228D44: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80228D48: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80228D4C: jal         0x800324B4
    // 0x80228D50: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80228D50: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_0:
    // 0x80228D54: lh          $a0, 0x56($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X56);
    // 0x80228D58: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80228D5C: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x80228D60: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80228D64: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80228D68: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x80228D6C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80228D70: jal         0x80032498
    // 0x80228D74: sh          $v0, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80228D74: sh          $v0, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = ctx->r2;
    after_1:
    // 0x80228D78: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80228D7C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80228D80: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80228D84: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80228D88: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x80228D8C: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x80228D90: addiu       $v0, $zero, 0x73
    ctx->r2 = ADD32(0, 0X73);
    // 0x80228D94: sh          $v0, 0x32C($s1)
    MEM_H(0X32C, ctx->r17) = ctx->r2;
    // 0x80228D98: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80228D9C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80228DA0: lh          $v1, 0x32E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X32E);
    // 0x80228DA4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80228DA8: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80228DAC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228DB0: lhu         $v0, 0x328($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X328);
    // 0x80228DB4: lbu         $v1, 0xA($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XA);
    // 0x80228DB8: andi        $v0, $v0, 0xFFF7
    ctx->r2 = ctx->r2 & 0XFFF7;
    // 0x80228DBC: sh          $v0, 0x328($s1)
    MEM_H(0X328, ctx->r17) = ctx->r2;
    // 0x80228DC0: sh          $v1, 0x330($s1)
    MEM_H(0X330, ctx->r17) = ctx->r3;
L_80228DC4:
    // 0x80228DC4: lb          $v1, 0xA6($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XA6);
    // 0x80228DC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228DCC: bne         $v1, $v0, L_80228DDC
    if (ctx->r3 != ctx->r2) {
        // 0x80228DD0: addiu       $a0, $zero, 0xB5
        ctx->r4 = ADD32(0, 0XB5);
            goto L_80228DDC;
    }
    // 0x80228DD0: addiu       $a0, $zero, 0xB5
    ctx->r4 = ADD32(0, 0XB5);
    // 0x80228DD4: jal         0x8002A33C
    // 0x80228DD8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80228DD8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
L_80228DDC:
    // 0x80228DDC: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x80228DE0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228DE4: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x80228DE8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228DEC: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228DF0: bltz        $a0, L_80228E08
    if (SIGNED(ctx->r4) < 0) {
        // 0x80228DF4: lui         $v1, 0x200
        ctx->r3 = S32(0X200 << 16);
            goto L_80228E08;
    }
    // 0x80228DF4: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80228DF8: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x80228DFC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228E00: beq         $v0, $zero, L_80228E20
    if (ctx->r2 == 0) {
        // 0x80228E04: nop
    
            goto L_80228E20;
    }
    // 0x80228E04: nop

L_80228E08:
    // 0x80228E08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228E0C: sh          $zero, 0x8($s2)
    MEM_H(0X8, ctx->r18) = 0;
    // 0x80228E10: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80228E14: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228E18: j           L_80228F54
    // 0x80228E1C: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
        goto L_80228F54;
    // 0x80228E1C: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
L_80228E20:
    // 0x80228E20: lh          $v0, 0x6E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6E);
    // 0x80228E24: bgtzl       $v0, L_80228E38
    if (SIGNED(ctx->r2) > 0) {
        // 0x80228E28: slti        $v0, $a0, 0x64
        ctx->r2 = SIGNED(ctx->r4) < 0X64 ? 1 : 0;
            goto L_80228E38;
    }
    goto skip_1;
    // 0x80228E28: slti        $v0, $a0, 0x64
    ctx->r2 = SIGNED(ctx->r4) < 0X64 ? 1 : 0;
    skip_1:
    // 0x80228E2C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80228E30: j           L_80228F7C
    // 0x80228E34: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
        goto L_80228F7C;
    // 0x80228E34: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
L_80228E38:
    // 0x80228E38: beq         $v0, $zero, L_80228EB0
    if (ctx->r2 == 0) {
        // 0x80228E3C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80228EB0;
    }
    // 0x80228E3C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228E40: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x80228E44: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x80228E48: lh          $s0, 0x16($s1)
    ctx->r16 = MEM_H(ctx->r17, 0X16);
    // 0x80228E4C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228E50: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228E54: jal         0x8003E934
    // 0x80228E58: sw          $v1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x80228E58: sw          $v1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r3;
    after_3:
    // 0x80228E5C: beq         $s0, $v0, L_80228E8C
    if (ctx->r16 == ctx->r2) {
        // 0x80228E60: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80228E8C;
    }
    // 0x80228E60: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80228E64: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x80228E68: lw          $v1, 0x20($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X20);
    // 0x80228E6C: lhu         $a0, 0x46($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X46);
    // 0x80228E70: lhu         $a1, 0x4E($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X4E);
    // 0x80228E74: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228E78: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228E7C: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80228E80: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x80228E84: j           L_80228E90
    // 0x80228E88: sh          $a0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r4;
        goto L_80228E90;
    // 0x80228E88: sh          $a0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r4;
L_80228E8C:
    // 0x80228E8C: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
L_80228E90:
    // 0x80228E90: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x80228E94: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x80228E98: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x80228E9C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80228EA0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228EA4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228EA8: jal         0x8004DD04
    // 0x80228EAC: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    func_8004DD04_29104(rdram, ctx);
        goto after_4;
    // 0x80228EAC: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    after_4:
L_80228EB0:
    // 0x80228EB0: jal         0x80040F30
    // 0x80228EB4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x80228EB4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x80228EB8: beq         $v0, $zero, L_80228F80
    if (ctx->r2 == 0) {
        // 0x80228EBC: sw          $v0, 0x48($s2)
        MEM_W(0X48, ctx->r18) = ctx->r2;
            goto L_80228F80;
    }
    // 0x80228EBC: sw          $v0, 0x48($s2)
    MEM_W(0X48, ctx->r18) = ctx->r2;
    // 0x80228EC0: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80228EC4: beq         $v0, $zero, L_80228ED4
    if (ctx->r2 == 0) {
        // 0x80228EC8: addiu       $a0, $zero, 0xDE
        ctx->r4 = ADD32(0, 0XDE);
            goto L_80228ED4;
    }
    // 0x80228EC8: addiu       $a0, $zero, 0xDE
    ctx->r4 = ADD32(0, 0XDE);
    // 0x80228ECC: jal         0x8002A33C
    // 0x80228ED0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x80228ED0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_6:
L_80228ED4:
    // 0x80228ED4: lw          $v1, 0x48($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X48);
    // 0x80228ED8: andi        $v0, $v1, 0x100
    ctx->r2 = ctx->r3 & 0X100;
    // 0x80228EDC: beql        $v0, $zero, L_80228EF8
    if (ctx->r2 == 0) {
        // 0x80228EE0: andi        $v0, $v1, 0x200
        ctx->r2 = ctx->r3 & 0X200;
            goto L_80228EF8;
    }
    goto skip_2;
    // 0x80228EE0: andi        $v0, $v1, 0x200
    ctx->r2 = ctx->r3 & 0X200;
    skip_2:
    // 0x80228EE4: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x80228EE8: bltzl       $v0, L_80228EF0
    if (SIGNED(ctx->r2) < 0) {
        // 0x80228EEC: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80228EF0;
    }
    goto skip_3;
    // 0x80228EEC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_3:
L_80228EF0:
    // 0x80228EF0: j           L_80228F0C
    // 0x80228EF4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
        goto L_80228F0C;
    // 0x80228EF4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_80228EF8:
    // 0x80228EF8: beq         $v0, $zero, L_80228F10
    if (ctx->r2 == 0) {
        // 0x80228EFC: nop
    
            goto L_80228F10;
    }
    // 0x80228EFC: nop

    // 0x80228F00: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x80228F04: bltzl       $v0, L_80228F0C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80228F08: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80228F0C;
    }
    goto skip_4;
    // 0x80228F08: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_4:
L_80228F0C:
    // 0x80228F0C: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_80228F10:
    // 0x80228F10: lw          $v1, 0x48($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X48);
    // 0x80228F14: andi        $v0, $v1, 0x400
    ctx->r2 = ctx->r3 & 0X400;
    // 0x80228F18: beq         $v0, $zero, L_80228F38
    if (ctx->r2 == 0) {
        // 0x80228F1C: andi        $v0, $v1, 0x800
        ctx->r2 = ctx->r3 & 0X800;
            goto L_80228F38;
    }
    // 0x80228F1C: andi        $v0, $v1, 0x800
    ctx->r2 = ctx->r3 & 0X800;
    // 0x80228F20: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x80228F24: bltzl       $v0, L_80228F2C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80228F28: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80228F2C;
    }
    goto skip_5;
    // 0x80228F28: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_5:
L_80228F2C:
    // 0x80228F2C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80228F30: j           L_80228F80
    // 0x80228F34: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
        goto L_80228F80;
    // 0x80228F34: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
L_80228F38:
    // 0x80228F38: beq         $v0, $zero, L_80228F80
    if (ctx->r2 == 0) {
        // 0x80228F3C: nop
    
            goto L_80228F80;
    }
    // 0x80228F3C: nop

    // 0x80228F40: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x80228F44: bltzl       $v0, L_80228F4C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80228F48: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80228F4C;
    }
    goto skip_6;
    // 0x80228F48: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_6:
L_80228F4C:
    // 0x80228F4C: j           L_80228F80
    // 0x80228F50: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
        goto L_80228F80;
    // 0x80228F50: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
L_80228F54:
    // 0x80228F54: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x80228F58: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228F5C: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x80228F60: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228F64: bgez        $v0, L_80228F80
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228F68: nop
    
            goto L_80228F80;
    }
    // 0x80228F68: nop

    // 0x80228F6C: sh          $zero, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = 0;
    // 0x80228F70: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80228F74: sh          $zero, 0x38($s2)
    MEM_H(0X38, ctx->r18) = 0;
    // 0x80228F78: ori         $v0, $v0, 0x41
    ctx->r2 = ctx->r2 | 0X41;
L_80228F7C:
    // 0x80228F7C: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_80228F80:
    // 0x80228F80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80228F84: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228F88: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228F8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228F90: jr          $ra
    // 0x80228F94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228F94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225560_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225560: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225564: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225568: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x8022556C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225570: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225574: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225578: lw          $v0, 0x694($at)
    ctx->r2 = MEM_W(ctx->r1, 0X694);
    // 0x8022557C: jalr        $v0
    // 0x80225580: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225580: nop

    after_0:
    // 0x80225584: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225588: jr          $ra
    // 0x8022558C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022558C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225490_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225490: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225494: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225498: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022549C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802254A0: jal         0x8006033C
    // 0x802254A4: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802254A4: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_0:
    // 0x802254A8: beq         $v0, $zero, L_802254C0
    if (ctx->r2 == 0) {
        // 0x802254AC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802254C0;
    }
    // 0x802254AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802254B0: jal         0x80060690
    // 0x802254B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x802254B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x802254B8: j           L_80225524
    // 0x802254BC: nop

        goto L_80225524;
    // 0x802254BC: nop

L_802254C0:
    // 0x802254C0: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802254C4: beq         $v1, $v0, L_802254FC
    if (ctx->r3 == ctx->r2) {
        // 0x802254C8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802254FC;
    }
    // 0x802254C8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802254CC: beq         $v0, $zero, L_80225524
    if (ctx->r2 == 0) {
        // 0x802254D0: nop
    
            goto L_80225524;
    }
    // 0x802254D0: nop

    // 0x802254D4: bne         $v1, $zero, L_80225524
    if (ctx->r3 != 0) {
        // 0x802254D8: nop
    
            goto L_80225524;
    }
    // 0x802254D8: nop

    // 0x802254DC: jal         0x8006033C
    // 0x802254E0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802254E0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_2:
    // 0x802254E4: bne         $v0, $zero, L_80225520
    if (ctx->r2 != 0) {
        // 0x802254E8: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225520;
    }
    // 0x802254E8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802254EC: jal         0x802258F8
    // 0x802254F0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_802258F8_ovl4(rdram, ctx);
        goto after_3;
    // 0x802254F0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x802254F4: j           L_80225520
    // 0x802254F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80225520;
    // 0x802254F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802254FC:
    // 0x802254FC: jal         0x8006033C
    // 0x80225500: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80225500: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    after_4:
    // 0x80225504: beq         $v0, $zero, L_80225524
    if (ctx->r2 == 0) {
        // 0x80225508: nop
    
            goto L_80225524;
    }
    // 0x80225508: nop

    // 0x8022550C: jal         0x80060690
    // 0x80225510: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_80060690_3BA90(rdram, ctx);
        goto after_5;
    // 0x80225510: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_5:
    // 0x80225514: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225518: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022551C: sb          $zero, -0x3A4C($at)
    MEM_B(-0X3A4C, ctx->r1) = 0;
L_80225520:
    // 0x80225520: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225524:
    // 0x80225524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225528: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022552C: jr          $ra
    // 0x80225530: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225530: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231E08_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231E08: lbu         $v1, 0xAC($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XAC);
    // 0x80231E0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231E10: beq         $v1, $v0, L_80231E1C
    if (ctx->r3 == ctx->r2) {
        // 0x80231E14: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231E1C;
    }
    // 0x80231E14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231E18: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
L_80231E1C:
    // 0x80231E1C: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x80231E20: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80231E24: sb          $v1, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r3;
    // 0x80231E28: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80231E2C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80231E30: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80231E34: jr          $ra
    // 0x80231E38: sh          $v0, 0x384($a0)
    MEM_H(0X384, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80231E38: sh          $v0, 0x384($a0)
    MEM_H(0X384, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8022CE54_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CE54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CE58: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CE5C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022CE60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022CE64: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022CE68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CE6C: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022CE70: beq         $v1, $zero, L_8022CE8C
    if (ctx->r3 == 0) {
        // 0x8022CE74: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_8022CE8C;
    }
    // 0x8022CE74: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x8022CE78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CE7C: beq         $v1, $v0, L_8022CEC8
    if (ctx->r3 == ctx->r2) {
        // 0x8022CE80: nop
    
            goto L_8022CEC8;
    }
    // 0x8022CE80: nop

    // 0x8022CE84: j           L_8022D038
    // 0x8022CE88: nop

        goto L_8022D038;
    // 0x8022CE88: nop

L_8022CE8C:
    // 0x8022CE8C: lhu         $v1, 0x348($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X348);
    // 0x8022CE90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CE94: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022CE98: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022CE9C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022CEA0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022CEA4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022CEA8: sh          $v0, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = ctx->r2;
    // 0x8022CEAC: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x8022CEB0: sh          $v0, 0x34C($s1)
    MEM_H(0X34C, ctx->r17) = ctx->r2;
    // 0x8022CEB4: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x8022CEB8: sh          $v0, 0x34E($s1)
    MEM_H(0X34E, ctx->r17) = ctx->r2;
    // 0x8022CEBC: sh          $zero, 0x350($s1)
    MEM_H(0X350, ctx->r17) = 0;
    // 0x8022CEC0: andi        $v1, $v1, 0xFFDF
    ctx->r3 = ctx->r3 & 0XFFDF;
    // 0x8022CEC4: sh          $v1, 0x348($s1)
    MEM_H(0X348, ctx->r17) = ctx->r3;
L_8022CEC8:
    // 0x8022CEC8: lhu         $v0, 0x6($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X6);
    // 0x8022CECC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CED0: sh          $v0, 0x6($s2)
    MEM_H(0X6, ctx->r18) = ctx->r2;
    // 0x8022CED4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CED8: bgez        $v0, L_8022CEF0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022CEDC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022CEF0;
    }
    // 0x8022CEDC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022CEE0: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x8022CEE4: sh          $v0, 0x6($s2)
    MEM_H(0X6, ctx->r18) = ctx->r2;
    // 0x8022CEE8: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022CEEC: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_8022CEF0:
    // 0x8022CEF0: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022CEF4: lhu         $v1, 0x66($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X66);
    // 0x8022CEF8: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x8022CEFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CF00: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022CF04: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022CF08: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022CF0C: jal         0x8004DA90
    // 0x8022CF10: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022CF10: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022CF14: lhu         $v0, 0x44($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X44);
    // 0x8022CF18: lhu         $v1, 0x4C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4C);
    // 0x8022CF1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022CF20: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022CF24: jal         0x80040F30
    // 0x8022CF28: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022CF28: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022CF2C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022CF30: jal         0x8003E934
    // 0x8022CF34: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022CF34: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_2:
    // 0x8022CF38: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022CF3C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CF40: andi        $s0, $s0, 0xF00
    ctx->r16 = ctx->r16 & 0XF00;
    // 0x8022CF44: beq         $s0, $zero, L_8022CF7C
    if (ctx->r16 == 0) {
        // 0x8022CF48: sw          $v0, 0x20($s1)
        MEM_W(0X20, ctx->r17) = ctx->r2;
            goto L_8022CF7C;
    }
    // 0x8022CF48: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022CF4C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022CF50: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022CF54: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x8022CF58: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022CF5C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022CF60: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022CF64: jal         0x8009A3B4
    // 0x8022CF68: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022CF68: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    after_3:
    // 0x8022CF6C: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022CF70: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x8022CF74: jal         0x8009A3B4
    // 0x8022CF78: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022CF78: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
L_8022CF7C:
    // 0x8022CF7C: lh          $a1, 0x16($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X16);
    // 0x8022CF80: lh          $v0, 0x2E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X2E);
    // 0x8022CF84: subu        $v1, $a1, $v0
    ctx->r3 = SUB32(ctx->r5, ctx->r2);
    // 0x8022CF88: slti        $a0, $v1, 0x21
    ctx->r4 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
    // 0x8022CF8C: bne         $a0, $zero, L_8022CFC4
    if (ctx->r4 != 0) {
        // 0x8022CF90: nop
    
            goto L_8022CFC4;
    }
    // 0x8022CF90: nop

    // 0x8022CF94: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022CF98: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x8022CF9C: jal         0x8009A3B4
    // 0x8022CFA0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022CFA0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022CFA4: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022CFA8: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x8022CFAC: jal         0x8009A3B4
    // 0x8022CFB0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022CFB0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x8022CFB4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022CFB8: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022CFBC: j           L_8022D038
    // 0x8022CFC0: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
        goto L_8022D038;
    // 0x8022CFC0: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_8022CFC4:
    // 0x8022CFC4: bltzl       $v1, L_8022CFDC
    if (SIGNED(ctx->r3) < 0) {
        // 0x8022CFC8: subu        $v0, $v0, $a1
        ctx->r2 = SUB32(ctx->r2, ctx->r5);
            goto L_8022CFDC;
    }
    goto skip_0;
    // 0x8022CFC8: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    skip_0:
    // 0x8022CFCC: beq         $a0, $zero, L_8022CFE8
    if (ctx->r4 == 0) {
        // 0x8022CFD0: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022CFE8;
    }
    // 0x8022CFD0: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022CFD4: j           L_8022D014
    // 0x8022CFD8: nop

        goto L_8022D014;
    // 0x8022CFD8: nop

L_8022CFDC:
    // 0x8022CFDC: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022CFE0: bne         $v0, $zero, L_8022D014
    if (ctx->r2 != 0) {
        // 0x8022CFE4: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022D014;
    }
    // 0x8022CFE4: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
L_8022CFE8:
    // 0x8022CFE8: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022CFEC: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x8022CFF0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022CFF4: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022CFF8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022CFFC: jal         0x8009A3B4
    // 0x8022D000: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022D000: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    after_7:
    // 0x8022D004: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022D008: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x8022D00C: jal         0x8009A3B4
    // 0x8022D010: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022D010: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_8:
L_8022D014:
    // 0x8022D014: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022D018: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D01C: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022D020: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D024: bgez        $v0, L_8022D038
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D028: nop
    
            goto L_8022D038;
    }
    // 0x8022D028: nop

    // 0x8022D02C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022D030: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022D034: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8022D038:
    // 0x8022D038: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D03C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D040: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D044: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D048: jr          $ra
    // 0x8022D04C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D04C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225EB0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225EB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225EB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225EB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225EBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225EC0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80225EC4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225EC8: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80225ECC: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80225ED0: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80225ED4: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80225ED8: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80225EDC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225EE0: jal         0x8004D5D4
    // 0x80225EE4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80225EE4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80225EE8: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80225EEC: sw          $zero, 0x32C($s0)
    MEM_W(0X32C, ctx->r16) = 0;
    // 0x80225EF0: sw          $zero, 0x330($s0)
    MEM_W(0X330, ctx->r16) = 0;
    // 0x80225EF4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80225EF8: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80225EFC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80225F00: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80225F04: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80225F08: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80225F0C: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x80225F10: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    // 0x80225F14: sw          $zero, 0x33C($s0)
    MEM_W(0X33C, ctx->r16) = 0;
    // 0x80225F18: sw          $zero, 0x340($s0)
    MEM_W(0X340, ctx->r16) = 0;
    // 0x80225F1C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80225F20: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80225F24: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80225F28: lbu         $a1, 0xF($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XF);
    // 0x80225F2C: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x80225F30: jal         0x800540BC
    // 0x80225F34: addiu       $a0, $s0, 0x34C
    ctx->r4 = ADD32(ctx->r16, 0X34C);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x80225F34: addiu       $a0, $s0, 0x34C
    ctx->r4 = ADD32(ctx->r16, 0X34C);
    after_1:
    // 0x80225F38: lbu         $a0, 0xD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XD);
    // 0x80225F3C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80225F40: sh          $zero, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = 0;
    // 0x80225F44: sh          $zero, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = 0;
    // 0x80225F48: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x80225F4C: jal         0x80053ED8
    // 0x80225F50: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_2;
    // 0x80225F50: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    after_2:
    // 0x80225F54: sw          $v0, 0x368($s0)
    MEM_W(0X368, ctx->r16) = ctx->r2;
    // 0x80225F58: jal         0x80053ED8
    // 0x80225F5C: lbu         $a0, 0xD($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XD);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_3;
    // 0x80225F5C: lbu         $a0, 0xD($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XD);
    after_3:
    // 0x80225F60: lw          $v1, 0x368($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X368);
    // 0x80225F64: sw          $v0, 0x36C($s0)
    MEM_W(0X36C, ctx->r16) = ctx->r2;
    // 0x80225F68: jal         0x80053ED8
    // 0x80225F6C: lbu         $a0, 0xE($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0XE);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_4;
    // 0x80225F6C: lbu         $a0, 0xE($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0XE);
    after_4:
    // 0x80225F70: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80225F74: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80225F78: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80225F7C: sw          $v0, 0x370($s0)
    MEM_W(0X370, ctx->r16) = ctx->r2;
    // 0x80225F80: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80225F84: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80225F88: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80225F8C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225F90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225F94: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x80225F98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225F9C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225FA0: addiu       $v0, $v0, 0x75C
    ctx->r2 = ADD32(ctx->r2, 0X75C);
    // 0x80225FA4: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80225FA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225FAC: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80225FB0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80225FB4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80225FB8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80225FBC: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80225FC0: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x80225FC4: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x80225FC8: jal         0x80050294
    // 0x80225FCC: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80225FCC: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    after_5:
    // 0x80225FD0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80225FD4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80225FD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225FDC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225FE0: jr          $ra
    // 0x80225FE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225FE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225534_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225534: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225538: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022553C: jal         0x8006033C
    // 0x80225540: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225540: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_0:
    // 0x80225544: beq         $v0, $zero, L_80225554
    if (ctx->r2 == 0) {
        // 0x80225548: nop
    
            goto L_80225554;
    }
    // 0x80225548: nop

    // 0x8022554C: jal         0x80060690
    // 0x80225550: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x80225550: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_80225554:
    // 0x80225554: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225558: jr          $ra
    // 0x8022555C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022555C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233974_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233974: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80233978: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8023397C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80233980: addiu       $a0, $s1, 0x504
    ctx->r4 = ADD32(ctx->r17, 0X504);
    // 0x80233984: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80233988: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8023398C: addiu       $s2, $s1, 0x4E0
    ctx->r18 = ADD32(ctx->r17, 0X4E0);
    // 0x80233990: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80233994: jal         0x800540D0
    // 0x80233998: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x80233998: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023399C: beq         $v0, $zero, L_802339B0
    if (ctx->r2 == 0) {
        // 0x802339A0: nop
    
            goto L_802339B0;
    }
    // 0x802339A0: nop

    // 0x802339A4: lhu         $v0, 0x4E0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4E0);
    // 0x802339A8: j           L_802339B8
    // 0x802339AC: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
        goto L_802339B8;
    // 0x802339AC: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
L_802339B0:
    // 0x802339B0: lhu         $v0, 0x4E0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4E0);
    // 0x802339B4: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
L_802339B8:
    // 0x802339B8: sh          $v0, 0x4E0($s1)
    MEM_H(0X4E0, ctx->r17) = ctx->r2;
    // 0x802339BC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802339C0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802339C4: beq         $v0, $zero, L_802339D4
    if (ctx->r2 == 0) {
        // 0x802339C8: nop
    
            goto L_802339D4;
    }
    // 0x802339C8: nop

    // 0x802339CC: jal         0x80235D04
    // 0x802339D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80235D04_ovl4(rdram, ctx);
        goto after_1;
    // 0x802339D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
L_802339D4:
    // 0x802339D4: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x802339D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802339DC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802339E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802339E4: lw          $v0, 0xC24($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC24);
    // 0x802339E8: jalr        $v0
    // 0x802339EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x802339EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x802339F0: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802339F4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802339F8: beq         $v0, $zero, L_80233A60
    if (ctx->r2 == 0) {
        // 0x802339FC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80233A60;
    }
    // 0x802339FC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80233A00: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80233A04: beq         $v1, $v0, L_80233A3C
    if (ctx->r3 == ctx->r2) {
        // 0x80233A08: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_80233A3C;
    }
    // 0x80233A08: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x80233A0C: beq         $v0, $zero, L_80233A24
    if (ctx->r2 == 0) {
        // 0x80233A10: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80233A24;
    }
    // 0x80233A10: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80233A14: beq         $v1, $v0, L_80233A30
    if (ctx->r3 == ctx->r2) {
        // 0x80233A18: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80233A30;
    }
    // 0x80233A18: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80233A1C: j           L_80233A4C
    // 0x80233A20: nop

        goto L_80233A4C;
    // 0x80233A20: nop

L_80233A24:
    // 0x80233A24: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80233A28: bne         $v1, $v0, L_80233A4C
    if (ctx->r3 != ctx->r2) {
        // 0x80233A2C: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80233A4C;
    }
    // 0x80233A2C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80233A30:
    // 0x80233A30: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x80233A34: j           L_80233A50
    // 0x80233A38: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80233A50;
    // 0x80233A38: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80233A3C:
    // 0x80233A3C: lh          $v0, 0x6E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6E);
    // 0x80233A40: bgtz        $v0, L_80233A4C
    if (SIGNED(ctx->r2) > 0) {
        // 0x80233A44: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80233A4C;
    }
    // 0x80233A44: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80233A48: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80233A4C:
    // 0x80233A4C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80233A50:
    // 0x80233A50: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x80233A54: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80233A58: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80233A5C: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_80233A60:
    // 0x80233A60: lh          $v0, 0xA($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XA);
    // 0x80233A64: beq         $v0, $zero, L_80233A74
    if (ctx->r2 == 0) {
        // 0x80233A68: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80233A74;
    }
    // 0x80233A68: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80233A6C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80233A70: sh          $v0, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r2;
L_80233A74:
    // 0x80233A74: lh          $v0, 0x3C($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X3C);
    // 0x80233A78: beq         $v0, $zero, L_80233A88
    if (ctx->r2 == 0) {
        // 0x80233A7C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80233A88;
    }
    // 0x80233A7C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80233A80: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80233A84: sh          $v0, 0x3C($s2)
    MEM_H(0X3C, ctx->r18) = ctx->r2;
L_80233A88:
    // 0x80233A88: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80233A8C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80233A90: beq         $v0, $zero, L_80233AA8
    if (ctx->r2 == 0) {
        // 0x80233A94: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80233AA8;
    }
    // 0x80233A94: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80233A98: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80233A9C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80233AA0: jal         0x8003B564
    // 0x80233AA4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_3;
    // 0x80233AA4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
L_80233AA8:
    // 0x80233AA8: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80233AAC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233AB0: beql        $v0, $zero, L_80233B1C
    if (ctx->r2 == 0) {
        // 0x80233AB4: sw          $zero, 0x14($s2)
        MEM_W(0X14, ctx->r18) = 0;
            goto L_80233B1C;
    }
    goto skip_0;
    // 0x80233AB4: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
    skip_0:
    // 0x80233AB8: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80233ABC: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80233AC0: beq         $v0, $zero, L_80233B18
    if (ctx->r2 == 0) {
        // 0x80233AC4: addiu       $s0, $s2, 0xC
        ctx->r16 = ADD32(ctx->r18, 0XC);
            goto L_80233B18;
    }
    // 0x80233AC4: addiu       $s0, $s2, 0xC
    ctx->r16 = ADD32(ctx->r18, 0XC);
    // 0x80233AC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233ACC: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x80233AD0: jal         0x8009A3B4
    // 0x80233AD4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80233AD4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80233AD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233ADC: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    // 0x80233AE0: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80233AE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233AE8: addiu       $v0, $s2, 0x14
    ctx->r2 = ADD32(ctx->r18, 0X14);
    // 0x80233AEC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80233AF0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80233AF4: lhu         $v1, 0x8($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8);
    // 0x80233AF8: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80233AFC: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80233B00: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80233B04: lui         $v0, 0x488
    ctx->r2 = S32(0X488 << 16);
    // 0x80233B08: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80233B0C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80233B10: jal         0x80051E18
    // 0x80233B14: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_5;
    // 0x80233B14: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_5:
L_80233B18:
    // 0x80233B18: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
L_80233B1C:
    // 0x80233B1C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80233B20: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80233B24: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80233B28: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80233B2C: jr          $ra
    // 0x80233B30: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80233B30: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8022DFC8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DFC8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8022DFCC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8022DFD0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DFD4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8022DFD8: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8022DFDC: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8022DFE0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022DFE4: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022DFE8: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022DFEC: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x8022DFF0: beq         $v0, $zero, L_8022E360
    if (ctx->r2 == 0) {
        // 0x8022DFF4: addiu       $s2, $s0, 0x308
        ctx->r18 = ADD32(ctx->r16, 0X308);
            goto L_8022E360;
    }
    // 0x8022DFF4: addiu       $s2, $s0, 0x308
    ctx->r18 = ADD32(ctx->r16, 0X308);
    // 0x8022DFF8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022DFFC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E000: addu        $at, $at, $v0
    gpr jr_addend_8022E008 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E004: lw          $v0, 0x15F0($at)
    ctx->r2 = ADD32(ctx->r1, 0X15F0);
    // 0x8022E008: jr          $v0
    // 0x8022E00C: nop

    switch (jr_addend_8022E008 >> 2) {
        case 0: goto L_8022E010; break;
        case 1: goto L_8022E024; break;
        case 2: goto L_8022E070; break;
        case 3: goto L_8022E09C; break;
        case 4: goto L_8022E0F4; break;
        case 5: goto L_8022E100; break;
        case 6: goto L_8022E300; break;
        case 7: goto L_8022E148; break;
        case 8: goto L_8022E2A4; break;
        case 9: goto L_8022E300; break;
        case 10: goto L_8022E328; break;
        default: switch_error(__func__, 0x8022E008, 0x802415F0);
    }
    // 0x8022E00C: nop

L_8022E010:
    // 0x8022E010: jal         0x8022DE4C
    // 0x8022E014: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022DE4C_ovl4(rdram, ctx);
        goto after_0;
    // 0x8022E014: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022E018: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E01C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E020: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022E024:
    // 0x8022E024: jal         0x8022E7B0
    // 0x8022E028: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022E7B0_ovl4(rdram, ctx);
        goto after_1;
    // 0x8022E028: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022E02C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022E030: beq         $v0, $zero, L_8022E04C
    if (ctx->r2 == 0) {
        // 0x8022E034: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E04C;
    }
    // 0x8022E034: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E038: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E03C: jal         0x80050294
    // 0x8022E040: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022E040: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022E044: j           L_8022E064
    // 0x8022E048: nop

        goto L_8022E064;
    // 0x8022E048: nop

L_8022E04C:
    // 0x8022E04C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022E050: jal         0x80050294
    // 0x8022E054: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022E054: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x8022E058: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022E05C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022E060: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8022E064:
    // 0x8022E064: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E068: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E06C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022E070:
    // 0x8022E070: lw          $v0, 0x184($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X184);
    // 0x8022E074: bne         $v0, $s0, L_8022E364
    if (ctx->r2 != ctx->r16) {
        // 0x8022E078: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E364;
    }
    // 0x8022E078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E07C: jal         0x8022E7F8
    // 0x8022E080: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022E7F8_ovl4(rdram, ctx);
        goto after_4;
    // 0x8022E080: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022E084: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022E088: beql        $v0, $zero, L_8022E360
    if (ctx->r2 == 0) {
        // 0x8022E08C: sw          $zero, 0x184($s1)
        MEM_W(0X184, ctx->r17) = 0;
            goto L_8022E360;
    }
    goto skip_0;
    // 0x8022E08C: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    skip_0:
    // 0x8022E090: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E094: j           L_8022E35C
    // 0x8022E098: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022E35C;
    // 0x8022E098: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022E09C:
    // 0x8022E09C: jal         0x8006FF84
    // 0x8022E0A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_5;
    // 0x8022E0A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8022E0A4: beq         $v0, $zero, L_8022E360
    if (ctx->r2 == 0) {
        // 0x8022E0A8: addiu       $a0, $zero, 0x3FE
        ctx->r4 = ADD32(0, 0X3FE);
            goto L_8022E360;
    }
    // 0x8022E0A8: addiu       $a0, $zero, 0x3FE
    ctx->r4 = ADD32(0, 0X3FE);
    // 0x8022E0AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022E0B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022E0B4: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8022E0B8: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022E0BC: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8022E0C0: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x8022E0C4: jal         0x8004CB2C
    // 0x8022E0C8: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_6;
    // 0x8022E0C8: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    after_6:
    // 0x8022E0CC: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E0D0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022E0D4: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x8022E0D8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022E0DC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022E0E0: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x8022E0E4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022E0E8: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
    // 0x8022E0EC: j           L_8022E360
    // 0x8022E0F0: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
        goto L_8022E360;
    // 0x8022E0F0: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
L_8022E0F4:
    // 0x8022E0F4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E0F8: j           L_8022E35C
    // 0x8022E0FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022E35C;
    // 0x8022E0FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022E100:
    // 0x8022E100: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022E104: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022E108: bne         $v0, $zero, L_8022E130
    if (ctx->r2 != 0) {
        // 0x8022E10C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E130;
    }
    // 0x8022E10C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E110: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022E114: jal         0x80050294
    // 0x8022E118: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x8022E118: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8022E11C: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    // 0x8022E120: jal         0x8002A33C
    // 0x8022E124: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x8022E124: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_8:
    // 0x8022E128: j           L_8022E13C
    // 0x8022E12C: nop

        goto L_8022E13C;
    // 0x8022E12C: nop

L_8022E130:
    // 0x8022E130: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E134: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E138: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022E13C:
    // 0x8022E13C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E140: j           L_8022E35C
    // 0x8022E144: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022E35C;
    // 0x8022E144: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022E148:
    // 0x8022E148: jal         0x8022E7B0
    // 0x8022E14C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022E7B0_ovl4(rdram, ctx);
        goto after_9;
    // 0x8022E14C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8022E150: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022E154: beql        $v0, $zero, L_8022E288
    if (ctx->r2 == 0) {
        // 0x8022E158: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_8022E288;
    }
    goto skip_1;
    // 0x8022E158: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    skip_1:
    // 0x8022E15C: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022E160: bne         $v1, $zero, L_8022E184
    if (ctx->r3 != 0) {
        // 0x8022E164: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8022E184;
    }
    // 0x8022E164: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8022E168: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E16C: lb          $a3, 0xE($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XE);
    // 0x8022E170: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022E174: jal         0x800610AC
    // 0x8022E178: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_10;
    // 0x8022E178: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x8022E17C: j           L_8022E298
    // 0x8022E180: nop

        goto L_8022E298;
    // 0x8022E180: nop

L_8022E184:
    // 0x8022E184: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E188: bnel        $v1, $v0, L_8022E1AC
    if (ctx->r3 != ctx->r2) {
        // 0x8022E18C: andi        $v0, $v1, 0x80
        ctx->r2 = ctx->r3 & 0X80;
            goto L_8022E1AC;
    }
    goto skip_2;
    // 0x8022E18C: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    skip_2:
    // 0x8022E190: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E194: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022E198: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E19C: jal         0x800610AC
    // 0x8022E1A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_11;
    // 0x8022E1A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_11:
    // 0x8022E1A4: j           L_8022E298
    // 0x8022E1A8: nop

        goto L_8022E298;
    // 0x8022E1A8: nop

L_8022E1AC:
    // 0x8022E1AC: beq         $v0, $zero, L_8022E210
    if (ctx->r2 == 0) {
        // 0x8022E1B0: lui         $a0, 0x6666
        ctx->r4 = S32(0X6666 << 16);
            goto L_8022E210;
    }
    // 0x8022E1B0: lui         $a0, 0x6666
    ctx->r4 = S32(0X6666 << 16);
    // 0x8022E1B4: ori         $a0, $a0, 0x6667
    ctx->r4 = ctx->r4 | 0X6667;
    // 0x8022E1B8: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x8022E1BC: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x8022E1C0: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022E1C4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022E1C8: sll         $a2, $v0, 2
    ctx->r6 = S32(ctx->r2 << 2);
    // 0x8022E1CC: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022E1D0: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x8022E1D4: mult        $a2, $a0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E1D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022E1DC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022E1E0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8022E1E4: sra         $a2, $a2, 31
    ctx->r6 = S32(SIGNED(ctx->r6) >> 31);
    // 0x8022E1E8: mfhi        $t0
    ctx->r8 = hi;
    // 0x8022E1EC: sra         $v0, $t0, 2
    ctx->r2 = S32(SIGNED(ctx->r8) >> 2);
    // 0x8022E1F0: nop

    // 0x8022E1F4: jal         0x80069754
    // 0x8022E1F8: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
    func_80069754_44B54(rdram, ctx);
        goto after_12;
    // 0x8022E1F8: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
    after_12:
    // 0x8022E1FC: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8022E200: jal         0x8006036C
    // 0x8022E204: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_13;
    // 0x8022E204: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_13:
    // 0x8022E208: j           L_8022E298
    // 0x8022E20C: nop

        goto L_8022E298;
    // 0x8022E20C: nop

L_8022E210:
    // 0x8022E210: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022E214: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022E218: beq         $v1, $v0, L_8022E284
    if (ctx->r3 == ctx->r2) {
        // 0x8022E21C: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_8022E284;
    }
    // 0x8022E21C: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x8022E220: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022E224: xori        $v1, $v0, 0x40
    ctx->r3 = ctx->r2 ^ 0X40;
    // 0x8022E228: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022E22C: xori        $v0, $v0, 0x42
    ctx->r2 = ctx->r2 ^ 0X42;
    // 0x8022E230: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022E234: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022E238: beq         $v1, $zero, L_8022E258
    if (ctx->r3 == 0) {
        // 0x8022E23C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022E258;
    }
    // 0x8022E23C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E240: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022E244: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E248: jal         0x800610AC
    // 0x8022E24C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_14;
    // 0x8022E24C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    after_14:
    // 0x8022E250: j           L_8022E26C
    // 0x8022E254: nop

        goto L_8022E26C;
    // 0x8022E254: nop

L_8022E258:
    // 0x8022E258: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8022E25C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E260: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x8022E264: jal         0x80069754
    // 0x8022E268: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_15;
    // 0x8022E268: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_15:
L_8022E26C:
    // 0x8022E26C: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8022E270: jal         0x8006036C
    // 0x8022E274: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_16;
    // 0x8022E274: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_16:
    // 0x8022E278: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x8022E27C: j           L_8022E298
    // 0x8022E280: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
        goto L_8022E298;
    // 0x8022E280: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
L_8022E284:
    // 0x8022E284: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_8022E288:
    // 0x8022E288: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022E28C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E290: jal         0x80069754
    // 0x8022E294: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_17;
    // 0x8022E294: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_17:
L_8022E298:
    // 0x8022E298: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E29C: j           L_8022E35C
    // 0x8022E2A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022E35C;
    // 0x8022E2A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022E2A4:
    // 0x8022E2A4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022E2A8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022E2AC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022E2B0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022E2B4: bne         $v0, $zero, L_8022E364
    if (ctx->r2 != 0) {
        // 0x8022E2B8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E364;
    }
    // 0x8022E2B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E2BC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022E2C0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022E2C4: bne         $v0, $zero, L_8022E2E8
    if (ctx->r2 != 0) {
        // 0x8022E2C8: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_8022E2E8;
    }
    // 0x8022E2C8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022E2CC: jal         0x80050294
    // 0x8022E2D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_18;
    // 0x8022E2D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_18:
    // 0x8022E2D4: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    // 0x8022E2D8: jal         0x8002A33C
    // 0x8022E2DC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_19;
    // 0x8022E2DC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_19:
    // 0x8022E2E0: j           L_8022E2F4
    // 0x8022E2E4: nop

        goto L_8022E2F4;
    // 0x8022E2E4: nop

L_8022E2E8:
    // 0x8022E2E8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E2EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E2F0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022E2F4:
    // 0x8022E2F4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E2F8: j           L_8022E35C
    // 0x8022E2FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022E35C;
    // 0x8022E2FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022E300:
    // 0x8022E300: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022E304: bgez        $v0, L_8022E318
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022E308: nop
    
            goto L_8022E318;
    }
    // 0x8022E308: nop

    // 0x8022E30C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E310: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E314: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022E318:
    // 0x8022E318: jal         0x8005044C
    // 0x8022E31C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_20;
    // 0x8022E31C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_20:
    // 0x8022E320: j           L_8022E364
    // 0x8022E324: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8022E364;
    // 0x8022E324: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022E328:
    // 0x8022E328: addiu       $a0, $zero, 0x3FE
    ctx->r4 = ADD32(0, 0X3FE);
    // 0x8022E32C: jal         0x8004CB2C
    // 0x8022E330: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_21;
    // 0x8022E330: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_21:
    // 0x8022E334: jal         0x80070050
    // 0x8022E338: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_22;
    // 0x8022E338: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_22:
    // 0x8022E33C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022E340: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x8022E344: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022E348: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022E34C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022E350: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x8022E354: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x8022E358: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022E35C:
    // 0x8022E35C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022E360:
    // 0x8022E360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022E364:
    // 0x8022E364: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022E368: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E36C: jal         0x80047284
    // 0x8022E370: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_23;
    // 0x8022E370: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_23:
    // 0x8022E374: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E378: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022E37C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E380: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022E384: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022E388: addiu       $v0, $s2, 0x18
    ctx->r2 = ADD32(ctx->r18, 0X18);
    // 0x8022E38C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022E390: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8022E394: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022E398: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022E39C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022E3A0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022E3A4: jal         0x80051E18
    // 0x8022E3A8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_24;
    // 0x8022E3A8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_24:
    // 0x8022E3AC: sw          $zero, 0x18($s2)
    MEM_W(0X18, ctx->r18) = 0;
    // 0x8022E3B0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8022E3B4: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8022E3B8: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8022E3BC: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8022E3C0: jr          $ra
    // 0x8022E3C4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8022E3C4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_802391BC_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802391BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802391C0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802391C4: lw          $v1, 0xF0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XF0);
    // 0x802391C8: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x802391CC: beq         $v0, $zero, L_802391E4
    if (ctx->r2 == 0) {
        // 0x802391D0: andi        $v0, $v1, 0x4
        ctx->r2 = ctx->r3 & 0X4;
            goto L_802391E4;
    }
    // 0x802391D0: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x802391D4: jal         0x80239204
    // 0x802391D8: nop

    func_80239204_ovl4(rdram, ctx);
        goto after_0;
    // 0x802391D8: nop

    after_0:
    // 0x802391DC: j           L_802391F8
    // 0x802391E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802391F8;
    // 0x802391E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802391E4:
    // 0x802391E4: beq         $v0, $zero, L_802391F8
    if (ctx->r2 == 0) {
        // 0x802391E8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802391F8;
    }
    // 0x802391E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802391EC: jal         0x80239260
    // 0x802391F0: nop

    func_80239260_ovl4(rdram, ctx);
        goto after_1;
    // 0x802391F0: nop

    after_1:
    // 0x802391F4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_802391F8:
    // 0x802391F8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802391FC: jr          $ra
    // 0x80239200: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239200: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226424_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226424: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80226428: beq         $v1, $zero, L_80226444
    if (ctx->r3 == 0) {
        // 0x8022642C: addiu       $a1, $a0, 0x328
        ctx->r5 = ADD32(ctx->r4, 0X328);
            goto L_80226444;
    }
    // 0x8022642C: addiu       $a1, $a0, 0x328
    ctx->r5 = ADD32(ctx->r4, 0X328);
    // 0x80226430: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226434: beq         $v1, $v0, L_8022645C
    if (ctx->r3 == ctx->r2) {
        // 0x80226438: nop
    
            goto L_8022645C;
    }
    // 0x80226438: nop

    // 0x8022643C: j           L_80226480
    // 0x80226440: nop

        goto L_80226480;
    // 0x80226440: nop

L_80226444:
    // 0x80226444: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226448: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022644C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80226450: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x80226454: sh          $v0, 0x32C($a0)
    MEM_H(0X32C, ctx->r4) = ctx->r2;
    // 0x80226458: sh          $zero, 0x330($a0)
    MEM_H(0X330, ctx->r4) = 0;
L_8022645C:
    // 0x8022645C: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80226460: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226464: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80226468: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022646C: bgez        $v0, L_80226480
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226470: nop
    
            goto L_80226480;
    }
    // 0x80226470: nop

    // 0x80226474: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80226478: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022647C: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80226480:
    // 0x80226480: jr          $ra
    // 0x80226484: nop

    TRACE_RETURN()
    return;
    // 0x80226484: nop

;}
RECOMP_FUNC void func_8023CA40_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023CA40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023CA44: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023CA48: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023CA4C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023CA50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023CA54: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8023CA58: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023CA5C: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8023CA60: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023CA64: bne         $v0, $zero, L_8023CA94
    if (ctx->r2 != 0) {
        // 0x8023CA68: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_8023CA94;
    }
    // 0x8023CA68: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8023CA6C: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8023CA70: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    // 0x8023CA74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023CA78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023CA7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023CA80: jal         0x8002A2F8
    // 0x8023CA84: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x8023CA84: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    after_0:
    // 0x8023CA88: jal         0x80060590
    // 0x8023CA8C: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    func_80060590_3B990(rdram, ctx);
        goto after_1;
    // 0x8023CA8C: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    after_1:
    // 0x8023CA90: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
L_8023CA94:
    // 0x8023CA94: jal         0x8002C678
    // 0x8023CA98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C678_7A78(rdram, ctx);
        goto after_2;
    // 0x8023CA98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023CA9C: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8023CAA0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023CAA4: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x8023CAA8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023CAAC: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8023CAB0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023CAB4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023CAB8: jal         0x800319B4
    // 0x8023CABC: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_3;
    // 0x8023CABC: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    after_3:
    // 0x8023CAC0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023CAC4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023CAC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023CACC: jr          $ra
    // 0x8023CAD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023CAD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023408C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023408C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80234090: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80234094: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80234098: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8023409C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x802340A0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x802340A4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x802340A8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802340AC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802340B0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802340B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802340B8: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x802340BC: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x802340C0: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x802340C4: beq         $v1, $zero, L_802340E0
    if (ctx->r3 == 0) {
        // 0x802340C8: addiu       $s0, $s1, 0x4E0
        ctx->r16 = ADD32(ctx->r17, 0X4E0);
            goto L_802340E0;
    }
    // 0x802340C8: addiu       $s0, $s1, 0x4E0
    ctx->r16 = ADD32(ctx->r17, 0X4E0);
    // 0x802340CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802340D0: beq         $v1, $v0, L_802340FC
    if (ctx->r3 == ctx->r2) {
        // 0x802340D4: nop
    
            goto L_802340FC;
    }
    // 0x802340D4: nop

    // 0x802340D8: j           L_80234320
    // 0x802340DC: nop

        goto L_80234320;
    // 0x802340DC: nop

L_802340E0:
    // 0x802340E0: lhu         $v0, 0x4E6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4E6);
    // 0x802340E4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802340E8: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x802340EC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802340F0: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
    // 0x802340F4: sh          $zero, 0x4E8($s1)
    MEM_H(0X4E8, ctx->r17) = 0;
    // 0x802340F8: sh          $v0, 0x4E4($s1)
    MEM_H(0X4E4, ctx->r17) = ctx->r2;
L_802340FC:
    // 0x802340FC: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80234100: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80234104: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80234108: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023410C: bltz        $v0, L_80234138
    if (SIGNED(ctx->r2) < 0) {
        // 0x80234110: lui         $v1, 0x200
        ctx->r3 = S32(0X200 << 16);
            goto L_80234138;
    }
    // 0x80234110: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80234114: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80234118: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023411C: bne         $v0, $zero, L_80234138
    if (ctx->r2 != 0) {
        // 0x80234120: lui         $v0, 0x4
        ctx->r2 = S32(0X4 << 16);
            goto L_80234138;
    }
    // 0x80234120: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x80234124: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x80234128: ori         $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 | 0X7FFF;
    // 0x8023412C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80234130: bne         $v0, $zero, L_80234148
    if (ctx->r2 != 0) {
        // 0x80234134: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80234148;
    }
    // 0x80234134: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_80234138:
    // 0x80234138: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023413C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80234140: j           L_80234320
    // 0x80234144: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
        goto L_80234320;
    // 0x80234144: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_80234148:
    // 0x80234148: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x8023414C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80234150: jal         0x8004DA90
    // 0x80234154: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80234154: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80234158: jal         0x80040F30
    // 0x8023415C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8023415C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80234160: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234164: jal         0x8003E934
    // 0x80234168: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x80234168: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    after_2:
    // 0x8023416C: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80234170: lh          $a0, 0x16($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X16);
    // 0x80234174: lh          $v1, 0x2E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X2E);
    // 0x80234178: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023417C: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80234180: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80234184: bltz        $v0, L_8023419C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80234188: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8023419C;
    }
    // 0x80234188: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8023418C: beq         $v0, $zero, L_802341B0
    if (ctx->r2 == 0) {
        // 0x80234190: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_802341B0;
    }
    // 0x80234190: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80234194: j           L_802341F0
    // 0x80234198: andi        $v0, $s2, 0xF00
    ctx->r2 = ctx->r18 & 0XF00;
        goto L_802341F0;
    // 0x80234198: andi        $v0, $s2, 0xF00
    ctx->r2 = ctx->r18 & 0XF00;
L_8023419C:
    // 0x8023419C: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x802341A0: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x802341A4: bne         $v0, $zero, L_802341F0
    if (ctx->r2 != 0) {
        // 0x802341A8: andi        $v0, $s2, 0xF00
        ctx->r2 = ctx->r18 & 0XF00;
            goto L_802341F0;
    }
    // 0x802341A8: andi        $v0, $s2, 0xF00
    ctx->r2 = ctx->r18 & 0XF00;
    // 0x802341AC: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
L_802341B0:
    // 0x802341B0: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x802341B4: lbu         $v1, 0xAD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XAD);
    // 0x802341B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802341BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802341C0: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x802341C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802341C8: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x802341CC: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x802341D0: jal         0x8009A3B4
    // 0x802341D4: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x802341D4: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
    after_3:
    // 0x802341D8: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x802341DC: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x802341E0: jal         0x8009A3B4
    // 0x802341E4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802341E4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x802341E8: j           L_8023424C
    // 0x802341EC: nop

        goto L_8023424C;
    // 0x802341EC: nop

L_802341F0:
    // 0x802341F0: beq         $v0, $zero, L_80234208
    if (ctx->r2 == 0) {
        // 0x802341F4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80234208;
    }
    // 0x802341F4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802341F8: lbu         $v1, 0xAD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XAD);
    // 0x802341FC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80234200: j           L_80234240
    // 0x80234204: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80234240;
    // 0x80234204: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80234208:
    // 0x80234208: addiu       $a0, $s3, 0x1C
    ctx->r4 = ADD32(ctx->r19, 0X1C);
    // 0x8023420C: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    // 0x80234210: lh          $a1, 0x56($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X56);
    // 0x80234214: lh          $v1, 0x56($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X56);
    // 0x80234218: addiu       $a3, $s1, 0x1C
    ctx->r7 = ADD32(ctx->r17, 0X1C);
    // 0x8023421C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80234220: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80234224: jal         0x8004FC28
    // 0x80234228: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FC28_2B028(rdram, ctx);
        goto after_5;
    // 0x80234228: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_5:
    // 0x8023422C: beq         $v0, $zero, L_80234258
    if (ctx->r2 == 0) {
        // 0x80234230: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80234258;
    }
    // 0x80234230: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80234234: lbu         $v1, 0xAD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XAD);
    // 0x80234238: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8023423C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80234240:
    // 0x80234240: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x80234244: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x80234248: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
L_8023424C:
    // 0x8023424C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80234250: j           L_80234320
    // 0x80234254: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
        goto L_80234320;
    // 0x80234254: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
L_80234258:
    // 0x80234258: lb          $v1, 0xA6($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XA6);
    // 0x8023425C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234260: bne         $v1, $v0, L_80234320
    if (ctx->r3 != ctx->r2) {
        // 0x80234264: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_80234320;
    }
    // 0x80234264: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x80234268: addiu       $s7, $zero, 0x5
    ctx->r23 = ADD32(0, 0X5);
    // 0x8023426C: addiu       $s6, $zero, 0x80
    ctx->r22 = ADD32(0, 0X80);
    // 0x80234270: addiu       $s5, $zero, 0x42
    ctx->r21 = ADD32(0, 0X42);
    // 0x80234274: addiu       $s4, $s1, 0x14
    ctx->r20 = ADD32(ctx->r17, 0X14);
    // 0x80234278: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x8023427C: addiu       $s2, $s2, 0xD08
    ctx->r18 = ADD32(ctx->r18, 0XD08);
L_80234280:
    // 0x80234280: jal         0x8004F144
    // 0x80234284: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_6;
    // 0x80234284: nop

    after_6:
    // 0x80234288: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023428C: beq         $s0, $zero, L_802342EC
    if (ctx->r16 == 0) {
        // 0x80234290: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802342EC;
    }
    // 0x80234290: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234294: sb          $s7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r23;
    // 0x80234298: sb          $s6, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r22;
    // 0x8023429C: sb          $s5, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r21;
    // 0x802342A0: lh          $a1, 0x0($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X0);
    // 0x802342A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802342A8: jal         0x8004DA90
    // 0x802342AC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_7;
    // 0x802342AC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
    // 0x802342B0: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x802342B4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x802342B8: jal         0x8009A3B4
    // 0x802342BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x802342BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x802342C0: jal         0x8003E934
    // 0x802342C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_9;
    // 0x802342C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x802342C8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x802342CC: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x802342D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802342D4: jal         0x8009A3B4
    // 0x802342D8: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x802342D8: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    after_10:
    // 0x802342DC: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x802342E0: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x802342E4: jal         0x8009A3B4
    // 0x802342E8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x802342E8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_11:
L_802342EC:
    // 0x802342EC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802342F0: slti        $v0, $s3, 0x3
    ctx->r2 = SIGNED(ctx->r19) < 0X3 ? 1 : 0;
    // 0x802342F4: bne         $v0, $zero, L_80234280
    if (ctx->r2 != 0) {
        // 0x802342F8: addiu       $s2, $s2, 0x2
        ctx->r18 = ADD32(ctx->r18, 0X2);
            goto L_80234280;
    }
    // 0x802342F8: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x802342FC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x80234300: addiu       $a1, $zero, 0x7D0
    ctx->r5 = ADD32(0, 0X7D0);
    // 0x80234304: addiu       $a2, $zero, 0x1388
    ctx->r6 = ADD32(0, 0X1388);
    // 0x80234308: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x8023430C: jal         0x8003491C
    // 0x80234310: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003491C_FD1C(rdram, ctx);
        goto after_12;
    // 0x80234310: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_12:
    // 0x80234314: addiu       $a0, $zero, 0xC2
    ctx->r4 = ADD32(0, 0XC2);
    // 0x80234318: jal         0x8002A33C
    // 0x8023431C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_13;
    // 0x8023431C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_13:
L_80234320:
    // 0x80234320: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80234324: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80234328: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8023432C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80234330: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80234334: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80234338: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023433C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80234340: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80234344: jr          $ra
    // 0x80234348: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80234348: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022FDC0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FDC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FDC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022FDC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FDCC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022FDD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022FDD4: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022FDD8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022FDDC: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x8022FDE0: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8022FDE4: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022FDE8: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8022FDEC: addiu       $a3, $a3, 0x49CC
    ctx->r7 = ADD32(ctx->r7, 0X49CC);
    // 0x8022FDF0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022FDF4: jal         0x8004FAEC
    // 0x8022FDF8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_0;
    // 0x8022FDF8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x8022FDFC: beq         $v0, $zero, L_8022FE10
    if (ctx->r2 == 0) {
        // 0x8022FE00: nop
    
            goto L_8022FE10;
    }
    // 0x8022FE00: nop

    // 0x8022FE04: lbu         $v0, 0x1DE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1DE);
    // 0x8022FE08: bne         $v0, $zero, L_8022FE8C
    if (ctx->r2 != 0) {
        // 0x8022FE0C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022FE8C;
    }
    // 0x8022FE0C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_8022FE10:
    // 0x8022FE10: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022FE14: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022FE18: bne         $v1, $v0, L_8022FE5C
    if (ctx->r3 != ctx->r2) {
        // 0x8022FE1C: nop
    
            goto L_8022FE5C;
    }
    // 0x8022FE1C: nop

    // 0x8022FE20: lbu         $v0, 0x1DE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1DE);
    // 0x8022FE24: bne         $v0, $zero, L_8022FE5C
    if (ctx->r2 != 0) {
        // 0x8022FE28: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022FE5C;
    }
    // 0x8022FE28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FE2C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022FE30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FE34: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022FE38: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022FE3C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022FE40: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022FE44: jal         0x80050294
    // 0x8022FE48: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022FE48: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022FE4C: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022FE50: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8022FE54: j           L_8022FF14
    // 0x8022FE58: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
        goto L_8022FF14;
    // 0x8022FE58: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
L_8022FE5C:
    // 0x8022FE5C: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022FE60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FE64: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022FE68: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    // 0x8022FE6C: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x8022FE70: sb          $v1, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r3;
    // 0x8022FE74: sb          $zero, 0xCB($a0)
    MEM_B(0XCB, ctx->r4) = 0;
    // 0x8022FE78: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8022FE7C: jal         0x8022FF24
    // 0x8022FE80: sb          $v0, 0xCA($a0)
    MEM_B(0XCA, ctx->r4) = ctx->r2;
    func_8022FF24_ovl4(rdram, ctx);
        goto after_2;
    // 0x8022FE80: sb          $v0, 0xCA($a0)
    MEM_B(0XCA, ctx->r4) = ctx->r2;
    after_2:
    // 0x8022FE84: j           L_8022FF14
    // 0x8022FE88: nop

        goto L_8022FF14;
    // 0x8022FE88: nop

L_8022FE8C:
    // 0x8022FE8C: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    // 0x8022FE90: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x8022FE94: ori         $v1, $v1, 0x387F
    ctx->r3 = ctx->r3 | 0X387F;
    // 0x8022FE98: sltu        $v1, $v1, $a0
    ctx->r3 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x8022FE9C: bne         $v1, $zero, L_8022FF0C
    if (ctx->r3 != 0) {
        // 0x8022FEA0: sb          $v0, 0x1DE($s0)
        MEM_B(0X1DE, ctx->r16) = ctx->r2;
            goto L_8022FF0C;
    }
    // 0x8022FEA0: sb          $v0, 0x1DE($s0)
    MEM_B(0X1DE, ctx->r16) = ctx->r2;
    // 0x8022FEA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FEA8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022FEAC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022FEB0: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022FEB4: lbu         $v1, 0xCA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022FEB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FEBC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022FEC0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022FEC4: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022FEC8: jal         0x80050294
    // 0x8022FECC: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022FECC: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
    after_3:
    // 0x8022FED0: addiu       $a0, $zero, 0x15B
    ctx->r4 = ADD32(0, 0X15B);
    // 0x8022FED4: jal         0x8002A33C
    // 0x8022FED8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022FED8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_4:
    // 0x8022FEDC: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022FEE0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022FEE4: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022FEE8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FEEC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022FEF0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022FEF4: lbu         $v0, 0xC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XC);
    // 0x8022FEF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FEFC: jal         0x8023009C
    // 0x8022FF00: sh          $v0, 0xC8($a0)
    MEM_H(0XC8, ctx->r4) = ctx->r2;
    func_8023009C_ovl4(rdram, ctx);
        goto after_5;
    // 0x8022FF00: sh          $v0, 0xC8($a0)
    MEM_H(0XC8, ctx->r4) = ctx->r2;
    after_5:
    // 0x8022FF04: j           L_8022FF14
    // 0x8022FF08: nop

        goto L_8022FF14;
    // 0x8022FF08: nop

L_8022FF0C:
    // 0x8022FF0C: jal         0x8022FAB4
    // 0x8022FF10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022FAB4_ovl4(rdram, ctx);
        goto after_6;
    // 0x8022FF10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8022FF14:
    // 0x8022FF14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022FF18: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022FF1C: jr          $ra
    // 0x8022FF20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FF20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802325B8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802325B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802325BC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802325C0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802325C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802325C8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802325CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802325D0: lb          $v0, 0xA7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XA7);
    // 0x802325D4: bgez        $v0, L_80232690
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802325D8: nop
    
            goto L_80232690;
    }
    // 0x802325D8: nop

    // 0x802325DC: lh          $v0, 0x350($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X350);
    // 0x802325E0: bne         $v0, $zero, L_80232690
    if (ctx->r2 != 0) {
        // 0x802325E4: nop
    
            goto L_80232690;
    }
    // 0x802325E4: nop

    // 0x802325E8: jal         0x8004EFE4
    // 0x802325EC: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x802325EC: nop

    after_0:
    // 0x802325F0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802325F4: beq         $s1, $zero, L_80232674
    if (ctx->r17 == 0) {
        // 0x802325F8: addiu       $s0, $s1, 0x14
        ctx->r16 = ADD32(ctx->r17, 0X14);
            goto L_80232674;
    }
    // 0x802325F8: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x802325FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232600: addiu       $a1, $s2, 0x188
    ctx->r5 = ADD32(ctx->r18, 0X188);
    // 0x80232604: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80232608: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023260C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80232610: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80232614: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80232618: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023261C: jal         0x8009A3B4
    // 0x80232620: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80232620: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    after_1:
    // 0x80232624: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80232628: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x8023262C: lh          $a1, 0x18($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X18);
    // 0x80232630: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232634: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80232638: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023263C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80232640: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80232644: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80232648: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x8023264C: sw          $a1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r5;
    // 0x80232650: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x80232654: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80232658: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x8023265C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80232660: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80232664: jal         0x8004DBA0
    // 0x80232668: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_2;
    // 0x80232668: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_2:
    // 0x8023266C: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x80232670: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_80232674:
    // 0x80232674: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x80232678: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x8023267C: sh          $v1, 0x350($s2)
    MEM_H(0X350, ctx->r18) = ctx->r3;
    // 0x80232680: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80232684: sb          $v1, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r3;
    // 0x80232688: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023268C: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_80232690:
    // 0x80232690: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80232694: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80232698: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023269C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802326A0: jr          $ra
    // 0x802326A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802326A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80226A78_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226A78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226A7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226A80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226A84: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226A88: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226A8C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226A90: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226A94: addiu       $v0, $v0, 0x49B0
    ctx->r2 = ADD32(ctx->r2, 0X49B0);
    // 0x80226A98: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80226A9C: beq         $v1, $zero, L_80226AB8
    if (ctx->r3 == 0) {
        // 0x80226AA0: sw          $v0, 0x380($s0)
        MEM_W(0X380, ctx->r16) = ctx->r2;
            goto L_80226AB8;
    }
    // 0x80226AA0: sw          $v0, 0x380($s0)
    MEM_W(0X380, ctx->r16) = ctx->r2;
    // 0x80226AA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226AA8: beq         $v1, $v0, L_80226B18
    if (ctx->r3 == ctx->r2) {
        // 0x80226AAC: nop
    
            goto L_80226B18;
    }
    // 0x80226AAC: nop

    // 0x80226AB0: j           L_80226B70
    // 0x80226AB4: nop

        goto L_80226B70;
    // 0x80226AB4: nop

L_80226AB8:
    // 0x80226AB8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80226ABC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80226AC0: lw          $a1, 0x380($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X380);
    // 0x80226AC4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80226AC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226ACC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226AD0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226AD4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226AD8: jal         0x8004F820
    // 0x80226ADC: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80226ADC: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x80226AE0: lw          $v1, 0x368($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X368);
    // 0x80226AE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226AE8: sra         $v0, $v0, 18
    ctx->r2 = S32(SIGNED(ctx->r2) >> 18);
    // 0x80226AEC: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x80226AF0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226AF4: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x80226AF8: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x80226AFC: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x80226B00: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80226B04: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    // 0x80226B08: lw          $v0, 0x36C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X36C);
    // 0x80226B0C: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x80226B10: lw          $v0, 0x370($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X370);
    // 0x80226B14: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
L_80226B18:
    // 0x80226B18: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80226B1C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226B20: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80226B24: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226B28: bgez        $v0, L_80226B3C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226B2C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80226B3C;
    }
    // 0x80226B2C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80226B30: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80226B34: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80226B38: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80226B3C:
    // 0x80226B3C: lw          $a1, 0x58($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X58);
    // 0x80226B40: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x80226B44: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80226B48: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x80226B4C: bltzl       $a3, L_80226B54
    if (SIGNED(ctx->r7) < 0) {
        // 0x80226B50: negu        $a3, $a3
        ctx->r7 = SUB32(0, ctx->r7);
            goto L_80226B54;
    }
    goto skip_0;
    // 0x80226B50: negu        $a3, $a3
    ctx->r7 = SUB32(0, ctx->r7);
    skip_0:
L_80226B54:
    // 0x80226B54: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80226B58: jal         0x8004F820
    // 0x80226B5C: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80226B5C: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    after_1:
    // 0x80226B60: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80226B64: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226B68: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80226B6C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80226B70:
    // 0x80226B70: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226B74: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226B78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226B7C: jr          $ra
    // 0x80226B80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226B80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228F98_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228F98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228F9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228FA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228FA4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228FA8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228FAC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228FB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228FB4: beq         $v1, $v0, L_80229000
    if (ctx->r3 == ctx->r2) {
        // 0x80228FB8: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80229000;
    }
    // 0x80228FB8: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80228FBC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80228FC0: beql        $v0, $zero, L_80228FD8
    if (ctx->r2 == 0) {
        // 0x80228FC4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80228FD8;
    }
    goto skip_0;
    // 0x80228FC4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80228FC8: beq         $v1, $zero, L_80228FE8
    if (ctx->r3 == 0) {
        // 0x80228FCC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228FE8;
    }
    // 0x80228FCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228FD0: j           L_80229074
    // 0x80228FD4: nop

        goto L_80229074;
    // 0x80228FD4: nop

L_80228FD8:
    // 0x80228FD8: beq         $v1, $v0, L_8022902C
    if (ctx->r3 == ctx->r2) {
        // 0x80228FDC: nop
    
            goto L_8022902C;
    }
    // 0x80228FDC: nop

    // 0x80228FE0: j           L_80229074
    // 0x80228FE4: nop

        goto L_80229074;
    // 0x80228FE4: nop

L_80228FE8:
    // 0x80228FE8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228FEC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80228FF0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228FF4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80228FF8: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x80228FFC: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
L_80229000:
    // 0x80229000: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80229004: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x80229008: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022900C: bgez        $v0, L_80229020
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229010: sh          $v1, 0x4($s1)
        MEM_H(0X4, ctx->r17) = ctx->r3;
            goto L_80229020;
    }
    // 0x80229010: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x80229014: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229018: j           L_8022902C
    // 0x8022901C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022902C;
    // 0x8022901C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80229020:
    // 0x80229020: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80229024: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80229028: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022902C:
    // 0x8022902C: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x80229030: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229034: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229038: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022903C: sll         $a2, $a2, 23
    ctx->r6 = S32(ctx->r6 << 23);
    // 0x80229040: jal         0x8004DA90
    // 0x80229044: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80229044: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_0:
    // 0x80229048: jal         0x80040F30
    // 0x8022904C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022904C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80229050: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x80229054: beq         $v0, $zero, L_80229074
    if (ctx->r2 == 0) {
        // 0x80229058: nop
    
            goto L_80229074;
    }
    // 0x80229058: nop

    // 0x8022905C: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x80229060: bgez        $v0, L_80229074
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229064: nop
    
            goto L_80229074;
    }
    // 0x80229064: nop

    // 0x80229068: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022906C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80229070: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80229074:
    // 0x80229074: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229078: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022907C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229080: jr          $ra
    // 0x80229084: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229084: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80239304_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239304: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80239308: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023930C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239310: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80239314: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x80239318: lh          $v0, 0xDA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XDA);
    // 0x8023931C: bne         $v1, $v0, L_802393BC
    if (ctx->r3 != ctx->r2) {
        // 0x80239320: addiu       $a0, $s0, 0xD0
        ctx->r4 = ADD32(ctx->r16, 0XD0);
            goto L_802393BC;
    }
    // 0x80239320: addiu       $a0, $s0, 0xD0
    ctx->r4 = ADD32(ctx->r16, 0XD0);
    // 0x80239324: jal         0x800A3450
    // 0x80239328: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80239328: nop

    after_0:
    // 0x8023932C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80239330: slti        $v0, $v0, 0xE
    ctx->r2 = SIGNED(ctx->r2) < 0XE ? 1 : 0;
    // 0x80239334: beq         $v0, $zero, L_80239380
    if (ctx->r2 == 0) {
        // 0x80239338: nop
    
            goto L_80239380;
    }
    // 0x80239338: nop

    // 0x8023933C: jal         0x800A3450
    // 0x80239340: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80239340: nop

    after_1:
    // 0x80239344: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80239348: sb          $v0, 0xD1($s0)
    MEM_B(0XD1, ctx->r16) = ctx->r2;
    // 0x8023934C: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80239350: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80239354: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80239358: jal         0x800A3450
    // 0x8023935C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8023935C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    after_2:
    // 0x80239360: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80239364: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80239368: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023936C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239370: lhu         $v0, 0xE64($at)
    ctx->r2 = MEM_HU(ctx->r1, 0XE64);
    // 0x80239374: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80239378: j           L_802393A8
    // 0x8023937C: sh          $v0, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r2;
        goto L_802393A8;
    // 0x8023937C: sh          $v0, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r2;
L_80239380:
    // 0x80239380: jal         0x800A3450
    // 0x80239384: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80239384: nop

    after_3:
    // 0x80239388: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8023938C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80239390: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80239394: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80239398: lhu         $v1, 0xE64($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XE64);
    // 0x8023939C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802393A0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802393A4: sh          $v1, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r3;
L_802393A8:
    // 0x802393A8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802393AC: jal         0x80238B98
    // 0x802393B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80238B98_ovl4(rdram, ctx);
        goto after_4;
    // 0x802393B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802393B4: j           L_80239418
    // 0x802393B8: nop

        goto L_80239418;
    // 0x802393B8: nop

L_802393BC:
    // 0x802393BC: lh          $v0, 0x54($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X54);
    // 0x802393C0: beq         $v0, $zero, L_802393E8
    if (ctx->r2 == 0) {
        // 0x802393C4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802393E8;
    }
    // 0x802393C4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802393C8: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x802393CC: bne         $v0, $zero, L_802393D8
    if (ctx->r2 != 0) {
        // 0x802393D0: addiu       $v0, $v1, -0x20
        ctx->r2 = ADD32(ctx->r3, -0X20);
            goto L_802393D8;
    }
    // 0x802393D0: addiu       $v0, $v1, -0x20
    ctx->r2 = ADD32(ctx->r3, -0X20);
    // 0x802393D4: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
L_802393D8:
    // 0x802393D8: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x802393DC: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x802393E0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802393E4: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
L_802393E8:
    // 0x802393E8: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x802393EC: lh          $v0, 0xA($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XA);
    // 0x802393F0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802393F4: beq         $v0, $zero, L_80239404
    if (ctx->r2 == 0) {
        // 0x802393F8: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_80239404;
    }
    // 0x802393F8: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x802393FC: j           L_80239408
    // 0x80239400: addiu       $v0, $a0, -0x40
    ctx->r2 = ADD32(ctx->r4, -0X40);
        goto L_80239408;
    // 0x80239400: addiu       $v0, $a0, -0x40
    ctx->r2 = ADD32(ctx->r4, -0X40);
L_80239404:
    // 0x80239404: addiu       $v0, $a0, 0x40
    ctx->r2 = ADD32(ctx->r4, 0X40);
L_80239408:
    // 0x80239408: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8023940C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80239410: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80239414: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80239418:
    // 0x80239418: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023941C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80239420: jr          $ra
    // 0x80239424: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80239424: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023B3EC_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B3EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023B3F0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023B3F4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023B3F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B3FC: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8023B400: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023B404: jal         0x8002C678
    // 0x8023B408: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x8023B408: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8023B40C: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8023B410: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8023B414: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023B418: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8023B41C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023B420: jal         0x800319B4
    // 0x8023B424: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8023B424: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    after_1:
    // 0x8023B428: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8023B42C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023B430: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8023B434: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023B438: bne         $v0, $zero, L_8023B48C
    if (ctx->r2 != 0) {
        // 0x8023B43C: addiu       $a0, $zero, 0x185
        ctx->r4 = ADD32(0, 0X185);
            goto L_8023B48C;
    }
    // 0x8023B43C: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    // 0x8023B440: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8023B444: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8023B448: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023B44C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023B450: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B454: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8023B458: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8023B45C: jal         0x8002A2F8
    // 0x8023B460: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x8023B460: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    after_2:
    // 0x8023B464: jal         0x80060590
    // 0x8023B468: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x8023B468: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    after_3:
    // 0x8023B46C: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x8023B470: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    // 0x8023B474: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023B478: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023B47C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B480: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023B484: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B488: sw          $a0, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = ctx->r4;
L_8023B48C:
    // 0x8023B48C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023B490: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023B494: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B498: jr          $ra
    // 0x8023B49C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023B49C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802310F0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802310F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802310F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802310F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802310FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231100: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80231104: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80231108: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023110C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80231110: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80231114: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80231118: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8023111C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80231120: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80231124: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80231128: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8023112C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80231130: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80231134: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80231138: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8023113C: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80231140: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80231144: jal         0x8004D5D4
    // 0x80231148: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80231148: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8023114C: addiu       $a0, $s0, 0x348
    ctx->r4 = ADD32(ctx->r16, 0X348);
    // 0x80231150: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80231154: jal         0x800540BC
    // 0x80231158: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x80231158: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    after_1:
    // 0x8023115C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80231160: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80231164: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80231168: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023116C: addiu       $v1, $v1, 0xB5C
    ctx->r3 = ADD32(ctx->r3, 0XB5C);
    // 0x80231170: sw          $v1, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r3;
    // 0x80231174: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231178: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023117C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80231180: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x80231184: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80231188: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8023118C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80231190: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80231194: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80231198: sw          $zero, 0x358($s0)
    MEM_W(0X358, ctx->r16) = 0;
    // 0x8023119C: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    // 0x802311A0: sw          $zero, 0x368($s0)
    MEM_W(0X368, ctx->r16) = 0;
    // 0x802311A4: sw          $zero, 0x36C($s0)
    MEM_W(0X36C, ctx->r16) = 0;
    // 0x802311A8: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x802311AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802311B0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802311B4: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x802311B8: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x802311BC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802311C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802311C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802311C8: lbu         $v1, 0xB($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XB);
    // 0x802311CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802311D0: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x802311D4: sh          $v0, 0x37C($s0)
    MEM_H(0X37C, ctx->r16) = ctx->r2;
    // 0x802311D8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802311DC: sh          $v0, 0x37E($s0)
    MEM_H(0X37E, ctx->r16) = ctx->r2;
    // 0x802311E0: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x802311E4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802311E8: jal         0x80050294
    // 0x802311EC: sw          $v1, 0x378($s0)
    MEM_W(0X378, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x802311EC: sw          $v1, 0x378($s0)
    MEM_W(0X378, ctx->r16) = ctx->r3;
    after_2:
    // 0x802311F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802311F4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802311F8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802311FC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80231200: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80231204: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231208: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023120C: jr          $ra
    // 0x80231210: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231210: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802327A4_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802327A4: lbu         $a1, 0x9($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X9);
    // 0x802327A8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802327AC: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x802327B0: lhu         $v0, 0x348($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X348);
    // 0x802327B4: lhu         $v1, 0x34A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X34A);
    // 0x802327B8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x802327BC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802327C0: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x802327C4: addiu       $v1, $v1, 0x1E
    ctx->r3 = ADD32(ctx->r3, 0X1E);
    // 0x802327C8: sh          $v0, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r2;
    // 0x802327CC: sh          $v1, 0x34C($a0)
    MEM_H(0X34C, ctx->r4) = ctx->r3;
    // 0x802327D0: jr          $ra
    // 0x802327D4: sb          $a1, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x802327D4: sb          $a1, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80230210_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230210: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230214: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230218: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023021C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230220: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80230224: lh          $a3, 0x382($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X382);
    // 0x80230228: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023022C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80230230: jal         0x8004F820
    // 0x80230234: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80230234: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80230238: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8023023C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80230240: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80230244: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230248: bne         $v0, $zero, L_8023029C
    if (ctx->r2 != 0) {
        // 0x8023024C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8023029C;
    }
    // 0x8023024C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80230250: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230254: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80230258: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023025C: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x80230260: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80230264: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230268: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023026C: jal         0x80050294
    // 0x80230270: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80230270: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    after_1:
    // 0x80230274: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80230278: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8023027C: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80230280: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230284: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230288: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023028C: lbu         $v1, 0xB($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XB);
    // 0x80230290: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230294: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80230298: sh          $v1, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r3;
L_8023029C:
    // 0x8023029C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802302A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802302A4: jr          $ra
    // 0x802302A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802302A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802281D0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802281D0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802281D4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802281D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802281DC: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x802281E0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802281E4: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802281E8: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x802281EC: bne         $v0, $zero, L_80228218
    if (ctx->r2 != 0) {
        // 0x802281F0: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80228218;
    }
    // 0x802281F0: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x802281F4: addiu       $a0, $s0, 0x34C
    ctx->r4 = ADD32(ctx->r16, 0X34C);
    // 0x802281F8: jal         0x800540D0
    // 0x802281FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x802281FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80228200: beq         $v0, $zero, L_80228218
    if (ctx->r2 == 0) {
        // 0x80228204: nop
    
            goto L_80228218;
    }
    // 0x80228204: nop

    // 0x80228208: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022820C: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80228210: j           L_80228224
    // 0x80228214: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
        goto L_80228224;
    // 0x80228214: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_80228218:
    // 0x80228218: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022821C: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
    // 0x80228220: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80228224:
    // 0x80228224: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80228228: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022822C: beq         $v0, $zero, L_8022823C
    if (ctx->r2 == 0) {
        // 0x80228230: nop
    
            goto L_8022823C;
    }
    // 0x80228230: nop

    // 0x80228234: jal         0x80229AE0
    // 0x80228238: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80229AE0_ovl4(rdram, ctx);
        goto after_1;
    // 0x80228238: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022823C:
    // 0x8022823C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80228240: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228244: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228248: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022824C: lw          $v0, 0x78C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X78C);
    // 0x80228250: jalr        $v0
    // 0x80228254: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80228254: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80228258: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x8022825C: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
    // 0x80228260: beq         $v0, $zero, L_802282F8
    if (ctx->r2 == 0) {
        // 0x80228264: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802282F8;
    }
    // 0x80228264: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228268: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022826C: beq         $v1, $v0, L_80228284
    if (ctx->r3 == ctx->r2) {
        // 0x80228270: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80228284;
    }
    // 0x80228270: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80228274: beq         $v1, $v0, L_80228290
    if (ctx->r3 == ctx->r2) {
        // 0x80228278: nop
    
            goto L_80228290;
    }
    // 0x80228278: nop

    // 0x8022827C: j           L_802282BC
    // 0x80228280: nop

        goto L_802282BC;
    // 0x80228280: nop

L_80228284:
    // 0x80228284: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80228288: j           L_802282DC
    // 0x8022828C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802282DC;
    // 0x8022828C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80228290:
    // 0x80228290: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x80228294: slti        $v0, $v0, 0x33
    ctx->r2 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x80228298: beq         $v0, $zero, L_802282A8
    if (ctx->r2 == 0) {
        // 0x8022829C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802282A8;
    }
    // 0x8022829C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802282A0: j           L_802282DC
    // 0x802282A4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802282DC;
    // 0x802282A4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802282A8:
    // 0x802282A8: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x802282AC: bne         $v0, $zero, L_802282CC
    if (ctx->r2 != 0) {
        // 0x802282B0: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_802282CC;
    }
    // 0x802282B0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802282B4: j           L_802282D4
    // 0x802282B8: nop

        goto L_802282D4;
    // 0x802282B8: nop

L_802282BC:
    // 0x802282BC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802282C0: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x802282C4: beq         $v0, $zero, L_802282D4
    if (ctx->r2 == 0) {
        // 0x802282C8: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_802282D4;
    }
    // 0x802282C8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_802282CC:
    // 0x802282CC: j           L_802282DC
    // 0x802282D0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802282DC;
    // 0x802282D0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802282D4:
    // 0x802282D4: jal         0x80229908
    // 0x802282D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80229908_ovl4(rdram, ctx);
        goto after_3;
    // 0x802282D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_802282DC:
    // 0x802282DC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802282E0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802282E4: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x802282E8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x802282EC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802282F0: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x802282F4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_802282F8:
    // 0x802282F8: lh          $v0, 0x34($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X34);
    // 0x802282FC: beq         $v0, $zero, L_8022830C
    if (ctx->r2 == 0) {
        // 0x80228300: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022830C;
    }
    // 0x80228300: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228304: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80228308: sh          $v0, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r2;
L_8022830C:
    // 0x8022830C: lh          $v0, 0x36($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X36);
    // 0x80228310: beq         $v0, $zero, L_80228320
    if (ctx->r2 == 0) {
        // 0x80228314: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80228320;
    }
    // 0x80228314: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228318: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022831C: sh          $v0, 0x36($s1)
    MEM_H(0X36, ctx->r17) = ctx->r2;
L_80228320:
    // 0x80228320: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x80228324: beq         $v0, $zero, L_80228334
    if (ctx->r2 == 0) {
        // 0x80228328: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80228334;
    }
    // 0x80228328: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022832C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80228330: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_80228334:
    // 0x80228334: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80228338: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022833C: beq         $v0, $zero, L_802283CC
    if (ctx->r2 == 0) {
        // 0x80228340: nop
    
            goto L_802283CC;
    }
    // 0x80228340: nop

    // 0x80228344: lhu         $v0, 0x38($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X38);
    // 0x80228348: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022834C: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    // 0x80228350: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228354: bgez        $v0, L_802283CC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228358: nop
    
            goto L_802283CC;
    }
    // 0x80228358: nop

    // 0x8022835C: jal         0x8004F144
    // 0x80228360: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x80228360: nop

    after_4:
    // 0x80228364: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228368: beq         $v1, $zero, L_802283A4
    if (ctx->r3 == 0) {
        // 0x8022836C: sw          $v1, 0x40($s1)
        MEM_W(0X40, ctx->r17) = ctx->r3;
            goto L_802283A4;
    }
    // 0x8022836C: sw          $v1, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r3;
    // 0x80228370: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228374: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80228378: lw          $v1, 0x40($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X40);
    // 0x8022837C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80228380: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80228384: lw          $v1, 0x40($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X40);
    // 0x80228388: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8022838C: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80228390: lw          $a0, 0x40($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X40);
    // 0x80228394: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80228398: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022839C: jal         0x8009A3B4
    // 0x802283A0: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x802283A0: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    after_5:
L_802283A4:
    // 0x802283A4: jal         0x8004F418
    // 0x802283A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_6;
    // 0x802283A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x802283AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802283B0: lh          $a2, 0x6($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X6);
    // 0x802283B4: addiu       $s0, $a0, 0x180
    ctx->r16 = ADD32(ctx->r4, 0X180);
    // 0x802283B8: jal         0x8007A290
    // 0x802283BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8007A290_55690(rdram, ctx);
        goto after_7;
    // 0x802283BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
    // 0x802283C0: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    // 0x802283C4: jal         0x8002A33C
    // 0x802283C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x802283C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
L_802283CC:
    // 0x802283CC: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x802283D0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802283D4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802283D8: jr          $ra
    // 0x802283DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802283DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80238DB0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238DB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80238DB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238DB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238DBC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80238DC0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80238DC4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80238DC8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80238DCC: beq         $v1, $v0, L_80238E74
    if (ctx->r3 == ctx->r2) {
        // 0x80238DD0: addiu       $s1, $s0, 0xD0
        ctx->r17 = ADD32(ctx->r16, 0XD0);
            goto L_80238E74;
    }
    // 0x80238DD0: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x80238DD4: lw          $v0, 0xFC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XFC);
    // 0x80238DD8: lui         $v1, 0x3800
    ctx->r3 = S32(0X3800 << 16);
    // 0x80238DDC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80238DE0: beq         $v0, $zero, L_80238E74
    if (ctx->r2 == 0) {
        // 0x80238DE4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80238E74;
    }
    // 0x80238DE4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80238DE8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80238DEC: addiu       $a1, $s0, 0x104
    ctx->r5 = ADD32(ctx->r16, 0X104);
    // 0x80238DF0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80238DF4: jal         0x8004FEA0
    // 0x80238DF8: sh          $zero, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = 0;
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_0;
    // 0x80238DF8: sh          $zero, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = 0;
    after_0:
    // 0x80238DFC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80238E00: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80238E04: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80238E08: beq         $v0, $zero, L_80238E1C
    if (ctx->r2 == 0) {
        // 0x80238E0C: addiu       $v0, $v1, 0x800
        ctx->r2 = ADD32(ctx->r3, 0X800);
            goto L_80238E1C;
    }
    // 0x80238E0C: addiu       $v0, $v1, 0x800
    ctx->r2 = ADD32(ctx->r3, 0X800);
    // 0x80238E10: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80238E14: j           L_80238E20
    // 0x80238E18: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_80238E20;
    // 0x80238E18: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80238E1C:
    // 0x80238E1C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80238E20:
    // 0x80238E20: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x80238E24: addiu       $v0, $zero, -0x300
    ctx->r2 = ADD32(0, -0X300);
    // 0x80238E28: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80238E2C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80238E30: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80238E34: sh          $v1, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r3;
    // 0x80238E38: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80238E3C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80238E40: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80238E44: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80238E48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238E4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238E50: jal         0x8004DA90
    // 0x80238E54: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80238E54: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    after_1:
    // 0x80238E58: lhu         $v1, 0x46($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X46);
    // 0x80238E5C: lhu         $a0, 0x4E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4E);
    // 0x80238E60: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80238E64: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80238E68: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80238E6C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80238E70: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
L_80238E74:
    // 0x80238E74: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80238E78: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80238E7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238E80: jr          $ra
    // 0x80238E84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80238E84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FD00_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FD00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022FD04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022FD08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FD0C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022FD10: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022FD14: lb          $v1, 0x385($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X385);
    // 0x8022FD18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FD1C: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x8022FD20: beq         $v1, $zero, L_8022FD5C
    if (ctx->r3 == 0) {
        // 0x8022FD24: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_8022FD5C;
    }
    // 0x8022FD24: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8022FD28: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022FD2C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022FD30: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022FD34: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022FD38: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022FD3C: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x8022FD40: jal         0x8004F820
    // 0x8022FD44: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022FD44: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022FD48: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FD4C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FD50: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022FD54: j           L_8022FDAC
    // 0x8022FD58: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
        goto L_8022FDAC;
    // 0x8022FD58: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022FD5C:
    // 0x8022FD5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FD60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022FD64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FD68: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x8022FD6C: jal         0x80050294
    // 0x8022FD70: sb          $s1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r17;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022FD70: sb          $s1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r17;
    after_1:
    // 0x8022FD74: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022FD78: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022FD7C: bne         $v1, $v0, L_8022FD9C
    if (ctx->r3 != ctx->r2) {
        // 0x8022FD80: addiu       $v0, $zero, 0x1E0
        ctx->r2 = ADD32(0, 0X1E0);
            goto L_8022FD9C;
    }
    // 0x8022FD80: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
    // 0x8022FD84: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022FD88: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x8022FD8C: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x8022FD90: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x8022FD94: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    // 0x8022FD98: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
L_8022FD9C:
    // 0x8022FD9C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022FDA0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022FDA4: sb          $s1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r17;
    // 0x8022FDA8: sh          $v0, 0x382($s0)
    MEM_H(0X382, ctx->r16) = ctx->r2;
L_8022FDAC:
    // 0x8022FDAC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022FDB0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022FDB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022FDB8: jr          $ra
    // 0x8022FDBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022FDBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022E87C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E87C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022E880: lw          $v1, 0x320($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X320);
    // 0x8022E884: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022E888: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022E88C: and         $a2, $v1, $v0
    ctx->r6 = ctx->r3 & ctx->r2;
    // 0x8022E890: beq         $a2, $zero, L_8022E8DC
    if (ctx->r6 == 0) {
        // 0x8022E894: lui         $v0, 0x3800
        ctx->r2 = S32(0X3800 << 16);
            goto L_8022E8DC;
    }
    // 0x8022E894: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x8022E898: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022E89C: beq         $v0, $zero, L_8022E8DC
    if (ctx->r2 == 0) {
        // 0x8022E8A0: nop
    
            goto L_8022E8DC;
    }
    // 0x8022E8A0: nop

    // 0x8022E8A4: lhu         $v0, 0x6E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X6E);
    // 0x8022E8A8: lhu         $a0, 0x6E($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X6E);
    // 0x8022E8AC: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x8022E8B0: sh          $v0, 0x6E($a1)
    MEM_H(0X6E, ctx->r5) = ctx->r2;
    // 0x8022E8B4: lh          $v1, 0x6E($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X6E);
    // 0x8022E8B8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022E8BC: sh          $v0, 0x30A($a1)
    MEM_H(0X30A, ctx->r5) = ctx->r2;
    // 0x8022E8C0: bgtz        $v1, L_8022E8D4
    if (SIGNED(ctx->r3) > 0) {
        // 0x8022E8C4: sh          $a0, 0xB2($a1)
        MEM_H(0XB2, ctx->r5) = ctx->r4;
            goto L_8022E8D4;
    }
    // 0x8022E8C4: sh          $a0, 0xB2($a1)
    MEM_H(0XB2, ctx->r5) = ctx->r4;
    // 0x8022E8C8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022E8CC: sb          $v0, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r2;
    // 0x8022E8D0: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
L_8022E8D4:
    // 0x8022E8D4: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022E8D8: sh          $v0, 0x15E($a1)
    MEM_H(0X15E, ctx->r5) = ctx->r2;
L_8022E8DC:
    // 0x8022E8DC: jr          $ra
    // 0x8022E8E0: nop

    TRACE_RETURN()
    return;
    // 0x8022E8E0: nop

;}
RECOMP_FUNC void func_8023746C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023746C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237470: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80237474: jal         0x8004F4F8
    // 0x80237478: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80237478: nop

    after_0:
    // 0x8023747C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80237480: jr          $ra
    // 0x80237484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80237488: nop

    // 0x8023748C: nop

;}
RECOMP_FUNC void func_80233118_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233118: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023311C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233120: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233124: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233128: jal         0x8007A1B8
    // 0x8023312C: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_0;
    // 0x8023312C: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    after_0:
    // 0x80233130: jal         0x8004F418
    // 0x80233134: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x80233134: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80233138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023313C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233140: jr          $ra
    // 0x80233144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023892C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023892C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238930: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80238934: jal         0x8004F4F8
    // 0x80238938: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80238938: nop

    after_0:
    // 0x8023893C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80238940: jr          $ra
    // 0x80238944: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238944: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023CE60_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023CE60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023CE64: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023CE68: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023CE6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023CE70: addiu       $s0, $zero, 0x1F
    ctx->r16 = ADD32(0, 0X1F);
    // 0x8023CE74: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023CE78: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8023CE7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
L_8023CE80:
    // 0x8023CE80: jal         0x8004F374
    // 0x8023CE84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F374_2A774(rdram, ctx);
        goto after_0;
    // 0x8023CE84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8023CE88: beql        $v0, $zero, L_8023CE9C
    if (ctx->r2 == 0) {
        // 0x8023CE8C: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_8023CE9C;
    }
    goto skip_0;
    // 0x8023CE8C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    skip_0:
    // 0x8023CE90: sb          $s1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r17;
    // 0x8023CE94: j           L_8023CEA4
    // 0x8023CE98: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
        goto L_8023CEA4;
    // 0x8023CE98: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
L_8023CE9C:
    // 0x8023CE9C: bgez        $s0, L_8023CE80
    if (SIGNED(ctx->r16) >= 0) {
        // 0x8023CEA0: nop
    
            goto L_8023CE80;
    }
    // 0x8023CEA0: nop

L_8023CEA4:
    // 0x8023CEA4: jal         0x8004F62C
    // 0x8023CEA8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x8023CEA8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x8023CEAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023CEB0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023CEB4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023CEB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023CEBC: jr          $ra
    // 0x8023CEC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023CEC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023CEC4: nop

    // 0x8023CEC8: nop

    // 0x8023CECC: nop

;}
RECOMP_FUNC void func_80227188_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227188: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022718C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227190: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227194: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227198: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8022719C: sltiu       $v0, $a0, 0x5
    ctx->r2 = ctx->r4 < 0X5 ? 1 : 0;
    // 0x802271A0: beq         $v0, $zero, L_8022733C
    if (ctx->r2 == 0) {
        // 0x802271A4: addiu       $v1, $s0, 0x328
        ctx->r3 = ADD32(ctx->r16, 0X328);
            goto L_8022733C;
    }
    // 0x802271A4: addiu       $v1, $s0, 0x328
    ctx->r3 = ADD32(ctx->r16, 0X328);
    // 0x802271A8: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x802271AC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802271B0: addu        $at, $at, $v0
    gpr jr_addend_802271B8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802271B4: lw          $v0, 0x14E0($at)
    ctx->r2 = ADD32(ctx->r1, 0X14E0);
    // 0x802271B8: jr          $v0
    // 0x802271BC: nop

    switch (jr_addend_802271B8 >> 2) {
        case 0: goto L_802271C0; break;
        case 1: goto L_802271DC; break;
        case 2: goto L_80227250; break;
        case 3: goto L_80227274; break;
        case 4: goto L_8022729C; break;
        default: switch_error(__func__, 0x802271B8, 0x802414E0);
    }
    // 0x802271BC: nop

L_802271C0:
    // 0x802271C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802271C4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802271C8: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x802271CC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802271D0: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x802271D4: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x802271D8: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
L_802271DC:
    // 0x802271DC: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x802271E0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802271E4: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x802271E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802271EC: bgez        $v0, L_80227208
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802271F0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227208;
    }
    // 0x802271F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802271F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802271F8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802271FC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227200: j           L_80227250
    // 0x80227204: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
        goto L_80227250;
    // 0x80227204: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
L_80227208:
    // 0x80227208: addiu       $a1, $zero, -0x50
    ctx->r5 = ADD32(0, -0X50);
    // 0x8022720C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227210: jal         0x8004DA90
    // 0x80227214: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80227214: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80227218: jal         0x80040F30
    // 0x8022721C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022721C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80227220: jal         0x8003E934
    // 0x80227224: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x80227224: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80227228: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022722C: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80227230: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80227234: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227238: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022723C: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80227240: bgez        $v0, L_80227300
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227244: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_80227300;
    }
    // 0x80227244: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80227248: j           L_80227314
    // 0x8022724C: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
        goto L_80227314;
    // 0x8022724C: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
L_80227250:
    // 0x80227250: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x80227254: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227258: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x8022725C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227260: bgez        $v0, L_8022733C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227264: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022733C;
    }
    // 0x80227264: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227268: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022726C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80227270: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
L_80227274:
    // 0x80227274: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x80227278: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022727C: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x80227280: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227284: bgez        $v0, L_8022733C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227288: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022733C;
    }
    // 0x80227288: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022728C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227290: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227294: j           L_8022733C
    // 0x80227298: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
        goto L_8022733C;
    // 0x80227298: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
L_8022729C:
    // 0x8022729C: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x802272A0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802272A4: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x802272A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802272AC: bgez        $v0, L_802272C0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802272B0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802272C0;
    }
    // 0x802272B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802272B4: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x802272B8: ori         $v0, $v0, 0x21
    ctx->r2 = ctx->r2 | 0X21;
    // 0x802272BC: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_802272C0:
    // 0x802272C0: addiu       $a1, $zero, -0x80
    ctx->r5 = ADD32(0, -0X80);
    // 0x802272C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802272C8: jal         0x8004DA90
    // 0x802272CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x802272CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x802272D0: jal         0x80040F30
    // 0x802272D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_4;
    // 0x802272D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802272D8: jal         0x8003E934
    // 0x802272DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_5;
    // 0x802272DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802272E0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802272E4: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x802272E8: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x802272EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802272F0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802272F4: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x802272F8: bltz        $v0, L_80227310
    if (SIGNED(ctx->r2) < 0) {
        // 0x802272FC: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_80227310;
    }
    // 0x802272FC: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
L_80227300:
    // 0x80227300: beq         $v0, $zero, L_80227320
    if (ctx->r2 == 0) {
        // 0x80227304: nop
    
            goto L_80227320;
    }
    // 0x80227304: nop

    // 0x80227308: j           L_8022733C
    // 0x8022730C: nop

        goto L_8022733C;
    // 0x8022730C: nop

L_80227310:
    // 0x80227310: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
L_80227314:
    // 0x80227314: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80227318: bne         $v0, $zero, L_8022733C
    if (ctx->r2 != 0) {
        // 0x8022731C: nop
    
            goto L_8022733C;
    }
    // 0x8022731C: nop

L_80227320:
    // 0x80227320: lhu         $v0, 0x2E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2E);
    // 0x80227324: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x80227328: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x8022732C: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x80227330: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80227334: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80227338: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
L_8022733C:
    // 0x8022733C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227340: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227344: jr          $ra
    // 0x80227348: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227348: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239048_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239048: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023904C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239050: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80239054: jal         0x802391BC
    // 0x80239058: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_802391BC_ovl4(rdram, ctx);
        goto after_0;
    // 0x80239058: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8023905C: bne         $v0, $zero, L_802391AC
    if (ctx->r2 != 0) {
        // 0x80239060: nop
    
            goto L_802391AC;
    }
    // 0x80239060: nop

    // 0x80239064: lhu         $v0, 0xD2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XD2);
    // 0x80239068: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023906C: sh          $v0, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r2;
    // 0x80239070: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80239074: bne         $v0, $zero, L_80239114
    if (ctx->r2 != 0) {
        // 0x80239078: nop
    
            goto L_80239114;
    }
    // 0x80239078: nop

    // 0x8023907C: jal         0x800A3450
    // 0x80239080: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80239080: nop

    after_1:
    // 0x80239084: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80239088: slti        $v0, $v0, 0xE
    ctx->r2 = SIGNED(ctx->r2) < 0XE ? 1 : 0;
    // 0x8023908C: beq         $v0, $zero, L_802390D8
    if (ctx->r2 == 0) {
        // 0x80239090: nop
    
            goto L_802390D8;
    }
    // 0x80239090: nop

    // 0x80239094: jal         0x800A3450
    // 0x80239098: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80239098: nop

    after_2:
    // 0x8023909C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802390A0: sb          $v0, 0xD1($s0)
    MEM_B(0XD1, ctx->r16) = ctx->r2;
    // 0x802390A4: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x802390A8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802390AC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802390B0: jal         0x800A3450
    // 0x802390B4: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x802390B4: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    after_3:
    // 0x802390B8: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x802390BC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802390C0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802390C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802390C8: lhu         $v0, 0xE64($at)
    ctx->r2 = MEM_HU(ctx->r1, 0XE64);
    // 0x802390CC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802390D0: j           L_80239100
    // 0x802390D4: sh          $v0, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r2;
        goto L_80239100;
    // 0x802390D4: sh          $v0, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r2;
L_802390D8:
    // 0x802390D8: jal         0x800A3450
    // 0x802390DC: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x802390DC: nop

    after_4:
    // 0x802390E0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x802390E4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802390E8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802390EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802390F0: lhu         $v1, 0xE64($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XE64);
    // 0x802390F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802390F8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802390FC: sh          $v1, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r3;
L_80239100:
    // 0x80239100: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80239104: jal         0x80238B98
    // 0x80239108: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80238B98_ovl4(rdram, ctx);
        goto after_5;
    // 0x80239108: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8023910C: j           L_802391AC
    // 0x80239110: nop

        goto L_802391AC;
    // 0x80239110: nop

L_80239114:
    // 0x80239114: jal         0x800A3450
    // 0x80239118: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80239118: nop

    after_6:
    // 0x8023911C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80239120: slti        $v0, $v0, 0xA
    ctx->r2 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x80239124: bne         $v0, $zero, L_8023915C
    if (ctx->r2 != 0) {
        // 0x80239128: nop
    
            goto L_8023915C;
    }
    // 0x80239128: nop

    // 0x8023912C: lb          $v0, 0xD1($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD1);
    // 0x80239130: beq         $v0, $zero, L_80239144
    if (ctx->r2 == 0) {
        // 0x80239134: nop
    
            goto L_80239144;
    }
    // 0x80239134: nop

    // 0x80239138: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8023913C: j           L_8023914C
    // 0x80239140: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
        goto L_8023914C;
    // 0x80239140: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
L_80239144:
    // 0x80239144: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80239148: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
L_8023914C:
    // 0x8023914C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80239150: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80239154: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80239158: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8023915C:
    // 0x8023915C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80239160: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80239164: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80239168: jal         0x8004DA90
    // 0x8023916C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_7;
    // 0x8023916C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80239170: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    // 0x80239174: beq         $v0, $zero, L_802391AC
    if (ctx->r2 == 0) {
        // 0x80239178: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_802391AC;
    }
    // 0x80239178: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8023917C: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x80239180: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x80239184: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80239188: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023918C: sh          $v0, 0x10E($s0)
    MEM_H(0X10E, ctx->r16) = ctx->r2;
    // 0x80239190: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80239194: sh          $v0, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = ctx->r2;
    // 0x80239198: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023919C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802391A0: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x802391A4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802391A8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_802391AC:
    // 0x802391AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802391B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802391B4: jr          $ra
    // 0x802391B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802391B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022734C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022734C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227350: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227354: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227358: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022735C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227360: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227364: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227368: addiu       $v0, $v0, 0x49B0
    ctx->r2 = ADD32(ctx->r2, 0X49B0);
    // 0x8022736C: sw          $v0, 0x380($s0)
    MEM_W(0X380, ctx->r16) = ctx->r2;
    // 0x80227370: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80227374: beq         $v0, $zero, L_802274D8
    if (ctx->r2 == 0) {
        // 0x80227378: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_802274D8;
    }
    // 0x80227378: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022737C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227380: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227384: addu        $at, $at, $v0
    gpr jr_addend_8022738C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227388: lw          $v0, 0x14F8($at)
    ctx->r2 = ADD32(ctx->r1, 0X14F8);
    // 0x8022738C: jr          $v0
    // 0x80227390: nop

    switch (jr_addend_8022738C >> 2) {
        case 0: goto L_80227394; break;
        case 1: goto L_802273B0; break;
        case 2: goto L_802273DC; break;
        case 3: goto L_80227420; break;
        case 4: goto L_80227480; break;
        default: switch_error(__func__, 0x8022738C, 0x802414F8);
    }
    // 0x80227390: nop

L_80227394:
    // 0x80227394: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227398: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022739C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x802273A0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802273A4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802273A8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802273AC: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
L_802273B0:
    // 0x802273B0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802273B4: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x802273B8: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x802273BC: bgez        $v0, L_802273D0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802273C0: sh          $v1, 0x4($s1)
        MEM_H(0X4, ctx->r17) = ctx->r3;
            goto L_802273D0;
    }
    // 0x802273C0: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x802273C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802273C8: j           L_802273DC
    // 0x802273CC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802273DC;
    // 0x802273CC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802273D0:
    // 0x802273D0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802273D4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802273D8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_802273DC:
    // 0x802273DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802273E0: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x802273E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802273E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802273EC: sll         $a2, $a2, 23
    ctx->r6 = S32(ctx->r6 << 23);
    // 0x802273F0: jal         0x8004DA90
    // 0x802273F4: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x802273F4: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_0:
    // 0x802273F8: jal         0x80040F30
    // 0x802273FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x802273FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80227400: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x80227404: beq         $v0, $zero, L_802274D8
    if (ctx->r2 == 0) {
        // 0x80227408: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802274D8;
    }
    // 0x80227408: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022740C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227410: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80227414: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227418: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022741C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80227420:
    // 0x80227420: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80227424: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227428: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022742C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227430: bgez        $v0, L_802274D8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227434: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802274D8;
    }
    // 0x80227434: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227438: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022743C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227440: lw          $a1, 0x58($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X58);
    // 0x80227444: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227448: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022744C: jal         0x8004F820
    // 0x80227450: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80227450: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_2:
    // 0x80227454: lui         $a0, 0x5555
    ctx->r4 = S32(0X5555 << 16);
    // 0x80227458: ori         $a0, $a0, 0x5556
    ctx->r4 = ctx->r4 | 0X5556;
    // 0x8022745C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227460: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227464: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80227468: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8022746C: mfhi        $t0
    ctx->r8 = hi;
    // 0x80227470: subu        $v0, $t0, $v0
    ctx->r2 = SUB32(ctx->r8, ctx->r2);
    // 0x80227474: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x80227478: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022747C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80227480:
    // 0x80227480: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80227484: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227488: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022748C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227490: bgez        $v0, L_802274A4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227494: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802274A4;
    }
    // 0x80227494: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227498: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022749C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802274A0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_802274A4:
    // 0x802274A4: lw          $a1, 0x58($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X58);
    // 0x802274A8: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x802274AC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802274B0: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x802274B4: bltzl       $a3, L_802274BC
    if (SIGNED(ctx->r7) < 0) {
        // 0x802274B8: negu        $a3, $a3
        ctx->r7 = SUB32(0, ctx->r7);
            goto L_802274BC;
    }
    goto skip_0;
    // 0x802274B8: negu        $a3, $a3
    ctx->r7 = SUB32(0, ctx->r7);
    skip_0:
L_802274BC:
    // 0x802274BC: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x802274C0: jal         0x8004F820
    // 0x802274C4: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x802274C4: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    after_3:
    // 0x802274C8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802274CC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802274D0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802274D4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_802274D8:
    // 0x802274D8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802274DC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802274E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802274E4: jr          $ra
    // 0x802274E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802274E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80239204_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239204: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239208: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023920C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239210: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80239214: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80239218: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023921C: jal         0x8009A3B4
    // 0x80239220: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80239220: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80239224: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80239228: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8023922C: jal         0x8009A3B4
    // 0x80239230: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80239230: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80239234: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80239238: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8023923C: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x80239240: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80239244: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80239248: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023924C: sh          $v0, 0xDA($s0)
    MEM_H(0XDA, ctx->r16) = ctx->r2;
    // 0x80239250: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80239254: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239258: jr          $ra
    // 0x8023925C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023925C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E730_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E730: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E734: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E738: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E73C: jal         0x8004F144
    // 0x8022E740: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022E740: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022E744: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E748: beq         $v1, $zero, L_8022E784
    if (ctx->r3 == 0) {
        // 0x8022E74C: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8022E784;
    }
    // 0x8022E74C: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022E750: addiu       $a1, $s0, 0x310
    ctx->r5 = ADD32(ctx->r16, 0X310);
    // 0x8022E754: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022E758: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022E75C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022E760: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022E764: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022E768: jal         0x8009A3B4
    // 0x8022E76C: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022E76C: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    after_1:
    // 0x8022E770: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E774: jal         0x8007A1B8
    // 0x8022E778: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x8022E778: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8022E77C: jal         0x8004F418
    // 0x8022E780: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_3;
    // 0x8022E780: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8022E784:
    // 0x8022E784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E788: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E78C: jr          $ra
    // 0x8022E790: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E790: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802315B0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802315B0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802315B4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802315B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802315BC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802315C0: addiu       $s1, $s0, 0x360
    ctx->r17 = ADD32(ctx->r16, 0X360);
    // 0x802315C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802315C8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802315CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802315D0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x802315D4: jal         0x8009A3B4
    // 0x802315D8: sw          $zero, 0x368($s0)
    MEM_W(0X368, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802315D8: sw          $zero, 0x368($s0)
    MEM_W(0X368, ctx->r16) = 0;
    after_0:
    // 0x802315DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802315E0: lhu         $v0, 0x362($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X362);
    // 0x802315E4: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x802315E8: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x802315EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802315F0: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x802315F4: sh          $v0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r2;
    // 0x802315F8: addiu       $v0, $s0, 0x368
    ctx->r2 = ADD32(ctx->r16, 0X368);
    // 0x802315FC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80231600: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80231604: lw          $v1, 0x378($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X378);
    // 0x80231608: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8023160C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80231610: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80231614: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x80231618: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8023161C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80231620: jal         0x80051E18
    // 0x80231624: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x80231624: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x80231628: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8023162C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80231630: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80231634: jr          $ra
    // 0x80231638: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80231638: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80232430_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232430: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80232434: lb          $v0, 0xA7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XA7);
    // 0x80232438: bgez        $v0, L_80232464
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023243C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80232464;
    }
    // 0x8023243C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80232440: lhu         $v0, 0x34A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X34A);
    // 0x80232444: lbu         $a0, 0x9($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X9);
    // 0x80232448: sb          $v1, 0xAC($a1)
    MEM_B(0XAC, ctx->r5) = ctx->r3;
    // 0x8023244C: sh          $zero, 0x350($a1)
    MEM_H(0X350, ctx->r5) = 0;
    // 0x80232450: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80232454: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80232458: addiu       $v0, $v0, 0x1E
    ctx->r2 = ADD32(ctx->r2, 0X1E);
    // 0x8023245C: sh          $v0, 0x34C($a1)
    MEM_H(0X34C, ctx->r5) = ctx->r2;
    // 0x80232460: sb          $a0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r4;
L_80232464:
    // 0x80232464: jr          $ra
    // 0x80232468: nop

    TRACE_RETURN()
    return;
    // 0x80232468: nop

;}
RECOMP_FUNC void func_80239A60_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239A60: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80239A64: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80239A68: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80239A6C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80239A70: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80239A74: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80239A78: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80239A7C: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x80239A80: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80239A84: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80239A88: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80239A8C: beq         $v0, $zero, L_80239CDC
    if (ctx->r2 == 0) {
        // 0x80239A90: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80239CDC;
    }
    // 0x80239A90: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80239A94: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239A98: addu        $at, $at, $v0
    gpr jr_addend_80239AA0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239A9C: lw          $v0, 0x1718($at)
    ctx->r2 = ADD32(ctx->r1, 0X1718);
    // 0x80239AA0: jr          $v0
    // 0x80239AA4: nop

    switch (jr_addend_80239AA0 >> 2) {
        case 0: goto L_80239AA8; break;
        case 1: goto L_80239AEC; break;
        case 2: goto L_80239B9C; break;
        case 3: goto L_80239BEC; break;
        case 4: goto L_80239C8C; break;
        default: switch_error(__func__, 0x80239AA0, 0x80241718);
    }
    // 0x80239AA4: nop

L_80239AA8:
    // 0x80239AA8: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x80239AAC: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x80239AB0: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x80239AB4: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80239AB8: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80239ABC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80239AC0: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x80239AC4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80239AC8: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x80239ACC: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80239AD0: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80239AD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239AD8: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80239ADC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80239AE0: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x80239AE4: j           L_80239CDC
    // 0x80239AE8: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
        goto L_80239CDC;
    // 0x80239AE8: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_80239AEC:
    // 0x80239AEC: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x80239AF0: lb          $a0, 0xC($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XC);
    // 0x80239AF4: ori         $v1, $v1, 0xE
    ctx->r3 = ctx->r3 | 0XE;
    // 0x80239AF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239AFC: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80239B00: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80239B04: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80239B08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239B0C: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x80239B10: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80239B14: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x80239B18: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80239B1C: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x80239B20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239B24: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x80239B28: beq         $a0, $v0, L_80239B70
    if (ctx->r4 == ctx->r2) {
        // 0x80239B2C: sw          $v1, 0x14($s2)
        MEM_W(0X14, ctx->r18) = ctx->r3;
            goto L_80239B70;
    }
    // 0x80239B2C: sw          $v1, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r3;
    // 0x80239B30: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80239B34: beql        $v0, $zero, L_80239B4C
    if (ctx->r2 == 0) {
        // 0x80239B38: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80239B4C;
    }
    goto skip_0;
    // 0x80239B38: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80239B3C: beq         $a0, $zero, L_80239B5C
    if (ctx->r4 == 0) {
        // 0x80239B40: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_80239B5C;
    }
    // 0x80239B40: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80239B44: j           L_80239CDC
    // 0x80239B48: nop

        goto L_80239CDC;
    // 0x80239B48: nop

L_80239B4C:
    // 0x80239B4C: beq         $a0, $v0, L_80239B88
    if (ctx->r4 == ctx->r2) {
        // 0x80239B50: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_80239B88;
    }
    // 0x80239B50: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80239B54: j           L_80239CDC
    // 0x80239B58: nop

        goto L_80239CDC;
    // 0x80239B58: nop

L_80239B5C:
    // 0x80239B5C: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80239B60: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x80239B64: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80239B68: j           L_80239CDC
    // 0x80239B6C: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_80239CDC;
    // 0x80239B6C: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_80239B70:
    // 0x80239B70: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80239B74: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80239B78: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x80239B7C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80239B80: j           L_80239CDC
    // 0x80239B84: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_80239CDC;
    // 0x80239B84: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_80239B88:
    // 0x80239B88: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80239B8C: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x80239B90: addiu       $v0, $zero, 0x808
    ctx->r2 = ADD32(0, 0X808);
    // 0x80239B94: j           L_80239CDC
    // 0x80239B98: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_80239CDC;
    // 0x80239B98: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_80239B9C:
    // 0x80239B9C: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x80239BA0: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x80239BA4: lbu         $a0, 0x3($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X3);
    // 0x80239BA8: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x80239BAC: ori         $v1, $v1, 0x80
    ctx->r3 = ctx->r3 | 0X80;
    // 0x80239BB0: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80239BB4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80239BB8: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x80239BBC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80239BC0: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x80239BC4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80239BC8: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80239BCC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80239BD0: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
    // 0x80239BD4: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80239BD8: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x80239BDC: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x80239BE0: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80239BE4: j           L_80239CDC
    // 0x80239BE8: sb          $a0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r4;
        goto L_80239CDC;
    // 0x80239BE8: sb          $a0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r4;
L_80239BEC:
    // 0x80239BEC: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x80239BF0: ori         $v0, $v0, 0x2E
    ctx->r2 = ctx->r2 | 0X2E;
    // 0x80239BF4: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x80239BF8: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80239BFC: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x80239C00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80239C04: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80239C08: addiu       $a1, $a1, 0x1710
    ctx->r5 = ADD32(ctx->r5, 0X1710);
    // 0x80239C0C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80239C10: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80239C14: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80239C18: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x80239C1C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80239C20: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x80239C24: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80239C28: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80239C2C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80239C30: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x80239C34: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x80239C38: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x80239C3C: jal         0x8009A3B4
    // 0x80239C40: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80239C40: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    after_0:
    // 0x80239C44: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x80239C48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239C4C: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80239C50: addiu       $a1, $a1, 0x1714
    ctx->r5 = ADD32(ctx->r5, 0X1714);
    // 0x80239C54: jal         0x8009A3B4
    // 0x80239C58: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80239C58: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x80239C5C: lb          $v0, 0xC($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC);
    // 0x80239C60: lb          $v1, 0xC($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XC);
    // 0x80239C64: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x80239C68: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80239C6C: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x80239C70: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80239C74: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80239C78: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80239C7C: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80239C80: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80239C84: j           L_80239CDC
    // 0x80239C88: sb          $v1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r3;
        goto L_80239CDC;
    // 0x80239C88: sb          $v1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r3;
L_80239C8C:
    // 0x80239C8C: lui         $v0, 0x3D08
    ctx->r2 = S32(0X3D08 << 16);
    // 0x80239C90: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x80239C94: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x80239C98: lui         $a0, 0x2E00
    ctx->r4 = S32(0X2E00 << 16);
    // 0x80239C9C: ori         $a0, $a0, 0x80
    ctx->r4 = ctx->r4 | 0X80;
    // 0x80239CA0: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80239CA4: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80239CA8: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x80239CAC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80239CB0: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x80239CB4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80239CB8: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80239CBC: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80239CC0: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x80239CC4: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x80239CC8: sw          $a0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r4;
    // 0x80239CCC: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    // 0x80239CD0: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80239CD4: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x80239CD8: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
L_80239CDC:
    // 0x80239CDC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80239CE0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80239CE4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80239CE8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80239CEC: jr          $ra
    // 0x80239CF0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80239CF0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
