#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80241B2C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241B2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80241B30: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80241B34: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80241B38: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80241B3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80241B40: lb          $v1, 0xF($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XF);
    // 0x80241B44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80241B48: bne         $v1, $v0, L_80241C30
    if (ctx->r3 != ctx->r2) {
        // 0x80241B4C: nop
    
            goto L_80241C30;
    }
    // 0x80241B4C: nop

    // 0x80241B50: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80241B54: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80241B58: bne         $v0, $zero, L_80241C18
    if (ctx->r2 != 0) {
        // 0x80241B5C: nop
    
            goto L_80241C18;
    }
    // 0x80241B5C: nop

    // 0x80241B60: jal         0x8004F144
    // 0x80241B64: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80241B64: nop

    after_0:
    // 0x80241B68: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80241B6C: beq         $s0, $zero, L_80241C18
    if (ctx->r16 == 0) {
        // 0x80241B70: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80241C18;
    }
    // 0x80241B70: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80241B74: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80241B78: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80241B7C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80241B80: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80241B84: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80241B88: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x80241B8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80241B90: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80241B94: jal         0x800A3450
    // 0x80241B98: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80241B98: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    after_1:
    // 0x80241B9C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80241BA0: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x80241BA4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80241BA8: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x80241BAC: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x80241BB0: jal         0x800A3450
    // 0x80241BB4: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80241BB4: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    after_2:
    // 0x80241BB8: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x80241BBC: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80241BC0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80241BC4: jal         0x800A3450
    // 0x80241BC8: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80241BC8: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_3:
    // 0x80241BCC: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x80241BD0: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x80241BD4: ori         $a0, $a0, 0x4E
    ctx->r4 = ctx->r4 | 0X4E;
    // 0x80241BD8: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80241BDC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80241BE0: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x80241BE4: lhu         $v1, 0x1E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1E);
    // 0x80241BE8: lui         $v0, 0x2E40
    ctx->r2 = S32(0X2E40 << 16);
    // 0x80241BEC: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
    // 0x80241BF0: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80241BF4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80241BF8: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    // 0x80241BFC: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x80241C00: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x80241C04: jal         0x800A3450
    // 0x80241C08: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80241C08: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    after_4:
    // 0x80241C0C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80241C10: addiu       $v0, $v0, 0xDC
    ctx->r2 = ADD32(ctx->r2, 0XDC);
    // 0x80241C14: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80241C18:
    // 0x80241C18: jal         0x800A3450
    // 0x80241C1C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80241C1C: nop

    after_5:
    // 0x80241C20: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80241C24: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80241C28: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80241C2C: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
L_80241C30:
    // 0x80241C30: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80241C34: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80241C38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80241C3C: jr          $ra
    // 0x80241C40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80241C40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226BC8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226BC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226BCC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226BD0: jal         0x8005FB90
    // 0x80226BD4: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_0;
    // 0x80226BD4: nop

    after_0:
    // 0x80226BD8: jal         0x80060018
    // 0x80226BDC: nop

    func_80060018_3B418(rdram, ctx);
        goto after_1;
    // 0x80226BDC: nop

    after_1:
    // 0x80226BE0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226BE4: jr          $ra
    // 0x80226BE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226BE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B790_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B790: jr          $ra
    // 0x8023B794: nop

    TRACE_RETURN()
    return;
    // 0x8023B794: nop

    // 0x8023B798: nop

    // 0x8023B79C: nop

;}
RECOMP_FUNC void func_802394B4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802394B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802394B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802394BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802394C0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802394C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802394C8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802394CC: bne         $v0, $zero, L_802394FC
    if (ctx->r2 != 0) {
        // 0x802394D0: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_802394FC;
    }
    // 0x802394D0: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x802394D4: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x802394D8: jal         0x80050294
    // 0x802394DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802394DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802394E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802394E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802394E8: jal         0x80239590
    // 0x802394EC: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    func_80239590_ovl5(rdram, ctx);
        goto after_1;
    // 0x802394EC: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_1:
    // 0x802394F0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802394F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802394F8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802394FC:
    // 0x802394FC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80239500: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80239504: addiu       $v0, $zero, 0x23A
    ctx->r2 = ADD32(0, 0X23A);
    // 0x80239508: bne         $v1, $v0, L_80239528
    if (ctx->r3 != ctx->r2) {
        // 0x8023950C: addiu       $v0, $zero, 0x258
        ctx->r2 = ADD32(0, 0X258);
            goto L_80239528;
    }
    // 0x8023950C: addiu       $v0, $zero, 0x258
    ctx->r2 = ADD32(0, 0X258);
    // 0x80239510: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80239514: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239518: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8023951C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80239520: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80239524: addiu       $v0, $zero, 0x258
    ctx->r2 = ADD32(0, 0X258);
L_80239528:
    // 0x80239528: bne         $v1, $v0, L_8023953C
    if (ctx->r3 != ctx->r2) {
        // 0x8023952C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023953C;
    }
    // 0x8023952C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239530: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239534: jal         0x80239590
    // 0x80239538: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    func_80239590_ovl5(rdram, ctx);
        goto after_2;
    // 0x80239538: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    after_2:
L_8023953C:
    // 0x8023953C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80239540: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80239544: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239548: jr          $ra
    // 0x8023954C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023954C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FA1C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FA1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FA20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FA24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FA28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FA2C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022FA30: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022FA34: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022FA38: jal         0x8004D5D4
    // 0x8022FA3C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022FA3C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022FA40: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022FA44: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022FA48: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022FA4C: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x8022FA50: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022FA54: lhu         $a2, 0x54($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X54);
    // 0x8022FA58: lhu         $a3, 0x56($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FA5C: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022FA60: lhu         $t0, 0x58($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X58);
    // 0x8022FA64: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FA68: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022FA6C: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x8022FA70: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022FA74: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022FA78: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x8022FA7C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022FA80: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022FA84: lw          $t3, 0x24($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X24);
    // 0x8022FA88: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022FA8C: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x8022FA90: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022FA94: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022FA98: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022FA9C: addiu       $v0, $v0, 0x5C28
    ctx->r2 = ADD32(ctx->r2, 0X5C28);
    // 0x8022FAA0: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8022FAA4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022FAA8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022FAAC: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022FAB0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022FAB4: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022FAB8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022FABC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022FAC0: sh          $a1, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r5;
    // 0x8022FAC4: sh          $a2, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r6;
    // 0x8022FAC8: sh          $a3, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r7;
    // 0x8022FACC: sh          $t0, 0x60($s0)
    MEM_H(0X60, ctx->r16) = ctx->r8;
    // 0x8022FAD0: sh          $v1, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r3;
    // 0x8022FAD4: sh          $a0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r4;
    // 0x8022FAD8: sw          $t1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r9;
    // 0x8022FADC: sw          $t2, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r10;
    // 0x8022FAE0: sw          $t3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r11;
    // 0x8022FAE4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022FAE8: lb          $a1, 0xE($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XE);
    // 0x8022FAEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FAF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FAF4: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022FAF8: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x8022FAFC: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8022FB00: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x8022FB04: jal         0x80050294
    // 0x8022FB08: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022FB08: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022FB0C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FB10: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022FB14: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FB18: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022FB1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FB20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FB24: jr          $ra
    // 0x8022FB28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FB28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B134_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B134: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023B138: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023B13C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023B140: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023B144: addiu       $s1, $s2, 0x440
    ctx->r17 = ADD32(ctx->r18, 0X440);
    // 0x8023B148: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8023B14C: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x8023B150: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8023B154: addiu       $s6, $zero, 0x200
    ctx->r22 = ADD32(0, 0X200);
    // 0x8023B158: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8023B15C: lui         $s5, 0x8024
    ctx->r21 = S32(0X8024 << 16);
    // 0x8023B160: addiu       $s5, $s5, 0x6474
    ctx->r21 = ADD32(ctx->r21, 0X6474);
    // 0x8023B164: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023B168: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x8023B16C: addiu       $s3, $s3, 0x6480
    ctx->r19 = ADD32(ctx->r19, 0X6480);
    // 0x8023B170: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023B174: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_8023B178:
    // 0x8023B178: jal         0x8004EFE4
    // 0x8023B17C: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8023B17C: nop

    after_0:
    // 0x8023B180: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023B184: beq         $s0, $zero, L_8023B254
    if (ctx->r16 == 0) {
        // 0x8023B188: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023B254;
    }
    // 0x8023B188: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B18C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8023B190: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023B194: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8023B198: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023B19C: addiu       $v0, $v0, 0x4D58
    ctx->r2 = ADD32(ctx->r2, 0X4D58);
    // 0x8023B1A0: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x8023B1A4: sw          $v0, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r2;
    // 0x8023B1A8: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x8023B1AC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023B1B0: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x8023B1B4: lhu         $v0, 0x180($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X180);
    // 0x8023B1B8: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8023B1BC: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x8023B1C0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023B1C4: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x8023B1C8: lhu         $v0, 0x182($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X182);
    // 0x8023B1CC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8023B1D0: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x8023B1D4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023B1D8: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x8023B1DC: lhu         $v0, 0x184($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X184);
    // 0x8023B1E0: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8023B1E4: sw          $zero, 0x38($s1)
    MEM_W(0X38, ctx->r17) = 0;
    // 0x8023B1E8: sw          $zero, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = 0;
    // 0x8023B1EC: lhu         $v0, 0x54($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X54);
    // 0x8023B1F0: lhu         $v1, 0x0($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X0);
    // 0x8023B1F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023B1F8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023B1FC: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    // 0x8023B200: slti        $v0, $s4, 0x3
    ctx->r2 = SIGNED(ctx->r20) < 0X3 ? 1 : 0;
    // 0x8023B204: beq         $v0, $zero, L_8023B218
    if (ctx->r2 == 0) {
        // 0x8023B208: nop
    
            goto L_8023B218;
    }
    // 0x8023B208: nop

    // 0x8023B20C: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8023B210: j           L_8023B220
    // 0x8023B214: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
        goto L_8023B220;
    // 0x8023B214: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
L_8023B218:
    // 0x8023B218: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8023B21C: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
L_8023B220:
    // 0x8023B220: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023B224: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    // 0x8023B228: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x8023B22C: addiu       $s0, $s0, 0x8C
    ctx->r16 = ADD32(ctx->r16, 0X8C);
    // 0x8023B230: jal         0x80031600
    // 0x8023B234: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_1;
    // 0x8023B234: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023B238: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B23C: addiu       $a1, $s1, 0x40
    ctx->r5 = ADD32(ctx->r17, 0X40);
    // 0x8023B240: sw          $s6, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r22;
    // 0x8023B244: sw          $s6, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r22;
    // 0x8023B248: sw          $s6, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r22;
    // 0x8023B24C: jal         0x80031DA8
    // 0x8023B250: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x8023B250: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
    after_2:
L_8023B254:
    // 0x8023B254: addiu       $s5, $s5, 0x2
    ctx->r21 = ADD32(ctx->r21, 0X2);
    // 0x8023B258: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8023B25C: slti        $v0, $s4, 0x6
    ctx->r2 = SIGNED(ctx->r20) < 0X6 ? 1 : 0;
    // 0x8023B260: bne         $v0, $zero, L_8023B178
    if (ctx->r2 != 0) {
        // 0x8023B264: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_8023B178;
    }
    // 0x8023B264: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8023B268: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8023B26C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8023B270: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8023B274: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8023B278: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8023B27C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023B280: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023B284: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023B288: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B28C: jr          $ra
    // 0x8023B290: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023B290: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022BDC0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BDC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BDC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BDC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BDCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BDD0: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022BDD4: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8022BDD8: addiu       $a0, $a0, -0x3A50
    ctx->r4 = ADD32(ctx->r4, -0X3A50);
    // 0x8022BDDC: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022BDE0: beq         $v0, $zero, L_8022BEF0
    if (ctx->r2 == 0) {
        // 0x8022BDE4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022BEF0;
    }
    // 0x8022BDE4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022BDE8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022BDEC: addu        $at, $at, $v0
    gpr jr_addend_8022BDF4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BDF0: lw          $v0, 0x70E8($at)
    ctx->r2 = ADD32(ctx->r1, 0X70E8);
    // 0x8022BDF4: jr          $v0
    // 0x8022BDF8: nop

    switch (jr_addend_8022BDF4 >> 2) {
        case 0: goto L_8022BDFC; break;
        case 1: goto L_8022BE60; break;
        case 2: goto L_8022BE78; break;
        case 3: goto L_8022BE94; break;
        case 4: goto L_8022BEC4; break;
        default: switch_error(__func__, 0x8022BDF4, 0x802470E8);
    }
    // 0x8022BDF8: nop

L_8022BDFC:
    // 0x8022BDFC: addiu       $v0, $zero, 0x206
    ctx->r2 = ADD32(0, 0X206);
    // 0x8022BE00: sh          $v0, 0x438($s0)
    MEM_H(0X438, ctx->r16) = ctx->r2;
    // 0x8022BE04: addiu       $v0, $zero, -0x301
    ctx->r2 = ADD32(0, -0X301);
    // 0x8022BE08: sh          $v0, 0x43A($s0)
    MEM_H(0X43A, ctx->r16) = ctx->r2;
    // 0x8022BE0C: addiu       $v0, $zero, 0x90F
    ctx->r2 = ADD32(0, 0X90F);
    // 0x8022BE10: sh          $v0, 0x43C($s0)
    MEM_H(0X43C, ctx->r16) = ctx->r2;
    // 0x8022BE14: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022BE18: sb          $v0, 0x448($s0)
    MEM_B(0X448, ctx->r16) = ctx->r2;
    // 0x8022BE1C: lh          $v0, 0x438($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X438);
    // 0x8022BE20: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x8022BE24: lh          $v1, 0x43A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X43A);
    // 0x8022BE28: lh          $a0, 0x43C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X43C);
    // 0x8022BE2C: sh          $zero, 0x440($s0)
    MEM_H(0X440, ctx->r16) = 0;
    // 0x8022BE30: sh          $zero, 0x442($s0)
    MEM_H(0X442, ctx->r16) = 0;
    // 0x8022BE34: sh          $zero, 0x444($s0)
    MEM_H(0X444, ctx->r16) = 0;
    // 0x8022BE38: sw          $zero, 0x184($s0)
    MEM_W(0X184, ctx->r16) = 0;
    // 0x8022BE3C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8022BE40: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BE44: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022BE48: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022BE4C: sw          $v0, 0x428($s0)
    MEM_W(0X428, ctx->r16) = ctx->r2;
    // 0x8022BE50: sw          $v1, 0x42C($s0)
    MEM_W(0X42C, ctx->r16) = ctx->r3;
    // 0x8022BE54: sw          $a0, 0x430($s0)
    MEM_W(0X430, ctx->r16) = ctx->r4;
    // 0x8022BE58: j           L_8022BEF0
    // 0x8022BE5C: sb          $a1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r5;
        goto L_8022BEF0;
    // 0x8022BE5C: sb          $a1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r5;
L_8022BE60:
    // 0x8022BE60: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x8022BE64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BE68: beq         $v1, $v0, L_8022BEE4
    if (ctx->r3 == ctx->r2) {
        // 0x8022BE6C: nop
    
            goto L_8022BEE4;
    }
    // 0x8022BE6C: nop

    // 0x8022BE70: j           L_8022BEF0
    // 0x8022BE74: nop

        goto L_8022BEF0;
    // 0x8022BE74: nop

L_8022BE78:
    // 0x8022BE78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022BE7C: jal         0x800616FC
    // 0x8022BE80: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x8022BE80: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_0:
    // 0x8022BE84: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022BE88: addiu       $v1, $zero, 0x32
    ctx->r3 = ADD32(0, 0X32);
    // 0x8022BE8C: j           L_8022BEE8
    // 0x8022BE90: sb          $v1, 0x448($s0)
    MEM_B(0X448, ctx->r16) = ctx->r3;
        goto L_8022BEE8;
    // 0x8022BE90: sb          $v1, 0x448($s0)
    MEM_B(0X448, ctx->r16) = ctx->r3;
L_8022BE94:
    // 0x8022BE94: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022BE98: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022BE9C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022BEA0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022BEA4: bne         $v0, $zero, L_8022BEF0
    if (ctx->r2 != 0) {
        // 0x8022BEA8: nop
    
            goto L_8022BEF0;
    }
    // 0x8022BEA8: nop

    // 0x8022BEAC: jal         0x80036B38
    // 0x8022BEB0: addiu       $a0, $zero, 0x703
    ctx->r4 = ADD32(0, 0X703);
    func_80036B38_11F38(rdram, ctx);
        goto after_1;
    // 0x8022BEB0: addiu       $a0, $zero, 0x703
    ctx->r4 = ADD32(0, 0X703);
    after_1:
    // 0x8022BEB4: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022BEB8: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x8022BEBC: j           L_8022BEE8
    // 0x8022BEC0: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
        goto L_8022BEE8;
    // 0x8022BEC0: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_8022BEC4:
    // 0x8022BEC4: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022BEC8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022BECC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8022BED0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022BED4: bne         $v0, $zero, L_8022BEF0
    if (ctx->r2 != 0) {
        // 0x8022BED8: nop
    
            goto L_8022BEF0;
    }
    // 0x8022BED8: nop

    // 0x8022BEDC: jal         0x800600F8
    // 0x8022BEE0: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_2;
    // 0x8022BEE0: nop

    after_2:
L_8022BEE4:
    // 0x8022BEE4: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
L_8022BEE8:
    // 0x8022BEE8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BEEC: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_8022BEF0:
    // 0x8022BEF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BEF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BEF8: jr          $ra
    // 0x8022BEFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BEFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226570_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226570: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226574: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226578: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022657C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226580: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80226584: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226588: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022658C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226590: lw          $v0, 0x3314($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3314);
    // 0x80226594: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80226598: jalr        $v0
    // 0x8022659C: addiu       $s0, $s0, 0x73D0
    ctx->r16 = ADD32(ctx->r16, 0X73D0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022659C: addiu       $s0, $s0, 0x73D0
    ctx->r16 = ADD32(ctx->r16, 0X73D0);
    after_0:
    // 0x802265A0: addiu       $v1, $s0, 0x60
    ctx->r3 = ADD32(ctx->r16, 0X60);
    // 0x802265A4: sltu        $v0, $s0, $v1
    ctx->r2 = ctx->r16 < ctx->r3 ? 1 : 0;
    // 0x802265A8: beq         $v0, $zero, L_802265DC
    if (ctx->r2 == 0) {
        // 0x802265AC: addu        $s1, $v1, $zero
        ctx->r17 = ADD32(ctx->r3, 0);
            goto L_802265DC;
    }
    // 0x802265AC: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
L_802265B0:
    // 0x802265B0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802265B4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802265B8: beql        $v0, $zero, L_802265D0
    if (ctx->r2 == 0) {
        // 0x802265BC: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_802265D0;
    }
    goto skip_0;
    // 0x802265BC: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_0:
    // 0x802265C0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x802265C4: jalr        $v0
    // 0x802265C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x802265C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802265CC: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
L_802265D0:
    // 0x802265D0: sltu        $v0, $s0, $s1
    ctx->r2 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x802265D4: bne         $v0, $zero, L_802265B0
    if (ctx->r2 != 0) {
        // 0x802265D8: nop
    
            goto L_802265B0;
    }
    // 0x802265D8: nop

L_802265DC:
    // 0x802265DC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802265E0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802265E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802265E8: jr          $ra
    // 0x802265EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802265EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022BB2C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BB2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BB30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BB34: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BB38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BB3C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022BB40: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022BB44: beq         $v0, $zero, L_8022BB58
    if (ctx->r2 == 0) {
        // 0x8022BB48: nop
    
            goto L_8022BB58;
    }
    // 0x8022BB48: nop

    // 0x8022BB4C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022BB50: jal         0x80060D38
    // 0x8022BB54: lh          $a0, 0x50D0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X50D0);
    func_80060D38_3C138(rdram, ctx);
        goto after_0;
    // 0x8022BB54: lh          $a0, 0x50D0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X50D0);
    after_0:
L_8022BB58:
    // 0x8022BB58: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022BB5C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022BB60: beq         $v0, $zero, L_8022BB74
    if (ctx->r2 == 0) {
        // 0x8022BB64: nop
    
            goto L_8022BB74;
    }
    // 0x8022BB64: nop

    // 0x8022BB68: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022BB6C: jal         0x80060D38
    // 0x8022BB70: lh          $a0, 0x50D2($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X50D2);
    func_80060D38_3C138(rdram, ctx);
        goto after_1;
    // 0x8022BB70: lh          $a0, 0x50D2($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X50D2);
    after_1:
L_8022BB74:
    // 0x8022BB74: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022BB78: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8022BB7C: beq         $v0, $zero, L_8022BB90
    if (ctx->r2 == 0) {
        // 0x8022BB80: nop
    
            goto L_8022BB90;
    }
    // 0x8022BB80: nop

    // 0x8022BB84: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022BB88: jal         0x80060D38
    // 0x8022BB8C: lh          $a0, 0x50D4($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X50D4);
    func_80060D38_3C138(rdram, ctx);
        goto after_2;
    // 0x8022BB8C: lh          $a0, 0x50D4($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X50D4);
    after_2:
L_8022BB90:
    // 0x8022BB90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BB94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BB98: jr          $ra
    // 0x8022BB9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BB9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802259E8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802259E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802259EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802259F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802259F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802259F8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802259FC: bne         $v0, $zero, L_80225A58
    if (ctx->r2 != 0) {
        // 0x80225A00: nop
    
            goto L_80225A58;
    }
    // 0x80225A00: nop

    // 0x80225A04: jal         0x80226BEC
    // 0x80225A08: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80226BEC_ovl5(rdram, ctx);
        goto after_0;
    // 0x80225A08: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x80225A0C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225A10: jal         0x8003E87C
    // 0x80225A14: addiu       $a0, $a0, 0x30C0
    ctx->r4 = ADD32(ctx->r4, 0X30C0);
    func_8003E87C_19C7C(rdram, ctx);
        goto after_1;
    // 0x80225A14: addiu       $a0, $a0, 0x30C0
    ctx->r4 = ADD32(ctx->r4, 0X30C0);
    after_1:
    // 0x80225A18: addiu       $v1, $zero, 0x4B
    ctx->r3 = ADD32(0, 0X4B);
    // 0x80225A1C: bne         $v0, $v1, L_80225A28
    if (ctx->r2 != ctx->r3) {
        // 0x80225A20: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80225A28;
    }
    // 0x80225A20: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80225A24: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_80225A28:
    // 0x80225A28: jal         0x80226D28
    // 0x80225A2C: nop

    func_80226D28_ovl5(rdram, ctx);
        goto after_2;
    // 0x80225A2C: nop

    after_2:
    // 0x80225A30: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225A34: jal         0x8003E87C
    // 0x80225A38: addiu       $a0, $a0, 0x30D8
    ctx->r4 = ADD32(ctx->r4, 0X30D8);
    func_8003E87C_19C7C(rdram, ctx);
        goto after_3;
    // 0x80225A38: addiu       $a0, $a0, 0x30D8
    ctx->r4 = ADD32(ctx->r4, 0X30D8);
    after_3:
    // 0x80225A3C: addiu       $v1, $zero, 0x4B
    ctx->r3 = ADD32(0, 0X4B);
    // 0x80225A40: beq         $v0, $v1, L_80225A54
    if (ctx->r2 == ctx->r3) {
        // 0x80225A44: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225A54;
    }
    // 0x80225A44: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225A48: jal         0x80226D28
    // 0x80225A4C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80226D28_ovl5(rdram, ctx);
        goto after_4;
    // 0x80225A4C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_4:
    // 0x80225A50: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225A54:
    // 0x80225A54: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225A58:
    // 0x80225A58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225A5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225A60: jr          $ra
    // 0x80225A64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225A64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80240F00_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80240F00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80240F04: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80240F08: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80240F0C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80240F10: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80240F14: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80240F18: lw          $v0, 0x6E20($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6E20);
    // 0x80240F1C: jalr        $v0
    // 0x80240F20: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80240F20: nop

    after_0:
    // 0x80240F24: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80240F28: jr          $ra
    // 0x80240F2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80240F2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E7FC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E7FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E800: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E804: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E808: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E80C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022E810: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022E814: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022E818: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022E81C: jal         0x8004F820
    // 0x8022E820: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022E820: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022E824: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E828: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x8022E82C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E830: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022E834: bgez        $a0, L_8022E858
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8022E838: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022E858;
    }
    // 0x8022E838: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022E83C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E840: jal         0x8022F578
    // 0x8022E844: nop

    func_8022F578_ovl5(rdram, ctx);
        goto after_1;
    // 0x8022E844: nop

    after_1:
    // 0x8022E848: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022E84C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E850: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022E854: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_8022E858:
    // 0x8022E858: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022E85C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022E860: bne         $v0, $zero, L_8022E884
    if (ctx->r2 != 0) {
        // 0x8022E864: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022E884;
    }
    // 0x8022E864: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022E868: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E86C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022E870: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x8022E874: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022E878: jal         0x8022F578
    // 0x8022E87C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    func_8022F578_ovl5(rdram, ctx);
        goto after_2;
    // 0x8022E87C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022E880: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022E884:
    // 0x8022E884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E888: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E88C: jr          $ra
    // 0x8022E890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FB2C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FB2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FB30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FB34: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FB38: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022FB3C: lh          $a0, 0x7450($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X7450);
    // 0x8022FB40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FB44: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022FB48: jal         0x8004FA7C
    // 0x8022FB4C: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022FB4C: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    after_0:
    // 0x8022FB50: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FB54: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FB58: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022FB5C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FB60: bne         $v0, $zero, L_8022FBB0
    if (ctx->r2 != 0) {
        // 0x8022FB64: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022FBB0;
    }
    // 0x8022FB64: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022FB68: jal         0x8003516C
    // 0x8022FB6C: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x8022FB6C: nop

    after_1:
    // 0x8022FB70: bne         $v0, $zero, L_8022FBB0
    if (ctx->r2 != 0) {
        // 0x8022FB74: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022FBB0;
    }
    // 0x8022FB74: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022FB78: lb          $a3, 0xC($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XC);
    // 0x8022FB7C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022FB80: jal         0x800610AC
    // 0x8022FB84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_2;
    // 0x8022FB84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022FB88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FB8C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022FB90: jal         0x80050294
    // 0x8022FB94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022FB94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8022FB98: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FB9C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022FBA0: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022FBA4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FBA8: j           L_8022FBB8
    // 0x8022FBAC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022FBB8;
    // 0x8022FBAC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022FBB0:
    // 0x8022FBB0: jal         0x8005044C
    // 0x8022FBB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x8022FBB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_8022FBB8:
    // 0x8022FBB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FBBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FBC0: jr          $ra
    // 0x8022FBC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FBC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233B10_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233B10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233B14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233B18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233B1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233B20: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80233B24: lhu         $v1, 0x46($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X46);
    // 0x80233B28: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80233B2C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80233B30: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80233B34: addiu       $v1, $v1, 0x30
    ctx->r3 = ADD32(ctx->r3, 0X30);
    // 0x80233B38: sll         $a2, $v1, 16
    ctx->r6 = S32(ctx->r3 << 16);
    // 0x80233B3C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80233B40: jal         0x8004DA90
    // 0x80233B44: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80233B44: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    after_0:
    // 0x80233B48: jal         0x8003E934
    // 0x80233B4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80233B4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80233B50: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80233B54: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80233B58: beq         $v0, $zero, L_80233B88
    if (ctx->r2 == 0) {
        // 0x80233B5C: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_80233B88;
    }
    // 0x80233B5C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80233B60: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x80233B64: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x80233B68: addiu       $a3, $s0, 0x14
    ctx->r7 = ADD32(ctx->r16, 0X14);
    // 0x80233B6C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80233B70: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80233B74: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80233B78: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80233B7C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80233B80: jal         0x8003491C
    // 0x80233B84: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_8003491C_FD1C(rdram, ctx);
        goto after_2;
    // 0x80233B84: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_2:
L_80233B88:
    // 0x80233B88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233B8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233B90: jr          $ra
    // 0x80233B94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233B94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023057C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023057C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230580: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230584: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230588: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023058C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80230590: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230594: jal         0x8004DDE8
    // 0x80230598: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DDE8_291E8(rdram, ctx);
        goto after_0;
    // 0x80230598: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8023059C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802305A0: sltiu       $v0, $v1, 0x258
    ctx->r2 = ctx->r3 < 0X258 ? 1 : 0;
    // 0x802305A4: beq         $v0, $zero, L_802305E8
    if (ctx->r2 == 0) {
        // 0x802305A8: sltiu       $v0, $v1, 0x190
        ctx->r2 = ctx->r3 < 0X190 ? 1 : 0;
            goto L_802305E8;
    }
    // 0x802305A8: sltiu       $v0, $v1, 0x190
    ctx->r2 = ctx->r3 < 0X190 ? 1 : 0;
    // 0x802305AC: beq         $v0, $zero, L_802305C8
    if (ctx->r2 == 0) {
        // 0x802305B0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802305C8;
    }
    // 0x802305B0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802305B4: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802305B8: beq         $v1, $v0, L_80230628
    if (ctx->r3 == ctx->r2) {
        // 0x802305BC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80230628;
    }
    // 0x802305BC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802305C0: j           L_80230628
    // 0x802305C4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80230628;
    // 0x802305C4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802305C8:
    // 0x802305C8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802305CC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802305D0: beq         $v1, $v0, L_80230628
    if (ctx->r3 == ctx->r2) {
        // 0x802305D4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80230628;
    }
    // 0x802305D4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802305D8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802305DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802305E0: j           L_80230608
    // 0x802305E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_80230608;
    // 0x802305E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_802305E8:
    // 0x802305E8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802305EC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802305F0: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x802305F4: bne         $v0, $zero, L_80230628
    if (ctx->r2 != 0) {
        // 0x802305F8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80230628;
    }
    // 0x802305F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802305FC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80230600: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230604: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80230608:
    // 0x80230608: jal         0x80050294
    // 0x8023060C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8023060C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80230610: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230614: jal         0x80230658
    // 0x80230618: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80230658_ovl5(rdram, ctx);
        goto after_2;
    // 0x80230618: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x8023061C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230620: jal         0x80230638
    // 0x80230624: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80230638_ovl5(rdram, ctx);
        goto after_3;
    // 0x80230624: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_80230628:
    // 0x80230628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023062C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230630: jr          $ra
    // 0x80230634: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230634: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023837C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023837C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238380: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238384: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238388: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023838C: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80238390: lhu         $v1, 0x4C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4C);
    // 0x80238394: lhu         $a2, 0x4E($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X4E);
    // 0x80238398: lhu         $a3, 0x50($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X50);
    // 0x8023839C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802383A0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802383A4: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x802383A8: lhu         $v1, 0x48($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X48);
    // 0x802383AC: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x802383B0: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802383B4: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x802383B8: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x802383BC: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x802383C0: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802383C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802383C8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802383CC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x802383D0: jal         0x8004DA90
    // 0x802383D4: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x802383D4: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    after_0:
    // 0x802383D8: lh          $v1, 0x46($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X46);
    // 0x802383DC: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x802383E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802383E4: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x802383E8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802383EC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802383F0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802383F4: jal         0x8005044C
    // 0x802383F8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x802383F8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    after_1:
    // 0x802383FC: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x80238400: lw          $a2, -0x3A28($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3A28);
    // 0x80238404: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80238408: sw          $v0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r2;
    // 0x8023840C: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x80238410: lui         $v1, 0x260
    ctx->r3 = S32(0X260 << 16);
    // 0x80238414: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80238418: sw          $v0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r2;
    // 0x8023841C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80238420: addiu       $a0, $a2, 0x1C
    ctx->r4 = ADD32(ctx->r6, 0X1C);
    // 0x80238424: addiu       $a1, $a2, 0x14
    ctx->r5 = ADD32(ctx->r6, 0X14);
    // 0x80238428: jal         0x8004DD04
    // 0x8023842C: sw          $v0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x8023842C: sw          $v0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r2;
    after_2:
    // 0x80238430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238434: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238438: jr          $ra
    // 0x8023843C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023843C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023F040_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023F040: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023F044: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8023F048: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023F04C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8023F050: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023F054: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023F058: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023F05C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023F060: lw          $v0, 0x6C80($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6C80);
    // 0x8023F064: jalr        $v0
    // 0x8023F068: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023F068: nop

    after_0:
    // 0x8023F06C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8023F070: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023F074: bne         $v0, $zero, L_8023F088
    if (ctx->r2 != 0) {
        // 0x8023F078: nop
    
            goto L_8023F088;
    }
    // 0x8023F078: nop

    // 0x8023F07C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8023F080: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023F084: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
L_8023F088:
    // 0x8023F088: lb          $v1, 0xF($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XF);
    // 0x8023F08C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8023F090: beql        $v1, $v0, L_8023F098
    if (ctx->r3 == ctx->r2) {
        // 0x8023F094: sb          $zero, 0xF($s0)
        MEM_B(0XF, ctx->r16) = 0;
            goto L_8023F098;
    }
    goto skip_0;
    // 0x8023F094: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    skip_0:
L_8023F098:
    // 0x8023F098: lhu         $v0, 0x90($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X90);
    // 0x8023F09C: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x8023F0A0: lhu         $v0, 0x92($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X92);
    // 0x8023F0A4: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8023F0A8: lhu         $v0, 0x94($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X94);
    // 0x8023F0AC: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    // 0x8023F0B0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8023F0B4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023F0B8: bne         $v0, $zero, L_8023F120
    if (ctx->r2 != 0) {
        // 0x8023F0BC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023F120;
    }
    // 0x8023F0BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023F0C0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023F0C4: beq         $v0, $zero, L_8023F0E0
    if (ctx->r2 == 0) {
        // 0x8023F0C8: addiu       $a1, $zero, 0x20
        ctx->r5 = ADD32(0, 0X20);
            goto L_8023F0E0;
    }
    // 0x8023F0C8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8023F0CC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8023F0D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023F0D4: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8023F0D8: j           L_8023F0F0
    // 0x8023F0DC: addiu       $a3, $zero, 0x4000
    ctx->r7 = ADD32(0, 0X4000);
        goto L_8023F0F0;
    // 0x8023F0DC: addiu       $a3, $zero, 0x4000
    ctx->r7 = ADD32(0, 0X4000);
L_8023F0E0:
    // 0x8023F0E0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8023F0E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023F0E8: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8023F0EC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
L_8023F0F0:
    // 0x8023F0F0: addiu       $v0, $s0, 0x9C
    ctx->r2 = ADD32(ctx->r16, 0X9C);
    // 0x8023F0F4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023F0F8: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8023F0FC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8023F100: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023F104: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023F108: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8023F10C: jal         0x80051E18
    // 0x8023F110: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x8023F110: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x8023F114: jal         0x800472C0
    // 0x8023F118: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800472C0_226C0(rdram, ctx);
        goto after_2;
    // 0x8023F118: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023F11C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023F120:
    // 0x8023F120: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x8023F124: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8023F128: jal         0x8003B564
    // 0x8023F12C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_3;
    // 0x8023F12C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x8023F130: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8023F134: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8023F138: jr          $ra
    // 0x8023F13C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023F13C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80240C2C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80240C2C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80240C30: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80240C34: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80240C38: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80240C3C: addiu       $s2, $sp, 0x10
    ctx->r18 = ADD32(ctx->r29, 0X10);
    // 0x80240C40: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80240C44: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80240C48: addiu       $a1, $a1, 0x73C0
    ctx->r5 = ADD32(ctx->r5, 0X73C0);
    // 0x80240C4C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80240C50: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80240C54: jal         0x8009A3B4
    // 0x80240C58: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80240C58: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x80240C5C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80240C60: beq         $v0, $zero, L_80240CB0
    if (ctx->r2 == 0) {
        // 0x80240C64: lui         $v0, 0x38E3
        ctx->r2 = S32(0X38E3 << 16);
            goto L_80240CB0;
    }
    // 0x80240C64: lui         $v0, 0x38E3
    ctx->r2 = S32(0X38E3 << 16);
    // 0x80240C68: lbu         $v1, 0xD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XD);
    // 0x80240C6C: ori         $v0, $v0, 0x8E39
    ctx->r2 = ctx->r2 | 0X8E39;
    // 0x80240C70: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80240C74: mfhi        $a3
    ctx->r7 = hi;
    // 0x80240C78: srl         $a0, $a3, 3
    ctx->r4 = S32(U32(ctx->r7) >> 3);
    // 0x80240C7C: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x80240C80: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80240C84: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80240C88: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80240C8C: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x80240C90: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80240C94: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x80240C98: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80240C9C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80240CA0: lhu         $v1, 0x6DB8($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X6DB8);
    // 0x80240CA4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240CA8: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x80240CAC: sh          $v1, 0x58($s1)
    MEM_H(0X58, ctx->r17) = ctx->r3;
L_80240CB0:
    // 0x80240CB0: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x80240CB4: jal         0x8002C654
    // 0x80240CB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x80240CB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80240CBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80240CC0: jal         0x80031DA8
    // 0x80240CC4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x80240CC4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_2:
    // 0x80240CC8: lh          $a0, 0x56($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X56);
    // 0x80240CCC: jal         0x800319B4
    // 0x80240CD0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800319B4_CDB4(rdram, ctx);
        goto after_3;
    // 0x80240CD0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80240CD4: lh          $a0, 0x58($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X58);
    // 0x80240CD8: jal         0x80031BB4
    // 0x80240CDC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_4;
    // 0x80240CDC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80240CE0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80240CE4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80240CE8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80240CEC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80240CF0: jr          $ra
    // 0x80240CF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80240CF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80240CF8: nop

    // 0x80240CFC: nop

;}
RECOMP_FUNC void func_802361CC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802361CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802361D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802361D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802361D8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802361DC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802361E0: lh          $a0, 0x5E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X5E);
    // 0x802361E4: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802361E8: jal         0x8004FA7C
    // 0x802361EC: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x802361EC: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    after_0:
    // 0x802361F0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802361F4: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x802361F8: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802361FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236200: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80236204: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236208: bne         $v0, $zero, L_8023625C
    if (ctx->r2 != 0) {
        // 0x8023620C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8023625C;
    }
    // 0x8023620C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80236210: jal         0x8003516C
    // 0x80236214: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x80236214: nop

    after_1:
    // 0x80236218: bne         $v0, $zero, L_8023625C
    if (ctx->r2 != 0) {
        // 0x8023621C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023625C;
    }
    // 0x8023621C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236220: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80236224: jal         0x80050294
    // 0x80236228: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80236228: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8023622C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80236230: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80236234: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80236238: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8023623C: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80236240: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80236244: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80236248: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x8023624C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236250: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x80236254: j           L_80236264
    // 0x80236258: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80236264;
    // 0x80236258: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8023625C:
    // 0x8023625C: jal         0x8005044C
    // 0x80236260: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x80236260: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80236264:
    // 0x80236264: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80236268: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023626C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236270: jr          $ra
    // 0x80236274: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236274: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80236278: nop

    // 0x8023627C: nop

;}
RECOMP_FUNC void func_8022AA3C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AA3C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8022AA40: bne         $v0, $zero, L_8022AA6C
    if (ctx->r2 != 0) {
        // 0x8022AA44: lui         $v0, 0xFE3E
        ctx->r2 = S32(0XFE3E << 16);
            goto L_8022AA6C;
    }
    // 0x8022AA44: lui         $v0, 0xFE3E
    ctx->r2 = S32(0XFE3E << 16);
    // 0x8022AA48: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AA4C: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x8022AA50: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022AA54: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AA58: sw          $zero, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = 0;
    // 0x8022AA5C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AA60: sw          $zero, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = 0;
    // 0x8022AA64: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AA68: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
L_8022AA6C:
    // 0x8022AA6C: jr          $ra
    // 0x8022AA70: nop

    TRACE_RETURN()
    return;
    // 0x8022AA70: nop

;}
RECOMP_FUNC void func_8023E544_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023E544: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023E548: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023E54C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023E550: jal         0x8023EAD0
    // 0x8023E554: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8023EAD0_ovl5(rdram, ctx);
        goto after_0;
    // 0x8023E554: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8023E558: jal         0x8023E798
    // 0x8023E55C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023E798_ovl5(rdram, ctx);
        goto after_1;
    // 0x8023E55C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023E560: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023E564: bne         $v0, $zero, L_8023E584
    if (ctx->r2 != 0) {
        // 0x8023E568: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023E584;
    }
    // 0x8023E568: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023E56C: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x8023E570: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023E574: jal         0x8004DA90
    // 0x8023E578: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8023E578: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8023E57C: j           L_8023E5AC
    // 0x8023E580: nop

        goto L_8023E5AC;
    // 0x8023E580: nop

L_8023E584:
    // 0x8023E584: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8023E588: lhu         $v1, 0xE2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XE2);
    // 0x8023E58C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023E590: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8023E594: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x8023E598: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8023E59C: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x8023E5A0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023E5A4: jal         0x8023E954
    // 0x8023E5A8: sh          $v1, 0xE2($a0)
    MEM_H(0XE2, ctx->r4) = ctx->r3;
    func_8023E954_ovl5(rdram, ctx);
        goto after_3;
    // 0x8023E5A8: sh          $v1, 0xE2($a0)
    MEM_H(0XE2, ctx->r4) = ctx->r3;
    after_3:
L_8023E5AC:
    // 0x8023E5AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023E5B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023E5B4: jr          $ra
    // 0x8023E5B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023E5B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023F140_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023F140: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023F144: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023F148: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023F14C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023F150: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x8023F154: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8023F158: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023F15C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8023F160: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8023F164: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8023F168: jal         0x800324B4
    // 0x8023F16C: sh          $zero, 0x7C($s0)
    MEM_H(0X7C, ctx->r16) = 0;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x8023F16C: sh          $zero, 0x7C($s0)
    MEM_H(0X7C, ctx->r16) = 0;
    after_0:
    // 0x8023F170: lw          $v1, 0x9C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X9C);
    // 0x8023F174: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8023F178: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023F17C: mflo        $v0
    ctx->r2 = lo;
    // 0x8023F180: lw          $v1, 0xA0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XA0);
    // 0x8023F184: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x8023F188: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x8023F18C: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x8023F190: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x8023F194: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x8023F198: jal         0x80032498
    // 0x8023F19C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x8023F19C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_1:
    // 0x8023F1A0: lui         $a3, 0x3D48
    ctx->r7 = S32(0X3D48 << 16);
    // 0x8023F1A4: ori         $a3, $a3, 0xE
    ctx->r7 = ctx->r7 | 0XE;
    // 0x8023F1A8: lui         $a2, 0x2C80
    ctx->r6 = S32(0X2C80 << 16);
    // 0x8023F1AC: lw          $v1, 0x9C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X9C);
    // 0x8023F1B0: ori         $a2, $a2, 0x8080
    ctx->r6 = ctx->r6 | 0X8080;
    // 0x8023F1B4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8023F1B8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023F1BC: mflo        $v0
    ctx->r2 = lo;
    // 0x8023F1C0: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8023F1C4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023F1C8: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x8023F1CC: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x8023F1D0: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x8023F1D4: sw          $a3, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r7;
    // 0x8023F1D8: sw          $a2, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r6;
    // 0x8023F1DC: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x8023F1E0: sh          $v1, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r3;
    // 0x8023F1E4: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x8023F1E8: jal         0x8004DD04
    // 0x8023F1EC: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x8023F1EC: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    after_2:
    // 0x8023F1F0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8023F1F4: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8023F1F8: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x8023F1FC: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8023F200: lw          $t0, 0x20($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X20);
    // 0x8023F204: lh          $a2, 0x48($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X48);
    // 0x8023F208: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    // 0x8023F20C: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x8023F210: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023F214: sll         $a2, $a2, 10
    ctx->r6 = S32(ctx->r6 << 10);
    // 0x8023F218: subu        $a3, $a3, $a2
    ctx->r7 = SUB32(ctx->r7, ctx->r6);
    // 0x8023F21C: sw          $v1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r3;
    // 0x8023F220: sw          $t0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r8;
    // 0x8023F224: jal         0x8004DD04
    // 0x8023F228: sw          $a3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r7;
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x8023F228: sw          $a3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r7;
    after_3:
    // 0x8023F22C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8023F230: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8023F234: beq         $v0, $zero, L_8023F270
    if (ctx->r2 == 0) {
        // 0x8023F238: sw          $zero, 0x78($s0)
        MEM_W(0X78, ctx->r16) = 0;
            goto L_8023F270;
    }
    // 0x8023F238: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8023F23C: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8023F240: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023F244: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023F248: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023F24C: lhu         $v1, 0x6C68($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X6C68);
    // 0x8023F250: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8023F254: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023F258: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x8023F25C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023F260: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023F264: lhu         $v0, 0x6C6A($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X6C6A);
    // 0x8023F268: j           L_8023F2A0
    // 0x8023F26C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_8023F2A0;
    // 0x8023F26C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_8023F270:
    // 0x8023F270: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8023F274: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023F278: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023F27C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023F280: lhu         $v1, 0x6C50($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X6C50);
    // 0x8023F284: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8023F288: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023F28C: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x8023F290: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023F294: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023F298: lhu         $v0, 0x6C52($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X6C52);
    // 0x8023F29C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_8023F2A0:
    // 0x8023F2A0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8023F2A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023F2A8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023F2AC: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x8023F2B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023F2B4: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    // 0x8023F2B8: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8023F2BC: jal         0x8023F9B8
    // 0x8023F2C0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8023F9B8_ovl5(rdram, ctx);
        goto after_4;
    // 0x8023F2C0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_4:
    // 0x8023F2C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023F2C8: beq         $v0, $zero, L_8023F2D8
    if (ctx->r2 == 0) {
        // 0x8023F2CC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023F2D8;
    }
    // 0x8023F2CC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023F2D0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023F2D4: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_8023F2D8:
    // 0x8023F2D8: lhu         $a1, 0x14($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X14);
    // 0x8023F2DC: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8023F2E0: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x8023F2E4: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x8023F2E8: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x8023F2EC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8023F2F0: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x8023F2F4: andi        $v1, $v1, 0xFB
    ctx->r3 = ctx->r3 & 0XFB;
    // 0x8023F2F8: sh          $a1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r5;
    // 0x8023F2FC: sh          $v0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r2;
    // 0x8023F300: sh          $a2, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r6;
    // 0x8023F304: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x8023F308: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
    // 0x8023F30C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023F310: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023F314: jr          $ra
    // 0x8023F318: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023F318: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80238218_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238218: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023821C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238220: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238224: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238228: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023822C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80238230: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80238234: jal         0x8004D5D4
    // 0x80238238: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80238238: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023823C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238240: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80238244: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x80238248: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8023824C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80238250: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80238254: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80238258: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8023825C: addiu       $v0, $zero, 0x1640
    ctx->r2 = ADD32(0, 0X1640);
    // 0x80238260: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80238264: addiu       $v0, $zero, -0x10B0
    ctx->r2 = ADD32(0, -0X10B0);
    // 0x80238268: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8023826C: addiu       $v0, $zero, -0x40
    ctx->r2 = ADD32(0, -0X40);
    // 0x80238270: sh          $v0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r2;
    // 0x80238274: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80238278: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023827C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80238280: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80238284: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
    // 0x80238288: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8023828C: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x80238290: jal         0x80050294
    // 0x80238294: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80238294: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    after_1:
    // 0x80238298: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023829C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802382A0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802382A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802382A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802382AC: jr          $ra
    // 0x802382B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802382B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E894_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E894: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E898: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E89C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E8A0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022E8A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E8A8: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022E8AC: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022E8B0: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x8022E8B4: jal         0x8004FA7C
    // 0x8022E8B8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022E8B8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022E8BC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022E8C0: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022E8C4: beq         $v0, $zero, L_8022E958
    if (ctx->r2 == 0) {
        // 0x8022E8C8: nop
    
            goto L_8022E958;
    }
    // 0x8022E8C8: nop

    // 0x8022E8CC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022E8D0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022E8D4: bne         $v0, $zero, L_8022E958
    if (ctx->r2 != 0) {
        // 0x8022E8D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E958;
    }
    // 0x8022E8D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E8DC: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022E8E0: beq         $v1, $v0, L_8022E8F8
    if (ctx->r3 == ctx->r2) {
        // 0x8022E8E4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022E8F8;
    }
    // 0x8022E8E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022E8E8: beq         $v1, $v0, L_8022E928
    if (ctx->r3 == ctx->r2) {
        // 0x8022E8EC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022E928;
    }
    // 0x8022E8EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022E8F0: j           L_8022E94C
    // 0x8022E8F4: nop

        goto L_8022E94C;
    // 0x8022E8F4: nop

L_8022E8F8:
    // 0x8022E8F8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E8FC: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022E900: bne         $v0, $zero, L_8022E94C
    if (ctx->r2 != 0) {
        // 0x8022E904: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022E94C;
    }
    // 0x8022E904: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022E908: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022E90C: bne         $v0, $zero, L_8022E94C
    if (ctx->r2 != 0) {
        // 0x8022E910: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E94C;
    }
    // 0x8022E910: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E914: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022E918: bne         $v1, $v0, L_8022E94C
    if (ctx->r3 != ctx->r2) {
        // 0x8022E91C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022E94C;
    }
    // 0x8022E91C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022E920: j           L_8022E94C
    // 0x8022E924: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022E94C;
    // 0x8022E924: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022E928:
    // 0x8022E928: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E92C: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022E930: beq         $v0, $zero, L_8022E948
    if (ctx->r2 == 0) {
        // 0x8022E934: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_8022E948;
    }
    // 0x8022E934: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022E938: bne         $v0, $zero, L_8022E94C
    if (ctx->r2 != 0) {
        // 0x8022E93C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022E94C;
    }
    // 0x8022E93C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022E940: j           L_8022E94C
    // 0x8022E944: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022E94C;
    // 0x8022E944: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022E948:
    // 0x8022E948: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022E94C:
    // 0x8022E94C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022E950: beq         $v0, $zero, L_8022E97C
    if (ctx->r2 == 0) {
        // 0x8022E954: nop
    
            goto L_8022E97C;
    }
    // 0x8022E954: nop

L_8022E958:
    // 0x8022E958: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022E95C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E960: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022E964: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022E968: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022E96C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022E970: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022E974: j           L_8022E98C
    // 0x8022E978: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022E98C;
    // 0x8022E978: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022E97C:
    // 0x8022E97C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E980: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022E984: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E988: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022E98C:
    // 0x8022E98C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022E990: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E994: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E998: jr          $ra
    // 0x8022E99C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E99C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80242018_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242018: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8024201C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80242020: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80242024: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80242028: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8024202C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80242030: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80242034: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80242038: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8024203C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80242040: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80242044: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80242048: lb          $v1, 0xF($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XF);
    // 0x8024204C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80242050: bne         $v1, $v0, L_802423C4
    if (ctx->r3 != ctx->r2) {
        // 0x80242054: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_802423C4;
    }
    // 0x80242054: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80242058: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x8024205C: lbu         $a0, 0xA($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0XA);
    // 0x80242060: srl         $v0, $v0, 5
    ctx->r2 = S32(U32(ctx->r2) >> 5);
    // 0x80242064: addu        $fp, $v0, $zero
    ctx->r30 = ADD32(ctx->r2, 0);
    // 0x80242068: beq         $a0, $zero, L_80242078
    if (ctx->r4 == 0) {
        // 0x8024206C: subu        $v1, $v1, $v0
        ctx->r3 = SUB32(ctx->r3, ctx->r2);
            goto L_80242078;
    }
    // 0x8024206C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80242070: j           L_80242088
    // 0x80242074: addiu       $s6, $v1, -0x8
    ctx->r22 = ADD32(ctx->r3, -0X8);
        goto L_80242088;
    // 0x80242074: addiu       $s6, $v1, -0x8
    ctx->r22 = ADD32(ctx->r3, -0X8);
L_80242078:
    // 0x80242078: xori        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 ^ 0X10;
    // 0x8024207C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80242080: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80242084: and         $s6, $v1, $v0
    ctx->r22 = ctx->r3 & ctx->r2;
L_80242088:
    // 0x80242088: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8024208C: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x80242090: sll         $v1, $s6, 24
    ctx->r3 = S32(ctx->r22 << 24);
    // 0x80242094: sra         $s5, $v1, 24
    ctx->r21 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80242098: sltiu       $t1, $s5, 0x1
    ctx->r9 = ctx->r21 < 0X1 ? 1 : 0;
    // 0x8024209C: sll         $v1, $fp, 5
    ctx->r3 = S32(ctx->r30 << 5);
    // 0x802420A0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x802420A4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802420A8: sll         $s7, $v0, 24
    ctx->r23 = S32(ctx->r2 << 24);
    // 0x802420AC: srl         $t1, $s7, 31
    ctx->r9 = S32(U32(ctx->r23) >> 31);
    // 0x802420B0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802420B4: sll         $v0, $s3, 24
    ctx->r2 = S32(ctx->r19 << 24);
L_802420B8:
    // 0x802420B8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802420BC: slt         $v0, $v0, $s5
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x802420C0: bne         $v0, $zero, L_802420D0
    if (ctx->r2 != 0) {
        // 0x802420C4: addu        $v1, $s3, $fp
        ctx->r3 = ADD32(ctx->r19, ctx->r30);
            goto L_802420D0;
    }
    // 0x802420C4: addu        $v1, $s3, $fp
    ctx->r3 = ADD32(ctx->r19, ctx->r30);
    // 0x802420C8: j           L_802420DC
    // 0x802420CC: subu        $s4, $s3, $s6
    ctx->r20 = SUB32(ctx->r19, ctx->r22);
        goto L_802420DC;
    // 0x802420CC: subu        $s4, $s3, $s6
    ctx->r20 = SUB32(ctx->r19, ctx->r22);
L_802420D0:
    // 0x802420D0: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x802420D4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802420D8: addu        $s4, $v1, $v0
    ctx->r20 = ADD32(ctx->r3, ctx->r2);
L_802420DC:
    // 0x802420DC: jal         0x8003B878
    // 0x802420E0: nop

    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x802420E0: nop

    after_0:
    // 0x802420E4: lbu         $v1, 0x9($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X9);
    // 0x802420E8: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x802420EC: bne         $v1, $zero, L_8024215C
    if (ctx->r3 != 0) {
        // 0x802420F0: addu        $s1, $v0, $zero
        ctx->r17 = ADD32(ctx->r2, 0);
            goto L_8024215C;
    }
    // 0x802420F0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802420F4: jal         0x800A3450
    // 0x802420F8: sll         $s0, $s3, 24
    ctx->r16 = S32(ctx->r19 << 24);
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x802420F8: sll         $s0, $s3, 24
    ctx->r16 = S32(ctx->r19 << 24);
    after_1:
    // 0x802420FC: lb          $a0, 0xE($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XE);
    // 0x80242100: sra         $s0, $s0, 21
    ctx->r16 = S32(SIGNED(ctx->r16) >> 21);
    // 0x80242104: sll         $a0, $a0, 7
    ctx->r4 = S32(ctx->r4 << 7);
    // 0x80242108: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x8024210C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80242110: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80242114: lhu         $v1, 0x7640($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X7640);
    // 0x80242118: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8024211C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80242120: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80242124: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x80242128: jal         0x800A3450
    // 0x8024212C: sh          $v1, 0x7640($at)
    MEM_H(0X7640, ctx->r1) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8024212C: sh          $v1, 0x7640($at)
    MEM_H(0X7640, ctx->r1) = ctx->r3;
    after_2:
    // 0x80242130: lb          $v1, 0xE($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XE);
    // 0x80242134: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x80242138: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x8024213C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80242140: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x80242144: lhu         $v1, 0x7644($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X7644);
    // 0x80242148: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8024214C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80242150: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80242154: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x80242158: sh          $v1, 0x7644($at)
    MEM_H(0X7644, ctx->r1) = ctx->r3;
L_8024215C:
    // 0x8024215C: jal         0x800A3450
    // 0x80242160: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80242160: nop

    after_3:
    // 0x80242164: sll         $v1, $s3, 24
    ctx->r3 = S32(ctx->r19 << 24);
    // 0x80242168: lb          $a0, 0xE($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XE);
    // 0x8024216C: sra         $t0, $v1, 24
    ctx->r8 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80242170: sll         $s0, $t0, 3
    ctx->r16 = S32(ctx->r8 << 3);
    // 0x80242174: sra         $a3, $s7, 24
    ctx->r7 = S32(SIGNED(ctx->r23) >> 24);
    // 0x80242178: sll         $a0, $a0, 7
    ctx->r4 = S32(ctx->r4 << 7);
    // 0x8024217C: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x80242180: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80242184: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80242188: lhu         $v1, 0x7642($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X7642);
    // 0x8024218C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80242190: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80242194: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80242198: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8024219C: sh          $v1, 0x7642($at)
    MEM_H(0X7642, ctx->r1) = ctx->r3;
    // 0x802421A0: bgez        $a3, L_802421AC
    if (SIGNED(ctx->r7) >= 0) {
        // 0x802421A4: addu        $a2, $a3, $zero
        ctx->r6 = ADD32(ctx->r7, 0);
            goto L_802421AC;
    }
    // 0x802421A4: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x802421A8: addiu       $a2, $a3, 0x7
    ctx->r6 = ADD32(ctx->r7, 0X7);
L_802421AC:
    // 0x802421AC: lui         $a1, 0x2E40
    ctx->r5 = S32(0X2E40 << 16);
    // 0x802421B0: ori         $a1, $a1, 0x4040
    ctx->r5 = ctx->r5 | 0X4040;
    // 0x802421B4: sra         $v1, $a2, 3
    ctx->r3 = S32(SIGNED(ctx->r6) >> 3);
    // 0x802421B8: sll         $v0, $v1, 8
    ctx->r2 = S32(ctx->r3 << 8);
    // 0x802421BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802421C0: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802421C4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802421C8: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x802421CC: andi        $a0, $s4, 0xFF
    ctx->r4 = ctx->r20 & 0XFF;
    // 0x802421D0: sll         $v0, $a0, 8
    ctx->r2 = S32(ctx->r4 << 8);
    // 0x802421D4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802421D8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802421DC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802421E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802421E4: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x802421E8: sw          $a1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r5;
    // 0x802421EC: lb          $v0, 0xE($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XE);
    // 0x802421F0: lui         $a2, 0x3D48
    ctx->r6 = S32(0X3D48 << 16);
    // 0x802421F4: ori         $a2, $a2, 0x20
    ctx->r6 = ctx->r6 | 0X20;
    // 0x802421F8: lui         $a1, 0x4E
    ctx->r5 = S32(0X4E << 16);
    // 0x802421FC: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x80242200: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80242204: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80242208: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024220C: lh          $v1, 0x7640($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X7640);
    // 0x80242210: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80242214: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80242218: lhu         $v0, 0x7642($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X7642);
    // 0x8024221C: ori         $a1, $a1, 0x3F
    ctx->r5 = ctx->r5 | 0X3F;
    // 0x80242220: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80242224: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80242228: sw          $v1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r3;
    // 0x8024222C: lb          $v0, 0xE($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XE);
    // 0x80242230: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    // 0x80242234: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x80242238: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x8024223C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80242240: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80242244: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80242248: lh          $v1, 0x7644($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X7644);
    // 0x8024224C: addu        $v0, $a3, $t1
    ctx->r2 = ADD32(ctx->r7, ctx->r9);
    // 0x80242250: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80242254: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x80242258: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8024225C: addiu       $v0, $zero, 0x1F20
    ctx->r2 = ADD32(0, 0X1F20);
    // 0x80242260: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80242264: addiu       $v0, $zero, 0x1F3F
    ctx->r2 = ADD32(0, 0X1F3F);
    // 0x80242268: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x8024226C: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x80242270: sw          $a0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r4;
    // 0x80242274: sw          $a2, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r6;
    // 0x80242278: sw          $a1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r5;
    // 0x8024227C: sw          $zero, 0x20($s1)
    MEM_W(0X20, ctx->r17) = 0;
    // 0x80242280: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80242284: bne         $a3, $v0, L_80242378
    if (ctx->r7 != ctx->r2) {
        // 0x80242288: sw          $v1, 0x10($s1)
        MEM_W(0X10, ctx->r17) = ctx->r3;
            goto L_80242378;
    }
    // 0x80242288: sw          $v1, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r3;
    // 0x8024228C: addiu       $v0, $s5, -0x1
    ctx->r2 = ADD32(ctx->r21, -0X1);
    // 0x80242290: beq         $t0, $v0, L_802422AC
    if (ctx->r8 == ctx->r2) {
        // 0x80242294: xori        $v0, $t0, 0xF
        ctx->r2 = ctx->r8 ^ 0XF;
            goto L_802422AC;
    }
    // 0x80242294: xori        $v0, $t0, 0xF
    ctx->r2 = ctx->r8 ^ 0XF;
    // 0x80242298: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8024229C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802422A0: and         $v0, $t1, $v0
    ctx->r2 = ctx->r9 & ctx->r2;
    // 0x802422A4: beq         $v0, $zero, L_8024237C
    if (ctx->r2 == 0) {
        // 0x802422A8: addiu       $v0, $s3, 0x1
        ctx->r2 = ADD32(ctx->r19, 0X1);
            goto L_8024237C;
    }
    // 0x802422A8: addiu       $v0, $s3, 0x1
    ctx->r2 = ADD32(ctx->r19, 0X1);
L_802422AC:
    // 0x802422AC: jal         0x800A3450
    // 0x802422B0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x802422B0: nop

    after_4:
    // 0x802422B4: lb          $v1, 0xE($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XE);
    // 0x802422B8: sll         $a0, $v1, 7
    ctx->r4 = S32(ctx->r3 << 7);
    // 0x802422BC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802422C0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802422C4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802422C8: lhu         $v1, 0x6E98($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X6E98);
    // 0x802422CC: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x802422D0: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x802422D4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802422D8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802422DC: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x802422E0: sh          $v1, 0x7640($at)
    MEM_H(0X7640, ctx->r1) = ctx->r3;
    // 0x802422E4: lb          $v0, 0xE($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XE);
    // 0x802422E8: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x802422EC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802422F0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802422F4: lhu         $v1, 0x6E9A($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X6E9A);
    // 0x802422F8: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x802422FC: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80242300: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80242304: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80242308: jal         0x800A3450
    // 0x8024230C: sh          $v1, 0x7642($at)
    MEM_H(0X7642, ctx->r1) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x8024230C: sh          $v1, 0x7642($at)
    MEM_H(0X7642, ctx->r1) = ctx->r3;
    after_5:
    // 0x80242310: lb          $v1, 0xE($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XE);
    // 0x80242314: sll         $a0, $v1, 7
    ctx->r4 = S32(ctx->r3 << 7);
    // 0x80242318: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8024231C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80242320: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80242324: lhu         $v1, 0x6E9C($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X6E9C);
    // 0x80242328: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8024232C: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x80242330: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80242334: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80242338: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8024233C: sh          $v1, 0x7644($at)
    MEM_H(0X7644, ctx->r1) = ctx->r3;
    // 0x80242340: lhu         $v1, 0x26($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X26);
    // 0x80242344: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80242348: bne         $v1, $v0, L_8024237C
    if (ctx->r3 != ctx->r2) {
        // 0x8024234C: addiu       $v0, $s3, 0x1
        ctx->r2 = ADD32(ctx->r19, 0X1);
            goto L_8024237C;
    }
    // 0x8024234C: addiu       $v0, $s3, 0x1
    ctx->r2 = ADD32(ctx->r19, 0X1);
    // 0x80242350: lb          $v0, 0xE($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XE);
    // 0x80242354: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80242358: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8024235C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80242360: lhu         $v1, 0x6EC8($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X6EC8);
    // 0x80242364: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x80242368: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8024236C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80242370: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80242374: sh          $v1, 0x7642($at)
    MEM_H(0X7642, ctx->r1) = ctx->r3;
L_80242378:
    // 0x80242378: addiu       $v0, $s3, 0x1
    ctx->r2 = ADD32(ctx->r19, 0X1);
L_8024237C:
    // 0x8024237C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x80242380: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80242384: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80242388: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8024238C: bne         $v0, $zero, L_802420B8
    if (ctx->r2 != 0) {
        // 0x80242390: sll         $v0, $s3, 24
        ctx->r2 = S32(ctx->r19 << 24);
            goto L_802420B8;
    }
    // 0x80242390: sll         $v0, $s3, 24
    ctx->r2 = S32(ctx->r19 << 24);
    // 0x80242394: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x80242398: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024239C: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x802423A0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802423A4: bne         $v0, $zero, L_802423C4
    if (ctx->r2 != 0) {
        // 0x802423A8: nop
    
            goto L_802423C4;
    }
    // 0x802423A8: nop

    // 0x802423AC: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x802423B0: beq         $v0, $zero, L_802423C0
    if (ctx->r2 == 0) {
        // 0x802423B4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802423C0;
    }
    // 0x802423B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802423B8: j           L_802423C4
    // 0x802423BC: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
        goto L_802423C4;
    // 0x802423BC: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
L_802423C0:
    // 0x802423C0: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
L_802423C4:
    // 0x802423C4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802423C8: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x802423CC: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x802423D0: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x802423D4: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x802423D8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x802423DC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x802423E0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802423E4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802423E8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802423EC: jr          $ra
    // 0x802423F0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x802423F0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802423F4: nop

    // 0x802423F8: nop

    // 0x802423FC: nop

;}
RECOMP_FUNC void func_80237D8C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237D8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237D90: lw          $v1, 0x2D8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2D8);
    // 0x80237D94: sllv        $v0, $v0, $a1
    ctx->r2 = S32(ctx->r2 << (ctx->r5 & 31));
    // 0x80237D98: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80237D9C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80237DA0: jr          $ra
    // 0x80237DA4: sw          $v1, 0x2D8($a0)
    MEM_W(0X2D8, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80237DA4: sw          $v1, 0x2D8($a0)
    MEM_W(0X2D8, ctx->r4) = ctx->r3;
    // 0x80237DA8: nop

    // 0x80237DAC: nop

;}
RECOMP_FUNC void func_8022A708_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A708: jr          $ra
    // 0x8022A70C: nop

    TRACE_RETURN()
    return;
    // 0x8022A70C: nop

;}
RECOMP_FUNC void func_8022D53C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D53C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022D540: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D544: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D548: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022D54C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022D550: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D554: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D558: lbu         $s0, 0xD($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XD);
    // 0x8022D55C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022D560: addiu       $v0, $v0, 0x5A68
    ctx->r2 = ADD32(ctx->r2, 0X5A68);
    // 0x8022D564: andi        $s0, $s0, 0x30
    ctx->r16 = ctx->r16 & 0X30;
    // 0x8022D568: jal         0x800A3450
    // 0x8022D56C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022D56C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x8022D570: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022D574: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8022D578: lbu         $s3, 0x0($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X0);
    // 0x8022D57C: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8022D580: addiu       $s0, $s0, 0x5AA8
    ctx->r16 = ADD32(ctx->r16, 0X5AA8);
    // 0x8022D584: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x8022D588: beq         $v1, $zero, L_8022D5A4
    if (ctx->r3 == 0) {
        // 0x8022D58C: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_8022D5A4;
    }
    // 0x8022D58C: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x8022D590: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D594: beq         $v1, $v0, L_8022D5C4
    if (ctx->r3 == ctx->r2) {
        // 0x8022D598: nop
    
            goto L_8022D5C4;
    }
    // 0x8022D598: nop

    // 0x8022D59C: j           L_8022D5D8
    // 0x8022D5A0: nop

        goto L_8022D5D8;
    // 0x8022D5A0: nop

L_8022D5A4:
    // 0x8022D5A4: jal         0x8022F588
    // 0x8022D5A8: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    func_8022F588_ovl5(rdram, ctx);
        goto after_1;
    // 0x8022D5A8: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    after_1:
    // 0x8022D5AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D5B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022D5B4: jal         0x8022F5C8
    // 0x8022D5B8: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_8022F5C8_ovl5(rdram, ctx);
        goto after_2;
    // 0x8022D5B8: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_2:
    // 0x8022D5BC: j           L_8022D630
    // 0x8022D5C0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
        goto L_8022D630;
    // 0x8022D5C0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_8022D5C4:
    // 0x8022D5C4: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8022D5C8: jal         0x8022F578
    // 0x8022D5CC: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    func_8022F578_ovl5(rdram, ctx);
        goto after_3;
    // 0x8022D5CC: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    after_3:
    // 0x8022D5D0: j           L_8022D630
    // 0x8022D5D4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
        goto L_8022D630;
    // 0x8022D5D4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
L_8022D5D8:
    // 0x8022D5D8: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x8022D5DC: lh          $v0, 0x1E($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1E);
    // 0x8022D5E0: bne         $v1, $v0, L_8022D5F0
    if (ctx->r3 != ctx->r2) {
        // 0x8022D5E4: nop
    
            goto L_8022D5F0;
    }
    // 0x8022D5E4: nop

    // 0x8022D5E8: j           L_8022D630
    // 0x8022D5EC: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
        goto L_8022D630;
    // 0x8022D5EC: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_8022D5F0:
    // 0x8022D5F0: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8022D5F4: jal         0x8022F588
    // 0x8022D5F8: nop

    func_8022F588_ovl5(rdram, ctx);
        goto after_4;
    // 0x8022D5F8: nop

    after_4:
    // 0x8022D5FC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022D600: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x8022D604: beq         $v0, $zero, L_8022D618
    if (ctx->r2 == 0) {
        // 0x8022D608: nop
    
            goto L_8022D618;
    }
    // 0x8022D608: nop

    // 0x8022D60C: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x8022D610: j           L_8022D628
    // 0x8022D614: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
        goto L_8022D628;
    // 0x8022D614: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_8022D618:
    // 0x8022D618: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x8022D61C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022D620: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D624: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_8022D628:
    // 0x8022D628: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8022D62C: addiu       $s0, $s0, 0x5AC8
    ctx->r16 = ADD32(ctx->r16, 0X5AC8);
L_8022D630:
    // 0x8022D630: jal         0x800A3450
    // 0x8022D634: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x8022D634: nop

    after_5:
    // 0x8022D638: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022D63C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8022D640: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022D644: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x8022D648: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022D64C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022D650: beq         $v1, $v0, L_8022D668
    if (ctx->r3 == ctx->r2) {
        // 0x8022D654: nop
    
            goto L_8022D668;
    }
    // 0x8022D654: nop

    // 0x8022D658: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022D65C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D660: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022D664: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022D668:
    // 0x8022D668: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022D66C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D670: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D674: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D678: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D67C: jr          $ra
    // 0x8022D680: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022D680: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022DE24_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DE24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022DE28: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DE2C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022DE30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022DE34: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022DE38: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DE3C: lh          $a0, 0x64($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X64);
    // 0x8022DE40: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x8022DE44: lb          $a2, 0xF($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XF);
    // 0x8022DE48: jal         0x8004FA7C
    // 0x8022DE4C: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022DE4C: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    after_0:
    // 0x8022DE50: lh          $a1, 0x362($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X362);
    // 0x8022DE54: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022DE58: sll         $v1, $s2, 16
    ctx->r3 = S32(ctx->r18 << 16);
    // 0x8022DE5C: sra         $a0, $v1, 16
    ctx->r4 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022DE60: srl         $v1, $a0, 31
    ctx->r3 = S32(U32(ctx->r4) >> 31);
    // 0x8022DE64: sltiu       $v0, $a1, 0x1
    ctx->r2 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x8022DE68: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022DE6C: bnel        $v0, $zero, L_8022DE8C
    if (ctx->r2 != 0) {
        // 0x8022DE70: negu        $s2, $s2
        ctx->r18 = SUB32(0, ctx->r18);
            goto L_8022DE8C;
    }
    goto skip_0;
    // 0x8022DE70: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
    skip_0:
    // 0x8022DE74: sltu        $v0, $zero, $a1
    ctx->r2 = 0 < ctx->r5 ? 1 : 0;
    // 0x8022DE78: slt         $v1, $zero, $a0
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022DE7C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022DE80: beq         $v0, $zero, L_8022DE90
    if (ctx->r2 == 0) {
        // 0x8022DE84: sll         $v0, $s2, 16
        ctx->r2 = S32(ctx->r18 << 16);
            goto L_8022DE90;
    }
    // 0x8022DE84: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x8022DE88: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
L_8022DE8C:
    // 0x8022DE8C: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
L_8022DE90:
    // 0x8022DE90: bne         $v0, $zero, L_8022DEC0
    if (ctx->r2 != 0) {
        // 0x8022DE94: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022DEC0;
    }
    // 0x8022DE94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DE98: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022DE9C: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x8022DEA0: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x8022DEA4: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x8022DEA8: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8022DEAC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022DEB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DEB4: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x8022DEB8: j           L_8022DF18
    // 0x8022DEBC: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
        goto L_8022DF18;
    // 0x8022DEBC: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
L_8022DEC0:
    // 0x8022DEC0: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8022DEC4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DEC8: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022DECC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DED0: beq         $v0, $zero, L_8022DF14
    if (ctx->r2 == 0) {
        // 0x8022DED4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022DF14;
    }
    // 0x8022DED4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022DED8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022DEDC: jal         0x8022F614
    // 0x8022DEE0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022F614_ovl5(rdram, ctx);
        goto after_1;
    // 0x8022DEE0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x8022DEE4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022DEE8: beq         $v0, $zero, L_8022DF20
    if (ctx->r2 == 0) {
        // 0x8022DEEC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022DF20;
    }
    // 0x8022DEEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022DEF0: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8022DEF4: jal         0x8022F578
    // 0x8022DEF8: nop

    func_8022F578_ovl5(rdram, ctx);
        goto after_2;
    // 0x8022DEF8: nop

    after_2:
    // 0x8022DEFC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022DF00: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022DF04: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022DF08: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022DF0C: j           L_8022DF40
    // 0x8022DF10: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_8022DF40;
    // 0x8022DF10: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022DF14:
    // 0x8022DF14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022DF18:
    // 0x8022DF18: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022DF1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_8022DF20:
    // 0x8022DF20: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x8022DF24: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x8022DF28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DF2C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022DF30: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8022DF34: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022DF38: jal         0x8004DA90
    // 0x8022DF3C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022DF3C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    after_3:
L_8022DF40:
    // 0x8022DF40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022DF44: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022DF48: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DF4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DF50: jr          $ra
    // 0x8022DF54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DF54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80234C7C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234C7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80234C80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80234C84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80234C88: jal         0x8003E934
    // 0x80234C8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x80234C8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80234C90: lh          $a1, 0x16($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16);
    // 0x80234C94: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234C98: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80234C9C: subu        $v1, $v0, $a1
    ctx->r3 = SUB32(ctx->r2, ctx->r5);
    // 0x80234CA0: slti        $v0, $v1, -0x10
    ctx->r2 = SIGNED(ctx->r3) < -0X10 ? 1 : 0;
    // 0x80234CA4: beq         $v0, $zero, L_80234CDC
    if (ctx->r2 == 0) {
        // 0x80234CA8: addu        $a0, $a1, $zero
        ctx->r4 = ADD32(ctx->r5, 0);
            goto L_80234CDC;
    }
    // 0x80234CA8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x80234CAC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80234CB0: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80234CB4: jal         0x8009A3B4
    // 0x80234CB8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80234CB8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80234CBC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80234CC0: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80234CC4: jal         0x8009A3B4
    // 0x80234CC8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80234CC8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80234CCC: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80234CD0: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80234CD4: j           L_80234CFC
    // 0x80234CD8: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
        goto L_80234CFC;
    // 0x80234CD8: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
L_80234CDC:
    // 0x80234CDC: slti        $v0, $v1, 0x11
    ctx->r2 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
    // 0x80234CE0: bne         $v0, $zero, L_80234D00
    if (ctx->r2 != 0) {
        // 0x80234CE4: nop
    
            goto L_80234D00;
    }
    // 0x80234CE4: nop

    // 0x80234CE8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80234CEC: lh          $v0, 0x49C6($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C6);
    // 0x80234CF0: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80234CF4: beq         $v0, $zero, L_80234D00
    if (ctx->r2 == 0) {
        // 0x80234CF8: addiu       $v0, $a0, 0x10
        ctx->r2 = ADD32(ctx->r4, 0X10);
            goto L_80234D00;
    }
    // 0x80234CF8: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
L_80234CFC:
    // 0x80234CFC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
L_80234D00:
    // 0x80234D00: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80234D04: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234D08: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80234D0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80234D10: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80234D14: jr          $ra
    // 0x80234D18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80234D18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023546C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023546C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235470: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235474: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235478: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023547C: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80235480: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235484: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80235488: beq         $v1, $v0, L_802354D0
    if (ctx->r3 == ctx->r2) {
        // 0x8023548C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802354D0;
    }
    // 0x8023548C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80235490: beq         $v0, $zero, L_802355A8
    if (ctx->r2 == 0) {
        // 0x80235494: nop
    
            goto L_802355A8;
    }
    // 0x80235494: nop

    // 0x80235498: bne         $v1, $zero, L_802355A8
    if (ctx->r3 != 0) {
        // 0x8023549C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802355A8;
    }
    // 0x8023549C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802354A0: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x802354A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802354A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802354AC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802354B0: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x802354B4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802354B8: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802354BC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802354C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802354C4: lhu         $v0, 0x5ECA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X5ECA);
    // 0x802354C8: j           L_802355A8
    // 0x802354CC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
        goto L_802355A8;
    // 0x802354CC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_802354D0:
    // 0x802354D0: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x802354D4: beq         $v0, $zero, L_802354E8
    if (ctx->r2 == 0) {
        // 0x802354D8: addiu       $a0, $zero, 0xD7
        ctx->r4 = ADD32(0, 0XD7);
            goto L_802354E8;
    }
    // 0x802354D8: addiu       $a0, $zero, 0xD7
    ctx->r4 = ADD32(0, 0XD7);
    // 0x802354DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802354E0: jal         0x8002A2F8
    // 0x802354E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x802354E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
L_802354E8:
    // 0x802354E8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802354EC: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x802354F0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802354F4: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x802354F8: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802354FC: addiu       $a1, $a1, 0x5EC4
    ctx->r5 = ADD32(ctx->r5, 0X5EC4);
    // 0x80235500: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80235504: jal         0x8004F820
    // 0x80235508: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80235508: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    after_1:
    // 0x8023550C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235510: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80235514: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80235518: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8023551C: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80235520: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235524: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80235528: jal         0x8004DA90
    // 0x8023552C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8023552C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x80235530: lb          $a1, 0xD($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XD);
    // 0x80235534: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80235538: sll         $a0, $a1, 3
    ctx->r4 = S32(ctx->r5 << 3);
    // 0x8023553C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80235540: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80235544: lh          $v1, 0x5EC4($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X5EC4);
    // 0x80235548: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023554C: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80235550: mflo        $v0
    ctx->r2 = lo;
    // 0x80235554: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235558: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8023555C: lh          $a0, 0x5EC8($at)
    ctx->r4 = MEM_H(ctx->r1, 0X5EC8);
    // 0x80235560: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x80235564: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80235568: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023556C: mflo        $v1
    ctx->r3 = lo;
    // 0x80235570: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80235574: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80235578: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8023557C: lw          $a0, 0x5EDC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5EDC);
    // 0x80235580: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235584: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80235588: beq         $v0, $zero, L_802355A8
    if (ctx->r2 == 0) {
        // 0x8023558C: addiu       $a0, $zero, 0x608
        ctx->r4 = ADD32(0, 0X608);
            goto L_802355A8;
    }
    // 0x8023558C: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    // 0x80235590: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80235594: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80235598: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8023559C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802355A0: jal         0x8006036C
    // 0x802355A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x802355A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_3:
L_802355A8:
    // 0x802355A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802355AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802355B0: jr          $ra
    // 0x802355B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802355B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228420_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228420: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228424: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228428: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022842C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228430: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80228434: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228438: beq         $v1, $v0, L_802284E4
    if (ctx->r3 == ctx->r2) {
        // 0x8022843C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802284E4;
    }
    // 0x8022843C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80228440: beql        $v0, $zero, L_80228458
    if (ctx->r2 == 0) {
        // 0x80228444: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80228458;
    }
    goto skip_0;
    // 0x80228444: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80228448: beq         $v1, $zero, L_80228470
    if (ctx->r3 == 0) {
        // 0x8022844C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80228470;
    }
    // 0x8022844C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80228450: j           L_80228578
    // 0x80228454: nop

        goto L_80228578;
    // 0x80228454: nop

L_80228458:
    // 0x80228458: beq         $v1, $v0, L_80228500
    if (ctx->r3 == ctx->r2) {
        // 0x8022845C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80228500;
    }
    // 0x8022845C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228460: beq         $v1, $v0, L_80228528
    if (ctx->r3 == ctx->r2) {
        // 0x80228464: nop
    
            goto L_80228528;
    }
    // 0x80228464: nop

    // 0x80228468: j           L_80228578
    // 0x8022846C: nop

        goto L_80228578;
    // 0x8022846C: nop

L_80228470:
    // 0x80228470: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228474: jal         0x8005F6B4
    // 0x80228478: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_0;
    // 0x80228478: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022847C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80228480: addiu       $a0, $a0, 0x447C
    ctx->r4 = ADD32(ctx->r4, 0X447C);
    // 0x80228484: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80228488: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022848C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80228490: addiu       $v0, $v0, 0x44B8
    ctx->r2 = ADD32(ctx->r2, 0X44B8);
    // 0x80228494: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x80228498: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022849C: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x802284A0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802284A4: addiu       $v0, $v0, 0x48F8
    ctx->r2 = ADD32(ctx->r2, 0X48F8);
    // 0x802284A8: jal         0x8005FA7C
    // 0x802284AC: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x802284AC: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    after_1:
    // 0x802284B0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802284B4: lbu         $v0, 0x4978($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4978);
    // 0x802284B8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802284BC: lhu         $v1, 0x497A($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X497A);
    // 0x802284C0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802284C4: lhu         $a0, 0x497C($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X497C);
    // 0x802284C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802284CC: sb          $v0, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = ctx->r2;
    // 0x802284D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802284D4: sh          $v1, 0x4450($at)
    MEM_H(0X4450, ctx->r1) = ctx->r3;
    // 0x802284D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802284DC: j           L_80228518
    // 0x802284E0: sh          $a0, 0x4452($at)
    MEM_H(0X4452, ctx->r1) = ctx->r4;
        goto L_80228518;
    // 0x802284E0: sh          $a0, 0x4452($at)
    MEM_H(0X4452, ctx->r1) = ctx->r4;
L_802284E4:
    // 0x802284E4: jal         0x80036E48
    // 0x802284E8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x802284E8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_2:
    // 0x802284EC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x802284F0: jal         0x80036340
    // 0x802284F4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_80036340_11740(rdram, ctx);
        goto after_3;
    // 0x802284F4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_3:
    // 0x802284F8: j           L_80228518
    // 0x802284FC: nop

        goto L_80228518;
    // 0x802284FC: nop

L_80228500:
    // 0x80228500: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228504: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80228508: bne         $v0, $zero, L_80228578
    if (ctx->r2 != 0) {
        // 0x8022850C: lui         $a0, 0x109
        ctx->r4 = S32(0X109 << 16);
            goto L_80228578;
    }
    // 0x8022850C: lui         $a0, 0x109
    ctx->r4 = S32(0X109 << 16);
    // 0x80228510: jal         0x80036B1C
    // 0x80228514: ori         $a0, $a0, 0x2B00
    ctx->r4 = ctx->r4 | 0X2B00;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_4;
    // 0x80228514: ori         $a0, $a0, 0x2B00
    ctx->r4 = ctx->r4 | 0X2B00;
    after_4:
L_80228518:
    // 0x80228518: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022851C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228520: j           L_80228578
    // 0x80228524: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80228578;
    // 0x80228524: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80228528:
    // 0x80228528: jal         0x80036B7C
    // 0x8022852C: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_5;
    // 0x8022852C: nop

    after_5:
    // 0x80228530: beq         $v0, $zero, L_80228578
    if (ctx->r2 == 0) {
        // 0x80228534: nop
    
            goto L_80228578;
    }
    // 0x80228534: nop

    // 0x80228538: jal         0x80060170
    // 0x8022853C: nop

    func_80060170_3B570(rdram, ctx);
        goto after_6;
    // 0x8022853C: nop

    after_6:
    // 0x80228540: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80228544: addiu       $v0, $v0, 0x4508
    ctx->r2 = ADD32(ctx->r2, 0X4508);
    // 0x80228548: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022854C: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80228550: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228554: lbu         $a0, 0x4($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X4);
    // 0x80228558: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022855C: addiu       $v0, $v0, 0x4908
    ctx->r2 = ADD32(ctx->r2, 0X4908);
    // 0x80228560: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x80228564: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80228568: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022856C: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x80228570: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80228574: sb          $a0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r4;
L_80228578:
    // 0x80228578: jal         0x8006072C
    // 0x8022857C: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_7;
    // 0x8022857C: nop

    after_7:
    // 0x80228580: beq         $v0, $zero, L_80228594
    if (ctx->r2 == 0) {
        // 0x80228584: nop
    
            goto L_80228594;
    }
    // 0x80228584: nop

    // 0x80228588: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022858C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80228590: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228594:
    // 0x80228594: jal         0x8005FB90
    // 0x80228598: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_8;
    // 0x80228598: nop

    after_8:
    // 0x8022859C: jal         0x80060018
    // 0x802285A0: nop

    func_80060018_3B418(rdram, ctx);
        goto after_9;
    // 0x802285A0: nop

    after_9:
    // 0x802285A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802285A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802285AC: jr          $ra
    // 0x802285B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802285B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225B68_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225B6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225B70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225B74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225B78: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225B7C: bne         $v0, $zero, L_80225BD8
    if (ctx->r2 != 0) {
        // 0x80225B80: nop
    
            goto L_80225BD8;
    }
    // 0x80225B80: nop

    // 0x80225B84: jal         0x80226BEC
    // 0x80225B88: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80226BEC_ovl5(rdram, ctx);
        goto after_0;
    // 0x80225B88: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x80225B8C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225B90: jal         0x8003E87C
    // 0x80225B94: addiu       $a0, $a0, 0x30C0
    ctx->r4 = ADD32(ctx->r4, 0X30C0);
    func_8003E87C_19C7C(rdram, ctx);
        goto after_1;
    // 0x80225B94: addiu       $a0, $a0, 0x30C0
    ctx->r4 = ADD32(ctx->r4, 0X30C0);
    after_1:
    // 0x80225B98: addiu       $v1, $zero, 0x4B
    ctx->r3 = ADD32(0, 0X4B);
    // 0x80225B9C: bne         $v0, $v1, L_80225BA8
    if (ctx->r2 != ctx->r3) {
        // 0x80225BA0: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80225BA8;
    }
    // 0x80225BA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80225BA4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_80225BA8:
    // 0x80225BA8: jal         0x80226D28
    // 0x80225BAC: nop

    func_80226D28_ovl5(rdram, ctx);
        goto after_2;
    // 0x80225BAC: nop

    after_2:
    // 0x80225BB0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225BB4: jal         0x8003E87C
    // 0x80225BB8: addiu       $a0, $a0, 0x30D8
    ctx->r4 = ADD32(ctx->r4, 0X30D8);
    func_8003E87C_19C7C(rdram, ctx);
        goto after_3;
    // 0x80225BB8: addiu       $a0, $a0, 0x30D8
    ctx->r4 = ADD32(ctx->r4, 0X30D8);
    after_3:
    // 0x80225BBC: addiu       $v1, $zero, 0x4B
    ctx->r3 = ADD32(0, 0X4B);
    // 0x80225BC0: beq         $v0, $v1, L_80225BD4
    if (ctx->r2 == ctx->r3) {
        // 0x80225BC4: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225BD4;
    }
    // 0x80225BC4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225BC8: jal         0x80226D28
    // 0x80225BCC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80226D28_ovl5(rdram, ctx);
        goto after_4;
    // 0x80225BCC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_4:
    // 0x80225BD0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225BD4:
    // 0x80225BD4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225BD8:
    // 0x80225BD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225BDC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225BE0: jr          $ra
    // 0x80225BE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225BE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236734_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236734: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236738: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023673C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80236740: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236744: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236748: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023674C: lw          $v0, 0x5F7C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5F7C);
    // 0x80236750: jalr        $v0
    // 0x80236754: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80236754: nop

    after_0:
    // 0x80236758: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023675C: jr          $ra
    // 0x80236760: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236760: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023E06C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023E06C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023E070: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8023E074: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x8023E078: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8023E07C: lui         $s5, 0x2E80
    ctx->r21 = S32(0X2E80 << 16);
    // 0x8023E080: ori         $s5, $s5, 0x8080
    ctx->r21 = ctx->r21 | 0X8080;
    // 0x8023E084: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x8023E088: lui         $fp, 0x3D48
    ctx->r30 = S32(0X3D48 << 16);
    // 0x8023E08C: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8023E090: lui         $s7, 0x2E
    ctx->r23 = S32(0X2E << 16);
    // 0x8023E094: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8023E098: addiu       $s6, $zero, 0x14
    ctx->r22 = ADD32(0, 0X14);
    // 0x8023E09C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023E0A0: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8023E0A4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023E0A8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8023E0AC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8023E0B0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023E0B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_8023E0B8:
    // 0x8023E0B8: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8023E0BC: addu        $s1, $s1, $s2
    ctx->r17 = ADD32(ctx->r17, ctx->r18);
    // 0x8023E0C0: lbu         $s1, 0x67DC($s1)
    ctx->r17 = MEM_BU(ctx->r17, 0X67DC);
    // 0x8023E0C4: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8023E0C8: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
    // 0x8023E0CC: lbu         $s0, 0x67DD($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0X67DD);
    // 0x8023E0D0: jal         0x8003B878
    // 0x8023E0D4: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x8023E0D4: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    after_0:
    // 0x8023E0D8: sw          $s5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r21;
    // 0x8023E0DC: lw          $v1, 0xD8($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XD8);
    // 0x8023E0E0: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8023E0E4: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8023E0E8: lw          $a2, 0xDC($s3)
    ctx->r6 = MEM_W(ctx->r19, 0XDC);
    // 0x8023E0EC: sll         $a0, $s0, 8
    ctx->r4 = S32(ctx->r16 << 8);
    // 0x8023E0F0: or          $v1, $s1, $fp
    ctx->r3 = ctx->r17 | ctx->r30;
    // 0x8023E0F4: or          $v1, $a0, $v1
    ctx->r3 = ctx->r4 | ctx->r3;
    // 0x8023E0F8: addiu       $a1, $s1, 0x1F
    ctx->r5 = ADD32(ctx->r17, 0X1F);
    // 0x8023E0FC: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x8023E100: or          $v1, $a1, $s7
    ctx->r3 = ctx->r5 | ctx->r23;
    // 0x8023E104: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x8023E108: addiu       $s0, $s0, 0x1F
    ctx->r16 = ADD32(ctx->r16, 0X1F);
    // 0x8023E10C: sll         $s0, $s0, 8
    ctx->r16 = S32(ctx->r16 << 8);
    // 0x8023E110: or          $s1, $s0, $s1
    ctx->r17 = ctx->r16 | ctx->r17;
    // 0x8023E114: or          $s0, $s0, $a1
    ctx->r16 = ctx->r16 | ctx->r5;
    // 0x8023E118: sw          $a0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r4;
    // 0x8023E11C: sw          $s1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r17;
    // 0x8023E120: sw          $s0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r16;
    // 0x8023E124: sw          $s6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r22;
    // 0x8023E128: sw          $a2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r6;
    // 0x8023E12C: slti        $v0, $s4, 0x4
    ctx->r2 = SIGNED(ctx->r20) < 0X4 ? 1 : 0;
    // 0x8023E130: bne         $v0, $zero, L_8023E0B8
    if (ctx->r2 != 0) {
        // 0x8023E134: addiu       $s3, $s3, 0x8
        ctx->r19 = ADD32(ctx->r19, 0X8);
            goto L_8023E0B8;
    }
    // 0x8023E134: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x8023E138: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8023E13C: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x8023E140: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8023E144: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8023E148: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8023E14C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8023E150: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023E154: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023E158: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023E15C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023E160: jr          $ra
    // 0x8023E164: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023E164: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8023E168: nop

    // 0x8023E16C: nop

;}
RECOMP_FUNC void func_8023BDCC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BDCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023BDD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023BDD4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023BDD8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023BDDC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8023BDE0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023BDE4: addu        $s3, $s1, $zero
    ctx->r19 = ADD32(ctx->r17, 0);
    // 0x8023BDE8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023BDEC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023BDF0: jal         0x8004EEAC
    // 0x8023BDF4: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x8023BDF4: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    after_0:
    // 0x8023BDF8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8023BDFC: beq         $a1, $zero, L_8023BEBC
    if (ctx->r5 == 0) {
        // 0x8023BE00: addiu       $a2, $s0, 0x328
        ctx->r6 = ADD32(ctx->r16, 0X328);
            goto L_8023BEBC;
    }
    // 0x8023BE00: addiu       $a2, $s0, 0x328
    ctx->r6 = ADD32(ctx->r16, 0X328);
    // 0x8023BE04: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x8023BE08: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023BE0C: lhu         $v1, 0x7520($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X7520);
    // 0x8023BE10: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8023BE14: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8023BE18: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023BE1C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023BE20: sw          $a1, 0x7528($at)
    MEM_W(0X7528, ctx->r1) = ctx->r5;
    // 0x8023BE24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BE28: sllv        $v0, $v0, $a0
    ctx->r2 = S32(ctx->r2 << (ctx->r4 & 31));
    // 0x8023BE2C: sw          $s0, 0x328($a1)
    MEM_W(0X328, ctx->r5) = ctx->r16;
    // 0x8023BE30: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8023BE34: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023BE38: sh          $v1, 0x7520($at)
    MEM_H(0X7520, ctx->r1) = ctx->r3;
    // 0x8023BE3C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8023BE40: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023BE44: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8023BE48: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023BE4C: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x8023BE50: addiu       $v0, $s3, -0x3
    ctx->r2 = ADD32(ctx->r19, -0X3);
    // 0x8023BE54: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x8023BE58: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x8023BE5C: sb          $s2, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r18;
    // 0x8023BE60: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x8023BE64: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x8023BE68: bltz        $a2, L_8023BE78
    if (SIGNED(ctx->r6) < 0) {
        // 0x8023BE6C: sb          $v1, 0xF($a1)
        MEM_B(0XF, ctx->r5) = ctx->r3;
            goto L_8023BE78;
    }
    // 0x8023BE6C: sb          $v1, 0xF($a1)
    MEM_B(0XF, ctx->r5) = ctx->r3;
    // 0x8023BE70: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x8023BE74: lw          $a2, 0x7544($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X7544);
L_8023BE78:
    // 0x8023BE78: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x8023BE7C: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8023BE80: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x8023BE84: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8023BE88: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x8023BE8C: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8023BE90: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x8023BE94: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8023BE98: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x8023BE9C: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x8023BEA0: sw          $v0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r2;
    // 0x8023BEA4: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8023BEA8: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x8023BEAC: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8023BEB0: sh          $zero, 0x58($a1)
    MEM_H(0X58, ctx->r5) = 0;
    // 0x8023BEB4: sh          $zero, 0x54($a1)
    MEM_H(0X54, ctx->r5) = 0;
    // 0x8023BEB8: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
L_8023BEBC:
    // 0x8023BEBC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023BEC0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023BEC4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023BEC8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023BECC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023BED0: jr          $ra
    // 0x8023BED4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023BED4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80231040_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231044: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231048: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023104C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231050: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80231054: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80231058: addiu       $v0, $zero, -0xC8
    ctx->r2 = ADD32(0, -0XC8);
    // 0x8023105C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80231060: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80231064: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80231068: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8023106C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80231070: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80231074: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80231078: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8023107C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80231080: jal         0x8004D5D4
    // 0x80231084: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80231084: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80231088: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023108C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80231090: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80231094: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80231098: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8023109C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802310A0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802310A4: jal         0x8003E934
    // 0x802310A8: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x802310A8: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x802310AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802310B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802310B4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802310B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802310BC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802310C0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802310C4: addiu       $v0, $v0, 0x5C78
    ctx->r2 = ADD32(ctx->r2, 0X5C78);
    // 0x802310C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802310CC: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x802310D0: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x802310D4: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x802310D8: jal         0x80050294
    // 0x802310DC: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x802310DC: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    after_2:
    // 0x802310E0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802310E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802310E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802310EC: jr          $ra
    // 0x802310F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802310F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A36C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A36C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A370: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A374: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A378: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A37C: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022A380: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x8022A384: bne         $v1, $v0, L_8022A3A0
    if (ctx->r3 != ctx->r2) {
        // 0x8022A388: addiu       $v0, $zero, 0x29
        ctx->r2 = ADD32(0, 0X29);
            goto L_8022A3A0;
    }
    // 0x8022A388: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
    // 0x8022A38C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022A390: jal         0x800616FC
    // 0x8022A394: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x8022A394: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_0:
    // 0x8022A398: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022A39C: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
L_8022A3A0:
    // 0x8022A3A0: bne         $v1, $v0, L_8022A3B0
    if (ctx->r3 != ctx->r2) {
        // 0x8022A3A4: addiu       $v0, $zero, 0x2D
        ctx->r2 = ADD32(0, 0X2D);
            goto L_8022A3B0;
    }
    // 0x8022A3A4: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x8022A3A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A3AC: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
L_8022A3B0:
    // 0x8022A3B0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8022A3B4: slti        $v0, $v0, 0x34
    ctx->r2 = SIGNED(ctx->r2) < 0X34 ? 1 : 0;
    // 0x8022A3B8: bne         $v0, $zero, L_8022A3C8
    if (ctx->r2 != 0) {
        // 0x8022A3BC: nop
    
            goto L_8022A3C8;
    }
    // 0x8022A3BC: nop

    // 0x8022A3C0: jal         0x800600F8
    // 0x8022A3C4: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_1;
    // 0x8022A3C4: nop

    after_1:
L_8022A3C8:
    // 0x8022A3C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A3CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A3D0: jr          $ra
    // 0x8022A3D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A3D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F374_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F374: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F378: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F37C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F380: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F384: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F388: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022F38C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022F390: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022F394: jal         0x8004F820
    // 0x8022F398: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022F398: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022F39C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F3A0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F3A4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022F3A8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022F3AC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022F3B0: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022F3B4: bne         $v0, $zero, L_8022F3D8
    if (ctx->r2 != 0) {
        // 0x8022F3B8: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_8022F3D8;
    }
    // 0x8022F3B8: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x8022F3BC: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022F3C0: lbu         $a0, 0x34B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022F3C4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022F3C8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022F3CC: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022F3D0: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022F3D4: sb          $a0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r4;
L_8022F3D8:
    // 0x8022F3D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F3DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F3E0: jr          $ra
    // 0x8022F3E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F3E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80240810_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80240810: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80240814: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80240818: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024081C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80240820: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80240824: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80240828: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8024082C: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x80240830: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80240834: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80240838: jal         0x8009A3B4
    // 0x8024083C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8024083C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80240840: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80240844: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80240848: jal         0x8009A3B4
    // 0x8024084C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8024084C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80240850: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80240854: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80240858: jal         0x8009A3B4
    // 0x8024085C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8024085C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80240860: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80240864: jal         0x80240958
    // 0x80240868: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80240958_ovl5(rdram, ctx);
        goto after_3;
    // 0x80240868: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8024086C: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x80240870: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80240874: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80240878: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x8024087C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80240880: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80240884: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80240888: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8024088C: jal         0x800324B4
    // 0x80240890: lh          $a0, 0x2($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X2);
    func_800324B4_D8B4(rdram, ctx);
        goto after_4;
    // 0x80240890: lh          $a0, 0x2($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X2);
    after_4:
    // 0x80240894: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80240898: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024089C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802408A0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802408A4: srl         $v1, $v1, 4
    ctx->r3 = S32(U32(ctx->r3) >> 4);
    // 0x802408A8: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x802408AC: jal         0x80032498
    // 0x802408B0: lh          $a0, 0x2($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X2);
    func_80032498_D898(rdram, ctx);
        goto after_5;
    // 0x802408B0: lh          $a0, 0x2($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X2);
    after_5:
    // 0x802408B4: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802408B8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802408BC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802408C0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802408C4: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x802408C8: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x802408CC: addiu       $v1, $v1, 0x1000
    ctx->r3 = ADD32(ctx->r3, 0X1000);
    // 0x802408D0: sh          $v1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r3;
    // 0x802408D4: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x802408D8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802408DC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802408E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802408E4: lh          $v0, -0x2400($at)
    ctx->r2 = MEM_H(ctx->r1, -0X2400);
    // 0x802408E8: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x802408EC: addiu       $v0, $v0, -0xC00
    ctx->r2 = ADD32(ctx->r2, -0XC00);
    // 0x802408F0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802408F4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802408F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802408FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240900: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80240904: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80240908: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8024090C: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80240910: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x80240914: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80240918: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8024091C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80240920: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80240924: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80240928: jal         0x80240C2C
    // 0x8024092C: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    func_80240C2C_ovl5(rdram, ctx);
        goto after_6;
    // 0x8024092C: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    after_6:
    // 0x80240930: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80240934: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80240938: jal         0x8009A3B4
    // 0x8024093C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8024093C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x80240940: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80240944: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80240948: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024094C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80240950: jr          $ra
    // 0x80240954: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80240954: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802318B8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802318B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802318BC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802318C0: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802318C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802318C8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802318CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802318D0: lw          $v0, 0x5CD0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5CD0);
    // 0x802318D4: jalr        $v0
    // 0x802318D8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802318D8: nop

    after_0:
    // 0x802318DC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802318E0: jr          $ra
    // 0x802318E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802318E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234FBC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234FBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80234FC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234FC4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234FC8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80234FCC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80234FD0: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x80234FD4: lw          $a1, 0x340($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X340);
    // 0x80234FD8: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80234FDC: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80234FE0: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80234FE4: and         $a0, $a1, $v1
    ctx->r4 = ctx->r5 & ctx->r3;
    // 0x80234FE8: beq         $a0, $zero, L_8023501C
    if (ctx->r4 == 0) {
        // 0x80234FEC: sh          $v0, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r2;
            goto L_8023501C;
    }
    // 0x80234FEC: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x80234FF0: lui         $v0, 0x1800
    ctx->r2 = S32(0X1800 << 16);
    // 0x80234FF4: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x80234FF8: beq         $v0, $zero, L_8023501C
    if (ctx->r2 == 0) {
        // 0x80234FFC: addiu       $v1, $zero, 0x7FFF
        ctx->r3 = ADD32(0, 0X7FFF);
            goto L_8023501C;
    }
    // 0x80234FFC: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x80235000: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x80235004: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80235008: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8023500C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80235010: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80235014: jal         0x8002A33C
    // 0x80235018: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80235018: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    after_0:
L_8023501C:
    // 0x8023501C: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x80235020: bgtz        $v0, L_80235054
    if (SIGNED(ctx->r2) > 0) {
        // 0x80235024: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80235054;
    }
    // 0x80235024: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235028: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8023502C: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x80235030: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80235034: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80235038: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x8023503C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80235040: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80235044: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80235048: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x8023504C: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x80235050: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80235054:
    // 0x80235054: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80235058: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023505C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235060: jr          $ra
    // 0x80235064: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235064: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80235068: nop

    // 0x8023506C: nop

;}
RECOMP_FUNC void func_80241EC0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241EC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80241EC4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80241EC8: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x80241ECC: bne         $v0, $zero, L_80241EEC
    if (ctx->r2 != 0) {
        // 0x80241ED0: nop
    
            goto L_80241EEC;
    }
    // 0x80241ED0: nop

    // 0x80241ED4: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80241ED8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80241EDC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80241EE0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80241EE4: j           L_80241F00
    // 0x80241EE8: lw          $v0, 0x6E90($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6E90);
        goto L_80241F00;
    // 0x80241EE8: lw          $v0, 0x6E90($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6E90);
L_80241EEC:
    // 0x80241EEC: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80241EF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80241EF4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80241EF8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80241EFC: lw          $v0, 0x6E94($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6E94);
L_80241F00:
    // 0x80241F00: jalr        $v0
    // 0x80241F04: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80241F04: nop

    after_0:
    // 0x80241F08: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80241F0C: jr          $ra
    // 0x80241F10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80241F10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802312D4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802312D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802312D8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802312DC: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802312E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802312E4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802312E8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802312EC: lw          $v0, 0x5C9C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5C9C);
    // 0x802312F0: jalr        $v0
    // 0x802312F4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802312F4: nop

    after_0:
    // 0x802312F8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802312FC: jr          $ra
    // 0x80231300: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231300: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EE00_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EE00: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022EE04: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022EE08: bne         $v0, $zero, L_8022EE40
    if (ctx->r2 != 0) {
        // 0x8022EE0C: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_8022EE40;
    }
    // 0x8022EE0C: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x8022EE10: lhu         $v0, 0x348($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X348);
    // 0x8022EE14: lh          $v1, 0x34E($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X34E);
    // 0x8022EE18: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022EE1C: beq         $v1, $zero, L_8022EE2C
    if (ctx->r3 == 0) {
        // 0x8022EE20: sh          $v0, 0x348($a0)
        MEM_H(0X348, ctx->r4) = ctx->r2;
            goto L_8022EE2C;
    }
    // 0x8022EE20: sh          $v0, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r2;
    // 0x8022EE24: j           L_8022EE30
    // 0x8022EE28: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8022EE30;
    // 0x8022EE28: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022EE2C:
    // 0x8022EE2C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8022EE30:
    // 0x8022EE30: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022EE34: lbu         $v0, 0x3($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X3);
    // 0x8022EE38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EE3C: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
L_8022EE40:
    // 0x8022EE40: jr          $ra
    // 0x8022EE44: nop

    TRACE_RETURN()
    return;
    // 0x8022EE44: nop

;}
RECOMP_FUNC void func_802334EC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802334EC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802334F0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802334F4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802334F8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802334FC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80233500: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80233504: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80233508: bne         $v0, $zero, L_802335B0
    if (ctx->r2 != 0) {
        // 0x8023350C: addiu       $v1, $s1, 0x328
        ctx->r3 = ADD32(ctx->r17, 0X328);
            goto L_802335B0;
    }
    // 0x8023350C: addiu       $v1, $s1, 0x328
    ctx->r3 = ADD32(ctx->r17, 0X328);
    // 0x80233510: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80233514: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233518: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8023351C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233520: beq         $v1, $v0, L_80233568
    if (ctx->r3 == ctx->r2) {
        // 0x80233524: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80233568;
    }
    // 0x80233524: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80233528: beql        $v0, $zero, L_80233540
    if (ctx->r2 == 0) {
        // 0x8023352C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80233540;
    }
    goto skip_0;
    // 0x8023352C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_0:
    // 0x80233530: beq         $v1, $zero, L_80233558
    if (ctx->r3 == 0) {
        // 0x80233534: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80233558;
    }
    // 0x80233534: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80233538: j           L_80233830
    // 0x8023353C: nop

        goto L_80233830;
    // 0x8023353C: nop

L_80233540:
    // 0x80233540: beq         $v1, $v0, L_8023358C
    if (ctx->r3 == ctx->r2) {
        // 0x80233544: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8023358C;
    }
    // 0x80233544: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80233548: beq         $v1, $v0, L_802335A0
    if (ctx->r3 == ctx->r2) {
        // 0x8023354C: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_802335A0;
    }
    // 0x8023354C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80233550: j           L_80233830
    // 0x80233554: nop

        goto L_80233830;
    // 0x80233554: nop

L_80233558:
    // 0x80233558: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8023355C: addiu       $v0, $zero, 0x44
    ctx->r2 = ADD32(0, 0X44);
    // 0x80233560: j           L_80233830
    // 0x80233564: sh          $v0, 0x330($s1)
    MEM_H(0X330, ctx->r17) = ctx->r2;
        goto L_80233830;
    // 0x80233564: sh          $v0, 0x330($s1)
    MEM_H(0X330, ctx->r17) = ctx->r2;
L_80233568:
    // 0x80233568: addiu       $a0, $zero, 0xED
    ctx->r4 = ADD32(0, 0XED);
    // 0x8023356C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80233570: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80233574: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80233578: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8023357C: jal         0x8002A33C
    // 0x80233580: sh          $v0, 0x330($s1)
    MEM_H(0X330, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80233580: sh          $v0, 0x330($s1)
    MEM_H(0X330, ctx->r17) = ctx->r2;
    after_0:
    // 0x80233584: j           L_80233830
    // 0x80233588: nop

        goto L_80233830;
    // 0x80233588: nop

L_8023358C:
    // 0x8023358C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80233590: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80233594: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80233598: j           L_80233830
    // 0x8023359C: sh          $v0, 0x330($s1)
    MEM_H(0X330, ctx->r17) = ctx->r2;
        goto L_80233830;
    // 0x8023359C: sh          $v0, 0x330($s1)
    MEM_H(0X330, ctx->r17) = ctx->r2;
L_802335A0:
    // 0x802335A0: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x802335A4: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802335A8: j           L_80233830
    // 0x802335AC: sh          $v0, 0x330($s1)
    MEM_H(0X330, ctx->r17) = ctx->r2;
        goto L_80233830;
    // 0x802335AC: sh          $v0, 0x330($s1)
    MEM_H(0X330, ctx->r17) = ctx->r2;
L_802335B0:
    // 0x802335B0: lhu         $v0, 0x330($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X330);
    // 0x802335B4: lbu         $a0, 0xA($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XA);
    // 0x802335B8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802335BC: sh          $v0, 0x330($s1)
    MEM_H(0X330, ctx->r17) = ctx->r2;
    // 0x802335C0: sltiu       $v0, $a0, 0x5
    ctx->r2 = ctx->r4 < 0X5 ? 1 : 0;
    // 0x802335C4: beq         $v0, $zero, L_80233830
    if (ctx->r2 == 0) {
        // 0x802335C8: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_80233830;
    }
    // 0x802335C8: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x802335CC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802335D0: addu        $at, $at, $v0
    gpr jr_addend_802335D8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802335D4: lw          $v0, 0x7260($at)
    ctx->r2 = ADD32(ctx->r1, 0X7260);
    // 0x802335D8: jr          $v0
    // 0x802335DC: nop

    switch (jr_addend_802335D8 >> 2) {
        case 0: goto L_802335E0; break;
        case 1: goto L_80233650; break;
        case 2: goto L_80233674; break;
        case 3: goto L_802337A0; break;
        case 4: goto L_80233814; break;
        default: switch_error(__func__, 0x802335D8, 0x80247260);
    }
    // 0x802335DC: nop

L_802335E0:
    // 0x802335E0: lh          $v0, 0x8($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X8);
    // 0x802335E4: bne         $v0, $zero, L_80233604
    if (ctx->r2 != 0) {
        // 0x802335E8: addiu       $v0, $zero, -0x90
        ctx->r2 = ADD32(0, -0X90);
            goto L_80233604;
    }
    // 0x802335E8: addiu       $v0, $zero, -0x90
    ctx->r2 = ADD32(0, -0X90);
    // 0x802335EC: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802335F0: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x802335F4: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x802335F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802335FC: j           L_80233830
    // 0x80233600: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80233830;
    // 0x80233600: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80233604:
    // 0x80233604: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80233608: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023360C: addiu       $a1, $zero, -0x90
    ctx->r5 = ADD32(0, -0X90);
    // 0x80233610: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233614: jal         0x8004DA90
    // 0x80233618: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80233618: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8023361C: jal         0x8003F754
    // 0x80233620: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_2;
    // 0x80233620: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80233624: beq         $v0, $zero, L_80233830
    if (ctx->r2 == 0) {
        // 0x80233628: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_80233830;
    }
    // 0x80233628: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8023362C: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x80233630: jal         0x8009A3B4
    // 0x80233634: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80233634: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80233638: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8023363C: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x80233640: jal         0x8009A3B4
    // 0x80233644: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80233644: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x80233648: j           L_80233830
    // 0x8023364C: nop

        goto L_80233830;
    // 0x8023364C: nop

L_80233650:
    // 0x80233650: lh          $v0, 0x8($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X8);
    // 0x80233654: bne         $v0, $zero, L_80233830
    if (ctx->r2 != 0) {
        // 0x80233658: nop
    
            goto L_80233830;
    }
    // 0x80233658: nop

    // 0x8023365C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80233660: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233664: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80233668: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8023366C: j           L_80233830
    // 0x80233670: sh          $v0, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r2;
        goto L_80233830;
    // 0x80233670: sh          $v0, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r2;
L_80233674:
    // 0x80233674: lh          $v0, 0x8($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X8);
    // 0x80233678: bne         $v0, $zero, L_80233698
    if (ctx->r2 != 0) {
        // 0x8023367C: addiu       $v0, $zero, 0x400
        ctx->r2 = ADD32(0, 0X400);
            goto L_80233698;
    }
    // 0x8023367C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80233680: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80233684: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x80233688: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x8023368C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80233690: j           L_80233830
    // 0x80233694: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80233830;
    // 0x80233694: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80233698:
    // 0x80233698: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8023369C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802336A0: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x802336A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802336A8: jal         0x8004DA90
    // 0x802336AC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x802336AC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
    // 0x802336B0: jal         0x8003F754
    // 0x802336B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_6;
    // 0x802336B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x802336B8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802336BC: beq         $s0, $zero, L_80233830
    if (ctx->r16 == 0) {
        // 0x802336C0: nop
    
            goto L_80233830;
    }
    // 0x802336C0: nop

    // 0x802336C4: jal         0x800715F8
    // 0x802336C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800715F8_4C9F8(rdram, ctx);
        goto after_7;
    // 0x802336C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x802336CC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802336D0: lbu         $v1, -0x3A50($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A50);
    // 0x802336D4: bne         $v1, $zero, L_8023373C
    if (ctx->r3 != 0) {
        // 0x802336D8: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_8023373C;
    }
    // 0x802336D8: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x802336DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802336E0: jal         0x800711A8
    // 0x802336E4: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_800711A8_4C5A8(rdram, ctx);
        goto after_8;
    // 0x802336E4: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_8:
    // 0x802336E8: beq         $s2, $zero, L_8023373C
    if (ctx->r18 == 0) {
        // 0x802336EC: addiu       $s0, $sp, 0x10
        ctx->r16 = ADD32(ctx->r29, 0X10);
            goto L_8023373C;
    }
    // 0x802336EC: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x802336F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802336F4: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x802336F8: jal         0x8009A3B4
    // 0x802336FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x802336FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x80233700: lh          $a0, 0x56($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X56);
    // 0x80233704: jal         0x800324B4
    // 0x80233708: nop

    func_800324B4_D8B4(rdram, ctx);
        goto after_10;
    // 0x80233708: nop

    after_10:
    // 0x8023370C: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x80233710: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x80233714: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80233718: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x8023371C: jal         0x80032498
    // 0x80233720: lh          $a0, 0x56($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X56);
    func_80032498_D898(rdram, ctx);
        goto after_11;
    // 0x80233720: lh          $a0, 0x56($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X56);
    after_11:
    // 0x80233724: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x80233728: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023372C: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x80233730: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80233734: jal         0x80233B98
    // 0x80233738: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    func_80233B98_ovl5(rdram, ctx);
        goto after_12;
    // 0x80233738: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    after_12:
L_8023373C:
    // 0x8023373C: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80233740: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233744: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x80233748: jal         0x8009A3B4
    // 0x8023374C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x8023374C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_13:
    // 0x80233750: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x80233754: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x80233758: jal         0x8009A3B4
    // 0x8023375C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x8023375C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_14:
    // 0x80233760: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80233764: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x80233768: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x8023376C: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80233770: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80233774: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x80233778: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8023377C: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x80233780: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80233784: jal         0x8003491C
    // 0x80233788: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    func_8003491C_FD1C(rdram, ctx);
        goto after_15;
    // 0x80233788: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    after_15:
    // 0x8023378C: addiu       $a0, $zero, 0xEE
    ctx->r4 = ADD32(0, 0XEE);
    // 0x80233790: jal         0x8002A33C
    // 0x80233794: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_16;
    // 0x80233794: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_16:
    // 0x80233798: j           L_80233830
    // 0x8023379C: nop

        goto L_80233830;
    // 0x8023379C: nop

L_802337A0:
    // 0x802337A0: lh          $v0, 0x8($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X8);
    // 0x802337A4: bne         $v0, $zero, L_802337BC
    if (ctx->r2 != 0) {
        // 0x802337A8: nop
    
            goto L_802337BC;
    }
    // 0x802337A8: nop

    // 0x802337AC: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802337B0: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x802337B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802337B8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_802337BC:
    // 0x802337BC: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x802337C0: bgez        $v0, L_802337D4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802337C4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802337D4;
    }
    // 0x802337C4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802337C8: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x802337CC: j           L_802337F8
    // 0x802337D0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
        goto L_802337F8;
    // 0x802337D0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_802337D4:
    // 0x802337D4: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x802337D8: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x802337DC: jal         0x8009A3B4
    // 0x802337E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_17;
    // 0x802337E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_17:
    // 0x802337E4: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x802337E8: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x802337EC: jal         0x8009A3B4
    // 0x802337F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_18;
    // 0x802337F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_18:
    // 0x802337F4: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
L_802337F8:
    // 0x802337F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802337FC: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80233800: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233804: jal         0x8004DA90
    // 0x80233808: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_19;
    // 0x80233808: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_19:
    // 0x8023380C: j           L_80233830
    // 0x80233810: nop

        goto L_80233830;
    // 0x80233810: nop

L_80233814:
    // 0x80233814: lh          $v0, 0x8($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X8);
    // 0x80233818: bne         $v0, $zero, L_80233830
    if (ctx->r2 != 0) {
        // 0x8023381C: nop
    
            goto L_80233830;
    }
    // 0x8023381C: nop

    // 0x80233820: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x80233824: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x80233828: ori         $v0, $v0, 0x801
    ctx->r2 = ctx->r2 | 0X801;
    // 0x8023382C: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
L_80233830:
    // 0x80233830: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80233834: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80233838: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023383C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80233840: jr          $ra
    // 0x80233844: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80233844: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022F19C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F19C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F1A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F1A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F1A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022F1AC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022F1B0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F1B4: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022F1B8: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022F1BC: jal         0x8004FA7C
    // 0x8022F1C0: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022F1C0: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x8022F1C4: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022F1C8: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022F1CC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022F1D0: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022F1D4: beq         $v0, $zero, L_8022F1EC
    if (ctx->r2 == 0) {
        // 0x8022F1D8: nop
    
            goto L_8022F1EC;
    }
    // 0x8022F1D8: nop

    // 0x8022F1DC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022F1E0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022F1E4: beq         $v0, $zero, L_8022F238
    if (ctx->r2 == 0) {
        // 0x8022F1E8: nop
    
            goto L_8022F238;
    }
    // 0x8022F1E8: nop

L_8022F1EC:
    // 0x8022F1EC: jal         0x8003516C
    // 0x8022F1F0: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x8022F1F0: nop

    after_1:
    // 0x8022F1F4: bne         $v0, $zero, L_8022F238
    if (ctx->r2 != 0) {
        // 0x8022F1F8: nop
    
            goto L_8022F238;
    }
    // 0x8022F1F8: nop

    // 0x8022F1FC: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022F200: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F204: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x8022F208: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F20C: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x8022F210: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022F214: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8022F218: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022F21C: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x8022F220: lbu         $a0, 0x34A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022F224: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022F228: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022F22C: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
    // 0x8022F230: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022F234: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_8022F238:
    // 0x8022F238: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F23C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022F240: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022F244: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022F248: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F24C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022F250: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F254: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F258: jr          $ra
    // 0x8022F25C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F25C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232A0C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232A0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232A10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232A14: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232A18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232A1C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80232A20: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80232A24: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80232A28: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80232A2C: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80232A30: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80232A34: jal         0x8004D5D4
    // 0x80232A38: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80232A38: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80232A3C: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80232A40: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80232A44: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80232A48: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80232A4C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80232A50: addiu       $v0, $zero, 0x5E
    ctx->r2 = ADD32(0, 0X5E);
    // 0x80232A54: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x80232A58: sw          $zero, 0x330($s0)
    MEM_W(0X330, ctx->r16) = 0;
    // 0x80232A5C: sw          $zero, 0x334($s0)
    MEM_W(0X334, ctx->r16) = 0;
    // 0x80232A60: sw          $zero, 0x340($s0)
    MEM_W(0X340, ctx->r16) = 0;
    // 0x80232A64: sw          $zero, 0x344($s0)
    MEM_W(0X344, ctx->r16) = 0;
    // 0x80232A68: sw          $zero, 0x354($s0)
    MEM_W(0X354, ctx->r16) = 0;
    // 0x80232A6C: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x80232A70: bne         $v1, $zero, L_80232A9C
    if (ctx->r3 != 0) {
        // 0x80232A74: sh          $zero, 0x360($s0)
        MEM_H(0X360, ctx->r16) = 0;
            goto L_80232A9C;
    }
    // 0x80232A74: sh          $zero, 0x360($s0)
    MEM_H(0X360, ctx->r16) = 0;
    // 0x80232A78: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80232A7C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80232A80: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80232A84: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232A88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232A8C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80232A90: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x80232A94: j           L_80232ABC
    // 0x80232A98: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
        goto L_80232ABC;
    // 0x80232A98: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
L_80232A9C:
    // 0x80232A9C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80232AA0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80232AA4: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80232AA8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232AAC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232AB0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80232AB4: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x80232AB8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
L_80232ABC:
    // 0x80232ABC: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x80232AC0: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x80232AC4: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    // 0x80232AC8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232ACC: addiu       $v1, $v1, 0x5D5C
    ctx->r3 = ADD32(ctx->r3, 0X5D5C);
    // 0x80232AD0: sw          $v1, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r3;
    // 0x80232AD4: sh          $v0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r2;
    // 0x80232AD8: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x80232ADC: andi        $v0, $a0, 0x2
    ctx->r2 = ctx->r4 & 0X2;
    // 0x80232AE0: bne         $v0, $zero, L_80232AF8
    if (ctx->r2 != 0) {
        // 0x80232AE4: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80232AF8;
    }
    // 0x80232AE4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80232AE8: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x80232AEC: bne         $v0, $zero, L_80232AF8
    if (ctx->r2 != 0) {
        // 0x80232AF0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80232AF8;
    }
    // 0x80232AF0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80232AF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80232AF8:
    // 0x80232AF8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80232AFC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80232B00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232B04: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232B08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232B0C: jal         0x80050294
    // 0x80232B10: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80232B10: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_1:
    // 0x80232B14: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80232B18: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80232B1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232B20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232B24: jr          $ra
    // 0x80232B28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232B28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225CEC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225CEC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80225CF0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80225CF4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80225CF8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80225CFC: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x80225D00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225D04: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x80225D08: addiu       $s1, $s1, 0x7940
    ctx->r17 = ADD32(ctx->r17, 0X7940);
    // 0x80225D0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225D10: addiu       $s0, $a0, 0x10
    ctx->r16 = ADD32(ctx->r4, 0X10);
    // 0x80225D14: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
L_80225D18:
    // 0x80225D18: jal         0x8004EEAC
    // 0x80225D1C: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x80225D1C: nop

    after_0:
    // 0x80225D20: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225D24: beql        $v1, $zero, L_80225D90
    if (ctx->r3 == 0) {
        // 0x80225D28: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_80225D90;
    }
    goto skip_0;
    // 0x80225D28: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    skip_0:
    // 0x80225D2C: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x80225D30: sb          $s3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r19;
    // 0x80225D34: lbu         $v0, -0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XF);
    // 0x80225D38: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80225D3C: lbu         $v0, -0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XE);
    // 0x80225D40: sb          $s3, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r19;
    // 0x80225D44: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x80225D48: lw          $v0, -0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X4);
    // 0x80225D4C: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
    // 0x80225D50: lw          $v0, -0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X8);
    // 0x80225D54: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x80225D58: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80225D5C: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x80225D60: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x80225D64: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x80225D68: lh          $v0, -0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, -0X4);
    // 0x80225D6C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225D70: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80225D74: lh          $v0, -0x2($s0)
    ctx->r2 = MEM_H(ctx->r16, -0X2);
    // 0x80225D78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225D7C: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80225D80: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x80225D84: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225D88: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80225D8C: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_80225D90:
    // 0x80225D90: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80225D94: slti        $v0, $s2, 0x2
    ctx->r2 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x80225D98: bne         $v0, $zero, L_80225D18
    if (ctx->r2 != 0) {
        // 0x80225D9C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80225D18;
    }
    // 0x80225D9C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80225DA0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80225DA4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80225DA8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80225DAC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225DB0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225DB4: jr          $ra
    // 0x80225DB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80225DB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80233848_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233848: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8023384C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80233850: lh          $v0, 0x330($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X330);
    // 0x80233854: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233858: addiu       $a3, $a1, 0x328
    ctx->r7 = ADD32(ctx->r5, 0X328);
    // 0x8023385C: sb          $zero, 0xAC($a1)
    MEM_B(0XAC, ctx->r5) = 0;
    // 0x80233860: beq         $v0, $zero, L_80233888
    if (ctx->r2 == 0) {
        // 0x80233864: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80233888;
    }
    // 0x80233864: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80233868: lb          $v0, 0x365($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X365);
    // 0x8023386C: lhu         $a0, 0x56($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X56);
    // 0x80233870: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80233874: sh          $v1, 0x330($a1)
    MEM_H(0X330, ctx->r5) = ctx->r3;
    // 0x80233878: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8023387C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80233880: j           L_8023388C
    // 0x80233884: sh          $a0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r4;
        goto L_8023388C;
    // 0x80233884: sh          $a0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r4;
L_80233888:
    // 0x80233888: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8023388C:
    // 0x8023388C: andi        $v0, $a2, 0xFF
    ctx->r2 = ctx->r6 & 0XFF;
    // 0x80233890: beq         $v0, $zero, L_802338A4
    if (ctx->r2 == 0) {
        // 0x80233894: nop
    
            goto L_802338A4;
    }
    // 0x80233894: nop

    // 0x80233898: lhu         $v0, 0x4($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X4);
    // 0x8023389C: ori         $v0, $v0, 0x801
    ctx->r2 = ctx->r2 | 0X801;
    // 0x802338A0: sh          $v0, 0x4($a3)
    MEM_H(0X4, ctx->r7) = ctx->r2;
L_802338A4:
    // 0x802338A4: jr          $ra
    // 0x802338A8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x802338A8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
