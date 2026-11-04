#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_802366EC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802366EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802366F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802366F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802366F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802366FC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80236700: beq         $v1, $zero, L_80236718
    if (ctx->r3 == 0) {
        // 0x80236704: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236718;
    }
    // 0x80236704: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236708: beq         $v1, $v0, L_8023674C
    if (ctx->r3 == ctx->r2) {
        // 0x8023670C: nop
    
            goto L_8023674C;
    }
    // 0x8023670C: nop

    // 0x80236710: j           L_80236760
    // 0x80236714: nop

        goto L_80236760;
    // 0x80236714: nop

L_80236718:
    // 0x80236718: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023671C: addiu       $v0, $zero, -0x1E
    ctx->r2 = ADD32(0, -0X1E);
    // 0x80236720: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80236724: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80236728: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8023672C: addiu       $v0, $zero, 0x122
    ctx->r2 = ADD32(0, 0X122);
    // 0x80236730: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80236734: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236738: jal         0x80050294
    // 0x8023673C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023673C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    after_0:
    // 0x80236740: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80236744: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236748: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023674C:
    // 0x8023674C: jal         0x8005044C
    // 0x80236750: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80236750: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80236754: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80236758: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8023675C: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_80236760:
    // 0x80236760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236764: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236768: jr          $ra
    // 0x8023676C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023676C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DBBC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DBBC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022DBC0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022DBC4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DBC8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022DBCC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DBD0: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x8022DBD4: sh          $zero, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = 0;
    // 0x8022DBD8: ori         $v0, $v0, 0x22
    ctx->r2 = ctx->r2 | 0X22;
    // 0x8022DBDC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022DBE0: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8022DBE4: bne         $v0, $zero, L_8022DC2C
    if (ctx->r2 != 0) {
        // 0x8022DBE8: andi        $v0, $v1, 0x8
        ctx->r2 = ctx->r3 & 0X8;
            goto L_8022DC2C;
    }
    // 0x8022DBE8: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x8022DBEC: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022DBF0: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x8022DBF4: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x8022DBF8: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x8022DBFC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022DC00: bne         $v0, $zero, L_8022DC14
    if (ctx->r2 != 0) {
        // 0x8022DC04: sb          $v1, 0x97($s0)
        MEM_B(0X97, ctx->r16) = ctx->r3;
            goto L_8022DC14;
    }
    // 0x8022DC04: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    // 0x8022DC08: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x8022DC0C: j           L_8022DC1C
    // 0x8022DC10: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
        goto L_8022DC1C;
    // 0x8022DC10: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_8022DC14:
    // 0x8022DC14: lui         $v0, 0x2C60
    ctx->r2 = S32(0X2C60 << 16);
    // 0x8022DC18: ori         $v0, $v0, 0x60C0
    ctx->r2 = ctx->r2 | 0X60C0;
L_8022DC1C:
    // 0x8022DC1C: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x8022DC20: lui         $v0, 0x3D08
    ctx->r2 = S32(0X3D08 << 16);
    // 0x8022DC24: j           L_8022DC7C
    // 0x8022DC28: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
        goto L_8022DC7C;
    // 0x8022DC28: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
L_8022DC2C:
    // 0x8022DC2C: bne         $v0, $zero, L_8022DC50
    if (ctx->r2 != 0) {
        // 0x8022DC30: nop
    
            goto L_8022DC50;
    }
    // 0x8022DC30: nop

    // 0x8022DC34: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022DC38: lbu         $v0, -0x6050($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X6050);
    // 0x8022DC3C: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x8022DC40: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022DC44: lbu         $v0, -0x604F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X604F);
    // 0x8022DC48: j           L_8022DC68
    // 0x8022DC4C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_8022DC68;
    // 0x8022DC4C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_8022DC50:
    // 0x8022DC50: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022DC54: lbu         $v0, -0x6044($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X6044);
    // 0x8022DC58: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x8022DC5C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022DC60: lbu         $v0, -0x6043($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X6043);
    // 0x8022DC64: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_8022DC68:
    // 0x8022DC68: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x8022DC6C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022DC70: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x8022DC74: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x8022DC78: sw          $v1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r3;
L_8022DC7C:
    // 0x8022DC7C: sw          $v0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r2;
    // 0x8022DC80: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022DC84: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x8022DC88: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022DC8C: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x8022DC90: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022DC94: sh          $v1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r3;
    // 0x8022DC98: sh          $a0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r4;
    // 0x8022DC9C: bne         $v0, $zero, L_8022DCC8
    if (ctx->r2 != 0) {
        // 0x8022DCA0: sh          $a1, 0x94($s0)
        MEM_H(0X94, ctx->r16) = ctx->r5;
            goto L_8022DCC8;
    }
    // 0x8022DCA0: sh          $a1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r5;
    // 0x8022DCA4: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022DCA8: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x8022DCAC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022DCB0: bne         $v0, $zero, L_8022DCC0
    if (ctx->r2 != 0) {
        // 0x8022DCB4: sh          $v1, 0x98($s0)
        MEM_H(0X98, ctx->r16) = ctx->r3;
            goto L_8022DCC0;
    }
    // 0x8022DCB4: sh          $v1, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r3;
    // 0x8022DCB8: j           L_8022DCD4
    // 0x8022DCBC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_8022DCD4;
    // 0x8022DCBC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022DCC0:
    // 0x8022DCC0: j           L_8022DCD4
    // 0x8022DCC4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
        goto L_8022DCD4;
    // 0x8022DCC4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_8022DCC8:
    // 0x8022DCC8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022DCCC: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x8022DCD0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022DCD4:
    // 0x8022DCD4: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8022DCD8: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022DCDC: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8022DCE0: bne         $v0, $zero, L_8022DCEC
    if (ctx->r2 != 0) {
        // 0x8022DCE4: addiu       $v0, $zero, 0x4B
        ctx->r2 = ADD32(0, 0X4B);
            goto L_8022DCEC;
    }
    // 0x8022DCE4: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x8022DCE8: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
L_8022DCEC:
    // 0x8022DCEC: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8022DCF0: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x8022DCF4: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022DCF8: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x8022DCFC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022DD00: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022DD04: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022DD08: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x8022DD0C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022DD10: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022DD14: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022DD18: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022DD1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DD20: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x8022DD24: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022DD28: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8022DD2C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022DD30: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022DD34: jal         0x80051E18
    // 0x8022DD38: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x8022DD38: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x8022DD3C: jal         0x8003F754
    // 0x8022DD40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_1;
    // 0x8022DD40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022DD44: bne         $v0, $zero, L_8022DD54
    if (ctx->r2 != 0) {
        // 0x8022DD48: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022DD54;
    }
    // 0x8022DD48: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DD4C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022DD50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022DD54:
    // 0x8022DD54: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022DD58: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022DD5C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022DD60: jr          $ra
    // 0x8022DD64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022DD64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80233844_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233844: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80233848: bne         $v0, $zero, L_80233860
    if (ctx->r2 != 0) {
        // 0x8023384C: addiu       $v1, $zero, 0xD
        ctx->r3 = ADD32(0, 0XD);
            goto L_80233860;
    }
    // 0x8023384C: addiu       $v1, $zero, 0xD
    ctx->r3 = ADD32(0, 0XD);
    // 0x80233850: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80233854: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80233858: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x8023385C: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80233860:
    // 0x80233860: jr          $ra
    // 0x80233864: nop

    TRACE_RETURN()
    return;
    // 0x80233864: nop

;}
RECOMP_FUNC void func_80231360_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231360: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231364: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231368: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8023136C: bne         $v0, $zero, L_8023138C
    if (ctx->r2 != 0) {
        // 0x80231370: nop
    
            goto L_8023138C;
    }
    // 0x80231370: nop

    // 0x80231374: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80231378: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023137C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231380: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231384: j           L_802313A0
    // 0x80231388: lw          $v0, -0x5E18($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5E18);
        goto L_802313A0;
    // 0x80231388: lw          $v0, -0x5E18($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5E18);
L_8023138C:
    // 0x8023138C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80231390: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231394: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231398: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023139C: lw          $v0, -0x5E20($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5E20);
L_802313A0:
    // 0x802313A0: jalr        $v0
    // 0x802313A4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802313A4: nop

    after_0:
    // 0x802313A8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802313AC: jr          $ra
    // 0x802313B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802313B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237EDC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237EDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237EE0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237EE4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237EE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237EEC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80237EF0: beq         $v1, $zero, L_80237F08
    if (ctx->r3 == 0) {
        // 0x80237EF4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80237F08;
    }
    // 0x80237EF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237EF8: beq         $v1, $v0, L_80237F2C
    if (ctx->r3 == ctx->r2) {
        // 0x80237EFC: nop
    
            goto L_80237F2C;
    }
    // 0x80237EFC: nop

    // 0x80237F00: j           L_80237F34
    // 0x80237F04: nop

        goto L_80237F34;
    // 0x80237F04: nop

L_80237F08:
    // 0x80237F08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237F0C: addiu       $v0, $zero, -0x300
    ctx->r2 = ADD32(0, -0X300);
    // 0x80237F10: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x80237F14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237F18: jal         0x80050294
    // 0x80237F1C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80237F1C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x80237F20: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80237F24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237F28: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80237F2C:
    // 0x80237F2C: jal         0x8005044C
    // 0x80237F30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80237F30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80237F34:
    // 0x80237F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237F38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237F3C: jr          $ra
    // 0x80237F40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237F40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F164_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F164: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F168: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F16C: jal         0x8004F4F8
    // 0x8022F170: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x8022F170: nop

    after_0:
    // 0x8022F174: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F178: jr          $ra
    // 0x8022F17C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F17C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802315E4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802315E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802315E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802315EC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802315F0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802315F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802315F8: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x802315FC: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80231600: beq         $v0, $zero, L_802316B8
    if (ctx->r2 == 0) {
        // 0x80231604: andi        $v0, $v1, 0x3
        ctx->r2 = ctx->r3 & 0X3;
            goto L_802316B8;
    }
    // 0x80231604: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x80231608: bne         $v0, $zero, L_8023169C
    if (ctx->r2 != 0) {
        // 0x8023160C: nop
    
            goto L_8023169C;
    }
    // 0x8023160C: nop

    // 0x80231610: jal         0x8004F144
    // 0x80231614: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80231614: nop

    after_0:
    // 0x80231618: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023161C: beq         $s0, $zero, L_8023169C
    if (ctx->r16 == 0) {
        // 0x80231620: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023169C;
    }
    // 0x80231620: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80231624: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80231628: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8023162C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80231630: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80231634: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80231638: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x8023163C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231640: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80231644: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80231648: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8023164C: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x80231650: lhu         $v0, 0x20($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X20);
    // 0x80231654: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x80231658: lhu         $v0, 0x1C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1C);
    // 0x8023165C: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x80231660: ori         $v1, $v1, 0x4E
    ctx->r3 = ctx->r3 | 0X4E;
    // 0x80231664: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x80231668: lhu         $a0, 0x1E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X1E);
    // 0x8023166C: lui         $v0, 0x2E40
    ctx->r2 = S32(0X2E40 << 16);
    // 0x80231670: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
    // 0x80231674: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80231678: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023167C: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    // 0x80231680: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x80231684: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x80231688: jal         0x800A3450
    // 0x8023168C: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8023168C: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    after_1:
    // 0x80231690: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80231694: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231698: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_8023169C:
    // 0x8023169C: jal         0x800A3450
    // 0x802316A0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x802316A0: nop

    after_2:
    // 0x802316A4: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x802316A8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802316AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802316B0: j           L_802316C0
    // 0x802316B4: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
        goto L_802316C0;
    // 0x802316B4: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
L_802316B8:
    // 0x802316B8: jal         0x8004F5C4
    // 0x802316BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_3;
    // 0x802316BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
L_802316C0:
    // 0x802316C0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802316C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802316C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802316CC: jr          $ra
    // 0x802316D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802316D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233378_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233378: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023337C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233380: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80233384: bne         $v0, $zero, L_8023339C
    if (ctx->r2 != 0) {
        // 0x80233388: addiu       $v0, $zero, 0x83
        ctx->r2 = ADD32(0, 0X83);
            goto L_8023339C;
    }
    // 0x80233388: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x8023338C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233390: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80233394: jal         0x802340E8
    // 0x80233398: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_802340E8_ovl27(rdram, ctx);
        goto after_0;
    // 0x80233398: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
L_8023339C:
    // 0x8023339C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802333A0: jal         0x80234148
    // 0x802333A4: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80234148_ovl27(rdram, ctx);
        goto after_1;
    // 0x802333A4: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_1:
    // 0x802333A8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802333AC: jr          $ra
    // 0x802333B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802333B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E7E4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E7E4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8022E7E8: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8022E7EC: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x8022E7F0: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8022E7F4: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x8022E7F8: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8022E7FC: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8022E800: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8022E804: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8022E808: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8022E80C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8022E810: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022E814: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
L_8022E818:
    // 0x8022E818: lw          $v0, 0xD0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XD0);
    // 0x8022E81C: andi        $v1, $s7, 0xFF
    ctx->r3 = ctx->r23 & 0XFF;
    // 0x8022E820: sll         $s0, $v1, 3
    ctx->r16 = S32(ctx->r3 << 3);
    // 0x8022E824: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x8022E828: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022E82C: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x8022E830: lh          $a0, -0x5FF8($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X5FF8);
    // 0x8022E834: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E838: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E83C: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022E840: beq         $v0, $zero, L_8022E9FC
    if (ctx->r2 == 0) {
        // 0x8022E844: addiu       $v0, $a0, 0x10
        ctx->r2 = ADD32(ctx->r4, 0X10);
            goto L_8022E9FC;
    }
    // 0x8022E844: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x8022E848: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022E84C: beq         $v0, $zero, L_8022EA00
    if (ctx->r2 == 0) {
        // 0x8022E850: andi        $v0, $s7, 0xFF
        ctx->r2 = ctx->r23 & 0XFF;
            goto L_8022EA00;
    }
    // 0x8022E850: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x8022E854: jal         0x8003B878
    // 0x8022E858: nop

    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x8022E858: nop

    after_0:
    // 0x8022E85C: lw          $a0, 0xD0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XD0);
    // 0x8022E860: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022E864: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x8022E868: lhu         $v1, -0x5FF8($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X5FF8);
    // 0x8022E86C: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8022E870: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x8022E874: lh          $a1, -0x5FF2($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X5FF2);
    // 0x8022E878: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022E87C: subu        $a3, $a0, $v1
    ctx->r7 = SUB32(ctx->r4, ctx->r3);
    // 0x8022E880: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
    // 0x8022E884: sra         $t0, $v1, 16
    ctx->r8 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022E888: sll         $v1, $t0, 1
    ctx->r3 = S32(ctx->r8 << 1);
    // 0x8022E88C: sh          $a3, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r7;
    // 0x8022E890: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022E894: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x8022E898: lhu         $a0, -0x5FF4($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X5FF4);
    // 0x8022E89C: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x8022E8A0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022E8A4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x8022E8A8: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8022E8AC: bgez        $a1, L_8022E8B8
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8022E8B0: andi        $a0, $a0, 0xFFF
        ctx->r4 = ctx->r4 & 0XFFF;
            goto L_8022E8B8;
    }
    // 0x8022E8B0: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x8022E8B4: addiu       $a1, $a1, 0xF
    ctx->r5 = ADD32(ctx->r5, 0XF);
L_8022E8B8:
    // 0x8022E8B8: sra         $v0, $a1, 4
    ctx->r2 = S32(SIGNED(ctx->r5) >> 4);
    // 0x8022E8BC: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E8C0: mflo        $v0
    ctx->r2 = lo;
    // 0x8022E8C4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022E8C8: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x8022E8CC: lh          $v1, -0x5FF6($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X5FF6);
    // 0x8022E8D0: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8022E8D4: bgez        $v1, L_8022E8E0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8022E8D8: subu        $fp, $a2, $v0
        ctx->r30 = SUB32(ctx->r6, ctx->r2);
            goto L_8022E8E0;
    }
    // 0x8022E8D8: subu        $fp, $a2, $v0
    ctx->r30 = SUB32(ctx->r6, ctx->r2);
    // 0x8022E8DC: addiu       $v1, $v1, 0xF
    ctx->r3 = ADD32(ctx->r3, 0XF);
L_8022E8E0:
    // 0x8022E8E0: sra         $v0, $v1, 4
    ctx->r2 = S32(SIGNED(ctx->r3) >> 4);
    // 0x8022E8E4: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E8E8: mflo        $v0
    ctx->r2 = lo;
    // 0x8022E8EC: subu        $s0, $a1, $v0
    ctx->r16 = SUB32(ctx->r5, ctx->r2);
    // 0x8022E8F0: slti        $v0, $t0, 0x8
    ctx->r2 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
    // 0x8022E8F4: beq         $v0, $zero, L_8022E91C
    if (ctx->r2 == 0) {
        // 0x8022E8F8: addiu       $v0, $t0, 0x1
        ctx->r2 = ADD32(ctx->r8, 0X1);
            goto L_8022E91C;
    }
    // 0x8022E8F8: addiu       $v0, $t0, 0x1
    ctx->r2 = ADD32(ctx->r8, 0X1);
    // 0x8022E8FC: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8022E900: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E904: sll         $s3, $v1, 2
    ctx->r19 = S32(ctx->r3 << 2);
    // 0x8022E908: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8022E90C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022E910: sll         $s6, $v1, 2
    ctx->r22 = S32(ctx->r3 << 2);
    // 0x8022E914: j           L_8022E928
    // 0x8022E918: addu        $s5, $s3, $zero
    ctx->r21 = ADD32(ctx->r19, 0);
        goto L_8022E928;
    // 0x8022E918: addu        $s5, $s3, $zero
    ctx->r21 = ADD32(ctx->r19, 0);
L_8022E91C:
    // 0x8022E91C: addiu       $s3, $zero, 0x60
    ctx->r19 = ADD32(0, 0X60);
    // 0x8022E920: addiu       $s6, $zero, 0xE0
    ctx->r22 = ADD32(0, 0XE0);
    // 0x8022E924: addiu       $s5, $zero, 0x60
    ctx->r21 = ADD32(0, 0X60);
L_8022E928:
    // 0x8022E928: jal         0x800324B4
    // 0x8022E92C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x8022E92C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    after_1:
    // 0x8022E930: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x8022E934: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8022E938: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E93C: mflo        $v0
    ctx->r2 = lo;
    // 0x8022E940: lhu         $v1, 0x14($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X14);
    // 0x8022E944: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E948: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8022E94C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E950: jal         0x80032498
    // 0x8022E954: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x8022E954: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_2:
    // 0x8022E958: nop

    // 0x8022E95C: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E960: mflo        $v0
    ctx->r2 = lo;
    // 0x8022E964: lhu         $v1, 0x18($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X18);
    // 0x8022E968: lui         $a1, 0x3D48
    ctx->r5 = S32(0X3D48 << 16);
    // 0x8022E96C: andi        $a0, $s5, 0xFF
    ctx->r4 = ctx->r21 & 0XFF;
    // 0x8022E970: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8022E974: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E978: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    // 0x8022E97C: lhu         $v0, 0x16($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X16);
    // 0x8022E980: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022E984: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x8022E988: addu        $v0, $v0, $fp
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x8022E98C: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8022E990: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x8022E994: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022E998: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022E99C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8022E9A0: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x8022E9A4: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8022E9A8: sw          $a0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r4;
    // 0x8022E9AC: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x8022E9B0: lh          $v1, 0x12($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X12);
    // 0x8022E9B4: ori         $a1, $a1, 0x2040
    ctx->r5 = ctx->r5 | 0X2040;
    // 0x8022E9B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E9BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E9C0: sw          $v1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r3;
    // 0x8022E9C4: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x8022E9C8: lui         $v0, 0x2E
    ctx->r2 = S32(0X2E << 16);
    // 0x8022E9CC: ori         $v0, $v0, 0x205F
    ctx->r2 = ctx->r2 | 0X205F;
    // 0x8022E9D0: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8022E9D4: addiu       $v0, $zero, 0x3F40
    ctx->r2 = ADD32(0, 0X3F40);
    // 0x8022E9D8: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x8022E9DC: addiu       $v0, $zero, 0x3F5F
    ctx->r2 = ADD32(0, 0X3F5F);
    // 0x8022E9E0: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x8022E9E4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022E9E8: sw          $a1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r5;
    // 0x8022E9EC: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8022E9F0: sw          $zero, 0x20($s2)
    MEM_W(0X20, ctx->r18) = 0;
    // 0x8022E9F4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022E9F8: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
L_8022E9FC:
    // 0x8022E9FC: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
L_8022EA00:
    // 0x8022EA00: lhu         $t1, 0x1E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X1E);
    // 0x8022EA04: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022EA08: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022EA0C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EA10: lh          $v1, -0x5FF8($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X5FF8);
    // 0x8022EA14: sll         $v0, $t1, 16
    ctx->r2 = S32(ctx->r9 << 16);
    // 0x8022EA18: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022EA1C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8022EA20: bne         $v0, $v1, L_8022EA40
    if (ctx->r2 != ctx->r3) {
        // 0x8022EA24: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_8022EA40;
    }
    // 0x8022EA24: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8022EA28: lbu         $v0, 0xB($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XB);
    // 0x8022EA2C: lhu         $v1, 0x98($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X98);
    // 0x8022EA30: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022EA34: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8022EA38: sb          $v0, 0xB($s4)
    MEM_B(0XB, ctx->r20) = ctx->r2;
    // 0x8022EA3C: sh          $v1, 0x98($s4)
    MEM_H(0X98, ctx->r20) = ctx->r3;
L_8022EA40:
    // 0x8022EA40: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x8022EA44: sltiu       $v0, $v0, 0x18
    ctx->r2 = ctx->r2 < 0X18 ? 1 : 0;
    // 0x8022EA48: bne         $v0, $zero, L_8022E818
    if (ctx->r2 != 0) {
        // 0x8022EA4C: nop
    
            goto L_8022E818;
    }
    // 0x8022EA4C: nop

    // 0x8022EA50: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8022EA54: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8022EA58: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x8022EA5C: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8022EA60: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8022EA64: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8022EA68: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8022EA6C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8022EA70: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022EA74: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022EA78: jr          $ra
    // 0x8022EA7C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x8022EA7C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80228070_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228070: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228074: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228078: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022807C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80228080: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80228084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228088: jal         0x8009A3B4
    // 0x8022808C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022808C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80228090: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80228094: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80228098: jal         0x8009A3B4
    // 0x8022809C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022809C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802280A0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802280A4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802280A8: jal         0x8009A3B4
    // 0x802280AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802280AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802280B0: jal         0x800A3450
    // 0x802280B4: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x802280B4: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
    after_3:
    // 0x802280B8: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x802280BC: bne         $v1, $zero, L_80228100
    if (ctx->r3 != 0) {
        // 0x802280C0: sh          $v0, 0x346($s0)
        MEM_H(0X346, ctx->r16) = ctx->r2;
            goto L_80228100;
    }
    // 0x802280C0: sh          $v0, 0x346($s0)
    MEM_H(0X346, ctx->r16) = ctx->r2;
    // 0x802280C4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x802280C8: addiu       $a0, $zero, 0x4210
    ctx->r4 = ADD32(0, 0X4210);
    // 0x802280CC: sll         $v0, $v1, 24
    ctx->r2 = S32(ctx->r3 << 24);
L_802280D0:
    // 0x802280D0: sra         $v0, $v0, 21
    ctx->r2 = S32(SIGNED(ctx->r2) >> 21);
    // 0x802280D4: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x802280D8: sh          $a0, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r4;
    // 0x802280DC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x802280E0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802280E4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802280E8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802280EC: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x802280F0: bne         $v0, $zero, L_802280D0
    if (ctx->r2 != 0) {
        // 0x802280F4: sll         $v0, $v1, 24
        ctx->r2 = S32(ctx->r3 << 24);
            goto L_802280D0;
    }
    // 0x802280F4: sll         $v0, $v1, 24
    ctx->r2 = S32(ctx->r3 << 24);
    // 0x802280F8: j           L_80228134
    // 0x802280FC: nop

        goto L_80228134;
    // 0x802280FC: nop

L_80228100:
    // 0x80228100: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x80228104: addiu       $a0, $zero, 0x7FFF
    ctx->r4 = ADD32(0, 0X7FFF);
    // 0x80228108: sll         $v0, $v1, 24
    ctx->r2 = S32(ctx->r3 << 24);
L_8022810C:
    // 0x8022810C: sra         $v0, $v0, 21
    ctx->r2 = S32(SIGNED(ctx->r2) >> 21);
    // 0x80228110: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80228114: sh          $a0, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r4;
    // 0x80228118: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022811C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228120: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80228124: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80228128: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x8022812C: bne         $v0, $zero, L_8022810C
    if (ctx->r2 != 0) {
        // 0x80228130: sll         $v0, $v1, 24
        ctx->r2 = S32(ctx->r3 << 24);
            goto L_8022810C;
    }
    // 0x80228130: sll         $v0, $v1, 24
    ctx->r2 = S32(ctx->r3 << 24);
L_80228134:
    // 0x80228134: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80228138: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022813C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228140: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228144: lw          $v0, -0x66F4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X66F4);
    // 0x80228148: jalr        $v0
    // 0x8022814C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8022814C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80228150: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80228154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228158: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022815C: jr          $ra
    // 0x80228160: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228160: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023266C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023266C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80232670: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80232674: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232678: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8023267C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80232680: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80232684: lb          $s1, 0xC($s0)
    ctx->r17 = MEM_B(ctx->r16, 0XC);
    // 0x80232688: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023268C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80232690: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80232694: addiu       $v0, $v0, -0x5D4C
    ctx->r2 = ADD32(ctx->r2, -0X5D4C);
    // 0x80232698: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023269C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802326A0: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x802326A4: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x802326A8: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x802326AC: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x802326B0: sll         $s1, $s1, 4
    ctx->r17 = S32(ctx->r17 << 4);
    // 0x802326B4: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x802326B8: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x802326BC: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x802326C0: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x802326C4: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x802326C8: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x802326CC: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x802326D0: addiu       $s2, $s0, 0x18
    ctx->r18 = ADD32(ctx->r16, 0X18);
    // 0x802326D4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802326D8: jal         0x80031600
    // 0x802326DC: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_0;
    // 0x802326DC: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    after_0:
    // 0x802326E0: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x802326E4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802326E8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802326EC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802326F0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x802326F4: jal         0x80031DA8
    // 0x802326F8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_1;
    // 0x802326F8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_1:
    // 0x802326FC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80232700: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80232704: sh          $v0, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r2;
    // 0x80232708: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x8023270C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80232710: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232714: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x80232718: lhu         $a2, 0x4($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X4);
    // 0x8023271C: addiu       $a1, $s1, 0xE
    ctx->r5 = ADD32(ctx->r17, 0XE);
    // 0x80232720: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80232724: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x80232728: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8023272C: jal         0x8004D5D4
    // 0x80232730: sh          $a2, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r6;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_2;
    // 0x80232730: sh          $a2, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r6;
    after_2:
    // 0x80232734: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x80232738: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8023273C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80232740: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80232744: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80232748: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8023274C: jr          $ra
    // 0x80232750: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80232750: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80234410_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234410: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80234414: bne         $v0, $zero, L_80234458
    if (ctx->r2 != 0) {
        // 0x80234418: nop
    
            goto L_80234458;
    }
    // 0x80234418: nop

    // 0x8023441C: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80234420: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80234424: sb          $zero, 0x9($v1)
    MEM_B(0X9, ctx->r3) = 0;
    // 0x80234428: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023442C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80234430: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80234434: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80234438: sb          $zero, 0x9($v1)
    MEM_B(0X9, ctx->r3) = 0;
    // 0x8023443C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80234440: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80234444: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80234448: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023444C: sb          $zero, 0x9($v1)
    MEM_B(0X9, ctx->r3) = 0;
    // 0x80234450: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80234454: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_80234458:
    // 0x80234458: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8023445C: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80234460: bne         $v1, $v0, L_80234480
    if (ctx->r3 != ctx->r2) {
        // 0x80234464: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_80234480;
    }
    // 0x80234464: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80234468: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x8023446C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234470: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80234474: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80234478: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8023447C: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
L_80234480:
    // 0x80234480: bne         $v1, $v0, L_80234494
    if (ctx->r3 != ctx->r2) {
        // 0x80234484: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80234494;
    }
    // 0x80234484: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234488: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x8023448C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80234490: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80234494:
    // 0x80234494: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80234498: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8023449C: bne         $v1, $v0, L_802344BC
    if (ctx->r3 != ctx->r2) {
        // 0x802344A0: addiu       $v0, $zero, 0x46
        ctx->r2 = ADD32(0, 0X46);
            goto L_802344BC;
    }
    // 0x802344A0: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x802344A4: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x802344A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802344AC: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802344B0: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802344B4: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802344B8: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
L_802344BC:
    // 0x802344BC: bne         $v1, $v0, L_802344D0
    if (ctx->r3 != ctx->r2) {
        // 0x802344C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802344D0;
    }
    // 0x802344C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802344C4: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x802344C8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802344CC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_802344D0:
    // 0x802344D0: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802344D4: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x802344D8: bne         $v1, $v0, L_802344F8
    if (ctx->r3 != ctx->r2) {
        // 0x802344DC: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_802344F8;
    }
    // 0x802344DC: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x802344E0: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x802344E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802344E8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802344EC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802344F0: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802344F4: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
L_802344F8:
    // 0x802344F8: bne         $v1, $v0, L_8023450C
    if (ctx->r3 != ctx->r2) {
        // 0x802344FC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023450C;
    }
    // 0x802344FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234500: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80234504: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80234508: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_8023450C:
    // 0x8023450C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80234510: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80234514: bne         $v1, $v0, L_80234534
    if (ctx->r3 != ctx->r2) {
        // 0x80234518: addiu       $v0, $zero, 0x6E
        ctx->r2 = ADD32(0, 0X6E);
            goto L_80234534;
    }
    // 0x80234518: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
    // 0x8023451C: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80234520: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234524: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80234528: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x8023452C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80234530: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
L_80234534:
    // 0x80234534: bne         $v1, $v0, L_80234548
    if (ctx->r3 != ctx->r2) {
        // 0x80234538: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80234548;
    }
    // 0x80234538: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023453C: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80234540: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80234544: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80234548:
    // 0x80234548: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8023454C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80234550: bne         $v1, $v0, L_80234570
    if (ctx->r3 != ctx->r2) {
        // 0x80234554: addiu       $v0, $zero, 0x82
        ctx->r2 = ADD32(0, 0X82);
            goto L_80234570;
    }
    // 0x80234554: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x80234558: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x8023455C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234560: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80234564: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80234568: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8023456C: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
L_80234570:
    // 0x80234570: bne         $v1, $v0, L_80234584
    if (ctx->r3 != ctx->r2) {
        // 0x80234574: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80234584;
    }
    // 0x80234574: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234578: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x8023457C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80234580: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80234584:
    // 0x80234584: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80234588: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x8023458C: bne         $v1, $v0, L_802345AC
    if (ctx->r3 != ctx->r2) {
        // 0x80234590: addiu       $v0, $zero, 0x96
        ctx->r2 = ADD32(0, 0X96);
            goto L_802345AC;
    }
    // 0x80234590: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x80234594: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80234598: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023459C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802345A0: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802345A4: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802345A8: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
L_802345AC:
    // 0x802345AC: bne         $v1, $v0, L_802345C0
    if (ctx->r3 != ctx->r2) {
        // 0x802345B0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802345C0;
    }
    // 0x802345B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802345B4: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x802345B8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802345BC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_802345C0:
    // 0x802345C0: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802345C4: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x802345C8: bne         $v1, $v0, L_802345E8
    if (ctx->r3 != ctx->r2) {
        // 0x802345CC: addiu       $v0, $zero, 0xB4
        ctx->r2 = ADD32(0, 0XB4);
            goto L_802345E8;
    }
    // 0x802345CC: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x802345D0: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x802345D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802345D8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802345DC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802345E0: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802345E4: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
L_802345E8:
    // 0x802345E8: bne         $v1, $v0, L_802345FC
    if (ctx->r3 != ctx->r2) {
        // 0x802345EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802345FC;
    }
    // 0x802345EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802345F0: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x802345F4: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802345F8: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_802345FC:
    // 0x802345FC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80234600: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x80234604: bne         $v1, $v0, L_80234624
    if (ctx->r3 != ctx->r2) {
        // 0x80234608: addiu       $v0, $zero, 0xD2
        ctx->r2 = ADD32(0, 0XD2);
            goto L_80234624;
    }
    // 0x80234608: addiu       $v0, $zero, 0xD2
    ctx->r2 = ADD32(0, 0XD2);
    // 0x8023460C: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80234610: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234614: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80234618: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x8023461C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80234620: addiu       $v0, $zero, 0xD2
    ctx->r2 = ADD32(0, 0XD2);
L_80234624:
    // 0x80234624: bne         $v1, $v0, L_80234638
    if (ctx->r3 != ctx->r2) {
        // 0x80234628: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80234638;
    }
    // 0x80234628: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023462C: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80234630: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80234634: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80234638:
    // 0x80234638: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8023463C: addiu       $v0, $zero, 0xDC
    ctx->r2 = ADD32(0, 0XDC);
    // 0x80234640: bne         $v1, $v0, L_80234660
    if (ctx->r3 != ctx->r2) {
        // 0x80234644: addiu       $v0, $zero, 0xE6
        ctx->r2 = ADD32(0, 0XE6);
            goto L_80234660;
    }
    // 0x80234644: addiu       $v0, $zero, 0xE6
    ctx->r2 = ADD32(0, 0XE6);
    // 0x80234648: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x8023464C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234650: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80234654: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80234658: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8023465C: addiu       $v0, $zero, 0xE6
    ctx->r2 = ADD32(0, 0XE6);
L_80234660:
    // 0x80234660: bne         $v1, $v0, L_80234674
    if (ctx->r3 != ctx->r2) {
        // 0x80234664: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80234674;
    }
    // 0x80234664: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234668: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x8023466C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80234670: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80234674:
    // 0x80234674: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80234678: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x8023467C: bne         $v1, $v0, L_8023469C
    if (ctx->r3 != ctx->r2) {
        // 0x80234680: addiu       $v0, $zero, 0xFA
        ctx->r2 = ADD32(0, 0XFA);
            goto L_8023469C;
    }
    // 0x80234680: addiu       $v0, $zero, 0xFA
    ctx->r2 = ADD32(0, 0XFA);
    // 0x80234684: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80234688: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023468C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80234690: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80234694: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80234698: addiu       $v0, $zero, 0xFA
    ctx->r2 = ADD32(0, 0XFA);
L_8023469C:
    // 0x8023469C: bne         $v1, $v0, L_802346B0
    if (ctx->r3 != ctx->r2) {
        // 0x802346A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802346B0;
    }
    // 0x802346A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802346A4: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x802346A8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802346AC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_802346B0:
    // 0x802346B0: jr          $ra
    // 0x802346B4: nop

    TRACE_RETURN()
    return;
    // 0x802346B4: nop

;}
RECOMP_FUNC void func_80227880_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227880: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80227884: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80227888: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022788C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80227890: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x80227894: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227898: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022789C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802278A0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802278A4: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x802278A8: lbu         $v1, 0xAC($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XAC);
    // 0x802278AC: addiu       $s3, $s2, 0x14
    ctx->r19 = ADD32(ctx->r18, 0X14);
    // 0x802278B0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x802278B4: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x802278B8: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x802278BC: sh          $v0, 0x34C($s2)
    MEM_H(0X34C, ctx->r18) = ctx->r2;
    // 0x802278C0: sb          $v1, 0x34A($s2)
    MEM_B(0X34A, ctx->r18) = ctx->r3;
    // 0x802278C4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802278C8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802278CC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802278D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802278D4: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x802278D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802278DC: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x802278E0: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x802278E4: jal         0x8009A3B4
    // 0x802278E8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802278E8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x802278EC: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x802278F0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802278F4: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x802278F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802278FC: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x80227900: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80227904: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x80227908: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8022790C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80227910: jal         0x8004EC38
    // 0x80227914: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x80227914: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x80227918: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022791C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80227920: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x80227924: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80227928: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022792C: jal         0x80034FCC
    // 0x80227930: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    func_80034FCC_103CC(rdram, ctx);
        goto after_2;
    // 0x80227930: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    after_2:
    // 0x80227934: lbu         $a0, 0x2($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X2);
    // 0x80227938: jal         0x80227F28
    // 0x8022793C: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    func_80227F28_ovl27(rdram, ctx);
        goto after_3;
    // 0x8022793C: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    after_3:
    // 0x80227940: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80227944: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80227948: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022794C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80227950: jal         0x8004F820
    // 0x80227954: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x80227954: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    after_4:
    // 0x80227958: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022795C: bgez        $v0, L_80227988
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227960: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_80227988;
    }
    // 0x80227960: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80227964: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80227968: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022796C: jal         0x8004F820
    // 0x80227970: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x80227970: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_5:
    // 0x80227974: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227978: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022797C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80227980: j           L_802279A0
    // 0x80227984: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_802279A0;
    // 0x80227984: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_80227988:
    // 0x80227988: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022798C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80227990: jal         0x8004F820
    // 0x80227994: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x80227994: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_6:
    // 0x80227998: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022799C: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_802279A0:
    // 0x802279A0: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x802279A4: sh          $v1, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r3;
    // 0x802279A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802279AC: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x802279B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802279B4: sb          $v0, 0x11B($s2)
    MEM_B(0X11B, ctx->r18) = ctx->r2;
    // 0x802279B8: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x802279BC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x802279C0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802279C4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802279C8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802279CC: jr          $ra
    // 0x802279D0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x802279D0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022592C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022592C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225930: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225934: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225938: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022593C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225940: bne         $v0, $zero, L_8022595C
    if (ctx->r2 != 0) {
        // 0x80225944: nop
    
            goto L_8022595C;
    }
    // 0x80225944: nop

    // 0x80225948: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022594C: jal         0x800607C4
    // 0x80225950: addiu       $a0, $a0, -0x6F18
    ctx->r4 = ADD32(ctx->r4, -0X6F18);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225950: addiu       $a0, $a0, -0x6F18
    ctx->r4 = ADD32(ctx->r4, -0X6F18);
    after_0:
    // 0x80225954: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225958: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022595C:
    // 0x8022595C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225960: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225964: jr          $ra
    // 0x80225968: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225968: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234A90_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234A90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80234A94: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80234A98: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80234A9C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80234AA0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80234AA4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80234AA8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80234AAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234AB0: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x80234AB4: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x80234AB8: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x80234ABC: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x80234AC0: beq         $v0, $zero, L_80234E40
    if (ctx->r2 == 0) {
        // 0x80234AC4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80234E40;
    }
    // 0x80234AC4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80234AC8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234ACC: addu        $at, $at, $v0
    gpr jr_addend_80234AD4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234AD0: lw          $v0, -0x3890($at)
    ctx->r2 = ADD32(ctx->r1, -0X3890);
    // 0x80234AD4: jr          $v0
    // 0x80234AD8: nop

    switch (jr_addend_80234AD4 >> 2) {
        case 0: goto L_80234ADC; break;
        case 1: goto L_80234BA0; break;
        case 2: goto L_80234BC0; break;
        case 3: goto L_80234BD4; break;
        case 4: goto L_80234BF0; break;
        case 5: goto L_80234C10; break;
        case 6: goto L_80234C30; break;
        case 7: goto L_80234CF4; break;
        case 8: goto L_80234E40; break;
        case 9: goto L_80234E40; break;
        case 10: goto L_80234D38; break;
        default: switch_error(__func__, 0x80234AD4, 0x8023C770);
    }
    // 0x80234AD8: nop

L_80234ADC:
    // 0x80234ADC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80234AE0: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80234AE4: bne         $v0, $zero, L_80234E40
    if (ctx->r2 != 0) {
        // 0x80234AE8: nop
    
            goto L_80234E40;
    }
    // 0x80234AE8: nop

    // 0x80234AEC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80234AF0: jal         0x8006FF84
    // 0x80234AF4: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80234AF4: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x80234AF8: beq         $v0, $zero, L_80234E40
    if (ctx->r2 == 0) {
        // 0x80234AFC: addiu       $a0, $s3, 0x428
        ctx->r4 = ADD32(ctx->r19, 0X428);
            goto L_80234E40;
    }
    // 0x80234AFC: addiu       $a0, $s3, 0x428
    ctx->r4 = ADD32(ctx->r19, 0X428);
    // 0x80234B00: lbu         $v1, 0xBD($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XBD);
    // 0x80234B04: addiu       $a1, $s3, 0x438
    ctx->r5 = ADD32(ctx->r19, 0X438);
    // 0x80234B08: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80234B0C: sb          $v0, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r2;
    // 0x80234B10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234B14: sb          $v0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r2;
    // 0x80234B18: lui         $v0, 0x230
    ctx->r2 = S32(0X230 << 16);
    // 0x80234B1C: sw          $v0, 0x428($s3)
    MEM_W(0X428, ctx->r19) = ctx->r2;
    // 0x80234B20: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80234B24: sw          $v0, 0x42C($s3)
    MEM_W(0X42C, ctx->r19) = ctx->r2;
    // 0x80234B28: lui         $v0, 0x17C
    ctx->r2 = S32(0X17C << 16);
    // 0x80234B2C: sw          $v0, 0x430($s3)
    MEM_W(0X430, ctx->r19) = ctx->r2;
    // 0x80234B30: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80234B34: jal         0x8004DD04
    // 0x80234B38: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80234B38: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    after_1:
    // 0x80234B3C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80234B40: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80234B44: sh          $v0, 0x442($s3)
    MEM_H(0X442, ctx->r19) = ctx->r2;
    // 0x80234B48: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80234B4C: sb          $v0, 0x448($s3)
    MEM_B(0X448, ctx->r19) = ctx->r2;
    // 0x80234B50: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80234B54: sh          $zero, 0x440($s3)
    MEM_H(0X440, ctx->r19) = 0;
    // 0x80234B58: sh          $zero, 0x444($s3)
    MEM_H(0X444, ctx->r19) = 0;
    // 0x80234B5C: sb          $zero, 0x171($s3)
    MEM_B(0X171, ctx->r19) = 0;
    // 0x80234B60: sb          $zero, 0x170($s3)
    MEM_B(0X170, ctx->r19) = 0;
    // 0x80234B64: jal         0x800736E0
    // 0x80234B68: sb          $v0, 0x44E($s3)
    MEM_B(0X44E, ctx->r19) = ctx->r2;
    func_800736E0_4EAE0(rdram, ctx);
        goto after_2;
    // 0x80234B68: sb          $v0, 0x44E($s3)
    MEM_B(0X44E, ctx->r19) = ctx->r2;
    after_2:
    // 0x80234B6C: jal         0x80060D38
    // 0x80234B70: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_80060D38_3C138(rdram, ctx);
        goto after_3;
    // 0x80234B70: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_3:
    // 0x80234B74: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80234B78: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80234B7C: jal         0x8005F6B4
    // 0x80234B80: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_4;
    // 0x80234B80: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80234B84: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x80234B88: jal         0x8004CB2C
    // 0x80234B8C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_5;
    // 0x80234B8C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_5:
    // 0x80234B90: jal         0x80061724
    // 0x80234B94: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_6;
    // 0x80234B94: nop

    after_6:
    // 0x80234B98: j           L_80234C00
    // 0x80234B9C: nop

        goto L_80234C00;
    // 0x80234B9C: nop

L_80234BA0:
    // 0x80234BA0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80234BA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80234BA8: jal         0x800739B0
    // 0x80234BAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800739B0_4EDB0(rdram, ctx);
        goto after_7;
    // 0x80234BAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x80234BB0: jal         0x8021D9D0
    // 0x80234BB4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_8021D9D0(rdram, ctx);
        goto after_8;
    // 0x80234BB4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_8:
    // 0x80234BB8: j           L_80234C00
    // 0x80234BBC: nop

        goto L_80234C00;
    // 0x80234BBC: nop

L_80234BC0:
    // 0x80234BC0: lui         $a0, 0x114
    ctx->r4 = S32(0X114 << 16);
    // 0x80234BC4: jal         0x80036B1C
    // 0x80234BC8: ori         $a0, $a0, 0x5A00
    ctx->r4 = ctx->r4 | 0X5A00;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_9;
    // 0x80234BC8: ori         $a0, $a0, 0x5A00
    ctx->r4 = ctx->r4 | 0X5A00;
    after_9:
    // 0x80234BCC: j           L_80234C00
    // 0x80234BD0: nop

        goto L_80234C00;
    // 0x80234BD0: nop

L_80234BD4:
    // 0x80234BD4: jal         0x80036B7C
    // 0x80234BD8: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_10;
    // 0x80234BD8: nop

    after_10:
    // 0x80234BDC: beq         $v0, $zero, L_80234E40
    if (ctx->r2 == 0) {
        // 0x80234BE0: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_80234E40;
    }
    // 0x80234BE0: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80234BE4: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80234BE8: j           L_80234C04
    // 0x80234BEC: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
        goto L_80234C04;
    // 0x80234BEC: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
L_80234BF0:
    // 0x80234BF0: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x80234BF4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80234BF8: bne         $v0, $zero, L_80234E40
    if (ctx->r2 != 0) {
        // 0x80234BFC: sw          $v0, 0xC($s2)
        MEM_W(0XC, ctx->r18) = ctx->r2;
            goto L_80234E40;
    }
    // 0x80234BFC: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
L_80234C00:
    // 0x80234C00: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
L_80234C04:
    // 0x80234C04: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234C08: j           L_80234E40
    // 0x80234C0C: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_80234E40;
    // 0x80234C0C: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80234C10:
    // 0x80234C10: jal         0x80036E48
    // 0x80234C14: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80036E48_12248(rdram, ctx);
        goto after_11;
    // 0x80234C14: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_11:
    // 0x80234C18: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80234C1C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80234C20: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x80234C24: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80234C28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234C2C: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80234C30:
    // 0x80234C30: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80234C34: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x80234C38: addiu       $s1, $zero, 0x1B
    ctx->r17 = ADD32(0, 0X1B);
    // 0x80234C3C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234C40: addiu       $v0, $v0, -0x5014
    ctx->r2 = ADD32(ctx->r2, -0X5014);
    // 0x80234C44: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80234C48: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80234C4C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234C50: addiu       $v0, $v0, -0x492C
    ctx->r2 = ADD32(ctx->r2, -0X492C);
    // 0x80234C54: sw          $v0, 0xA4($s2)
    MEM_W(0XA4, ctx->r18) = ctx->r2;
L_80234C58:
    // 0x80234C58: jal         0x8004F144
    // 0x80234C5C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_12;
    // 0x80234C5C: nop

    after_12:
    // 0x80234C60: beql        $v0, $zero, L_80234C7C
    if (ctx->r2 == 0) {
        // 0x80234C64: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80234C7C;
    }
    goto skip_0;
    // 0x80234C64: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x80234C68: sb          $s4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r20;
    // 0x80234C6C: sb          $s1, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r17;
    // 0x80234C70: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x80234C74: sb          $s0, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r16;
    // 0x80234C78: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80234C7C:
    // 0x80234C7C: slti        $v0, $s0, 0x9
    ctx->r2 = SIGNED(ctx->r16) < 0X9 ? 1 : 0;
    // 0x80234C80: bne         $v0, $zero, L_80234C58
    if (ctx->r2 != 0) {
        // 0x80234C84: nop
    
            goto L_80234C58;
    }
    // 0x80234C84: nop

    // 0x80234C88: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80234C8C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80234C90: addiu       $s4, $zero, 0x1B
    ctx->r20 = ADD32(0, 0X1B);
L_80234C94:
    // 0x80234C94: jal         0x8004F144
    // 0x80234C98: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_13;
    // 0x80234C98: nop

    after_13:
    // 0x80234C9C: beql        $v0, $zero, L_80234CB8
    if (ctx->r2 == 0) {
        // 0x80234CA0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80234CB8;
    }
    goto skip_1;
    // 0x80234CA0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x80234CA4: sb          $s1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r17;
    // 0x80234CA8: sb          $s4, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r20;
    // 0x80234CAC: sb          $s1, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r17;
    // 0x80234CB0: sb          $s0, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r16;
    // 0x80234CB4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80234CB8:
    // 0x80234CB8: slti        $v0, $s0, 0xC
    ctx->r2 = SIGNED(ctx->r16) < 0XC ? 1 : 0;
    // 0x80234CBC: bne         $v0, $zero, L_80234C94
    if (ctx->r2 != 0) {
        // 0x80234CC0: nop
    
            goto L_80234C94;
    }
    // 0x80234CC0: nop

    // 0x80234CC4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80234CC8: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x80234CCC: addiu       $s1, $s1, -0x5050
    ctx->r17 = ADD32(ctx->r17, -0X5050);
L_80234CD0:
    // 0x80234CD0: jal         0x8005FA7C
    // 0x80234CD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_14;
    // 0x80234CD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_14:
    // 0x80234CD8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80234CDC: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x80234CE0: bne         $v0, $zero, L_80234CD0
    if (ctx->r2 != 0) {
        // 0x80234CE4: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_80234CD0;
    }
    // 0x80234CE4: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x80234CE8: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80234CEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234CF0: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80234CF4:
    // 0x80234CF4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80234CF8: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80234CFC: bne         $v0, $zero, L_80234D38
    if (ctx->r2 != 0) {
        // 0x80234D00: nop
    
            goto L_80234D38;
    }
    // 0x80234D00: nop

    // 0x80234D04: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x80234D08: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80234D0C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80234D10: beq         $v1, $v0, L_80234D28
    if (ctx->r3 == ctx->r2) {
        // 0x80234D14: nop
    
            goto L_80234D28;
    }
    // 0x80234D14: nop

    // 0x80234D18: jal         0x8006072C
    // 0x80234D1C: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_15;
    // 0x80234D1C: nop

    after_15:
    // 0x80234D20: beq         $v0, $zero, L_80234D38
    if (ctx->r2 == 0) {
        // 0x80234D24: nop
    
            goto L_80234D38;
    }
    // 0x80234D24: nop

L_80234D28:
    // 0x80234D28: jal         0x80036E48
    // 0x80234D2C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_80036E48_12248(rdram, ctx);
        goto after_16;
    // 0x80234D2C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_16:
    // 0x80234D30: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80234D34: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80234D38:
    // 0x80234D38: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x80234D3C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80234D40: beq         $v1, $v0, L_80234D58
    if (ctx->r3 == ctx->r2) {
        // 0x80234D44: nop
    
            goto L_80234D58;
    }
    // 0x80234D44: nop

    // 0x80234D48: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x80234D4C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80234D50: jalr        $v0
    // 0x80234D54: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_17;
    // 0x80234D54: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_17:
L_80234D58:
    // 0x80234D58: jal         0x8005FB90
    // 0x80234D5C: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_18;
    // 0x80234D5C: nop

    after_18:
    // 0x80234D60: jal         0x80060018
    // 0x80234D64: nop

    func_80060018_3B418(rdram, ctx);
        goto after_19;
    // 0x80234D64: nop

    after_19:
    // 0x80234D68: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x80234D6C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80234D70: bne         $v1, $v0, L_80234E40
    if (ctx->r3 != ctx->r2) {
        // 0x80234D74: nop
    
            goto L_80234E40;
    }
    // 0x80234D74: nop

    // 0x80234D78: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80234D7C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80234D80: bne         $v0, $zero, L_80234E40
    if (ctx->r2 != 0) {
        // 0x80234D84: addiu       $a0, $s3, 0x428
        ctx->r4 = ADD32(ctx->r19, 0X428);
            goto L_80234E40;
    }
    // 0x80234D84: addiu       $a0, $s3, 0x428
    ctx->r4 = ADD32(ctx->r19, 0X428);
    // 0x80234D88: addiu       $a1, $s3, 0x438
    ctx->r5 = ADD32(ctx->r19, 0X438);
    // 0x80234D8C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80234D90: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x80234D94: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80234D98: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80234D9C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80234DA0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80234DA4: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80234DA8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80234DAC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80234DB0: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80234DB4: lui         $v0, 0x104
    ctx->r2 = S32(0X104 << 16);
    // 0x80234DB8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80234DBC: sb          $v1, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r3;
    // 0x80234DC0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80234DC4: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80234DC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80234DCC: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80234DD0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80234DD4: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80234DD8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80234DDC: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80234DE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80234DE4: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80234DE8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80234DEC: sb          $v1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r3;
    // 0x80234DF0: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    // 0x80234DF4: sw          $v0, 0x428($s3)
    MEM_W(0X428, ctx->r19) = ctx->r2;
    // 0x80234DF8: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80234DFC: sw          $v0, 0x42C($s3)
    MEM_W(0X42C, ctx->r19) = ctx->r2;
    // 0x80234E00: lui         $v0, 0x17C
    ctx->r2 = S32(0X17C << 16);
    // 0x80234E04: jal         0x8004DD04
    // 0x80234E08: sw          $v0, 0x430($s3)
    MEM_W(0X430, ctx->r19) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_20;
    // 0x80234E08: sw          $v0, 0x430($s3)
    MEM_W(0X430, ctx->r19) = ctx->r2;
    after_20:
    // 0x80234E0C: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x80234E10: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80234E14: sh          $zero, 0x440($s3)
    MEM_H(0X440, ctx->r19) = 0;
    // 0x80234E18: sh          $zero, 0x444($s3)
    MEM_H(0X444, ctx->r19) = 0;
    // 0x80234E1C: jal         0x8004CB2C
    // 0x80234E20: sh          $zero, 0x442($s3)
    MEM_H(0X442, ctx->r19) = 0;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_21;
    // 0x80234E20: sh          $zero, 0x442($s3)
    MEM_H(0X442, ctx->r19) = 0;
    after_21:
    // 0x80234E24: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80234E28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80234E2C: jal         0x80036B00
    // 0x80234E30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_22;
    // 0x80234E30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_22:
    // 0x80234E34: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80234E38: jal         0x80070050
    // 0x80234E3C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_23;
    // 0x80234E3C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_23:
L_80234E40:
    // 0x80234E40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80234E44: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80234E48: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80234E4C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80234E50: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80234E54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234E58: jr          $ra
    // 0x80234E5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80234E5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80234028_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234028: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023402C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80234030: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80234034: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80234038: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8023403C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80234040: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x80234044: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234048: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023404C: addiu       $a1, $a1, -0x38AC
    ctx->r5 = ADD32(ctx->r5, -0X38AC);
    // 0x80234050: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80234054: jal         0x8009A3B4
    // 0x80234058: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80234058: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_0:
    // 0x8023405C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80234060: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80234064: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80234068: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x8023406C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80234070: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80234074: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80234078: sll         $s1, $s1, 3
    ctx->r17 = S32(ctx->r17 << 3);
    // 0x8023407C: addu        $s0, $s0, $s1
    ctx->r16 = ADD32(ctx->r16, ctx->r17);
    // 0x80234080: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80234084: sb          $s2, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r18;
    // 0x80234088: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023408C: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80234090: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80234094: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80234098: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023409C: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x802340A0: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x802340A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802340A8: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x802340AC: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x802340B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802340B4: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x802340B8: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x802340BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802340C0: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x802340C4: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x802340C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802340CC: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x802340D0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802340D4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802340D8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802340DC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802340E0: jr          $ra
    // 0x802340E4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802340E4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80225DFC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225DFC: lh          $v0, 0x350($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X350);
    // 0x80225E00: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80225E04: beq         $v0, $zero, L_80225E20
    if (ctx->r2 == 0) {
        // 0x80225E08: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80225E20;
    }
    // 0x80225E08: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225E0C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80225E10: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x80225E14: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225E18: bne         $v0, $zero, L_80225E4C
    if (ctx->r2 != 0) {
        // 0x80225E1C: nop
    
            goto L_80225E4C;
    }
    // 0x80225E1C: nop

L_80225E20:
    // 0x80225E20: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80225E24: bgez        $v0, L_80225E4C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80225E28: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_80225E4C;
    }
    // 0x80225E28: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x80225E2C: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x80225E30: bnel        $v1, $v0, L_80225E4C
    if (ctx->r3 != ctx->r2) {
        // 0x80225E34: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_80225E4C;
    }
    goto skip_0;
    // 0x80225E34: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
    // 0x80225E38: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80225E3C: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x80225E40: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80225E44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225E48: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80225E4C:
    // 0x80225E4C: jr          $ra
    // 0x80225E50: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80225E50: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_802300CC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802300CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802300D0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802300D4: jal         0x8006033C
    // 0x802300D8: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802300D8: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    after_0:
    // 0x802300DC: beq         $v0, $zero, L_80230114
    if (ctx->r2 == 0) {
        // 0x802300E0: nop
    
            goto L_80230114;
    }
    // 0x802300E0: nop

    // 0x802300E4: jal         0x8006033C
    // 0x802300E8: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802300E8: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    after_1:
    // 0x802300EC: beq         $v0, $zero, L_80230114
    if (ctx->r2 == 0) {
        // 0x802300F0: nop
    
            goto L_80230114;
    }
    // 0x802300F0: nop

    // 0x802300F4: jal         0x80060590
    // 0x802300F8: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    func_80060590_3B990(rdram, ctx);
        goto after_2;
    // 0x802300F8: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    after_2:
    // 0x802300FC: jal         0x80060590
    // 0x80230100: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x80230100: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    after_3:
    // 0x80230104: jal         0x80060C1C
    // 0x80230108: addiu       $a0, $zero, 0x2E0
    ctx->r4 = ADD32(0, 0X2E0);
    func_80060C1C_3C01C(rdram, ctx);
        goto after_4;
    // 0x80230108: addiu       $a0, $zero, 0x2E0
    ctx->r4 = ADD32(0, 0X2E0);
    after_4:
    // 0x8023010C: j           L_80230168
    // 0x80230110: nop

        goto L_80230168;
    // 0x80230110: nop

L_80230114:
    // 0x80230114: jal         0x8006033C
    // 0x80230118: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80230118: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    after_5:
    // 0x8023011C: bne         $v0, $zero, L_80230134
    if (ctx->r2 != 0) {
        // 0x80230120: nop
    
            goto L_80230134;
    }
    // 0x80230120: nop

    // 0x80230124: jal         0x8006033C
    // 0x80230128: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80230128: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    after_6:
    // 0x8023012C: bne         $v0, $zero, L_80230160
    if (ctx->r2 != 0) {
        // 0x80230130: addiu       $a0, $zero, 0x220
        ctx->r4 = ADD32(0, 0X220);
            goto L_80230160;
    }
    // 0x80230130: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
L_80230134:
    // 0x80230134: jal         0x8006033C
    // 0x80230138: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x80230138: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    after_7:
    // 0x8023013C: beq         $v0, $zero, L_80230160
    if (ctx->r2 == 0) {
        // 0x80230140: addiu       $a0, $zero, 0x220
        ctx->r4 = ADD32(0, 0X220);
            goto L_80230160;
    }
    // 0x80230140: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    // 0x80230144: jal         0x8006033C
    // 0x80230148: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    func_8006033C_3B73C(rdram, ctx);
        goto after_8;
    // 0x80230148: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    after_8:
    // 0x8023014C: bne         $v0, $zero, L_80230160
    if (ctx->r2 != 0) {
        // 0x80230150: addiu       $a0, $zero, 0x220
        ctx->r4 = ADD32(0, 0X220);
            goto L_80230160;
    }
    // 0x80230150: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    // 0x80230154: jal         0x80060590
    // 0x80230158: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    func_80060590_3B990(rdram, ctx);
        goto after_9;
    // 0x80230158: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    after_9:
    // 0x8023015C: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
L_80230160:
    // 0x80230160: jal         0x8006036C
    // 0x80230164: nop

    func_8006036C_3B76C(rdram, ctx);
        goto after_10;
    // 0x80230164: nop

    after_10:
L_80230168:
    // 0x80230168: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023016C: jr          $ra
    // 0x80230170: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230170: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802355C0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802355C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802355C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802355C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802355CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802355D0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802355D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802355D8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802355DC: bne         $v0, $zero, L_80235630
    if (ctx->r2 != 0) {
        // 0x802355E0: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80235630;
    }
    // 0x802355E0: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x802355E4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802355E8: jal         0x80050294
    // 0x802355EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802355EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802355F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802355F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802355F8: jal         0x80235CD8
    // 0x802355FC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80235CD8_ovl27(rdram, ctx);
        goto after_1;
    // 0x802355FC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x80235600: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80235604: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x80235608: sb          $v0, 0x108($s0)
    MEM_B(0X108, ctx->r16) = ctx->r2;
    // 0x8023560C: addiu       $v0, $zero, -0x64
    ctx->r2 = ADD32(0, -0X64);
    // 0x80235610: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80235614: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80235618: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8023561C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80235620: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80235624: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80235628: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023562C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80235630:
    // 0x80235630: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x80235634: addiu       $s2, $s2, -0x3A40
    ctx->r18 = ADD32(ctx->r18, -0X3A40);
    // 0x80235638: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8023563C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80235640: bne         $v1, $v0, L_80235660
    if (ctx->r3 != ctx->r2) {
        // 0x80235644: addiu       $v0, $zero, 0x16
        ctx->r2 = ADD32(0, 0X16);
            goto L_80235660;
    }
    // 0x80235644: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80235648: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023564C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235650: jal         0x80235CD8
    // 0x80235654: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_80235CD8_ovl27(rdram, ctx);
        goto after_2;
    // 0x80235654: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80235658: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8023565C: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
L_80235660:
    // 0x80235660: bne         $v1, $v0, L_80235674
    if (ctx->r3 != ctx->r2) {
        // 0x80235664: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235674;
    }
    // 0x80235664: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235668: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023566C: jal         0x80235CD8
    // 0x80235670: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_80235CD8_ovl27(rdram, ctx);
        goto after_3;
    // 0x80235670: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_3:
L_80235674:
    // 0x80235674: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80235678: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023567C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235680: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235684: jr          $ra
    // 0x80235688: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235688: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802353E0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802353E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802353E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802353E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802353EC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802353F0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802353F4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802353F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802353FC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235400: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235404: lw          $v0, -0x4890($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4890);
    // 0x80235408: jalr        $v0
    // 0x8023540C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023540C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    after_0:
    // 0x80235410: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80235414: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80235418: jal         0x8009A3B4
    // 0x8023541C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023541C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80235420: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80235424: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80235428: jal         0x8009A3B4
    // 0x8023542C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023542C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80235430: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80235434: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80235438: jal         0x8009A3B4
    // 0x8023543C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8023543C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80235440: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80235444: bne         $v0, $zero, L_8023545C
    if (ctx->r2 != 0) {
        // 0x80235448: nop
    
            goto L_8023545C;
    }
    // 0x80235448: nop

    // 0x8023544C: jal         0x8005044C
    // 0x80235450: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x80235450: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80235454: j           L_80235470
    // 0x80235458: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80235470;
    // 0x80235458: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023545C:
    // 0x8023545C: jal         0x80051770
    // 0x80235460: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_5;
    // 0x80235460: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80235464: jal         0x80051248
    // 0x80235468: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_6;
    // 0x80235468: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8023546C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80235470:
    // 0x80235470: jal         0x80235D1C
    // 0x80235474: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80235D1C_ovl27(rdram, ctx);
        goto after_7;
    // 0x80235474: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
    // 0x80235478: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023547C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235480: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235484: jr          $ra
    // 0x80235488: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235488: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225838_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225838: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022583C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225840: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225848: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022584C: bne         $v0, $zero, L_80225880
    if (ctx->r2 != 0) {
        // 0x80225850: nop
    
            goto L_80225880;
    }
    // 0x80225850: nop

    // 0x80225854: jal         0x8006033C
    // 0x80225858: addiu       $a0, $zero, 0x52
    ctx->r4 = ADD32(0, 0X52);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225858: addiu       $a0, $zero, 0x52
    ctx->r4 = ADD32(0, 0X52);
    after_0:
    // 0x8022585C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225860: beq         $v0, $zero, L_80225870
    if (ctx->r2 == 0) {
        // 0x80225864: addiu       $a0, $a0, -0x6F28
        ctx->r4 = ADD32(ctx->r4, -0X6F28);
            goto L_80225870;
    }
    // 0x80225864: addiu       $a0, $a0, -0x6F28
    ctx->r4 = ADD32(ctx->r4, -0X6F28);
    // 0x80225868: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022586C: addiu       $a0, $a0, -0x6F20
    ctx->r4 = ADD32(ctx->r4, -0X6F20);
L_80225870:
    // 0x80225870: jal         0x800607C4
    // 0x80225874: nop

    func_800607C4_3BBC4(rdram, ctx);
        goto after_1;
    // 0x80225874: nop

    after_1:
    // 0x80225878: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022587C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225880:
    // 0x80225880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225884: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225888: jr          $ra
    // 0x8022588C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022588C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229934_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229934: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229938: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022993C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229940: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229944: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80229948: bne         $v0, $zero, L_80229970
    if (ctx->r2 != 0) {
        // 0x8022994C: addiu       $a1, $zero, 0x9
        ctx->r5 = ADD32(0, 0X9);
            goto L_80229970;
    }
    // 0x8022994C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80229950: jal         0x80050294
    // 0x80229954: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80229954: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80229958: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022995C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80229960: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229964: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80229968: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8022996C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80229970:
    // 0x80229970: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80229974: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80229978: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022997C: beql        $v1, $v0, L_80229984
    if (ctx->r3 == ctx->r2) {
        // 0x80229980: sb          $zero, 0xD($s0)
        MEM_B(0XD, ctx->r16) = 0;
            goto L_80229984;
    }
    goto skip_0;
    // 0x80229980: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    skip_0:
L_80229984:
    // 0x80229984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229988: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022998C: jr          $ra
    // 0x80229990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80229994: nop

    // 0x80229998: nop

    // 0x8022999C: nop

;}
RECOMP_FUNC void func_80226A74_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226A74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226A78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226A7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226A80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226A84: jal         0x80227F78
    // 0x80226A88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80227F78_ovl27(rdram, ctx);
        goto after_0;
    // 0x80226A88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80226A8C: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80226A90: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80226A94: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80226A98: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x80226A9C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80226AA0: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80226AA4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80226AA8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80226AAC: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80226AB0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x80226AB4: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
    // 0x80226AB8: sb          $a0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r4;
    // 0x80226ABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226AC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226AC4: jr          $ra
    // 0x80226AC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226AC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802336FC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802336FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233700: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233704: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233708: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023370C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80233710: bne         $v0, $zero, L_80233760
    if (ctx->r2 != 0) {
        // 0x80233714: addiu       $v0, $zero, -0xF0
        ctx->r2 = ADD32(0, -0XF0);
            goto L_80233760;
    }
    // 0x80233714: addiu       $v0, $zero, -0xF0
    ctx->r2 = ADD32(0, -0XF0);
    // 0x80233718: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023371C: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x80233720: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80233724: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233728: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x8023372C: lui         $v0, 0xFF10
    ctx->r2 = S32(0XFF10 << 16);
    // 0x80233730: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233734: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x80233738: lui         $v0, 0x64
    ctx->r2 = S32(0X64 << 16);
    // 0x8023373C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233740: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80233744: jal         0x802340E8
    // 0x80233748: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_802340E8_ovl27(rdram, ctx);
        goto after_0;
    // 0x80233748: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x8023374C: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80233750: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80233754: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80233758: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8023375C: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80233760:
    // 0x80233760: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80233764: jal         0x80234148
    // 0x80233768: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80234148_ovl27(rdram, ctx);
        goto after_1;
    // 0x80233768: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_1:
    // 0x8023376C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233770: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233774: jr          $ra
    // 0x80233778: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233778: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227E2C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227E2C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80227E30: lw          $a1, 0x4B34($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4B34);
    // 0x80227E34: bne         $a1, $a0, L_80227E88
    if (ctx->r5 != ctx->r4) {
        // 0x80227E38: addiu       $a2, $a0, 0x348
        ctx->r6 = ADD32(ctx->r4, 0X348);
            goto L_80227E88;
    }
    // 0x80227E38: addiu       $a2, $a0, 0x348
    ctx->r6 = ADD32(ctx->r4, 0X348);
    // 0x80227E3C: lbu         $v1, 0x2($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X2);
    // 0x80227E40: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x80227E44: bne         $v1, $v0, L_80227E54
    if (ctx->r3 != ctx->r2) {
        // 0x80227E48: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_80227E54;
    }
    // 0x80227E48: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80227E4C: j           L_80227E70
    // 0x80227E50: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_80227E70;
    // 0x80227E50: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80227E54:
    // 0x80227E54: bne         $v1, $v0, L_80227E64
    if (ctx->r3 != ctx->r2) {
        // 0x80227E58: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_80227E64;
    }
    // 0x80227E58: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x80227E5C: j           L_80227E70
    // 0x80227E60: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_80227E70;
    // 0x80227E60: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80227E64:
    // 0x80227E64: bne         $v1, $v0, L_80227E70
    if (ctx->r3 != ctx->r2) {
        // 0x80227E68: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80227E70;
    }
    // 0x80227E68: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227E6C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80227E70:
    // 0x80227E70: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80227E74: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x80227E78: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x80227E7C: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80227E80: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x80227E84: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_80227E88:
    // 0x80227E88: jr          $ra
    // 0x80227E8C: nop

    TRACE_RETURN()
    return;
    // 0x80227E8C: nop

;}
RECOMP_FUNC void func_8022D880_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D880: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D884: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D888: jal         0x8022D9F0
    // 0x8022D88C: nop

    func_8022D9F0_ovl27(rdram, ctx);
        goto after_0;
    // 0x8022D88C: nop

    after_0:
    // 0x8022D890: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D894: jr          $ra
    // 0x8022D898: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D898: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802322E0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802322E0: lb          $v0, 0xC($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XC);
    // 0x802322E4: lb          $a1, 0xC($a0)
    ctx->r5 = MEM_B(ctx->r4, 0XC);
    // 0x802322E8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802322EC: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
    // 0x802322F0: sb          $v1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r3;
    // 0x802322F4: lb          $v1, 0xC($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XC);
    // 0x802322F8: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x802322FC: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80232300: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
    // 0x80232304: sb          $zero, 0xF($a0)
    MEM_B(0XF, ctx->r4) = 0;
    // 0x80232308: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023230C: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x80232310: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x80232314: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80232318: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023231C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232320: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232324: lhu         $v0, -0x5D84($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X5D84);
    // 0x80232328: sh          $v0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r2;
    // 0x8023232C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80232330: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232334: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80232338: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023233C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232340: lhu         $v0, -0x5D82($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X5D82);
    // 0x80232344: lb          $v1, 0xC($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XC);
    // 0x80232348: addiu       $a2, $a0, 0x28
    ctx->r6 = ADD32(ctx->r4, 0X28);
    // 0x8023234C: sh          $v0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r2;
    // 0x80232350: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80232354: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232358: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023235C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232360: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232364: lhu         $v1, -0x5D80($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X5D80);
    // 0x80232368: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023236C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80232370: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
    // 0x80232374: sh          $v1, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r3;
L_80232378:
    // 0x80232378: sll         $v0, $a1, 3
    ctx->r2 = S32(ctx->r5 << 3);
    // 0x8023237C: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x80232380: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80232384: sltiu       $v0, $a1, 0x10
    ctx->r2 = ctx->r5 < 0X10 ? 1 : 0;
    // 0x80232388: bne         $v0, $zero, L_80232378
    if (ctx->r2 != 0) {
        // 0x8023238C: addiu       $a2, $a2, 0x2
        ctx->r6 = ADD32(ctx->r6, 0X2);
            goto L_80232378;
    }
    // 0x8023238C: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x80232390: jr          $ra
    // 0x80232394: nop

    TRACE_RETURN()
    return;
    // 0x80232394: nop

;}
RECOMP_FUNC void func_80231A3C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231A3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231A40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231A44: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80231A48: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80231A4C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231A50: lb          $v1, 0xF($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XF);
    // 0x80231A54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231A58: bne         $v1, $v0, L_80231B40
    if (ctx->r3 != ctx->r2) {
        // 0x80231A5C: nop
    
            goto L_80231B40;
    }
    // 0x80231A5C: nop

    // 0x80231A60: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80231A64: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80231A68: bne         $v0, $zero, L_80231B28
    if (ctx->r2 != 0) {
        // 0x80231A6C: nop
    
            goto L_80231B28;
    }
    // 0x80231A6C: nop

    // 0x80231A70: jal         0x8004F144
    // 0x80231A74: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80231A74: nop

    after_0:
    // 0x80231A78: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80231A7C: beq         $s0, $zero, L_80231B28
    if (ctx->r16 == 0) {
        // 0x80231A80: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80231B28;
    }
    // 0x80231A80: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80231A84: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80231A88: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80231A8C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80231A90: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80231A94: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80231A98: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x80231A9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231AA0: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80231AA4: jal         0x800A3450
    // 0x80231AA8: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80231AA8: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    after_1:
    // 0x80231AAC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80231AB0: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x80231AB4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80231AB8: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x80231ABC: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x80231AC0: jal         0x800A3450
    // 0x80231AC4: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80231AC4: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    after_2:
    // 0x80231AC8: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x80231ACC: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80231AD0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80231AD4: jal         0x800A3450
    // 0x80231AD8: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80231AD8: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_3:
    // 0x80231ADC: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x80231AE0: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x80231AE4: ori         $a0, $a0, 0x4E
    ctx->r4 = ctx->r4 | 0X4E;
    // 0x80231AE8: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80231AEC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80231AF0: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x80231AF4: lhu         $v1, 0x1E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1E);
    // 0x80231AF8: lui         $v0, 0x2E40
    ctx->r2 = S32(0X2E40 << 16);
    // 0x80231AFC: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
    // 0x80231B00: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80231B04: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80231B08: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    // 0x80231B0C: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x80231B10: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x80231B14: jal         0x800A3450
    // 0x80231B18: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80231B18: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    after_4:
    // 0x80231B1C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80231B20: addiu       $v0, $v0, 0xDC
    ctx->r2 = ADD32(ctx->r2, 0XDC);
    // 0x80231B24: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80231B28:
    // 0x80231B28: jal         0x800A3450
    // 0x80231B2C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80231B2C: nop

    after_5:
    // 0x80231B30: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80231B34: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80231B38: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231B3C: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
L_80231B40:
    // 0x80231B40: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231B44: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231B48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231B4C: jr          $ra
    // 0x80231B50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231B50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227E90_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227E90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227E94: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80227E98: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80227E9C: beq         $a0, $v0, L_80227F04
    if (ctx->r4 == ctx->r2) {
        // 0x80227EA0: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80227F04;
    }
    // 0x80227EA0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227EA4: slti        $v0, $a0, 0x2B
    ctx->r2 = SIGNED(ctx->r4) < 0X2B ? 1 : 0;
    // 0x80227EA8: beql        $v0, $zero, L_80227EC8
    if (ctx->r2 == 0) {
        // 0x80227EAC: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_80227EC8;
    }
    goto skip_0;
    // 0x80227EAC: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    skip_0:
    // 0x80227EB0: beq         $a0, $zero, L_80227EFC
    if (ctx->r4 == 0) {
        // 0x80227EB4: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_80227EFC;
    }
    // 0x80227EB4: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80227EB8: beq         $a0, $v0, L_80227F1C
    if (ctx->r4 == ctx->r2) {
        // 0x80227EBC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227F1C;
    }
    // 0x80227EBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227EC0: j           L_80227F1C
    // 0x80227EC4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80227F1C;
    // 0x80227EC4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80227EC8:
    // 0x80227EC8: beq         $a0, $v0, L_80227EFC
    if (ctx->r4 == ctx->r2) {
        // 0x80227ECC: slti        $v0, $a0, 0x51
        ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
            goto L_80227EFC;
    }
    // 0x80227ECC: slti        $v0, $a0, 0x51
    ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
    // 0x80227ED0: beq         $v0, $zero, L_80227EE8
    if (ctx->r2 == 0) {
        // 0x80227ED4: addiu       $v0, $zero, 0x39
        ctx->r2 = ADD32(0, 0X39);
            goto L_80227EE8;
    }
    // 0x80227ED4: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x80227ED8: beq         $a0, $v0, L_80227F1C
    if (ctx->r4 == ctx->r2) {
        // 0x80227EDC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80227F1C;
    }
    // 0x80227EDC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80227EE0: j           L_80227F1C
    // 0x80227EE4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80227F1C;
    // 0x80227EE4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80227EE8:
    // 0x80227EE8: addiu       $v0, $zero, 0x53
    ctx->r2 = ADD32(0, 0X53);
    // 0x80227EEC: beq         $a0, $v0, L_80227F0C
    if (ctx->r4 == ctx->r2) {
        // 0x80227EF0: nop
    
            goto L_80227F0C;
    }
    // 0x80227EF0: nop

    // 0x80227EF4: j           L_80227F1C
    // 0x80227EF8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80227F1C;
    // 0x80227EF8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80227EFC:
    // 0x80227EFC: j           L_80227F1C
    // 0x80227F00: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80227F1C;
    // 0x80227F00: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80227F04:
    // 0x80227F04: j           L_80227F1C
    // 0x80227F08: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_80227F1C;
    // 0x80227F08: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_80227F0C:
    // 0x80227F0C: jal         0x800A3450
    // 0x80227F10: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80227F10: nop

    after_0:
    // 0x80227F14: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80227F18: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
L_80227F1C:
    // 0x80227F1C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227F20: jr          $ra
    // 0x80227F24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227F24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802251BC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802251BC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802251C0: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802251C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802251C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802251CC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x802251D0: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802251D4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802251D8: addiu       $v1, $v1, 0xCB4
    ctx->r3 = ADD32(ctx->r3, 0XCB4);
    // 0x802251DC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802251E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251E4: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
    // 0x802251E8: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x802251EC: beq         $v0, $zero, L_80225208
    if (ctx->r2 == 0) {
        // 0x802251F0: addu        $s0, $a0, $v1
        ctx->r16 = ADD32(ctx->r4, ctx->r3);
            goto L_80225208;
    }
    // 0x802251F0: addu        $s0, $a0, $v1
    ctx->r16 = ADD32(ctx->r4, ctx->r3);
    // 0x802251F4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251F8: lw          $a0, 0x984($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X984);
    // 0x802251FC: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80225200: j           L_80225210
    // 0x80225204: addiu       $a1, $a1, -0x7550
    ctx->r5 = ADD32(ctx->r5, -0X7550);
        goto L_80225210;
    // 0x80225204: addiu       $a1, $a1, -0x7550
    ctx->r5 = ADD32(ctx->r5, -0X7550);
L_80225208:
    // 0x80225208: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022520C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_80225210:
    // 0x80225210: jal         0x80037D80
    // 0x80225214: nop

    func_80037D80_13180(rdram, ctx);
        goto after_0;
    // 0x80225214: nop

    after_0:
    // 0x80225218: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022521C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80225220: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225224: sh          $v1, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r3;
    // 0x80225228: lbu         $a1, 0x3($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X3);
    // 0x8022522C: lui         $a2, 0x7FE9
    ctx->r6 = S32(0X7FE9 << 16);
    // 0x80225230: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80225234: sh          $a1, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r5;
    // 0x80225238: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8022523C: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x80225240: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80225244: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225248: sb          $a0, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r4;
    // 0x8022524C: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    // 0x80225250: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80225254: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80225258: lb          $a0, -0x3BC7($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X3BC7);
    // 0x8022525C: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80225260: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80225264: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225268: sb          $v1, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r3;
    // 0x8022526C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80225270: addiu       $v1, $v1, 0xCB0
    ctx->r3 = ADD32(ctx->r3, 0XCB0);
    // 0x80225274: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80225278: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022527C: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x80225280: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80225284: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x80225288: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022528C: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x80225290: addu        $a1, $a1, $a3
    ctx->r5 = ADD32(ctx->r5, ctx->r7);
    // 0x80225294: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225298: sb          $a3, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r7;
    // 0x8022529C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x802252A0: sb          $a1, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r5;
    // 0x802252A4: beq         $a0, $zero, L_802252BC
    if (ctx->r4 == 0) {
        // 0x802252A8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802252BC;
    }
    // 0x802252A8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802252AC: beq         $a0, $v0, L_802252C8
    if (ctx->r4 == ctx->r2) {
        // 0x802252B0: nop
    
            goto L_802252C8;
    }
    // 0x802252B0: nop

    // 0x802252B4: j           L_802252D4
    // 0x802252B8: sb          $zero, 0x44E($s1)
    MEM_B(0X44E, ctx->r17) = 0;
        goto L_802252D4;
    // 0x802252B8: sb          $zero, 0x44E($s1)
    MEM_B(0X44E, ctx->r17) = 0;
L_802252BC:
    // 0x802252BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802252C0: j           L_802252D4
    // 0x802252C4: sb          $v0, 0x44E($s1)
    MEM_B(0X44E, ctx->r17) = ctx->r2;
        goto L_802252D4;
    // 0x802252C4: sb          $v0, 0x44E($s1)
    MEM_B(0X44E, ctx->r17) = ctx->r2;
L_802252C8:
    // 0x802252C8: jal         0x8006036C
    // 0x802252CC: addiu       $a0, $zero, 0x31D
    ctx->r4 = ADD32(0, 0X31D);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x802252CC: addiu       $a0, $zero, 0x31D
    ctx->r4 = ADD32(0, 0X31D);
    after_1:
    // 0x802252D0: sb          $zero, 0x44E($s1)
    MEM_B(0X44E, ctx->r17) = 0;
L_802252D4:
    // 0x802252D4: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x802252D8: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x802252DC: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802252E0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802252E4: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x802252E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802252EC: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802252F0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802252F4: lw          $a0, -0x7710($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7710);
    // 0x802252F8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802252FC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225300: lw          $v0, -0x75F8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X75F8);
    // 0x80225304: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225308: jal         0x8004C790
    // 0x8022530C: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_2;
    // 0x8022530C: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_2:
    // 0x80225310: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x80225314: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225318: addiu       $a0, $a0, -0x75B8
    ctx->r4 = ADD32(ctx->r4, -0X75B8);
    // 0x8022531C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80225320: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225324: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80225328: lw          $v1, -0x7560($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7560);
    // 0x8022532C: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x80225330: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80225334: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80225338: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022533C: addiu       $v0, $v0, -0x75E8
    ctx->r2 = ADD32(ctx->r2, -0X75E8);
    // 0x80225340: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80225344: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80225348: jal         0x80054FB8
    // 0x8022534C: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_3;
    // 0x8022534C: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_3:
    // 0x80225350: jal         0x8004A614
    // 0x80225354: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004A614_25A14(rdram, ctx);
        goto after_4;
    // 0x80225354: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x80225358: jal         0x80225380
    // 0x8022535C: nop

    func_80225380_ovl27(rdram, ctx);
        goto after_5;
    // 0x8022535C: nop

    after_5:
    // 0x80225360: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225364: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225368: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022536C: jr          $ra
    // 0x80225370: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225370: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80225374: nop

    // 0x80225378: nop

    // 0x8022537C: nop

;}
RECOMP_FUNC void func_802267D4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802267D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802267D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802267DC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802267E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802267E4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802267E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802267EC: lh          $a0, 0x64($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X64);
    // 0x802267F0: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x802267F4: lb          $a2, 0xF($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XF);
    // 0x802267F8: jal         0x8004FA7C
    // 0x802267FC: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x802267FC: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    after_0:
    // 0x80226800: lh          $a1, 0x362($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X362);
    // 0x80226804: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80226808: sll         $v1, $s2, 16
    ctx->r3 = S32(ctx->r18 << 16);
    // 0x8022680C: sra         $a0, $v1, 16
    ctx->r4 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80226810: srl         $v1, $a0, 31
    ctx->r3 = S32(U32(ctx->r4) >> 31);
    // 0x80226814: sltiu       $v0, $a1, 0x1
    ctx->r2 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x80226818: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022681C: bnel        $v0, $zero, L_8022683C
    if (ctx->r2 != 0) {
        // 0x80226820: negu        $s2, $s2
        ctx->r18 = SUB32(0, ctx->r18);
            goto L_8022683C;
    }
    goto skip_0;
    // 0x80226820: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
    skip_0:
    // 0x80226824: sltu        $v0, $zero, $a1
    ctx->r2 = 0 < ctx->r5 ? 1 : 0;
    // 0x80226828: slt         $v1, $zero, $a0
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022682C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226830: beq         $v0, $zero, L_80226840
    if (ctx->r2 == 0) {
        // 0x80226834: sll         $v0, $s2, 16
        ctx->r2 = S32(ctx->r18 << 16);
            goto L_80226840;
    }
    // 0x80226834: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80226838: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
L_8022683C:
    // 0x8022683C: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
L_80226840:
    // 0x80226840: bne         $v0, $zero, L_80226870
    if (ctx->r2 != 0) {
        // 0x80226844: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226870;
    }
    // 0x80226844: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226848: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022684C: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x80226850: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x80226854: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x80226858: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8022685C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80226860: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226864: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x80226868: j           L_802268C8
    // 0x8022686C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
        goto L_802268C8;
    // 0x8022686C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
L_80226870:
    // 0x80226870: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80226874: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226878: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022687C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226880: beq         $v0, $zero, L_802268C4
    if (ctx->r2 == 0) {
        // 0x80226884: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802268C4;
    }
    // 0x80226884: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226888: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022688C: jal         0x80227FC4
    // 0x80226890: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80227FC4_ovl27(rdram, ctx);
        goto after_1;
    // 0x80226890: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x80226894: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80226898: beq         $v0, $zero, L_802268D0
    if (ctx->r2 == 0) {
        // 0x8022689C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802268D0;
    }
    // 0x8022689C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802268A0: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x802268A4: jal         0x80227F28
    // 0x802268A8: nop

    func_80227F28_ovl27(rdram, ctx);
        goto after_2;
    // 0x802268A8: nop

    after_2:
    // 0x802268AC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x802268B0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802268B4: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x802268B8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802268BC: j           L_802268F0
    // 0x802268C0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_802268F0;
    // 0x802268C0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_802268C4:
    // 0x802268C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802268C8:
    // 0x802268C8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x802268CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_802268D0:
    // 0x802268D0: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x802268D4: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x802268D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802268DC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802268E0: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x802268E4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802268E8: jal         0x8004DA90
    // 0x802268EC: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x802268EC: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    after_3:
L_802268F0:
    // 0x802268F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802268F4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802268F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802268FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226900: jr          $ra
    // 0x80226904: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226904: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227D24_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227D24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227D28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227D2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227D30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227D34: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227D38: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80227D3C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80227D40: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80227D44: jal         0x8004F820
    // 0x80227D48: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80227D48: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80227D4C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227D50: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227D54: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80227D58: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80227D5C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80227D60: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80227D64: bne         $v0, $zero, L_80227D88
    if (ctx->r2 != 0) {
        // 0x80227D68: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_80227D88;
    }
    // 0x80227D68: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x80227D6C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80227D70: lbu         $a0, 0x34B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34B);
    // 0x80227D74: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80227D78: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80227D7C: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80227D80: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80227D84: sb          $a0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r4;
L_80227D88:
    // 0x80227D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227D8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227D90: jr          $ra
    // 0x80227D94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227D94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023263C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023263C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232640: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232644: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80232648: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023264C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232650: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232654: lw          $v0, -0x5C78($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5C78);
    // 0x80232658: jalr        $v0
    // 0x8023265C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023265C: nop

    after_0:
    // 0x80232660: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80232664: jr          $ra
    // 0x80232668: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232668: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D89C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D89C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022D8A0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022D8A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D8A8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022D8AC: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022D8B0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022D8B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D8B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D8BC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D8C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D8C4: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022D8C8: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8022D8CC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022D8D0: lbu         $a1, -0x6191($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X6191);
    // 0x8022D8D4: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x8022D8D8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022D8DC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022D8E0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022D8E4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D8E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D8EC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022D8F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D8F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D8F8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D8FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D900: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022D904: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D908: lbu         $v1, -0x618F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X618F);
    // 0x8022D90C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022D910: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022D914: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022D918: lui         $v0, 0x40A
    ctx->r2 = S32(0X40A << 16);
    // 0x8022D91C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022D920: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022D924: jal         0x80051E18
    // 0x8022D928: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x8022D928: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x8022D92C: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x8022D930: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022D934: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022D938: jr          $ra
    // 0x8022D93C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022D93C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022B02C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B02C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022B030: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022B034: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8022B038: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022B03C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8022B040: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022B044: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022B048: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022B04C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022B050: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B054: lw          $v1, 0x314($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X314);
    // 0x8022B058: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022B05C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022B060: and         $s2, $v1, $v0
    ctx->r18 = ctx->r3 & ctx->r2;
    // 0x8022B064: beq         $s2, $zero, L_8022B0D0
    if (ctx->r18 == 0) {
        // 0x8022B068: addiu       $s6, $s3, 0x2E8
        ctx->r22 = ADD32(ctx->r19, 0X2E8);
            goto L_8022B0D0;
    }
    // 0x8022B068: addiu       $s6, $s3, 0x2E8
    ctx->r22 = ADD32(ctx->r19, 0X2E8);
    // 0x8022B06C: lbu         $a0, 0xC($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0XC);
    // 0x8022B070: jal         0x80053ED8
    // 0x8022B074: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8022B074: nop

    after_0:
    // 0x8022B078: lhu         $v1, 0x6E($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X6E);
    // 0x8022B07C: subu        $v1, $v1, $s2
    ctx->r3 = SUB32(ctx->r3, ctx->r18);
    // 0x8022B080: sh          $v1, 0x6E($s3)
    MEM_H(0X6E, ctx->r19) = ctx->r3;
    // 0x8022B084: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022B088: bltz        $v1, L_8022B0DC
    if (SIGNED(ctx->r3) < 0) {
        // 0x8022B08C: addu        $a3, $v0, $zero
        ctx->r7 = ADD32(ctx->r2, 0);
            goto L_8022B0DC;
    }
    // 0x8022B08C: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8022B090: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x8022B094: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x8022B098: andi        $v0, $s5, 0xFF
    ctx->r2 = ctx->r21 & 0XFF;
L_8022B09C:
    // 0x8022B09C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022B0A0: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022B0A4: sh          $v1, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r3;
    // 0x8022B0A8: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x8022B0AC: andi        $v0, $s5, 0xFF
    ctx->r2 = ctx->r21 & 0XFF;
    // 0x8022B0B0: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8022B0B4: bne         $v0, $zero, L_8022B09C
    if (ctx->r2 != 0) {
        // 0x8022B0B8: andi        $v0, $s5, 0xFF
        ctx->r2 = ctx->r21 & 0XFF;
            goto L_8022B09C;
    }
    // 0x8022B0B8: andi        $v0, $s5, 0xFF
    ctx->r2 = ctx->r21 & 0XFF;
    // 0x8022B0BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B0C0: sb          $v0, 0xE($a3)
    MEM_B(0XE, ctx->r7) = ctx->r2;
    // 0x8022B0C4: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8022B0C8: jal         0x8002A33C
    // 0x8022B0CC: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022B0CC: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    after_1:
L_8022B0D0:
    // 0x8022B0D0: lh          $v0, 0x6E($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X6E);
    // 0x8022B0D4: bgezl       $v0, L_8022B190
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B0D8: addu        $s5, $zero, $zero
        ctx->r21 = ADD32(0, 0);
            goto L_8022B190;
    }
    goto skip_0;
    // 0x8022B0D8: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    skip_0:
L_8022B0DC:
    // 0x8022B0DC: lbu         $v1, 0x8($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X8);
    // 0x8022B0E0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B0E4: beq         $v1, $v0, L_8022B12C
    if (ctx->r3 == ctx->r2) {
        // 0x8022B0E8: nop
    
            goto L_8022B12C;
    }
    // 0x8022B0E8: nop

    // 0x8022B0EC: jal         0x80053ED8
    // 0x8022B0F0: lbu         $a0, 0xC($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_2;
    // 0x8022B0F0: lbu         $a0, 0xC($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0XC);
    after_2:
    // 0x8022B0F4: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8022B0F8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022B0FC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022B100: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B104: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B108: sb          $v0, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r2;
    // 0x8022B10C: sb          $zero, 0x9($s3)
    MEM_B(0X9, ctx->r19) = 0;
    // 0x8022B110: sb          $zero, 0xA($s3)
    MEM_B(0XA, ctx->r19) = 0;
    // 0x8022B114: sb          $v0, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r2;
    // 0x8022B118: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022B11C: sb          $zero, 0x9($a3)
    MEM_B(0X9, ctx->r7) = 0;
    // 0x8022B120: sb          $zero, 0xA($a3)
    MEM_B(0XA, ctx->r7) = 0;
    // 0x8022B124: jal         0x800502EC
    // 0x8022B128: sb          $v0, 0xAC($s3)
    MEM_B(0XAC, ctx->r19) = ctx->r2;
    func_800502EC_2B6EC(rdram, ctx);
        goto after_3;
    // 0x8022B128: sb          $v0, 0xAC($s3)
    MEM_B(0XAC, ctx->r19) = ctx->r2;
    after_3:
L_8022B12C:
    // 0x8022B12C: lw          $v1, 0x8($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X8);
    // 0x8022B130: bne         $v1, $zero, L_8022B16C
    if (ctx->r3 != 0) {
        // 0x8022B134: addiu       $a0, $s3, 0x180
        ctx->r4 = ADD32(ctx->r19, 0X180);
            goto L_8022B16C;
    }
    // 0x8022B134: addiu       $a0, $s3, 0x180
    ctx->r4 = ADD32(ctx->r19, 0X180);
    // 0x8022B138: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8022B13C: lbu         $a1, -0x658C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X658C);
    // 0x8022B140: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x8022B144: lbu         $a2, -0x658B($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X658B);
    // 0x8022B148: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x8022B14C: lh          $a3, -0x658A($a3)
    ctx->r7 = MEM_H(ctx->r7, -0X658A);
    // 0x8022B150: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022B154: lw          $v0, -0x6588($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6588);
    // 0x8022B158: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8022B15C: jal         0x80231268
    // 0x8022B160: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80231268_ovl27(rdram, ctx);
        goto after_4;
    // 0x8022B160: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_4:
    // 0x8022B164: j           L_8022B18C
    // 0x8022B168: sw          $v0, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r2;
        goto L_8022B18C;
    // 0x8022B168: sw          $v0, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r2;
L_8022B16C:
    // 0x8022B16C: lhu         $v0, 0x180($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X180);
    // 0x8022B170: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x8022B174: lw          $v1, 0x8($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X8);
    // 0x8022B178: lhu         $v0, 0x182($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X182);
    // 0x8022B17C: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x8022B180: lw          $v1, 0x8($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X8);
    // 0x8022B184: lhu         $v0, 0x184($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X184);
    // 0x8022B188: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
L_8022B18C:
    // 0x8022B18C: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
L_8022B190:
    // 0x8022B190: andi        $s1, $s5, 0xFF
    ctx->r17 = ctx->r21 & 0XFF;
L_8022B194:
    // 0x8022B194: sll         $v0, $s1, 3
    ctx->r2 = S32(ctx->r17 << 3);
    // 0x8022B198: addu        $v0, $s6, $v0
    ctx->r2 = ADD32(ctx->r22, ctx->r2);
    // 0x8022B19C: lw          $v1, 0x34($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X34);
    // 0x8022B1A0: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022B1A4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022B1A8: and         $s2, $v1, $v0
    ctx->r18 = ctx->r3 & ctx->r2;
    // 0x8022B1AC: beq         $s2, $zero, L_8022B1F8
    if (ctx->r18 == 0) {
        // 0x8022B1B0: sll         $s4, $s1, 1
        ctx->r20 = S32(ctx->r17 << 1);
            goto L_8022B1F8;
    }
    // 0x8022B1B0: sll         $s4, $s1, 1
    ctx->r20 = S32(ctx->r17 << 1);
    // 0x8022B1B4: addu        $s0, $s4, $s6
    ctx->r16 = ADD32(ctx->r20, ctx->r22);
    // 0x8022B1B8: lh          $v0, 0x70($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X70);
    // 0x8022B1BC: bltz        $v0, L_8022B20C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022B1C0: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022B20C;
    }
    // 0x8022B1C0: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8022B1C4: sll         $a1, $s1, 4
    ctx->r5 = S32(ctx->r17 << 4);
    // 0x8022B1C8: addiu       $a1, $a1, 0x1A0
    ctx->r5 = ADD32(ctx->r5, 0X1A0);
    // 0x8022B1CC: jal         0x8002A33C
    // 0x8022B1D0: addu        $a1, $s3, $a1
    ctx->r5 = ADD32(ctx->r19, ctx->r5);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8022B1D0: addu        $a1, $s3, $a1
    ctx->r5 = ADD32(ctx->r19, ctx->r5);
    after_5:
    // 0x8022B1D4: lhu         $v0, 0x70($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X70);
    // 0x8022B1D8: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x8022B1DC: subu        $v0, $v0, $s2
    ctx->r2 = SUB32(ctx->r2, ctx->r18);
    // 0x8022B1E0: sh          $v0, 0x70($s0)
    MEM_H(0X70, ctx->r16) = ctx->r2;
    // 0x8022B1E4: addu        $v0, $s4, $s1
    ctx->r2 = ADD32(ctx->r20, ctx->r17);
    // 0x8022B1E8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022B1EC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022B1F0: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022B1F4: sh          $v1, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r3;
L_8022B1F8:
    // 0x8022B1F8: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x8022B1FC: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x8022B200: lh          $v0, 0x70($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X70);
    // 0x8022B204: bgezl       $v0, L_8022B308
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B208: addiu       $s5, $s5, 0x1
        ctx->r21 = ADD32(ctx->r21, 0X1);
            goto L_8022B308;
    }
    goto skip_1;
    // 0x8022B208: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    skip_1:
L_8022B20C:
    // 0x8022B20C: andi        $v1, $s5, 0xFF
    ctx->r3 = ctx->r21 & 0XFF;
    // 0x8022B210: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022B214: addu        $s1, $v0, $s6
    ctx->r17 = ADD32(ctx->r2, ctx->r22);
    // 0x8022B218: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8022B21C: bne         $a0, $zero, L_8022B2D0
    if (ctx->r4 != 0) {
        // 0x8022B220: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_8022B2D0;
    }
    // 0x8022B220: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022B224: sll         $s0, $v1, 1
    ctx->r16 = S32(ctx->r3 << 1);
    // 0x8022B228: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x8022B22C: sll         $a0, $s0, 3
    ctx->r4 = S32(ctx->r16 << 3);
    // 0x8022B230: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8022B234: lbu         $a1, -0x658C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X658C);
    // 0x8022B238: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x8022B23C: lbu         $a2, -0x658B($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X658B);
    // 0x8022B240: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x8022B244: lh          $a3, -0x658A($a3)
    ctx->r7 = MEM_H(ctx->r7, -0X658A);
    // 0x8022B248: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022B24C: lw          $v0, -0x6588($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6588);
    // 0x8022B250: addiu       $a0, $a0, 0x1A0
    ctx->r4 = ADD32(ctx->r4, 0X1A0);
    // 0x8022B254: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    // 0x8022B258: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8022B25C: jal         0x80231268
    // 0x8022B260: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80231268_ovl27(rdram, ctx);
        goto after_6;
    // 0x8022B260: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_6:
    // 0x8022B264: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8022B268: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8022B26C: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x8022B270: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022B274: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8022B278: jal         0x8004F144
    // 0x8022B27C: sb          $v1, 0xFB($v0)
    MEM_B(0XFB, ctx->r2) = ctx->r3;
    func_8004F144_2A544(rdram, ctx);
        goto after_7;
    // 0x8022B27C: sb          $v1, 0xFB($v0)
    MEM_B(0XFB, ctx->r2) = ctx->r3;
    after_7:
    // 0x8022B280: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022B284: beq         $a0, $zero, L_8022B304
    if (ctx->r4 == 0) {
        // 0x8022B288: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022B304;
    }
    // 0x8022B288: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B28C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8022B290: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022B294: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8022B298: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022B29C: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x8022B2A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B2A4: sll         $v1, $s0, 3
    ctx->r3 = S32(ctx->r16 << 3);
    // 0x8022B2A8: addu        $v1, $s3, $v1
    ctx->r3 = ADD32(ctx->r19, ctx->r3);
    // 0x8022B2AC: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x8022B2B0: lhu         $v0, 0x180($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X180);
    // 0x8022B2B4: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x8022B2B8: lhu         $v0, 0x182($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X182);
    // 0x8022B2BC: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022B2C0: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x8022B2C4: lhu         $v0, 0x184($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X184);
    // 0x8022B2C8: j           L_8022B304
    // 0x8022B2CC: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
        goto L_8022B304;
    // 0x8022B2CC: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
L_8022B2D0:
    // 0x8022B2D0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B2D4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022B2D8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022B2DC: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022B2E0: lhu         $v1, 0x180($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X180);
    // 0x8022B2E4: sh          $v1, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r3;
    // 0x8022B2E8: lhu         $v1, 0x182($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X182);
    // 0x8022B2EC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8022B2F0: addiu       $v1, $v1, -0x20
    ctx->r3 = ADD32(ctx->r3, -0X20);
    // 0x8022B2F4: sh          $v1, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r3;
    // 0x8022B2F8: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8022B2FC: lhu         $v0, 0x184($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X184);
    // 0x8022B300: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
L_8022B304:
    // 0x8022B304: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_8022B308:
    // 0x8022B308: andi        $v0, $s5, 0xFF
    ctx->r2 = ctx->r21 & 0XFF;
    // 0x8022B30C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022B310: bne         $v0, $zero, L_8022B194
    if (ctx->r2 != 0) {
        // 0x8022B314: andi        $s1, $s5, 0xFF
        ctx->r17 = ctx->r21 & 0XFF;
            goto L_8022B194;
    }
    // 0x8022B314: andi        $s1, $s5, 0xFF
    ctx->r17 = ctx->r21 & 0XFF;
    // 0x8022B318: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022B31C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022B320: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B324: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022B328: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022B32C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022B330: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B334: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B338: jr          $ra
    // 0x8022B33C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022B33C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80237C6C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237C6C: jr          $ra
    // 0x80237C70: nop

    TRACE_RETURN()
    return;
    // 0x80237C70: nop

;}
RECOMP_FUNC void func_8023568C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023568C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235690: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235694: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235698: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023569C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802356A0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802356A4: bne         $v0, $zero, L_802356E0
    if (ctx->r2 != 0) {
        // 0x802356A8: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_802356E0;
    }
    // 0x802356A8: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x802356AC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802356B0: jal         0x80050294
    // 0x802356B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802356B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802356B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802356BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802356C0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x802356C4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802356C8: jal         0x80235CD8
    // 0x802356CC: sb          $v0, 0x108($s0)
    MEM_B(0X108, ctx->r16) = ctx->r2;
    func_80235CD8_ovl27(rdram, ctx);
        goto after_1;
    // 0x802356CC: sb          $v0, 0x108($s0)
    MEM_B(0X108, ctx->r16) = ctx->r2;
    after_1:
    // 0x802356D0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802356D4: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x802356D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802356DC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802356E0:
    // 0x802356E0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802356E4: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x802356E8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802356EC: bne         $v1, $v0, L_80235700
    if (ctx->r3 != ctx->r2) {
        // 0x802356F0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235700;
    }
    // 0x802356F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802356F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802356F8: jal         0x80235CD8
    // 0x802356FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_80235CD8_ovl27(rdram, ctx);
        goto after_2;
    // 0x802356FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
L_80235700:
    // 0x80235700: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80235704: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235708: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023570C: jr          $ra
    // 0x80235710: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235710: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023795C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023795C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80237960: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80237964: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
    // 0x80237968: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x8023796C: sb          $v0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r2;
    // 0x80237970: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80237974: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80237978: lw          $v0, -0x3DE4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3DE4);
    // 0x8023797C: jr          $ra
    // 0x80237980: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80237980: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80230024_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230024: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230028: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x8023002C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230030: lbu         $a1, 0x3($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X3);
    // 0x80230034: lh          $v1, 0x56($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X56);
    // 0x80230038: addiu       $v0, $zero, 0x1FF
    ctx->r2 = ADD32(0, 0X1FF);
    // 0x8023003C: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    // 0x80230040: addiu       $a2, $zero, 0x1FF
    ctx->r6 = ADD32(0, 0X1FF);
    // 0x80230044: addiu       $a3, $a3, 0x14
    ctx->r7 = ADD32(ctx->r7, 0X14);
    // 0x80230048: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023004C: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x80230050: addiu       $a1, $a1, -0x400
    ctx->r5 = ADD32(ctx->r5, -0X400);
    // 0x80230054: andi        $a1, $a1, 0xC00
    ctx->r5 = ctx->r5 & 0XC00;
    // 0x80230058: jal         0x8004FD60
    // 0x8023005C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FD60_2B160(rdram, ctx);
        goto after_0;
    // 0x8023005C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x80230060: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230064: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80230068: jr          $ra
    // 0x8023006C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023006C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802308E4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802308E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802308E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802308EC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802308F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802308F4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802308F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802308FC: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80230900: lw          $s2, 0x44($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X44);
    // 0x80230904: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230908: beq         $v1, $v0, L_80230950
    if (ctx->r3 == ctx->r2) {
        // 0x8023090C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80230950;
    }
    // 0x8023090C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80230910: beql        $v0, $zero, L_80230928
    if (ctx->r2 == 0) {
        // 0x80230914: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80230928;
    }
    goto skip_0;
    // 0x80230914: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80230918: beq         $v1, $zero, L_80230938
    if (ctx->r3 == 0) {
        // 0x8023091C: lui         $v1, 0x20
        ctx->r3 = S32(0X20 << 16);
            goto L_80230938;
    }
    // 0x8023091C: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x80230920: j           L_80230A7C
    // 0x80230924: nop

        goto L_80230A7C;
    // 0x80230924: nop

L_80230928:
    // 0x80230928: beq         $v1, $v0, L_80230984
    if (ctx->r3 == ctx->r2) {
        // 0x8023092C: nop
    
            goto L_80230984;
    }
    // 0x8023092C: nop

    // 0x80230930: j           L_80230A7C
    // 0x80230934: nop

        goto L_80230A7C;
    // 0x80230934: nop

L_80230938:
    // 0x80230938: lh          $v0, 0x3A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3A);
    // 0x8023093C: sw          $v1, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r3;
    // 0x80230940: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80230944: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
    // 0x80230948: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023094C: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
L_80230950:
    // 0x80230950: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80230954: ori         $v0, $v0, 0xFF00
    ctx->r2 = ctx->r2 | 0XFF00;
    // 0x80230958: lw          $v1, 0xC($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XC);
    // 0x8023095C: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x80230960: ori         $a0, $a0, 0x1000
    ctx->r4 = ctx->r4 | 0X1000;
    // 0x80230964: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80230968: bne         $v1, $a0, L_80230978
    if (ctx->r3 != ctx->r4) {
        // 0x8023096C: nop
    
            goto L_80230978;
    }
    // 0x8023096C: nop

    // 0x80230970: jal         0x80230B18
    // 0x80230974: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80230B18_ovl27(rdram, ctx);
        goto after_0;
    // 0x80230974: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
L_80230978:
    // 0x80230978: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8023097C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230980: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80230984:
    // 0x80230984: lw          $v0, 0x4C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4C);
    // 0x80230988: lw          $a0, 0x50($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X50);
    // 0x8023098C: lhu         $v1, 0x3A($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X3A);
    // 0x80230990: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80230994: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
    // 0x80230998: lw          $v0, 0x50($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X50);
    // 0x8023099C: lhu         $a1, 0x4C($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X4C);
    // 0x802309A0: lui         $a0, 0xFFFC
    ctx->r4 = S32(0XFFFC << 16);
    // 0x802309A4: addiu       $v1, $v1, -0x50
    ctx->r3 = ADD32(ctx->r3, -0X50);
    // 0x802309A8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802309AC: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802309B0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802309B4: sh          $a1, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r5;
    // 0x802309B8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x802309BC: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802309C0: slt         $v1, $v1, $a1
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x802309C4: beq         $v1, $zero, L_80230A34
    if (ctx->r3 == 0) {
        // 0x802309C8: sw          $v0, 0x50($s1)
        MEM_W(0X50, ctx->r17) = ctx->r2;
            goto L_80230A34;
    }
    // 0x802309C8: sw          $v0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r2;
    // 0x802309CC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802309D0: addiu       $a1, $s2, 0x3
    ctx->r5 = ADD32(ctx->r18, 0X3);
    // 0x802309D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802309D8: sb          $zero, 0x3($s2)
    MEM_B(0X3, ctx->r18) = 0;
    // 0x802309DC: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x802309E0: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x802309E4: sw          $zero, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = 0;
    // 0x802309E8: jal         0x8004D5D4
    // 0x802309EC: sw          $zero, 0x50($s2)
    MEM_W(0X50, ctx->r18) = 0;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x802309EC: sw          $zero, 0x50($s2)
    MEM_W(0X50, ctx->r18) = 0;
    after_1:
    // 0x802309F0: addiu       $s0, $s2, 0x18
    ctx->r16 = ADD32(ctx->r18, 0X18);
    // 0x802309F4: jal         0x8002C654
    // 0x802309F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_2;
    // 0x802309F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802309FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230A00: jal         0x800317C0
    // 0x80230A04: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800317C0_CBC0(rdram, ctx);
        goto after_3;
    // 0x80230A04: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80230A08: lbu         $a0, 0xB($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0XB);
    // 0x80230A0C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80230A10: jal         0x800319B4
    // 0x80230A14: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_4;
    // 0x80230A14: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_4:
    // 0x80230A18: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230A1C: jal         0x80031BB4
    // 0x80230A20: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_5;
    // 0x80230A20: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80230A24: jal         0x8004F684
    // 0x80230A28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_6;
    // 0x80230A28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x80230A2C: j           L_80230A7C
    // 0x80230A30: nop

        goto L_80230A7C;
    // 0x80230A30: nop

L_80230A34:
    // 0x80230A34: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80230A38: jal         0x8002C654
    // 0x80230A3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_7;
    // 0x80230A3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80230A40: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x80230A44: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80230A48: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80230A4C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80230A50: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80230A54: lh          $a0, -0x5E60($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X5E60);
    // 0x80230A58: jal         0x80031BB4
    // 0x80230A5C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_8;
    // 0x80230A5C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80230A60: lb          $a0, 0xF($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XF);
    // 0x80230A64: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80230A68: jal         0x800319B4
    // 0x80230A6C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_9;
    // 0x80230A6C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_9:
    // 0x80230A70: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x80230A74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230A78: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_80230A7C:
    // 0x80230A7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80230A80: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80230A84: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230A88: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230A8C: jr          $ra
    // 0x80230A90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230A90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228824_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228824: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228828: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022882C: jal         0x8004F418
    // 0x80228830: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80228830: nop

    after_0:
    // 0x80228834: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228838: jr          $ra
    // 0x8022883C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022883C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237C5C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237C5C: jr          $ra
    // 0x80237C60: nop

    TRACE_RETURN()
    return;
    // 0x80237C60: nop

;}
RECOMP_FUNC void func_80236AE4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236AE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236AE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236AEC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236AF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236AF4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80236AF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236AFC: beq         $v1, $v0, L_80236B64
    if (ctx->r3 == ctx->r2) {
        // 0x80236B00: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80236B64;
    }
    // 0x80236B00: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80236B04: beql        $v0, $zero, L_80236B1C
    if (ctx->r2 == 0) {
        // 0x80236B08: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80236B1C;
    }
    goto skip_0;
    // 0x80236B08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80236B0C: beq         $v1, $zero, L_80236B2C
    if (ctx->r3 == 0) {
        // 0x80236B10: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236B2C;
    }
    // 0x80236B10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236B14: j           L_80236B84
    // 0x80236B18: nop

        goto L_80236B84;
    // 0x80236B18: nop

L_80236B1C:
    // 0x80236B1C: beq         $v1, $v0, L_80236B7C
    if (ctx->r3 == ctx->r2) {
        // 0x80236B20: nop
    
            goto L_80236B7C;
    }
    // 0x80236B20: nop

    // 0x80236B24: j           L_80236B84
    // 0x80236B28: nop

        goto L_80236B84;
    // 0x80236B28: nop

L_80236B2C:
    // 0x80236B2C: addiu       $v0, $zero, -0x50
    ctx->r2 = ADD32(0, -0X50);
    // 0x80236B30: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80236B34: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80236B38: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80236B3C: addiu       $v0, $zero, 0x258
    ctx->r2 = ADD32(0, 0X258);
    // 0x80236B40: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80236B44: addiu       $v0, $zero, -0x300
    ctx->r2 = ADD32(0, -0X300);
    // 0x80236B48: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80236B4C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236B50: jal         0x80050294
    // 0x80236B54: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80236B54: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x80236B58: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80236B5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236B60: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80236B64:
    // 0x80236B64: jal         0x80051770
    // 0x80236B68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_1;
    // 0x80236B68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80236B6C: jal         0x80051248
    // 0x80236B70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_2;
    // 0x80236B70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80236B74: j           L_80236B84
    // 0x80236B78: nop

        goto L_80236B84;
    // 0x80236B78: nop

L_80236B7C:
    // 0x80236B7C: jal         0x8005044C
    // 0x80236B80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x80236B80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80236B84:
    // 0x80236B84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236B88: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236B8C: jr          $ra
    // 0x80236B90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236B90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237BC4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237BC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237BC8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237BCC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237BD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237BD4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80237BD8: bne         $v0, $zero, L_80237BFC
    if (ctx->r2 != 0) {
        // 0x80237BDC: addiu       $v0, $zero, -0x400
        ctx->r2 = ADD32(0, -0X400);
            goto L_80237BFC;
    }
    // 0x80237BDC: addiu       $v0, $zero, -0x400
    ctx->r2 = ADD32(0, -0X400);
    // 0x80237BE0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80237BE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237BE8: jal         0x80050294
    // 0x80237BEC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80237BEC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x80237BF0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80237BF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237BF8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80237BFC:
    // 0x80237BFC: jal         0x8005044C
    // 0x80237C00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80237C00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237C08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237C0C: jr          $ra
    // 0x80237C10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237C10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023034C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023034C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230350: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230354: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80230358: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023035C: jal         0x8004F144
    // 0x80230360: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80230360: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80230364: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80230368: beq         $s0, $zero, L_802303A8
    if (ctx->r16 == 0) {
        // 0x8023036C: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_802303A8;
    }
    // 0x8023036C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80230370: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80230374: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80230378: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023037C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80230380: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80230384: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x80230388: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023038C: jal         0x8009A3B4
    // 0x80230390: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230390: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_1:
    // 0x80230394: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x80230398: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023039C: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x802303A0: jal         0x8004F684
    // 0x802303A4: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    func_8004F684_2AA84(rdram, ctx);
        goto after_2;
    // 0x802303A4: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    after_2:
L_802303A8:
    // 0x802303A8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802303AC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802303B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802303B4: jr          $ra
    // 0x802303B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802303B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80235AFC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235AFC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80235B00: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80235B04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235B08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235B0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235B10: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235B14: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80235B18: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80235B1C: beq         $v1, $v0, L_80235B38
    if (ctx->r3 == ctx->r2) {
        // 0x80235B20: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_80235B38;
    }
    // 0x80235B20: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80235B24: addiu       $v0, $zero, 0x69
    ctx->r2 = ADD32(0, 0X69);
    // 0x80235B28: beq         $v1, $v0, L_80235B58
    if (ctx->r3 == ctx->r2) {
        // 0x80235B2C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235B58;
    }
    // 0x80235B2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235B30: j           L_80235B68
    // 0x80235B34: nop

        goto L_80235B68;
    // 0x80235B34: nop

L_80235B38:
    // 0x80235B38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235B3C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80235B40: jal         0x80050294
    // 0x80235B44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80235B44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80235B48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235B4C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235B50: j           L_80235B60
    // 0x80235B54: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
        goto L_80235B60;
    // 0x80235B54: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
L_80235B58:
    // 0x80235B58: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235B5C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
L_80235B60:
    // 0x80235B60: jal         0x80235CD8
    // 0x80235B64: nop

    func_80235CD8_ovl27(rdram, ctx);
        goto after_1;
    // 0x80235B64: nop

    after_1:
L_80235B68:
    // 0x80235B68: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80235B6C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235B70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235B74: jr          $ra
    // 0x80235B78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235B78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E0B0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E0B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E0B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E0B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E0BC: lui         $t3, 0x3D48
    ctx->r11 = S32(0X3D48 << 16);
    // 0x8022E0C0: ori         $t3, $t3, 0x2E
    ctx->r11 = ctx->r11 | 0X2E;
    // 0x8022E0C4: lui         $t2, 0x2E40
    ctx->r10 = S32(0X2E40 << 16);
    // 0x8022E0C8: ori         $t2, $t2, 0xE040
    ctx->r10 = ctx->r10 | 0XE040;
    // 0x8022E0CC: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022E0D0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022E0D4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022E0D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E0DC: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022E0E0: lhu         $a3, 0x1C($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X1C);
    // 0x8022E0E4: lhu         $t0, 0x20($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X20);
    // 0x8022E0E8: lhu         $t1, 0x24($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X24);
    // 0x8022E0EC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8022E0F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E0F4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022E0F8: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8022E0FC: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8022E100: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8022E104: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x8022E108: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022E10C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
    // 0x8022E110: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022E114: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022E118: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022E11C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022E120: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8022E124: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8022E128: sw          $zero, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = 0;
    // 0x8022E12C: sw          $t3, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r11;
    // 0x8022E130: sw          $t2, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r10;
    // 0x8022E134: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x8022E138: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022E13C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x8022E140: sh          $a3, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r7;
    // 0x8022E144: sh          $a3, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r7;
    // 0x8022E148: sh          $t0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r8;
    // 0x8022E14C: sh          $t0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r8;
    // 0x8022E150: sh          $t1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r9;
    // 0x8022E154: jal         0x8009A3B4
    // 0x8022E158: sh          $t1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r9;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022E158: sh          $t1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r9;
    after_0:
    // 0x8022E15C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022E160: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022E164: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E168: jal         0x8009A3B4
    // 0x8022E16C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022E16C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022E170: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    // 0x8022E174: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E178: jal         0x8002A33C
    // 0x8022E17C: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022E17C: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    after_2:
    // 0x8022E180: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022E184: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E188: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E18C: jr          $ra
    // 0x8022E190: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E190: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233574_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233574: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80233578: bne         $v0, $zero, L_802335A8
    if (ctx->r2 != 0) {
        // 0x8023357C: addiu       $v0, $zero, -0x12C
        ctx->r2 = ADD32(0, -0X12C);
            goto L_802335A8;
    }
    // 0x8023357C: addiu       $v0, $zero, -0x12C
    ctx->r2 = ADD32(0, -0X12C);
    // 0x80233580: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233584: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x80233588: lui         $v0, 0xFED4
    ctx->r2 = S32(0XFED4 << 16);
    // 0x8023358C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233590: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x80233594: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80233598: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8023359C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802335A0: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x802335A4: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_802335A8:
    // 0x802335A8: jr          $ra
    // 0x802335AC: nop

    TRACE_RETURN()
    return;
    // 0x802335AC: nop

;}
RECOMP_FUNC void func_802322B0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802322B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802322B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802322B8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802322BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802322C0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802322C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802322C8: lw          $v0, -0x5C84($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5C84);
    // 0x802322CC: jalr        $v0
    // 0x802322D0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802322D0: nop

    after_0:
    // 0x802322D4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802322D8: jr          $ra
    // 0x802322DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802322DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226908_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226908: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x8022690C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226910: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x80226914: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226918: bne         $v0, $zero, L_80226924
    if (ctx->r2 != 0) {
        // 0x8022691C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226924;
    }
    // 0x8022691C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226920: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80226924:
    // 0x80226924: jr          $ra
    // 0x80226928: nop

    TRACE_RETURN()
    return;
    // 0x80226928: nop

;}
