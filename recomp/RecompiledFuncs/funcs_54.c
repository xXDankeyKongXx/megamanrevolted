#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80229AE0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229AE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229AE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229AE8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229AEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80229AF0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80229AF4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229AF8: lw          $v1, 0x33C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X33C);
    // 0x80229AFC: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80229B00: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80229B04: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x80229B08: beq         $a0, $zero, L_80229D64
    if (ctx->r4 == 0) {
        // 0x80229B0C: addiu       $s2, $s0, 0x328
        ctx->r18 = ADD32(ctx->r16, 0X328);
            goto L_80229D64;
    }
    // 0x80229B0C: addiu       $s2, $s0, 0x328
    ctx->r18 = ADD32(ctx->r16, 0X328);
    // 0x80229B10: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x80229B14: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80229B18: beql        $v0, $zero, L_80229D5C
    if (ctx->r2 == 0) {
        // 0x80229B1C: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_80229D5C;
    }
    goto skip_0;
    // 0x80229B1C: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x80229B20: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x80229B24: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x80229B28: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80229B2C: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x80229B30: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229B34: bgtz        $v0, L_80229B74
    if (SIGNED(ctx->r2) > 0) {
        // 0x80229B38: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_80229B74;
    }
    // 0x80229B38: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x80229B3C: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x80229B40: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80229B44: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80229B48: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80229B4C: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x80229B50: ori         $v0, $v0, 0x48
    ctx->r2 = ctx->r2 | 0X48;
    // 0x80229B54: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80229B58: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80229B5C: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    // 0x80229B60: lh          $v0, 0x32E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X32E);
    // 0x80229B64: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80229B68: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80229B6C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229B70: lbu         $a0, 0x9($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X9);
L_80229B74:
    // 0x80229B74: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x80229B78: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80229B7C: beq         $v0, $zero, L_80229CE0
    if (ctx->r2 == 0) {
        // 0x80229B80: lui         $v1, 0x2000
        ctx->r3 = S32(0X2000 << 16);
            goto L_80229CE0;
    }
    // 0x80229B80: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x80229B84: lhu         $v0, 0x332($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X332);
    // 0x80229B88: lw          $v1, 0x33C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X33C);
    // 0x80229B8C: addu        $a1, $v0, $a0
    ctx->r5 = ADD32(ctx->r2, ctx->r4);
    // 0x80229B90: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80229B94: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80229B98: bne         $v1, $zero, L_80229C00
    if (ctx->r3 != 0) {
        // 0x80229B9C: sh          $a1, 0x332($s0)
        MEM_H(0X332, ctx->r16) = ctx->r5;
            goto L_80229C00;
    }
    // 0x80229B9C: sh          $a1, 0x332($s0)
    MEM_H(0X332, ctx->r16) = ctx->r5;
    // 0x80229BA0: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80229BA4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80229BA8: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80229BAC: lh          $a0, 0x32E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X32E);
    // 0x80229BB0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229BB4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229BB8: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80229BBC: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x80229BC0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229BC4: lbu         $v1, 0x9($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X9);
    // 0x80229BC8: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x80229BCC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229BD0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80229BD4: beq         $v0, $zero, L_80229C00
    if (ctx->r2 == 0) {
        // 0x80229BD8: nop
    
            goto L_80229C00;
    }
    // 0x80229BD8: nop

    // 0x80229BDC: bnel        $a0, $zero, L_80229D3C
    if (ctx->r4 != 0) {
        // 0x80229BE0: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80229D3C;
    }
    goto skip_1;
    // 0x80229BE0: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    skip_1:
    // 0x80229BE4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80229BE8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80229BEC: bnel        $v1, $v0, L_80229BF4
    if (ctx->r3 != ctx->r2) {
        // 0x80229BF0: sh          $zero, 0xA($s0)
        MEM_H(0XA, ctx->r16) = 0;
            goto L_80229BF4;
    }
    goto skip_2;
    // 0x80229BF0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    skip_2:
L_80229BF4:
    // 0x80229BF4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80229BF8: j           L_80229D38
    // 0x80229BFC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80229D38;
    // 0x80229BFC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80229C00:
    // 0x80229C00: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80229C04: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80229C08: beq         $v1, $v0, L_80229D38
    if (ctx->r3 == ctx->r2) {
        // 0x80229C0C: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_80229D38;
    }
    // 0x80229C0C: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x80229C10: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80229C14: jal         0x8002A33C
    // 0x80229C18: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80229C18: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80229C1C: lhu         $v0, 0x22($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X22);
    // 0x80229C20: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80229C24: beq         $v0, $zero, L_80229C74
    if (ctx->r2 == 0) {
        // 0x80229C28: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80229C74;
    }
    // 0x80229C28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229C2C: jal         0x8004EC38
    // 0x80229C30: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x80229C30: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    after_1:
    // 0x80229C34: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x80229C38: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x80229C3C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229C40: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229C44: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80229C48: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    // 0x80229C4C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229C50: slti        $v1, $v1, 0x800
    ctx->r3 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x80229C54: beq         $v1, $zero, L_80229C6C
    if (ctx->r3 == 0) {
        // 0x80229C58: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80229C6C;
    }
    // 0x80229C58: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80229C5C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80229C60: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x80229C64: j           L_80229CD4
    // 0x80229C68: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_80229CD4;
    // 0x80229C68: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80229C6C:
    // 0x80229C6C: j           L_80229CC0
    // 0x80229C70: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80229CC0;
    // 0x80229C70: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80229C74:
    // 0x80229C74: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80229C78: addiu       $a0, $a0, 0x7EC
    ctx->r4 = ADD32(ctx->r4, 0X7EC);
    // 0x80229C7C: jal         0x8004EC38
    // 0x80229C80: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    func_8004EC38_2A038(rdram, ctx);
        goto after_2;
    // 0x80229C80: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    after_2:
    // 0x80229C84: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x80229C88: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x80229C8C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229C90: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229C94: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80229C98: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x80229C9C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229CA0: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x80229CA4: beq         $v0, $zero, L_80229CBC
    if (ctx->r2 == 0) {
        // 0x80229CA8: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80229CBC;
    }
    // 0x80229CA8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80229CAC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80229CB0: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x80229CB4: j           L_80229CD4
    // 0x80229CB8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_80229CD4;
    // 0x80229CB8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80229CBC:
    // 0x80229CBC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80229CC0:
    // 0x80229CC0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80229CC4: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x80229CC8: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80229CCC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229CD0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80229CD4:
    // 0x80229CD4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80229CD8: j           L_80229D44
    // 0x80229CDC: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
        goto L_80229D44;
    // 0x80229CDC: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
L_80229CE0:
    // 0x80229CE0: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x80229CE4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229CE8: bne         $v0, $zero, L_80229D28
    if (ctx->r2 != 0) {
        // 0x80229CEC: nop
    
            goto L_80229D28;
    }
    // 0x80229CEC: nop

    // 0x80229CF0: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80229CF4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80229CF8: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80229CFC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229D00: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229D04: lh          $v1, 0x32E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X32E);
    // 0x80229D08: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80229D0C: lh          $a0, 0x332($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X332);
    // 0x80229D10: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80229D14: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229D18: lbu         $v0, 0x9($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X9);
    // 0x80229D1C: slt         $a0, $a0, $v0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80229D20: bne         $a0, $zero, L_80229D3C
    if (ctx->r4 != 0) {
        // 0x80229D24: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80229D3C;
    }
    // 0x80229D24: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_80229D28:
    // 0x80229D28: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80229D2C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80229D30: bne         $v1, $v0, L_80229D3C
    if (ctx->r3 != ctx->r2) {
        // 0x80229D34: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_80229D3C;
    }
    // 0x80229D34: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
L_80229D38:
    // 0x80229D38: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_80229D3C:
    // 0x80229D3C: jal         0x8002A33C
    // 0x80229D40: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80229D40: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
L_80229D44:
    // 0x80229D44: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80229D48: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x80229D4C: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80229D50: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80229D54: j           L_80229D64
    // 0x80229D58: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
        goto L_80229D64;
    // 0x80229D58: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
L_80229D5C:
    // 0x80229D5C: jal         0x8002A33C
    // 0x80229D60: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80229D60: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_4:
L_80229D64:
    // 0x80229D64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229D68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80229D6C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80229D70: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229D74: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229D78: jr          $ra
    // 0x80229D7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229D7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80237294_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237294: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80237298: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8023729C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802372A0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802372A4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802372A8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802372AC: jal         0x8009A3B4
    // 0x802372B0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802372B0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x802372B4: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802372B8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802372BC: jal         0x8009A3B4
    // 0x802372C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802372C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x802372C4: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802372C8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802372CC: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802372D0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802372D4: bne         $v0, $zero, L_802372EC
    if (ctx->r2 != 0) {
        // 0x802372D8: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_802372EC;
    }
    // 0x802372D8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802372DC: jal         0x8004F4F8
    // 0x802372E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x802372E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802372E4: j           L_802373D0
    // 0x802372E8: nop

        goto L_802373D0;
    // 0x802372E8: nop

L_802372EC:
    // 0x802372EC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802372F0: bne         $v1, $v0, L_802372FC
    if (ctx->r3 != ctx->r2) {
        // 0x802372F4: addiu       $v0, $v1, 0x2
        ctx->r2 = ADD32(ctx->r3, 0X2);
            goto L_802372FC;
    }
    // 0x802372F4: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x802372F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_802372FC:
    // 0x802372FC: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80237300: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80237304: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80237308: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023730C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80237310: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80237314: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237318: lbu         $v1, 0xDA4($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XDA4);
    // 0x8023731C: lbu         $t0, 0xA($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XA);
    // 0x80237320: lhu         $v0, 0x9A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X9A);
    // 0x80237324: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237328: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x8023732C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80237330: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x80237334: lbu         $v1, 0xDA5($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XDA5);
    // 0x80237338: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8023733C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80237340: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
    // 0x80237344: jal         0x8004DA90
    // 0x80237348: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x80237348: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    after_3:
    // 0x8023734C: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80237350: beq         $v0, $zero, L_8023736C
    if (ctx->r2 == 0) {
        // 0x80237354: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023736C;
    }
    // 0x80237354: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80237358: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023735C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80237360: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80237364: bne         $v0, $zero, L_802373B8
    if (ctx->r2 != 0) {
        // 0x80237368: nop
    
            goto L_802373B8;
    }
    // 0x80237368: nop

L_8023736C:
    // 0x8023736C: jal         0x8004F144
    // 0x80237370: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x80237370: nop

    after_4:
    // 0x80237374: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80237378: beq         $v1, $zero, L_802373B8
    if (ctx->r3 == 0) {
        // 0x8023737C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802373B8;
    }
    // 0x8023737C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237380: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80237384: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80237388: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8023738C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80237390: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80237394: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    // 0x80237398: lhu         $v0, 0x90($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X90);
    // 0x8023739C: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x802373A0: lhu         $v0, 0x92($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X92);
    // 0x802373A4: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x802373A8: lhu         $v0, 0x94($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X94);
    // 0x802373AC: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    // 0x802373B0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802373B4: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_802373B8:
    // 0x802373B8: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x802373BC: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x802373C0: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x802373C4: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
    // 0x802373C8: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    // 0x802373CC: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
L_802373D0:
    // 0x802373D0: jal         0x8003F754
    // 0x802373D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_5;
    // 0x802373D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802373D8: bne         $v0, $zero, L_802373F4
    if (ctx->r2 != 0) {
        // 0x802373DC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802373F4;
    }
    // 0x802373DC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802373E0: lw          $v0, 0x9C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X9C);
    // 0x802373E4: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x802373E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802373EC: beq         $v0, $zero, L_80237408
    if (ctx->r2 == 0) {
        // 0x802373F0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80237408;
    }
    // 0x802373F0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_802373F4:
    // 0x802373F4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802373F8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802373FC: sb          $zero, 0x96($s0)
    MEM_B(0X96, ctx->r16) = 0;
    // 0x80237400: j           L_80237458
    // 0x80237404: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_80237458;
    // 0x80237404: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80237408:
    // 0x80237408: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023740C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80237410: beq         $v0, $zero, L_80237458
    if (ctx->r2 == 0) {
        // 0x80237414: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80237458;
    }
    // 0x80237414: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80237418: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x8023741C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80237420: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237424: addiu       $v0, $s0, 0x9C
    ctx->r2 = ADD32(ctx->r16, 0X9C);
    // 0x80237428: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x8023742C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80237430: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80237434: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80237438: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023743C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x80237440: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80237444: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80237448: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023744C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80237450: jal         0x80051E18
    // 0x80237454: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_6;
    // 0x80237454: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_6:
L_80237458:
    // 0x80237458: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x8023745C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80237460: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80237464: jr          $ra
    // 0x80237468: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80237468: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022A9BC_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A9BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A9C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A9C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A9C8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A9CC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A9D0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A9D4: beq         $v1, $zero, L_8022A9F0
    if (ctx->r3 == 0) {
        // 0x8022A9D8: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022A9F0;
    }
    // 0x8022A9D8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022A9DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A9E0: beq         $v1, $v0, L_8022AA30
    if (ctx->r3 == ctx->r2) {
        // 0x8022A9E4: nop
    
            goto L_8022AA30;
    }
    // 0x8022A9E4: nop

    // 0x8022A9E8: j           L_8022AAB8
    // 0x8022A9EC: nop

        goto L_8022AAB8;
    // 0x8022A9EC: nop

L_8022A9F0:
    // 0x8022A9F0: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x8022A9F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A9F8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A9FC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022AA00: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022AA04: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8022AA08: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022AA0C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022AA10: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022AA14: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022AA18: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
    // 0x8022AA1C: andi        $v1, $v1, 0xFF3D
    ctx->r3 = ctx->r3 & 0XFF3D;
    // 0x8022AA20: ori         $v1, $v1, 0x200
    ctx->r3 = ctx->r3 | 0X200;
    // 0x8022AA24: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022AA28: sh          $v1, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r3;
    // 0x8022AA2C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022AA30:
    // 0x8022AA30: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022AA34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AA38: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022AA3C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022AA40: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022AA44: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022AA48: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022AA4C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022AA50: sll         $a2, $v1, 22
    ctx->r6 = S32(ctx->r3 << 22);
    // 0x8022AA54: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022AA58: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x8022AA5C: jal         0x8004DA90
    // 0x8022AA60: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022AA60: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022AA64: jal         0x80040F30
    // 0x8022AA68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022AA68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022AA6C: beq         $v0, $zero, L_8022AAB8
    if (ctx->r2 == 0) {
        // 0x8022AA70: nop
    
            goto L_8022AAB8;
    }
    // 0x8022AA70: nop

    // 0x8022AA74: jal         0x8004F144
    // 0x8022AA78: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x8022AA78: nop

    after_2:
    // 0x8022AA7C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022AA80: beq         $v1, $zero, L_8022AAAC
    if (ctx->r3 == 0) {
        // 0x8022AA84: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8022AAAC;
    }
    // 0x8022AA84: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022AA88: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    // 0x8022AA8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022AA90: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022AA94: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022AA98: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022AA9C: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022AAA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022AAA4: jal         0x8009A3B4
    // 0x8022AAA8: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022AAA8: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_3:
L_8022AAAC:
    // 0x8022AAAC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022AAB0: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x8022AAB4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022AAB8:
    // 0x8022AAB8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022AABC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AAC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AAC4: jr          $ra
    // 0x8022AAC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AAC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E8E4_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E8E4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8022E8E8: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x8022E8EC: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x8022E8F0: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x8022E8F4: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8022E8F8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8022E8FC: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x8022E900: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x8022E904: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x8022E908: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x8022E90C: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022E910: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x8022E914: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x8022E918: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8022E91C: bgez        $v0, L_8022E930
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022E920: addu        $s2, $v1, $zero
        ctx->r18 = ADD32(ctx->r3, 0);
            goto L_8022E930;
    }
    // 0x8022E920: addu        $s2, $v1, $zero
    ctx->r18 = ADD32(ctx->r3, 0);
    // 0x8022E924: negu        $s3, $a2
    ctx->r19 = SUB32(0, ctx->r6);
    // 0x8022E928: negu        $s2, $v1
    ctx->r18 = SUB32(0, ctx->r3);
    // 0x8022E92C: addiu       $s1, $s1, 0x800
    ctx->r17 = ADD32(ctx->r17, 0X800);
L_8022E930:
    // 0x8022E930: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x8022E934: jal         0x8002C654
    // 0x8022E938: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8022E938: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022E93C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E940: jal         0x800319B4
    // 0x8022E944: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8022E944: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022E948: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E94C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022E950: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x8022E954: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x8022E958: negu        $v0, $s3
    ctx->r2 = SUB32(0, ctx->r19);
    // 0x8022E95C: sh          $s2, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r18;
    // 0x8022E960: sh          $s4, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r20;
    // 0x8022E964: jal         0x80031270
    // 0x8022E968: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_80031270_C670(rdram, ctx);
        goto after_2;
    // 0x8022E968: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022E96C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022E970: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E974: jal         0x8009A3B4
    // 0x8022E978: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022E978: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022E97C: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x8022E980: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x8022E984: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x8022E988: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x8022E98C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8022E990: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8022E994: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8022E998: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8022E99C: jr          $ra
    // 0x8022E9A0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x8022E9A0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80231990_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231990: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231994: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231998: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023199C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802319A0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x802319A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802319A8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802319AC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802319B0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802319B4: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802319B8: jal         0x8004F820
    // 0x802319BC: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802319BC: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_0:
    // 0x802319C0: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x802319C4: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x802319C8: sltiu       $a1, $v1, 0x1
    ctx->r5 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x802319CC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802319D0: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x802319D4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802319D8: bne         $v1, $v0, L_802319E4
    if (ctx->r3 != ctx->r2) {
        // 0x802319DC: sh          $a0, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r4;
            goto L_802319E4;
    }
    // 0x802319DC: sh          $a0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r4;
    // 0x802319E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_802319E4:
    // 0x802319E4: beq         $a1, $zero, L_802319F4
    if (ctx->r5 == 0) {
        // 0x802319E8: addiu       $a0, $zero, 0x196
        ctx->r4 = ADD32(0, 0X196);
            goto L_802319F4;
    }
    // 0x802319E8: addiu       $a0, $zero, 0x196
    ctx->r4 = ADD32(0, 0X196);
    // 0x802319EC: jal         0x8002A33C
    // 0x802319F0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x802319F0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
L_802319F4:
    // 0x802319F4: lhu         $v0, 0x380($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X380);
    // 0x802319F8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802319FC: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
    // 0x80231A00: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80231A04: bne         $v0, $zero, L_80231A54
    if (ctx->r2 != 0) {
        // 0x80231A08: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80231A54;
    }
    // 0x80231A08: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80231A0C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80231A10: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80231A14: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80231A18: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
    // 0x80231A1C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80231A20: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80231A24: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80231A28: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80231A2C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80231A30: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80231A34: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80231A38: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231A3C: lbu         $v1, 0xA($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XA);
    // 0x80231A40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231A44: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80231A48: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x80231A4C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80231A50: sw          $v1, 0x378($s0)
    MEM_W(0X378, ctx->r16) = ctx->r3;
L_80231A54:
    // 0x80231A54: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231A58: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231A5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231A60: jr          $ra
    // 0x80231A64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231A64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80239808_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239808: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023980C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239810: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239814: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80239818: lw          $v0, 0xF0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF0);
    // 0x8023981C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80239820: bnel        $v0, $zero, L_80239828
    if (ctx->r2 != 0) {
        // 0x80239824: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_80239828;
    }
    goto skip_0;
    // 0x80239824: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_80239828:
    // 0x80239828: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x8023982C: bne         $v0, $zero, L_80239850
    if (ctx->r2 != 0) {
        // 0x80239830: lui         $v1, 0x200
        ctx->r3 = S32(0X200 << 16);
            goto L_80239850;
    }
    // 0x80239830: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80239834: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80239838: sh          $v0, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r2;
    // 0x8023983C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80239840: sh          $zero, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = 0;
    // 0x80239844: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80239848: j           L_802398A8
    // 0x8023984C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_802398A8;
    // 0x8023984C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80239850:
    // 0x80239850: lw          $v0, 0xFC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XFC);
    // 0x80239854: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80239858: beq         $v0, $zero, L_80239884
    if (ctx->r2 == 0) {
        // 0x8023985C: nop
    
            goto L_80239884;
    }
    // 0x8023985C: nop

    // 0x80239860: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80239864: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80239868: sh          $zero, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = 0;
    // 0x8023986C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80239870: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80239874: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80239878: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8023987C: j           L_802398A8
    // 0x80239880: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_802398A8;
    // 0x80239880: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80239884:
    // 0x80239884: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80239888: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8023988C: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80239890: jal         0x8004DA90
    // 0x80239894: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80239894: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80239898: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8023989C: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x802398A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802398A4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_802398A8:
    // 0x802398A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802398AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802398B0: jr          $ra
    // 0x802398B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802398B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225590_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225590: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225594: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225598: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022559C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802255A0: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802255A4: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x802255A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802255AC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802255B0: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x802255B4: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x802255B8: lw          $s1, 0x1920($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X1920);
    // 0x802255BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802255C0: beq         $v1, $v0, L_802256E0
    if (ctx->r3 == ctx->r2) {
        // 0x802255C4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802256E0;
    }
    // 0x802255C4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802255C8: beql        $v0, $zero, L_802255E0
    if (ctx->r2 == 0) {
        // 0x802255CC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802255E0;
    }
    goto skip_0;
    // 0x802255CC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802255D0: beq         $v1, $zero, L_802255F8
    if (ctx->r3 == 0) {
        // 0x802255D4: nop
    
            goto L_802255F8;
    }
    // 0x802255D4: nop

    // 0x802255D8: j           L_802257E4
    // 0x802255DC: nop

        goto L_802257E4;
    // 0x802255DC: nop

L_802255E0:
    // 0x802255E0: beq         $v1, $v0, L_80225714
    if (ctx->r3 == ctx->r2) {
        // 0x802255E4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80225714;
    }
    // 0x802255E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802255E8: beq         $v1, $v0, L_80225794
    if (ctx->r3 == ctx->r2) {
        // 0x802255EC: nop
    
            goto L_80225794;
    }
    // 0x802255EC: nop

    // 0x802255F0: j           L_802257E4
    // 0x802255F4: nop

        goto L_802257E4;
    // 0x802255F4: nop

L_802255F8:
    // 0x802255F8: jal         0x8006FF84
    // 0x802255FC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x802255FC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x80225600: beq         $v0, $zero, L_802257E4
    if (ctx->r2 == 0) {
        // 0x80225604: nop
    
            goto L_802257E4;
    }
    // 0x80225604: nop

    // 0x80225608: jal         0x80060170
    // 0x8022560C: nop

    func_80060170_3B570(rdram, ctx);
        goto after_1;
    // 0x8022560C: nop

    after_1:
    // 0x80225610: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225614: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225618: jal         0x8005F6B4
    // 0x8022561C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_2;
    // 0x8022561C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80225620: addiu       $a0, $s2, 0x428
    ctx->r4 = ADD32(ctx->r18, 0X428);
    // 0x80225624: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225628: addiu       $v0, $v0, 0x6BC
    ctx->r2 = ADD32(ctx->r2, 0X6BC);
    // 0x8022562C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225630: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80225634: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225638: addiu       $v0, $v0, 0x6AC
    ctx->r2 = ADD32(ctx->r2, 0X6AC);
    // 0x8022563C: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x80225640: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80225644: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x80225648: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022564C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225650: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80225654: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225658: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022565C: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x80225660: lui         $v0, 0x5862
    ctx->r2 = S32(0X5862 << 16);
    // 0x80225664: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225668: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x8022566C: lui         $v0, 0xFDBF
    ctx->r2 = S32(0XFDBF << 16);
    // 0x80225670: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225674: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x80225678: lui         $v0, 0x1D8B
    ctx->r2 = S32(0X1D8B << 16);
    // 0x8022567C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225680: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80225684: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80225688: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022568C: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x80225690: jal         0x8004DD04
    // 0x80225694: addiu       $a1, $s2, 0x438
    ctx->r5 = ADD32(ctx->r18, 0X438);
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x80225694: addiu       $a1, $s2, 0x438
    ctx->r5 = ADD32(ctx->r18, 0X438);
    after_3:
    // 0x80225698: addiu       $a0, $zero, 0x3FE
    ctx->r4 = ADD32(0, 0X3FE);
    // 0x8022569C: addiu       $v0, $zero, 0xDD4
    ctx->r2 = ADD32(0, 0XDD4);
    // 0x802256A0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256A4: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x802256A8: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x802256AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256B0: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x802256B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256B8: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x802256BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256C0: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x802256C4: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x802256C8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802256CC: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802256D0: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x802256D4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802256D8: j           L_802257C4
    // 0x802256DC: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
        goto L_802257C4;
    // 0x802256DC: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
L_802256E0:
    // 0x802256E0: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x802256E4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802256E8: bne         $v0, $zero, L_802257E4
    if (ctx->r2 != 0) {
        // 0x802256EC: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_802257E4;
    }
    // 0x802256EC: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x802256F0: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x802256F4: addiu       $v1, $zero, 0x24
    ctx->r3 = ADD32(0, 0X24);
    // 0x802256F8: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x802256FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225700: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x80225704: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225708: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022570C: j           L_802257E4
    // 0x80225710: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
        goto L_802257E4;
    // 0x80225710: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_80225714:
    // 0x80225714: jal         0x8006033C
    // 0x80225718: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80225718: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    after_4:
    // 0x8022571C: beq         $v0, $zero, L_80225794
    if (ctx->r2 == 0) {
        // 0x80225720: addiu       $v0, $zero, 0x24
        ctx->r2 = ADD32(0, 0X24);
            goto L_80225794;
    }
    // 0x80225720: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
    // 0x80225724: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x80225728: bne         $v1, $v0, L_80225738
    if (ctx->r3 != ctx->r2) {
        // 0x8022572C: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_80225738;
    }
    // 0x8022572C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80225730: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225734: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
L_80225738:
    // 0x80225738: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x8022573C: beq         $v0, $zero, L_80225780
    if (ctx->r2 == 0) {
        // 0x80225740: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80225780;
    }
    // 0x80225740: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80225744: beq         $v0, $zero, L_80225780
    if (ctx->r2 == 0) {
        // 0x80225748: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_80225780;
    }
    // 0x80225748: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x8022574C: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x80225750: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80225754: lh          $a2, 0x4DF2($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X4DF2);
    // 0x80225758: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022575C: jal         0x8004F820
    // 0x80225760: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x80225760: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_5:
    // 0x80225764: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80225768: lhu         $v1, 0x4DF2($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4DF2);
    // 0x8022576C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80225770: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80225774: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225778: j           L_80225794
    // 0x8022577C: sh          $v1, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r3;
        goto L_80225794;
    // 0x8022577C: sh          $v1, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r3;
L_80225780:
    // 0x80225780: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80225784: sb          $v0, 0x448($s2)
    MEM_B(0X448, ctx->r18) = ctx->r2;
    // 0x80225788: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022578C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225790: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80225794:
    // 0x80225794: jal         0x8006033C
    // 0x80225798: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80225798: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_6:
    // 0x8022579C: beq         $v0, $zero, L_802257E4
    if (ctx->r2 == 0) {
        // 0x802257A0: nop
    
            goto L_802257E4;
    }
    // 0x802257A0: nop

    // 0x802257A4: jal         0x80070050
    // 0x802257A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_7;
    // 0x802257A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_7:
    // 0x802257AC: addiu       $a0, $zero, 0x3FE
    ctx->r4 = ADD32(0, 0X3FE);
    // 0x802257B0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802257B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802257B8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x802257BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802257C0: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
L_802257C4:
    // 0x802257C4: jal         0x8004CB2C
    // 0x802257C8: nop

    func_8004CB2C_27F2C(rdram, ctx);
        goto after_8;
    // 0x802257C8: nop

    after_8:
    // 0x802257CC: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802257D0: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x802257D4: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x802257D8: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x802257DC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x802257E0: sb          $v1, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r3;
L_802257E4:
    // 0x802257E4: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x802257E8: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x802257EC: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x802257F0: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x802257F4: beq         $v1, $zero, L_802258BC
    if (ctx->r3 == 0) {
        // 0x802257F8: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_802258BC;
    }
    // 0x802257F8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802257FC: lw          $a0, 0xA4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA4);
    // 0x80225800: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80225804: beq         $v1, $v0, L_80225818
    if (ctx->r3 == ctx->r2) {
        // 0x80225808: nop
    
            goto L_80225818;
    }
    // 0x80225808: nop

    // 0x8022580C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80225810: jalr        $v0
    // 0x80225814: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x80225814: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_80225818:
    // 0x80225818: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022581C: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x80225820: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x80225824: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80225828: beq         $v1, $zero, L_802258BC
    if (ctx->r3 == 0) {
        // 0x8022582C: nop
    
            goto L_802258BC;
    }
    // 0x8022582C: nop

    // 0x80225830: jal         0x8006072C
    // 0x80225834: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_10;
    // 0x80225834: nop

    after_10:
    // 0x80225838: beq         $v0, $zero, L_802258BC
    if (ctx->r2 == 0) {
        // 0x8022583C: nop
    
            goto L_802258BC;
    }
    // 0x8022583C: nop

    // 0x80225840: jal         0x802259E0
    // 0x80225844: nop

    func_802259E0_ovl4(rdram, ctx);
        goto after_11;
    // 0x80225844: nop

    after_11:
    // 0x80225848: jal         0x80061724
    // 0x8022584C: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_12;
    // 0x8022584C: nop

    after_12:
    // 0x80225850: jal         0x80061090
    // 0x80225854: nop

    func_80061090_3C490(rdram, ctx);
        goto after_13;
    // 0x80225854: nop

    after_13:
    // 0x80225858: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022585C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225860: jal         0x80036B00
    // 0x80225864: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_14;
    // 0x80225864: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_14:
    // 0x80225868: jal         0x8002A488
    // 0x8022586C: nop

    func_8002A488_5888(rdram, ctx);
        goto after_15;
    // 0x8022586C: nop

    after_15:
    // 0x80225870: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x80225874: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225878: jal         0x8006036C
    // 0x8022587C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_16;
    // 0x8022587C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    after_16:
    // 0x80225880: addiu       $a0, $s2, 0x428
    ctx->r4 = ADD32(ctx->r18, 0X428);
    // 0x80225884: addiu       $a1, $s2, 0x438
    ctx->r5 = ADD32(ctx->r18, 0X438);
    // 0x80225888: lui         $v0, 0x5862
    ctx->r2 = S32(0X5862 << 16);
    // 0x8022588C: sw          $v0, 0x428($s2)
    MEM_W(0X428, ctx->r18) = ctx->r2;
    // 0x80225890: lui         $v0, 0xFDBF
    ctx->r2 = S32(0XFDBF << 16);
    // 0x80225894: sw          $v0, 0x42C($s2)
    MEM_W(0X42C, ctx->r18) = ctx->r2;
    // 0x80225898: lui         $v0, 0x1D8B
    ctx->r2 = S32(0X1D8B << 16);
    // 0x8022589C: jal         0x8004DD04
    // 0x802258A0: sw          $v0, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_17;
    // 0x802258A0: sw          $v0, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r2;
    after_17:
    // 0x802258A4: addiu       $v0, $zero, 0x961
    ctx->r2 = ADD32(0, 0X961);
    // 0x802258A8: sh          $v0, 0x442($s2)
    MEM_H(0X442, ctx->r18) = ctx->r2;
    // 0x802258AC: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x802258B0: sh          $zero, 0x440($s2)
    MEM_H(0X440, ctx->r18) = 0;
    // 0x802258B4: sh          $zero, 0x444($s2)
    MEM_H(0X444, ctx->r18) = 0;
    // 0x802258B8: sb          $v0, 0x448($s2)
    MEM_B(0X448, ctx->r18) = ctx->r2;
L_802258BC:
    // 0x802258BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802258C0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802258C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802258C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802258CC: jr          $ra
    // 0x802258D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802258D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232FFC_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232FFC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80233000: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80233004: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233008: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023300C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80233010: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80233014: beq         $v0, $zero, L_80233028
    if (ctx->r2 == 0) {
        // 0x80233018: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80233028;
    }
    // 0x80233018: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8023301C: lh          $v0, 0x34C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X34C);
    // 0x80233020: beq         $v0, $zero, L_8023308C
    if (ctx->r2 == 0) {
        // 0x80233024: nop
    
            goto L_8023308C;
    }
    // 0x80233024: nop

L_80233028:
    // 0x80233028: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x8023302C: jal         0x800324B4
    // 0x80233030: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80233030: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_0:
    // 0x80233034: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x80233038: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8023303C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233040: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80233044: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80233048: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8023304C: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x80233050: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233054: jal         0x80032498
    // 0x80233058: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80233058: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    after_1:
    // 0x8023305C: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80233060: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233064: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80233068: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8023306C: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80233070: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233074: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80233078: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8023307C: beq         $v0, $zero, L_8023308C
    if (ctx->r2 == 0) {
        // 0x80233080: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023308C;
    }
    // 0x80233080: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80233084: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80233088: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8023308C:
    // 0x8023308C: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x80233090: xori        $v1, $v0, 0x5
    ctx->r3 = ctx->r2 ^ 0X5;
    // 0x80233094: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80233098: xori        $v0, $v0, 0x14
    ctx->r2 = ctx->r2 ^ 0X14;
    // 0x8023309C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802330A0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802330A4: beq         $v1, $zero, L_802330B4
    if (ctx->r3 == 0) {
        // 0x802330A8: addiu       $a0, $zero, 0x1B6
        ctx->r4 = ADD32(0, 0X1B6);
            goto L_802330B4;
    }
    // 0x802330A8: addiu       $a0, $zero, 0x1B6
    ctx->r4 = ADD32(0, 0X1B6);
    // 0x802330AC: jal         0x8002A33C
    // 0x802330B0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x802330B0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
L_802330B4:
    // 0x802330B4: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x802330B8: bgez        $v0, L_802330DC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802330BC: nop
    
            goto L_802330DC;
    }
    // 0x802330BC: nop

    // 0x802330C0: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x802330C4: bne         $v0, $zero, L_802330DC
    if (ctx->r2 != 0) {
        // 0x802330C8: addiu       $v1, $zero, 0x7
        ctx->r3 = ADD32(0, 0X7);
            goto L_802330DC;
    }
    // 0x802330C8: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x802330CC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802330D0: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802330D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802330D8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802330DC:
    // 0x802330DC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802330E0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802330E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802330E8: jr          $ra
    // 0x802330EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802330EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802361FC_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802361FC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80236200: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80236204: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80236208: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8023620C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80236210: lw          $v1, 0x9C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X9C);
    // 0x80236214: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80236218: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023621C: beq         $v0, $zero, L_80236274
    if (ctx->r2 == 0) {
        // 0x80236220: nop
    
            goto L_80236274;
    }
    // 0x80236220: nop

    // 0x80236224: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80236228: addiu       $s0, $s0, 0x4A06
    ctx->r16 = ADD32(ctx->r16, 0X4A06);
    // 0x8023622C: jal         0x800324B4
    // 0x80236230: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80236230: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_0:
    // 0x80236234: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80236238: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8023623C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80236240: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80236244: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x80236248: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x8023624C: jal         0x80032498
    // 0x80236250: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80236250: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_1:
    // 0x80236254: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80236258: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8023625C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80236260: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x80236264: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236268: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8023626C: j           L_802362A4
    // 0x80236270: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
        goto L_802362A4;
    // 0x80236270: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
L_80236274:
    // 0x80236274: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80236278: beq         $v0, $zero, L_80236294
    if (ctx->r2 == 0) {
        // 0x8023627C: lui         $v0, 0x1C00
        ctx->r2 = S32(0X1C00 << 16);
            goto L_80236294;
    }
    // 0x8023627C: lui         $v0, 0x1C00
    ctx->r2 = S32(0X1C00 << 16);
    // 0x80236280: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80236284: beq         $v0, $zero, L_802362A4
    if (ctx->r2 == 0) {
        // 0x80236288: nop
    
            goto L_802362A4;
    }
    // 0x80236288: nop

    // 0x8023628C: j           L_802362C0
    // 0x80236290: nop

        goto L_802362C0;
    // 0x80236290: nop

L_80236294:
    // 0x80236294: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
    // 0x80236298: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023629C: bne         $v0, $zero, L_802362C0
    if (ctx->r2 != 0) {
        // 0x802362A0: nop
    
            goto L_802362C0;
    }
    // 0x802362A0: nop

L_802362A4:
    // 0x802362A4: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x802362A8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802362AC: bne         $v0, $zero, L_802362EC
    if (ctx->r2 != 0) {
        // 0x802362B0: sw          $zero, 0x9C($s1)
        MEM_W(0X9C, ctx->r17) = 0;
            goto L_802362EC;
    }
    // 0x802362B0: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
    // 0x802362B4: lh          $v0, 0x7C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X7C);
    // 0x802362B8: beq         $v0, $zero, L_802362F4
    if (ctx->r2 == 0) {
        // 0x802362BC: addiu       $a0, $s1, 0x34
        ctx->r4 = ADD32(ctx->r17, 0X34);
            goto L_802362F4;
    }
    // 0x802362BC: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
L_802362C0:
    // 0x802362C0: jal         0x8004F144
    // 0x802362C4: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x802362C4: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
    after_2:
    // 0x802362C8: beq         $v0, $zero, L_802362D8
    if (ctx->r2 == 0) {
        // 0x802362CC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802362D8;
    }
    // 0x802362CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802362D0: jal         0x80236B40
    // 0x802362D4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_80236B40_ovl4(rdram, ctx);
        goto after_3;
    // 0x802362D4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_3:
L_802362D8:
    // 0x802362D8: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x802362DC: jal         0x8004F4F8
    // 0x802362E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_4;
    // 0x802362E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x802362E4: j           L_8023640C
    // 0x802362E8: nop

        goto L_8023640C;
    // 0x802362E8: nop

L_802362EC:
    // 0x802362EC: sh          $zero, 0x7C($s1)
    MEM_H(0X7C, ctx->r17) = 0;
    // 0x802362F0: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
L_802362F4:
    // 0x802362F4: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x802362F8: jal         0x8009A3B4
    // 0x802362FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x802362FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x80236300: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80236304: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80236308: jal         0x8009A3B4
    // 0x8023630C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8023630C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80236310: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80236314: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x80236318: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8023631C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80236320: beq         $v0, $zero, L_8023635C
    if (ctx->r2 == 0) {
        // 0x80236324: sw          $v1, 0x8C($s1)
        MEM_W(0X8C, ctx->r17) = ctx->r3;
            goto L_8023635C;
    }
    // 0x80236324: sw          $v1, 0x8C($s1)
    MEM_W(0X8C, ctx->r17) = ctx->r3;
    // 0x80236328: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x8023632C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236330: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80236334: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236338: lhu         $v1, 0xD58($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XD58);
    // 0x8023633C: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80236340: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236344: sb          $v1, 0x96($s1)
    MEM_B(0X96, ctx->r17) = ctx->r3;
    // 0x80236348: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023634C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236350: lhu         $v0, 0xD5A($at)
    ctx->r2 = MEM_HU(ctx->r1, 0XD5A);
    // 0x80236354: j           L_8023638C
    // 0x80236358: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
        goto L_8023638C;
    // 0x80236358: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
L_8023635C:
    // 0x8023635C: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80236360: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236364: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80236368: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023636C: lhu         $v1, 0xD40($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XD40);
    // 0x80236370: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80236374: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236378: sb          $v1, 0x96($s1)
    MEM_B(0X96, ctx->r17) = ctx->r3;
    // 0x8023637C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236380: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236384: lhu         $v0, 0xD42($at)
    ctx->r2 = MEM_HU(ctx->r1, 0XD42);
    // 0x80236388: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
L_8023638C:
    // 0x8023638C: jal         0x80236A50
    // 0x80236390: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80236A50_ovl4(rdram, ctx);
        goto after_7;
    // 0x80236390: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x80236394: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80236398: jal         0x8004DD04
    // 0x8023639C: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    func_8004DD04_29104(rdram, ctx);
        goto after_8;
    // 0x8023639C: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    after_8:
    // 0x802363A0: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x802363A4: jal         0x8004DD04
    // 0x802363A8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_9;
    // 0x802363A8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_9:
    // 0x802363AC: jal         0x80236898
    // 0x802363B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80236898_ovl4(rdram, ctx);
        goto after_10;
    // 0x802363B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x802363B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802363B8: beq         $v0, $zero, L_802363C8
    if (ctx->r2 == 0) {
        // 0x802363BC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802363C8;
    }
    // 0x802363BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802363C0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x802363C4: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_802363C8:
    // 0x802363C8: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x802363CC: sltiu       $v0, $v1, 0x96
    ctx->r2 = ctx->r3 < 0X96 ? 1 : 0;
    // 0x802363D0: bne         $v0, $zero, L_802363E8
    if (ctx->r2 != 0) {
        // 0x802363D4: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_802363E8;
    }
    // 0x802363D4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x802363D8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802363DC: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x802363E0: j           L_802363EC
    // 0x802363E4: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
        goto L_802363EC;
    // 0x802363E4: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_802363E8:
    // 0x802363E8: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_802363EC:
    // 0x802363EC: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x802363F0: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x802363F4: lhu         $a0, 0x18($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X18);
    // 0x802363F8: sb          $zero, 0x76($s1)
    MEM_B(0X76, ctx->r17) = 0;
    // 0x802363FC: addiu       $v1, $v1, -0x10
    ctx->r3 = ADD32(ctx->r3, -0X10);
    // 0x80236400: sh          $v0, 0x90($s1)
    MEM_H(0X90, ctx->r17) = ctx->r2;
    // 0x80236404: sh          $v1, 0x92($s1)
    MEM_H(0X92, ctx->r17) = ctx->r3;
    // 0x80236408: sh          $a0, 0x94($s1)
    MEM_H(0X94, ctx->r17) = ctx->r4;
L_8023640C:
    // 0x8023640C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80236410: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80236414: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80236418: jr          $ra
    // 0x8023641C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023641C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022929C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022929C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802292A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802292A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802292A8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802292AC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802292B0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802292B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802292B8: beq         $v1, $v0, L_802293A4
    if (ctx->r3 == ctx->r2) {
        // 0x802292BC: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_802293A4;
    }
    // 0x802292BC: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x802292C0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802292C4: beql        $v0, $zero, L_802292DC
    if (ctx->r2 == 0) {
        // 0x802292C8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802292DC;
    }
    goto skip_0;
    // 0x802292C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802292CC: beq         $v1, $zero, L_802292F4
    if (ctx->r3 == 0) {
        // 0x802292D0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802292F4;
    }
    // 0x802292D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802292D4: j           L_80229520
    // 0x802292D8: nop

        goto L_80229520;
    // 0x802292D8: nop

L_802292DC:
    // 0x802292DC: beq         $v1, $v0, L_802293B4
    if (ctx->r3 == ctx->r2) {
        // 0x802292E0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802293B4;
    }
    // 0x802292E0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802292E4: beq         $v1, $v0, L_802294D0
    if (ctx->r3 == ctx->r2) {
        // 0x802292E8: nop
    
            goto L_802294D0;
    }
    // 0x802292E8: nop

    // 0x802292EC: j           L_80229520
    // 0x802292F0: nop

        goto L_80229520;
    // 0x802292F0: nop

L_802292F4:
    // 0x802292F4: lhu         $v1, 0x328($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X328);
    // 0x802292F8: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x802292FC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229300: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80229304: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229308: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x8022930C: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x80229310: andi        $a0, $a0, 0x40
    ctx->r4 = ctx->r4 & 0X40;
    // 0x80229314: beq         $a0, $zero, L_80229370
    if (ctx->r4 == 0) {
        // 0x80229318: sh          $v1, 0x328($s0)
        MEM_H(0X328, ctx->r16) = ctx->r3;
            goto L_80229370;
    }
    // 0x80229318: sh          $v1, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r3;
    // 0x8022931C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80229320: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80229324: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80229328: addiu       $v0, $v0, 0x7DC
    ctx->r2 = ADD32(ctx->r2, 0X7DC);
    // 0x8022932C: sw          $v0, 0x364($s0)
    MEM_W(0X364, ctx->r16) = ctx->r2;
    // 0x80229330: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80229334: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80229338: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8022933C: lw          $a1, 0x298($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X298);
    // 0x80229340: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80229344: sh          $v0, 0x32A($s0)
    MEM_H(0X32A, ctx->r16) = ctx->r2;
    // 0x80229348: lh          $v0, 0x32E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X32E);
    // 0x8022934C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80229350: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80229354: sh          $a0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r4;
    // 0x80229358: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022935C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80229360: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229364: lbu         $v0, 0xB($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB);
    // 0x80229368: j           L_8022938C
    // 0x8022936C: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
        goto L_8022938C;
    // 0x8022936C: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
L_80229370:
    // 0x80229370: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80229374: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80229378: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022937C: addiu       $v0, $v0, 0x7D0
    ctx->r2 = ADD32(ctx->r2, 0X7D0);
    // 0x80229380: sw          $v0, 0x364($s0)
    MEM_W(0X364, ctx->r16) = ctx->r2;
    // 0x80229384: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80229388: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
L_8022938C:
    // 0x8022938C: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x80229390: bgtz        $v0, L_802293A4
    if (SIGNED(ctx->r2) > 0) {
        // 0x80229394: nop
    
            goto L_802293A4;
    }
    // 0x80229394: nop

    // 0x80229398: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022939C: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x802293A0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_802293A4:
    // 0x802293A4: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x802293A8: bgez        $v0, L_802293B4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802293AC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802293B4;
    }
    // 0x802293AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802293B0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802293B4:
    // 0x802293B4: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x802293B8: lw          $a2, 0x3C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X3C);
    // 0x802293BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802293C0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x802293C4: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x802293C8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802293CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802293D0: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x802293D4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802293D8: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x802293DC: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x802293E0: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802293E4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802293E8: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x802293EC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802293F0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802293F4: jal         0x8004DA90
    // 0x802293F8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x802293F8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_0:
    // 0x802293FC: jal         0x80040F30
    // 0x80229400: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x80229400: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80229404: beq         $v0, $zero, L_80229520
    if (ctx->r2 == 0) {
        // 0x80229408: sw          $v0, 0x48($s1)
        MEM_W(0X48, ctx->r17) = ctx->r2;
            goto L_80229520;
    }
    // 0x80229408: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    // 0x8022940C: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80229410: bnel        $v0, $zero, L_80229418
    if (ctx->r2 != 0) {
        // 0x80229414: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_80229418;
    }
    goto skip_1;
    // 0x80229414: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_80229418:
    // 0x80229418: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x8022941C: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x80229420: beq         $v0, $zero, L_80229520
    if (ctx->r2 == 0) {
        // 0x80229424: addiu       $a0, $zero, 0xDE
        ctx->r4 = ADD32(0, 0XDE);
            goto L_80229520;
    }
    // 0x80229424: addiu       $a0, $zero, 0xDE
    ctx->r4 = ADD32(0, 0XDE);
    // 0x80229428: jal         0x8002A33C
    // 0x8022942C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022942C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x80229430: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80229434: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80229438: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8022943C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80229440: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x80229444: beq         $v0, $zero, L_8022949C
    if (ctx->r2 == 0) {
        // 0x80229448: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022949C;
    }
    // 0x80229448: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022944C: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80229450: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x80229454: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80229458: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022945C: andi        $a0, $a0, 0x40
    ctx->r4 = ctx->r4 & 0X40;
    // 0x80229460: beq         $a0, $zero, L_80229470
    if (ctx->r4 == 0) {
        // 0x80229464: sb          $v0, 0xAC($s0)
        MEM_B(0XAC, ctx->r16) = ctx->r2;
            goto L_80229470;
    }
    // 0x80229464: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229468: j           L_80229474
    // 0x8022946C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80229474;
    // 0x8022946C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80229470:
    // 0x80229470: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_80229474:
    // 0x80229474: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80229478: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8022947C: lw          $v0, 0x3C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C);
    // 0x80229480: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229484: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x80229488: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022948C: ori         $v1, $v1, 0x8
    ctx->r3 = ctx->r3 | 0X8;
    // 0x80229490: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    // 0x80229494: j           L_80229520
    // 0x80229498: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80229520;
    // 0x80229498: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022949C:
    // 0x8022949C: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x802294A0: bgtz        $v0, L_802294B8
    if (SIGNED(ctx->r2) > 0) {
        // 0x802294A4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802294B8;
    }
    // 0x802294A4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802294A8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802294AC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802294B0: j           L_80229520
    // 0x802294B4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_80229520;
    // 0x802294B4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_802294B8:
    // 0x802294B8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802294BC: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x802294C0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802294C4: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x802294C8: j           L_80229520
    // 0x802294CC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80229520;
    // 0x802294CC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_802294D0:
    // 0x802294D0: lhu         $v0, 0x32C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32C);
    // 0x802294D4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802294D8: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x802294DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802294E0: bgez        $v0, L_802294F8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802294E4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802294F8;
    }
    // 0x802294E4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802294E8: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x802294EC: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x802294F0: j           L_80229520
    // 0x802294F4: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
        goto L_80229520;
    // 0x802294F4: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_802294F8:
    // 0x802294F8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802294FC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80229500: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80229504: jal         0x8004F820
    // 0x80229508: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80229508: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_3:
    // 0x8022950C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80229510: sh          $v0, 0x36C($s0)
    MEM_H(0X36C, ctx->r16) = ctx->r2;
    // 0x80229514: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229518: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022951C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80229520:
    // 0x80229520: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229524: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229528: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022952C: jr          $ra
    // 0x80229530: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229530: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802374D0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802374D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802374D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802374D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802374DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802374E0: jal         0x80053ED8
    // 0x802374E4: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x802374E4: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    after_0:
    // 0x802374E8: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x802374EC: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x802374F0: bne         $v1, $zero, L_80237504
    if (ctx->r3 != 0) {
        // 0x802374F4: sw          $v0, 0xF4($s0)
        MEM_W(0XF4, ctx->r16) = ctx->r2;
            goto L_80237504;
    }
    // 0x802374F4: sw          $v0, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->r2;
    // 0x802374F8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802374FC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80237500: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80237504:
    // 0x80237504: lw          $v1, 0xF4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XF4);
    // 0x80237508: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8023750C: addiu       $a0, $s0, 0xE4
    ctx->r4 = ADD32(ctx->r16, 0XE4);
    // 0x80237510: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x80237514: sw          $zero, 0x58($s0)
    MEM_W(0X58, ctx->r16) = 0;
    // 0x80237518: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8023751C: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x80237520: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x80237524: lw          $v1, 0x88($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X88);
    // 0x80237528: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023752C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80237530: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x80237534: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80237538: sh          $v0, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = ctx->r2;
    // 0x8023753C: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    // 0x80237540: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x80237544: sw          $zero, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = 0;
    // 0x80237548: jal         0x800540B4
    // 0x8023754C: sw          $v1, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r3;
    func_800540B4_2F4B4(rdram, ctx);
        goto after_1;
    // 0x8023754C: sw          $v1, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r3;
    after_1:
    // 0x80237550: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80237554: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80237558: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023755C: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80237560: sw          $v0, 0xF8($a0)
    MEM_W(0XF8, ctx->r4) = ctx->r2;
    // 0x80237564: sw          $v0, 0xFC($a0)
    MEM_W(0XFC, ctx->r4) = ctx->r2;
    // 0x80237568: sw          $v0, 0x100($a0)
    MEM_W(0X100, ctx->r4) = ctx->r2;
    // 0x8023756C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80237570: sh          $v0, 0x6E($a0)
    MEM_H(0X6E, ctx->r4) = ctx->r2;
    // 0x80237574: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80237578: addiu       $v0, $v0, 0xDD0
    ctx->r2 = ADD32(ctx->r2, 0XDD0);
    // 0x8023757C: sw          $v0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r2;
    // 0x80237580: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237584: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x80237588: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8023758C: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
    // 0x80237590: jal         0x802375A8
    // 0x80237594: sw          $v1, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r3;
    func_802375A8_ovl4(rdram, ctx);
        goto after_2;
    // 0x80237594: sw          $v1, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r3;
    after_2:
    // 0x80237598: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023759C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802375A0: jr          $ra
    // 0x802375A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802375A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023006C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023006C: lb          $v0, 0x385($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X385);
    // 0x80230070: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80230074: beq         $v0, $zero, L_80230088
    if (ctx->r2 == 0) {
        // 0x80230078: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80230088;
    }
    // 0x80230078: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023007C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80230080: j           L_80230094
    // 0x80230084: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
        goto L_80230094;
    // 0x80230084: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
L_80230088:
    // 0x80230088: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8023008C: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x80230090: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
L_80230094:
    // 0x80230094: jr          $ra
    // 0x80230098: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80230098: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8022C5BC_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C5BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C5C0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022C5C4: lbu         $a1, 0xA($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XA);
    // 0x8022C5C8: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x8022C5CC: beq         $v1, $zero, L_8022C5E4
    if (ctx->r3 == 0) {
        // 0x8022C5D0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C5E4;
    }
    // 0x8022C5D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C5D4: beq         $v1, $v0, L_8022C630
    if (ctx->r3 == ctx->r2) {
        // 0x8022C5D8: nop
    
            goto L_8022C630;
    }
    // 0x8022C5D8: nop

    // 0x8022C5DC: j           L_8022C64C
    // 0x8022C5E0: nop

        goto L_8022C64C;
    // 0x8022C5E0: nop

L_8022C5E4:
    // 0x8022C5E4: lbu         $v0, 0xA4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA4);
    // 0x8022C5E8: xori        $v1, $v0, 0xF
    ctx->r3 = ctx->r2 ^ 0XF;
    // 0x8022C5EC: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022C5F0: xori        $v0, $v0, 0x23
    ctx->r2 = ctx->r2 ^ 0X23;
    // 0x8022C5F4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022C5F8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022C5FC: beq         $v1, $zero, L_8022C64C
    if (ctx->r3 == 0) {
        // 0x8022C600: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_8022C64C;
    }
    // 0x8022C600: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8022C604: lb          $a3, 0xC($a0)
    ctx->r7 = MEM_B(ctx->r4, 0XC);
    // 0x8022C608: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022C60C: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x8022C610: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022C614: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x8022C618: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022C61C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C620: jal         0x800610AC
    // 0x8022C624: addiu       $a3, $a3, 0x6
    ctx->r7 = ADD32(ctx->r7, 0X6);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_0;
    // 0x8022C624: addiu       $a3, $a3, 0x6
    ctx->r7 = ADD32(ctx->r7, 0X6);
    after_0:
    // 0x8022C628: j           L_8022C64C
    // 0x8022C62C: nop

        goto L_8022C64C;
    // 0x8022C62C: nop

L_8022C630:
    // 0x8022C630: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022C634: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022C638: bltz        $v0, L_8022C64C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022C63C: nop
    
            goto L_8022C64C;
    }
    // 0x8022C63C: nop

    // 0x8022C640: lhu         $v0, 0x348($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X348);
    // 0x8022C644: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022C648: sh          $v0, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r2;
L_8022C64C:
    // 0x8022C64C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022C650: jr          $ra
    // 0x8022C654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233E1C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233E1C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233E20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80233E24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233E28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80233E2C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80233E30: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x80233E34: addiu       $t0, $t0, 0x49B0
    ctx->r8 = ADD32(ctx->r8, 0X49B0);
    // 0x80233E38: beq         $v1, $zero, L_80233E54
    if (ctx->r3 == 0) {
        // 0x80233E3C: addiu       $a3, $s0, 0x4E0
        ctx->r7 = ADD32(ctx->r16, 0X4E0);
            goto L_80233E54;
    }
    // 0x80233E3C: addiu       $a3, $s0, 0x4E0
    ctx->r7 = ADD32(ctx->r16, 0X4E0);
    // 0x80233E40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233E44: beq         $v1, $v0, L_80233E64
    if (ctx->r3 == ctx->r2) {
        // 0x80233E48: nop
    
            goto L_80233E64;
    }
    // 0x80233E48: nop

    // 0x80233E4C: j           L_8023407C
    // 0x80233E50: nop

        goto L_8023407C;
    // 0x80233E50: nop

L_80233E54:
    // 0x80233E54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233E58: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80233E5C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80233E60: sh          $zero, 0x4E8($s0)
    MEM_H(0X4E8, ctx->r16) = 0;
L_80233E64:
    // 0x80233E64: lh          $a2, 0x14($t0)
    ctx->r6 = MEM_H(ctx->r8, 0X14);
    // 0x80233E68: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80233E6C: lh          $a0, 0xC70($a0)
    ctx->r4 = MEM_H(ctx->r4, 0XC70);
    // 0x80233E70: lh          $a1, 0x18($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X18);
    // 0x80233E74: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80233E78: lh          $v1, 0xC72($v1)
    ctx->r3 = MEM_H(ctx->r3, 0XC72);
    // 0x80233E7C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80233E80: lh          $v0, 0xC74($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XC74);
    // 0x80233E84: subu        $a2, $a2, $a0
    ctx->r6 = SUB32(ctx->r6, ctx->r4);
    // 0x80233E88: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x80233E8C: beq         $v0, $zero, L_80233EB8
    if (ctx->r2 == 0) {
        // 0x80233E90: subu        $a1, $a1, $v1
        ctx->r5 = SUB32(ctx->r5, ctx->r3);
            goto L_80233EB8;
    }
    // 0x80233E90: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x80233E94: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80233E98: lh          $v0, 0xC76($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XC76);
    // 0x80233E9C: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x80233EA0: beq         $v0, $zero, L_80233EB8
    if (ctx->r2 == 0) {
        // 0x80233EA4: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80233EB8;
    }
    // 0x80233EA4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80233EA8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80233EAC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80233EB0: j           L_80234078
    // 0x80233EB4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_80234078;
    // 0x80233EB4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80233EB8:
    // 0x80233EB8: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80233EBC: lh          $a2, 0x49C4($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X49C4);
    // 0x80233EC0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80233EC4: lh          $a0, 0xCE8($a0)
    ctx->r4 = MEM_H(ctx->r4, 0XCE8);
    // 0x80233EC8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80233ECC: lh          $a1, 0x49C8($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X49C8);
    // 0x80233ED0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80233ED4: lh          $v1, 0xCEA($v1)
    ctx->r3 = MEM_H(ctx->r3, 0XCEA);
    // 0x80233ED8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80233EDC: lh          $v0, 0xCEC($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XCEC);
    // 0x80233EE0: subu        $a2, $a2, $a0
    ctx->r6 = SUB32(ctx->r6, ctx->r4);
    // 0x80233EE4: sltu        $v0, $v0, $a2
    ctx->r2 = ctx->r2 < ctx->r6 ? 1 : 0;
    // 0x80233EE8: bne         $v0, $zero, L_80233F04
    if (ctx->r2 != 0) {
        // 0x80233EEC: subu        $a1, $a1, $v1
        ctx->r5 = SUB32(ctx->r5, ctx->r3);
            goto L_80233F04;
    }
    // 0x80233EEC: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x80233EF0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80233EF4: lh          $v0, 0xCEE($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XCEE);
    // 0x80233EF8: sltu        $v0, $v0, $a1
    ctx->r2 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x80233EFC: beq         $v0, $zero, L_80233F18
    if (ctx->r2 == 0) {
        // 0x80233F00: lui         $v0, 0xC
        ctx->r2 = S32(0XC << 16);
            goto L_80233F18;
    }
    // 0x80233F00: lui         $v0, 0xC
    ctx->r2 = S32(0XC << 16);
L_80233F04:
    // 0x80233F04: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80233F08: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80233F0C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80233F10: j           L_8023407C
    // 0x80233F14: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8023407C;
    // 0x80233F14: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80233F18:
    // 0x80233F18: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80233F1C: ori         $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 | 0X7FFF;
    // 0x80233F20: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80233F24: bne         $v0, $zero, L_80233F70
    if (ctx->r2 != 0) {
        // 0x80233F28: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_80233F70;
    }
    // 0x80233F28: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80233F2C: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80233F30: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80233F34: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x80233F38: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80233F3C: lh          $v1, 0x56($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X56);
    // 0x80233F40: addiu       $a3, $t0, 0x1C
    ctx->r7 = ADD32(ctx->r8, 0X1C);
    // 0x80233F44: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80233F48: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80233F4C: jal         0x8004FAEC
    // 0x80233F50: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_0;
    // 0x80233F50: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x80233F54: bne         $v0, $zero, L_80234074
    if (ctx->r2 != 0) {
        // 0x80233F58: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_80234074;
    }
    // 0x80233F58: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80233F5C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80233F60: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80233F64: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80233F68: j           L_80234078
    // 0x80233F6C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_80234078;
    // 0x80233F6C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80233F70:
    // 0x80233F70: lh          $v0, 0x3C($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X3C);
    // 0x80233F74: bne         $v0, $zero, L_80233FC8
    if (ctx->r2 != 0) {
        // 0x80233F78: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80233FC8;
    }
    // 0x80233F78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233F7C: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x80233F80: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80233F84: beq         $v0, $zero, L_80233FC8
    if (ctx->r2 == 0) {
        // 0x80233F88: addiu       $a2, $zero, 0x400
        ctx->r6 = ADD32(0, 0X400);
            goto L_80233FC8;
    }
    // 0x80233F88: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x80233F8C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80233F90: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80233F94: lh          $v1, 0x56($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X56);
    // 0x80233F98: addiu       $a3, $t0, 0x1C
    ctx->r7 = ADD32(ctx->r8, 0X1C);
    // 0x80233F9C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80233FA0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80233FA4: jal         0x8004FAEC
    // 0x80233FA8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_1;
    // 0x80233FA8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x80233FAC: bne         $v0, $zero, L_80234074
    if (ctx->r2 != 0) {
        // 0x80233FB0: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_80234074;
    }
    // 0x80233FB0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80233FB4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80233FB8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80233FBC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80233FC0: j           L_80234078
    // 0x80233FC4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_80234078;
    // 0x80233FC4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80233FC8:
    // 0x80233FC8: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80233FCC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233FD0: jal         0x8004DA90
    // 0x80233FD4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80233FD4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80233FD8: jal         0x80040F30
    // 0x80233FDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x80233FDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80233FE0: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x80233FE4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80233FE8: bne         $v0, $zero, L_80233FF8
    if (ctx->r2 != 0) {
        // 0x80233FEC: addiu       $a0, $zero, 0xC8
        ctx->r4 = ADD32(0, 0XC8);
            goto L_80233FF8;
    }
    // 0x80233FEC: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    // 0x80233FF0: jal         0x8002A33C
    // 0x80233FF4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80233FF4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_4:
L_80233FF8:
    // 0x80233FF8: jal         0x8003E934
    // 0x80233FFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_5;
    // 0x80233FFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80234000: lh          $a2, 0x14($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X14);
    // 0x80234004: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80234008: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023400C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80234010: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80234014: lh          $a0, 0xC7C($a0)
    ctx->r4 = MEM_H(ctx->r4, 0XC7C);
    // 0x80234018: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x8023401C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234020: lh          $v1, 0xC7E($v1)
    ctx->r3 = MEM_H(ctx->r3, 0XC7E);
    // 0x80234024: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234028: lh          $v0, 0xC80($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XC80);
    // 0x8023402C: subu        $a2, $a2, $a0
    ctx->r6 = SUB32(ctx->r6, ctx->r4);
    // 0x80234030: sltu        $v0, $v0, $a2
    ctx->r2 = ctx->r2 < ctx->r6 ? 1 : 0;
    // 0x80234034: bne         $v0, $zero, L_80234050
    if (ctx->r2 != 0) {
        // 0x80234038: subu        $a1, $a1, $v1
        ctx->r5 = SUB32(ctx->r5, ctx->r3);
            goto L_80234050;
    }
    // 0x80234038: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x8023403C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234040: lh          $v0, 0xC82($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XC82);
    // 0x80234044: sltu        $v0, $v0, $a1
    ctx->r2 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x80234048: beq         $v0, $zero, L_8023407C
    if (ctx->r2 == 0) {
        // 0x8023404C: nop
    
            goto L_8023407C;
    }
    // 0x8023404C: nop

L_80234050:
    // 0x80234050: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80234054: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80234058: jal         0x8009A3B4
    // 0x8023405C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8023405C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80234060: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80234064: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80234068: jal         0x8009A3B4
    // 0x8023406C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8023406C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x80234070: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_80234074:
    // 0x80234074: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80234078:
    // 0x80234078: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8023407C:
    // 0x8023407C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80234080: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80234084: jr          $ra
    // 0x80234088: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80234088: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D5B4_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D5B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D5B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D5BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D5C0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D5C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D5C8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D5CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D5D0: beq         $v1, $v0, L_8022D70C
    if (ctx->r3 == ctx->r2) {
        // 0x8022D5D4: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022D70C;
    }
    // 0x8022D5D4: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022D5D8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022D5DC: beql        $v0, $zero, L_8022D5F4
    if (ctx->r2 == 0) {
        // 0x8022D5E0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022D5F4;
    }
    goto skip_0;
    // 0x8022D5E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022D5E4: beq         $v1, $zero, L_8022D630
    if (ctx->r3 == 0) {
        // 0x8022D5E8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D630;
    }
    // 0x8022D5E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D5EC: j           L_8022D7A4
    // 0x8022D5F0: nop

        goto L_8022D7A4;
    // 0x8022D5F0: nop

L_8022D5F4:
    // 0x8022D5F4: beq         $v1, $v0, L_8022D6D8
    if (ctx->r3 == ctx->r2) {
        // 0x8022D5F8: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022D6D8;
    }
    // 0x8022D5F8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022D5FC: bne         $v1, $v0, L_8022D7A4
    if (ctx->r3 != ctx->r2) {
        // 0x8022D600: nop
    
            goto L_8022D7A4;
    }
    // 0x8022D600: nop

    // 0x8022D604: jal         0x8006033C
    // 0x8022D608: lhu         $a0, 0x37C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X37C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022D608: lhu         $a0, 0x37C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X37C);
    after_0:
    // 0x8022D60C: beq         $v0, $zero, L_8022D7A4
    if (ctx->r2 == 0) {
        // 0x8022D610: nop
    
            goto L_8022D7A4;
    }
    // 0x8022D610: nop

    // 0x8022D614: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022D618: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x8022D61C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022D620: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x8022D624: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022D628: sh          $v1, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r3;
    // 0x8022D62C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022D630:
    // 0x8022D630: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D634: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022D638: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D63C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022D640: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022D644: beq         $v0, $zero, L_8022D69C
    if (ctx->r2 == 0) {
        // 0x8022D648: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_8022D69C;
    }
    // 0x8022D648: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022D64C: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x8022D650: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022D654: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x8022D658: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022D65C: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x8022D660: andi        $v0, $v0, 0x30
    ctx->r2 = ctx->r2 & 0X30;
    // 0x8022D664: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022D668: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D66C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022D670: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022D674: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x8022D678: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x8022D67C: andi        $v0, $v0, 0x6
    ctx->r2 = ctx->r2 & 0X6;
    // 0x8022D680: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D684: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022D688: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x8022D68C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022D690: andi        $v0, $v0, 0xFFBF
    ctx->r2 = ctx->r2 & 0XFFBF;
    // 0x8022D694: j           L_8022D6BC
    // 0x8022D698: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8022D6BC;
    // 0x8022D698: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022D69C:
    // 0x8022D69C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D6A0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022D6A4: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x8022D6A8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022D6AC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022D6B0: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x8022D6B4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022D6B8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022D6BC:
    // 0x8022D6BC: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8022D6C0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022D6C4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D6C8: sh          $zero, 0x6($s1)
    MEM_H(0X6, ctx->r17) = 0;
    // 0x8022D6CC: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x8022D6D0: andi        $v1, $v1, 0xFFD7
    ctx->r3 = ctx->r3 & 0XFFD7;
    // 0x8022D6D4: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
L_8022D6D8:
    // 0x8022D6D8: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022D6DC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D6E0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D6E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D6E8: bgez        $v0, L_8022D70C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D6EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D70C;
    }
    // 0x8022D6EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D6F0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D6F4: addiu       $v0, $zero, 0x88
    ctx->r2 = ADD32(0, 0X88);
    // 0x8022D6F8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022D6FC: addiu       $v0, $zero, -0xF0
    ctx->r2 = ADD32(0, -0XF0);
    // 0x8022D700: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022D704: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022D708: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
L_8022D70C:
    // 0x8022D70C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022D710: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022D714: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D718: jal         0x8004DA90
    // 0x8022D71C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022D71C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022D720: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022D724: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022D728: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D72C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D730: jal         0x80040F30
    // 0x8022D734: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022D734: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022D738: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022D73C: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x8022D740: bnel        $v0, $zero, L_8022D748
    if (ctx->r2 != 0) {
        // 0x8022D744: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022D748;
    }
    goto skip_1;
    // 0x8022D744: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_8022D748:
    // 0x8022D748: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x8022D74C: beq         $v0, $zero, L_8022D7A4
    if (ctx->r2 == 0) {
        // 0x8022D750: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022D7A4;
    }
    // 0x8022D750: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022D754: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x8022D758: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D75C: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
    // 0x8022D760: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D764: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D768: bne         $v0, $v1, L_8022D798
    if (ctx->r2 != ctx->r3) {
        // 0x8022D76C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022D798;
    }
    // 0x8022D76C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D770: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D774: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022D778: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D77C: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x8022D780: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022D784: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D788: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022D78C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8022D790: j           L_8022D7A4
    // 0x8022D794: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022D7A4;
    // 0x8022D794: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022D798:
    // 0x8022D798: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022D79C: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x8022D7A0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022D7A4:
    // 0x8022D7A4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D7A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D7AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D7B0: jr          $ra
    // 0x8022D7B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D7B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802322D8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802322D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802322DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802322E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802322E4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802322E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802322EC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802322F0: beq         $v0, $zero, L_80232310
    if (ctx->r2 == 0) {
        // 0x802322F4: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80232310;
    }
    // 0x802322F4: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x802322F8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802322FC: jal         0x8004DE68
    // 0x80232300: addiu       $a1, $s0, 0x398
    ctx->r5 = ADD32(ctx->r16, 0X398);
    func_8004DE68_29268(rdram, ctx);
        goto after_0;
    // 0x80232300: addiu       $a1, $s0, 0x398
    ctx->r5 = ADD32(ctx->r16, 0X398);
    after_0:
    // 0x80232304: sltiu       $v0, $v0, 0xB
    ctx->r2 = ctx->r2 < 0XB ? 1 : 0;
    // 0x80232308: beq         $v0, $zero, L_80232334
    if (ctx->r2 == 0) {
        // 0x8023230C: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80232334;
    }
    // 0x8023230C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80232310:
    // 0x80232310: jal         0x80233148
    // 0x80232314: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80233148_ovl4(rdram, ctx);
        goto after_1;
    // 0x80232314: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80232318: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023231C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80232320: beq         $v0, $zero, L_80232350
    if (ctx->r2 == 0) {
        // 0x80232324: nop
    
            goto L_80232350;
    }
    // 0x80232324: nop

    // 0x80232328: bgez        $v0, L_80232340
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023232C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80232340;
    }
    // 0x8023232C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232330: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80232334:
    // 0x80232334: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80232338: j           L_8023239C
    // 0x8023233C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_8023239C;
    // 0x8023233C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80232340:
    // 0x80232340: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80232344: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80232348: j           L_8023239C
    // 0x8023234C: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
        goto L_8023239C;
    // 0x8023234C: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
L_80232350:
    // 0x80232350: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80232354: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80232358: beq         $v0, $zero, L_8023239C
    if (ctx->r2 == 0) {
        // 0x8023235C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8023239C;
    }
    // 0x8023235C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232360: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232364: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80232368: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8023236C: jal         0x8004F820
    // 0x80232370: addiu       $a3, $zero, 0x34
    ctx->r7 = ADD32(0, 0X34);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80232370: addiu       $a3, $zero, 0x34
    ctx->r7 = ADD32(0, 0X34);
    after_2:
    // 0x80232374: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80232378: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x8023237C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232380: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80232384: bgez        $a0, L_8023239C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80232388: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8023239C;
    }
    // 0x80232388: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8023238C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232390: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80232394: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232398: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8023239C:
    // 0x8023239C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802323A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802323A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802323A8: jr          $ra
    // 0x802323AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802323AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80237DB8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237DB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237DBC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80237DC0: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80237DC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237DC8: beq         $v1, $v0, L_80237E24
    if (ctx->r3 == ctx->r2) {
        // 0x80237DCC: addiu       $a1, $a0, 0xC0
        ctx->r5 = ADD32(ctx->r4, 0XC0);
            goto L_80237E24;
    }
    // 0x80237DCC: addiu       $a1, $a0, 0xC0
    ctx->r5 = ADD32(ctx->r4, 0XC0);
    // 0x80237DD0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80237DD4: beql        $v0, $zero, L_80237DEC
    if (ctx->r2 == 0) {
        // 0x80237DD8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80237DEC;
    }
    goto skip_0;
    // 0x80237DD8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80237DDC: beq         $v1, $zero, L_80237E04
    if (ctx->r3 == 0) {
        // 0x80237DE0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80237E04;
    }
    // 0x80237DE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237DE4: j           L_80237EC0
    // 0x80237DE8: addiu       $a0, $a0, 0x8C
    ctx->r4 = ADD32(ctx->r4, 0X8C);
        goto L_80237EC0;
    // 0x80237DE8: addiu       $a0, $a0, 0x8C
    ctx->r4 = ADD32(ctx->r4, 0X8C);
L_80237DEC:
    // 0x80237DEC: beq         $v1, $v0, L_80237E5C
    if (ctx->r3 == ctx->r2) {
        // 0x80237DF0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80237E5C;
    }
    // 0x80237DF0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80237DF4: beq         $v1, $v0, L_80237E84
    if (ctx->r3 == ctx->r2) {
        // 0x80237DF8: nop
    
            goto L_80237E84;
    }
    // 0x80237DF8: nop

    // 0x80237DFC: j           L_80237EC0
    // 0x80237E00: addiu       $a0, $a0, 0x8C
    ctx->r4 = ADD32(ctx->r4, 0X8C);
        goto L_80237EC0;
    // 0x80237E00: addiu       $a0, $a0, 0x8C
    ctx->r4 = ADD32(ctx->r4, 0X8C);
L_80237E04:
    // 0x80237E04: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80237E08: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80237E0C: sh          $v0, 0xC4($a0)
    MEM_H(0XC4, ctx->r4) = ctx->r2;
    // 0x80237E10: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80237E14: sb          $zero, 0xC8($a0)
    MEM_B(0XC8, ctx->r4) = 0;
    // 0x80237E18: sw          $v0, 0xF8($a0)
    MEM_W(0XF8, ctx->r4) = ctx->r2;
    // 0x80237E1C: sw          $v0, 0xFC($a0)
    MEM_W(0XFC, ctx->r4) = ctx->r2;
    // 0x80237E20: sw          $v0, 0x100($a0)
    MEM_W(0X100, ctx->r4) = ctx->r2;
L_80237E24:
    // 0x80237E24: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80237E28: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80237E2C: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80237E30: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80237E34: bltzl       $v0, L_80237E48
    if (SIGNED(ctx->r2) < 0) {
        // 0x80237E38: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80237E48;
    }
    goto skip_1;
    // 0x80237E38: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x80237E3C: lw          $v0, 0x3C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X3C);
    // 0x80237E40: j           L_80237EB8
    // 0x80237E44: addiu       $v0, $v0, 0x199
    ctx->r2 = ADD32(ctx->r2, 0X199);
        goto L_80237EB8;
    // 0x80237E44: addiu       $v0, $v0, 0x199
    ctx->r2 = ADD32(ctx->r2, 0X199);
L_80237E48:
    // 0x80237E48: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80237E4C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80237E50: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80237E54: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x80237E58: sw          $v0, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->r2;
L_80237E5C:
    // 0x80237E5C: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80237E60: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80237E64: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80237E68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80237E6C: bgezl       $v0, L_80237EC0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80237E70: addiu       $a0, $a0, 0x8C
        ctx->r4 = ADD32(ctx->r4, 0X8C);
            goto L_80237EC0;
    }
    goto skip_2;
    // 0x80237E70: addiu       $a0, $a0, 0x8C
    ctx->r4 = ADD32(ctx->r4, 0X8C);
    skip_2:
    // 0x80237E74: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80237E78: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80237E7C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80237E80: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
L_80237E84:
    // 0x80237E84: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80237E88: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80237E8C: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80237E90: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80237E94: bgez        $v0, L_80237EB0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80237E98: addiu       $v1, $zero, 0x1000
        ctx->r3 = ADD32(0, 0X1000);
            goto L_80237EB0;
    }
    // 0x80237E98: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x80237E9C: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80237EA0: sw          $v1, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->r3;
    // 0x80237EA4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80237EA8: j           L_80237EBC
    // 0x80237EAC: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
        goto L_80237EBC;
    // 0x80237EAC: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80237EB0:
    // 0x80237EB0: lw          $v0, 0x3C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X3C);
    // 0x80237EB4: addiu       $v0, $v0, -0x111
    ctx->r2 = ADD32(ctx->r2, -0X111);
L_80237EB8:
    // 0x80237EB8: sw          $v0, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->r2;
L_80237EBC:
    // 0x80237EBC: addiu       $a0, $a0, 0x8C
    ctx->r4 = ADD32(ctx->r4, 0X8C);
L_80237EC0:
    // 0x80237EC0: jal         0x80031DA8
    // 0x80237EC4: addiu       $a1, $a1, 0x38
    ctx->r5 = ADD32(ctx->r5, 0X38);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_0;
    // 0x80237EC4: addiu       $a1, $a1, 0x38
    ctx->r5 = ADD32(ctx->r5, 0X38);
    after_0:
    // 0x80237EC8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80237ECC: jr          $ra
    // 0x80237ED0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237ED0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B6D8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B6D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022B6DC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022B6E0: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8022B6E4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022B6E8: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8022B6EC: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8022B6F0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022B6F4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022B6F8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B6FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B700: lbu         $v0, 0xF($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XF);
    // 0x8022B704: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022B708: bne         $v0, $zero, L_8022B960
    if (ctx->r2 != 0) {
        // 0x8022B70C: addiu       $s2, $s3, 0x328
        ctx->r18 = ADD32(ctx->r19, 0X328);
            goto L_8022B960;
    }
    // 0x8022B70C: addiu       $s2, $s3, 0x328
    ctx->r18 = ADD32(ctx->r19, 0X328);
    // 0x8022B710: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022B714: addiu       $s6, $zero, 0x9
    ctx->r22 = ADD32(0, 0X9);
    // 0x8022B718: addiu       $s5, $zero, 0xF
    ctx->r21 = ADD32(0, 0XF);
    // 0x8022B71C: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_8022B720:
    // 0x8022B720: jal         0x8004F144
    // 0x8022B724: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022B724: nop

    after_0:
    // 0x8022B728: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B72C: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022B730: sra         $s0, $v0, 16
    ctx->r16 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B734: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x8022B738: addu        $a0, $v0, $s2
    ctx->r4 = ADD32(ctx->r2, ctx->r18);
    // 0x8022B73C: beq         $v1, $zero, L_8022B76C
    if (ctx->r3 == 0) {
        // 0x8022B740: sw          $v1, 0x50($a0)
        MEM_W(0X50, ctx->r4) = ctx->r3;
            goto L_8022B76C;
    }
    // 0x8022B740: sw          $v1, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r3;
    // 0x8022B744: sb          $s6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r22;
    // 0x8022B748: lw          $v0, 0x50($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X50);
    // 0x8022B74C: sb          $s5, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r21;
    // 0x8022B750: lw          $v0, 0x50($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X50);
    // 0x8022B754: sb          $s4, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r20;
    // 0x8022B758: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x8022B75C: lw          $v1, 0x50($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X50);
    // 0x8022B760: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x8022B764: j           L_8022B7A8
    // 0x8022B768: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
        goto L_8022B7A8;
    // 0x8022B768: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_8022B76C:
    // 0x8022B76C: jal         0x8004F418
    // 0x8022B770: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8022B770: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_1:
    // 0x8022B774: bne         $s0, $zero, L_8022BA4C
    if (ctx->r16 != 0) {
        // 0x8022B778: addiu       $v1, $s1, -0x1
        ctx->r3 = ADD32(ctx->r17, -0X1);
            goto L_8022BA4C;
    }
    // 0x8022B778: addiu       $v1, $s1, -0x1
    ctx->r3 = ADD32(ctx->r17, -0X1);
L_8022B77C:
    // 0x8022B77C: sll         $s0, $v1, 16
    ctx->r16 = S32(ctx->r3 << 16);
    // 0x8022B780: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8022B784: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x8022B788: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8022B78C: lw          $a0, 0x50($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X50);
    // 0x8022B790: jal         0x8004F5C4
    // 0x8022B794: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_2;
    // 0x8022B794: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    after_2:
    // 0x8022B798: beq         $s0, $zero, L_8022B77C
    if (ctx->r16 == 0) {
        // 0x8022B79C: addiu       $v1, $s1, -0x1
        ctx->r3 = ADD32(ctx->r17, -0X1);
            goto L_8022B77C;
    }
    // 0x8022B79C: addiu       $v1, $s1, -0x1
    ctx->r3 = ADD32(ctx->r17, -0X1);
    // 0x8022B7A0: j           L_8022BA4C
    // 0x8022B7A4: nop

        goto L_8022BA4C;
    // 0x8022B7A4: nop

L_8022B7A8:
    // 0x8022B7A8: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x8022B7AC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022B7B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B7B4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B7B8: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8022B7BC: bne         $v0, $zero, L_8022B720
    if (ctx->r2 != 0) {
        // 0x8022B7C0: nop
    
            goto L_8022B720;
    }
    // 0x8022B7C0: nop

    // 0x8022B7C4: lw          $v0, 0x58($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X58);
    // 0x8022B7C8: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x8022B7CC: sb          $v0, 0xD($s3)
    MEM_B(0XD, ctx->r19) = ctx->r2;
    // 0x8022B7D0: lw          $v0, 0x5C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X5C);
    // 0x8022B7D4: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x8022B7D8: jal         0x8004EEAC
    // 0x8022B7DC: sb          $v0, 0xE($s3)
    MEM_B(0XE, ctx->r19) = ctx->r2;
    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_3;
    // 0x8022B7DC: sb          $v0, 0xE($s3)
    MEM_B(0XE, ctx->r19) = ctx->r2;
    after_3:
    // 0x8022B7E0: beq         $v0, $zero, L_8022B91C
    if (ctx->r2 == 0) {
        // 0x8022B7E4: sw          $v0, 0x4C($s2)
        MEM_W(0X4C, ctx->r18) = ctx->r2;
            goto L_8022B91C;
    }
    // 0x8022B7E4: sw          $v0, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = ctx->r2;
    // 0x8022B7E8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022B7EC: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022B7F0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022B7F4: bne         $v1, $v0, L_8022B818
    if (ctx->r3 != ctx->r2) {
        // 0x8022B7F8: nop
    
            goto L_8022B818;
    }
    // 0x8022B7F8: nop

    // 0x8022B7FC: lb          $v0, 0xC($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XC);
    // 0x8022B800: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8022B804: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B808: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022B80C: addiu       $v0, $v0, 0x888
    ctx->r2 = ADD32(ctx->r2, 0X888);
    // 0x8022B810: j           L_8022B830
    // 0x8022B814: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_8022B830;
    // 0x8022B814: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8022B818:
    // 0x8022B818: lb          $v0, 0xC($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XC);
    // 0x8022B81C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8022B820: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B824: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022B828: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022B82C: addiu       $v0, $v0, 0x978
    ctx->r2 = ADD32(ctx->r2, 0X978);
L_8022B830:
    // 0x8022B830: addu        $s4, $v1, $v0
    ctx->r20 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B834: lw          $v1, 0x4C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4C);
    // 0x8022B838: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8022B83C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022B840: lw          $v1, 0x4C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4C);
    // 0x8022B844: lbu         $v0, 0x2($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X2);
    // 0x8022B848: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022B84C: lw          $v1, 0x4C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4C);
    // 0x8022B850: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x8022B854: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x8022B858: lw          $v1, 0x4C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4C);
    // 0x8022B85C: lbu         $v0, 0x4($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X4);
    // 0x8022B860: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x8022B864: lw          $v1, 0x4C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4C);
    // 0x8022B868: lbu         $v0, 0x5($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X5);
    // 0x8022B86C: sb          $v0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r2;
    // 0x8022B870: lw          $v1, 0x4C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4C);
    // 0x8022B874: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x8022B878: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x8022B87C: lw          $s1, 0x4C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X4C);
    // 0x8022B880: addiu       $a1, $s4, 0xC
    ctx->r5 = ADD32(ctx->r20, 0XC);
    // 0x8022B884: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B888: addiu       $s0, $s1, 0x2C
    ctx->r16 = ADD32(ctx->r17, 0X2C);
    // 0x8022B88C: jal         0x8009A3B4
    // 0x8022B890: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022B890: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022B894: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022B898: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022B89C: jal         0x8009A3B4
    // 0x8022B8A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022B8A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022B8A4: lw          $v1, 0x4C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4C);
    // 0x8022B8A8: lh          $v0, 0x14($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X14);
    // 0x8022B8AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B8B0: sw          $v0, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->r2;
    // 0x8022B8B4: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x8022B8B8: lw          $v1, 0x4C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4C);
    // 0x8022B8BC: lh          $v0, 0x16($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X16);
    // 0x8022B8C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B8C4: sw          $v0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r2;
    // 0x8022B8C8: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x8022B8CC: lw          $v1, 0x4C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4C);
    // 0x8022B8D0: lh          $v0, 0x18($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X18);
    // 0x8022B8D4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B8D8: sw          $v0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r2;
    // 0x8022B8DC: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x8022B8E0: lw          $v0, 0x4C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4C);
    // 0x8022B8E4: sh          $zero, 0x5C($v0)
    MEM_H(0X5C, ctx->r2) = 0;
    // 0x8022B8E8: sh          $zero, 0x54($v0)
    MEM_H(0X54, ctx->r2) = 0;
    // 0x8022B8EC: lbu         $v0, 0x7($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X7);
    // 0x8022B8F0: lw          $v1, 0x4C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4C);
    // 0x8022B8F4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022B8F8: sh          $v0, 0x5E($v1)
    MEM_H(0X5E, ctx->r3) = ctx->r2;
    // 0x8022B8FC: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x8022B900: lw          $v0, 0x4C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4C);
    // 0x8022B904: sh          $zero, 0x60($v0)
    MEM_H(0X60, ctx->r2) = 0;
    // 0x8022B908: sh          $zero, 0x58($v0)
    MEM_H(0X58, ctx->r2) = 0;
    // 0x8022B90C: lw          $v1, 0x4C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4C);
    // 0x8022B910: lbu         $v0, 0x1($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X1);
    // 0x8022B914: j           L_8022B960
    // 0x8022B918: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
        goto L_8022B960;
    // 0x8022B918: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
L_8022B91C:
    // 0x8022B91C: jal         0x8004F418
    // 0x8022B920: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_6;
    // 0x8022B920: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_6:
    // 0x8022B924: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022B928: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_8022B92C:
    // 0x8022B92C: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x8022B930: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8022B934: jal         0x8004F5C4
    // 0x8022B938: lw          $a0, 0x50($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X50);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_7;
    // 0x8022B938: lw          $a0, 0x50($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X50);
    after_7:
    // 0x8022B93C: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x8022B940: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022B944: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B948: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B94C: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8022B950: bne         $v0, $zero, L_8022B92C
    if (ctx->r2 != 0) {
        // 0x8022B954: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_8022B92C;
    }
    // 0x8022B954: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022B958: j           L_8022BA4C
    // 0x8022B95C: nop

        goto L_8022BA4C;
    // 0x8022B95C: nop

L_8022B960:
    // 0x8022B960: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x8022B964: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022B968: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B96C: sh          $zero, 0x54($s3)
    MEM_H(0X54, ctx->r19) = 0;
    // 0x8022B970: sh          $zero, 0x58($s3)
    MEM_H(0X58, ctx->r19) = 0;
    // 0x8022B974: sw          $zero, 0x44($s3)
    MEM_W(0X44, ctx->r19) = 0;
    // 0x8022B978: sw          $zero, 0x48($s3)
    MEM_W(0X48, ctx->r19) = 0;
    // 0x8022B97C: sw          $zero, 0x64($s3)
    MEM_W(0X64, ctx->r19) = 0;
    // 0x8022B980: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022B984: jal         0x8004D5D4
    // 0x8022B988: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_8;
    // 0x8022B988: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    after_8:
    // 0x8022B98C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022B990: sh          $v0, 0x15C($s3)
    MEM_H(0X15C, ctx->r19) = ctx->r2;
    // 0x8022B994: sh          $v0, 0x15A($s3)
    MEM_H(0X15A, ctx->r19) = ctx->r2;
    // 0x8022B998: sh          $v0, 0x158($s3)
    MEM_H(0X158, ctx->r19) = ctx->r2;
    // 0x8022B99C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022B9A0: sw          $zero, 0x34($s2)
    MEM_W(0X34, ctx->r18) = 0;
    // 0x8022B9A4: sw          $zero, 0x38($s2)
    MEM_W(0X38, ctx->r18) = 0;
    // 0x8022B9A8: sw          $zero, 0x3C($s2)
    MEM_W(0X3C, ctx->r18) = 0;
    // 0x8022B9AC: sw          $zero, 0x40($s2)
    MEM_W(0X40, ctx->r18) = 0;
    // 0x8022B9B0: sw          $zero, 0x44($s2)
    MEM_W(0X44, ctx->r18) = 0;
    // 0x8022B9B4: sw          $zero, 0x48($s2)
    MEM_W(0X48, ctx->r18) = 0;
    // 0x8022B9B8: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x8022B9BC: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8022B9C0: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    // 0x8022B9C4: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
    // 0x8022B9C8: sw          $zero, 0x18($s2)
    MEM_W(0X18, ctx->r18) = 0;
    // 0x8022B9CC: sw          $zero, 0x28($s2)
    MEM_W(0X28, ctx->r18) = 0;
    // 0x8022B9D0: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
    // 0x8022B9D4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022B9D8: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022B9DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B9E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B9E4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022B9E8: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x8022B9EC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022B9F0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022B9F4: addiu       $v0, $v0, 0x878
    ctx->r2 = ADD32(ctx->r2, 0X878);
    // 0x8022B9F8: sw          $v0, 0x78($s3)
    MEM_W(0X78, ctx->r19) = ctx->r2;
    // 0x8022B9FC: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022BA00: sh          $v1, 0x6E($s3)
    MEM_H(0X6E, ctx->r19) = ctx->r3;
    // 0x8022BA04: sh          $v1, 0xB0($s3)
    MEM_H(0XB0, ctx->r19) = ctx->r3;
    // 0x8022BA08: jal         0x8003E934
    // 0x8022BA0C: sh          $v1, 0xB2($s3)
    MEM_H(0XB2, ctx->r19) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_9;
    // 0x8022BA0C: sh          $v1, 0xB2($s3)
    MEM_H(0XB2, ctx->r19) = ctx->r3;
    after_9:
    // 0x8022BA10: lbu         $v1, 0xF($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XF);
    // 0x8022BA14: sh          $v0, 0x16($s3)
    MEM_H(0X16, ctx->r19) = ctx->r2;
    // 0x8022BA18: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BA1C: sw          $v0, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r2;
    // 0x8022BA20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BA24: andi        $v1, $v1, 0x40
    ctx->r3 = ctx->r3 & 0X40;
    // 0x8022BA28: beq         $v1, $zero, L_8022BA3C
    if (ctx->r3 == 0) {
        // 0x8022BA2C: sb          $v0, 0x8($s3)
        MEM_B(0X8, ctx->r19) = ctx->r2;
            goto L_8022BA3C;
    }
    // 0x8022BA2C: sb          $v0, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r2;
    // 0x8022BA30: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022BA34: j           L_8022BA40
    // 0x8022BA38: sb          $v0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r2;
        goto L_8022BA40;
    // 0x8022BA38: sb          $v0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r2;
L_8022BA3C:
    // 0x8022BA3C: sb          $zero, 0x9($s3)
    MEM_B(0X9, ctx->r19) = 0;
L_8022BA40:
    // 0x8022BA40: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022BA44: sh          $zero, 0xA($s3)
    MEM_H(0XA, ctx->r19) = 0;
    // 0x8022BA48: sh          $v0, 0x15E($s3)
    MEM_H(0X15E, ctx->r19) = ctx->r2;
L_8022BA4C:
    // 0x8022BA4C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022BA50: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8022BA54: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8022BA58: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022BA5C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BA60: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022BA64: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022BA68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BA6C: jr          $ra
    // 0x8022BA70: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022BA70: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022BBAC_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BBAC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022BBB0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022BBB4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022BBB8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022BBBC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8022BBC0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022BBC4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022BBC8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022BBCC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022BBD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022BBD4: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022BBD8: addiu       $s3, $s1, 0x328
    ctx->r19 = ADD32(ctx->r17, 0X328);
    // 0x8022BBDC: beq         $v1, $zero, L_8022BBF8
    if (ctx->r3 == 0) {
        // 0x8022BBE0: sh          $zero, 0x330($s1)
        MEM_H(0X330, ctx->r17) = 0;
            goto L_8022BBF8;
    }
    // 0x8022BBE0: sh          $zero, 0x330($s1)
    MEM_H(0X330, ctx->r17) = 0;
    // 0x8022BBE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BBE8: beq         $v1, $v0, L_8022BC28
    if (ctx->r3 == ctx->r2) {
        // 0x8022BBEC: nop
    
            goto L_8022BC28;
    }
    // 0x8022BBEC: nop

    // 0x8022BBF0: j           L_8022BCFC
    // 0x8022BBF4: nop

        goto L_8022BCFC;
    // 0x8022BBF4: nop

L_8022BBF8:
    // 0x8022BBF8: lhu         $v0, 0x36E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X36E);
    // 0x8022BBFC: lh          $v1, 0x56($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X56);
    // 0x8022BC00: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x8022BC04: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022BC08: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BC0C: andi        $v1, $v1, 0x3FF
    ctx->r3 = ctx->r3 & 0X3FF;
    // 0x8022BC10: bne         $v1, $zero, L_8022BCFC
    if (ctx->r3 != 0) {
        // 0x8022BC14: sh          $v0, 0x36E($s1)
        MEM_H(0X36E, ctx->r17) = ctx->r2;
            goto L_8022BCFC;
    }
    // 0x8022BC14: sh          $v0, 0x36E($s1)
    MEM_H(0X36E, ctx->r17) = ctx->r2;
    // 0x8022BC18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BC1C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022BC20: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022BC24: sh          $v0, 0x32C($s1)
    MEM_H(0X32C, ctx->r17) = ctx->r2;
L_8022BC28:
    // 0x8022BC28: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x8022BC2C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022BC30: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x8022BC34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BC38: bgez        $v0, L_8022BCFC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022BC3C: nop
    
            goto L_8022BCFC;
    }
    // 0x8022BC3C: nop

    // 0x8022BC40: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022BC44: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x8022BC48: addiu       $s6, $zero, 0x9
    ctx->r22 = ADD32(0, 0X9);
    // 0x8022BC4C: addiu       $s5, $zero, -0x7C0
    ctx->r21 = ADD32(0, -0X7C0);
L_8022BC50:
    // 0x8022BC50: jal         0x8004EFE4
    // 0x8022BC54: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8022BC54: nop

    after_0:
    // 0x8022BC58: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022BC5C: beq         $s0, $zero, L_8022BCDC
    if (ctx->r16 == 0) {
        // 0x8022BC60: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022BCDC;
    }
    // 0x8022BC60: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022BC64: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022BC68: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022BC6C: sb          $s4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r20;
    // 0x8022BC70: sb          $s6, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r22;
    // 0x8022BC74: jal         0x8009A3B4
    // 0x8022BC78: sb          $s4, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r20;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022BC78: sb          $s4, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r20;
    after_1:
    // 0x8022BC7C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022BC80: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022BC84: jal         0x8009A3B4
    // 0x8022BC88: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022BC88: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8022BC8C: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x8022BC90: beq         $v0, $zero, L_8022BCAC
    if (ctx->r2 == 0) {
        // 0x8022BC94: nop
    
            goto L_8022BCAC;
    }
    // 0x8022BC94: nop

    // 0x8022BC98: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022BC9C: lhu         $v1, 0x46($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X46);
    // 0x8022BCA0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BCA4: j           L_8022BCB8
    // 0x8022BCA8: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
        goto L_8022BCB8;
    // 0x8022BCA8: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
L_8022BCAC:
    // 0x8022BCAC: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022BCB0: lhu         $v1, 0x46($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X46);
    // 0x8022BCB4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_8022BCB8:
    // 0x8022BCB8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022BCBC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022BCC0: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    // 0x8022BCC4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022BCC8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022BCCC: addiu       $a3, $zero, 0x600
    ctx->r7 = ADD32(0, 0X600);
    // 0x8022BCD0: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x8022BCD4: jal         0x8004DBA0
    // 0x8022BCD8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x8022BCD8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
L_8022BCDC:
    // 0x8022BCDC: addiu       $v0, $s2, 0x1
    ctx->r2 = ADD32(ctx->r18, 0X1);
    // 0x8022BCE0: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022BCE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BCE8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BCEC: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8022BCF0: bne         $v0, $zero, L_8022BC50
    if (ctx->r2 != 0) {
        // 0x8022BCF4: nop
    
            goto L_8022BC50;
    }
    // 0x8022BCF4: nop

    // 0x8022BCF8: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_8022BCFC:
    // 0x8022BCFC: jal         0x8003E934
    // 0x8022BD00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x8022BD00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8022BD04: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022BD08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BD0C: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022BD10: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022BD14: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022BD18: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022BD1C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022BD20: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022BD24: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022BD28: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BD2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022BD30: jr          $ra
    // 0x8022BD34: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022BD34: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8023799C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023799C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802379A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802379A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802379A8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802379AC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802379B0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x802379B4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x802379B8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802379BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802379C0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802379C4: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802379C8: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x802379CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802379D0: beq         $v1, $v0, L_80237B24
    if (ctx->r3 == ctx->r2) {
        // 0x802379D4: addiu       $s3, $s0, 0xC0
        ctx->r19 = ADD32(ctx->r16, 0XC0);
            goto L_80237B24;
    }
    // 0x802379D4: addiu       $s3, $s0, 0xC0
    ctx->r19 = ADD32(ctx->r16, 0XC0);
    // 0x802379D8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802379DC: beql        $v0, $zero, L_802379F4
    if (ctx->r2 == 0) {
        // 0x802379E0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802379F4;
    }
    goto skip_0;
    // 0x802379E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802379E4: beq         $v1, $zero, L_80237A04
    if (ctx->r3 == 0) {
        // 0x802379E8: addiu       $s4, $s2, 0x14
        ctx->r20 = ADD32(ctx->r18, 0X14);
            goto L_80237A04;
    }
    // 0x802379E8: addiu       $s4, $s2, 0x14
    ctx->r20 = ADD32(ctx->r18, 0X14);
    // 0x802379EC: j           L_80237C30
    // 0x802379F0: nop

        goto L_80237C30;
    // 0x802379F0: nop

L_802379F4:
    // 0x802379F4: beq         $v1, $v0, L_80237BC0
    if (ctx->r3 == ctx->r2) {
        // 0x802379F8: nop
    
            goto L_80237BC0;
    }
    // 0x802379F8: nop

    // 0x802379FC: j           L_80237C30
    // 0x80237A00: nop

        goto L_80237C30;
    // 0x80237A00: nop

L_80237A04:
    // 0x80237A04: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80237A08: addiu       $a0, $a0, 0x1858
    ctx->r4 = ADD32(ctx->r4, 0X1858);
    // 0x80237A0C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80237A10: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80237A14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237A18: jal         0x8009A3B4
    // 0x80237A1C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80237A1C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x80237A20: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80237A24: addiu       $a0, $a0, 0x1860
    ctx->r4 = ADD32(ctx->r4, 0X1860);
    // 0x80237A28: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x80237A2C: jal         0x8009A3B4
    // 0x80237A30: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80237A30: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80237A34: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80237A38: lui         $s5, 0x8020
    ctx->r21 = S32(0X8020 << 16);
    // 0x80237A3C: lhu         $s5, 0x4A06($s5)
    ctx->r21 = MEM_HU(ctx->r21, 0X4A06);
    // 0x80237A40: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80237A44: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237A48: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x80237A4C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80237A50: jal         0x8004EC38
    // 0x80237A54: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_2;
    // 0x80237A54: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    after_2:
    // 0x80237A58: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80237A5C: sh          $v0, 0x4A06($at)
    MEM_H(0X4A06, ctx->r1) = ctx->r2;
    // 0x80237A60: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80237A64: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80237A68: beq         $v0, $zero, L_80237A80
    if (ctx->r2 == 0) {
        // 0x80237A6C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80237A80;
    }
    // 0x80237A6C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80237A70: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80237A74: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237A78: j           L_80237A8C
    // 0x80237A7C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
        goto L_80237A8C;
    // 0x80237A7C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
L_80237A80:
    // 0x80237A80: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80237A84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237A88: addiu       $a3, $zero, -0x800
    ctx->r7 = ADD32(0, -0X800);
L_80237A8C:
    // 0x80237A8C: jal         0x8004DA90
    // 0x80237A90: nop

    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x80237A90: nop

    after_3:
    // 0x80237A94: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237A98: jal         0x8004EC38
    // 0x80237A9C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_8004EC38_2A038(rdram, ctx);
        goto after_4;
    // 0x80237A9C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_4:
    // 0x80237AA0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80237AA4: lh          $v1, 0x14($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X14);
    // 0x80237AA8: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80237AAC: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x80237AB0: bltzl       $v0, L_80237AB8
    if (SIGNED(ctx->r2) < 0) {
        // 0x80237AB4: addiu       $v0, $v0, 0x1F
        ctx->r2 = ADD32(ctx->r2, 0X1F);
            goto L_80237AB8;
    }
    goto skip_1;
    // 0x80237AB4: addiu       $v0, $v0, 0x1F
    ctx->r2 = ADD32(ctx->r2, 0X1F);
    skip_1:
L_80237AB8:
    // 0x80237AB8: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x80237ABC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80237AC0: lh          $v1, 0x18($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X18);
    // 0x80237AC4: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x80237AC8: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x80237ACC: bltzl       $v0, L_80237AD4
    if (SIGNED(ctx->r2) < 0) {
        // 0x80237AD0: addiu       $v0, $v0, 0x1F
        ctx->r2 = ADD32(ctx->r2, 0X1F);
            goto L_80237AD4;
    }
    goto skip_2;
    // 0x80237AD0: addiu       $v0, $v0, 0x1F
    ctx->r2 = ADD32(ctx->r2, 0X1F);
    skip_2:
L_80237AD4:
    // 0x80237AD4: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x80237AD8: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80237ADC: addiu       $a1, $a1, 0x1858
    ctx->r5 = ADD32(ctx->r5, 0X1858);
    // 0x80237AE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80237AE4: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x80237AE8: jal         0x8009A3B4
    // 0x80237AEC: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80237AEC: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    after_5:
    // 0x80237AF0: addiu       $a0, $s2, 0x1C
    ctx->r4 = ADD32(ctx->r18, 0X1C);
    // 0x80237AF4: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80237AF8: addiu       $a1, $a1, 0x1860
    ctx->r5 = ADD32(ctx->r5, 0X1860);
    // 0x80237AFC: jal         0x8009A3B4
    // 0x80237B00: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80237B00: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x80237B04: sh          $s5, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r21;
    // 0x80237B08: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x80237B0C: addiu       $v1, $zero, 0x15
    ctx->r3 = ADD32(0, 0X15);
    // 0x80237B10: sh          $v1, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r3;
    // 0x80237B14: sb          $zero, 0x8($s3)
    MEM_B(0X8, ctx->r19) = 0;
    // 0x80237B18: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
    // 0x80237B1C: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80237B20: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
L_80237B24:
    // 0x80237B24: lhu         $v1, 0x4($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X4);
    // 0x80237B28: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80237B2C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80237B30: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80237B34: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80237B38: sh          $v1, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r3;
    // 0x80237B3C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80237B40: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80237B44: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x80237B48: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80237B4C: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x80237B50: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x80237B54: lhu         $a3, 0x48($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X48);
    // 0x80237B58: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80237B5C: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80237B60: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80237B64: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80237B68: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x80237B6C: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80237B70: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x80237B74: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
    // 0x80237B78: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x80237B7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237B80: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80237B84: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80237B88: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80237B8C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80237B90: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80237B94: jal         0x80040F30
    // 0x80237B98: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    func_80040F30_1C330(rdram, ctx);
        goto after_7;
    // 0x80237B98: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    after_7:
    // 0x80237B9C: andi        $v0, $v0, 0x3F00
    ctx->r2 = ctx->r2 & 0X3F00;
    // 0x80237BA0: bne         $v0, $zero, L_80237BBC
    if (ctx->r2 != 0) {
        // 0x80237BA4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80237BBC;
    }
    // 0x80237BA4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80237BA8: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x80237BAC: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80237BB0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80237BB4: beq         $v0, $zero, L_80237C30
    if (ctx->r2 == 0) {
        // 0x80237BB8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80237C30;
    }
    // 0x80237BB8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80237BBC:
    // 0x80237BBC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80237BC0:
    // 0x80237BC0: jal         0x8004F144
    // 0x80237BC4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_8;
    // 0x80237BC4: nop

    after_8:
    // 0x80237BC8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80237BCC: beq         $s1, $zero, L_80237C08
    if (ctx->r17 == 0) {
        // 0x80237BD0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237C08;
    }
    // 0x80237BD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237BD4: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    // 0x80237BD8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237BDC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80237BE0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80237BE4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80237BE8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80237BEC: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80237BF0: jal         0x8004DA90
    // 0x80237BF4: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    func_8004DA90_28E90(rdram, ctx);
        goto after_9;
    // 0x80237BF4: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    after_9:
    // 0x80237BF8: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x80237BFC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80237C00: jal         0x8009A3B4
    // 0x80237C04: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x80237C04: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
L_80237C08:
    // 0x80237C08: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80237C0C: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80237C10: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80237C14: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x80237C18: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80237C1C: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x80237C20: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x80237C24: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80237C28: andi        $v0, $v0, 0xFFA1
    ctx->r2 = ctx->r2 & 0XFFA1;
    // 0x80237C2C: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
L_80237C30:
    // 0x80237C30: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80237C34: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80237C38: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80237C3C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80237C40: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80237C44: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80237C48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237C4C: jr          $ra
    // 0x80237C50: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80237C50: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022B194_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B194: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022B198: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B19C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B1A0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022B1A4: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8022B1A8: addiu       $a1, $a1, 0x15B0
    ctx->r5 = ADD32(ctx->r5, 0X15B0);
    // 0x8022B1AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B1B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022B1B4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022B1B8: jal         0x8009A3B4
    // 0x8022B1BC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022B1BC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022B1C0: lw          $v1, 0x35C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X35C);
    // 0x8022B1C4: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022B1C8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022B1CC: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8022B1D0: beq         $a0, $zero, L_8022B3F0
    if (ctx->r4 == 0) {
        // 0x8022B1D4: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022B3F0;
    }
    // 0x8022B1D4: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022B1D8: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022B1DC: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x8022B1E0: bnel        $v0, $zero, L_8022B3E8
    if (ctx->r2 != 0) {
        // 0x8022B1E4: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_8022B3E8;
    }
    goto skip_0;
    // 0x8022B1E4: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x8022B1E8: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x8022B1EC: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022B1F0: beql        $v0, $zero, L_8022B3E8
    if (ctx->r2 == 0) {
        // 0x8022B1F4: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_8022B3E8;
    }
    goto skip_1;
    // 0x8022B1F4: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_1:
    // 0x8022B1F8: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022B1FC: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022B200: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022B204: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8022B208: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B20C: bgtz        $v0, L_8022B240
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022B210: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8022B240;
    }
    // 0x8022B210: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8022B214: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022B218: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022B21C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8022B220: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x8022B224: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x8022B228: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8022B22C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022B230: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022B234: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022B238: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8022B23C: lbu         $a0, 0x9($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X9);
L_8022B240:
    // 0x8022B240: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x8022B244: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x8022B248: beq         $v0, $zero, L_8022B384
    if (ctx->r2 == 0) {
        // 0x8022B24C: andi        $v0, $v1, 0x200
        ctx->r2 = ctx->r3 & 0X200;
            goto L_8022B384;
    }
    // 0x8022B24C: andi        $v0, $v1, 0x200
    ctx->r2 = ctx->r3 & 0X200;
    // 0x8022B250: lhu         $v1, 0x352($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X352);
    // 0x8022B254: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022B258: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    // 0x8022B25C: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x8022B260: bne         $v0, $zero, L_8022B2D0
    if (ctx->r2 != 0) {
        // 0x8022B264: sh          $a0, 0x352($s0)
        MEM_H(0X352, ctx->r16) = ctx->r4;
            goto L_8022B2D0;
    }
    // 0x8022B264: sh          $a0, 0x352($s0)
    MEM_H(0X352, ctx->r16) = ctx->r4;
    // 0x8022B268: lw          $v0, 0x35C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X35C);
    // 0x8022B26C: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x8022B270: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022B274: bnel        $v0, $zero, L_8022B2D4
    if (ctx->r2 != 0) {
        // 0x8022B278: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_8022B2D4;
    }
    goto skip_2;
    // 0x8022B278: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    skip_2:
    // 0x8022B27C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022B280: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022B284: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022B288: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B28C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B290: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022B294: lbu         $v1, 0x9($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X9);
    // 0x8022B298: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022B29C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B2A0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022B2A4: beq         $v0, $zero, L_8022B2D0
    if (ctx->r2 == 0) {
        // 0x8022B2A8: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022B2D0;
    }
    // 0x8022B2A8: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8022B2AC: jal         0x8002A33C
    // 0x8022B2B0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022B2B0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022B2B4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B2B8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B2BC: beq         $v1, $v0, L_8022B3D4
    if (ctx->r3 == ctx->r2) {
        // 0x8022B2C0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022B3D4;
    }
    // 0x8022B2C0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B2C4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B2C8: j           L_8022B3D4
    // 0x8022B2CC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8022B3D4;
    // 0x8022B2CC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022B2D0:
    // 0x8022B2D0: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
L_8022B2D4:
    // 0x8022B2D4: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022B2D8: jal         0x8002A33C
    // 0x8022B2DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022B2DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8022B2E0: lhu         $v0, 0x22($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X22);
    // 0x8022B2E4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022B2E8: beq         $v0, $zero, L_8022B328
    if (ctx->r2 == 0) {
        // 0x8022B2EC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022B328;
    }
    // 0x8022B2EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B2F0: jal         0x8004EC38
    // 0x8022B2F4: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x8022B2F4: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    after_3:
    // 0x8022B2F8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022B2FC: lh          $v0, 0x56($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X56);
    // 0x8022B300: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x8022B304: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022B308: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022B30C: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x8022B310: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B314: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8022B318: bne         $v0, $zero, L_8022B36C
    if (ctx->r2 != 0) {
        // 0x8022B31C: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_8022B36C;
    }
    // 0x8022B31C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022B320: j           L_8022B360
    // 0x8022B324: addiu       $v0, $a0, 0x800
    ctx->r2 = ADD32(ctx->r4, 0X800);
        goto L_8022B360;
    // 0x8022B324: addiu       $v0, $a0, 0x800
    ctx->r2 = ADD32(ctx->r4, 0X800);
L_8022B328:
    // 0x8022B328: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022B32C: jal         0x8004EC38
    // 0x8022B330: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    func_8004EC38_2A038(rdram, ctx);
        goto after_4;
    // 0x8022B330: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    after_4:
    // 0x8022B334: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022B338: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x8022B33C: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022B340: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B344: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022B348: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x8022B34C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B350: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8022B354: beq         $v0, $zero, L_8022B36C
    if (ctx->r2 == 0) {
        // 0x8022B358: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_8022B36C;
    }
    // 0x8022B358: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022B35C: addiu       $v0, $a0, 0x800
    ctx->r2 = ADD32(ctx->r4, 0X800);
L_8022B360:
    // 0x8022B360: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B364: j           L_8022B370
    // 0x8022B368: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8022B370;
    // 0x8022B368: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022B36C:
    // 0x8022B36C: sh          $a1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r5;
L_8022B370:
    // 0x8022B370: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B374: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B378: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022B37C: j           L_8022B3D4
    // 0x8022B380: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
        goto L_8022B3D4;
    // 0x8022B380: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
L_8022B384:
    // 0x8022B384: bne         $v0, $zero, L_8022B3CC
    if (ctx->r2 != 0) {
        // 0x8022B388: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_8022B3CC;
    }
    // 0x8022B388: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8022B38C: lw          $v0, 0x35C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X35C);
    // 0x8022B390: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x8022B394: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022B398: bne         $v0, $zero, L_8022B3CC
    if (ctx->r2 != 0) {
        // 0x8022B39C: nop
    
            goto L_8022B3CC;
    }
    // 0x8022B39C: nop

    // 0x8022B3A0: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022B3A4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022B3A8: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022B3AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B3B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B3B4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8022B3B8: lh          $v0, 0x352($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X352);
    // 0x8022B3BC: lbu         $v1, 0x9($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X9);
    // 0x8022B3C0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022B3C4: bnel        $v0, $zero, L_8022B3CC
    if (ctx->r2 != 0) {
        // 0x8022B3C8: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022B3CC;
    }
    goto skip_3;
    // 0x8022B3C8: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    skip_3:
L_8022B3CC:
    // 0x8022B3CC: jal         0x8002A33C
    // 0x8022B3D0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8022B3D0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_5:
L_8022B3D4:
    // 0x8022B3D4: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022B3D8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022B3DC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022B3E0: j           L_8022B3F0
    // 0x8022B3E4: sb          $v0, 0x108($s0)
    MEM_B(0X108, ctx->r16) = ctx->r2;
        goto L_8022B3F0;
    // 0x8022B3E4: sb          $v0, 0x108($s0)
    MEM_B(0X108, ctx->r16) = ctx->r2;
L_8022B3E8:
    // 0x8022B3E8: jal         0x8002A33C
    // 0x8022B3EC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x8022B3EC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_6:
L_8022B3F0:
    // 0x8022B3F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B3F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022B3F8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022B3FC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B400: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B404: jr          $ra
    // 0x8022B408: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022B408: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8022B40C: nop

;}
RECOMP_FUNC void func_80231880_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231880: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80231884: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80231888: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023188C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80231890: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80231894: lw          $v0, 0x35C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X35C);
    // 0x80231898: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8023189C: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802318A0: andi        $v0, $v0, 0x5
    ctx->r2 = ctx->r2 & 0X5;
    // 0x802318A4: beql        $v0, $zero, L_802318BC
    if (ctx->r2 == 0) {
        // 0x802318A8: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802318BC;
    }
    goto skip_0;
    // 0x802318A8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    skip_0:
    // 0x802318AC: jal         0x80231E08
    // 0x802318B0: nop

    func_80231E08_ovl4(rdram, ctx);
        goto after_0;
    // 0x802318B0: nop

    after_0:
    // 0x802318B4: j           L_8023194C
    // 0x802318B8: nop

        goto L_8023194C;
    // 0x802318B8: nop

L_802318BC:
    // 0x802318BC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802318C0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x802318C4: jal         0x8004F820
    // 0x802318C8: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x802318C8: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_1:
    // 0x802318CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802318D0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802318D4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802318D8: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x802318DC: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x802318E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802318E4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802318E8: jal         0x8004DA90
    // 0x802318EC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x802318EC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x802318F0: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x802318F4: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x802318F8: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802318FC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80231900: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x80231904: addiu       $a3, $s1, 0x1C
    ctx->r7 = ADD32(ctx->r17, 0X1C);
    // 0x80231908: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8023190C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80231910: jal         0x8004FAEC
    // 0x80231914: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_3;
    // 0x80231914: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x80231918: beq         $v0, $zero, L_8023194C
    if (ctx->r2 == 0) {
        // 0x8023191C: lui         $v0, 0xF
        ctx->r2 = S32(0XF << 16);
            goto L_8023194C;
    }
    // 0x8023191C: lui         $v0, 0xF
    ctx->r2 = S32(0XF << 16);
    // 0x80231920: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80231924: ori         $v0, $v0, 0x4240
    ctx->r2 = ctx->r2 | 0X4240;
    // 0x80231928: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8023192C: bne         $v0, $zero, L_8023194C
    if (ctx->r2 != 0) {
        // 0x80231930: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8023194C;
    }
    // 0x80231930: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80231934: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
    // 0x80231938: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023193C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80231940: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80231944: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80231948: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8023194C:
    // 0x8023194C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80231950: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80231954: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80231958: jr          $ra
    // 0x8023195C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023195C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80229D80_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229D80: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80229D84: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80229D88: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80229D8C: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80229D90: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80229D94: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80229D98: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80229D9C: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x80229DA0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80229DA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80229DA8: jal         0x8009A3B4
    // 0x80229DAC: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80229DAC: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    after_0:
    // 0x80229DB0: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80229DB4: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80229DB8: jal         0x8009A3B4
    // 0x80229DBC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80229DBC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80229DC0: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x80229DC4: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x80229DC8: jal         0x8009A3B4
    // 0x80229DCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80229DCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80229DD0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80229DD4: jal         0x800A3450
    // 0x80229DD8: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80229DD8: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    after_3:
    // 0x80229DDC: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80229DE0: sh          $v0, 0x34A($s1)
    MEM_H(0X34A, ctx->r17) = ctx->r2;
    // 0x80229DE4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80229DE8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80229DEC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229DF0: lw          $v0, 0x800($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X800);
    // 0x80229DF4: jalr        $v0
    // 0x80229DF8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80229DF8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80229DFC: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x80229E00: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x80229E04: beq         $v0, $a1, L_80229E20
    if (ctx->r2 == ctx->r5) {
        // 0x80229E08: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_80229E20;
    }
    // 0x80229E08: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x80229E0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229E10: jal         0x80050294
    // 0x80229E14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80229E14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80229E18: j           L_80229E28
    // 0x80229E1C: nop

        goto L_80229E28;
    // 0x80229E1C: nop

L_80229E20:
    // 0x80229E20: jal         0x8005044C
    // 0x80229E24: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x80229E24: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_80229E28:
    // 0x80229E28: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80229E2C: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80229E30: beq         $v0, $zero, L_80229E5C
    if (ctx->r2 == 0) {
        // 0x80229E34: addiu       $a0, $s1, 0x208
        ctx->r4 = ADD32(ctx->r17, 0X208);
            goto L_80229E5C;
    }
    // 0x80229E34: addiu       $a0, $s1, 0x208
    ctx->r4 = ADD32(ctx->r17, 0X208);
    // 0x80229E38: addiu       $s0, $s2, 0x34
    ctx->r16 = ADD32(ctx->r18, 0X34);
    // 0x80229E3C: jal         0x80031DA8
    // 0x80229E40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_7;
    // 0x80229E40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80229E44: addiu       $a0, $s1, 0x228
    ctx->r4 = ADD32(ctx->r17, 0X228);
    // 0x80229E48: jal         0x80031DA8
    // 0x80229E4C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_8;
    // 0x80229E4C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80229E50: addiu       $a0, $s1, 0x248
    ctx->r4 = ADD32(ctx->r17, 0X248);
    // 0x80229E54: jal         0x80031DA8
    // 0x80229E58: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_9;
    // 0x80229E58: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_9:
L_80229E5C:
    // 0x80229E5C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80229E60: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80229E64: beq         $v0, $zero, L_80229EAC
    if (ctx->r2 == 0) {
        // 0x80229E68: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80229EAC;
    }
    // 0x80229E68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229E6C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80229E70: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x80229E74: lhu         $v1, 0x44($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X44);
    // 0x80229E78: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80229E7C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80229E80: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229E84: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80229E88: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229E8C: jal         0x8003B564
    // 0x80229E90: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    func_8003B564_16964(rdram, ctx);
        goto after_10;
    // 0x80229E90: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    after_10:
    // 0x80229E94: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x80229E98: lhu         $v1, 0x44($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X44);
    // 0x80229E9C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80229EA0: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80229EA4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229EA8: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
L_80229EAC:
    // 0x80229EAC: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80229EB0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80229EB4: beql        $v0, $zero, L_80229F20
    if (ctx->r2 == 0) {
        // 0x80229EB8: sw          $zero, 0x14($s2)
        MEM_W(0X14, ctx->r18) = 0;
            goto L_80229F20;
    }
    goto skip_0;
    // 0x80229EB8: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
    skip_0:
    // 0x80229EBC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80229EC0: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80229EC4: beq         $v0, $zero, L_80229F1C
    if (ctx->r2 == 0) {
        // 0x80229EC8: addiu       $s0, $s2, 0xC
        ctx->r16 = ADD32(ctx->r18, 0XC);
            goto L_80229F1C;
    }
    // 0x80229EC8: addiu       $s0, $s2, 0xC
    ctx->r16 = ADD32(ctx->r18, 0XC);
    // 0x80229ECC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229ED0: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x80229ED4: jal         0x8009A3B4
    // 0x80229ED8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x80229ED8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_11:
    // 0x80229EDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229EE0: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80229EE4: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80229EE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229EEC: addiu       $v0, $s2, 0x14
    ctx->r2 = ADD32(ctx->r18, 0X14);
    // 0x80229EF0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80229EF4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80229EF8: lhu         $v1, 0x8($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8);
    // 0x80229EFC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80229F00: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80229F04: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80229F08: lui         $v0, 0x488
    ctx->r2 = S32(0X488 << 16);
    // 0x80229F0C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80229F10: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80229F14: jal         0x80051E18
    // 0x80229F18: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_12;
    // 0x80229F18: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_12:
L_80229F1C:
    // 0x80229F1C: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
L_80229F20:
    // 0x80229F20: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80229F24: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80229F28: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80229F2C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80229F30: jr          $ra
    // 0x80229F34: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80229F34: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8023A2AC_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A2AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023A2B0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8023A2B4: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x8023A2B8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023A2BC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8023A2C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023A2C4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023A2C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023A2CC: lbu         $s3, 0x3($s4)
    ctx->r19 = MEM_BU(ctx->r20, 0X3);
    // 0x8023A2D0: sll         $v0, $s3, 1
    ctx->r2 = S32(ctx->r19 << 1);
    // 0x8023A2D4: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x8023A2D8: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    // 0x8023A2DC: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023A2E0: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x8023A2E4: lhu         $a0, 0xEEA($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XEEA);
    // 0x8023A2E8: jal         0x8006033C
    // 0x8023A2EC: lbu         $s1, 0xA($s4)
    ctx->r17 = MEM_BU(ctx->r20, 0XA);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8023A2EC: lbu         $s1, 0xA($s4)
    ctx->r17 = MEM_BU(ctx->r20, 0XA);
    after_0:
    // 0x8023A2F0: beq         $v0, $zero, L_8023A4F4
    if (ctx->r2 == 0) {
        // 0x8023A2F4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023A4F4;
    }
    // 0x8023A2F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023A2F8: lb          $v1, 0xC($s4)
    ctx->r3 = MEM_B(ctx->r20, 0XC);
    // 0x8023A2FC: beq         $v1, $v0, L_8023A3C8
    if (ctx->r3 == ctx->r2) {
        // 0x8023A300: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8023A3C8;
    }
    // 0x8023A300: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023A304: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023A308: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8023A30C: lhu         $v0, 0xEE0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XEE0);
    // 0x8023A310: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8023A314: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023A318: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x8023A31C: lhu         $v1, 0xEE2($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XEE2);
    // 0x8023A320: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023A324: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8023A328: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8023A32C: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x8023A330: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    // 0x8023A334: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8023A338: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8023A33C: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x8023A340: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x8023A344: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x8023A348: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x8023A34C: lh          $a2, 0xEE2($a2)
    ctx->r6 = MEM_H(ctx->r6, 0XEE2);
    // 0x8023A350: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023A354: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x8023A358: lh          $a1, 0xEE0($a1)
    ctx->r5 = MEM_H(ctx->r5, 0XEE0);
    // 0x8023A35C: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    // 0x8023A360: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x8023A364: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8023A368: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8023A36C: jal         0x8002FDF4
    // 0x8023A370: addiu       $a2, $a2, -0x40
    ctx->r6 = ADD32(ctx->r6, -0X40);
    func_8002FDF4_B1F4(rdram, ctx);
        goto after_1;
    // 0x8023A370: addiu       $a2, $a2, -0x40
    ctx->r6 = ADD32(ctx->r6, -0X40);
    after_1:
    // 0x8023A374: beq         $s1, $zero, L_8023A3C4
    if (ctx->r17 == 0) {
        // 0x8023A378: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8023A3C4;
    }
    // 0x8023A378: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023A37C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023A380: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8023A384: lhu         $v0, 0xEE2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XEE2);
    // 0x8023A388: sh          $s2, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r18;
    // 0x8023A38C: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8023A390: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8023A394: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8023A398: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x8023A39C: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x8023A3A0: lh          $a2, 0xEE2($a2)
    ctx->r6 = MEM_H(ctx->r6, 0XEE2);
    // 0x8023A3A4: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023A3A8: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x8023A3AC: lh          $a1, 0xEE0($a1)
    ctx->r5 = MEM_H(ctx->r5, 0XEE0);
    // 0x8023A3B0: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x8023A3B4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8023A3B8: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8023A3BC: jal         0x8002FDF4
    // 0x8023A3C0: subu        $a2, $a2, $s1
    ctx->r6 = SUB32(ctx->r6, ctx->r17);
    func_8002FDF4_B1F4(rdram, ctx);
        goto after_2;
    // 0x8023A3C0: subu        $a2, $a2, $s1
    ctx->r6 = SUB32(ctx->r6, ctx->r17);
    after_2:
L_8023A3C4:
    // 0x8023A3C4: lb          $v1, 0xC($s4)
    ctx->r3 = MEM_B(ctx->r20, 0XC);
L_8023A3C8:
    // 0x8023A3C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023A3CC: beq         $v1, $v0, L_8023A4A4
    if (ctx->r3 == ctx->r2) {
        // 0x8023A3D0: sra         $s1, $s1, 1
        ctx->r17 = S32(SIGNED(ctx->r17) >> 1);
            goto L_8023A4A4;
    }
    // 0x8023A3D0: sra         $s1, $s1, 1
    ctx->r17 = S32(SIGNED(ctx->r17) >> 1);
    // 0x8023A3D4: sll         $v0, $s3, 1
    ctx->r2 = S32(ctx->r19 << 1);
    // 0x8023A3D8: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x8023A3DC: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    // 0x8023A3E0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023A3E4: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8023A3E8: lhu         $v0, 0xEE4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XEE4);
    // 0x8023A3EC: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8023A3F0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023A3F4: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x8023A3F8: lhu         $v1, 0xEE6($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XEE6);
    // 0x8023A3FC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023A400: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8023A404: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023A408: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x8023A40C: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    // 0x8023A410: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8023A414: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8023A418: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023A41C: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x8023A420: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x8023A424: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x8023A428: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x8023A42C: lh          $a2, 0xEE6($a2)
    ctx->r6 = MEM_H(ctx->r6, 0XEE6);
    // 0x8023A430: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023A434: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x8023A438: lh          $a1, 0xEE4($a1)
    ctx->r5 = MEM_H(ctx->r5, 0XEE4);
    // 0x8023A43C: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    // 0x8023A440: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x8023A444: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8023A448: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8023A44C: jal         0x8002FDF4
    // 0x8023A450: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
    func_8002FDF4_B1F4(rdram, ctx);
        goto after_3;
    // 0x8023A450: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
    after_3:
    // 0x8023A454: beq         $s1, $zero, L_8023A4A4
    if (ctx->r17 == 0) {
        // 0x8023A458: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8023A4A4;
    }
    // 0x8023A458: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023A45C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023A460: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8023A464: lhu         $v0, 0xEE6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XEE6);
    // 0x8023A468: sh          $s2, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r18;
    // 0x8023A46C: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8023A470: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8023A474: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8023A478: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x8023A47C: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x8023A480: lh          $a2, 0xEE6($a2)
    ctx->r6 = MEM_H(ctx->r6, 0XEE6);
    // 0x8023A484: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023A488: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x8023A48C: lh          $a1, 0xEE4($a1)
    ctx->r5 = MEM_H(ctx->r5, 0XEE4);
    // 0x8023A490: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x8023A494: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8023A498: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8023A49C: jal         0x8002FDF4
    // 0x8023A4A0: subu        $a2, $a2, $s1
    ctx->r6 = SUB32(ctx->r6, ctx->r17);
    func_8002FDF4_B1F4(rdram, ctx);
        goto after_4;
    // 0x8023A4A0: subu        $a2, $a2, $s1
    ctx->r6 = SUB32(ctx->r6, ctx->r17);
    after_4:
L_8023A4A4:
    // 0x8023A4A4: lbu         $v0, 0xB($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XB);
    // 0x8023A4A8: beq         $v0, $zero, L_8023A4D0
    if (ctx->r2 == 0) {
        // 0x8023A4AC: sll         $v0, $s3, 1
        ctx->r2 = S32(ctx->r19 << 1);
            goto L_8023A4D0;
    }
    // 0x8023A4AC: sll         $v0, $s3, 1
    ctx->r2 = S32(ctx->r19 << 1);
    // 0x8023A4B0: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x8023A4B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023A4B8: lbu         $v1, 0xA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA);
    // 0x8023A4BC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023A4C0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023A4C4: lbu         $v0, 0xEE9($at)
    ctx->r2 = MEM_BU(ctx->r1, 0XEE9);
    // 0x8023A4C8: j           L_8023A4EC
    // 0x8023A4CC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
        goto L_8023A4EC;
    // 0x8023A4CC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
L_8023A4D0:
    // 0x8023A4D0: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x8023A4D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023A4D8: lbu         $v1, 0xA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA);
    // 0x8023A4DC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023A4E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023A4E4: lbu         $v0, 0xEE9($at)
    ctx->r2 = MEM_BU(ctx->r1, 0XEE9);
    // 0x8023A4E8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
L_8023A4EC:
    // 0x8023A4EC: andi        $v1, $v1, 0x3F
    ctx->r3 = ctx->r3 & 0X3F;
    // 0x8023A4F0: sb          $v1, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r3;
L_8023A4F4:
    // 0x8023A4F4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8023A4F8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8023A4FC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023A500: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023A504: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023A508: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023A50C: jr          $ra
    // 0x8023A510: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023A510: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8023A514: nop

    // 0x8023A518: nop

    // 0x8023A51C: nop

;}
RECOMP_FUNC void func_8023B288_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B288: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8023B28C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8023B290: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B294: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8023B298: jal         0x8006033C
    // 0x8023B29C: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8023B29C: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_0:
    // 0x8023B2A0: beq         $v0, $zero, L_8023B2F4
    if (ctx->r2 == 0) {
        // 0x8023B2A4: nop
    
            goto L_8023B2F4;
    }
    // 0x8023B2A4: nop

    // 0x8023B2A8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023B2AC: jal         0x8003E6BC
    // 0x8023B2B0: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x8023B2B0: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    after_1:
    // 0x8023B2B4: lw          $v1, 0x44($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X44);
    // 0x8023B2B8: bne         $v1, $v0, L_8023B2F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023B2BC: nop
    
            goto L_8023B2F4;
    }
    // 0x8023B2BC: nop

    // 0x8023B2C0: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    // 0x8023B2C4: jal         0x8006033C
    // 0x8023B2C8: addiu       $a0, $a0, 0x7E0
    ctx->r4 = ADD32(ctx->r4, 0X7E0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8023B2C8: addiu       $a0, $a0, 0x7E0
    ctx->r4 = ADD32(ctx->r4, 0X7E0);
    after_2:
    // 0x8023B2CC: bne         $v0, $zero, L_8023B2F4
    if (ctx->r2 != 0) {
        // 0x8023B2D0: addiu       $a0, $zero, 0x7B2
        ctx->r4 = ADD32(0, 0X7B2);
            goto L_8023B2F4;
    }
    // 0x8023B2D0: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    // 0x8023B2D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023B2D8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023B2DC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023B2E0: jal         0x8006036C
    // 0x8023B2E4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x8023B2E4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    after_3:
    // 0x8023B2E8: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    // 0x8023B2EC: jal         0x8002A33C
    // 0x8023B2F0: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8023B2F0: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_4:
L_8023B2F4:
    // 0x8023B2F4: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8023B2F8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023B2FC: bne         $v1, $v0, L_8023B3DC
    if (ctx->r3 != ctx->r2) {
        // 0x8023B300: nop
    
            goto L_8023B3DC;
    }
    // 0x8023B300: nop

    // 0x8023B304: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8023B308: beq         $v0, $zero, L_8023B3DC
    if (ctx->r2 == 0) {
        // 0x8023B30C: nop
    
            goto L_8023B3DC;
    }
    // 0x8023B30C: nop

    // 0x8023B310: jal         0x8006033C
    // 0x8023B314: addiu       $a0, $zero, 0x7E1
    ctx->r4 = ADD32(0, 0X7E1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x8023B314: addiu       $a0, $zero, 0x7E1
    ctx->r4 = ADD32(0, 0X7E1);
    after_5:
    // 0x8023B318: beq         $v0, $zero, L_8023B3DC
    if (ctx->r2 == 0) {
        // 0x8023B31C: lui         $a1, 0x3EC0
        ctx->r5 = S32(0X3EC0 << 16);
            goto L_8023B3DC;
    }
    // 0x8023B31C: lui         $a1, 0x3EC0
    ctx->r5 = S32(0X3EC0 << 16);
    // 0x8023B320: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8023B324: lhu         $v0, -0x2380($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X2380);
    // 0x8023B328: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8023B32C: lw          $a0, -0x5858($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5858);
    // 0x8023B330: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x8023B334: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B338: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8023B33C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B340: sw          $a0, 0x480($at)
    MEM_W(0X480, ctx->r1) = ctx->r4;
    // 0x8023B344: addiu       $v0, $a0, 0x28
    ctx->r2 = ADD32(ctx->r4, 0X28);
    // 0x8023B348: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8023B34C: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8023B350: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023B354: sh          $v1, -0x2380($at)
    MEM_H(-0X2380, ctx->r1) = ctx->r3;
    // 0x8023B358: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023B35C: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8023B360: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B364: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8023B368: lbu         $v1, 0xFC0($at)
    ctx->r3 = MEM_BU(ctx->r1, 0XFC0);
    // 0x8023B36C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B370: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8023B374: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023B378: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8023B37C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8023B380: addiu       $v0, $zero, 0x4F80
    ctx->r2 = ADD32(0, 0X4F80);
    // 0x8023B384: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x8023B388: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8023B38C: addiu       $v0, $zero, -0x216
    ctx->r2 = ADD32(0, -0X216);
    // 0x8023B390: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8023B394: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x8023B398: ori         $a1, $a1, 0xE0E0
    ctx->r5 = ctx->r5 | 0XE0E0;
    // 0x8023B39C: addiu       $v0, $zero, 0x2BF0
    ctx->r2 = ADD32(0, 0X2BF0);
    // 0x8023B3A0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8023B3A4: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    // 0x8023B3A8: lw          $v1, 0x14($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X14);
    // 0x8023B3AC: lui         $v0, 0x25
    ctx->r2 = S32(0X25 << 16);
    // 0x8023B3B0: ori         $v0, $v0, 0xE0FF
    ctx->r2 = ctx->r2 | 0XE0FF;
    // 0x8023B3B4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x8023B3B8: ori         $v0, $zero, 0xFFE0
    ctx->r2 = 0 | 0XFFE0;
    // 0x8023B3BC: sw          $v0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r2;
    // 0x8023B3C0: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x8023B3C4: sw          $v0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r2;
    // 0x8023B3C8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023B3CC: sw          $a1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r5;
    // 0x8023B3D0: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x8023B3D4: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x8023B3D8: sw          $v1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r3;
L_8023B3DC:
    // 0x8023B3DC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8023B3E0: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8023B3E4: jr          $ra
    // 0x8023B3E8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8023B3E8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80236898_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236898: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023689C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802368A0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802368A4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802368A8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x802368AC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802368B0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802368B4: jal         0x80040F30
    // 0x802368B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80040F30_1C330(rdram, ctx);
        goto after_0;
    // 0x802368B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x802368BC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x802368C0: beq         $s2, $zero, L_80236A30
    if (ctx->r18 == 0) {
        // 0x802368C4: andi        $v0, $s2, 0x1000
        ctx->r2 = ctx->r18 & 0X1000;
            goto L_80236A30;
    }
    // 0x802368C4: andi        $v0, $s2, 0x1000
    ctx->r2 = ctx->r18 & 0X1000;
    // 0x802368C8: beq         $v0, $zero, L_802369C8
    if (ctx->r2 == 0) {
        // 0x802368CC: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_802369C8;
    }
    // 0x802368CC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802368D0: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x802368D4: bltzl       $v0, L_802368F0
    if (SIGNED(ctx->r2) < 0) {
        // 0x802368D8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_802368F0;
    }
    goto skip_0;
    // 0x802368D8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
    // 0x802368DC: slti        $v0, $v0, 0xA01
    ctx->r2 = SIGNED(ctx->r2) < 0XA01 ? 1 : 0;
    // 0x802368E0: bnel        $v0, $zero, L_80236900
    if (ctx->r2 != 0) {
        // 0x802368E4: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_80236900;
    }
    goto skip_1;
    // 0x802368E4: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    skip_1:
    // 0x802368E8: j           L_8023691C
    // 0x802368EC: nop

        goto L_8023691C;
    // 0x802368EC: nop

L_802368F0:
    // 0x802368F0: slti        $v0, $v0, 0xA01
    ctx->r2 = SIGNED(ctx->r2) < 0XA01 ? 1 : 0;
    // 0x802368F4: beq         $v0, $zero, L_8023691C
    if (ctx->r2 == 0) {
        // 0x802368F8: nop
    
            goto L_8023691C;
    }
    // 0x802368F8: nop

    // 0x802368FC: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_80236900:
    // 0x80236900: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x80236904: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    // 0x80236908: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    // 0x8023690C: sh          $zero, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = 0;
    // 0x80236910: sh          $zero, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = 0;
    // 0x80236914: j           L_8023695C
    // 0x80236918: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
        goto L_8023695C;
    // 0x80236918: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
L_8023691C:
    // 0x8023691C: lh          $v1, 0x46($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X46);
    // 0x80236920: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80236924: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80236928: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8023692C: bltzl       $v0, L_80236934
    if (SIGNED(ctx->r2) < 0) {
        // 0x80236930: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80236934;
    }
    goto skip_2;
    // 0x80236930: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
L_80236934:
    // 0x80236934: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x80236938: lhu         $v0, 0x44($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X44);
    // 0x8023693C: sh          $v1, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r3;
    // 0x80236940: lhu         $v1, 0x48($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X48);
    // 0x80236944: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236948: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x8023694C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80236950: sra         $v1, $v1, 17
    ctx->r3 = S32(SIGNED(ctx->r3) >> 17);
    // 0x80236954: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80236958: sh          $v1, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r3;
L_8023695C:
    // 0x8023695C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80236960: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80236964: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80236968: bne         $v1, $v0, L_802369E8
    if (ctx->r3 != ctx->r2) {
        // 0x8023696C: addiu       $a0, $zero, 0xB3
        ctx->r4 = ADD32(0, 0XB3);
            goto L_802369E8;
    }
    // 0x8023696C: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    // 0x80236970: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x80236974: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80236978: bne         $v1, $v0, L_802369E8
    if (ctx->r3 != ctx->r2) {
        // 0x8023697C: nop
    
            goto L_802369E8;
    }
    // 0x8023697C: nop

    // 0x80236980: jal         0x8004F568
    // 0x80236984: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_1;
    // 0x80236984: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80236988: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    // 0x8023698C: jal         0x8002A33C
    // 0x80236990: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80236990: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x80236994: jal         0x8004F144
    // 0x80236998: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x80236998: nop

    after_3:
    // 0x8023699C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802369A0: beq         $s0, $zero, L_802369B4
    if (ctx->r16 == 0) {
        // 0x802369A4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802369B4;
    }
    // 0x802369A4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802369A8: addiu       $a1, $s1, 0x88
    ctx->r5 = ADD32(ctx->r17, 0X88);
    // 0x802369AC: jal         0x8009A3B4
    // 0x802369B0: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802369B0: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    after_4:
L_802369B4:
    // 0x802369B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802369B8: jal         0x80236B8C
    // 0x802369BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80236B8C_ovl4(rdram, ctx);
        goto after_5;
    // 0x802369BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802369C0: j           L_80236A28
    // 0x802369C4: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
        goto L_80236A28;
    // 0x802369C4: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
L_802369C8:
    // 0x802369C8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802369CC: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x802369D0: bne         $v1, $v0, L_802369E8
    if (ctx->r3 != ctx->r2) {
        // 0x802369D4: addiu       $a0, $zero, 0xB3
        ctx->r4 = ADD32(0, 0XB3);
            goto L_802369E8;
    }
    // 0x802369D4: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    // 0x802369D8: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x802369DC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802369E0: beq         $v1, $v0, L_802369F0
    if (ctx->r3 == ctx->r2) {
        // 0x802369E4: nop
    
            goto L_802369F0;
    }
    // 0x802369E4: nop

L_802369E8:
    // 0x802369E8: jal         0x8002A33C
    // 0x802369EC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x802369EC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_6:
L_802369F0:
    // 0x802369F0: jal         0x8004F144
    // 0x802369F4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_7;
    // 0x802369F4: nop

    after_7:
    // 0x802369F8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802369FC: beq         $s0, $zero, L_80236A24
    if (ctx->r16 == 0) {
        // 0x80236A00: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80236A24;
    }
    // 0x80236A00: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80236A04: addiu       $a1, $s1, 0x88
    ctx->r5 = ADD32(ctx->r17, 0X88);
    // 0x80236A08: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x80236A0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236A10: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80236A14: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x80236A18: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80236A1C: jal         0x8009A3B4
    // 0x80236A20: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80236A20: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    after_8:
L_80236A24:
    // 0x80236A24: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
L_80236A28:
    // 0x80236A28: jal         0x80040834
    // 0x80236A2C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_80040834_1BC34(rdram, ctx);
        goto after_9;
    // 0x80236A2C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_9:
L_80236A30:
    // 0x80236A30: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x80236A34: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80236A38: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80236A3C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80236A40: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236A44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236A48: jr          $ra
    // 0x80236A4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80236A4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022E794_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E794: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E798: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E79C: jal         0x8004F418
    // 0x8022E7A0: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022E7A0: nop

    after_0:
    // 0x8022E7A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E7A8: jr          $ra
    // 0x8022E7AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E7AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022700C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022700C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227010: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227014: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227018: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022701C: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80227020: sltiu       $v0, $a0, 0x5
    ctx->r2 = ctx->r4 < 0X5 ? 1 : 0;
    // 0x80227024: beq         $v0, $zero, L_80227178
    if (ctx->r2 == 0) {
        // 0x80227028: addiu       $v1, $s0, 0x328
        ctx->r3 = ADD32(ctx->r16, 0X328);
            goto L_80227178;
    }
    // 0x80227028: addiu       $v1, $s0, 0x328
    ctx->r3 = ADD32(ctx->r16, 0X328);
    // 0x8022702C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80227030: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227034: addu        $at, $at, $v0
    gpr jr_addend_8022703C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227038: lw          $v0, 0x14C8($at)
    ctx->r2 = ADD32(ctx->r1, 0X14C8);
    // 0x8022703C: jr          $v0
    // 0x80227040: nop

    switch (jr_addend_8022703C >> 2) {
        case 0: goto L_80227044; break;
        case 1: goto L_80227060; break;
        case 2: goto L_80227084; break;
        case 3: goto L_802270A8; break;
        case 4: goto L_80227154; break;
        default: switch_error(__func__, 0x8022703C, 0x802414C8);
    }
    // 0x80227040: nop

L_80227044:
    // 0x80227044: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227048: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022704C: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x80227050: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227054: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80227058: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x8022705C: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
L_80227060:
    // 0x80227060: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x80227064: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227068: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x8022706C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227070: bgez        $v0, L_80227178
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227074: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227178;
    }
    // 0x80227074: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227078: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022707C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80227080: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
L_80227084:
    // 0x80227084: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x80227088: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022708C: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x80227090: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227094: bgez        $v0, L_80227178
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227098: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80227178;
    }
    // 0x80227098: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022709C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802270A0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802270A4: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
L_802270A8:
    // 0x802270A8: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x802270AC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802270B0: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x802270B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802270B8: bgez        $v0, L_802270D4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802270BC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802270D4;
    }
    // 0x802270BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802270C0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802270C4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802270C8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802270CC: j           L_80227154
    // 0x802270D0: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
        goto L_80227154;
    // 0x802270D0: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
L_802270D4:
    // 0x802270D4: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x802270D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802270DC: jal         0x8004DA90
    // 0x802270E0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x802270E0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x802270E4: jal         0x80040F30
    // 0x802270E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x802270E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802270EC: jal         0x8003E934
    // 0x802270F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x802270F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802270F4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802270F8: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x802270FC: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80227100: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227104: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80227108: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022710C: bltz        $v0, L_80227124
    if (SIGNED(ctx->r2) < 0) {
        // 0x80227110: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_80227124;
    }
    // 0x80227110: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80227114: beq         $v0, $zero, L_80227134
    if (ctx->r2 == 0) {
        // 0x80227118: nop
    
            goto L_80227134;
    }
    // 0x80227118: nop

    // 0x8022711C: j           L_80227178
    // 0x80227120: nop

        goto L_80227178;
    // 0x80227120: nop

L_80227124:
    // 0x80227124: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x80227128: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022712C: bne         $v0, $zero, L_80227178
    if (ctx->r2 != 0) {
        // 0x80227130: nop
    
            goto L_80227178;
    }
    // 0x80227130: nop

L_80227134:
    // 0x80227134: lhu         $v0, 0x2E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2E);
    // 0x80227138: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x8022713C: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x80227140: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x80227144: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80227148: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022714C: j           L_80227178
    // 0x80227150: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
        goto L_80227178;
    // 0x80227150: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
L_80227154:
    // 0x80227154: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x80227158: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022715C: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x80227160: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227164: bgez        $v0, L_80227178
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227168: nop
    
            goto L_80227178;
    }
    // 0x80227168: nop

    // 0x8022716C: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80227170: ori         $v0, $v0, 0x21
    ctx->r2 = ctx->r2 | 0X21;
    // 0x80227174: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_80227178:
    // 0x80227178: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022717C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227180: jr          $ra
    // 0x80227184: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227184: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CDE4_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CDE4: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8022CDE8: beq         $v1, $zero, L_8022CE04
    if (ctx->r3 == 0) {
        // 0x8022CDEC: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_8022CE04;
    }
    // 0x8022CDEC: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x8022CDF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CDF4: beq         $v1, $v0, L_8022CE28
    if (ctx->r3 == ctx->r2) {
        // 0x8022CDF8: nop
    
            goto L_8022CE28;
    }
    // 0x8022CDF8: nop

    // 0x8022CDFC: j           L_8022CE4C
    // 0x8022CE00: nop

        goto L_8022CE4C;
    // 0x8022CE00: nop

L_8022CE04:
    // 0x8022CE04: lhu         $v0, 0x348($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X348);
    // 0x8022CE08: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022CE0C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    // 0x8022CE10: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x8022CE14: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x8022CE18: sh          $v1, 0x34C($a0)
    MEM_H(0X34C, ctx->r4) = ctx->r3;
    // 0x8022CE1C: sh          $zero, 0x350($a0)
    MEM_H(0X350, ctx->r4) = 0;
    // 0x8022CE20: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
    // 0x8022CE24: sh          $v0, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r2;
L_8022CE28:
    // 0x8022CE28: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022CE2C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CE30: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022CE34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CE38: bgez        $v0, L_8022CE4C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022CE3C: nop
    
            goto L_8022CE4C;
    }
    // 0x8022CE3C: nop

    // 0x8022CE40: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8022CE44: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022CE48: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_8022CE4C:
    // 0x8022CE4C: jr          $ra
    // 0x8022CE50: nop

    TRACE_RETURN()
    return;
    // 0x8022CE50: nop

;}
RECOMP_FUNC void func_802303B8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802303B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802303BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802303C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802303C4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802303C8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802303CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802303D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802303D4: jal         0x80050294
    // 0x802303D8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802303D8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x802303DC: lbu         $v1, 0x64($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X64);
    // 0x802303E0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802303E4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802303E8: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x802303EC: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x802303F0: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x802303F4: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x802303F8: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x802303FC: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80230400: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80230404: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80230408: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8023040C: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80230410: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80230414: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x80230418: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8023041C: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x80230420: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x80230424: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x80230428: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x8023042C: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80230430: bne         $v1, $zero, L_8023046C
    if (ctx->r3 != 0) {
        // 0x80230434: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_8023046C;
    }
    // 0x80230434: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80230438: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x8023043C: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x80230440: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80230444: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80230448: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x8023044C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80230450: beq         $v1, $v0, L_8023046C
    if (ctx->r3 == ctx->r2) {
        // 0x80230454: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8023046C;
    }
    // 0x80230454: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80230458: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x8023045C: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x80230460: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x80230464: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80230468: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_8023046C:
    // 0x8023046C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80230470: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80230474: jr          $ra
    // 0x80230478: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230478: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80236420_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236420: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80236424: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80236428: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023642C: lui         $a3, 0x3D48
    ctx->r7 = S32(0X3D48 << 16);
    // 0x80236430: ori         $a3, $a3, 0xE
    ctx->r7 = ctx->r7 | 0XE;
    // 0x80236434: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80236438: lhu         $a0, 0x1C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1C);
    // 0x8023643C: lhu         $a1, 0x20($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X20);
    // 0x80236440: lhu         $a2, 0x24($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X24);
    // 0x80236444: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80236448: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x8023644C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80236450: sw          $a3, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r7;
    // 0x80236454: sw          $v1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r3;
    // 0x80236458: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8023645C: sh          $a0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r4;
    // 0x80236460: sh          $a0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r4;
    // 0x80236464: sh          $a1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r5;
    // 0x80236468: sh          $a1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r5;
    // 0x8023646C: sh          $a2, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r6;
    // 0x80236470: beq         $v0, $zero, L_802364AC
    if (ctx->r2 == 0) {
        // 0x80236474: sh          $a2, 0x94($s0)
        MEM_H(0X94, ctx->r16) = ctx->r6;
            goto L_802364AC;
    }
    // 0x80236474: sh          $a2, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r6;
    // 0x80236478: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8023647C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236480: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80236484: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236488: lhu         $v1, 0xD58($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XD58);
    // 0x8023648C: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80236490: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236494: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80236498: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023649C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802364A0: lhu         $v0, 0xD5A($at)
    ctx->r2 = MEM_HU(ctx->r1, 0XD5A);
    // 0x802364A4: j           L_802364DC
    // 0x802364A8: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_802364DC;
    // 0x802364A8: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_802364AC:
    // 0x802364AC: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x802364B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802364B4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802364B8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802364BC: lhu         $v1, 0xD40($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XD40);
    // 0x802364C0: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x802364C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802364C8: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x802364CC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802364D0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802364D4: lhu         $v0, 0xD42($at)
    ctx->r2 = MEM_HU(ctx->r1, 0XD42);
    // 0x802364D8: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_802364DC:
    // 0x802364DC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802364E0: jal         0x8004F144
    // 0x802364E4: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802364E4: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    after_0:
    // 0x802364E8: beq         $v0, $zero, L_802364F8
    if (ctx->r2 == 0) {
        // 0x802364EC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802364F8;
    }
    // 0x802364EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802364F0: jal         0x80236B40
    // 0x802364F4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_80236B40_ovl4(rdram, ctx);
        goto after_1;
    // 0x802364F4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_1:
L_802364F8:
    // 0x802364F8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x802364FC: jal         0x8004F4F8
    // 0x80236500: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x80236500: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80236504: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80236508: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023650C: jr          $ra
    // 0x80236510: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80236510: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022BD38_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BD38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BD3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BD40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BD44: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022BD48: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022BD4C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022BD50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BD54: beq         $v1, $v0, L_8022BDF4
    if (ctx->r3 == ctx->r2) {
        // 0x8022BD58: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022BDF4;
    }
    // 0x8022BD58: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022BD5C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022BD60: beql        $v0, $zero, L_8022BD78
    if (ctx->r2 == 0) {
        // 0x8022BD64: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022BD78;
    }
    goto skip_0;
    // 0x8022BD64: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022BD68: beq         $v1, $zero, L_8022BD88
    if (ctx->r3 == 0) {
        // 0x8022BD6C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022BD88;
    }
    // 0x8022BD6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BD70: j           L_8022BF04
    // 0x8022BD74: nop

        goto L_8022BF04;
    // 0x8022BD74: nop

L_8022BD78:
    // 0x8022BD78: beq         $v1, $v0, L_8022BEC0
    if (ctx->r3 == ctx->r2) {
        // 0x8022BD7C: nop
    
            goto L_8022BEC0;
    }
    // 0x8022BD7C: nop

    // 0x8022BD80: j           L_8022BF04
    // 0x8022BD84: nop

        goto L_8022BF04;
    // 0x8022BD84: nop

L_8022BD88:
    // 0x8022BD88: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022BD8C: addiu       $v0, $zero, -0x1E
    ctx->r2 = ADD32(0, -0X1E);
    // 0x8022BD90: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022BD94: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022BD98: jal         0x8004F144
    // 0x8022BD9C: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022BD9C: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022BDA0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022BDA4: beq         $v1, $zero, L_8022BDD0
    if (ctx->r3 == 0) {
        // 0x8022BDA8: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8022BDD0;
    }
    // 0x8022BDA8: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022BDAC: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    // 0x8022BDB0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022BDB4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022BDB8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022BDBC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022BDC0: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022BDC4: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8022BDC8: jal         0x8009A3B4
    // 0x8022BDCC: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022BDCC: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_1:
L_8022BDD0:
    // 0x8022BDD0: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022BDD4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8022BDD8: sb          $v1, 0xFB($s0)
    MEM_B(0XFB, ctx->r16) = ctx->r3;
    // 0x8022BDDC: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x8022BDE0: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x8022BDE4: sh          $v1, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r3;
    // 0x8022BDE8: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022BDEC: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8022BDF0: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_8022BDF4:
    // 0x8022BDF4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022BDF8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022BDFC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022BE00: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BE04: bgez        $v0, L_8022BE88
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022BE08: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022BE88;
    }
    // 0x8022BE08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BE0C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022BE10: lbu         $a0, 0xF($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XF);
    // 0x8022BE14: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022BE18: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022BE1C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022BE20: ori         $a0, $a0, 0x4
    ctx->r4 = ctx->r4 | 0X4;
    // 0x8022BE24: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022BE28: jal         0x8004F144
    // 0x8022BE2C: sb          $a0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r4;
    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x8022BE2C: sb          $a0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r4;
    after_2:
    // 0x8022BE30: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022BE34: beq         $v1, $zero, L_8022BE60
    if (ctx->r3 == 0) {
        // 0x8022BE38: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8022BE60;
    }
    // 0x8022BE38: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022BE3C: addiu       $a1, $s0, 0x188
    ctx->r5 = ADD32(ctx->r16, 0X188);
    // 0x8022BE40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022BE44: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022BE48: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022BE4C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022BE50: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022BE54: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022BE58: jal         0x8009A3B4
    // 0x8022BE5C: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022BE5C: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_3:
L_8022BE60:
    // 0x8022BE60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BE64: jal         0x8007A1B8
    // 0x8022BE68: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_4;
    // 0x8022BE68: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    after_4:
    // 0x8022BE6C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022BE70: andi        $v0, $v0, 0x42
    ctx->r2 = ctx->r2 & 0X42;
    // 0x8022BE74: bne         $v0, $zero, L_8022BEC0
    if (ctx->r2 != 0) {
        // 0x8022BE78: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022BEC0;
    }
    // 0x8022BE78: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022BE7C: lw          $v1, 0x4C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4C);
    // 0x8022BE80: j           L_8022BEC0
    // 0x8022BE84: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
        goto L_8022BEC0;
    // 0x8022BE84: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
L_8022BE88:
    // 0x8022BE88: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022BE8C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022BE90: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022BE94: sll         $a2, $a2, 20
    ctx->r6 = S32(ctx->r6 << 20);
    // 0x8022BE98: jal         0x8004DA90
    // 0x8022BE9C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x8022BE9C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_5:
    // 0x8022BEA0: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022BEA4: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022BEA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BEAC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BEB0: jal         0x80040F30
    // 0x8022BEB4: sh          $v0, 0x46($a0)
    MEM_H(0X46, ctx->r4) = ctx->r2;
    func_80040F30_1C330(rdram, ctx);
        goto after_6;
    // 0x8022BEB4: sh          $v0, 0x46($a0)
    MEM_H(0X46, ctx->r4) = ctx->r2;
    after_6:
    // 0x8022BEB8: j           L_8022BF04
    // 0x8022BEBC: nop

        goto L_8022BF04;
    // 0x8022BEBC: nop

L_8022BEC0:
    // 0x8022BEC0: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x8022BEC4: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x8022BEC8: bne         $v0, $zero, L_8022BEFC
    if (ctx->r2 != 0) {
        // 0x8022BECC: andi        $v0, $v1, 0x2
        ctx->r2 = ctx->r3 & 0X2;
            goto L_8022BEFC;
    }
    // 0x8022BECC: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x8022BED0: beq         $v0, $zero, L_8022BF04
    if (ctx->r2 == 0) {
        // 0x8022BED4: nop
    
            goto L_8022BF04;
    }
    // 0x8022BED4: nop

    // 0x8022BED8: jal         0x8004F418
    // 0x8022BEDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_7;
    // 0x8022BEDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022BEE0: lw          $a0, 0x50($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X50);
    // 0x8022BEE4: jal         0x8004F5C4
    // 0x8022BEE8: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_8;
    // 0x8022BEE8: nop

    after_8:
    // 0x8022BEEC: jal         0x8004F5C4
    // 0x8022BEF0: lw          $a0, 0x54($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X54);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_9;
    // 0x8022BEF0: lw          $a0, 0x54($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X54);
    after_9:
    // 0x8022BEF4: j           L_8022BF04
    // 0x8022BEF8: nop

        goto L_8022BF04;
    // 0x8022BEF8: nop

L_8022BEFC:
    // 0x8022BEFC: jal         0x8004F418
    // 0x8022BF00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_10;
    // 0x8022BF00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
L_8022BF04:
    // 0x8022BF04: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022BF08: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022BF0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BF10: jr          $ra
    // 0x8022BF14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022BF14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231D54_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231D54: lw          $v0, 0x35C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X35C);
    // 0x80231D58: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80231D5C: beq         $v0, $zero, L_80231D6C
    if (ctx->r2 == 0) {
        // 0x80231D60: nop
    
            goto L_80231D6C;
    }
    // 0x80231D60: nop

    // 0x80231D64: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
    // 0x80231D68: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
L_80231D6C:
    // 0x80231D6C: jr          $ra
    // 0x80231D70: nop

    TRACE_RETURN()
    return;
    // 0x80231D70: nop

;}
RECOMP_FUNC void func_80233148_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233148: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023314C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233150: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233154: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80233158: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8023315C: lui         $a0, 0xFF
    ctx->r4 = S32(0XFF << 16);
    // 0x80233160: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x80233164: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80233168: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8023316C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80233170: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80233174: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80233178: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8023317C: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80233180: lw          $a2, 0x368($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X368);
    // 0x80233184: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233188: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023318C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80233190: and         $a1, $a2, $a0
    ctx->r5 = ctx->r6 & ctx->r4;
    // 0x80233194: lbu         $s4, 0x9($v0)
    ctx->r20 = MEM_BU(ctx->r2, 0X9);
    // 0x80233198: beq         $a1, $zero, L_80233288
    if (ctx->r5 == 0) {
        // 0x8023319C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80233288;
    }
    // 0x8023319C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x802331A0: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x802331A4: and         $v0, $a2, $v0
    ctx->r2 = ctx->r6 & ctx->r2;
    // 0x802331A8: beq         $v0, $zero, L_8023328C
    if (ctx->r2 == 0) {
        // 0x802331AC: sll         $v0, $s2, 24
        ctx->r2 = S32(ctx->r18 << 24);
            goto L_8023328C;
    }
    // 0x802331AC: sll         $v0, $s2, 24
    ctx->r2 = S32(ctx->r18 << 24);
    // 0x802331B0: lhu         $v0, 0x35A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X35A);
    // 0x802331B4: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x802331B8: lhu         $a0, 0x6E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X6E);
    // 0x802331BC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x802331C0: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x802331C4: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x802331C8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802331CC: sh          $v0, 0x35A($s0)
    MEM_H(0X35A, ctx->r16) = ctx->r2;
    // 0x802331D0: bgez        $v1, L_802331DC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x802331D4: sh          $a0, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r4;
            goto L_802331DC;
    }
    // 0x802331D4: sh          $a0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r4;
    // 0x802331D8: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
L_802331DC:
    // 0x802331DC: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x802331E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802331E4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802331E8: addiu       $a1, $s0, 0x370
    ctx->r5 = ADD32(ctx->r16, 0X370);
    // 0x802331EC: jal         0x8004FEA0
    // 0x802331F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_0;
    // 0x802331F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x802331F4: lhu         $v1, 0x35A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35A);
    // 0x802331F8: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x802331FC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80233200: slt         $v1, $s4, $v1
    ctx->r3 = SIGNED(ctx->r20) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80233204: bne         $v1, $zero, L_80233218
    if (ctx->r3 != 0) {
        // 0x80233208: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_80233218;
    }
    // 0x80233208: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8023320C: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x80233210: bnel        $v0, $zero, L_8023325C
    if (ctx->r2 != 0) {
        // 0x80233214: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_8023325C;
    }
    goto skip_0;
    // 0x80233214: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    skip_0:
L_80233218:
    // 0x80233218: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8023321C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80233220: jal         0x8002A33C
    // 0x80233224: sh          $zero, 0x35A($s0)
    MEM_H(0X35A, ctx->r16) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80233224: sh          $zero, 0x35A($s0)
    MEM_H(0X35A, ctx->r16) = 0;
    after_1:
    // 0x80233228: lw          $v0, 0x354($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X354);
    // 0x8023322C: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80233230: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80233234: beq         $v0, $zero, L_8023324C
    if (ctx->r2 == 0) {
        // 0x80233238: addiu       $s2, $zero, -0x1
        ctx->r18 = ADD32(0, -0X1);
            goto L_8023324C;
    }
    // 0x80233238: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x8023323C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80233240: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80233244: j           L_80233268
    // 0x80233248: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
        goto L_80233268;
    // 0x80233248: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_8023324C:
    // 0x8023324C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80233250: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x80233254: j           L_80233268
    // 0x80233258: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
        goto L_80233268;
    // 0x80233258: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_8023325C:
    // 0x8023325C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80233260: jal         0x8002A33C
    // 0x80233264: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80233264: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
L_80233268:
    // 0x80233268: lw          $v1, 0xC($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XC);
    // 0x8023326C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80233270: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80233274: beq         $v0, $zero, L_80233280
    if (ctx->r2 == 0) {
        // 0x80233278: addiu       $v0, $v1, 0x800
        ctx->r2 = ADD32(ctx->r3, 0X800);
            goto L_80233280;
    }
    // 0x80233278: addiu       $v0, $v1, 0x800
    ctx->r2 = ADD32(ctx->r3, 0X800);
    // 0x8023327C: sw          $v0, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r2;
L_80233280:
    // 0x80233280: lhu         $v0, 0xE($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XE);
    // 0x80233284: sw          $v0, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r2;
L_80233288:
    // 0x80233288: sll         $v0, $s2, 24
    ctx->r2 = S32(ctx->r18 << 24);
L_8023328C:
    // 0x8023328C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80233290: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80233294: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80233298: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023329C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802332A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802332A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802332A8: jr          $ra
    // 0x802332AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802332AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80236BD0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236BD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236BD4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236BD8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80236BDC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236BE0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236BE4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236BE8: lw          $v0, 0xD90($at)
    ctx->r2 = MEM_W(ctx->r1, 0XD90);
    // 0x80236BEC: jalr        $v0
    // 0x80236BF0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80236BF0: nop

    after_0:
    // 0x80236BF4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236BF8: jr          $ra
    // 0x80236BFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236BFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235F20_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235F20: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80235F24: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80235F28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235F2C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80235F30: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235F34: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235F38: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235F3C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235F40: lw          $v0, 0xD70($at)
    ctx->r2 = MEM_W(ctx->r1, 0XD70);
    // 0x80235F44: jalr        $v0
    // 0x80235F48: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80235F48: nop

    after_0:
    // 0x80235F4C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80235F50: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80235F54: bne         $v0, $zero, L_80235F68
    if (ctx->r2 != 0) {
        // 0x80235F58: nop
    
            goto L_80235F68;
    }
    // 0x80235F58: nop

    // 0x80235F5C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80235F60: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235F64: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
L_80235F68:
    // 0x80235F68: lb          $v1, 0xF($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XF);
    // 0x80235F6C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80235F70: beql        $v1, $v0, L_80235F78
    if (ctx->r3 == ctx->r2) {
        // 0x80235F74: sb          $zero, 0xF($s0)
        MEM_B(0XF, ctx->r16) = 0;
            goto L_80235F78;
    }
    goto skip_0;
    // 0x80235F74: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    skip_0:
L_80235F78:
    // 0x80235F78: lhu         $v0, 0x90($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X90);
    // 0x80235F7C: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x80235F80: lhu         $v0, 0x92($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X92);
    // 0x80235F84: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x80235F88: lhu         $v0, 0x94($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X94);
    // 0x80235F8C: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    // 0x80235F90: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80235F94: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80235F98: bne         $v0, $zero, L_80236000
    if (ctx->r2 != 0) {
        // 0x80235F9C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236000;
    }
    // 0x80235F9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235FA0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80235FA4: beq         $v0, $zero, L_80235FC0
    if (ctx->r2 == 0) {
        // 0x80235FA8: addiu       $a1, $zero, 0x20
        ctx->r5 = ADD32(0, 0X20);
            goto L_80235FC0;
    }
    // 0x80235FA8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80235FAC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80235FB0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80235FB4: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80235FB8: j           L_80235FD0
    // 0x80235FBC: addiu       $a3, $zero, 0x4000
    ctx->r7 = ADD32(0, 0X4000);
        goto L_80235FD0;
    // 0x80235FBC: addiu       $a3, $zero, 0x4000
    ctx->r7 = ADD32(0, 0X4000);
L_80235FC0:
    // 0x80235FC0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80235FC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80235FC8: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80235FCC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
L_80235FD0:
    // 0x80235FD0: addiu       $v0, $s0, 0x9C
    ctx->r2 = ADD32(ctx->r16, 0X9C);
    // 0x80235FD4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80235FD8: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80235FDC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80235FE0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80235FE4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80235FE8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80235FEC: jal         0x80051E18
    // 0x80235FF0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x80235FF0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x80235FF4: jal         0x800472C0
    // 0x80235FF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800472C0_226C0(rdram, ctx);
        goto after_2;
    // 0x80235FF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80235FFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80236000:
    // 0x80236000: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x80236004: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80236008: jal         0x8003B564
    // 0x8023600C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_3;
    // 0x8023600C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x80236010: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80236014: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80236018: jr          $ra
    // 0x8023601C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023601C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80239E70_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239E70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239E74: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80239E78: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80239E7C: lbu         $v0, 0x9($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X9);
    // 0x80239E80: bne         $v0, $zero, L_80239E98
    if (ctx->r2 != 0) {
        // 0x80239E84: lui         $a2, 0xFFF5
        ctx->r6 = S32(0XFFF5 << 16);
            goto L_80239E98;
    }
    // 0x80239E84: lui         $a2, 0xFFF5
    ctx->r6 = S32(0XFFF5 << 16);
    // 0x80239E88: jal         0x8004F5C4
    // 0x80239E8C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80239E8C: nop

    after_0:
    // 0x80239E90: j           L_80239ECC
    // 0x80239E94: nop

        goto L_80239ECC;
    // 0x80239E94: nop

L_80239E98:
    // 0x80239E98: lbu         $a0, 0xC($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0XC);
    // 0x80239E9C: ori         $a2, $a2, 0xF5F6
    ctx->r6 = ctx->r6 | 0XF5F6;
    // 0x80239EA0: lbu         $a1, 0x9($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0X9);
    // 0x80239EA4: lw          $v0, 0x18($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X18);
    // 0x80239EA8: lhu         $v1, 0x24($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X24);
    // 0x80239EAC: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80239EB0: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80239EB4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80239EB8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80239EBC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80239EC0: sw          $v0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r2;
    // 0x80239EC4: sh          $v1, 0x24($a3)
    MEM_H(0X24, ctx->r7) = ctx->r3;
    // 0x80239EC8: sb          $a1, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r5;
L_80239ECC:
    // 0x80239ECC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80239ED0: jr          $ra
    // 0x80239ED4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239ED4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80239ED8: nop

    // 0x80239EDC: nop

;}
RECOMP_FUNC void func_8023AE80_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AE80: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8023AE84: sw          $s2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r18;
    // 0x8023AE88: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023AE8C: sw          $ra, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r31;
    // 0x8023AE90: sw          $s1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r17;
    // 0x8023AE94: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    // 0x8023AE98: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x8023AE9C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023AEA0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023AEA4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023AEA8: lw          $v0, 0xFD0($at)
    ctx->r2 = MEM_W(ctx->r1, 0XFD0);
    // 0x8023AEAC: jalr        $v0
    // 0x8023AEB0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023AEB0: nop

    after_0:
    // 0x8023AEB4: lb          $v1, 0xD($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XD);
    // 0x8023AEB8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023AEBC: bne         $v1, $v0, L_8023AEF0
    if (ctx->r3 != ctx->r2) {
        // 0x8023AEC0: nop
    
            goto L_8023AEF0;
    }
    // 0x8023AEC0: nop

    // 0x8023AEC4: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8023AEC8: lw          $a0, 0x44($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X44);
    // 0x8023AECC: lw          $v1, 0x30($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X30);
    // 0x8023AED0: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8023AED4: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8023AED8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8023AEDC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023AEE0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023AEE4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023AEE8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023AEEC: sw          $v1, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = ctx->r3;
L_8023AEF0:
    // 0x8023AEF0: jal         0x8006033C
    // 0x8023AEF4: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8023AEF4: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_1:
    // 0x8023AEF8: beq         $v0, $zero, L_8023AF18
    if (ctx->r2 == 0) {
        // 0x8023AEFC: addiu       $v0, $zero, 0x17
        ctx->r2 = ADD32(0, 0X17);
            goto L_8023AF18;
    }
    // 0x8023AEFC: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x8023AF00: lb          $v1, 0xD($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XD);
    // 0x8023AF04: bne         $v1, $v0, L_8023AF18
    if (ctx->r3 != ctx->r2) {
        // 0x8023AF08: nop
    
            goto L_8023AF18;
    }
    // 0x8023AF08: nop

    // 0x8023AF0C: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8023AF10: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8023AF14: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
L_8023AF18:
    // 0x8023AF18: jal         0x8006033C
    // 0x8023AF1C: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8023AF1C: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_2:
    // 0x8023AF20: bne         $v0, $zero, L_8023B1B0
    if (ctx->r2 != 0) {
        // 0x8023AF24: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_8023B1B0;
    }
    // 0x8023AF24: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023AF28: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x8023AF2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023AF30: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8023AF34: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x8023AF38: sh          $zero, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = 0;
    // 0x8023AF3C: jal         0x8002C678
    // 0x8023AF40: sh          $zero, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = 0;
    func_8002C678_7A78(rdram, ctx);
        goto after_3;
    // 0x8023AF40: sh          $zero, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = 0;
    after_3:
    // 0x8023AF44: lb          $v0, 0xC($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC);
    // 0x8023AF48: lbu         $a0, 0x3($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X3);
    // 0x8023AF4C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023AF50: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x8023AF54: sll         $a0, $a0, 11
    ctx->r4 = S32(ctx->r4 << 11);
    // 0x8023AF58: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x8023AF5C: jal         0x800319B4
    // 0x8023AF60: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800319B4_CDB4(rdram, ctx);
        goto after_4;
    // 0x8023AF60: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_4:
    // 0x8023AF64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023AF68: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x8023AF6C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023AF70: jal         0x800308E8
    // 0x8023AF74: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_800308E8_BCE8(rdram, ctx);
        goto after_5;
    // 0x8023AF74: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_5:
    // 0x8023AF78: lh          $v1, 0x38($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X38);
    // 0x8023AF7C: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x8023AF80: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023AF84: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8023AF88: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x8023AF8C: lh          $v1, 0x3A($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X3A);
    // 0x8023AF90: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x8023AF94: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023AF98: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8023AF9C: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8023AFA0: lh          $v1, 0x3C($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X3C);
    // 0x8023AFA4: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x8023AFA8: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x8023AFAC: addiu       $s0, $s0, 0x4760
    ctx->r16 = ADD32(ctx->r16, 0X4760);
    // 0x8023AFB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023AFB4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023AFB8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8023AFBC: jal         0x80031E5C
    // 0x8023AFC0: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    func_80031E5C_D25C(rdram, ctx);
        goto after_6;
    // 0x8023AFC0: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    after_6:
    // 0x8023AFC4: jal         0x80031E94
    // 0x8023AFC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80031E94_D294(rdram, ctx);
        goto after_7;
    // 0x8023AFC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8023AFCC: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8023AFD0: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8023AFD4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023AFD8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8023AFDC: jal         0x8009A3B4
    // 0x8023AFE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8023AFE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8023AFE4: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8023AFE8: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8023AFEC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023AFF0: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8023AFF4: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8023AFF8: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x8023AFFC: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x8023B000: jal         0x80031F0C
    // 0x8023B004: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_9;
    // 0x8023B004: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_9:
    // 0x8023B008: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8023B00C: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8023B010: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x8023B014: jal         0x8009A3B4
    // 0x8023B018: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x8023B018: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_10:
    // 0x8023B01C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023B020: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023B024: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8023B028: jal         0x8009A3B4
    // 0x8023B02C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x8023B02C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_11:
    // 0x8023B030: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8023B034: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8023B038: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023B03C: jal         0x8009A3B4
    // 0x8023B040: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x8023B040: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_12:
    // 0x8023B044: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8023B048: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8023B04C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023B050: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8023B054: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8023B058: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x8023B05C: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x8023B060: jal         0x80031F0C
    // 0x8023B064: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_13;
    // 0x8023B064: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_13:
    // 0x8023B068: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x8023B06C: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8023B070: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x8023B074: jal         0x8009A3B4
    // 0x8023B078: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x8023B078: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_14:
    // 0x8023B07C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8023B080: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023B084: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8023B088: jal         0x8009A3B4
    // 0x8023B08C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x8023B08C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_15:
    // 0x8023B090: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8023B094: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8023B098: addiu       $a1, $s2, 0x38
    ctx->r5 = ADD32(ctx->r18, 0X38);
    // 0x8023B09C: jal         0x8009A3B4
    // 0x8023B0A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_16;
    // 0x8023B0A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_16:
    // 0x8023B0A4: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8023B0A8: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8023B0AC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023B0B0: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8023B0B4: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8023B0B8: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x8023B0BC: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x8023B0C0: jal         0x80031F0C
    // 0x8023B0C4: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_17;
    // 0x8023B0C4: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_17:
    // 0x8023B0C8: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8023B0CC: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8023B0D0: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x8023B0D4: jal         0x8009A3B4
    // 0x8023B0D8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_18;
    // 0x8023B0D8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_18:
    // 0x8023B0DC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x8023B0E0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023B0E4: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8023B0E8: jal         0x8009A3B4
    // 0x8023B0EC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_19;
    // 0x8023B0EC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_19:
    // 0x8023B0F0: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x8023B0F4: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x8023B0F8: beq         $a2, $a1, L_8023B1B0
    if (ctx->r6 == ctx->r5) {
        // 0x8023B0FC: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_8023B1B0;
    }
    // 0x8023B0FC: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023B100: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x8023B104: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8023B108: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x8023B10C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8023B110: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8023B114: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023B118: mflo        $v0
    ctx->r2 = lo;
    // 0x8023B11C: subu        $v1, $a2, $a1
    ctx->r3 = SUB32(ctx->r6, ctx->r5);
    // 0x8023B120: nop

    // 0x8023B124: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x8023B128: bne         $v1, $zero, L_8023B134
    if (ctx->r3 != 0) {
        // 0x8023B12C: nop
    
            goto L_8023B134;
    }
    // 0x8023B12C: nop

    // 0x8023B130: break       7
    do_break(2149822768);
L_8023B134:
    // 0x8023B134: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023B138: bne         $v1, $at, L_8023B14C
    if (ctx->r3 != ctx->r1) {
        // 0x8023B13C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023B14C;
    }
    // 0x8023B13C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023B140: bne         $v0, $at, L_8023B14C
    if (ctx->r2 != ctx->r1) {
        // 0x8023B144: nop
    
            goto L_8023B14C;
    }
    // 0x8023B144: nop

    // 0x8023B148: break       6
    do_break(2149822792);
L_8023B14C:
    // 0x8023B14C: mflo        $v0
    ctx->r2 = lo;
    // 0x8023B150: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x8023B154: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023B158: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023B15C: beq         $v0, $zero, L_8023B1B0
    if (ctx->r2 == 0) {
        // 0x8023B160: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_8023B1B0;
    }
    // 0x8023B160: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023B164: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x8023B168: lh          $a0, 0x18($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X18);
    // 0x8023B16C: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8023B170: beq         $v0, $zero, L_8023B18C
    if (ctx->r2 == 0) {
        // 0x8023B174: slt         $v0, $a0, $v1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8023B18C;
    }
    // 0x8023B174: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023B178: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x8023B17C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023B180: bne         $v0, $zero, L_8023B1A4
    if (ctx->r2 != 0) {
        // 0x8023B184: lui         $v0, 0x240
        ctx->r2 = S32(0X240 << 16);
            goto L_8023B1A4;
    }
    // 0x8023B184: lui         $v0, 0x240
    ctx->r2 = S32(0X240 << 16);
    // 0x8023B188: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
L_8023B18C:
    // 0x8023B18C: beq         $v0, $zero, L_8023B1B0
    if (ctx->r2 == 0) {
        // 0x8023B190: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_8023B1B0;
    }
    // 0x8023B190: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023B194: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x8023B198: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023B19C: beq         $v0, $zero, L_8023B1AC
    if (ctx->r2 == 0) {
        // 0x8023B1A0: lui         $v0, 0x240
        ctx->r2 = S32(0X240 << 16);
            goto L_8023B1AC;
    }
    // 0x8023B1A0: lui         $v0, 0x240
    ctx->r2 = S32(0X240 << 16);
L_8023B1A4:
    // 0x8023B1A4: j           L_8023B1B4
    // 0x8023B1A8: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
        goto L_8023B1B4;
    // 0x8023B1A8: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
L_8023B1AC:
    // 0x8023B1AC: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_8023B1B0:
    // 0x8023B1B0: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_8023B1B4:
    // 0x8023B1B4: sw          $v0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r2;
    // 0x8023B1B8: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    // 0x8023B1BC: lw          $s2, 0x98($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X98);
    // 0x8023B1C0: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
    // 0x8023B1C4: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x8023B1C8: jr          $ra
    // 0x8023B1CC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    TRACE_RETURN()
    return;
    // 0x8023B1CC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_80237978_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237978: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023797C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80237980: jal         0x8004F4F8
    // 0x80237984: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80237984: nop

    after_0:
    // 0x80237988: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023798C: jr          $ra
    // 0x80237990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232D64_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232D64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232D68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232D6C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232D70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232D74: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80232D78: beq         $v0, $zero, L_80232DA0
    if (ctx->r2 == 0) {
        // 0x80232D7C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80232DA0;
    }
    // 0x80232D7C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232D80: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232D84: addiu       $a1, $s0, 0x398
    ctx->r5 = ADD32(ctx->r16, 0X398);
    // 0x80232D88: jal         0x8004F820
    // 0x80232D8C: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80232D8C: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    after_0:
    // 0x80232D90: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80232D94: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232D98: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80232D9C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80232DA0:
    // 0x80232DA0: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80232DA4: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x80232DA8: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80232DAC: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80232DB0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80232DB4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80232DB8: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80232DBC: sb          $a0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r4;
    // 0x80232DC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232DC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232DC8: jr          $ra
    // 0x80232DCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232DCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B754_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B754: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023B758: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8023B75C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B760: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023B764: lhu         $v0, 0x2C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2C);
    // 0x8023B768: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8023B76C: beq         $v0, $zero, L_8023B77C
    if (ctx->r2 == 0) {
        // 0x8023B770: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_8023B77C;
    }
    // 0x8023B770: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023B774: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8023B778: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
L_8023B77C:
    // 0x8023B77C: jal         0x800A3450
    // 0x8023B780: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8023B780: nop

    after_0:
    // 0x8023B784: lhu         $v1, 0x2C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2C);
    // 0x8023B788: andi        $v1, $v1, 0x2
    ctx->r3 = ctx->r3 & 0X2;
    // 0x8023B78C: beq         $v1, $zero, L_8023B79C
    if (ctx->r3 == 0) {
        // 0x8023B790: sh          $v0, 0x2E($s0)
        MEM_H(0X2E, ctx->r16) = ctx->r2;
            goto L_8023B79C;
    }
    // 0x8023B790: sh          $v0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r2;
    // 0x8023B794: jal         0x8023BA8C
    // 0x8023B798: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023BA8C_ovl4(rdram, ctx);
        goto after_1;
    // 0x8023B798: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8023B79C:
    // 0x8023B79C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023B7A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B7A4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B7A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B7AC: lw          $v0, 0xFFC($at)
    ctx->r2 = MEM_W(ctx->r1, 0XFFC);
    // 0x8023B7B0: jalr        $v0
    // 0x8023B7B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8023B7B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023B7B8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023B7BC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023B7C0: beq         $v0, $zero, L_8023B878
    if (ctx->r2 == 0) {
        // 0x8023B7C4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023B878;
    }
    // 0x8023B7C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B7C8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8023B7CC: beq         $v1, $v0, L_8023B7E4
    if (ctx->r3 == ctx->r2) {
        // 0x8023B7D0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023B7E4;
    }
    // 0x8023B7D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B7D4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8023B7D8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8023B7DC: jal         0x80047284
    // 0x8023B7E0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_3;
    // 0x8023B7E0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
L_8023B7E4:
    // 0x8023B7E4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023B7E8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023B7EC: beq         $v0, $zero, L_8023B878
    if (ctx->r2 == 0) {
        // 0x8023B7F0: nop
    
            goto L_8023B878;
    }
    // 0x8023B7F0: nop

    // 0x8023B7F4: lhu         $v0, 0x2C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2C);
    // 0x8023B7F8: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8023B7FC: beq         $v0, $zero, L_8023B878
    if (ctx->r2 == 0) {
        // 0x8023B800: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_8023B878;
    }
    // 0x8023B800: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023B804: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
    // 0x8023B808: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023B80C: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    // 0x8023B810: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x8023B814: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x8023B818: addiu       $v0, $s0, 0x30
    ctx->r2 = ADD32(ctx->r16, 0X30);
    // 0x8023B81C: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x8023B820: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023B824: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8023B828: srl         $v1, $v1, 4
    ctx->r3 = S32(U32(ctx->r3) >> 4);
    // 0x8023B82C: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x8023B830: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B834: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023B838: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8023B83C: lw          $a1, 0x1004($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1004);
    // 0x8023B840: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8023B844: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023B848: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023B84C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8023B850: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x8023B854: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x8023B858: addu        $a3, $a3, $v1
    ctx->r7 = ADD32(ctx->r7, ctx->r3);
    // 0x8023B85C: lw          $a3, 0x100C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X100C);
    // 0x8023B860: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8023B864: jal         0x80051E18
    // 0x8023B868: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    func_80051E18_2D218(rdram, ctx);
        goto after_4;
    // 0x8023B868: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    after_4:
    // 0x8023B86C: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
    // 0x8023B870: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x8023B874: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
L_8023B878:
    // 0x8023B878: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8023B87C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8023B880: jr          $ra
    // 0x8023B884: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023B884: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80233BD0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233BD0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80233BD4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80233BD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233BDC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80233BE0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80233BE4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80233BE8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80233BEC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80233BF0: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80233BF4: beq         $v1, $zero, L_80233C10
    if (ctx->r3 == 0) {
        // 0x80233BF8: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80233C10;
    }
    // 0x80233BF8: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80233BFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233C00: beq         $v1, $v0, L_80233C28
    if (ctx->r3 == ctx->r2) {
        // 0x80233C04: nop
    
            goto L_80233C28;
    }
    // 0x80233C04: nop

    // 0x80233C08: j           L_80233E04
    // 0x80233C0C: nop

        goto L_80233E04;
    // 0x80233C0C: nop

L_80233C10:
    // 0x80233C10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233C14: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80233C18: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80233C1C: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80233C20: sh          $v0, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r2;
    // 0x80233C24: sh          $zero, 0x4E8($s0)
    MEM_H(0X4E8, ctx->r16) = 0;
L_80233C28:
    // 0x80233C28: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80233C2C: lui         $v0, 0xC
    ctx->r2 = S32(0XC << 16);
    // 0x80233C30: ori         $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 | 0X7FFF;
    // 0x80233C34: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80233C38: bne         $v0, $zero, L_80233C90
    if (ctx->r2 != 0) {
        // 0x80233C3C: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_80233C90;
    }
    // 0x80233C3C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80233C40: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80233C44: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80233C48: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x80233C4C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80233C50: lh          $v1, 0x56($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X56);
    // 0x80233C54: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x80233C58: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80233C5C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80233C60: jal         0x8004FAEC
    // 0x80233C64: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_0;
    // 0x80233C64: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x80233C68: beq         $v0, $zero, L_80233C78
    if (ctx->r2 == 0) {
        // 0x80233C6C: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80233C78;
    }
    // 0x80233C6C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80233C70: j           L_80233C88
    // 0x80233C74: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80233C88;
    // 0x80233C74: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80233C78:
    // 0x80233C78: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80233C7C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80233C80: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80233C84: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80233C88:
    // 0x80233C88: j           L_80233E04
    // 0x80233C8C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80233E04;
    // 0x80233C8C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80233C90:
    // 0x80233C90: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80233C94: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80233C98: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80233C9C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233CA0: bgezl       $v0, L_80233CFC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80233CA4: addiu       $s1, $s0, 0x14
        ctx->r17 = ADD32(ctx->r16, 0X14);
            goto L_80233CFC;
    }
    goto skip_0;
    // 0x80233CA4: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    skip_0:
    // 0x80233CA8: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80233CAC: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x80233CB0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80233CB4: lh          $v1, 0x56($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X56);
    // 0x80233CB8: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x80233CBC: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80233CC0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80233CC4: jal         0x8004FAEC
    // 0x80233CC8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_1;
    // 0x80233CC8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x80233CCC: beq         $v0, $zero, L_80233CDC
    if (ctx->r2 == 0) {
        // 0x80233CD0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80233CDC;
    }
    // 0x80233CD0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80233CD4: j           L_80233CEC
    // 0x80233CD8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80233CEC;
    // 0x80233CD8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80233CDC:
    // 0x80233CDC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80233CE0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80233CE4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80233CE8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80233CEC:
    // 0x80233CEC: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80233CF0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80233CF4: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
    // 0x80233CF8: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
L_80233CFC:
    // 0x80233CFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80233D00: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80233D04: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80233D08: jal         0x8004F820
    // 0x80233D0C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80233D0C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_2:
    // 0x80233D10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233D14: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80233D18: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80233D1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233D20: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80233D24: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233D28: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80233D2C: jal         0x8004DA90
    // 0x80233D30: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x80233D30: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_3:
    // 0x80233D34: jal         0x80040F30
    // 0x80233D38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_4;
    // 0x80233D38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80233D3C: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x80233D40: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x80233D44: bne         $v1, $zero, L_80233D58
    if (ctx->r3 != 0) {
        // 0x80233D48: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_80233D58;
    }
    // 0x80233D48: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80233D4C: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    // 0x80233D50: jal         0x8002A33C
    // 0x80233D54: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x80233D54: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
L_80233D58:
    // 0x80233D58: jal         0x8003E934
    // 0x80233D5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x80233D5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80233D60: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80233D64: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80233D68: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80233D6C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233D70: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80233D74: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80233D78: bltz        $v0, L_80233D90
    if (SIGNED(ctx->r2) < 0) {
        // 0x80233D7C: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_80233D90;
    }
    // 0x80233D7C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80233D80: beq         $v0, $zero, L_80233DA4
    if (ctx->r2 == 0) {
        // 0x80233D84: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80233DA4;
    }
    // 0x80233D84: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80233D88: j           L_80233DE4
    // 0x80233D8C: andi        $v0, $s2, 0xF00
    ctx->r2 = ctx->r18 & 0XF00;
        goto L_80233DE4;
    // 0x80233D8C: andi        $v0, $s2, 0xF00
    ctx->r2 = ctx->r18 & 0XF00;
L_80233D90:
    // 0x80233D90: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x80233D94: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80233D98: bne         $v0, $zero, L_80233DE4
    if (ctx->r2 != 0) {
        // 0x80233D9C: andi        $v0, $s2, 0xF00
        ctx->r2 = ctx->r18 & 0XF00;
            goto L_80233DE4;
    }
    // 0x80233D9C: andi        $v0, $s2, 0xF00
    ctx->r2 = ctx->r18 & 0XF00;
    // 0x80233DA0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80233DA4:
    // 0x80233DA4: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80233DA8: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80233DAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80233DB0: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80233DB4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x80233DB8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80233DBC: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x80233DC0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80233DC4: jal         0x8009A3B4
    // 0x80233DC8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80233DC8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_7:
    // 0x80233DCC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80233DD0: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80233DD4: jal         0x8009A3B4
    // 0x80233DD8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80233DD8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_8:
    // 0x80233DDC: j           L_80233E04
    // 0x80233DE0: nop

        goto L_80233E04;
    // 0x80233DE0: nop

L_80233DE4:
    // 0x80233DE4: beq         $v0, $zero, L_80233E04
    if (ctx->r2 == 0) {
        // 0x80233DE8: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80233E04;
    }
    // 0x80233DE8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80233DEC: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80233DF0: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x80233DF4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80233DF8: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x80233DFC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80233E00: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80233E04:
    // 0x80233E04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80233E08: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80233E0C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80233E10: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80233E14: jr          $ra
    // 0x80233E18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80233E18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022F9F8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F9F8: lb          $v0, 0x385($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X385);
    // 0x8022F9FC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8022FA00: bne         $v0, $zero, L_8022FA14
    if (ctx->r2 != 0) {
        // 0x8022FA04: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022FA14;
    }
    // 0x8022FA04: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022FA08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FA0C: j           L_8022FA1C
    // 0x8022FA10: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
        goto L_8022FA1C;
    // 0x8022FA10: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022FA14:
    // 0x8022FA14: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022FA18: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
L_8022FA1C:
    // 0x8022FA1C: jr          $ra
    // 0x8022FA20: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8022FA20: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80232814_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232814: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80232818: bgez        $v0, L_80232834
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023281C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80232834;
    }
    // 0x8023281C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232820: lhu         $v1, 0x348($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X348);
    // 0x80232824: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x80232828: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8023282C: andi        $v1, $v1, 0xFFFD
    ctx->r3 = ctx->r3 & 0XFFFD;
    // 0x80232830: sh          $v1, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r3;
L_80232834:
    // 0x80232834: jr          $ra
    // 0x80232838: nop

    TRACE_RETURN()
    return;
    // 0x80232838: nop

;}
RECOMP_FUNC void func_80225444_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225444: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225448: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x8022544C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225450: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80225454: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225458: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022545C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80225460: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225464: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80225468: lw          $v1, 0x648($at)
    ctx->r3 = MEM_W(ctx->r1, 0X648);
    // 0x8022546C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225470: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80225474: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80225478: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8022547C: jalr        $v0
    // 0x80225480: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225480: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_0:
    // 0x80225484: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225488: jr          $ra
    // 0x8022548C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022548C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FA24_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FA24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FA28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022FA2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FA30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022FA34: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x8022FA38: lh          $v0, 0x380($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X380);
    // 0x8022FA3C: bne         $a0, $v0, L_8022FA84
    if (ctx->r4 != ctx->r2) {
        // 0x8022FA40: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_8022FA84;
    }
    // 0x8022FA40: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x8022FA44: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022FA48: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
    // 0x8022FA4C: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022FA50: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022FA54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FA58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022FA5C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FA60: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022FA64: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8022FA68: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x8022FA6C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022FA70: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x8022FA74: jal         0x80050294
    // 0x8022FA78: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022FA78: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022FA7C: j           L_8022FA98
    // 0x8022FA80: nop

        goto L_8022FA98;
    // 0x8022FA80: nop

L_8022FA84:
    // 0x8022FA84: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022FA88: bne         $v0, $zero, L_8022FA94
    if (ctx->r2 != 0) {
        // 0x8022FA8C: addiu       $v0, $v1, -0x80
        ctx->r2 = ADD32(ctx->r3, -0X80);
            goto L_8022FA94;
    }
    // 0x8022FA8C: addiu       $v0, $v1, -0x80
    ctx->r2 = ADD32(ctx->r3, -0X80);
    // 0x8022FA90: addiu       $v0, $v1, 0x80
    ctx->r2 = ADD32(ctx->r3, 0X80);
L_8022FA94:
    // 0x8022FA94: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022FA98:
    // 0x8022FA98: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FA9C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022FAA0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022FAA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022FAA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022FAAC: jr          $ra
    // 0x8022FAB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FAB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231214_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231214: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231218: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023121C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231220: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80231224: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80231228: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023122C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80231230: jal         0x8009A3B4
    // 0x80231234: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80231234: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80231238: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8023123C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80231240: jal         0x8009A3B4
    // 0x80231244: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80231244: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80231248: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8023124C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80231250: jal         0x8009A3B4
    // 0x80231254: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80231254: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80231258: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023125C: lbu         $a1, 0x74($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X74);
    // 0x80231260: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231264: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80231268: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8023126C: sb          $v1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r3;
    // 0x80231270: jal         0x80231320
    // 0x80231274: sb          $a1, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r5;
    func_80231320_ovl4(rdram, ctx);
        goto after_3;
    // 0x80231274: sb          $a1, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r5;
    after_3:
    // 0x80231278: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8023127C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231280: beq         $v1, $v0, L_8023130C
    if (ctx->r3 == ctx->r2) {
        // 0x80231284: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8023130C;
    }
    // 0x80231284: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80231288: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023128C: jal         0x800540D0
    // 0x80231290: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_4;
    // 0x80231290: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80231294: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80231298: sw          $v0, 0x358($s0)
    MEM_W(0X358, ctx->r16) = ctx->r2;
    // 0x8023129C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802312A0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802312A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802312A8: lw          $v0, 0xB68($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB68);
    // 0x802312AC: jalr        $v0
    // 0x802312B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x802312B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802312B4: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802312B8: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x802312BC: beq         $a1, $v0, L_802312D4
    if (ctx->r5 == ctx->r2) {
        // 0x802312C0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802312D4;
    }
    // 0x802312C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802312C4: jal         0x80050294
    // 0x802312C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x802312C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x802312CC: j           L_802312DC
    // 0x802312D0: nop

        goto L_802312DC;
    // 0x802312D0: nop

L_802312D4:
    // 0x802312D4: jal         0x8005044C
    // 0x802312D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_7;
    // 0x802312D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_802312DC:
    // 0x802312DC: jal         0x8023163C
    // 0x802312E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023163C_ovl4(rdram, ctx);
        goto after_8;
    // 0x802312E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x802312E4: jal         0x802315B0
    // 0x802312E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802315B0_ovl4(rdram, ctx);
        goto after_9;
    // 0x802312E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x802312EC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802312F0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802312F4: beq         $v0, $zero, L_8023130C
    if (ctx->r2 == 0) {
        // 0x802312F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023130C;
    }
    // 0x802312F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802312FC: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x80231300: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80231304: jal         0x8003B564
    // 0x80231308: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_10;
    // 0x80231308: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_8023130C:
    // 0x8023130C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231310: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231314: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231318: jr          $ra
    // 0x8023131C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023131C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802386A0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802386A0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802386A4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802386A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802386AC: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x802386B0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802386B4: sb          $zero, 0x20($sp)
    MEM_B(0X20, ctx->r29) = 0;
    // 0x802386B8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802386BC: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x802386C0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802386C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802386C8: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x802386CC: jal         0x8009A3B4
    // 0x802386D0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802386D0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x802386D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802386D8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x802386DC: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x802386E0: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x802386E4: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x802386E8: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x802386EC: jal         0x8004D5D4
    // 0x802386F0: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x802386F0: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    after_1:
    // 0x802386F4: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x802386F8: lbu         $a2, 0xD($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XD);
    // 0x802386FC: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80238700: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80238704: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
    // 0x80238708: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x8023870C: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x80238710: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80238714: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x80238718: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023871C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80238720: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80238724: lhu         $t0, 0x56($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X56);
    // 0x80238728: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x8023872C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238730: sh          $zero, 0xD0($s0)
    MEM_H(0XD0, ctx->r16) = 0;
    // 0x80238734: sh          $zero, 0xDC($s0)
    MEM_H(0XDC, ctx->r16) = 0;
    // 0x80238738: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8023873C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80238740: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80238744: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x80238748: sll         $a3, $a3, 24
    ctx->r7 = S32(ctx->r7 << 24);
    // 0x8023874C: sra         $a3, $a3, 24
    ctx->r7 = S32(SIGNED(ctx->r7) >> 24);
    // 0x80238750: sll         $a2, $a2, 24
    ctx->r6 = S32(ctx->r6 << 24);
    // 0x80238754: sra         $a2, $a2, 24
    ctx->r6 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80238758: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x8023875C: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80238760: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80238764: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80238768: sh          $a3, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r7;
    // 0x8023876C: sh          $a2, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = ctx->r6;
    // 0x80238770: sh          $v1, 0xD8($s0)
    MEM_H(0XD8, ctx->r16) = ctx->r3;
    // 0x80238774: sh          $v0, 0xDA($s0)
    MEM_H(0XDA, ctx->r16) = ctx->r2;
    // 0x80238778: jal         0x80031428
    // 0x8023877C: sh          $t0, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = ctx->r8;
    func_80031428_C828(rdram, ctx);
        goto after_2;
    // 0x8023877C: sh          $t0, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = ctx->r8;
    after_2:
    // 0x80238780: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80238784: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80238788: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023878C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80238790: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80238794: jal         0x80031DA8
    // 0x80238798: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x80238798: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x8023879C: jal         0x802387B8
    // 0x802387A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802387B8_ovl4(rdram, ctx);
        goto after_4;
    // 0x802387A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802387A4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x802387A8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802387AC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802387B0: jr          $ra
    // 0x802387B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802387B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802302C8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802302C8: lbu         $v0, 0x395($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X395);
    // 0x802302CC: lb          $v1, 0xA6($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XA6);
    // 0x802302D0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x802302D4: sb          $v0, 0x395($a0)
    MEM_B(0X395, ctx->r4) = ctx->r2;
    // 0x802302D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802302DC: bne         $v1, $v0, L_802302E8
    if (ctx->r3 != ctx->r2) {
        // 0x802302E0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802302E8;
    }
    // 0x802302E0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802302E4: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_802302E8:
    // 0x802302E8: jr          $ra
    // 0x802302EC: nop

    TRACE_RETURN()
    return;
    // 0x802302EC: nop

;}
RECOMP_FUNC void func_80239014_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239014: lh          $v1, 0x54($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X54);
    // 0x80239018: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8023901C: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x80239020: bne         $v1, $v0, L_80239038
    if (ctx->r3 != ctx->r2) {
        // 0x80239024: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80239038;
    }
    // 0x80239024: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80239028: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8023902C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239030: j           L_80239040
    // 0x80239034: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
        goto L_80239040;
    // 0x80239034: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80239038:
    // 0x80239038: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
    // 0x8023903C: sh          $v0, 0x54($a0)
    MEM_H(0X54, ctx->r4) = ctx->r2;
L_80239040:
    // 0x80239040: jr          $ra
    // 0x80239044: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80239044: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
