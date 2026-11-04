#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80070BA4_4BFA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80070BA4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80070BA8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80070BAC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80070BB0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80070BB4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80070BB8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80070BBC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80070BC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80070BC4: lb          $v1, 0x178($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X178);
    // 0x80070BC8: lb          $s2, 0x171($s1)
    ctx->r18 = MEM_B(ctx->r17, 0X171);
    // 0x80070BCC: lhu         $s4, 0x11C($s1)
    ctx->r20 = MEM_HU(ctx->r17, 0X11C);
    // 0x80070BD0: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80070BD4: beq         $v0, $zero, L_80070DA8
    if (ctx->r2 == 0) {
        // 0x80070BD8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80070DA8;
    }
    // 0x80070BD8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80070BDC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80070BE0: addu        $at, $at, $v0
    gpr jr_addend_80070BE8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80070BE4: lw          $v0, 0x29C8($at)
    ctx->r2 = ADD32(ctx->r1, 0X29C8);
    // 0x80070BE8: jr          $v0
    // 0x80070BEC: nop

    switch (jr_addend_80070BE8 >> 2) {
        case 0: goto L_80070BF0; break;
        case 1: goto L_80070C24; break;
        case 2: goto L_80070CA8; break;
        case 3: goto L_80070D28; break;
        case 4: goto L_80070D88; break;
        default: switch_error(__func__, 0x80070BE8, 0x800D29C8);
    }
    // 0x80070BEC: nop

L_80070BF0:
    // 0x80070BF0: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
    // 0x80070BF4: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80070BF8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80070BFC: lbu         $v1, 0x100($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X100);
    // 0x80070C00: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80070C04: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80070C08: lbu         $v0, 0x30F4($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X30F4);
    // 0x80070C0C: bne         $v1, $v0, L_80070DA8
    if (ctx->r3 != ctx->r2) {
        // 0x80070C10: nop
    
            goto L_80070DA8;
    }
    // 0x80070C10: nop

    // 0x80070C14: lbu         $v0, 0x178($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X178);
    // 0x80070C18: lbu         $v1, 0x174($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X174);
    // 0x80070C1C: j           L_80070C98
    // 0x80070C20: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
        goto L_80070C98;
    // 0x80070C20: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_80070C24:
    // 0x80070C24: lbu         $v0, 0x174($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X174);
    // 0x80070C28: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80070C2C: bne         $v0, $zero, L_80070C54
    if (ctx->r2 != 0) {
        // 0x80070C30: sll         $v0, $s2, 1
        ctx->r2 = S32(ctx->r18 << 1);
            goto L_80070C54;
    }
    // 0x80070C30: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
    // 0x80070C34: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x80070C38: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80070C3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80070C40: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80070C44: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80070C48: lbu         $a2, 0x30F4($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X30F4);
    // 0x80070C4C: jal         0x800500C0
    // 0x80070C50: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800500C0_2B4C0(rdram, ctx);
        goto after_0;
    // 0x80070C50: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
L_80070C54:
    // 0x80070C54: jal         0x80070110
    // 0x80070C58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070110_4B510(rdram, ctx);
        goto after_1;
    // 0x80070C58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80070C5C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80070C60: lbu         $a1, 0x174($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X174);
    // 0x80070C64: sll         $v1, $s2, 1
    ctx->r3 = S32(ctx->r18 << 1);
    // 0x80070C68: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x80070C6C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80070C70: sb          $v0, 0x104($s1)
    MEM_B(0X104, ctx->r17) = ctx->r2;
    // 0x80070C74: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80070C78: addu        $a3, $a3, $v1
    ctx->r7 = ADD32(ctx->r7, ctx->r3);
    // 0x80070C7C: lbu         $a3, 0x30F4($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X30F4);
    // 0x80070C80: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    // 0x80070C84: jal         0x800501C0
    // 0x80070C88: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    func_800501C0_2B5C0(rdram, ctx);
        goto after_2;
    // 0x80070C88: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    after_2:
    // 0x80070C8C: lbu         $v0, 0x178($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X178);
    // 0x80070C90: lbu         $v1, 0x174($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X174);
    // 0x80070C94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80070C98:
    // 0x80070C98: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x80070C9C: sb          $v0, 0x178($s1)
    MEM_B(0X178, ctx->r17) = ctx->r2;
    // 0x80070CA0: j           L_80070DA8
    // 0x80070CA4: sb          $v1, 0x174($s1)
    MEM_B(0X174, ctx->r17) = ctx->r3;
        goto L_80070DA8;
    // 0x80070CA4: sb          $v1, 0x174($s1)
    MEM_B(0X174, ctx->r17) = ctx->r3;
L_80070CA8:
    // 0x80070CA8: lbu         $v0, 0x174($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X174);
    // 0x80070CAC: andi        $v0, $v0, 0xCF
    ctx->r2 = ctx->r2 & 0XCF;
    // 0x80070CB0: sb          $v0, 0x174($s1)
    MEM_B(0X174, ctx->r17) = ctx->r2;
    // 0x80070CB4: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
    // 0x80070CB8: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80070CBC: sll         $s3, $v0, 2
    ctx->r19 = S32(ctx->r2 << 2);
    // 0x80070CC0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80070CC4: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80070CC8: lbu         $v0, 0x30F7($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X30F7);
    // 0x80070CCC: beq         $v0, $zero, L_80070D18
    if (ctx->r2 == 0) {
        // 0x80070CD0: sll         $v0, $s2, 3
        ctx->r2 = S32(ctx->r18 << 3);
            goto L_80070D18;
    }
    // 0x80070CD0: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x80070CD4: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80070CD8: lh          $v0, 0x4FA($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4FA);
    // 0x80070CDC: blez        $v0, L_80070D18
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80070CE0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80070D18;
    }
    // 0x80070CE0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80070CE4: lbu         $s0, 0x100($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X100);
    // 0x80070CE8: jal         0x800710E4
    // 0x80070CEC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_800710E4_4C4E4(rdram, ctx);
        goto after_3;
    // 0x80070CEC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
    // 0x80070CF0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80070CF4: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x80070CF8: lbu         $v1, 0x30F5($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X30F5);
    // 0x80070CFC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80070D00: bne         $s0, $v1, L_80070DA8
    if (ctx->r16 != ctx->r3) {
        // 0x80070D04: nop
    
            goto L_80070DA8;
    }
    // 0x80070D04: nop

    // 0x80070D08: lbu         $v0, 0x178($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X178);
    // 0x80070D0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80070D10: j           L_80070D28
    // 0x80070D14: sb          $v0, 0x178($s1)
    MEM_B(0X178, ctx->r17) = ctx->r2;
        goto L_80070D28;
    // 0x80070D14: sb          $v0, 0x178($s1)
    MEM_B(0X178, ctx->r17) = ctx->r2;
L_80070D18:
    // 0x80070D18: lbu         $v0, 0x178($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X178);
    // 0x80070D1C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80070D20: j           L_80070DA8
    // 0x80070D24: sb          $v0, 0x178($s1)
    MEM_B(0X178, ctx->r17) = ctx->r2;
        goto L_80070DA8;
    // 0x80070D24: sb          $v0, 0x178($s1)
    MEM_B(0X178, ctx->r17) = ctx->r2;
L_80070D28:
    // 0x80070D28: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
    // 0x80070D2C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80070D30: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80070D34: lbu         $v1, 0x100($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X100);
    // 0x80070D38: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80070D3C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80070D40: lbu         $v0, 0x30F6($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X30F6);
    // 0x80070D44: bne         $v1, $v0, L_80070D5C
    if (ctx->r3 != ctx->r2) {
        // 0x80070D48: nop
    
            goto L_80070D5C;
    }
    // 0x80070D48: nop

    // 0x80070D4C: lbu         $v0, 0x178($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X178);
    // 0x80070D50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80070D54: j           L_80070DA8
    // 0x80070D58: sb          $v0, 0x178($s1)
    MEM_B(0X178, ctx->r17) = ctx->r2;
        goto L_80070DA8;
    // 0x80070D58: sb          $v0, 0x178($s1)
    MEM_B(0X178, ctx->r17) = ctx->r2;
L_80070D5C:
    // 0x80070D5C: lhu         $v0, 0x13A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X13A);
    // 0x80070D60: and         $v0, $v0, $s4
    ctx->r2 = ctx->r2 & ctx->r20;
    // 0x80070D64: beq         $v0, $zero, L_80070DA8
    if (ctx->r2 == 0) {
        // 0x80070D68: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_80070DA8;
    }
    // 0x80070D68: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80070D6C: lbu         $v0, 0x175($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X175);
    // 0x80070D70: andi        $v0, $v0, 0x5
    ctx->r2 = ctx->r2 & 0X5;
    // 0x80070D74: bne         $v0, $v1, L_80070DA8
    if (ctx->r2 != ctx->r3) {
        // 0x80070D78: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80070DA8;
    }
    // 0x80070D78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80070D7C: sb          $zero, 0x174($s1)
    MEM_B(0X174, ctx->r17) = 0;
    // 0x80070D80: j           L_80070DA8
    // 0x80070D84: sb          $v0, 0x177($s1)
    MEM_B(0X177, ctx->r17) = ctx->r2;
        goto L_80070DA8;
    // 0x80070D84: sb          $v0, 0x177($s1)
    MEM_B(0X177, ctx->r17) = ctx->r2;
L_80070D88:
    // 0x80070D88: lb          $v1, 0x103($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X103);
    // 0x80070D8C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80070D90: bne         $v1, $v0, L_80070DA8
    if (ctx->r3 != ctx->r2) {
        // 0x80070D94: nop
    
            goto L_80070DA8;
    }
    // 0x80070D94: nop

    // 0x80070D98: sb          $zero, 0x174($s1)
    MEM_B(0X174, ctx->r17) = 0;
    // 0x80070D9C: bne         $s2, $zero, L_80070E04
    if (ctx->r18 != 0) {
        // 0x80070DA0: sb          $zero, 0x177($s1)
        MEM_B(0X177, ctx->r17) = 0;
            goto L_80070E04;
    }
    // 0x80070DA0: sb          $zero, 0x177($s1)
    MEM_B(0X177, ctx->r17) = 0;
    // 0x80070DA4: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
L_80070DA8:
    // 0x80070DA8: bne         $s2, $zero, L_80070E04
    if (ctx->r18 != 0) {
        // 0x80070DAC: nop
    
            goto L_80070E04;
    }
    // 0x80070DAC: nop

    // 0x80070DB0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80070DB4: lbu         $v0, -0x3B95($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3B95);
    // 0x80070DB8: bnel        $v0, $zero, L_80070E04
    if (ctx->r2 != 0) {
        // 0x80070DBC: sh          $zero, 0x44($s1)
        MEM_H(0X44, ctx->r17) = 0;
            goto L_80070E04;
    }
    goto skip_0;
    // 0x80070DBC: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    skip_0:
    // 0x80070DC0: lw          $v0, 0x198($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X198);
    // 0x80070DC4: beq         $v0, $zero, L_80070DD8
    if (ctx->r2 == 0) {
        // 0x80070DC8: addiu       $v0, $zero, -0x300
        ctx->r2 = ADD32(0, -0X300);
            goto L_80070DD8;
    }
    // 0x80070DC8: addiu       $v0, $zero, -0x300
    ctx->r2 = ADD32(0, -0X300);
    // 0x80070DCC: sw          $zero, 0x198($s1)
    MEM_W(0X198, ctx->r17) = 0;
    // 0x80070DD0: j           L_80070DF0
    // 0x80070DD4: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
        goto L_80070DF0;
    // 0x80070DD4: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_80070DD8:
    // 0x80070DD8: lhu         $v0, 0x44($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X44);
    // 0x80070DDC: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x80070DE0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80070DE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80070DE8: bgtzl       $v0, L_80070DF0
    if (SIGNED(ctx->r2) > 0) {
        // 0x80070DEC: sh          $zero, 0x44($s1)
        MEM_H(0X44, ctx->r17) = 0;
            goto L_80070DF0;
    }
    goto skip_1;
    // 0x80070DEC: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    skip_1:
L_80070DF0:
    // 0x80070DF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80070DF4: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80070DF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80070DFC: jal         0x8006FC34
    // 0x80070E00: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FC34_4B034(rdram, ctx);
        goto after_4;
    // 0x80070E00: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_80070E04:
    // 0x80070E04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80070E08: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80070E0C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80070E10: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80070E14: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80070E18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80070E1C: jr          $ra
    // 0x80070E20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80070E20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8005CBDC_37FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005CBDC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8005CBE0: lw          $a0, -0x16D0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X16D0);
    // 0x8005CBE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005CBE8: beq         $a0, $zero, L_8005CC00
    if (ctx->r4 == 0) {
        // 0x8005CBEC: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8005CC00;
    }
    // 0x8005CBEC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8005CBF0: jal         0x80025FF8
    // 0x8005CBF4: nop

    func_80025FF8_13F8(rdram, ctx);
        goto after_0;
    // 0x8005CBF4: nop

    after_0:
    // 0x8005CBF8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005CBFC: sw          $zero, -0x16D0($at)
    MEM_W(-0X16D0, ctx->r1) = 0;
L_8005CC00:
    // 0x8005CC00: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8005CC04: jr          $ra
    // 0x8005CC08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005CC08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8007B360_56760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007B360: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x8007B364: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8007B368: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x8007B36C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8007B370: bne         $v0, $zero, L_8007B474
    if (ctx->r2 != 0) {
        // 0x8007B374: nop
    
            goto L_8007B474;
    }
    // 0x8007B374: nop

    // 0x8007B378: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8007B37C: beq         $v0, $zero, L_8007B404
    if (ctx->r2 == 0) {
        // 0x8007B380: nop
    
            goto L_8007B404;
    }
    // 0x8007B380: nop

    // 0x8007B384: lhu         $v0, 0x24($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X24);
    // 0x8007B388: lbu         $v1, 0xD($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XD);
    // 0x8007B38C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8007B390: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8007B394: sb          $v1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r3;
    // 0x8007B398: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x8007B39C: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8007B3A0: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
    // 0x8007B3A4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8007B3A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007B3AC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8007B3B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8007B3B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007B3B8: lbu         $v0, -0x2D54($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X2D54);
    // 0x8007B3BC: lb          $v1, 0xD($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XD);
    // 0x8007B3C0: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x8007B3C4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8007B3C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007B3CC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8007B3D0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8007B3D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007B3D8: lhu         $v0, -0x2D58($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X2D58);
    // 0x8007B3DC: lb          $v1, 0xD($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XD);
    // 0x8007B3E0: sb          $v0, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r2;
    // 0x8007B3E4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8007B3E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007B3EC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8007B3F0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8007B3F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007B3F8: lhu         $v0, -0x2D56($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X2D56);
    // 0x8007B3FC: j           L_8007B474
    // 0x8007B400: sb          $v0, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r2;
        goto L_8007B474;
    // 0x8007B400: sb          $v0, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r2;
L_8007B404:
    // 0x8007B404: lbu         $v0, 0xD($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD);
    // 0x8007B408: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007B40C: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x8007B410: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8007B414: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8007B418: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8007B41C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007B420: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8007B424: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007B428: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007B42C: lbu         $v0, -0x2D6C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2D6C);
    // 0x8007B430: lb          $v1, 0xD($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XD);
    // 0x8007B434: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x8007B438: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8007B43C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007B440: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8007B444: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8007B448: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007B44C: lhu         $v0, -0x2D70($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X2D70);
    // 0x8007B450: lb          $v1, 0xD($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XD);
    // 0x8007B454: sb          $v0, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r2;
    // 0x8007B458: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8007B45C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007B460: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8007B464: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8007B468: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007B46C: lhu         $v0, -0x2D6E($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X2D6E);
    // 0x8007B470: sb          $v0, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r2;
L_8007B474:
    // 0x8007B474: lbu         $v1, 0xE($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XE);
    // 0x8007B478: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8007B47C: bne         $v1, $v0, L_8007B488
    if (ctx->r3 != ctx->r2) {
        // 0x8007B480: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8007B488;
    }
    // 0x8007B480: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8007B484: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_8007B488:
    // 0x8007B488: jr          $ra
    // 0x8007B48C: nop

    TRACE_RETURN()
    return;
    // 0x8007B48C: nop

;}
RECOMP_FUNC void func_80078B84_53F84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80078B84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078B88: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80078B8C: jal         0x8004F5C4
    // 0x80078B90: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80078B90: nop

    after_0:
    // 0x80078B94: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80078B98: jr          $ra
    // 0x80078B9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80078B9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80037B70_12F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037B70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80037B74: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x80037B78: addiu       $v0, $v0, 0x4780
    ctx->r2 = ADD32(ctx->r2, 0X4780);
    // 0x80037B7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80037B80: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80037B84: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80037B88: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80037B8C: addiu       $s1, $s1, -0x36B0
    ctx->r17 = ADD32(ctx->r17, -0X36B0);
    // 0x80037B90: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80037B94: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x80037B98: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x80037B9C: sb          $zero, 0x4781($at)
    MEM_B(0X4781, ctx->r1) = 0;
L_80037BA0:
    // 0x80037BA0: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x80037BA4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80037BA8: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80037BAC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80037BB0: jalr        $v0
    // 0x80037BB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80037BB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80037BB8: jal         0x80029114
    // 0x80037BBC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80029114_4514(rdram, ctx);
        goto after_1;
    // 0x80037BBC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80037BC0: j           L_80037BA0
    // 0x80037BC4: nop

        goto L_80037BA0;
    // 0x80037BC4: nop

    // 0x80037BC8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80037BCC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80037BD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80037BD4: jr          $ra
    // 0x80037BD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80037BD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8007171C_4CB1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007171C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80071720: lhu         $a1, 0x49AE($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X49AE);
    // 0x80071724: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
    // 0x80071728: srl         $t3, $v0, 8
    ctx->r11 = S32(U32(ctx->r2) >> 8);
    // 0x8007172C: mult        $t3, $a1
    result = S64(S32(ctx->r11)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80071730: mflo        $v1
    ctx->r3 = lo;
    // 0x80071734: andi        $t2, $a0, 0xFF
    ctx->r10 = ctx->r4 & 0XFF;
    // 0x80071738: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8007173C: lw          $a0, -0x35C0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X35C0);
    // 0x80071740: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80071744: sll         $v0, $t2, 1
    ctx->r2 = S32(ctx->r10 << 1);
    // 0x80071748: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8007174C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80071750: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80071754: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80071758: lhu         $a2, 0x0($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X0);
    // 0x8007175C: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    // 0x80071760: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80071764: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80071768: sll         $a3, $v0, 2
    ctx->r7 = S32(ctx->r2 << 2);
    // 0x8007176C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80071770: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80071774: lhu         $v0, 0x5086($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X5086);
    // 0x80071778: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8007177C: beq         $v0, $zero, L_80071884
    if (ctx->r2 == 0) {
        // 0x80071780: addu        $t1, $zero, $zero
        ctx->r9 = ADD32(0, 0);
            goto L_80071884;
    }
    // 0x80071780: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x80071784: lui         $t6, 0x801E
    ctx->r14 = S32(0X801E << 16);
    // 0x80071788: lhu         $t6, -0x7386($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X7386);
    // 0x8007178C: addu        $t5, $a0, $zero
    ctx->r13 = ADD32(ctx->r4, 0);
    // 0x80071790: addu        $t4, $v1, $zero
    ctx->r12 = ADD32(ctx->r3, 0);
    // 0x80071794: lui         $t7, 0x8018
    ctx->r15 = S32(0X8018 << 16);
    // 0x80071798: addiu       $t7, $t7, -0x4820
    ctx->r15 = ADD32(ctx->r15, -0X4820);
L_8007179C:
    // 0x8007179C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800717A0: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x800717A4: lb          $v0, 0x3560($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X3560);
    // 0x800717A8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800717AC: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x800717B0: lb          $v1, 0x3568($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X3568);
    // 0x800717B4: addu        $t0, $t2, $v0
    ctx->r8 = ADD32(ctx->r10, ctx->r2);
    // 0x800717B8: sltu        $v0, $t0, $a1
    ctx->r2 = ctx->r8 < ctx->r5 ? 1 : 0;
    // 0x800717BC: beq         $v0, $zero, L_80071830
    if (ctx->r2 == 0) {
        // 0x800717C0: addu        $a3, $t3, $v1
        ctx->r7 = ADD32(ctx->r11, ctx->r3);
            goto L_80071830;
    }
    // 0x800717C0: addu        $a3, $t3, $v1
    ctx->r7 = ADD32(ctx->r11, ctx->r3);
    // 0x800717C4: sltu        $v0, $a3, $t6
    ctx->r2 = ctx->r7 < ctx->r14 ? 1 : 0;
    // 0x800717C8: beql        $v0, $zero, L_80071834
    if (ctx->r2 == 0) {
        // 0x800717CC: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_80071834;
    }
    goto skip_0;
    // 0x800717CC: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    skip_0:
    // 0x800717D0: nop

    // 0x800717D4: mult        $a3, $a1
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800717D8: mflo        $v1
    ctx->r3 = lo;
    // 0x800717DC: sll         $v0, $t0, 1
    ctx->r2 = S32(ctx->r8 << 1);
    // 0x800717E0: addu        $v0, $v0, $t5
    ctx->r2 = ADD32(ctx->r2, ctx->r13);
    // 0x800717E4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x800717E8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800717EC: lh          $v1, 0x0($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X0);
    // 0x800717F0: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x800717F4: sltiu       $v0, $v0, 0x7FF
    ctx->r2 = ctx->r2 < 0X7FF ? 1 : 0;
    // 0x800717F8: beql        $v0, $zero, L_80071834
    if (ctx->r2 == 0) {
        // 0x800717FC: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_80071834;
    }
    goto skip_1;
    // 0x800717FC: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    skip_1:
    // 0x80071800: bnel        $v1, $t4, L_80071834
    if (ctx->r3 != ctx->r12) {
        // 0x80071804: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_80071834;
    }
    goto skip_2;
    // 0x80071804: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    skip_2:
    // 0x80071808: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8007180C: lhu         $v0, 0x355C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X355C);
    // 0x80071810: sll         $v1, $a3, 8
    ctx->r3 = S32(ctx->r7 << 8);
    // 0x80071814: addu        $v1, $t0, $v1
    ctx->r3 = ADD32(ctx->r8, ctx->r3);
    // 0x80071818: addiu       $a0, $v0, 0x1
    ctx->r4 = ADD32(ctx->r2, 0X1);
    // 0x8007181C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80071820: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x80071824: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80071828: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8007182C: sh          $a0, 0x355C($at)
    MEM_H(0X355C, ctx->r1) = ctx->r4;
L_80071830:
    // 0x80071830: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_80071834:
    // 0x80071834: sltiu       $v0, $t1, 0x8
    ctx->r2 = ctx->r9 < 0X8 ? 1 : 0;
    // 0x80071838: bne         $v0, $zero, L_8007179C
    if (ctx->r2 != 0) {
        // 0x8007183C: nop
    
            goto L_8007179C;
    }
    // 0x8007183C: nop

    // 0x80071840: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    // 0x80071844: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80071848: addiu       $v0, $v0, 0x5086
    ctx->r2 = ADD32(ctx->r2, 0X5086);
    // 0x8007184C: sll         $v1, $a2, 1
    ctx->r3 = S32(ctx->r6 << 1);
    // 0x80071850: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80071854: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80071858: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007185C: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80071860: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    // 0x80071864: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x80071868: bne         $v0, $zero, L_80071874
    if (ctx->r2 != 0) {
        // 0x8007186C: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80071874;
    }
    // 0x8007186C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80071870: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80071874:
    // 0x80071874: jal         0x800712E4
    // 0x80071878: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800712E4_4C6E4(rdram, ctx);
        goto after_0;
    // 0x80071878: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x8007187C: j           L_800719A8
    // 0x80071880: nop

        goto L_800719A8;
    // 0x80071880: nop

L_80071884:
    // 0x80071884: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x80071888: lui         $t7, 0x801E
    ctx->r15 = S32(0X801E << 16);
    // 0x8007188C: lhu         $t7, -0x7386($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X7386);
    // 0x80071890: addu        $t6, $a0, $zero
    ctx->r14 = ADD32(ctx->r4, 0);
    // 0x80071894: addu        $t5, $v1, $zero
    ctx->r13 = ADD32(ctx->r3, 0);
    // 0x80071898: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8007189C: lhu         $v0, 0x355C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X355C);
    // 0x800718A0: addu        $t4, $a3, $zero
    ctx->r12 = ADD32(ctx->r7, 0);
    // 0x800718A4: lui         $t8, 0x8018
    ctx->r24 = S32(0X8018 << 16);
    // 0x800718A8: addiu       $t8, $t8, -0x4820
    ctx->r24 = ADD32(ctx->r24, -0X4820);
    // 0x800718AC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800718B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800718B4: sh          $v0, 0x355C($at)
    MEM_H(0X355C, ctx->r1) = ctx->r2;
L_800718B8:
    // 0x800718B8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800718BC: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x800718C0: lb          $v0, 0x3570($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X3570);
    // 0x800718C4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800718C8: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x800718CC: lb          $v1, 0x3574($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X3574);
    // 0x800718D0: addu        $t0, $t2, $v0
    ctx->r8 = ADD32(ctx->r10, ctx->r2);
    // 0x800718D4: sltu        $v0, $t0, $a2
    ctx->r2 = ctx->r8 < ctx->r6 ? 1 : 0;
    // 0x800718D8: beq         $v0, $zero, L_80071998
    if (ctx->r2 == 0) {
        // 0x800718DC: addu        $a3, $t3, $v1
        ctx->r7 = ADD32(ctx->r11, ctx->r3);
            goto L_80071998;
    }
    // 0x800718DC: addu        $a3, $t3, $v1
    ctx->r7 = ADD32(ctx->r11, ctx->r3);
    // 0x800718E0: sltu        $v0, $a3, $t7
    ctx->r2 = ctx->r7 < ctx->r15 ? 1 : 0;
    // 0x800718E4: beql        $v0, $zero, L_8007199C
    if (ctx->r2 == 0) {
        // 0x800718E8: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_8007199C;
    }
    goto skip_3;
    // 0x800718E8: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    skip_3:
    // 0x800718EC: nop

    // 0x800718F0: mult        $a3, $a2
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800718F4: mflo        $v1
    ctx->r3 = lo;
    // 0x800718F8: sll         $v0, $t0, 1
    ctx->r2 = S32(ctx->r8 << 1);
    // 0x800718FC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80071900: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80071904: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80071908: lh          $v1, 0x0($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X0);
    // 0x8007190C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80071910: sltiu       $v0, $v0, 0x7FF
    ctx->r2 = ctx->r2 < 0X7FF ? 1 : 0;
    // 0x80071914: beql        $v0, $zero, L_8007199C
    if (ctx->r2 == 0) {
        // 0x80071918: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_8007199C;
    }
    goto skip_4;
    // 0x80071918: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    skip_4:
    // 0x8007191C: beql        $v1, $t5, L_8007199C
    if (ctx->r3 == ctx->r13) {
        // 0x80071920: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_8007199C;
    }
    goto skip_5;
    // 0x80071920: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    skip_5:
    // 0x80071924: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80071928: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007192C: sll         $a1, $v0, 2
    ctx->r5 = S32(ctx->r2 << 2);
    // 0x80071930: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80071934: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80071938: lw          $v0, 0x5088($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5088);
    // 0x8007193C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80071940: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x80071944: lw          $v1, 0x5088($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5088);
    // 0x80071948: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    // 0x8007194C: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80071950: bnel        $a0, $v0, L_8007199C
    if (ctx->r4 != ctx->r2) {
        // 0x80071954: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_8007199C;
    }
    goto skip_6;
    // 0x80071954: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    skip_6:
    // 0x80071958: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8007195C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80071960: lhu         $v0, 0x5086($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X5086);
    // 0x80071964: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80071968: beql        $v0, $zero, L_8007199C
    if (ctx->r2 == 0) {
        // 0x8007196C: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_8007199C;
    }
    goto skip_7;
    // 0x8007196C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    skip_7:
    // 0x80071970: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80071974: lhu         $v0, 0x355C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X355C);
    // 0x80071978: sll         $v1, $a3, 8
    ctx->r3 = S32(ctx->r7 << 8);
    // 0x8007197C: addu        $v1, $t0, $v1
    ctx->r3 = ADD32(ctx->r8, ctx->r3);
    // 0x80071980: addiu       $a0, $v0, 0x1
    ctx->r4 = ADD32(ctx->r2, 0X1);
    // 0x80071984: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80071988: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x8007198C: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80071990: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80071994: sh          $a0, 0x355C($at)
    MEM_H(0X355C, ctx->r1) = ctx->r4;
L_80071998:
    // 0x80071998: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_8007199C:
    // 0x8007199C: sltiu       $v0, $t1, 0x4
    ctx->r2 = ctx->r9 < 0X4 ? 1 : 0;
    // 0x800719A0: bne         $v0, $zero, L_800718B8
    if (ctx->r2 != 0) {
        // 0x800719A4: nop
    
            goto L_800718B8;
    }
    // 0x800719A4: nop

L_800719A8:
    // 0x800719A8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x800719AC: jr          $ra
    // 0x800719B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800719B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80035288_10688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035288: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003528C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80035290: addiu       $s0, $zero, 0x200
    ctx->r16 = ADD32(0, 0X200);
    // 0x80035294: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80035298: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003529C: sb          $v0, 0x4349($at)
    MEM_B(0X4349, ctx->r1) = ctx->r2;
    // 0x800352A0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x800352A4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800352A8: addiu       $a0, $a0, 0x43B0
    ctx->r4 = ADD32(ctx->r4, 0X43B0);
    // 0x800352AC: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x800352B0: addiu       $a1, $a1, 0x2830
    ctx->r5 = ADD32(ctx->r5, 0X2830);
    // 0x800352B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800352B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800352BC: sw          $s0, -0x725C($at)
    MEM_W(-0X725C, ctx->r1) = ctx->r16;
    // 0x800352C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800352C4: sb          $zero, 0x4DFD($at)
    MEM_B(0X4DFD, ctx->r1) = 0;
    // 0x800352C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800352CC: sb          $v0, 0x4352($at)
    MEM_B(0X4352, ctx->r1) = ctx->r2;
    // 0x800352D0: jal         0x8009A3B4
    // 0x800352D4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x800352D4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x800352D8: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x800352DC: lw          $a1, 0x2840($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2840);
    // 0x800352E0: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x800352E4: lw          $a2, 0x2844($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2844);
    // 0x800352E8: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x800352EC: lw          $a3, 0x2848($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X2848);
    // 0x800352F0: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x800352F4: lh          $t0, 0x49C4($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X49C4);
    // 0x800352F8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800352FC: lh          $v1, 0x49C6($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C6);
    // 0x80035300: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x80035304: lh          $t1, 0x49C8($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X49C8);
    // 0x80035308: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8003530C: lh          $a0, 0x4A06($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4A06);
    // 0x80035310: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x80035314: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80035318: sw          $v0, 0x43A4($at)
    MEM_W(0X43A4, ctx->r1) = ctx->r2;
    // 0x8003531C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80035320: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80035324: sw          $v0, 0x438C($at)
    MEM_W(0X438C, ctx->r1) = ctx->r2;
    // 0x80035328: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x8003532C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80035330: sw          $s0, 0x4384($at)
    MEM_W(0X4384, ctx->r1) = ctx->r16;
    // 0x80035334: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80035338: sb          $v0, 0x4351($at)
    MEM_B(0X4351, ctx->r1) = ctx->r2;
    // 0x8003533C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x80035340: addiu       $v1, $v1, -0x96
    ctx->r3 = ADD32(ctx->r3, -0X96);
    // 0x80035344: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x80035348: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x8003534C: slt         $v0, $a0, $a2
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80035350: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80035354: sw          $a1, 0x436C($at)
    MEM_W(0X436C, ctx->r1) = ctx->r5;
    // 0x80035358: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003535C: sw          $a2, 0x4370($at)
    MEM_W(0X4370, ctx->r1) = ctx->r6;
    // 0x80035360: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80035364: sw          $a3, 0x4374($at)
    MEM_W(0X4374, ctx->r1) = ctx->r7;
    // 0x80035368: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003536C: sw          $t0, 0x43D0($at)
    MEM_W(0X43D0, ctx->r1) = ctx->r8;
    // 0x80035370: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80035374: sw          $v1, 0x43D4($at)
    MEM_W(0X43D4, ctx->r1) = ctx->r3;
    // 0x80035378: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003537C: sw          $t1, 0x43D8($at)
    MEM_W(0X43D8, ctx->r1) = ctx->r9;
    // 0x80035380: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80035384: sw          $a0, 0x4388($at)
    MEM_W(0X4388, ctx->r1) = ctx->r4;
    // 0x80035388: beq         $v0, $zero, L_800353B0
    if (ctx->r2 == 0) {
        // 0x8003538C: subu        $v1, $a2, $a0
        ctx->r3 = SUB32(ctx->r6, ctx->r4);
            goto L_800353B0;
    }
    // 0x8003538C: subu        $v1, $a2, $a0
    ctx->r3 = SUB32(ctx->r6, ctx->r4);
    // 0x80035390: addiu       $v0, $a2, -0x1000
    ctx->r2 = ADD32(ctx->r6, -0X1000);
    // 0x80035394: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80035398: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003539C: beq         $v0, $zero, L_800353D0
    if (ctx->r2 == 0) {
        // 0x800353A0: addiu       $v0, $a0, 0x1000
        ctx->r2 = ADD32(ctx->r4, 0X1000);
            goto L_800353D0;
    }
    // 0x800353A0: addiu       $v0, $a0, 0x1000
    ctx->r2 = ADD32(ctx->r4, 0X1000);
    // 0x800353A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800353A8: j           L_800353D0
    // 0x800353AC: sw          $v0, 0x4388($at)
    MEM_W(0X4388, ctx->r1) = ctx->r2;
        goto L_800353D0;
    // 0x800353AC: sw          $v0, 0x4388($at)
    MEM_W(0X4388, ctx->r1) = ctx->r2;
L_800353B0:
    // 0x800353B0: subu        $v1, $a0, $a2
    ctx->r3 = SUB32(ctx->r4, ctx->r6);
    // 0x800353B4: addiu       $v0, $a0, -0x1000
    ctx->r2 = ADD32(ctx->r4, -0X1000);
    // 0x800353B8: subu        $v0, $a2, $v0
    ctx->r2 = SUB32(ctx->r6, ctx->r2);
    // 0x800353BC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800353C0: beq         $v0, $zero, L_800353D0
    if (ctx->r2 == 0) {
        // 0x800353C4: addiu       $v0, $a2, 0x1000
        ctx->r2 = ADD32(ctx->r6, 0X1000);
            goto L_800353D0;
    }
    // 0x800353C4: addiu       $v0, $a2, 0x1000
    ctx->r2 = ADD32(ctx->r6, 0X1000);
    // 0x800353C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800353CC: sw          $v0, 0x4370($at)
    MEM_W(0X4370, ctx->r1) = ctx->r2;
L_800353D0:
    // 0x800353D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800353D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800353D8: jr          $ra
    // 0x800353DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800353DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800305BC_B9BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800305BC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x800305C0: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x800305C4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x800305C8: jr          $ra
    // 0x800305CC: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x800305CC: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8005C260_37660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005C260: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005C264: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8005C268: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8005C26C: addiu       $s0, $s0, -0x3E3E
    ctx->r16 = ADD32(ctx->r16, -0X3E3E);
    // 0x8005C270: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005C274: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8005C278: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005C27C: beq         $v1, $v0, L_8005C314
    if (ctx->r3 == ctx->r2) {
        // 0x8005C280: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8005C314;
    }
    // 0x8005C280: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8005C284: beql        $v0, $zero, L_8005C29C
    if (ctx->r2 == 0) {
        // 0x8005C288: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8005C29C;
    }
    goto skip_0;
    // 0x8005C288: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8005C28C: beq         $v1, $zero, L_8005C2B4
    if (ctx->r3 == 0) {
        // 0x8005C290: nop
    
            goto L_8005C2B4;
    }
    // 0x8005C290: nop

    // 0x8005C294: j           L_8005C470
    // 0x8005C298: nop

        goto L_8005C470;
    // 0x8005C298: nop

L_8005C29C:
    // 0x8005C29C: beq         $v1, $v0, L_8005C37C
    if (ctx->r3 == ctx->r2) {
        // 0x8005C2A0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8005C37C;
    }
    // 0x8005C2A0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8005C2A4: beq         $v1, $v0, L_8005C468
    if (ctx->r3 == ctx->r2) {
        // 0x8005C2A8: lui         $v0, 0x302
        ctx->r2 = S32(0X302 << 16);
            goto L_8005C468;
    }
    // 0x8005C2A8: lui         $v0, 0x302
    ctx->r2 = S32(0X302 << 16);
    // 0x8005C2AC: j           L_8005C470
    // 0x8005C2B0: nop

        goto L_8005C470;
    // 0x8005C2B0: nop

L_8005C2B4:
    // 0x8005C2B4: jal         0x8006036C
    // 0x8005C2B8: addiu       $a0, $zero, 0x318
    ctx->r4 = ADD32(0, 0X318);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x8005C2B8: addiu       $a0, $zero, 0x318
    ctx->r4 = ADD32(0, 0X318);
    after_0:
    // 0x8005C2BC: jal         0x8006036C
    // 0x8005C2C0: addiu       $a0, $zero, 0x319
    ctx->r4 = ADD32(0, 0X319);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x8005C2C0: addiu       $a0, $zero, 0x319
    ctx->r4 = ADD32(0, 0X319);
    after_1:
    // 0x8005C2C4: jal         0x8006036C
    // 0x8005C2C8: addiu       $a0, $zero, 0x31A
    ctx->r4 = ADD32(0, 0X31A);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x8005C2C8: addiu       $a0, $zero, 0x31A
    ctx->r4 = ADD32(0, 0X31A);
    after_2:
    // 0x8005C2CC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005C2D0: lb          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC8);
    // 0x8005C2D4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8005C2D8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8005C2DC: lb          $a0, -0x1450($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1450);
    // 0x8005C2E0: jal         0x80060590
    // 0x8005C2E4: addiu       $a0, $a0, 0x318
    ctx->r4 = ADD32(ctx->r4, 0X318);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x8005C2E4: addiu       $a0, $a0, 0x318
    ctx->r4 = ADD32(ctx->r4, 0X318);
    after_3:
    // 0x8005C2E8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005C2EC: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005C2F0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005C2F4: jal         0x80061510
    // 0x8005C2F8: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    func_80061510_3C910(rdram, ctx);
        goto after_4;
    // 0x8005C2F8: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    after_4:
    // 0x8005C2FC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8005C300: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8005C304: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C308: sh          $v1, -0x3DAC($at)
    MEM_H(-0X3DAC, ctx->r1) = ctx->r3;
    // 0x8005C30C: j           L_8005C374
    // 0x8005C310: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8005C374;
    // 0x8005C310: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8005C314:
    // 0x8005C314: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005C318: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8005C31C: bltz        $v0, L_8005C470
    if (SIGNED(ctx->r2) < 0) {
        // 0x8005C320: nop
    
            goto L_8005C470;
    }
    // 0x8005C320: nop

    // 0x8005C324: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005C328: lb          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC8);
    // 0x8005C32C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8005C330: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8005C334: lb          $a0, -0x1450($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1450);
    // 0x8005C338: jal         0x8006036C
    // 0x8005C33C: addiu       $a0, $a0, 0x318
    ctx->r4 = ADD32(ctx->r4, 0X318);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x8005C33C: addiu       $a0, $a0, 0x318
    ctx->r4 = ADD32(ctx->r4, 0X318);
    after_5:
    // 0x8005C340: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8005C344: lbu         $v1, 0x3FF3($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3FF3);
    // 0x8005C348: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8005C34C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C350: sw          $v1, -0x3DE0($at)
    MEM_W(-0X3DE0, ctx->r1) = ctx->r3;
    // 0x8005C354: bne         $v1, $v0, L_8005C364
    if (ctx->r3 != ctx->r2) {
        // 0x8005C358: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8005C364;
    }
    // 0x8005C358: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8005C35C: j           L_8005C470
    // 0x8005C360: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_8005C470;
    // 0x8005C360: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8005C364:
    // 0x8005C364: jal         0x80071F9C
    // 0x8005C368: nop

    func_80071F9C_4D39C(rdram, ctx);
        goto after_6;
    // 0x8005C368: nop

    after_6:
    // 0x8005C36C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8005C370: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8005C374:
    // 0x8005C374: j           L_8005C470
    // 0x8005C378: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_8005C470;
    // 0x8005C378: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8005C37C:
    // 0x8005C37C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005C380: lw          $v1, -0x3DE0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3DE0);
    // 0x8005C384: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8005C388: beq         $v0, $zero, L_8005C43C
    if (ctx->r2 == 0) {
        // 0x8005C38C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8005C43C;
    }
    // 0x8005C38C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8005C390: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005C394: addu        $at, $at, $v0
    gpr jr_addend_8005C39C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005C398: lw          $v0, 0x2698($at)
    ctx->r2 = ADD32(ctx->r1, 0X2698);
    // 0x8005C39C: jr          $v0
    // 0x8005C3A0: nop

    switch (jr_addend_8005C39C >> 2) {
        case 0: goto L_8005C3A4; break;
        case 1: goto L_8005C3D0; break;
        case 2: goto L_8005C3D8; break;
        case 3: goto L_8005C3E0; break;
        case 4: goto L_8005C3E8; break;
        case 5: goto L_8005C3F0; break;
        case 6: goto L_8005C40C; break;
        case 7: goto L_8005C428; break;
        default: switch_error(__func__, 0x8005C39C, 0x800D2698);
    }
    // 0x8005C3A0: nop

L_8005C3A4:
    // 0x8005C3A4: jal         0x8006033C
    // 0x8005C3A8: addiu       $a0, $zero, 0x55
    ctx->r4 = ADD32(0, 0X55);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x8005C3A8: addiu       $a0, $zero, 0x55
    ctx->r4 = ADD32(0, 0X55);
    after_7:
    // 0x8005C3AC: bne         $v0, $zero, L_8005C3B8
    if (ctx->r2 != 0) {
        // 0x8005C3B0: addiu       $v0, $zero, 0x1B
        ctx->r2 = ADD32(0, 0X1B);
            goto L_8005C3B8;
    }
    // 0x8005C3B0: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x8005C3B4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8005C3B8:
    // 0x8005C3B8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C3BC: sb          $v0, -0x3BC8($at)
    MEM_B(-0X3BC8, ctx->r1) = ctx->r2;
    // 0x8005C3C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005C3C4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C3C8: j           L_8005C43C
    // 0x8005C3CC: sb          $v0, -0x3BC7($at)
    MEM_B(-0X3BC7, ctx->r1) = ctx->r2;
        goto L_8005C43C;
    // 0x8005C3CC: sb          $v0, -0x3BC7($at)
    MEM_B(-0X3BC7, ctx->r1) = ctx->r2;
L_8005C3D0:
    // 0x8005C3D0: j           L_8005C42C
    // 0x8005C3D4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8005C42C;
    // 0x8005C3D4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8005C3D8:
    // 0x8005C3D8: j           L_8005C42C
    // 0x8005C3DC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_8005C42C;
    // 0x8005C3DC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8005C3E0:
    // 0x8005C3E0: j           L_8005C42C
    // 0x8005C3E4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8005C42C;
    // 0x8005C3E4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8005C3E8:
    // 0x8005C3E8: j           L_8005C42C
    // 0x8005C3EC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
        goto L_8005C42C;
    // 0x8005C3EC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_8005C3F0:
    // 0x8005C3F0: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x8005C3F4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C3F8: sb          $v0, -0x3BC8($at)
    MEM_B(-0X3BC8, ctx->r1) = ctx->r2;
    // 0x8005C3FC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8005C400: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C404: j           L_8005C43C
    // 0x8005C408: sb          $v0, -0x3BC7($at)
    MEM_B(-0X3BC7, ctx->r1) = ctx->r2;
        goto L_8005C43C;
    // 0x8005C408: sb          $v0, -0x3BC7($at)
    MEM_B(-0X3BC7, ctx->r1) = ctx->r2;
L_8005C40C:
    // 0x8005C40C: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x8005C410: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C414: sb          $v0, -0x3BC8($at)
    MEM_B(-0X3BC8, ctx->r1) = ctx->r2;
    // 0x8005C418: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8005C41C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C420: j           L_8005C43C
    // 0x8005C424: sb          $v0, -0x3BC7($at)
    MEM_B(-0X3BC7, ctx->r1) = ctx->r2;
        goto L_8005C43C;
    // 0x8005C424: sb          $v0, -0x3BC7($at)
    MEM_B(-0X3BC7, ctx->r1) = ctx->r2;
L_8005C428:
    // 0x8005C428: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
L_8005C42C:
    // 0x8005C42C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C430: sb          $v0, -0x3BC8($at)
    MEM_B(-0X3BC8, ctx->r1) = ctx->r2;
    // 0x8005C434: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C438: sb          $zero, -0x3BC7($at)
    MEM_B(-0X3BC7, ctx->r1) = 0;
L_8005C43C:
    // 0x8005C43C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005C440: lbu         $v0, -0x3BC8($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3BC8);
    // 0x8005C444: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005C448: lbu         $v1, -0x3BC7($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3BC7);
    // 0x8005C44C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C450: sb          $v0, -0x3B9F($at)
    MEM_B(-0X3B9F, ctx->r1) = ctx->r2;
    // 0x8005C454: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C458: jal         0x8005C480
    // 0x8005C45C: sb          $v1, -0x3B9E($at)
    MEM_B(-0X3B9E, ctx->r1) = ctx->r3;
    func_8005C480_37880(rdram, ctx);
        goto after_8;
    // 0x8005C45C: sb          $v1, -0x3B9E($at)
    MEM_B(-0X3B9E, ctx->r1) = ctx->r3;
    after_8:
    // 0x8005C460: j           L_8005C470
    // 0x8005C464: nop

        goto L_8005C470;
    // 0x8005C464: nop

L_8005C468:
    // 0x8005C468: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C46C: sw          $v0, -0x3E40($at)
    MEM_W(-0X3E40, ctx->r1) = ctx->r2;
L_8005C470:
    // 0x8005C470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005C474: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8005C478: jr          $ra
    // 0x8005C47C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005C47C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80074A9C_4FE9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80074A9C: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x80074AA0: lw          $v0, 0x3C98($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C98);
    // 0x80074AA4: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x80074AA8: lw          $v1, 0x3C9C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C9C);
    // 0x80074AAC: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x80074AB0: lhu         $a0, 0x3CA0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X3CA0);
    // 0x80074AB4: lui         $a1, 0x8019
    ctx->r5 = S32(0X8019 << 16);
    // 0x80074AB8: lhu         $a1, 0x3CA2($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X3CA2);
    // 0x80074ABC: lui         $a2, 0x8019
    ctx->r6 = S32(0X8019 << 16);
    // 0x80074AC0: lw          $a2, 0x3CF0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X3CF0);
    // 0x80074AC4: lui         $a3, 0x8019
    ctx->r7 = S32(0X8019 << 16);
    // 0x80074AC8: lw          $a3, 0x3CF4($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3CF4);
    // 0x80074ACC: lui         $t0, 0x8019
    ctx->r8 = S32(0X8019 << 16);
    // 0x80074AD0: lw          $t0, 0x3CF8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3CF8);
    // 0x80074AD4: lui         $t1, 0x8019
    ctx->r9 = S32(0X8019 << 16);
    // 0x80074AD8: lw          $t1, 0x3CFC($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3CFC);
    // 0x80074ADC: lui         $t2, 0x8019
    ctx->r10 = S32(0X8019 << 16);
    // 0x80074AE0: lw          $t2, 0x5270($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5270);
    // 0x80074AE4: lui         $t3, 0x8019
    ctx->r11 = S32(0X8019 << 16);
    // 0x80074AE8: lw          $t3, 0x5274($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5274);
    // 0x80074AEC: lui         $t4, 0x8019
    ctx->r12 = S32(0X8019 << 16);
    // 0x80074AF0: lw          $t4, 0x5278($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5278);
    // 0x80074AF4: lui         $t5, 0x8019
    ctx->r13 = S32(0X8019 << 16);
    // 0x80074AF8: lw          $t5, 0x527C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X527C);
    // 0x80074AFC: lui         $t6, 0x8019
    ctx->r14 = S32(0X8019 << 16);
    // 0x80074B00: lw          $t6, 0x5280($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5280);
    // 0x80074B04: lui         $t7, 0x8019
    ctx->r15 = S32(0X8019 << 16);
    // 0x80074B08: lw          $t7, 0x5284($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5284);
    // 0x80074B0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80074B10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80074B14: lui         $s0, 0x8019
    ctx->r16 = S32(0X8019 << 16);
    // 0x80074B18: lhu         $s0, 0x5288($s0)
    ctx->r16 = MEM_HU(ctx->r16, 0X5288);
    // 0x80074B1C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80074B20: lui         $s1, 0x8019
    ctx->r17 = S32(0X8019 << 16);
    // 0x80074B24: lhu         $s1, 0x528A($s1)
    ctx->r17 = MEM_HU(ctx->r17, 0X528A);
    // 0x80074B28: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80074B2C: lui         $s2, 0x8019
    ctx->r18 = S32(0X8019 << 16);
    // 0x80074B30: lhu         $s2, 0x528C($s2)
    ctx->r18 = MEM_HU(ctx->r18, 0X528C);
    // 0x80074B34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80074B38: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074B3C: sw          $v0, -0x3C08($at)
    MEM_W(-0X3C08, ctx->r1) = ctx->r2;
    // 0x80074B40: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074B44: sw          $v1, -0x3C04($at)
    MEM_W(-0X3C04, ctx->r1) = ctx->r3;
    // 0x80074B48: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074B4C: sh          $a0, -0x3C00($at)
    MEM_H(-0X3C00, ctx->r1) = ctx->r4;
    // 0x80074B50: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074B54: sh          $a1, -0x3BFE($at)
    MEM_H(-0X3BFE, ctx->r1) = ctx->r5;
    // 0x80074B58: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074B5C: sw          $a2, -0x3C0C($at)
    MEM_W(-0X3C0C, ctx->r1) = ctx->r6;
    // 0x80074B60: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074B64: sw          $a3, -0x3BFC($at)
    MEM_W(-0X3BFC, ctx->r1) = ctx->r7;
    // 0x80074B68: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074B6C: sw          $t0, -0x3BF8($at)
    MEM_W(-0X3BF8, ctx->r1) = ctx->r8;
    // 0x80074B70: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074B74: sw          $t1, -0x3BF4($at)
    MEM_W(-0X3BF4, ctx->r1) = ctx->r9;
    // 0x80074B78: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074B7C: sw          $t2, -0x3BF0($at)
    MEM_W(-0X3BF0, ctx->r1) = ctx->r10;
    // 0x80074B80: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074B84: sw          $t3, -0x3BEC($at)
    MEM_W(-0X3BEC, ctx->r1) = ctx->r11;
    // 0x80074B88: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074B8C: sw          $t4, -0x3BE8($at)
    MEM_W(-0X3BE8, ctx->r1) = ctx->r12;
    // 0x80074B90: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074B94: sw          $t5, -0x3BE4($at)
    MEM_W(-0X3BE4, ctx->r1) = ctx->r13;
    // 0x80074B98: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074B9C: sw          $t6, -0x3BE0($at)
    MEM_W(-0X3BE0, ctx->r1) = ctx->r14;
    // 0x80074BA0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074BA4: sw          $t7, -0x3BDC($at)
    MEM_W(-0X3BDC, ctx->r1) = ctx->r15;
    // 0x80074BA8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074BAC: sh          $s0, -0x3BD8($at)
    MEM_H(-0X3BD8, ctx->r1) = ctx->r16;
    // 0x80074BB0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074BB4: sh          $s1, -0x3BD6($at)
    MEM_H(-0X3BD6, ctx->r1) = ctx->r17;
    // 0x80074BB8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074BBC: sh          $s2, -0x3BD4($at)
    MEM_H(-0X3BD4, ctx->r1) = ctx->r18;
    // 0x80074BC0: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x80074BC4: lhu         $a0, 0x528E($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X528E);
    // 0x80074BC8: lui         $a1, 0x8019
    ctx->r5 = S32(0X8019 << 16);
    // 0x80074BCC: lhu         $a1, 0x5290($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X5290);
    // 0x80074BD0: lui         $a2, 0x8019
    ctx->r6 = S32(0X8019 << 16);
    // 0x80074BD4: lhu         $a2, 0x5292($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X5292);
    // 0x80074BD8: lui         $a3, 0x8019
    ctx->r7 = S32(0X8019 << 16);
    // 0x80074BDC: lw          $a3, 0x3D00($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3D00);
    // 0x80074BE0: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x80074BE4: lbu         $v0, 0x3D04($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3D04);
    // 0x80074BE8: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x80074BEC: lbu         $v1, 0x3D05($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3D05);
    // 0x80074BF0: lui         $t0, 0x8019
    ctx->r8 = S32(0X8019 << 16);
    // 0x80074BF4: lbu         $t0, 0x3D06($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X3D06);
    // 0x80074BF8: lui         $t1, 0x8019
    ctx->r9 = S32(0X8019 << 16);
    // 0x80074BFC: lbu         $t1, 0x3D07($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X3D07);
    // 0x80074C00: lui         $t2, 0x8019
    ctx->r10 = S32(0X8019 << 16);
    // 0x80074C04: lhu         $t2, 0x3D40($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X3D40);
    // 0x80074C08: lui         $t3, 0x8019
    ctx->r11 = S32(0X8019 << 16);
    // 0x80074C0C: lbu         $t3, 0x3D74($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X3D74);
    // 0x80074C10: lui         $t4, 0x8019
    ctx->r12 = S32(0X8019 << 16);
    // 0x80074C14: lbu         $t4, 0x3D75($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X3D75);
    // 0x80074C18: lui         $t5, 0x8019
    ctx->r13 = S32(0X8019 << 16);
    // 0x80074C1C: lbu         $t5, 0x3D76($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X3D76);
    // 0x80074C20: lui         $t6, 0x8019
    ctx->r14 = S32(0X8019 << 16);
    // 0x80074C24: lbu         $t6, 0x3D77($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3D77);
    // 0x80074C28: lui         $t7, 0x8019
    ctx->r15 = S32(0X8019 << 16);
    // 0x80074C2C: lbu         $t7, 0x3D70($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X3D70);
    // 0x80074C30: lui         $s0, 0x8019
    ctx->r16 = S32(0X8019 << 16);
    // 0x80074C34: lbu         $s0, 0x3D71($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0X3D71);
    // 0x80074C38: lui         $s1, 0x8019
    ctx->r17 = S32(0X8019 << 16);
    // 0x80074C3C: lhu         $s1, 0x3D42($s1)
    ctx->r17 = MEM_HU(ctx->r17, 0X3D42);
    // 0x80074C40: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074C44: sh          $a0, -0x3BD2($at)
    MEM_H(-0X3BD2, ctx->r1) = ctx->r4;
    // 0x80074C48: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074C4C: sh          $a1, -0x3BD0($at)
    MEM_H(-0X3BD0, ctx->r1) = ctx->r5;
    // 0x80074C50: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074C54: sh          $a2, -0x3BCE($at)
    MEM_H(-0X3BCE, ctx->r1) = ctx->r6;
    // 0x80074C58: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074C5C: sw          $a3, -0x3BCC($at)
    MEM_W(-0X3BCC, ctx->r1) = ctx->r7;
    // 0x80074C60: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80074C64: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80074C68: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074C6C: sb          $v0, -0x3BC8($at)
    MEM_B(-0X3BC8, ctx->r1) = ctx->r2;
    // 0x80074C70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80074C74: sb          $v1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r3;
    // 0x80074C78: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074C7C: sb          $v1, -0x3BC7($at)
    MEM_B(-0X3BC7, ctx->r1) = ctx->r3;
    // 0x80074C80: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074C84: sb          $t0, -0x3BC6($at)
    MEM_B(-0X3BC6, ctx->r1) = ctx->r8;
    // 0x80074C88: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074C8C: sb          $t1, -0x3BC5($at)
    MEM_B(-0X3BC5, ctx->r1) = ctx->r9;
    // 0x80074C90: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074C94: sh          $t2, -0x3BB8($at)
    MEM_H(-0X3BB8, ctx->r1) = ctx->r10;
    // 0x80074C98: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074C9C: sb          $t3, -0x3BA0($at)
    MEM_B(-0X3BA0, ctx->r1) = ctx->r11;
    // 0x80074CA0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074CA4: sb          $t4, -0x3B9F($at)
    MEM_B(-0X3B9F, ctx->r1) = ctx->r12;
    // 0x80074CA8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074CAC: sb          $t5, -0x3B9E($at)
    MEM_B(-0X3B9E, ctx->r1) = ctx->r13;
    // 0x80074CB0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074CB4: sb          $t6, -0x3B9D($at)
    MEM_B(-0X3B9D, ctx->r1) = ctx->r14;
    // 0x80074CB8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074CBC: sb          $t7, -0x3B9C($at)
    MEM_B(-0X3B9C, ctx->r1) = ctx->r15;
    // 0x80074CC0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074CC4: sb          $s0, -0x3B9B($at)
    MEM_B(-0X3B9B, ctx->r1) = ctx->r16;
    // 0x80074CC8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074CCC: sh          $s1, -0x3BB6($at)
    MEM_H(-0X3BB6, ctx->r1) = ctx->r17;
    // 0x80074CD0: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x80074CD4: lw          $v0, 0x3D50($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3D50);
    // 0x80074CD8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074CDC: sw          $v0, -0x3BB4($at)
    MEM_W(-0X3BB4, ctx->r1) = ctx->r2;
    // 0x80074CE0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80074CE4: lbu         $v0, -0x3BB2($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3BB2);
    // 0x80074CE8: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x80074CEC: addiu       $t1, $t1, 0x47B8
    ctx->r9 = ADD32(ctx->r9, 0X47B8);
    // 0x80074CF0: lui         $t2, 0x8019
    ctx->r10 = S32(0X8019 << 16);
    // 0x80074CF4: addiu       $t2, $t2, 0x3C70
    ctx->r10 = ADD32(ctx->r10, 0X3C70);
    // 0x80074CF8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074CFC: sh          $zero, -0x3BB4($at)
    MEM_H(-0X3BB4, ctx->r1) = 0;
    // 0x80074D00: sltiu       $v0, $v0, 0x18
    ctx->r2 = ctx->r2 < 0X18 ? 1 : 0;
    // 0x80074D04: bne         $v0, $zero, L_80074D14
    if (ctx->r2 != 0) {
        // 0x80074D08: nop
    
            goto L_80074D14;
    }
    // 0x80074D08: nop

    // 0x80074D0C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074D10: sb          $zero, -0x3BB2($at)
    MEM_B(-0X3BB2, ctx->r1) = 0;
L_80074D14:
    // 0x80074D14: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80074D18: lbu         $v0, -0x3BB1($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3BB1);
    // 0x80074D1C: sltiu       $v0, $v0, 0x6
    ctx->r2 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x80074D20: bne         $v0, $zero, L_80074D30
    if (ctx->r2 != 0) {
        // 0x80074D24: nop
    
            goto L_80074D30;
    }
    // 0x80074D24: nop

    // 0x80074D28: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074D2C: sb          $zero, -0x3BB1($at)
    MEM_B(-0X3BB1, ctx->r1) = 0;
L_80074D30:
    // 0x80074D30: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x80074D34: lbu         $a0, 0x3D0A($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3D0A);
    // 0x80074D38: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x80074D3C: lbu         $v0, 0x3D08($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3D08);
    // 0x80074D40: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x80074D44: lbu         $v1, 0x3D09($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3D09);
    // 0x80074D48: lui         $a1, 0x8019
    ctx->r5 = S32(0X8019 << 16);
    // 0x80074D4C: lbu         $a1, 0x3D0C($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3D0C);
    // 0x80074D50: lui         $a2, 0x8019
    ctx->r6 = S32(0X8019 << 16);
    // 0x80074D54: lbu         $a2, 0x3D0D($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X3D0D);
    // 0x80074D58: lui         $a3, 0x8019
    ctx->r7 = S32(0X8019 << 16);
    // 0x80074D5C: lbu         $a3, 0x3D0E($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X3D0E);
    // 0x80074D60: lui         $t0, 0x8019
    ctx->r8 = S32(0X8019 << 16);
    // 0x80074D64: lbu         $t0, 0x3D0F($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X3D0F);
    // 0x80074D68: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074D6C: sb          $a0, -0x3BC2($at)
    MEM_B(-0X3BC2, ctx->r1) = ctx->r4;
    // 0x80074D70: addiu       $a0, $t1, 0x8
    ctx->r4 = ADD32(ctx->r9, 0X8);
    // 0x80074D74: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074D78: sb          $a1, -0x3BC0($at)
    MEM_B(-0X3BC0, ctx->r1) = ctx->r5;
    // 0x80074D7C: addiu       $a1, $t2, 0xC0
    ctx->r5 = ADD32(ctx->r10, 0XC0);
    // 0x80074D80: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074D84: sb          $a2, -0x3BBF($at)
    MEM_B(-0X3BBF, ctx->r1) = ctx->r6;
    // 0x80074D88: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074D8C: sb          $v0, -0x3BC4($at)
    MEM_B(-0X3BC4, ctx->r1) = ctx->r2;
    // 0x80074D90: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074D94: sb          $v1, -0x3BC3($at)
    MEM_B(-0X3BC3, ctx->r1) = ctx->r3;
    // 0x80074D98: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074D9C: sb          $a3, -0x3BBE($at)
    MEM_B(-0X3BBE, ctx->r1) = ctx->r7;
    // 0x80074DA0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80074DA4: sb          $t0, -0x3BBD($at)
    MEM_B(-0X3BBD, ctx->r1) = ctx->r8;
    // 0x80074DA8: jal         0x8009A3B4
    // 0x80074DAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80074DAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80074DB0: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x80074DB4: lhu         $v1, 0x3D38($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X3D38);
    // 0x80074DB8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80074DBC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80074DC0: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80074DC4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80074DC8: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80074DCC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80074DD0: sh          $v1, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r3;
    // 0x80074DD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80074DD8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80074DDC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80074DE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80074DE4: jr          $ra
    // 0x80074DE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80074DE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800357E4_10BE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800357E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800357E8: slti        $a0, $a0, 0x1F
    ctx->r4 = SIGNED(ctx->r4) < 0X1F ? 1 : 0;
    // 0x800357EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800357F0: beq         $a0, $zero, L_80035858
    if (ctx->r4 == 0) {
        // 0x800357F4: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_80035858;
    }
    // 0x800357F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800357F8: jal         0x80092EB0
    // 0x800357FC: nop

    func_80092EB0_6E2B0(rdram, ctx);
        goto after_0;
    // 0x800357FC: nop

    after_0:
    // 0x80035800: jal         0x80087570
    // 0x80035804: nop

    Graph_ThreadStop(rdram, ctx);
        goto after_1;
    // 0x80035804: nop

    after_1:
    // 0x80035808: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x8003580C: addiu       $s0, $s0, -0xBC8
    ctx->r16 = ADD32(ctx->r16, -0XBC8);
    // 0x80035810: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    // 0x80035814: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80035818: lh          $a1, -0xBC6($a1)
    ctx->r5 = MEM_H(ctx->r5, -0XBC6);
    // 0x8003581C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80035820: lh          $a2, -0xBC4($a2)
    ctx->r6 = MEM_H(ctx->r6, -0XBC4);
    // 0x80035824: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x80035828: jal         0x80035CA0
    // 0x8003582C: lh          $a3, -0xBC0($a3)
    ctx->r7 = MEM_H(ctx->r7, -0XBC0);
    func_80035CA0_110A0(rdram, ctx);
        goto after_2;
    // 0x8003582C: lh          $a3, -0xBC0($a3)
    ctx->r7 = MEM_H(ctx->r7, -0XBC0);
    after_2:
    // 0x80035830: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    // 0x80035834: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80035838: lh          $a1, -0xBC6($a1)
    ctx->r5 = MEM_H(ctx->r5, -0XBC6);
    // 0x8003583C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80035840: lh          $a2, -0xBC2($a2)
    ctx->r6 = MEM_H(ctx->r6, -0XBC2);
    // 0x80035844: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x80035848: jal         0x80035CA0
    // 0x8003584C: lh          $a3, -0xBC0($a3)
    ctx->r7 = MEM_H(ctx->r7, -0XBC0);
    func_80035CA0_110A0(rdram, ctx);
        goto after_3;
    // 0x8003584C: lh          $a3, -0xBC0($a3)
    ctx->r7 = MEM_H(ctx->r7, -0XBC0);
    after_3:
    // 0x80035850: jal         0x80087590
    // 0x80035854: nop

    func_80087590_62990(rdram, ctx);
        goto after_4;
    // 0x80035854: nop

    after_4:
L_80035858:
    // 0x80035858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003585C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80035860: jr          $ra
    // 0x80035864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80035864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void __sinf_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80099D90: swc1        $f12, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f12.u32l;
    // 0x80099D94: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x80099D98: sra         $v1, $v0, 22
    ctx->r3 = S32(SIGNED(ctx->r2) >> 22);
    // 0x80099D9C: andi        $v1, $v1, 0x1FF
    ctx->r3 = ctx->r3 & 0X1FF;
    // 0x80099DA0: slti        $v0, $v1, 0xFF
    ctx->r2 = SIGNED(ctx->r3) < 0XFF ? 1 : 0;
    // 0x80099DA4: beq         $v0, $zero, L_80099E14
    if (ctx->r2 == 0) {
        // 0x80099DA8: slti        $v0, $v1, 0xE6
        ctx->r2 = SIGNED(ctx->r3) < 0XE6 ? 1 : 0;
            goto L_80099E14;
    }
    // 0x80099DA8: slti        $v0, $v1, 0xE6
    ctx->r2 = SIGNED(ctx->r3) < 0XE6 ? 1 : 0;
    // 0x80099DAC: bne         $v0, $zero, L_80099E0C
    if (ctx->r2 != 0) {
        // 0x80099DB0: cvt.d.s     $f6, $f12
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.d = CVT_D_S(ctx->f12.fl);
            goto L_80099E0C;
    }
    // 0x80099DB0: cvt.d.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.d = CVT_D_S(ctx->f12.fl);
    // 0x80099DB4: nop

    // 0x80099DB8: mul.d       $f4, $f6, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f6.d);
    // 0x80099DBC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099DC0: ldc1        $f0, 0x3210($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X3210);
    // 0x80099DC4: mul.d       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f4.d);
    // 0x80099DC8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099DCC: ldc1        $f2, 0x3208($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X3208);
    // 0x80099DD0: add.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
    // 0x80099DD4: mul.d       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f4.d);
    // 0x80099DD8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099DDC: ldc1        $f2, 0x3200($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X3200);
    // 0x80099DE0: add.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
    // 0x80099DE4: mul.d       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f4.d);
    // 0x80099DE8: nop

    // 0x80099DEC: mul.d       $f2, $f6, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f2.d = MUL_D(ctx->f6.d, ctx->f4.d);
    // 0x80099DF0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099DF4: ldc1        $f4, 0x31F8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X31F8);
    // 0x80099DF8: add.d       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = ctx->f0.d + ctx->f4.d;
    // 0x80099DFC: mul.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f0.d);
    // 0x80099E00: add.d       $f0, $f6, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f6.d + ctx->f2.d;
    // 0x80099E04: j           L_80099F28
    // 0x80099E08: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
        goto L_80099F28;
    // 0x80099E08: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
L_80099E0C:
    // 0x80099E0C: j           L_80099F28
    // 0x80099E10: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_80099F28;
    // 0x80099E10: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_80099E14:
    // 0x80099E14: slti        $v0, $v1, 0x136
    ctx->r2 = SIGNED(ctx->r3) < 0X136 ? 1 : 0;
    // 0x80099E18: beq         $v0, $zero, L_80099F04
    if (ctx->r2 == 0) {
        // 0x80099E1C: nop
    
            goto L_80099F04;
    }
    // 0x80099E1C: nop

    // 0x80099E20: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099E24: ldc1        $f0, 0x3218($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X3218);
    // 0x80099E28: cvt.d.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.d = CVT_D_S(ctx->f12.fl);
    // 0x80099E2C: mul.d       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x80099E30: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80099E34: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x80099E38: nop

    // 0x80099E3C: c.le.d      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.d <= ctx->f4.d;
    // 0x80099E40: nop

    // 0x80099E44: bc1f        L_80099E5C
    if (!c1cs) {
        // 0x80099E48: nop
    
            goto L_80099E5C;
    }
    // 0x80099E48: nop

    // 0x80099E4C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099E50: ldc1        $f0, 0x3238($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X3238);
    // 0x80099E54: j           L_80099E68
    // 0x80099E58: add.d       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f4.d + ctx->f0.d;
        goto L_80099E68;
    // 0x80099E58: add.d       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f4.d + ctx->f0.d;
L_80099E5C:
    // 0x80099E5C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099E60: ldc1        $f0, 0x3240($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X3240);
    // 0x80099E64: sub.d       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f4.d - ctx->f0.d;
L_80099E68:
    // 0x80099E68: trunc.w.d   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x80099E6C: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x80099E70: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099E74: ldc1        $f2, 0x3220($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X3220);
    // 0x80099E78: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x80099E7C: nop

    // 0x80099E80: cvt.d.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.d = CVT_D_W(ctx->f4.u32l);
    // 0x80099E84: mul.d       $f2, $f4, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x80099E88: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099E8C: ldc1        $f0, 0x3228($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X3228);
    // 0x80099E90: mul.d       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x80099E94: sub.d       $f6, $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f6.d - ctx->f2.d;
    // 0x80099E98: sub.d       $f6, $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = ctx->f6.d - ctx->f0.d;
    // 0x80099E9C: mul.d       $f4, $f6, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f6.d);
    // 0x80099EA0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099EA4: ldc1        $f0, 0x3210($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X3210);
    // 0x80099EA8: mul.d       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f4.d);
    // 0x80099EAC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099EB0: ldc1        $f2, 0x3208($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X3208);
    // 0x80099EB4: add.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
    // 0x80099EB8: mul.d       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f4.d);
    // 0x80099EBC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099EC0: ldc1        $f2, 0x3200($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X3200);
    // 0x80099EC4: add.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
    // 0x80099EC8: mul.d       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f4.d);
    // 0x80099ECC: nop

    // 0x80099ED0: mul.d       $f2, $f6, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f2.d = MUL_D(ctx->f6.d, ctx->f4.d);
    // 0x80099ED4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099ED8: ldc1        $f4, 0x31F8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X31F8);
    // 0x80099EDC: add.d       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = ctx->f0.d + ctx->f4.d;
    // 0x80099EE0: mul.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f0.d);
    // 0x80099EE4: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80099EE8: bne         $v0, $zero, L_80099EF8
    if (ctx->r2 != 0) {
        // 0x80099EEC: add.d       $f0, $f6, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f6.d + ctx->f2.d;
            goto L_80099EF8;
    }
    // 0x80099EEC: add.d       $f0, $f6, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f6.d + ctx->f2.d;
    // 0x80099EF0: j           L_80099F28
    // 0x80099EF4: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
        goto L_80099F28;
    // 0x80099EF4: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
L_80099EF8:
    // 0x80099EF8: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x80099EFC: j           L_80099F28
    // 0x80099F00: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80099F28;
    // 0x80099F00: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80099F04:
    // 0x80099F04: c.eq.s      $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f12.fl == ctx->f12.fl;
    // 0x80099F08: nop

    // 0x80099F0C: bc1f        L_80099F20
    if (!c1cs) {
        // 0x80099F10: nop
    
            goto L_80099F20;
    }
    // 0x80099F10: nop

    // 0x80099F14: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099F18: j           L_80099F28
    // 0x80099F1C: lwc1        $f0, 0x3230($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3230);
        goto L_80099F28;
    // 0x80099F1C: lwc1        $f0, 0x3230($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3230);
L_80099F20:
    // 0x80099F20: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099F24: lwc1        $f0, 0x32D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X32D0);
L_80099F28:
    // 0x80099F28: jr          $ra
    // 0x80099F2C: nop

    TRACE_RETURN()
    return;
    // 0x80099F2C: nop

;}
RECOMP_FUNC void func_80063818_3EC18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80063818: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8006381C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80063820: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80063824: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80063828: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8006382C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80063830: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80063834: addiu       $v1, $zero, 0xED
    ctx->r3 = ADD32(0, 0XED);
    // 0x80063838: sb          $v1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r3;
    // 0x8006383C: lb          $a1, 0x71($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X71);
    // 0x80063840: lb          $v0, 0x73($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X73);
    // 0x80063844: bne         $a1, $v0, L_80063B30
    if (ctx->r5 != ctx->r2) {
        // 0x80063848: sb          $zero, 0x78($s0)
        MEM_B(0X78, ctx->r16) = 0;
            goto L_80063B30;
    }
    // 0x80063848: sb          $zero, 0x78($s0)
    MEM_B(0X78, ctx->r16) = 0;
    // 0x8006384C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80063850: lui         $v1, 0xC0
    ctx->r3 = S32(0XC0 << 16);
    // 0x80063854: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80063858: bne         $v0, $zero, L_80063B30
    if (ctx->r2 != 0) {
        // 0x8006385C: nop
    
            goto L_80063B30;
    }
    // 0x8006385C: nop

    // 0x80063860: lhu         $a0, 0xBA($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XBA);
    // 0x80063864: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x80063868: beq         $v0, $zero, L_80063880
    if (ctx->r2 == 0) {
        // 0x8006386C: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_80063880;
    }
    // 0x8006386C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x80063870: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80063874: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x80063878: j           L_800638BC
    // 0x8006387C: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
        goto L_800638BC;
    // 0x8006387C: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
L_80063880:
    // 0x80063880: lw          $a1, 0xB8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XB8);
    // 0x80063884: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x80063888: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8006388C: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x80063890: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x80063894: bne         $v0, $v1, L_800638C8
    if (ctx->r2 != ctx->r3) {
        // 0x80063898: andi        $v0, $a0, 0x40
        ctx->r2 = ctx->r4 & 0X40;
            goto L_800638C8;
    }
    // 0x80063898: andi        $v0, $a0, 0x40
    ctx->r2 = ctx->r4 & 0X40;
    // 0x8006389C: lhu         $v1, 0xBC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XBC);
    // 0x800638A0: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x800638A4: bne         $v0, $zero, L_80063920
    if (ctx->r2 != 0) {
        // 0x800638A8: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80063920;
    }
    // 0x800638A8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x800638AC: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x800638B0: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x800638B4: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x800638B8: sh          $v1, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r3;
L_800638BC:
    // 0x800638BC: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x800638C0: j           L_80063A68
    // 0x800638C4: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
        goto L_80063A68;
    // 0x800638C4: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
L_800638C8:
    // 0x800638C8: beq         $v0, $zero, L_800638E0
    if (ctx->r2 == 0) {
        // 0x800638CC: lui         $v0, 0x40
        ctx->r2 = S32(0X40 << 16);
            goto L_800638E0;
    }
    // 0x800638CC: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x800638D0: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x800638D4: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x800638D8: j           L_80063914
    // 0x800638DC: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
        goto L_80063914;
    // 0x800638DC: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
L_800638E0:
    // 0x800638E0: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x800638E4: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x800638E8: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x800638EC: bne         $v0, $v1, L_80063928
    if (ctx->r2 != ctx->r3) {
        // 0x800638F0: andi        $v0, $a0, 0x80
        ctx->r2 = ctx->r4 & 0X80;
            goto L_80063928;
    }
    // 0x800638F0: andi        $v0, $a0, 0x80
    ctx->r2 = ctx->r4 & 0X80;
    // 0x800638F4: lhu         $v1, 0xBC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XBC);
    // 0x800638F8: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x800638FC: bne         $v0, $zero, L_80063920
    if (ctx->r2 != 0) {
        // 0x80063900: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80063920;
    }
    // 0x80063900: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80063904: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80063908: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x8006390C: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x80063910: sh          $v1, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r3;
L_80063914:
    // 0x80063914: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80063918: j           L_80063A68
    // 0x8006391C: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
        goto L_80063A68;
    // 0x8006391C: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
L_80063920:
    // 0x80063920: j           L_80063A68
    // 0x80063924: sh          $v0, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r2;
        goto L_80063A68;
    // 0x80063924: sh          $v0, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r2;
L_80063928:
    // 0x80063928: beq         $v0, $zero, L_8006399C
    if (ctx->r2 == 0) {
        // 0x8006392C: andi        $v0, $a0, 0x20
        ctx->r2 = ctx->r4 & 0X20;
            goto L_8006399C;
    }
    // 0x8006392C: andi        $v0, $a0, 0x20
    ctx->r2 = ctx->r4 & 0X20;
    // 0x80063930: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x80063934: lb          $v0, 0x72($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X72);
    // 0x80063938: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8006393C: beq         $v1, $v0, L_80063A68
    if (ctx->r3 == ctx->r2) {
        // 0x80063940: sh          $zero, 0xBC($s0)
        MEM_H(0XBC, ctx->r16) = 0;
            goto L_80063A68;
    }
    // 0x80063940: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
    // 0x80063944: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80063948: lbu         $v0, 0x3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3);
    // 0x8006394C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80063950: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80063954: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80063958: lw          $v0, 0x2E6C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2E6C);
    // 0x8006395C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80063960: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80063964: addiu       $s1, $s1, 0x2E6C
    ctx->r17 = ADD32(ctx->r17, 0X2E6C);
    // 0x80063968: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006396C: bne         $v1, $v0, L_80063980
    if (ctx->r3 != ctx->r2) {
        // 0x80063970: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_80063980;
    }
    // 0x80063970: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x80063974: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80063978: jal         0x8002A2F8
    // 0x8006397C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x8006397C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
L_80063980:
    // 0x80063980: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80063984: lbu         $v0, 0x3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3);
    // 0x80063988: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8006398C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80063990: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80063994: j           L_80063A68
    // 0x80063998: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
        goto L_80063A68;
    // 0x80063998: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
L_8006399C:
    // 0x8006399C: beq         $v0, $zero, L_80063A10
    if (ctx->r2 == 0) {
        // 0x800639A0: andi        $v0, $a0, 0x6000
        ctx->r2 = ctx->r4 & 0X6000;
            goto L_80063A10;
    }
    // 0x800639A0: andi        $v0, $a0, 0x6000
    ctx->r2 = ctx->r4 & 0X6000;
    // 0x800639A4: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x800639A8: lb          $v0, 0x72($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X72);
    // 0x800639AC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800639B0: beq         $v1, $v0, L_80063A68
    if (ctx->r3 == ctx->r2) {
        // 0x800639B4: sh          $zero, 0xBC($s0)
        MEM_H(0XBC, ctx->r16) = 0;
            goto L_80063A68;
    }
    // 0x800639B4: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
    // 0x800639B8: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x800639BC: lbu         $v0, 0x3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3);
    // 0x800639C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800639C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800639C8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800639CC: lw          $v0, 0x2E6C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2E6C);
    // 0x800639D0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x800639D4: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x800639D8: addiu       $s1, $s1, 0x2E6C
    ctx->r17 = ADD32(ctx->r17, 0X2E6C);
    // 0x800639DC: bne         $v0, $zero, L_800639F0
    if (ctx->r2 != 0) {
        // 0x800639E0: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_800639F0;
    }
    // 0x800639E0: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x800639E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800639E8: jal         0x8002A2F8
    // 0x800639EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_1;
    // 0x800639EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
L_800639F0:
    // 0x800639F0: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x800639F4: lbu         $v0, 0x3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3);
    // 0x800639F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800639FC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80063A00: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80063A04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80063A08: j           L_80063A68
    // 0x80063A0C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
        goto L_80063A68;
    // 0x80063A0C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_80063A10:
    // 0x80063A10: beq         $v0, $zero, L_80063A68
    if (ctx->r2 == 0) {
        // 0x80063A14: nop
    
            goto L_80063A68;
    }
    // 0x80063A14: nop

    // 0x80063A18: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80063A1C: lbu         $v0, 0x3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3);
    // 0x80063A20: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80063A24: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80063A28: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80063A2C: lw          $v1, 0x2E6C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2E6C);
    // 0x80063A30: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80063A34: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x80063A38: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80063A3C: lb          $v0, 0x72($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X72);
    // 0x80063A40: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x80063A44: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80063A48: beq         $v1, $v0, L_80063A68
    if (ctx->r3 == ctx->r2) {
        // 0x80063A4C: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_80063A68;
    }
    // 0x80063A4C: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x80063A50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80063A54: jal         0x8002A2F8
    // 0x80063A58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x80063A58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80063A5C: lhu         $v0, 0xBA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XBA);
    // 0x80063A60: andi        $v0, $v0, 0x9FFF
    ctx->r2 = ctx->r2 & 0X9FFF;
    // 0x80063A64: sh          $v0, 0xBA($s0)
    MEM_H(0XBA, ctx->r16) = ctx->r2;
L_80063A68:
    // 0x80063A68: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    // 0x80063A6C: beq         $a1, $zero, L_80063AA0
    if (ctx->r5 == 0) {
        // 0x80063A70: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_80063AA0;
    }
    // 0x80063A70: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80063A74: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x80063A78: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    // 0x80063A7C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80063A80: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80063A84: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80063A88: lw          $v0, 0x2E6C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2E6C);
    // 0x80063A8C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80063A90: lbu         $a0, 0x4($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X4);
    // 0x80063A94: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80063A98: j           L_80063AD8
    // 0x80063A9C: lbu         $a2, 0x5($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X5);
        goto L_80063AD8;
    // 0x80063A9C: lbu         $a2, 0x5($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X5);
L_80063AA0:
    // 0x80063AA0: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x80063AA4: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    // 0x80063AA8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80063AAC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80063AB0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80063AB4: lw          $v0, 0x2E6C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2E6C);
    // 0x80063AB8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80063ABC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80063AC0: lbu         $v0, 0x5($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5);
    // 0x80063AC4: lbu         $a0, 0x4($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X4);
    // 0x80063AC8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80063ACC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80063AD0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80063AD4: lw          $a1, 0x27EC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X27EC);
L_80063AD8:
    // 0x80063AD8: jal         0x80061510
    // 0x80063ADC: nop

    func_80061510_3C910(rdram, ctx);
        goto after_3;
    // 0x80063ADC: nop

    after_3:
    // 0x80063AE0: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x80063AE4: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80063AE8: sb          $v0, 0x7($v1)
    MEM_B(0X7, ctx->r3) = ctx->r2;
    // 0x80063AEC: lbu         $a0, 0x78($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X78);
    // 0x80063AF0: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80063AF4: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80063AF8: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80063AFC: sw          $v0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r2;
    // 0x80063B00: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80063B04: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80063B08: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x80063B0C: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x80063B10: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80063B14: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80063B18: beq         $v0, $v1, L_80063B30
    if (ctx->r2 == ctx->r3) {
        // 0x80063B1C: sb          $a0, 0x78($s0)
        MEM_B(0X78, ctx->r16) = ctx->r4;
            goto L_80063B30;
    }
    // 0x80063B1C: sb          $a0, 0x78($s0)
    MEM_B(0X78, ctx->r16) = ctx->r4;
    // 0x80063B20: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x80063B24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80063B28: jal         0x8002A2F8
    // 0x80063B2C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_4;
    // 0x80063B2C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
L_80063B30:
    // 0x80063B30: lbu         $v0, 0x73($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X73);
    // 0x80063B34: lbu         $v1, 0x78($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X78);
    // 0x80063B38: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80063B3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80063B40: addiu       $v1, $v1, 0x80
    ctx->r3 = ADD32(ctx->r3, 0X80);
    // 0x80063B44: addiu       $a0, $a0, 0x7
    ctx->r4 = ADD32(ctx->r4, 0X7);
    // 0x80063B48: sb          $v1, 0x78($s0)
    MEM_B(0X78, ctx->r16) = ctx->r3;
    // 0x80063B4C: sb          $v0, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r2;
    // 0x80063B50: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    // 0x80063B54: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80063B58: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80063B5C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80063B60: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80063B64: jr          $ra
    // 0x80063B68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80063B68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8004D554_28954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004D554: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8004D558: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8004D55C: beq         $v0, $zero, L_8004D588
    if (ctx->r2 == 0) {
        // 0x8004D560: nop
    
            goto L_8004D588;
    }
    // 0x8004D560: nop

    // 0x8004D564: lhu         $v0, 0x38($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X38);
    // 0x8004D568: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8004D56C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004D570: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x8004D574: lhu         $v0, 0x3C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3C);
    // 0x8004D578: lhu         $v1, 0x4($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4);
    // 0x8004D57C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004D580: j           L_8004D5A8
    // 0x8004D584: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
        goto L_8004D5A8;
    // 0x8004D584: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
L_8004D588:
    // 0x8004D588: lhu         $v0, 0x1C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X1C);
    // 0x8004D58C: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8004D590: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004D594: sh          $v0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r2;
    // 0x8004D598: lhu         $v0, 0x20($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X20);
    // 0x8004D59C: lhu         $v1, 0x4($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4);
    // 0x8004D5A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004D5A4: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
L_8004D5A8:
    // 0x8004D5A8: jr          $ra
    // 0x8004D5AC: nop

    TRACE_RETURN()
    return;
    // 0x8004D5AC: nop

;}
RECOMP_FUNC void func_80046308_21708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80046308: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8004630C: lh          $v0, -0x35B6($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X35B6);
    // 0x80046310: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x80046314: beq         $v1, $zero, L_8004635C
    if (ctx->r3 == 0) {
        // 0x80046318: nop
    
            goto L_8004635C;
    }
    // 0x80046318: nop

    // 0x8004631C: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x80046320: blez        $v0, L_80046344
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80046324: nop
    
            goto L_80046344;
    }
    // 0x80046324: nop

    // 0x80046328: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8004632C: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x80046330: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80046334: beq         $v0, $zero, L_8004635C
    if (ctx->r2 == 0) {
        // 0x80046338: andi        $v1, $v1, 0x1
        ctx->r3 = ctx->r3 & 0X1;
            goto L_8004635C;
    }
    // 0x80046338: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x8004633C: j           L_8004635C
    // 0x80046340: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
        goto L_8004635C;
    // 0x80046340: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_80046344:
    // 0x80046344: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80046348: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x8004634C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80046350: bnel        $v0, $zero, L_8004635C
    if (ctx->r2 != 0) {
        // 0x80046354: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8004635C;
    }
    goto skip_0;
    // 0x80046354: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_0:
    // 0x80046358: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
L_8004635C:
    // 0x8004635C: jr          $ra
    // 0x80046360: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    TRACE_RETURN()
    return;
    // 0x80046360: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_8004D5B0_289B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004D5B0: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    // 0x8004D5B4: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8004D5B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004D5BC: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x8004D5C0: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x8004D5C4: lhu         $v1, 0x4($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4);
    // 0x8004D5C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004D5CC: jr          $ra
    // 0x8004D5D0: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8004D5D0: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8007108C_4C48C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007108C: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x80071090: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80071094: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80071098: lb          $v0, 0x4F5($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X4F5);
    // 0x8007109C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800710A0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x800710A4: lw          $v1, 0x351C($at)
    ctx->r3 = MEM_W(ctx->r1, 0X351C);
    // 0x800710A8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800710AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800710B0: jr          $ra
    // 0x800710B4: lh          $v0, 0x2($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X2);
    TRACE_RETURN()
    return;
    // 0x800710B4: lh          $v0, 0x2($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X2);
;}
RECOMP_FUNC void func_80060234_3B634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80060234: bne         $a0, $zero, L_80060258
    if (ctx->r4 != 0) {
        // 0x80060238: nop
    
            goto L_80060258;
    }
    // 0x80060238: nop

    // 0x8006023C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80060240: addiu       $v1, $v1, 0x5668
    ctx->r3 = ADD32(ctx->r3, 0X5668);
    // 0x80060244: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
L_80060248:
    // 0x80060248: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x8006024C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80060250: bgez        $v0, L_80060248
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80060254: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80060248;
    }
    // 0x80060254: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_80060258:
    // 0x80060258: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8006025C: sw          $zero, -0x3A50($at)
    MEM_W(-0X3A50, ctx->r1) = 0;
    // 0x80060260: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80060264: sw          $zero, -0x35A0($at)
    MEM_W(-0X35A0, ctx->r1) = 0;
    // 0x80060268: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8006026C: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
    // 0x80060270: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80060274: jr          $ra
    // 0x80060278: sw          $zero, -0x3598($at)
    MEM_W(-0X3598, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80060278: sw          $zero, -0x3598($at)
    MEM_W(-0X3598, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80035480_10880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035480: jr          $ra
    // 0x80035484: nop

    TRACE_RETURN()
    return;
    // 0x80035484: nop

;}
RECOMP_FUNC void func_800930C0_6E4C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800930C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800930C4: addiu       $a0, $zero, 0x96
    ctx->r4 = ADD32(0, 0X96);
    // 0x800930C8: lui         $a1, 0x8019
    ctx->r5 = S32(0X8019 << 16);
    // 0x800930CC: addiu       $a1, $a1, -0xBF0
    ctx->r5 = ADD32(ctx->r5, -0XBF0);
    // 0x800930D0: lui         $a2, 0x8019
    ctx->r6 = S32(0X8019 << 16);
    // 0x800930D4: addiu       $a2, $a2, -0xBD8
    ctx->r6 = ADD32(ctx->r6, -0XBD8);
    // 0x800930D8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800930DC: jal         0x80094500
    // 0x800930E0: addiu       $a3, $zero, 0x32
    ctx->r7 = ADD32(0, 0X32);
    osCreatePiManager_recomp(rdram, ctx);
        goto after_0;
    // 0x800930E0: addiu       $a3, $zero, 0x32
    ctx->r7 = ADD32(0, 0X32);
    after_0:
    // 0x800930E4: jal         0x80094920
    // 0x800930E8: nop

    osCartRomInit_recomp(rdram, ctx);
        goto after_1;
    // 0x800930E8: nop

    after_1:
    // 0x800930EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800930F0: sw          $v0, 0x5994($at)
    MEM_W(0X5994, ctx->r1) = ctx->r2;
    // 0x800930F4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800930F8: jr          $ra
    // 0x800930FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800930FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008E9D0_69DD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008E9D0: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8008E9D4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8008E9D8: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008E9DC: lw          $a0, 0x5020($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5020);
    // 0x8008E9E0: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008E9E4: lw          $v1, 0x5024($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5024);
    // 0x8008E9E8: addiu       $v0, $sp, 0x78
    ctx->r2 = ADD32(ctx->r29, 0X78);
    // 0x8008E9EC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8008E9F0: sw          $ra, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r31;
    // 0x8008E9F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8008E9F8: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    // 0x8008E9FC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x8008EA00: addiu       $v1, $v1, 0x30
    ctx->r3 = ADD32(ctx->r3, 0X30);
    // 0x8008EA04: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    // 0x8008EA08: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8008EA0C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x8008EA10: addiu       $v1, $v1, 0x3A40
    ctx->r3 = ADD32(ctx->r3, 0X3A40);
    // 0x8008EA14: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x8008EA18: lw          $a3, 0x4($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X4);
    // 0x8008EA1C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x8008EA20: addiu       $v0, $v0, 0x3B10
    ctx->r2 = ADD32(ctx->r2, 0X3B10);
    // 0x8008EA24: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8008EA28: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8008EA2C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x8008EA30: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8008EA34: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8008EA38: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8008EA3C: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x8008EA40: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8008EA44: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x8008EA48: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8008EA4C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8008EA50: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8008EA54: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x8008EA58: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x8008EA5C: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x8008EA60: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x8008EA64: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x8008EA68: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x8008EA6C: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x8008EA70: jal         0x8009ADD0
    // 0x8008EA74: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    osScGetCmdQ(rdram, ctx);
        goto after_0;
    // 0x8008EA74: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    after_0:
    // 0x8008EA78: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8008EA7C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8008EA80: jal         0x8009A710
    // 0x8008EA84: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8008EA84: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8008EA88: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008EA8C: lw          $a0, 0x5024($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5024);
    // 0x8008EA90: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008EA94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8008EA98: jal         0x8009A5E0
    // 0x8008EA9C: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x8008EA9C: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    after_2:
    // 0x8008EAA0: lw          $ra, 0x98($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X98);
    // 0x8008EAA4: jr          $ra
    // 0x8008EAA8: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    TRACE_RETURN()
    return;
    // 0x8008EAA8: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x8008EAAC: nop

;}
RECOMP_FUNC void func_800372B4_126B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800372B4: jr          $ra
    // 0x800372B8: nop

    TRACE_RETURN()
    return;
    // 0x800372B8: nop

;}
RECOMP_FUNC void func_8006FEB4_4B2B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006FEB4: lhu         $v0, 0x11C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X11C);
    // 0x8006FEB8: and         $v0, $v0, $a3
    ctx->r2 = ctx->r2 & ctx->r7;
    // 0x8006FEBC: beq         $v0, $zero, L_8006FEF8
    if (ctx->r2 == 0) {
        // 0x8006FEC0: addiu       $sp, $sp, -0x10
        ctx->r29 = ADD32(ctx->r29, -0X10);
            goto L_8006FEF8;
    }
    // 0x8006FEC0: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8006FEC4: lh          $v0, 0xB4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XB4);
    // 0x8006FEC8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8006FECC: bltz        $v0, L_8006FF08
    if (SIGNED(ctx->r2) < 0) {
        // 0x8006FED0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8006FF08;
    }
    // 0x8006FED0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8006FED4: addu        $v0, $v1, $a1
    ctx->r2 = ADD32(ctx->r3, ctx->r5);
    // 0x8006FED8: sh          $v0, 0xB4($a0)
    MEM_H(0XB4, ctx->r4) = ctx->r2;
    // 0x8006FEDC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8006FEE0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8006FEE4: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8006FEE8: bnel        $v0, $zero, L_8006FEF0
    if (ctx->r2 != 0) {
        // 0x8006FEEC: sh          $a2, 0xB4($a0)
        MEM_H(0XB4, ctx->r4) = ctx->r6;
            goto L_8006FEF0;
    }
    goto skip_0;
    // 0x8006FEEC: sh          $a2, 0xB4($a0)
    MEM_H(0XB4, ctx->r4) = ctx->r6;
    skip_0:
L_8006FEF0:
    // 0x8006FEF0: j           L_8006FF38
    // 0x8006FEF4: sh          $a1, 0xB6($a0)
    MEM_H(0XB6, ctx->r4) = ctx->r5;
        goto L_8006FF38;
    // 0x8006FEF4: sh          $a1, 0xB6($a0)
    MEM_H(0XB6, ctx->r4) = ctx->r5;
L_8006FEF8:
    // 0x8006FEF8: lh          $v0, 0xB4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XB4);
    // 0x8006FEFC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x8006FF00: blez        $v0, L_8006FF10
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8006FF04: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8006FF10;
    }
    // 0x8006FF04: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_8006FF08:
    // 0x8006FF08: j           L_8006FF38
    // 0x8006FF0C: sh          $zero, 0xB4($a0)
    MEM_H(0XB4, ctx->r4) = 0;
        goto L_8006FF38;
    // 0x8006FF0C: sh          $zero, 0xB4($a0)
    MEM_H(0XB4, ctx->r4) = 0;
L_8006FF10:
    // 0x8006FF10: subu        $v0, $v1, $a1
    ctx->r2 = SUB32(ctx->r3, ctx->r5);
    // 0x8006FF14: sh          $v0, 0xB4($a0)
    MEM_H(0XB4, ctx->r4) = ctx->r2;
    // 0x8006FF18: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8006FF1C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8006FF20: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x8006FF24: slt         $v0, $v0, $a2
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8006FF28: bnel        $v0, $zero, L_8006FF30
    if (ctx->r2 != 0) {
        // 0x8006FF2C: sh          $a2, 0xB4($a0)
        MEM_H(0XB4, ctx->r4) = ctx->r6;
            goto L_8006FF30;
    }
    goto skip_1;
    // 0x8006FF2C: sh          $a2, 0xB4($a0)
    MEM_H(0XB4, ctx->r4) = ctx->r6;
    skip_1:
L_8006FF30:
    // 0x8006FF30: negu        $v0, $a1
    ctx->r2 = SUB32(0, ctx->r5);
    // 0x8006FF34: sh          $v0, 0xB6($a0)
    MEM_H(0XB6, ctx->r4) = ctx->r2;
L_8006FF38:
    // 0x8006FF38: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x8006FF3C: lhu         $v1, 0xB4($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XB4);
    // 0x8006FF40: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006FF44: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8006FF48: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x8006FF4C: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x8006FF50: jr          $ra
    // 0x8006FF54: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8006FF54: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80060294_3B694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80060294: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80060298: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006029C: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x800602A0: addiu       $s0, $s0, -0x3A50
    ctx->r16 = ADD32(ctx->r16, -0X3A50);
    // 0x800602A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800602A8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x800602AC: bne         $v0, $zero, L_800602F0
    if (ctx->r2 != 0) {
        // 0x800602B0: nop
    
            goto L_800602F0;
    }
    // 0x800602B0: nop

    // 0x800602B4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800602B8: lb          $v0, 0x47CC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X47CC);
    // 0x800602BC: bne         $v0, $zero, L_800602E4
    if (ctx->r2 != 0) {
        // 0x800602C0: nop
    
            goto L_800602E4;
    }
    // 0x800602C0: nop

    // 0x800602C4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800602C8: lb          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC8);
    // 0x800602CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800602D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800602D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800602D8: lw          $v0, 0x4F0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4F0);
    // 0x800602DC: jalr        $v0
    // 0x800602E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x800602E0: nop

    after_0:
L_800602E4:
    // 0x800602E4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x800602E8: beq         $v0, $zero, L_8006032C
    if (ctx->r2 == 0) {
        // 0x800602EC: nop
    
            goto L_8006032C;
    }
    // 0x800602EC: nop

L_800602F0:
    // 0x800602F0: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x800602F4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x800602F8: beq         $v1, $v0, L_80060314
    if (ctx->r3 == ctx->r2) {
        // 0x800602FC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80060314;
    }
    // 0x800602FC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80060300: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80060304: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80060308: lw          $v0, 0x56C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X56C);
    // 0x8006030C: jalr        $v0
    // 0x80060310: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80060310: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80060314:
    // 0x80060314: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80060318: bne         $v0, $zero, L_8006032C
    if (ctx->r2 != 0) {
        // 0x8006031C: nop
    
            goto L_8006032C;
    }
    // 0x8006031C: nop

    // 0x80060320: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    // 0x80060324: jal         0x8006036C
    // 0x80060328: addiu       $a0, $a0, 0x380
    ctx->r4 = ADD32(ctx->r4, 0X380);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x80060328: addiu       $a0, $a0, 0x380
    ctx->r4 = ADD32(ctx->r4, 0X380);
    after_2:
L_8006032C:
    // 0x8006032C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80060330: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80060334: jr          $ra
    // 0x80060338: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80060338: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8007D798_58B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007D798: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8007D79C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8007D7A0: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x8007D7A4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8007D7A8: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x8007D7AC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8007D7B0: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x8007D7B4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8007D7B8: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x8007D7BC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8007D7C0: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    // 0x8007D7C4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8007D7C8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8007D7CC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8007D7D0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8007D7D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007D7D8: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
L_8007D7DC:
    // 0x8007D7DC: lw          $s1, 0x0($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X0);
    // 0x8007D7E0: addiu       $v0, $zero, 0xDE
    ctx->r2 = ADD32(0, 0XDE);
    // 0x8007D7E4: srl         $v1, $s1, 24
    ctx->r3 = S32(U32(ctx->r17) >> 24);
    // 0x8007D7E8: beq         $v1, $v0, L_8007D988
    if (ctx->r3 == ctx->r2) {
        // 0x8007D7EC: slti        $v0, $v1, 0xDF
        ctx->r2 = SIGNED(ctx->r3) < 0XDF ? 1 : 0;
            goto L_8007D988;
    }
    // 0x8007D7EC: slti        $v0, $v1, 0xDF
    ctx->r2 = SIGNED(ctx->r3) < 0XDF ? 1 : 0;
    // 0x8007D7F0: beq         $v0, $zero, L_8007D82C
    if (ctx->r2 == 0) {
        // 0x8007D7F4: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8007D82C;
    }
    // 0x8007D7F4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8007D7F8: beq         $v1, $v0, L_8007D86C
    if (ctx->r3 == ctx->r2) {
        // 0x8007D7FC: slti        $v0, $v1, 0x7
        ctx->r2 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
            goto L_8007D86C;
    }
    // 0x8007D7FC: slti        $v0, $v1, 0x7
    ctx->r2 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
    // 0x8007D800: beq         $v0, $zero, L_8007D818
    if (ctx->r2 == 0) {
        // 0x8007D804: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8007D818;
    }
    // 0x8007D804: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007D808: beq         $v1, $v0, L_8007D95C
    if (ctx->r3 == ctx->r2) {
        // 0x8007D80C: lui         $v1, 0xFF
        ctx->r3 = S32(0XFF << 16);
            goto L_8007D95C;
    }
    // 0x8007D80C: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8007D810: j           L_8007DA40
    // 0x8007D814: nop

        goto L_8007DA40;
    // 0x8007D814: nop

L_8007D818:
    // 0x8007D818: addiu       $v0, $zero, 0xD9
    ctx->r2 = ADD32(0, 0XD9);
    // 0x8007D81C: beq         $v1, $v0, L_8007D98C
    if (ctx->r3 == ctx->r2) {
        // 0x8007D820: addu        $a1, $s4, $zero
        ctx->r5 = ADD32(ctx->r20, 0);
            goto L_8007D98C;
    }
    // 0x8007D820: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8007D824: j           L_8007DA40
    // 0x8007D828: nop

        goto L_8007DA40;
    // 0x8007D828: nop

L_8007D82C:
    // 0x8007D82C: addiu       $v0, $zero, 0xE2
    ctx->r2 = ADD32(0, 0XE2);
    // 0x8007D830: beq         $v1, $v0, L_8007D988
    if (ctx->r3 == ctx->r2) {
        // 0x8007D834: slti        $v0, $v1, 0xE3
        ctx->r2 = SIGNED(ctx->r3) < 0XE3 ? 1 : 0;
            goto L_8007D988;
    }
    // 0x8007D834: slti        $v0, $v1, 0xE3
    ctx->r2 = SIGNED(ctx->r3) < 0XE3 ? 1 : 0;
    // 0x8007D838: beq         $v0, $zero, L_8007D850
    if (ctx->r2 == 0) {
        // 0x8007D83C: addiu       $v0, $zero, 0xDF
        ctx->r2 = ADD32(0, 0XDF);
            goto L_8007D850;
    }
    // 0x8007D83C: addiu       $v0, $zero, 0xDF
    ctx->r2 = ADD32(0, 0XDF);
    // 0x8007D840: beql        $v1, $v0, L_8007DA40
    if (ctx->r3 == ctx->r2) {
        // 0x8007D844: addu        $fp, $zero, $zero
        ctx->r30 = ADD32(0, 0);
            goto L_8007DA40;
    }
    goto skip_0;
    // 0x8007D844: addu        $fp, $zero, $zero
    ctx->r30 = ADD32(0, 0);
    skip_0:
    // 0x8007D848: j           L_8007DA40
    // 0x8007D84C: nop

        goto L_8007DA40;
    // 0x8007D84C: nop

L_8007D850:
    // 0x8007D850: addiu       $v0, $zero, 0xE7
    ctx->r2 = ADD32(0, 0XE7);
    // 0x8007D854: beq         $v1, $v0, L_8007D988
    if (ctx->r3 == ctx->r2) {
        // 0x8007D858: addiu       $v0, $zero, 0xF5
        ctx->r2 = ADD32(0, 0XF5);
            goto L_8007D988;
    }
    // 0x8007D858: addiu       $v0, $zero, 0xF5
    ctx->r2 = ADD32(0, 0XF5);
    // 0x8007D85C: beq         $v1, $v0, L_8007D9B4
    if (ctx->r3 == ctx->r2) {
        // 0x8007D860: nop
    
            goto L_8007D9B4;
    }
    // 0x8007D860: nop

    // 0x8007D864: j           L_8007DA40
    // 0x8007D868: nop

        goto L_8007DA40;
    // 0x8007D868: nop

L_8007D86C:
    // 0x8007D86C: lw          $s2, 0x4($s4)
    ctx->r18 = MEM_W(ctx->r20, 0X4);
    // 0x8007D870: bltz        $s2, L_8007D928
    if (SIGNED(ctx->r18) < 0) {
        // 0x8007D874: srl         $s3, $s1, 17
        ctx->r19 = S32(U32(ctx->r17) >> 17);
            goto L_8007D928;
    }
    // 0x8007D874: srl         $s3, $s1, 17
    ctx->r19 = S32(U32(ctx->r17) >> 17);
    // 0x8007D878: andi        $s3, $s3, 0x7F
    ctx->r19 = ctx->r19 & 0X7F;
    // 0x8007D87C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8007D880: andi        $s0, $s1, 0xFF00
    ctx->r16 = ctx->r17 & 0XFF00;
    // 0x8007D884: srl         $s0, $s0, 9
    ctx->r16 = S32(U32(ctx->r16) >> 9);
    // 0x8007D888: andi        $s1, $s1, 0xFF
    ctx->r17 = ctx->r17 & 0XFF;
    // 0x8007D88C: srl         $s1, $s1, 1
    ctx->r17 = S32(U32(ctx->r17) >> 1);
    // 0x8007D890: andi        $s2, $s2, 0xFF00
    ctx->r18 = ctx->r18 & 0XFF00;
    // 0x8007D894: jal         0x8007D63C
    // 0x8007D898: srl         $s2, $s2, 9
    ctx->r18 = S32(U32(ctx->r18) >> 9);
    func_8007D63C_58A3C(rdram, ctx);
        goto after_0;
    // 0x8007D898: srl         $s2, $s2, 9
    ctx->r18 = S32(U32(ctx->r18) >> 9);
    after_0:
    // 0x8007D89C: jal         0x8007D63C
    // 0x8007D8A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8007D63C_58A3C(rdram, ctx);
        goto after_1;
    // 0x8007D8A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8007D8A4: jal         0x8007D63C
    // 0x8007D8A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8007D63C_58A3C(rdram, ctx);
        goto after_2;
    // 0x8007D8A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8007D8AC: jal         0x8007D63C
    // 0x8007D8B0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8007D63C_58A3C(rdram, ctx);
        goto after_3;
    // 0x8007D8B0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x8007D8B4: sll         $s3, $s3, 3
    ctx->r19 = S32(ctx->r19 << 3);
    // 0x8007D8B8: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8007D8BC: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x8007D8C0: lh          $v1, -0x3FA4($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X3FA4);
    // 0x8007D8C4: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x8007D8C8: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8007D8CC: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x8007D8D0: lh          $a0, -0x3FA4($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3FA4);
    // 0x8007D8D4: sll         $s1, $s1, 3
    ctx->r17 = S32(ctx->r17 << 3);
    // 0x8007D8D8: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x8007D8DC: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    // 0x8007D8E0: lh          $a1, -0x3FA4($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X3FA4);
    // 0x8007D8E4: sll         $s2, $s2, 3
    ctx->r18 = S32(ctx->r18 << 3);
    // 0x8007D8E8: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x8007D8EC: addu        $a2, $a2, $s2
    ctx->r6 = ADD32(ctx->r6, ctx->r18);
    // 0x8007D8F0: lh          $a2, -0x3FA4($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X3FA4);
    // 0x8007D8F4: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007D8F8: bnel        $v0, $zero, L_8007D900
    if (ctx->r2 != 0) {
        // 0x8007D8FC: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_8007D900;
    }
    goto skip_1;
    // 0x8007D8FC: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_1:
L_8007D900:
    // 0x8007D900: slt         $v0, $a1, $v1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007D904: bnel        $v0, $zero, L_8007D90C
    if (ctx->r2 != 0) {
        // 0x8007D908: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_8007D90C;
    }
    goto skip_2;
    // 0x8007D908: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    skip_2:
L_8007D90C:
    // 0x8007D90C: slt         $v0, $a2, $v1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007D910: bnel        $v0, $zero, L_8007D918
    if (ctx->r2 != 0) {
        // 0x8007D914: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8007D918;
    }
    goto skip_3;
    // 0x8007D914: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    skip_3:
L_8007D918:
    // 0x8007D918: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8007D91C: lh          $v0, -0x448($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X448);
    // 0x8007D920: j           L_8007D92C
    // 0x8007D924: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
        goto L_8007D92C;
    // 0x8007D924: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
L_8007D928:
    // 0x8007D928: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8007D92C:
    // 0x8007D92C: beq         $v0, $zero, L_8007D954
    if (ctx->r2 == 0) {
        // 0x8007D930: addu        $a1, $s4, $zero
        ctx->r5 = ADD32(ctx->r20, 0);
            goto L_8007D954;
    }
    // 0x8007D930: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8007D934: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8007D938: lw          $a0, -0x6F10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F10);
    // 0x8007D93C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8007D940: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x8007D944: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007D948: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007D94C: jal         0x8009A3B4
    // 0x8007D950: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8007D950: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    after_4:
L_8007D954:
    // 0x8007D954: j           L_8007DA40
    // 0x8007D958: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
        goto L_8007DA40;
    // 0x8007D958: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
L_8007D95C:
    // 0x8007D95C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8007D960: lw          $v0, 0x4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X4);
    // 0x8007D964: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8007D968: addiu       $a0, $a0, -0x3E28
    ctx->r4 = ADD32(ctx->r4, -0X3E28);
    // 0x8007D96C: lw          $a3, 0x14($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X14);
    // 0x8007D970: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8007D974: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x8007D978: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007D97C: sw          $v0, -0x41B0($at)
    MEM_W(-0X41B0, ctx->r1) = ctx->r2;
    // 0x8007D980: jal         0x8009A2B0
    // 0x8007D984: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    bzero_recomp(rdram, ctx);
        goto after_5;
    // 0x8007D984: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_5:
L_8007D988:
    // 0x8007D988: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
L_8007D98C:
    // 0x8007D98C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8007D990: lw          $a0, -0x6F10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F10);
    // 0x8007D994: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8007D998: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x8007D99C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007D9A0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007D9A4: jal         0x8009A3B4
    // 0x8007D9A8: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8007D9A8: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    after_6:
    // 0x8007D9AC: j           L_8007DA40
    // 0x8007D9B0: nop

        goto L_8007DA40;
    // 0x8007D9B0: nop

L_8007D9B4:
    // 0x8007D9B4: beq         $s7, $zero, L_8007D9C8
    if (ctx->r23 == 0) {
        // 0x8007D9B8: nop
    
            goto L_8007D9C8;
    }
    // 0x8007D9B8: nop

    // 0x8007D9BC: lui         $s6, 0x801B
    ctx->r22 = S32(0X801B << 16);
    // 0x8007D9C0: j           L_8007DA0C
    // 0x8007D9C4: lw          $s6, -0x6F10($s6)
    ctx->r22 = MEM_W(ctx->r22, -0X6F10);
        goto L_8007DA0C;
    // 0x8007D9C4: lw          $s6, -0x6F10($s6)
    ctx->r22 = MEM_W(ctx->r22, -0X6F10);
L_8007D9C8:
    // 0x8007D9C8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8007D9CC: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x8007D9D0: sltu        $v0, $s5, $v0
    ctx->r2 = ctx->r21 < ctx->r2 ? 1 : 0;
    // 0x8007D9D4: beq         $v0, $zero, L_8007DA04
    if (ctx->r2 == 0) {
        // 0x8007D9D8: nop
    
            goto L_8007DA04;
    }
    // 0x8007D9D8: nop

L_8007D9DC:
    // 0x8007D9DC: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x8007D9E0: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8007D9E4: jal         0x8009A3B4
    // 0x8007D9E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8007D9E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x8007D9EC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8007D9F0: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x8007D9F4: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x8007D9F8: sltu        $v0, $s5, $v0
    ctx->r2 = ctx->r21 < ctx->r2 ? 1 : 0;
    // 0x8007D9FC: bne         $v0, $zero, L_8007D9DC
    if (ctx->r2 != 0) {
        // 0x8007DA00: addiu       $s6, $s6, 0x8
        ctx->r22 = ADD32(ctx->r22, 0X8);
            goto L_8007D9DC;
    }
    // 0x8007DA00: addiu       $s6, $s6, 0x8
    ctx->r22 = ADD32(ctx->r22, 0X8);
L_8007DA04:
    // 0x8007DA04: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007DA08: sw          $s6, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r22;
L_8007DA0C:
    // 0x8007DA0C: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8007DA10: lw          $a1, -0x6F10($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6F10);
    // 0x8007DA14: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8007DA18: jal         0x80099F90
    // 0x8007DA1C: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    bcopy_recomp(rdram, ctx);
        goto after_8;
    // 0x8007DA1C: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    after_8:
    // 0x8007DA20: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8007DA24: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x8007DA28: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x8007DA2C: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x8007DA30: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x8007DA34: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007DA38: sw          $s5, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r21;
    // 0x8007DA3C: addiu       $s4, $s4, 0x30
    ctx->r20 = ADD32(ctx->r20, 0X30);
L_8007DA40:
    // 0x8007DA40: bne         $fp, $zero, L_8007D7DC
    if (ctx->r30 != 0) {
        // 0x8007DA44: nop
    
            goto L_8007D7DC;
    }
    // 0x8007DA44: nop

    // 0x8007DA48: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8007DA4C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8007DA50: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8007DA54: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8007DA58: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8007DA5C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8007DA60: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8007DA64: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8007DA68: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8007DA6C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007DA70: jr          $ra
    // 0x8007DA74: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8007DA74: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8004E4CC_298CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004E4CC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8004E4D0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8004E4D4: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x8004E4D8: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x8004E4DC: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8004E4E0: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8004E4E4: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8004E4E8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8004E4EC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8004E4F0: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x8004E4F4: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x8004E4F8: lw          $s0, 0x64($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X64);
    // 0x8004E4FC: lhu         $s3, 0x62($sp)
    ctx->r19 = MEM_HU(ctx->r29, 0X62);
    // 0x8004E500: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004E504: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004E508: mflo        $a2
    ctx->r6 = lo;
    // 0x8004E50C: lhu         $s4, 0x6A($sp)
    ctx->r20 = MEM_HU(ctx->r29, 0X6A);
    // 0x8004E510: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8004E514: lh          $v0, 0x2($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X2);
    // 0x8004E518: lh          $v1, 0x2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2);
    // 0x8004E51C: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x8004E520: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004E524: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004E528: mflo        $a3
    ctx->r7 = lo;
    // 0x8004E52C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8004E530: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x8004E534: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x8004E538: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004E53C: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004E540: mflo        $a0
    ctx->r4 = lo;
    // 0x8004E544: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8004E548: addu        $a2, $a2, $a3
    ctx->r6 = ADD32(ctx->r6, ctx->r7);
    // 0x8004E54C: jal         0x80032424
    // 0x8004E550: addu        $a0, $a2, $a0
    ctx->r4 = ADD32(ctx->r6, ctx->r4);
    func_80032424_D824(rdram, ctx);
        goto after_0;
    // 0x8004E550: addu        $a0, $a2, $a0
    ctx->r4 = ADD32(ctx->r6, ctx->r4);
    after_0:
    // 0x8004E554: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x8004E558: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004E55C: mflo        $v1
    ctx->r3 = lo;
    // 0x8004E560: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004E564: nop

    // 0x8004E568: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004E56C: mflo        $a0
    ctx->r4 = lo;
    // 0x8004E570: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8004E574: nop

    // 0x8004E578: jal         0x80032424
    // 0x8004E57C: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80032424_D824(rdram, ctx);
        goto after_1;
    // 0x8004E57C: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_1:
    // 0x8004E580: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x8004E584: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8004E588: beq         $s0, $zero, L_8004E59C
    if (ctx->r16 == 0) {
        // 0x8004E58C: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_8004E59C;
    }
    // 0x8004E58C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8004E590: slt         $v0, $a0, $s0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8004E594: beql        $v0, $zero, L_8004E59C
    if (ctx->r2 == 0) {
        // 0x8004E598: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8004E59C;
    }
    goto skip_0;
    // 0x8004E598: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
L_8004E59C:
    // 0x8004E59C: sltu        $v0, $zero, $s1
    ctx->r2 = 0 < ctx->r17 ? 1 : 0;
    // 0x8004E5A0: sll         $v1, $s3, 16
    ctx->r3 = S32(ctx->r19 << 16);
    // 0x8004E5A4: sra         $a1, $v1, 16
    ctx->r5 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8004E5A8: sltu        $v1, $zero, $a1
    ctx->r3 = 0 < ctx->r5 ? 1 : 0;
    // 0x8004E5AC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8004E5B0: beql        $v0, $zero, L_8004E758
    if (ctx->r2 == 0) {
        // 0x8004E5B4: sh          $zero, 0x0($s2)
        MEM_H(0X0, ctx->r18) = 0;
            goto L_8004E758;
    }
    goto skip_1;
    // 0x8004E5B4: sh          $zero, 0x0($s2)
    MEM_H(0X0, ctx->r18) = 0;
    skip_1:
    // 0x8004E5B8: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x8004E5BC: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004E5C0: mflo        $v0
    ctx->r2 = lo;
    // 0x8004E5C4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8004E5C8: nop

    // 0x8004E5CC: div         $zero, $v0, $s1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r17)));
    // 0x8004E5D0: bne         $s1, $zero, L_8004E5DC
    if (ctx->r17 != 0) {
        // 0x8004E5D4: nop
    
            goto L_8004E5DC;
    }
    // 0x8004E5D4: nop

    // 0x8004E5D8: break       7
    do_break(2147804632);
L_8004E5DC:
    // 0x8004E5DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004E5E0: bne         $s1, $at, L_8004E5F4
    if (ctx->r17 != ctx->r1) {
        // 0x8004E5E4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004E5F4;
    }
    // 0x8004E5E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004E5E8: bne         $v0, $at, L_8004E5F4
    if (ctx->r2 != ctx->r1) {
        // 0x8004E5EC: nop
    
            goto L_8004E5F4;
    }
    // 0x8004E5EC: nop

    // 0x8004E5F0: break       6
    do_break(2147804656);
L_8004E5F4:
    // 0x8004E5F4: mflo        $v0
    ctx->r2 = lo;
    // 0x8004E5F8: nop

    // 0x8004E5FC: nop

    // 0x8004E600: beq         $a0, $zero, L_8004E6A4
    if (ctx->r4 == 0) {
        // 0x8004E604: sw          $v0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r2;
            goto L_8004E6A4;
    }
    // 0x8004E604: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8004E608: lw          $v1, 0x14($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X14);
    // 0x8004E60C: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x8004E610: mult        $a1, $v1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004E614: mflo        $v1
    ctx->r3 = lo;
    // 0x8004E618: nop

    // 0x8004E61C: nop

    // 0x8004E620: div         $zero, $v1, $a0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r4)));
    // 0x8004E624: bne         $a0, $zero, L_8004E630
    if (ctx->r4 != 0) {
        // 0x8004E628: nop
    
            goto L_8004E630;
    }
    // 0x8004E628: nop

    // 0x8004E62C: break       7
    do_break(2147804716);
L_8004E630:
    // 0x8004E630: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004E634: bne         $a0, $at, L_8004E648
    if (ctx->r4 != ctx->r1) {
        // 0x8004E638: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004E648;
    }
    // 0x8004E638: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004E63C: bne         $v1, $at, L_8004E648
    if (ctx->r3 != ctx->r1) {
        // 0x8004E640: nop
    
            goto L_8004E648;
    }
    // 0x8004E640: nop

    // 0x8004E644: break       6
    do_break(2147804740);
L_8004E648:
    // 0x8004E648: mflo        $v1
    ctx->r3 = lo;
    // 0x8004E64C: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
    // 0x8004E650: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8004E654: sra         $a0, $a0, 1
    ctx->r4 = S32(SIGNED(ctx->r4) >> 1);
    // 0x8004E658: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004E65C: mflo        $v0
    ctx->r2 = lo;
    // 0x8004E660: nop

    // 0x8004E664: nop

    // 0x8004E668: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x8004E66C: bne         $a1, $zero, L_8004E678
    if (ctx->r5 != 0) {
        // 0x8004E670: nop
    
            goto L_8004E678;
    }
    // 0x8004E670: nop

    // 0x8004E674: break       7
    do_break(2147804788);
L_8004E678:
    // 0x8004E678: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004E67C: bne         $a1, $at, L_8004E690
    if (ctx->r5 != ctx->r1) {
        // 0x8004E680: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004E690;
    }
    // 0x8004E680: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004E684: bne         $v0, $at, L_8004E690
    if (ctx->r2 != ctx->r1) {
        // 0x8004E688: nop
    
            goto L_8004E690;
    }
    // 0x8004E688: nop

    // 0x8004E68C: break       6
    do_break(2147804812);
L_8004E690:
    // 0x8004E690: mflo        $v0
    ctx->r2 = lo;
    // 0x8004E694: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8004E698: nop

    // 0x8004E69C: j           L_8004E6B8
    // 0x8004E6A0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
        goto L_8004E6B8;
    // 0x8004E6A0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
L_8004E6A4:
    // 0x8004E6A4: lw          $v0, 0x14($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X14);
    // 0x8004E6A8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8004E6AC: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004E6B0: mflo        $v0
    ctx->r2 = lo;
    // 0x8004E6B4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_8004E6B8:
    // 0x8004E6B8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8004E6BC: sll         $v1, $s3, 16
    ctx->r3 = S32(ctx->r19 << 16);
    // 0x8004E6C0: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8004E6C4: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004E6C8: mflo        $v0
    ctx->r2 = lo;
    // 0x8004E6CC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8004E6D0: nop

    // 0x8004E6D4: div         $zero, $v0, $s1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r17)));
    // 0x8004E6D8: bne         $s1, $zero, L_8004E6E4
    if (ctx->r17 != 0) {
        // 0x8004E6DC: nop
    
            goto L_8004E6E4;
    }
    // 0x8004E6DC: nop

    // 0x8004E6E0: break       7
    do_break(2147804896);
L_8004E6E4:
    // 0x8004E6E4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004E6E8: bne         $s1, $at, L_8004E6FC
    if (ctx->r17 != ctx->r1) {
        // 0x8004E6EC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004E6FC;
    }
    // 0x8004E6EC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004E6F0: bne         $v0, $at, L_8004E6FC
    if (ctx->r2 != ctx->r1) {
        // 0x8004E6F4: nop
    
            goto L_8004E6FC;
    }
    // 0x8004E6F4: nop

    // 0x8004E6F8: break       6
    do_break(2147804920);
L_8004E6FC:
    // 0x8004E6FC: mflo        $v0
    ctx->r2 = lo;
    // 0x8004E700: nop

    // 0x8004E704: nop

    // 0x8004E708: div         $zero, $s1, $v1
    lo = S32(S64(S32(ctx->r17)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r17)) % S64(S32(ctx->r3)));
    // 0x8004E70C: bne         $v1, $zero, L_8004E718
    if (ctx->r3 != 0) {
        // 0x8004E710: nop
    
            goto L_8004E718;
    }
    // 0x8004E710: nop

    // 0x8004E714: break       7
    do_break(2147804948);
L_8004E718:
    // 0x8004E718: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004E71C: bne         $v1, $at, L_8004E730
    if (ctx->r3 != ctx->r1) {
        // 0x8004E720: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004E730;
    }
    // 0x8004E720: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004E724: bne         $s1, $at, L_8004E730
    if (ctx->r17 != ctx->r1) {
        // 0x8004E728: nop
    
            goto L_8004E730;
    }
    // 0x8004E728: nop

    // 0x8004E72C: break       6
    do_break(2147804972);
L_8004E730:
    // 0x8004E730: mflo        $v1
    ctx->r3 = lo;
    // 0x8004E734: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8004E738: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8004E73C: sh          $a0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r4;
    // 0x8004E740: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x8004E744: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
    // 0x8004E748: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x8004E74C: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8004E750: j           L_8004E764
    // 0x8004E754: sh          $v1, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r3;
        goto L_8004E764;
    // 0x8004E754: sh          $v1, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r3;
L_8004E758:
    // 0x8004E758: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    // 0x8004E75C: sh          $zero, 0x4($s2)
    MEM_H(0X4, ctx->r18) = 0;
    // 0x8004E760: sh          $zero, 0x0($s5)
    MEM_H(0X0, ctx->r21) = 0;
L_8004E764:
    // 0x8004E764: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x8004E768: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8004E76C: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8004E770: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8004E774: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8004E778: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8004E77C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8004E780: jr          $ra
    // 0x8004E784: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8004E784: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80029114_4514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80029114: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80029118: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8002911C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80029120: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80029124: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80029128: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8002912C: jal         0x8009B900
    // 0x80029130: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    osGetThreadPri_recomp(rdram, ctx);
        goto after_0;
    // 0x80029130: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x80029134: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80029138: addiu       $v1, $v0, 0x36
    ctx->r3 = ADD32(ctx->r2, 0X36);
    // 0x8002913C: sltiu       $v0, $v1, 0x4
    ctx->r2 = ctx->r3 < 0X4 ? 1 : 0;
    // 0x80029140: beq         $v0, $zero, L_80029164
    if (ctx->r2 == 0) {
        // 0x80029144: sll         $v0, $v1, 3
        ctx->r2 = S32(ctx->r3 << 3);
            goto L_80029164;
    }
    // 0x80029144: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x80029148: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8002914C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80029150: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80029154: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80029158: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8002915C: addiu       $v1, $v1, -0x46D0
    ctx->r3 = ADD32(ctx->r3, -0X46D0);
    // 0x80029160: addu        $s0, $v0, $v1
    ctx->r16 = ADD32(ctx->r2, ctx->r3);
L_80029164:
    // 0x80029164: beq         $s0, $zero, L_800291A4
    if (ctx->r16 == 0) {
        // 0x80029168: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800291A4;
    }
    // 0x80029168: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002916C: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
    // 0x80029170: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80029174: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80029178: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x8002917C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x80029180: addiu       $v0, $v0, 0x4FD0
    ctx->r2 = ADD32(ctx->r2, 0X4FD0);
    // 0x80029184: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80029188: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8002918C: sh          $s1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r17;
    // 0x80029190: sll         $a0, $v1, 1
    ctx->r4 = S32(ctx->r3 << 1);
    // 0x80029194: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80029198: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x8002919C: jal         0x8009A5E0
    // 0x800291A0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x800291A0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
L_800291A4:
    // 0x800291A4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x800291A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800291AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800291B0: jr          $ra
    // 0x800291B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800291B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80070180_4B580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80070180: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x80070184: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x80070188: beq         $v0, $zero, L_800701E4
    if (ctx->r2 == 0) {
        // 0x8007018C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_800701E4;
    }
    // 0x8007018C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80070190: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80070194: addu        $at, $at, $v0
    gpr jr_addend_8007019C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80070198: lw          $v0, 0x2968($at)
    ctx->r2 = ADD32(ctx->r1, 0X2968);
    // 0x8007019C: jr          $v0
    // 0x800701A0: nop

    switch (jr_addend_8007019C >> 2) {
        case 0: goto L_800701E4; break;
        case 1: goto L_800701E4; break;
        case 2: goto L_800701A4; break;
        case 3: goto L_800701E4; break;
        case 4: goto L_800701E4; break;
        case 5: goto L_800701E4; break;
        case 6: goto L_800701E4; break;
        case 7: goto L_800701E4; break;
        case 8: goto L_800701A4; break;
        case 9: goto L_800701E4; break;
        case 10: goto L_800701E4; break;
        default: switch_error(__func__, 0x8007019C, 0x800D2968);
    }
    // 0x800701A0: nop

L_800701A4:
    // 0x800701A4: lb          $a0, 0x112($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X112);
    // 0x800701A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800701AC: beq         $a0, $v0, L_800701DC
    if (ctx->r4 == ctx->r2) {
        // 0x800701B0: slti        $v0, $a0, 0x2
        ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
            goto L_800701DC;
    }
    // 0x800701B0: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x800701B4: beql        $v0, $zero, L_800701CC
    if (ctx->r2 == 0) {
        // 0x800701B8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_800701CC;
    }
    goto skip_0;
    // 0x800701B8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_0:
    // 0x800701BC: beq         $a0, $zero, L_800701E8
    if (ctx->r4 == 0) {
        // 0x800701C0: addiu       $v0, $zero, 0x41
        ctx->r2 = ADD32(0, 0X41);
            goto L_800701E8;
    }
    // 0x800701C0: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x800701C4: j           L_800701E8
    // 0x800701C8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_800701E8;
    // 0x800701C8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_800701CC:
    // 0x800701CC: beq         $a0, $v0, L_800701E8
    if (ctx->r4 == ctx->r2) {
        // 0x800701D0: addiu       $v0, $zero, 0x42
        ctx->r2 = ADD32(0, 0X42);
            goto L_800701E8;
    }
    // 0x800701D0: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x800701D4: j           L_800701E8
    // 0x800701D8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_800701E8;
    // 0x800701D8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_800701DC:
    // 0x800701DC: j           L_800701E8
    // 0x800701E0: addiu       $v0, $zero, 0x43
    ctx->r2 = ADD32(0, 0X43);
        goto L_800701E8;
    // 0x800701E0: addiu       $v0, $zero, 0x43
    ctx->r2 = ADD32(0, 0X43);
L_800701E4:
    // 0x800701E4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_800701E8:
    // 0x800701E8: jr          $ra
    // 0x800701EC: nop

    TRACE_RETURN()
    return;
    // 0x800701EC: nop

;}
RECOMP_FUNC void func_80070E54_4C254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80070E54: lb          $v0, 0x174($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X174);
    // 0x80070E58: andi        $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 & 0XC0;
    // 0x80070E5C: bne         $v0, $zero, L_80070E74
    if (ctx->r2 != 0) {
        // 0x80070E60: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80070E74;
    }
    // 0x80070E60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80070E64: lb          $v0, 0x177($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X177);
    // 0x80070E68: bne         $v0, $zero, L_80070E74
    if (ctx->r2 != 0) {
        // 0x80070E6C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80070E74;
    }
    // 0x80070E6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80070E70: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80070E74:
    // 0x80070E74: jr          $ra
    // 0x80070E78: nop

    TRACE_RETURN()
    return;
    // 0x80070E78: nop

    // 0x80070E7C: nop

;}
RECOMP_FUNC void func_800896D8_64AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800896D8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800896DC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x800896E0: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x800896E4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x800896E8: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x800896EC: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x800896F0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x800896F4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x800896F8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x800896FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80089700: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80089704: lh          $a0, 0x46($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X46);
    // 0x80089708: andi        $v0, $a0, 0xF000
    ctx->r2 = ctx->r4 & 0XF000;
    // 0x8008970C: andi        $s4, $a0, 0xFFF
    ctx->r20 = ctx->r4 & 0XFFF;
    // 0x80089710: lhu         $a0, 0x48($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X48);
    // 0x80089714: lui         $s7, 0x8018
    ctx->r23 = S32(0X8018 << 16);
    // 0x80089718: addiu       $s7, $s7, 0xA70
    ctx->r23 = ADD32(ctx->r23, 0XA70);
    // 0x8008971C: srl         $s1, $v0, 6
    ctx->r17 = S32(U32(ctx->r2) >> 6);
    // 0x80089720: srl         $v1, $a0, 14
    ctx->r3 = S32(U32(ctx->r4) >> 14);
    // 0x80089724: sh          $v1, 0x46($s3)
    MEM_H(0X46, ctx->r19) = ctx->r3;
    // 0x80089728: lh          $v1, 0x4A($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X4A);
    // 0x8008972C: andi        $s2, $a0, 0x3FFF
    ctx->r18 = ctx->r4 & 0X3FFF;
    // 0x80089730: slti        $v0, $v1, 0x241
    ctx->r2 = SIGNED(ctx->r3) < 0X241 ? 1 : 0;
    // 0x80089734: beq         $v0, $zero, L_80089C9C
    if (ctx->r2 == 0) {
        // 0x80089738: andi        $s6, $a0, 0xC000
        ctx->r22 = ctx->r4 & 0XC000;
            goto L_80089C9C;
    }
    // 0x80089738: andi        $s6, $a0, 0xC000
    ctx->r22 = ctx->r4 & 0XC000;
    // 0x8008973C: slti        $v0, $v1, 0x41
    ctx->r2 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
    // 0x80089740: bne         $v0, $zero, L_80089754
    if (ctx->r2 != 0) {
        // 0x80089744: addiu       $s5, $zero, 0xFF
        ctx->r21 = ADD32(0, 0XFF);
            goto L_80089754;
    }
    // 0x80089744: addiu       $s5, $zero, 0xFF
    ctx->r21 = ADD32(0, 0XFF);
    // 0x80089748: addiu       $v0, $zero, 0x240
    ctx->r2 = ADD32(0, 0X240);
    // 0x8008974C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80089750: sra         $s5, $v0, 1
    ctx->r21 = S32(SIGNED(ctx->r2) >> 1);
L_80089754:
    // 0x80089754: subu        $s0, $s4, $s1
    ctx->r16 = SUB32(ctx->r20, ctx->r17);
    // 0x80089758: jal         0x800324B4
    // 0x8008975C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x8008975C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80089760: nop

    // 0x80089764: mult        $v0, $s2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80089768: mflo        $v0
    ctx->r2 = lo;
    // 0x8008976C: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80089770: lbu         $a2, 0x559C($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X559C);
    // 0x80089774: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x80089778: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8008977C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80089780: lbu         $v1, 0xB61($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB61);
    // 0x80089784: addiu       $s0, $zero, 0xC
    ctx->r16 = ADD32(0, 0XC);
    // 0x80089788: sll         $a2, $a2, 6
    ctx->r6 = S32(ctx->r6 << 6);
    // 0x8008978C: sll         $a1, $a1, 7
    ctx->r5 = S32(ctx->r5 << 7);
    // 0x80089790: addu        $a2, $a2, $a1
    ctx->r6 = ADD32(ctx->r6, ctx->r5);
    // 0x80089794: subu        $v1, $s0, $v1
    ctx->r3 = SUB32(ctx->r16, ctx->r3);
    // 0x80089798: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x8008979C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800897A0: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x800897A4: sh          $v0, 0xBE0($at)
    MEM_H(0XBE0, ctx->r1) = ctx->r2;
    // 0x800897A8: jal         0x80032498
    // 0x800897AC: addu        $s1, $s4, $s1
    ctx->r17 = ADD32(ctx->r20, ctx->r17);
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x800897AC: addu        $s1, $s4, $s1
    ctx->r17 = ADD32(ctx->r20, ctx->r17);
    after_1:
    // 0x800897B0: nop

    // 0x800897B4: mult        $v0, $s2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800897B8: mflo        $v0
    ctx->r2 = lo;
    // 0x800897BC: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x800897C0: lbu         $a2, 0x559C($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X559C);
    // 0x800897C4: lw          $v1, 0x4C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X4C);
    // 0x800897C8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x800897CC: lbu         $a1, 0xB61($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0XB61);
    // 0x800897D0: sll         $a2, $a2, 6
    ctx->r6 = S32(ctx->r6 << 6);
    // 0x800897D4: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x800897D8: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x800897DC: subu        $a1, $s0, $a1
    ctx->r5 = SUB32(ctx->r16, ctx->r5);
    // 0x800897E0: srav        $v0, $v0, $a1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r5 & 31));
    // 0x800897E4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800897E8: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x800897EC: sh          $v0, 0xBE4($at)
    MEM_H(0XBE4, ctx->r1) = ctx->r2;
    // 0x800897F0: jal         0x800324B4
    // 0x800897F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x800897F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x800897F8: nop

    // 0x800897FC: mult        $v0, $s2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80089800: mflo        $v0
    ctx->r2 = lo;
    // 0x80089804: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80089808: lbu         $a2, 0x559C($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X559C);
    // 0x8008980C: lw          $v1, 0x4C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X4C);
    // 0x80089810: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80089814: lbu         $a1, 0xB61($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0XB61);
    // 0x80089818: sll         $a2, $a2, 6
    ctx->r6 = S32(ctx->r6 << 6);
    // 0x8008981C: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x80089820: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80089824: subu        $a1, $s0, $a1
    ctx->r5 = SUB32(ctx->r16, ctx->r5);
    // 0x80089828: srav        $v0, $v0, $a1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r5 & 31));
    // 0x8008982C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80089830: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x80089834: sh          $v0, 0xBF0($at)
    MEM_H(0XBF0, ctx->r1) = ctx->r2;
    // 0x80089838: jal         0x80032498
    // 0x8008983C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80032498_D898(rdram, ctx);
        goto after_3;
    // 0x8008983C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x80089840: nop

    // 0x80089844: mult        $v0, $s2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80089848: mflo        $v0
    ctx->r2 = lo;
    // 0x8008984C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80089850: lbu         $a0, 0x559C($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X559C);
    // 0x80089854: lw          $v1, 0x4C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X4C);
    // 0x80089858: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8008985C: lbu         $a1, 0xB61($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0XB61);
    // 0x80089860: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    // 0x80089864: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x80089868: addu        $v1, $a0, $v1
    ctx->r3 = ADD32(ctx->r4, ctx->r3);
    // 0x8008986C: subu        $s0, $s0, $a1
    ctx->r16 = SUB32(ctx->r16, ctx->r5);
    // 0x80089870: srav        $v0, $v0, $s0
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r16 & 31));
    // 0x80089874: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80089878: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8008987C: sh          $v0, 0xBF4($at)
    MEM_H(0XBF4, ctx->r1) = ctx->r2;
    // 0x80089880: lw          $v1, 0x4C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X4C);
    // 0x80089884: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x80089888: addu        $v1, $a0, $v1
    ctx->r3 = ADD32(ctx->r4, ctx->r3);
    // 0x8008988C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80089890: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80089894: lhu         $v0, 0xBF0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBF0);
    // 0x80089898: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8008989C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800898A0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x800898A4: sh          $v0, 0xC00($at)
    MEM_H(0XC00, ctx->r1) = ctx->r2;
    // 0x800898A8: lw          $v1, 0x4C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X4C);
    // 0x800898AC: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x800898B0: addu        $v1, $a0, $v1
    ctx->r3 = ADD32(ctx->r4, ctx->r3);
    // 0x800898B4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x800898B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800898BC: lhu         $v0, 0xBF4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBF4);
    // 0x800898C0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800898C4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800898C8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x800898CC: sh          $v0, 0xC04($at)
    MEM_H(0XC04, ctx->r1) = ctx->r2;
    // 0x800898D0: lw          $v1, 0x4C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X4C);
    // 0x800898D4: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x800898D8: addu        $v1, $a0, $v1
    ctx->r3 = ADD32(ctx->r4, ctx->r3);
    // 0x800898DC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x800898E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800898E4: lhu         $v0, 0xBE0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBE0);
    // 0x800898E8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800898EC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800898F0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x800898F4: sh          $v0, 0xC10($at)
    MEM_H(0XC10, ctx->r1) = ctx->r2;
    // 0x800898F8: lw          $v0, 0x4C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4C);
    // 0x800898FC: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x80089900: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80089904: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80089908: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8008990C: lhu         $v0, 0xBE4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBE4);
    // 0x80089910: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x80089914: lw          $v1, 0x3C30($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C30);
    // 0x80089918: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x8008991C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80089920: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80089924: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x80089928: sh          $v0, 0xC14($at)
    MEM_H(0XC14, ctx->r1) = ctx->r2;
    // 0x8008992C: beq         $v1, $a2, L_80089A08
    if (ctx->r3 == ctx->r6) {
        // 0x80089930: lui         $a0, 0xF500
        ctx->r4 = S32(0XF500 << 16);
            goto L_80089A08;
    }
    // 0x80089930: lui         $a0, 0xF500
    ctx->r4 = S32(0XF500 << 16);
    // 0x80089934: ori         $a0, $a0, 0x100
    ctx->r4 = ctx->r4 | 0X100;
    // 0x80089938: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8008993C: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x80089940: lui         $a1, 0x703
    ctx->r5 = S32(0X703 << 16);
    // 0x80089944: ori         $a1, $a1, 0xC000
    ctx->r5 = ctx->r5 | 0XC000;
    // 0x80089948: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x8008994C: sw          $a2, 0x3C30($at)
    MEM_W(0X3C30, ctx->r1) = ctx->r6;
    // 0x80089950: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x80089954: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80089958: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8008995C: lui         $v1, 0xDE00
    ctx->r3 = S32(0XDE00 << 16);
    // 0x80089960: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x80089964: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80089968: addiu       $v1, $v1, -0x1570
    ctx->r3 = ADD32(ctx->r3, -0X1570);
    // 0x8008996C: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x80089970: addiu       $v1, $v0, 0x10
    ctx->r3 = ADD32(ctx->r2, 0X10);
    // 0x80089974: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80089978: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8008997C: lui         $v1, 0xFD10
    ctx->r3 = S32(0XFD10 << 16);
    // 0x80089980: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x80089984: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80089988: addiu       $v1, $v1, 0xBC0
    ctx->r3 = ADD32(ctx->r3, 0XBC0);
    // 0x8008998C: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x80089990: addiu       $v1, $v0, 0x18
    ctx->r3 = ADD32(ctx->r2, 0X18);
    // 0x80089994: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80089998: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8008999C: lui         $v1, 0xE800
    ctx->r3 = S32(0XE800 << 16);
    // 0x800899A0: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x800899A4: addiu       $v1, $v0, 0x20
    ctx->r3 = ADD32(ctx->r2, 0X20);
    // 0x800899A8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800899AC: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x800899B0: lui         $v1, 0x700
    ctx->r3 = S32(0X700 << 16);
    // 0x800899B4: sw          $v1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r3;
    // 0x800899B8: addiu       $v1, $v0, 0x28
    ctx->r3 = ADD32(ctx->r2, 0X28);
    // 0x800899BC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800899C0: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x800899C4: lui         $v1, 0xE600
    ctx->r3 = S32(0XE600 << 16);
    // 0x800899C8: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x800899CC: addiu       $v1, $v0, 0x30
    ctx->r3 = ADD32(ctx->r2, 0X30);
    // 0x800899D0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800899D4: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x800899D8: lui         $v1, 0xF000
    ctx->r3 = S32(0XF000 << 16);
    // 0x800899DC: sw          $v1, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r3;
    // 0x800899E0: addiu       $v1, $v0, 0x38
    ctx->r3 = ADD32(ctx->r2, 0X38);
    // 0x800899E4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800899E8: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x800899EC: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x800899F0: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x800899F4: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
    // 0x800899F8: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // 0x800899FC: sw          $a1, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r5;
    // 0x80089A00: sw          $v1, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r3;
    // 0x80089A04: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
L_80089A08:
    // 0x80089A08: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80089A0C: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x80089A10: lui         $a0, 0xDA38
    ctx->r4 = S32(0XDA38 << 16);
    // 0x80089A14: ori         $a0, $a0, 0x3
    ctx->r4 = ctx->r4 | 0X3;
    // 0x80089A18: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80089A1C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80089A20: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80089A24: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x80089A28: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80089A2C: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x80089A30: or          $v0, $s5, $v0
    ctx->r2 = ctx->r21 | ctx->r2;
    // 0x80089A34: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x80089A38: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x80089A3C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80089A40: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80089A44: sw          $a0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r4;
    // 0x80089A48: beq         $s6, $zero, L_80089A58
    if (ctx->r22 == 0) {
        // 0x80089A4C: sw          $s3, 0xC($v1)
        MEM_W(0XC, ctx->r3) = ctx->r19;
            goto L_80089A58;
    }
    // 0x80089A4C: sw          $s3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r19;
    // 0x80089A50: j           L_80089A5C
    // 0x80089A54: addiu       $a3, $s7, 0x10
    ctx->r7 = ADD32(ctx->r23, 0X10);
        goto L_80089A5C;
    // 0x80089A54: addiu       $a3, $s7, 0x10
    ctx->r7 = ADD32(ctx->r23, 0X10);
L_80089A58:
    // 0x80089A58: addiu       $a3, $s7, 0x20
    ctx->r7 = ADD32(ctx->r23, 0X20);
L_80089A5C:
    // 0x80089A5C: lui         $a1, 0x708
    ctx->r5 = S32(0X708 << 16);
    // 0x80089A60: lw          $a0, 0x4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X4);
    // 0x80089A64: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80089A68: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x80089A6C: ori         $a1, $a1, 0x200
    ctx->r5 = ctx->r5 | 0X200;
    // 0x80089A70: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x80089A74: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x80089A78: lui         $v1, 0xFD70
    ctx->r3 = S32(0XFD70 << 16);
    // 0x80089A7C: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x80089A80: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80089A84: addiu       $v1, $v1, 0xA60
    ctx->r3 = ADD32(ctx->r3, 0XA60);
    // 0x80089A88: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80089A8C: lui         $v1, 0xF570
    ctx->r3 = S32(0XF570 << 16);
    // 0x80089A90: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x80089A94: lui         $v1, 0xE600
    ctx->r3 = S32(0XE600 << 16);
    // 0x80089A98: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x80089A9C: lui         $v1, 0xF300
    ctx->r3 = S32(0XF300 << 16);
    // 0x80089AA0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80089AA4: sw          $a0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r4;
    // 0x80089AA8: sw          $a1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r5;
    // 0x80089AAC: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x80089AB0: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x80089AB4: lh          $a0, 0xC($a3)
    ctx->r4 = MEM_H(ctx->r7, 0XC);
    // 0x80089AB8: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x80089ABC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80089AC0: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x80089AC4: addiu       $v1, $v0, 0x10
    ctx->r3 = ADD32(ctx->r2, 0X10);
    // 0x80089AC8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80089ACC: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x80089AD0: addiu       $v1, $v0, 0x18
    ctx->r3 = ADD32(ctx->r2, 0X18);
    // 0x80089AD4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80089AD8: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x80089ADC: addiu       $v1, $v0, 0x20
    ctx->r3 = ADD32(ctx->r2, 0X20);
    // 0x80089AE0: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x80089AE4: addu        $t1, $v1, $zero
    ctx->r9 = ADD32(ctx->r3, 0);
    // 0x80089AE8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80089AEC: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x80089AF0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80089AF4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80089AF8: bgez        $a0, L_80089B04
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80089AFC: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_80089B04;
    }
    // 0x80089AFC: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80089B00: addiu       $v0, $a0, 0xF
    ctx->r2 = ADD32(ctx->r4, 0XF);
L_80089B04:
    // 0x80089B04: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80089B08: blez        $v0, L_80089B14
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80089B0C: addiu       $a1, $zero, 0x800
        ctx->r5 = ADD32(0, 0X800);
            goto L_80089B14;
    }
    // 0x80089B0C: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    // 0x80089B10: addiu       $a1, $v0, 0x7FF
    ctx->r5 = ADD32(ctx->r2, 0X7FF);
L_80089B14:
    // 0x80089B14: lh          $a0, 0xC($a3)
    ctx->r4 = MEM_H(ctx->r7, 0XC);
    // 0x80089B18: lh          $v0, 0xE($a3)
    ctx->r2 = MEM_H(ctx->r7, 0XE);
    // 0x80089B1C: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80089B20: mflo        $v0
    ctx->r2 = lo;
    // 0x80089B24: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80089B28: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x80089B2C: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x80089B30: slti        $v0, $v1, 0x800
    ctx->r2 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x80089B34: beql        $v0, $zero, L_80089B3C
    if (ctx->r2 == 0) {
        // 0x80089B38: addiu       $v1, $zero, 0x7FF
        ctx->r3 = ADD32(0, 0X7FF);
            goto L_80089B3C;
    }
    goto skip_0;
    // 0x80089B38: addiu       $v1, $zero, 0x7FF
    ctx->r3 = ADD32(0, 0X7FF);
    skip_0:
L_80089B3C:
    // 0x80089B3C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80089B40: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x80089B44: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x80089B48: lui         $v1, 0x700
    ctx->r3 = S32(0X700 << 16);
    // 0x80089B4C: bgez        $a0, L_80089B58
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80089B50: or          $t0, $v0, $v1
        ctx->r8 = ctx->r2 | ctx->r3;
            goto L_80089B58;
    }
    // 0x80089B50: or          $t0, $v0, $v1
    ctx->r8 = ctx->r2 | ctx->r3;
    // 0x80089B54: addiu       $a2, $a0, 0xF
    ctx->r6 = ADD32(ctx->r4, 0XF);
L_80089B58:
    // 0x80089B58: sra         $v0, $a2, 4
    ctx->r2 = S32(SIGNED(ctx->r6) >> 4);
    // 0x80089B5C: blezl       $v0, L_80089B94
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80089B60: andi        $v0, $a1, 0xFFF
        ctx->r2 = ctx->r5 & 0XFFF;
            goto L_80089B94;
    }
    goto skip_1;
    // 0x80089B60: andi        $v0, $a1, 0xFFF
    ctx->r2 = ctx->r5 & 0XFFF;
    skip_1:
    // 0x80089B64: div         $zero, $a1, $v0
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r2)));
    // 0x80089B68: bne         $v0, $zero, L_80089B74
    if (ctx->r2 != 0) {
        // 0x80089B6C: nop
    
            goto L_80089B74;
    }
    // 0x80089B6C: nop

    // 0x80089B70: break       7
    do_break(2148047728);
L_80089B74:
    // 0x80089B74: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80089B78: bne         $v0, $at, L_80089B8C
    if (ctx->r2 != ctx->r1) {
        // 0x80089B7C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80089B8C;
    }
    // 0x80089B7C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80089B80: bne         $a1, $at, L_80089B8C
    if (ctx->r5 != ctx->r1) {
        // 0x80089B84: nop
    
            goto L_80089B8C;
    }
    // 0x80089B84: nop

    // 0x80089B88: break       6
    do_break(2148047752);
L_80089B8C:
    // 0x80089B8C: mflo        $v0
    ctx->r2 = lo;
    // 0x80089B90: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_80089B94:
    // 0x80089B94: or          $v0, $t0, $v0
    ctx->r2 = ctx->r8 | ctx->r2;
    // 0x80089B98: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80089B9C: lw          $a0, -0x6F10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F10);
    // 0x80089BA0: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x80089BA4: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x80089BA8: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x80089BAC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80089BB0: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80089BB4: lhu         $v0, 0xC($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0XC);
    // 0x80089BB8: ori         $v1, $v1, 0x200
    ctx->r3 = ctx->r3 | 0X200;
    // 0x80089BBC: lui         $a1, 0x100
    ctx->r5 = S32(0X100 << 16);
    // 0x80089BC0: sw          $v1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r3;
    // 0x80089BC4: lui         $v1, 0xF200
    ctx->r3 = S32(0XF200 << 16);
    // 0x80089BC8: sw          $v1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r3;
    // 0x80089BCC: lui         $v1, 0xF560
    ctx->r3 = S32(0XF560 << 16);
    // 0x80089BD0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80089BD4: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80089BD8: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80089BDC: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x80089BE0: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x80089BE4: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80089BE8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80089BEC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x80089BF0: lh          $v0, 0xC($a3)
    ctx->r2 = MEM_H(ctx->r7, 0XC);
    // 0x80089BF4: lh          $v1, 0xE($a3)
    ctx->r3 = MEM_H(ctx->r7, 0XE);
    // 0x80089BF8: ori         $a1, $a1, 0x4008
    ctx->r5 = ctx->r5 | 0X4008;
    // 0x80089BFC: lui         $a2, 0x600
    ctx->r6 = S32(0X600 << 16);
    // 0x80089C00: sw          $a1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r5;
    // 0x80089C04: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80089C08: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80089C0C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80089C10: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x80089C14: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80089C18: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80089C1C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80089C20: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80089C24: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x80089C28: lw          $a1, 0x4C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4C);
    // 0x80089C2C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80089C30: lbu         $v1, 0x559C($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X559C);
    // 0x80089C34: ori         $a2, $a2, 0x406
    ctx->r6 = ctx->r6 | 0X406;
    // 0x80089C38: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x80089C3C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80089C40: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80089C44: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x80089C48: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80089C4C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80089C50: addiu       $v0, $a0, 0x18
    ctx->r2 = ADD32(ctx->r4, 0X18);
    // 0x80089C54: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80089C58: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80089C5C: addiu       $v0, $a0, 0x20
    ctx->r2 = ADD32(ctx->r4, 0X20);
    // 0x80089C60: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80089C64: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80089C68: addiu       $v0, $a0, 0x28
    ctx->r2 = ADD32(ctx->r4, 0X28);
    // 0x80089C6C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80089C70: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80089C74: addiu       $v0, $zero, 0x602
    ctx->r2 = ADD32(0, 0X602);
    // 0x80089C78: sw          $v0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r2;
    // 0x80089C7C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80089C80: addiu       $v0, $v0, 0xBE0
    ctx->r2 = ADD32(ctx->r2, 0XBE0);
    // 0x80089C84: sw          $a2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r6;
    // 0x80089C88: sll         $a1, $a1, 7
    ctx->r5 = S32(ctx->r5 << 7);
    // 0x80089C8C: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x80089C90: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80089C94: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80089C98: sw          $a1, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r5;
L_80089C9C:
    // 0x80089C9C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80089CA0: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x80089CA4: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80089CA8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80089CAC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80089CB0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80089CB4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80089CB8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80089CBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80089CC0: jr          $ra
    // 0x80089CC4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80089CC4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80089CC8: nop

    // 0x80089CCC: nop

;}
RECOMP_FUNC void func_80091330_6C730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80091330: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80091334: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80091338: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009133C: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80091340: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80091344: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80091348: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8009134C: lbu         $v0, 0x4($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X4);
    // 0x80091350: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x80091354: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    // 0x80091358: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8009135C: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x80091360: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x80091364: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80091368: lh          $a1, 0x0($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X0);
    // 0x8009136C: jal         0x80091448
    // 0x80091370: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_80091448_6C848(rdram, ctx);
        goto after_0;
    // 0x80091370: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x80091374: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x80091378: beq         $a0, $zero, L_80091430
    if (ctx->r4 == 0) {
        // 0x8009137C: nop
    
            goto L_80091430;
    }
    // 0x8009137C: nop

    // 0x80091380: beq         $v0, $zero, L_80091424
    if (ctx->r2 == 0) {
        // 0x80091384: addiu       $v0, $zero, 0x228
        ctx->r2 = ADD32(0, 0X228);
            goto L_80091424;
    }
    // 0x80091384: addiu       $v0, $zero, 0x228
    ctx->r2 = ADD32(0, 0X228);
    // 0x80091388: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x8009138C: sw          $v0, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->r2;
    // 0x80091390: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x80091394: sw          $s0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r16;
    // 0x80091398: jal         0x80091C78
    // 0x8009139C: sw          $a0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r4;
    func_80091C78_6D078(rdram, ctx);
        goto after_1;
    // 0x8009139C: sw          $a0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r4;
    after_1:
    // 0x800913A0: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x800913A4: lw          $v1, -0xEEC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XEEC);
    // 0x800913A8: lw          $v1, 0x1C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1C);
    // 0x800913AC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x800913B0: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x800913B4: sh          $v0, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r2;
    // 0x800913B8: addiu       $v0, $zero, 0x170
    ctx->r2 = ADD32(0, 0X170);
    // 0x800913BC: sw          $zero, 0xC($a2)
    MEM_W(0XC, ctx->r6) = 0;
    // 0x800913C0: sw          $v0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r2;
    // 0x800913C4: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x800913C8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x800913CC: jal         0x8008FB18
    // 0x800913D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008FB18_6AF18(rdram, ctx);
        goto after_2;
    // 0x800913D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x800913D4: jal         0x80091C78
    // 0x800913D8: nop

    func_80091C78_6D078(rdram, ctx);
        goto after_3;
    // 0x800913D8: nop

    after_3:
    // 0x800913DC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x800913E0: beq         $a2, $zero, L_80091430
    if (ctx->r6 == 0) {
        // 0x800913E4: nop
    
            goto L_80091430;
    }
    // 0x800913E4: nop

    // 0x800913E8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800913EC: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x800913F0: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x800913F4: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x800913F8: lw          $a0, 0x88($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X88);
    // 0x800913FC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80091400: sh          $v0, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r2;
    // 0x80091404: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x80091408: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8009140C: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x80091410: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x80091414: jal         0x8008FB18
    // 0x80091418: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008FB18_6AF18(rdram, ctx);
        goto after_4;
    // 0x80091418: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x8009141C: j           L_80091430
    // 0x80091420: nop

        goto L_80091430;
    // 0x80091420: nop

L_80091424:
    // 0x80091424: sw          $zero, 0x88($a0)
    MEM_W(0X88, ctx->r4) = 0;
    // 0x80091428: sw          $s0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r16;
    // 0x8009142C: sw          $a0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r4;
L_80091430:
    // 0x80091430: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x80091434: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80091438: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009143C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80091440: jr          $ra
    // 0x80091444: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80091444: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8007987C_54C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007987C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80079880: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80079884: jal         0x8004F5C4
    // 0x80079888: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80079888: nop

    after_0:
    // 0x8007988C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80079890: jr          $ra
    // 0x80079894: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80079894: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004F820_2AC20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004F820: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004F824: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8004F828: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x8004F82C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8004F830: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x8004F834: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8004F838: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x8004F83C: lh          $a2, 0x4($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X4);
    // 0x8004F840: lh          $v1, 0x0($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X0);
    // 0x8004F844: lh          $a0, 0x0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X0);
    // 0x8004F848: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x8004F84C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8004F850: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8004F854: blez        $v0, L_8004F898
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004F858: sll         $v1, $v1, 16
        ctx->r3 = S32(ctx->r3 << 16);
            goto L_8004F898;
    }
    // 0x8004F858: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8004F85C: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x8004F860: bne         $v0, $zero, L_8004F86C
    if (ctx->r2 != 0) {
        // 0x8004F864: nop
    
            goto L_8004F86C;
    }
    // 0x8004F864: nop

    // 0x8004F868: break       7
    do_break(2147809384);
L_8004F86C:
    // 0x8004F86C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004F870: bne         $v0, $at, L_8004F884
    if (ctx->r2 != ctx->r1) {
        // 0x8004F874: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004F884;
    }
    // 0x8004F874: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004F878: bne         $v1, $at, L_8004F884
    if (ctx->r3 != ctx->r1) {
        // 0x8004F87C: nop
    
            goto L_8004F884;
    }
    // 0x8004F87C: nop

    // 0x8004F880: break       6
    do_break(2147809408);
L_8004F884:
    // 0x8004F884: mflo        $a0
    ctx->r4 = lo;
    // 0x8004F888: jal         0x80032554
    // 0x8004F88C: nop

    func_80032554_D954(rdram, ctx);
        goto after_0;
    // 0x8004F88C: nop

    after_0:
    // 0x8004F890: j           L_8004F8F4
    // 0x8004F894: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
        goto L_8004F8F4;
    // 0x8004F894: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
L_8004F898:
    // 0x8004F898: bgezl       $v0, L_8004F8E8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004F89C: nor         $v0, $zero, $v1
        ctx->r2 = ~(0 | ctx->r3);
            goto L_8004F8E8;
    }
    goto skip_0;
    // 0x8004F89C: nor         $v0, $zero, $v1
    ctx->r2 = ~(0 | ctx->r3);
    skip_0:
    // 0x8004F8A0: negu        $a0, $v1
    ctx->r4 = SUB32(0, ctx->r3);
    // 0x8004F8A4: div         $zero, $a0, $v0
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r2)));
    // 0x8004F8A8: bne         $v0, $zero, L_8004F8B4
    if (ctx->r2 != 0) {
        // 0x8004F8AC: nop
    
            goto L_8004F8B4;
    }
    // 0x8004F8AC: nop

    // 0x8004F8B0: break       7
    do_break(2147809456);
L_8004F8B4:
    // 0x8004F8B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004F8B8: bne         $v0, $at, L_8004F8CC
    if (ctx->r2 != ctx->r1) {
        // 0x8004F8BC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004F8CC;
    }
    // 0x8004F8BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004F8C0: bne         $a0, $at, L_8004F8CC
    if (ctx->r4 != ctx->r1) {
        // 0x8004F8C4: nop
    
            goto L_8004F8CC;
    }
    // 0x8004F8C4: nop

    // 0x8004F8C8: break       6
    do_break(2147809480);
L_8004F8CC:
    // 0x8004F8CC: mflo        $a0
    ctx->r4 = lo;
    // 0x8004F8D0: jal         0x80032554
    // 0x8004F8D4: nop

    func_80032554_D954(rdram, ctx);
        goto after_1;
    // 0x8004F8D4: nop

    after_1:
    // 0x8004F8D8: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x8004F8DC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8004F8E0: j           L_8004F8F4
    // 0x8004F8E4: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
        goto L_8004F8F4;
    // 0x8004F8E4: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
L_8004F8E8:
    // 0x8004F8E8: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8004F8EC: andi        $v0, $v0, 0xC00
    ctx->r2 = ctx->r2 & 0XC00;
    // 0x8004F8F0: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
L_8004F8F4:
    // 0x8004F8F4: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x8004F8F8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8004F8FC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8004F900: slti        $a1, $v1, 0x800
    ctx->r5 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x8004F904: beq         $a1, $zero, L_8004F930
    if (ctx->r5 == 0) {
        // 0x8004F908: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_8004F930;
    }
    // 0x8004F908: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8004F90C: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8004F910: sra         $v0, $v0, 15
    ctx->r2 = S32(SIGNED(ctx->r2) >> 15);
    // 0x8004F914: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004F918: beq         $v0, $zero, L_8004F928
    if (ctx->r2 == 0) {
        // 0x8004F91C: nop
    
            goto L_8004F928;
    }
    // 0x8004F91C: nop

    // 0x8004F920: j           L_8004F94C
    // 0x8004F924: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
        goto L_8004F94C;
    // 0x8004F924: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
L_8004F928:
    // 0x8004F928: bne         $a1, $zero, L_8004F950
    if (ctx->r5 != 0) {
        // 0x8004F92C: slti        $v0, $a0, 0x801
        ctx->r2 = SIGNED(ctx->r4) < 0X801 ? 1 : 0;
            goto L_8004F950;
    }
    // 0x8004F92C: slti        $v0, $a0, 0x801
    ctx->r2 = SIGNED(ctx->r4) < 0X801 ? 1 : 0;
L_8004F930:
    // 0x8004F930: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    // 0x8004F934: subu        $v1, $a1, $a0
    ctx->r3 = SUB32(ctx->r5, ctx->r4);
    // 0x8004F938: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8004F93C: sra         $v0, $v0, 15
    ctx->r2 = S32(SIGNED(ctx->r2) >> 15);
    // 0x8004F940: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004F944: bnel        $v1, $zero, L_8004F94C
    if (ctx->r3 != 0) {
        // 0x8004F948: subu        $s0, $a1, $a0
        ctx->r16 = SUB32(ctx->r5, ctx->r4);
            goto L_8004F94C;
    }
    goto skip_1;
    // 0x8004F948: subu        $s0, $a1, $a0
    ctx->r16 = SUB32(ctx->r5, ctx->r4);
    skip_1:
L_8004F94C:
    // 0x8004F94C: slti        $v0, $a0, 0x801
    ctx->r2 = SIGNED(ctx->r4) < 0X801 ? 1 : 0;
L_8004F950:
    // 0x8004F950: bnel        $v0, $zero, L_8004F960
    if (ctx->r2 != 0) {
        // 0x8004F954: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_8004F960;
    }
    goto skip_2;
    // 0x8004F954: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    skip_2:
    // 0x8004F958: negu        $v0, $s0
    ctx->r2 = SUB32(0, ctx->r16);
    // 0x8004F95C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
L_8004F960:
    // 0x8004F960: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8004F964: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8004F968: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8004F96C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004F970: jr          $ra
    // 0x8004F974: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8004F974: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void Video_ThreadEntry(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800925D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800925DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800925E0: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x800925E4: addiu       $s0, $s0, 0x50EC
    ctx->r16 = ADD32(ctx->r16, 0X50EC);
    // 0x800925E8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800925EC: addiu       $s1, $sp, 0x14
    ctx->r17 = ADD32(ctx->r29, 0X14);
    // 0x800925F0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x800925F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_800925F8:
    // 0x800925F8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x800925FC: jal         0x8009A5E0
    // 0x80092600: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80092600: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80092604: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x80092608: lbu         $v0, 0x5474($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5474);
    // 0x8009260C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80092610: bne         $v0, $zero, L_800926F0
    if (ctx->r2 != 0) {
        // 0x80092614: nop
    
            goto L_800926F0;
    }
    // 0x80092614: nop

    // 0x80092618: jal         0x8009271C
    // 0x8009261C: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    func_8009271C_6DB1C(rdram, ctx);
        goto after_1;
    // 0x8009261C: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    after_1:
    // 0x80092620: jal         0x80094460
    // 0x80092624: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_2;
    // 0x80092624: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x80092628: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8009262C: lw          $v1, 0x5720($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5720);
    // 0x80092630: beq         $v1, $zero, L_8009266C
    if (ctx->r3 == 0) {
        // 0x80092634: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_8009266C;
    }
    // 0x80092634: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80092638: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x8009263C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80092640: jal         0x80094460
    // 0x80092644: sw          $v0, 0x5724($at)
    MEM_W(0X5724, ctx->r1) = ctx->r2;
    osSetIntMask_recomp(rdram, ctx);
        goto after_3;
    // 0x80092644: sw          $v0, 0x5724($at)
    MEM_W(0X5724, ctx->r1) = ctx->r2;
    after_3:
    // 0x80092648: addiu       $a0, $s0, 0xE0
    ctx->r4 = ADD32(ctx->r16, 0XE0);
    // 0x8009264C: addiu       $a1, $sp, 0x14
    ctx->r5 = ADD32(ctx->r29, 0X14);
    // 0x80092650: jal         0x8009A5E0
    // 0x80092654: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x80092654: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80092658: jal         0x80094460
    // 0x8009265C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_5;
    // 0x8009265C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x80092660: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80092664: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80092668: sw          $zero, 0x5724($at)
    MEM_W(0X5724, ctx->r1) = 0;
L_8009266C:
    // 0x8009266C: jal         0x80094460
    // 0x80092670: nop

    osSetIntMask_recomp(rdram, ctx);
        goto after_6;
    // 0x80092670: nop

    after_6:
    // 0x80092674: jal         0x80094460
    // 0x80092678: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_7;
    // 0x80092678: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x8009267C: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x80092680: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80092684: sw          $v1, 0x571C($at)
    MEM_W(0X571C, ctx->r1) = ctx->r3;
    // 0x80092688: jal         0x80094460
    // 0x8009268C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    osSetIntMask_recomp(rdram, ctx);
        goto after_8;
    // 0x8009268C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_8:
    // 0x80092690: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x80092694: jal         0x8009A8F0
    // 0x80092698: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    osSpTaskLoad_recomp(rdram, ctx);
        goto after_9;
    // 0x80092698: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_9:
    // 0x8009269C: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x800926A0: jal         0x8009AAFC
    // 0x800926A4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    osSpTaskStartGo_recomp(rdram, ctx);
        goto after_10;
    // 0x800926A4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_10:
    // 0x800926A8: addiu       $a0, $s0, 0x70
    ctx->r4 = ADD32(ctx->r16, 0X70);
    // 0x800926AC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x800926B0: jal         0x8009A5E0
    // 0x800926B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_11;
    // 0x800926B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x800926B8: jal         0x80094460
    // 0x800926BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_12;
    // 0x800926BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_12:
    // 0x800926C0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x800926C4: sw          $zero, 0x571C($at)
    MEM_W(0X571C, ctx->r1) = 0;
    // 0x800926C8: jal         0x80094460
    // 0x800926CC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    osSetIntMask_recomp(rdram, ctx);
        goto after_13;
    // 0x800926CC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_13:
    // 0x800926D0: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x800926D4: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x800926D8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x800926DC: bne         $v0, $zero, L_800926F0
    if (ctx->r2 != 0) {
        // 0x800926E0: addiu       $a0, $s0, 0xA8
        ctx->r4 = ADD32(ctx->r16, 0XA8);
            goto L_800926F0;
    }
    // 0x800926E0: addiu       $a0, $s0, 0xA8
    ctx->r4 = ADD32(ctx->r16, 0XA8);
    // 0x800926E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x800926E8: jal         0x8009A5E0
    // 0x800926EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_14;
    // 0x800926EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_14:
L_800926F0:
    // 0x800926F0: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x800926F4: lw          $a0, 0x50($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X50);
    // 0x800926F8: jal         0x8009A710
    // 0x800926FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_15;
    // 0x800926FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x80092700: j           L_800925F8
    // 0x80092704: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_800925F8;
    // 0x80092704: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80092708: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8009270C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80092710: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80092714: jr          $ra
    // 0x80092718: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80092718: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8003715C_1255C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003715C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80037160: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80037164: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80037168: addiu       $s0, $s0, -0xC6F
    ctx->r16 = ADD32(ctx->r16, -0XC6F);
    // 0x8003716C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80037170: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x80037174: addiu       $s2, $s2, -0x36D4
    ctx->r18 = ADD32(ctx->r18, -0X36D4);
    // 0x80037178: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8003717C: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80037180: addiu       $s1, $s1, -0x36F8
    ctx->r17 = ADD32(ctx->r17, -0X36F8);
    // 0x80037184: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
L_80037188:
    // 0x80037188: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x8003718C: lb          $v1, 0x1($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X1);
    // 0x80037190: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80037194: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80037198: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8003719C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x800371A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800371A4: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x800371A8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x800371AC: jalr        $v0
    // 0x800371B0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x800371B0: nop

    after_0:
    // 0x800371B4: lb          $v0, 0x1($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X1);
    // 0x800371B8: bltz        $v0, L_800371D0
    if (SIGNED(ctx->r2) < 0) {
        // 0x800371BC: nop
    
            goto L_800371D0;
    }
    // 0x800371BC: nop

    // 0x800371C0: jal         0x80029114
    // 0x800371C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80029114_4514(rdram, ctx);
        goto after_1;
    // 0x800371C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x800371C8: j           L_80037188
    // 0x800371CC: nop

        goto L_80037188;
    // 0x800371CC: nop

L_800371D0:
    // 0x800371D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800371D4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x800371D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800371DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800371E0: jr          $ra
    // 0x800371E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800371E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80061F14_3D314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80061F14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80061F18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80061F1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80061F20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80061F24: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80061F28: lui         $a1, 0x100
    ctx->r5 = S32(0X100 << 16);
    // 0x80061F2C: and         $v0, $a0, $a1
    ctx->r2 = ctx->r4 & ctx->r5;
    // 0x80061F30: bne         $v0, $zero, L_80061F54
    if (ctx->r2 != 0) {
        // 0x80061F34: or          $v0, $a0, $a1
        ctx->r2 = ctx->r4 | ctx->r5;
            goto L_80061F54;
    }
    // 0x80061F34: or          $v0, $a0, $a1
    ctx->r2 = ctx->r4 | ctx->r5;
    // 0x80061F38: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x80061F3C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80061F40: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x80061F44: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x80061F48: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80061F4C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80061F50: sh          $v1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r3;
L_80061F54:
    // 0x80061F54: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80061F58: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x80061F5C: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x80061F60: or          $v1, $v0, $v1
    ctx->r3 = ctx->r2 | ctx->r3;
    // 0x80061F64: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80061F68: bgtz        $a0, L_80062020
    if (SIGNED(ctx->r4) > 0) {
        // 0x80061F6C: sw          $v1, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r3;
            goto L_80062020;
    }
    // 0x80061F6C: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x80061F70: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x80061F74: or          $a0, $v1, $v0
    ctx->r4 = ctx->r3 | ctx->r2;
    // 0x80061F78: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x80061F7C: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x80061F80: beq         $v0, $zero, L_80061FB8
    if (ctx->r2 == 0) {
        // 0x80061F84: sw          $a0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r4;
            goto L_80061FB8;
    }
    // 0x80061F84: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x80061F88: lbu         $v0, 0x7C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7C);
    // 0x80061F8C: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x80061F90: or          $v1, $a0, $v1
    ctx->r3 = ctx->r4 | ctx->r3;
    // 0x80061F94: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x80061F98: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80061F9C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80061FA0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80061FA4: lw          $v0, 0x750($at)
    ctx->r2 = MEM_W(ctx->r1, 0X750);
    // 0x80061FA8: jalr        $v0
    // 0x80061FAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80061FAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80061FB0: j           L_8006202C
    // 0x80061FB4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8006202C;
    // 0x80061FB4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80061FB8:
    // 0x80061FB8: lui         $v0, 0xFFFD
    ctx->r2 = S32(0XFFFD << 16);
    // 0x80061FBC: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80061FC0: lui         $v1, 0x7EFF
    ctx->r3 = S32(0X7EFF << 16);
    // 0x80061FC4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80061FC8: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x80061FCC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80061FD0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80061FD4: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x80061FD8: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80061FDC: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80061FE0: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
    // 0x80061FE4: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x80061FE8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80061FEC: beq         $v1, $zero, L_80062000
    if (ctx->r3 == 0) {
        // 0x80061FF0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80062000;
    }
    // 0x80061FF0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80061FF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80061FF8: jal         0x80036B00
    // 0x80061FFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_1;
    // 0x80061FFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
L_80062000:
    // 0x80062000: lui         $a0, 0xFFFB
    ctx->r4 = S32(0XFFFB << 16);
    // 0x80062004: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80062008: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x8006200C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80062010: sh          $v0, 0xC2($s0)
    MEM_H(0XC2, ctx->r16) = ctx->r2;
    // 0x80062014: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x80062018: j           L_80062028
    // 0x8006201C: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
        goto L_80062028;
    // 0x8006201C: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
L_80062020:
    // 0x80062020: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80062024: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80062028:
    // 0x80062028: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8006202C:
    // 0x8006202C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80062030: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80062034: jr          $ra
    // 0x80062038: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80062038: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80064B50_3FF50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80064B50: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80064B54: lw          $v0, -0x3BFC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BFC);
    // 0x80064B58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80064B5C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80064B60: lw          $a2, 0x14($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X14);
    // 0x80064B64: sw          $v0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r2;
    // 0x80064B68: lw          $a1, 0x40($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X40);
    // 0x80064B6C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80064B70: sw          $a2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r6;
    // 0x80064B74: jal         0x80069518
    // 0x80064B78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80069518_44918(rdram, ctx);
        goto after_0;
    // 0x80064B78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x80064B7C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80064B80: jr          $ra
    // 0x80064B84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80064B84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004A0DC_254DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A0DC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8004A0E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8004A0E4: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
L_8004A0E8:
    // 0x8004A0E8: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x8004A0EC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004A0F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004A0F4: lb          $v0, -0x39A0($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X39A0);
    // 0x8004A0F8: beq         $v0, $zero, L_8004A114
    if (ctx->r2 == 0) {
        // 0x8004A0FC: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_8004A114;
    }
    // 0x8004A0FC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8004A100: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004A104: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004A108: lw          $v0, -0x3980($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3980);
    // 0x8004A10C: beq         $v0, $a0, L_8004A128
    if (ctx->r2 == ctx->r4) {
        // 0x8004A110: nop
    
            goto L_8004A128;
    }
    // 0x8004A110: nop

L_8004A114:
    // 0x8004A114: sltiu       $v0, $a1, 0x3
    ctx->r2 = ctx->r5 < 0X3 ? 1 : 0;
    // 0x8004A118: bne         $v0, $zero, L_8004A0E8
    if (ctx->r2 != 0) {
        // 0x8004A11C: addiu       $a2, $v1, 0x24
        ctx->r6 = ADD32(ctx->r3, 0X24);
            goto L_8004A0E8;
    }
    // 0x8004A11C: addiu       $a2, $v1, 0x24
    ctx->r6 = ADD32(ctx->r3, 0X24);
    // 0x8004A120: j           L_8004A1A4
    // 0x8004A124: nop

        goto L_8004A1A4;
    // 0x8004A124: nop

L_8004A128:
    // 0x8004A128: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004A12C: lw          $v0, -0x38B0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X38B0);
    // 0x8004A130: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8004A134: addiu       $v1, $v1, -0x39A0
    ctx->r3 = ADD32(ctx->r3, -0X39A0);
    // 0x8004A138: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8004A13C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A140: sw          $v0, -0x38B0($at)
    MEM_W(-0X38B0, ctx->r1) = ctx->r2;
    // 0x8004A144: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
    // 0x8004A148: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x8004A14C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A150: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x8004A154: sw          $zero, -0x39A0($at)
    MEM_W(-0X39A0, ctx->r1) = 0;
    // 0x8004A158: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8004A15C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8004A160: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x8004A164: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8004A168: addiu       $v0, $v1, 0xC
    ctx->r2 = ADD32(ctx->r3, 0XC);
    // 0x8004A16C: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x8004A170: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8004A174: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8004A178: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x8004A17C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8004A180: addiu       $v0, $v1, 0x14
    ctx->r2 = ADD32(ctx->r3, 0X14);
    // 0x8004A184: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x8004A188: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8004A18C: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x8004A190: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x8004A194: addiu       $v1, $v1, 0x1C
    ctx->r3 = ADD32(ctx->r3, 0X1C);
    // 0x8004A198: addu        $v1, $a2, $v1
    ctx->r3 = ADD32(ctx->r6, ctx->r3);
    // 0x8004A19C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8004A1A0: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_8004A1A4:
    // 0x8004A1A4: jr          $ra
    // 0x8004A1A8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8004A1A8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8002BF38_7338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002BF38: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002BF3C: lw          $a0, 0x22DC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22DC);
    // 0x8002BF40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002BF44: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8002BF48: jal         0x8008AD34
    // 0x8002BF4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008AD34_66134(rdram, ctx);
        goto after_0;
    // 0x8002BF4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8002BF50: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002BF54: lw          $a0, 0x22E0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22E0);
    // 0x8002BF58: jal         0x8008AD34
    // 0x8002BF5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008AD34_66134(rdram, ctx);
        goto after_1;
    // 0x8002BF5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8002BF60: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002BF64: lw          $a0, 0x22E4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22E4);
    // 0x8002BF68: jal         0x8008AD34
    // 0x8002BF6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008AD34_66134(rdram, ctx);
        goto after_2;
    // 0x8002BF6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8002BF70: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002BF74: lw          $a0, 0x22E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22E8);
    // 0x8002BF78: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8002BF7C: lw          $v0, 0x56FC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X56FC);
    // 0x8002BF80: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8002BF84: sw          $zero, -0x72D8($at)
    MEM_W(-0X72D8, ctx->r1) = 0;
    // 0x8002BF88: jal         0x8008ADE8
    // 0x8002BF8C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    func_8008ADE8_661E8(rdram, ctx);
        goto after_3;
    // 0x8002BF8C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    after_3:
    // 0x8002BF90: beq         $v0, $zero, L_8002BFA8
    if (ctx->r2 == 0) {
        // 0x8002BF94: nop
    
            goto L_8002BFA8;
    }
    // 0x8002BF94: nop

    // 0x8002BF98: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002BF9C: lw          $a0, 0x22E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22E8);
    // 0x8002BFA0: jal         0x8008AD34
    // 0x8002BFA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008AD34_66134(rdram, ctx);
        goto after_4;
    // 0x8002BFA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
L_8002BFA8:
    // 0x8002BFA8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002BFAC: jal         0x8008ADE8
    // 0x8002BFB0: lw          $a0, 0x22EC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22EC);
    func_8008ADE8_661E8(rdram, ctx);
        goto after_5;
    // 0x8002BFB0: lw          $a0, 0x22EC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22EC);
    after_5:
    // 0x8002BFB4: beq         $v0, $zero, L_8002BFCC
    if (ctx->r2 == 0) {
        // 0x8002BFB8: nop
    
            goto L_8002BFCC;
    }
    // 0x8002BFB8: nop

    // 0x8002BFBC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002BFC0: lw          $a0, 0x22EC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22EC);
    // 0x8002BFC4: jal         0x8008AD34
    // 0x8002BFC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008AD34_66134(rdram, ctx);
        goto after_6;
    // 0x8002BFC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
L_8002BFCC:
    // 0x8002BFCC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002BFD0: jal         0x8008ADE8
    // 0x8002BFD4: lw          $a0, 0x22D4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D4);
    func_8008ADE8_661E8(rdram, ctx);
        goto after_7;
    // 0x8002BFD4: lw          $a0, 0x22D4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D4);
    after_7:
    // 0x8002BFD8: beq         $v0, $zero, L_8002BFF0
    if (ctx->r2 == 0) {
        // 0x8002BFDC: nop
    
            goto L_8002BFF0;
    }
    // 0x8002BFDC: nop

    // 0x8002BFE0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002BFE4: lw          $a0, 0x22D4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D4);
    // 0x8002BFE8: jal         0x8008AD34
    // 0x8002BFEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008AD34_66134(rdram, ctx);
        goto after_8;
    // 0x8002BFEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
L_8002BFF0:
    // 0x8002BFF0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002BFF4: jr          $ra
    // 0x8002BFF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002BFF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003D60C_18A0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003D60C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003D610: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8003D614: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8003D618: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8003D61C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8003D620: lb          $v1, 0x1($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X1);
    // 0x8003D624: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8003D628: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8003D62C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003D630: beq         $v1, $v0, L_8003D6E8
    if (ctx->r3 == ctx->r2) {
        // 0x8003D634: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8003D6E8;
    }
    // 0x8003D634: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8003D638: beql        $v0, $zero, L_8003D650
    if (ctx->r2 == 0) {
        // 0x8003D63C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8003D650;
    }
    goto skip_0;
    // 0x8003D63C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8003D640: beq         $v1, $zero, L_8003D660
    if (ctx->r3 == 0) {
        // 0x8003D644: addiu       $a0, $zero, 0x300
        ctx->r4 = ADD32(0, 0X300);
            goto L_8003D660;
    }
    // 0x8003D644: addiu       $a0, $zero, 0x300
    ctx->r4 = ADD32(0, 0X300);
    // 0x8003D648: j           L_8003D760
    // 0x8003D64C: nop

        goto L_8003D760;
    // 0x8003D64C: nop

L_8003D650:
    // 0x8003D650: beq         $v1, $v0, L_8003D72C
    if (ctx->r3 == ctx->r2) {
        // 0x8003D654: nop
    
            goto L_8003D72C;
    }
    // 0x8003D654: nop

    // 0x8003D658: j           L_8003D760
    // 0x8003D65C: nop

        goto L_8003D760;
    // 0x8003D65C: nop

L_8003D660:
    // 0x8003D660: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8003D664: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x8003D668: jal         0x8002C764
    // 0x8003D66C: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    func_8002C764_7B64(rdram, ctx);
        goto after_0;
    // 0x8003D66C: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    after_0:
    // 0x8003D670: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003D674: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x8003D678: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8003D67C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003D680: jal         0x80061724
    // 0x8003D684: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    func_80061724_3CB24(rdram, ctx);
        goto after_1;
    // 0x8003D684: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    after_1:
    // 0x8003D688: jal         0x8004B5B0
    // 0x8003D68C: nop

    func_8004B5B0_269B0(rdram, ctx);
        goto after_2;
    // 0x8003D68C: nop

    after_2:
    // 0x8003D690: jal         0x80036E48
    // 0x8003D694: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80036E48_12248(rdram, ctx);
        goto after_3;
    // 0x8003D694: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x8003D698: jal         0x8002A46C
    // 0x8003D69C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_8002A46C_586C(rdram, ctx);
        goto after_4;
    // 0x8003D69C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_4:
    // 0x8003D6A0: jal         0x8002A46C
    // 0x8003D6A4: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_8002A46C_586C(rdram, ctx);
        goto after_5;
    // 0x8003D6A4: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_5:
    // 0x8003D6A8: jal         0x8002A46C
    // 0x8003D6AC: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_8002A46C_586C(rdram, ctx);
        goto after_6;
    // 0x8003D6AC: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_6:
    // 0x8003D6B0: lb          $v0, 0x52($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X52);
    // 0x8003D6B4: slti        $v0, $v0, 0x9
    ctx->r2 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x8003D6B8: beq         $v0, $zero, L_8003D6C4
    if (ctx->r2 == 0) {
        // 0x8003D6BC: addiu       $a0, $zero, 0x23
        ctx->r4 = ADD32(0, 0X23);
            goto L_8003D6C4;
    }
    // 0x8003D6BC: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x8003D6C0: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
L_8003D6C4:
    // 0x8003D6C4: jal         0x80036340
    // 0x8003D6C8: addiu       $a1, $zero, -0x2
    ctx->r5 = ADD32(0, -0X2);
    func_80036340_11740(rdram, ctx);
        goto after_7;
    // 0x8003D6C8: addiu       $a1, $zero, -0x2
    ctx->r5 = ADD32(0, -0X2);
    after_7:
    // 0x8003D6CC: jal         0x800588E4
    // 0x8003D6D0: nop

    func_800588E4_33CE4(rdram, ctx);
        goto after_8;
    // 0x8003D6D0: nop

    after_8:
    // 0x8003D6D4: jal         0x80089EA0
    // 0x8003D6D8: nop

    func_80089EA0_652A0(rdram, ctx);
        goto after_9;
    // 0x8003D6D8: nop

    after_9:
    // 0x8003D6DC: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8003D6E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003D6E4: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_8003D6E8:
    // 0x8003D6E8: jal         0x8005891C
    // 0x8003D6EC: nop

    func_8005891C_33D1C(rdram, ctx);
        goto after_10;
    // 0x8003D6EC: nop

    after_10:
    // 0x8003D6F0: beq         $v0, $zero, L_8003D760
    if (ctx->r2 == 0) {
        // 0x8003D6F4: nop
    
            goto L_8003D760;
    }
    // 0x8003D6F4: nop

    // 0x8003D6F8: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x8003D6FC: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8003D700: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x8003D704: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8003D708: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003D70C: jal         0x80061724
    // 0x8003D710: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    func_80061724_3CB24(rdram, ctx);
        goto after_11;
    // 0x8003D710: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    after_11:
    // 0x8003D714: jal         0x8004B5E8
    // 0x8003D718: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_12;
    // 0x8003D718: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_12:
    // 0x8003D71C: jal         0x80035698
    // 0x8003D720: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80035698_10A98(rdram, ctx);
        goto after_13;
    // 0x8003D720: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_13:
    // 0x8003D724: j           L_8003D760
    // 0x8003D728: nop

        goto L_8003D760;
    // 0x8003D728: nop

L_8003D72C:
    // 0x8003D72C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003D730: jal         0x800357E4
    // 0x8003D734: lb          $a0, -0x3BC8($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X3BC8);
    func_800357E4_10BE4(rdram, ctx);
        goto after_14;
    // 0x8003D734: lb          $a0, -0x3BC8($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X3BC8);
    after_14:
    // 0x8003D738: jal         0x80036888
    // 0x8003D73C: nop

    func_80036888_11C88(rdram, ctx);
        goto after_15;
    // 0x8003D73C: nop

    after_15:
    // 0x8003D740: jal         0x800571E4
    // 0x8003D744: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800571E4_325E4(rdram, ctx);
        goto after_16;
    // 0x8003D744: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_16:
    // 0x8003D748: jal         0x80029114
    // 0x8003D74C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80029114_4514(rdram, ctx);
        goto after_17;
    // 0x8003D74C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_17:
    // 0x8003D750: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8003D754: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8003D758: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003D75C: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_8003D760:
    // 0x8003D760: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8003D764: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8003D768: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003D76C: jr          $ra
    // 0x8003D770: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8003D770: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8008B1D0_665D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B1D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008B1D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8008B1D8: sw          $a0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r4;
    // 0x8008B1DC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008B1E0: sw          $a0, 0x4FB4($at)
    MEM_W(0X4FB4, ctx->r1) = ctx->r4;
    // 0x8008B1E4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8008B1E8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8008B1EC: jal         0x8008B4F4
    // 0x8008B1F0: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
    func_8008B4F4_668F4(rdram, ctx);
        goto after_0;
    // 0x8008B1F0: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x8008B1F4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8008B1F8: jr          $ra
    // 0x8008B1FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8008B1FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004F6DC_2AADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004F6DC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8004F6E0: lw          $a0, 0xA9C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XA9C);
    // 0x8004F6E4: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x8004F6E8: lw          $a1, 0x5214($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5214);
    // 0x8004F6EC: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8004F6F0: lw          $a2, -0x2408($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X2408);
    // 0x8004F6F4: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8004F6F8: lw          $a3, 0x5708($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X5708);
    // 0x8004F6FC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004F700: addiu       $v0, $v0, -0x139C
    ctx->r2 = ADD32(ctx->r2, -0X139C);
    // 0x8004F704: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8004F708: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x8004F70C: lw          $t1, -0x1398($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1398);
    // 0x8004F710: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x8004F714: lw          $t2, 0x6B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6B20);
    // 0x8004F718: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x8004F71C: lw          $t3, 0xB1C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0XB1C);
    // 0x8004F720: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8004F724: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004F728: lw          $v0, -0x3FB0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3FB0);
    // 0x8004F72C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8004F730: lw          $v1, -0x714C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X714C);
    // 0x8004F734: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8004F738: sw          $zero, 0xA9C($at)
    MEM_W(0XA9C, ctx->r1) = 0;
    // 0x8004F73C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8004F740: sw          $zero, 0x5214($at)
    MEM_W(0X5214, ctx->r1) = 0;
    // 0x8004F744: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8004F748: sw          $zero, -0x2408($at)
    MEM_W(-0X2408, ctx->r1) = 0;
    // 0x8004F74C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004F750: sw          $zero, 0x5708($at)
    MEM_W(0X5708, ctx->r1) = 0;
    // 0x8004F754: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004F758: sw          $zero, -0x1398($at)
    MEM_W(-0X1398, ctx->r1) = 0;
    // 0x8004F75C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004F760: sw          $zero, 0x6B20($at)
    MEM_W(0X6B20, ctx->r1) = 0;
    // 0x8004F764: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8004F768: sw          $zero, 0xB1C($at)
    MEM_W(0XB1C, ctx->r1) = 0;
    // 0x8004F76C: nor         $a0, $zero, $a0
    ctx->r4 = ~(0 | ctx->r4);
    // 0x8004F770: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8004F774: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004F778: sw          $v0, -0x3FB0($at)
    MEM_W(-0X3FB0, ctx->r1) = ctx->r2;
    // 0x8004F77C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8004F780: lw          $v0, -0x7798($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7798);
    // 0x8004F784: nor         $a1, $zero, $a1
    ctx->r5 = ~(0 | ctx->r5);
    // 0x8004F788: and         $v1, $v1, $a1
    ctx->r3 = ctx->r3 & ctx->r5;
    // 0x8004F78C: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8004F790: sw          $v1, -0x714C($at)
    MEM_W(-0X714C, ctx->r1) = ctx->r3;
    // 0x8004F794: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8004F798: lw          $v1, -0x781C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X781C);
    // 0x8004F79C: nor         $a2, $zero, $a2
    ctx->r6 = ~(0 | ctx->r6);
    // 0x8004F7A0: nor         $a3, $zero, $a3
    ctx->r7 = ~(0 | ctx->r7);
    // 0x8004F7A4: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8004F7A8: addiu       $a0, $a0, -0x3F64
    ctx->r4 = ADD32(ctx->r4, -0X3F64);
    // 0x8004F7AC: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x8004F7B0: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8004F7B4: sw          $v0, -0x7798($at)
    MEM_W(-0X7798, ctx->r1) = ctx->r2;
    // 0x8004F7B8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8004F7BC: nor         $t0, $zero, $t0
    ctx->r8 = ~(0 | ctx->r8);
    // 0x8004F7C0: and         $v1, $v1, $a3
    ctx->r3 = ctx->r3 & ctx->r7;
    // 0x8004F7C4: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8004F7C8: sw          $v1, -0x781C($at)
    MEM_W(-0X781C, ctx->r1) = ctx->r3;
    // 0x8004F7CC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8004F7D0: lw          $v1, -0x3F60($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3F60);
    // 0x8004F7D4: nor         $t1, $zero, $t1
    ctx->r9 = ~(0 | ctx->r9);
    // 0x8004F7D8: and         $v0, $v0, $t0
    ctx->r2 = ctx->r2 & ctx->r8;
    // 0x8004F7DC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x8004F7E0: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8004F7E4: lw          $v0, 0x5210($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5210);
    // 0x8004F7E8: nor         $t2, $zero, $t2
    ctx->r10 = ~(0 | ctx->r10);
    // 0x8004F7EC: and         $v1, $v1, $t1
    ctx->r3 = ctx->r3 & ctx->r9;
    // 0x8004F7F0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004F7F4: sw          $v1, -0x3F60($at)
    MEM_W(-0X3F60, ctx->r1) = ctx->r3;
    // 0x8004F7F8: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8004F7FC: lw          $v1, -0x72C8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X72C8);
    // 0x8004F800: nor         $t3, $zero, $t3
    ctx->r11 = ~(0 | ctx->r11);
    // 0x8004F804: and         $v0, $v0, $t2
    ctx->r2 = ctx->r2 & ctx->r10;
    // 0x8004F808: and         $v1, $v1, $t3
    ctx->r3 = ctx->r3 & ctx->r11;
    // 0x8004F80C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8004F810: sw          $v0, 0x5210($at)
    MEM_W(0X5210, ctx->r1) = ctx->r2;
    // 0x8004F814: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8004F818: jr          $ra
    // 0x8004F81C: sw          $v1, -0x72C8($at)
    MEM_W(-0X72C8, ctx->r1) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8004F81C: sw          $v1, -0x72C8($at)
    MEM_W(-0X72C8, ctx->r1) = ctx->r3;
;}
RECOMP_FUNC void func_8003B810_16C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B810: jr          $ra
    // 0x8003B814: nop

    TRACE_RETURN()
    return;
    // 0x8003B814: nop

;}
RECOMP_FUNC void func_80046470_21870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80046470: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80046474: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80046478: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8004647C: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80046480: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80046484: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80046488: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8004648C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80046490: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80046494: lw          $a1, 0x78($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X78);
    // 0x80046498: jal         0x80046CEC
    // 0x8004649C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_80046CEC_220EC(rdram, ctx);
        goto after_0;
    // 0x8004649C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x800464A0: beq         $v0, $zero, L_80046CC8
    if (ctx->r2 == 0) {
        // 0x800464A4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80046CC8;
    }
    // 0x800464A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800464A8: lbu         $v0, 0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1);
    // 0x800464AC: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x800464B0: bne         $v0, $zero, L_800464C8
    if (ctx->r2 != 0) {
        // 0x800464B4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_800464C8;
    }
    // 0x800464B4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x800464B8: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    // 0x800464BC: lb          $v0, 0xBD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XBD);
    // 0x800464C0: bne         $v0, $zero, L_80046CC8
    if (ctx->r2 != 0) {
        // 0x800464C4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80046CC8;
    }
    // 0x800464C4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800464C8:
    // 0x800464C8: lhu         $s5, 0x18($sp)
    ctx->r21 = MEM_HU(ctx->r29, 0X18);
    // 0x800464CC: lhu         $s1, 0x1A($sp)
    ctx->r17 = MEM_HU(ctx->r29, 0X1A);
    // 0x800464D0: addiu       $v1, $s5, -0x1
    ctx->r3 = ADD32(ctx->r21, -0X1);
    // 0x800464D4: sltiu       $v0, $v1, 0x64
    ctx->r2 = ctx->r3 < 0X64 ? 1 : 0;
    // 0x800464D8: beq         $v0, $zero, L_80046CC4
    if (ctx->r2 == 0) {
        // 0x800464DC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80046CC4;
    }
    // 0x800464DC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800464E0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800464E4: addu        $at, $at, $v0
    gpr jr_addend_800464EC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800464E8: lw          $v0, 0x2128($at)
    ctx->r2 = ADD32(ctx->r1, 0X2128);
    // 0x800464EC: jr          $v0
    // 0x800464F0: nop

    switch (jr_addend_800464EC >> 2) {
        case 0: goto L_800464F4; break;
        case 1: goto L_8004655C; break;
        case 2: goto L_80046658; break;
        case 3: goto L_8004655C; break;
        case 4: goto L_8004655C; break;
        case 5: goto L_8004655C; break;
        case 6: goto L_80046790; break;
        case 7: goto L_800467B0; break;
        case 8: goto L_80046CC4; break;
        case 9: goto L_80046CC4; break;
        case 10: goto L_80046CC4; break;
        case 11: goto L_80046CC4; break;
        case 12: goto L_80046CC4; break;
        case 13: goto L_80046CC4; break;
        case 14: goto L_80046CC4; break;
        case 15: goto L_8004687C; break;
        case 16: goto L_80046CC4; break;
        case 17: goto L_80046CC4; break;
        case 18: goto L_80046CC4; break;
        case 19: goto L_80046CC4; break;
        case 20: goto L_80046CC4; break;
        case 21: goto L_80046CC4; break;
        case 22: goto L_80046CC4; break;
        case 23: goto L_80046CC4; break;
        case 24: goto L_80046CC4; break;
        case 25: goto L_80046CC4; break;
        case 26: goto L_80046CC4; break;
        case 27: goto L_80046CC4; break;
        case 28: goto L_80046CC4; break;
        case 29: goto L_80046CC4; break;
        case 30: goto L_80046CC4; break;
        case 31: goto L_800468B8; break;
        case 32: goto L_800468B8; break;
        case 33: goto L_800468B8; break;
        case 34: goto L_800468B8; break;
        case 35: goto L_800468B8; break;
        case 36: goto L_800468B8; break;
        case 37: goto L_800468B8; break;
        case 38: goto L_800468B8; break;
        case 39: goto L_80046CC4; break;
        case 40: goto L_80046CC4; break;
        case 41: goto L_800468B8; break;
        case 42: goto L_800468B8; break;
        case 43: goto L_80046918; break;
        case 44: goto L_80046918; break;
        case 45: goto L_80046CC4; break;
        case 46: goto L_80046940; break;
        case 47: goto L_800468B8; break;
        case 48: goto L_800468B8; break;
        case 49: goto L_800468B8; break;
        case 50: goto L_800468B8; break;
        case 51: goto L_800468B8; break;
        case 52: goto L_800468B8; break;
        case 53: goto L_800468B8; break;
        case 54: goto L_800468B8; break;
        case 55: goto L_80046968; break;
        case 56: goto L_800468B8; break;
        case 57: goto L_800468B8; break;
        case 58: goto L_80046990; break;
        case 59: goto L_800468B8; break;
        case 60: goto L_800468B8; break;
        case 61: goto L_800468B8; break;
        case 62: goto L_800468B8; break;
        case 63: goto L_800468B8; break;
        case 64: goto L_800468B8; break;
        case 65: goto L_800468B8; break;
        case 66: goto L_800468B8; break;
        case 67: goto L_800469B8; break;
        case 68: goto L_800468B8; break;
        case 69: goto L_800468B8; break;
        case 70: goto L_800468B8; break;
        case 71: goto L_800468B8; break;
        case 72: goto L_800468B8; break;
        case 73: goto L_80046CC4; break;
        case 74: goto L_80046CC4; break;
        case 75: goto L_80046CC4; break;
        case 76: goto L_80046CC4; break;
        case 77: goto L_80046CC4; break;
        case 78: goto L_80046CC4; break;
        case 79: goto L_800469F8; break;
        case 80: goto L_80046CC4; break;
        case 81: goto L_80046A74; break;
        case 82: goto L_80046AD4; break;
        case 83: goto L_80046B24; break;
        case 84: goto L_800468B8; break;
        case 85: goto L_80046B50; break;
        case 86: goto L_80046CC4; break;
        case 87: goto L_80046CC4; break;
        case 88: goto L_80046CC4; break;
        case 89: goto L_80046CC4; break;
        case 90: goto L_80046CC4; break;
        case 91: goto L_80046CC4; break;
        case 92: goto L_80046CC4; break;
        case 93: goto L_80046CC4; break;
        case 94: goto L_80046CC4; break;
        case 95: goto L_80046C94; break;
        case 96: goto L_800468E8; break;
        case 97: goto L_800468E8; break;
        case 98: goto L_800468E8; break;
        case 99: goto L_800468E8; break;
        default: switch_error(__func__, 0x800464EC, 0x800D2128);
    }
    // 0x800464F0: nop

L_800464F4:
    // 0x800464F4: beq         $s0, $zero, L_80046CC4
    if (ctx->r16 == 0) {
        // 0x800464F8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80046CC4;
    }
    // 0x800464F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800464FC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80046500: lw          $s1, 0x6B44($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X6B44);
    // 0x80046504: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x80046508: beq         $v1, $v0, L_80046CC4
    if (ctx->r3 == ctx->r2) {
        // 0x8004650C: addiu       $a3, $zero, -0x1
        ctx->r7 = ADD32(0, -0X1);
            goto L_80046CC4;
    }
    // 0x8004650C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80046510: lh          $a2, 0x10($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X10);
    // 0x80046514: lh          $a1, 0x12($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X12);
    // 0x80046518: lh          $a0, 0x14($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X14);
    // 0x8004651C: addiu       $v1, $s1, 0xC
    ctx->r3 = ADD32(ctx->r17, 0XC);
L_80046520:
    // 0x80046520: lh          $v0, -0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, -0X4);
    // 0x80046524: bnel        $a2, $v0, L_80046548
    if (ctx->r6 != ctx->r2) {
        // 0x80046528: addiu       $s1, $s1, 0x18
        ctx->r17 = ADD32(ctx->r17, 0X18);
            goto L_80046548;
    }
    goto skip_0;
    // 0x80046528: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    skip_0:
    // 0x8004652C: lh          $v0, -0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, -0X2);
    // 0x80046530: bnel        $a1, $v0, L_80046548
    if (ctx->r5 != ctx->r2) {
        // 0x80046534: addiu       $s1, $s1, 0x18
        ctx->r17 = ADD32(ctx->r17, 0X18);
            goto L_80046548;
    }
    goto skip_1;
    // 0x80046534: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    skip_1:
    // 0x80046538: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x8004653C: beq         $a0, $v0, L_80046B7C
    if (ctx->r4 == ctx->r2) {
        // 0x80046540: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80046B7C;
    }
    // 0x80046540: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80046544: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
L_80046548:
    // 0x80046548: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x8004654C: bne         $v0, $a3, L_80046520
    if (ctx->r2 != ctx->r7) {
        // 0x80046550: addiu       $v1, $v1, 0x18
        ctx->r3 = ADD32(ctx->r3, 0X18);
            goto L_80046520;
    }
    // 0x80046550: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
    // 0x80046554: j           L_80046CC8
    // 0x80046558: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
        goto L_80046CC8;
    // 0x80046558: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
L_8004655C:
    // 0x8004655C: jal         0x800470A0
    // 0x80046560: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800470A0_224A0(rdram, ctx);
        goto after_1;
    // 0x80046560: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80046564: beq         $v0, $zero, L_80046CC4
    if (ctx->r2 == 0) {
        // 0x80046568: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80046CC4;
    }
    // 0x80046568: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8004656C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80046570: lw          $s1, 0x6B44($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X6B44);
    // 0x80046574: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x80046578: beq         $v1, $v0, L_80046CC4
    if (ctx->r3 == ctx->r2) {
        // 0x8004657C: addiu       $s3, $zero, 0x2
        ctx->r19 = ADD32(0, 0X2);
            goto L_80046CC4;
    }
    // 0x8004657C: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    // 0x80046580: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80046584: addiu       $s2, $s2, 0x47CC
    ctx->r18 = ADD32(ctx->r18, 0X47CC);
    // 0x80046588: addiu       $s0, $s1, 0x7
    ctx->r16 = ADD32(ctx->r17, 0X7);
L_8004658C:
    // 0x8004658C: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x80046590: lh          $v0, 0x1($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1);
    // 0x80046594: bnel        $v1, $v0, L_80046640
    if (ctx->r3 != ctx->r2) {
        // 0x80046598: addiu       $s1, $s1, 0x18
        ctx->r17 = ADD32(ctx->r17, 0X18);
            goto L_80046640;
    }
    goto skip_2;
    // 0x80046598: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    skip_2:
    // 0x8004659C: lh          $v1, 0x12($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X12);
    // 0x800465A0: lh          $v0, 0x3($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3);
    // 0x800465A4: bnel        $v1, $v0, L_80046640
    if (ctx->r3 != ctx->r2) {
        // 0x800465A8: addiu       $s1, $s1, 0x18
        ctx->r17 = ADD32(ctx->r17, 0X18);
            goto L_80046640;
    }
    goto skip_3;
    // 0x800465A8: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    skip_3:
    // 0x800465AC: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x800465B0: lh          $v0, 0x5($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X5);
    // 0x800465B4: bnel        $v1, $v0, L_80046640
    if (ctx->r3 != ctx->r2) {
        // 0x800465B8: addiu       $s1, $s1, 0x18
        ctx->r17 = ADD32(ctx->r17, 0X18);
            goto L_80046640;
    }
    goto skip_4;
    // 0x800465B8: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    skip_4:
    // 0x800465BC: lh          $v0, 0x16($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X16);
    // 0x800465C0: lh          $v1, 0x7($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X7);
    // 0x800465C4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800465C8: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x800465CC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x800465D0: slti        $v0, $v0, 0x401
    ctx->r2 = SIGNED(ctx->r2) < 0X401 ? 1 : 0;
    // 0x800465D4: beql        $v0, $zero, L_80046640
    if (ctx->r2 == 0) {
        // 0x800465D8: addiu       $s1, $s1, 0x18
        ctx->r17 = ADD32(ctx->r17, 0X18);
            goto L_80046640;
    }
    goto skip_5;
    // 0x800465D8: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    skip_5:
    // 0x800465DC: jal         0x80047110
    // 0x800465E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80047110_22510(rdram, ctx);
        goto after_2;
    // 0x800465E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x800465E4: bne         $v0, $zero, L_80046CC8
    if (ctx->r2 != 0) {
        // 0x800465E8: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_80046CC8;
    }
    // 0x800465E8: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x800465EC: jal         0x80047198
    // 0x800465F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80047198_22598(rdram, ctx);
        goto after_3;
    // 0x800465F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x800465F4: bne         $v0, $zero, L_80046CC4
    if (ctx->r2 != 0) {
        // 0x800465F8: addiu       $a0, $s2, -0xC
        ctx->r4 = ADD32(ctx->r18, -0XC);
            goto L_80046CC4;
    }
    // 0x800465F8: addiu       $a0, $s2, -0xC
    ctx->r4 = ADD32(ctx->r18, -0XC);
    // 0x800465FC: addiu       $a1, $s1, 0x10
    ctx->r5 = ADD32(ctx->r17, 0X10);
    // 0x80046600: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80046604: jal         0x8009A3B4
    // 0x80046608: sb          $s3, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r19;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80046608: sb          $s3, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r19;
    after_4:
    // 0x8004660C: lhu         $v0, 0xF($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XF);
    // 0x80046610: sh          $v0, -0x2($s2)
    MEM_H(-0X2, ctx->r18) = ctx->r2;
    // 0x80046614: lbu         $v0, -0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X1);
    // 0x80046618: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    // 0x8004661C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80046620: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80046624: sb          $zero, 0x1($s2)
    MEM_B(0X1, ctx->r18) = 0;
    // 0x80046628: sb          $v0, 0x5($s2)
    MEM_B(0X5, ctx->r18) = ctx->r2;
    // 0x8004662C: sb          $s3, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r19;
    // 0x80046630: jal         0x80072E00
    // 0x80046634: sb          $v1, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r3;
    func_80072E00_4E200(rdram, ctx);
        goto after_5;
    // 0x80046634: sb          $v1, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r3;
    after_5:
    // 0x80046638: j           L_80046CC8
    // 0x8004663C: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
        goto L_80046CC8;
    // 0x8004663C: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
L_80046640:
    // 0x80046640: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x80046644: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80046648: bne         $v1, $v0, L_8004658C
    if (ctx->r3 != ctx->r2) {
        // 0x8004664C: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_8004658C;
    }
    // 0x8004664C: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    // 0x80046650: j           L_80046CC8
    // 0x80046654: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
        goto L_80046CC8;
    // 0x80046654: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
L_80046658:
    // 0x80046658: jal         0x800470A0
    // 0x8004665C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800470A0_224A0(rdram, ctx);
        goto after_6;
    // 0x8004665C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80046660: beq         $v0, $zero, L_80046CC4
    if (ctx->r2 == 0) {
        // 0x80046664: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80046CC4;
    }
    // 0x80046664: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80046668: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8004666C: lw          $s1, 0x6B44($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X6B44);
    // 0x80046670: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x80046674: beq         $v1, $v0, L_80046CC4
    if (ctx->r3 == ctx->r2) {
        // 0x80046678: addiu       $a0, $s1, 0xE
        ctx->r4 = ADD32(ctx->r17, 0XE);
            goto L_80046CC4;
    }
    // 0x80046678: addiu       $a0, $s1, 0xE
    ctx->r4 = ADD32(ctx->r17, 0XE);
L_8004667C:
    // 0x8004667C: lh          $a2, 0x10($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X10);
    // 0x80046680: lh          $v0, -0x6($a0)
    ctx->r2 = MEM_H(ctx->r4, -0X6);
    // 0x80046684: bnel        $a2, $v0, L_80046778
    if (ctx->r6 != ctx->r2) {
        // 0x80046688: addiu       $s1, $s1, 0x18
        ctx->r17 = ADD32(ctx->r17, 0X18);
            goto L_80046778;
    }
    goto skip_6;
    // 0x80046688: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    skip_6:
    // 0x8004668C: lh          $v1, 0x12($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X12);
    // 0x80046690: lh          $v0, -0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, -0X4);
    // 0x80046694: bnel        $v1, $v0, L_80046778
    if (ctx->r3 != ctx->r2) {
        // 0x80046698: addiu       $s1, $s1, 0x18
        ctx->r17 = ADD32(ctx->r17, 0X18);
            goto L_80046778;
    }
    goto skip_7;
    // 0x80046698: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    skip_7:
    // 0x8004669C: lh          $a1, 0x14($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X14);
    // 0x800466A0: lh          $v0, -0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, -0X2);
    // 0x800466A4: bnel        $a1, $v0, L_80046778
    if (ctx->r5 != ctx->r2) {
        // 0x800466A8: addiu       $s1, $s1, 0x18
        ctx->r17 = ADD32(ctx->r17, 0X18);
            goto L_80046778;
    }
    goto skip_8;
    // 0x800466A8: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    skip_8:
    // 0x800466AC: lh          $v1, 0x16($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X16);
    // 0x800466B0: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x800466B4: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x800466B8: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x800466BC: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x800466C0: bnel        $v0, $zero, L_80046778
    if (ctx->r2 != 0) {
        // 0x800466C4: addiu       $s1, $s1, 0x18
        ctx->r17 = ADD32(ctx->r17, 0X18);
            goto L_80046778;
    }
    goto skip_9;
    // 0x800466C4: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    skip_9:
    // 0x800466C8: addiu       $v0, $v1, 0x200
    ctx->r2 = ADD32(ctx->r3, 0X200);
    // 0x800466CC: bltzl       $v0, L_800466D4
    if (SIGNED(ctx->r2) < 0) {
        // 0x800466D0: addiu       $v0, $v1, 0x5FF
        ctx->r2 = ADD32(ctx->r3, 0X5FF);
            goto L_800466D4;
    }
    goto skip_10;
    // 0x800466D0: addiu       $v0, $v1, 0x5FF
    ctx->r2 = ADD32(ctx->r3, 0X5FF);
    skip_10:
L_800466D4:
    // 0x800466D4: sra         $v0, $v0, 10
    ctx->r2 = S32(SIGNED(ctx->r2) >> 10);
    // 0x800466D8: andi        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 & 0X3;
    // 0x800466DC: bne         $v1, $zero, L_800466F8
    if (ctx->r3 != 0) {
        // 0x800466E0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800466F8;
    }
    // 0x800466E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800466E4: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x800466E8: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800466EC: bnel        $v0, $zero, L_80046778
    if (ctx->r2 != 0) {
        // 0x800466F0: addiu       $s1, $s1, 0x18
        ctx->r17 = ADD32(ctx->r17, 0X18);
            goto L_80046778;
    }
    goto skip_11;
    // 0x800466F0: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    skip_11:
    // 0x800466F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800466F8:
    // 0x800466F8: bne         $v1, $v0, L_80046714
    if (ctx->r3 != ctx->r2) {
        // 0x800466FC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80046714;
    }
    // 0x800466FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80046700: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x80046704: slt         $v0, $v0, $a2
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80046708: bnel        $v0, $zero, L_80046778
    if (ctx->r2 != 0) {
        // 0x8004670C: addiu       $s1, $s1, 0x18
        ctx->r17 = ADD32(ctx->r17, 0X18);
            goto L_80046778;
    }
    goto skip_12;
    // 0x8004670C: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    skip_12:
    // 0x80046710: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80046714:
    // 0x80046714: bne         $v1, $v0, L_80046730
    if (ctx->r3 != ctx->r2) {
        // 0x80046718: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80046730;
    }
    // 0x80046718: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8004671C: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x80046720: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80046724: bnel        $v0, $zero, L_80046778
    if (ctx->r2 != 0) {
        // 0x80046728: addiu       $s1, $s1, 0x18
        ctx->r17 = ADD32(ctx->r17, 0X18);
            goto L_80046778;
    }
    goto skip_13;
    // 0x80046728: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    skip_13:
    // 0x8004672C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80046730:
    // 0x80046730: bne         $v1, $v0, L_80046748
    if (ctx->r3 != ctx->r2) {
        // 0x80046734: nop
    
            goto L_80046748;
    }
    // 0x80046734: nop

    // 0x80046738: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x8004673C: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80046740: bnel        $v0, $zero, L_80046778
    if (ctx->r2 != 0) {
        // 0x80046744: addiu       $s1, $s1, 0x18
        ctx->r17 = ADD32(ctx->r17, 0X18);
            goto L_80046778;
    }
    goto skip_14;
    // 0x80046744: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    skip_14:
L_80046748:
    // 0x80046748: jal         0x80047110
    // 0x8004674C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80047110_22510(rdram, ctx);
        goto after_7;
    // 0x8004674C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x80046750: bne         $v0, $zero, L_80046CC8
    if (ctx->r2 != 0) {
        // 0x80046754: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_80046CC8;
    }
    // 0x80046754: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80046758: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x8004675C: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x80046760: bne         $v0, $zero, L_80046BFC
    if (ctx->r2 != 0) {
        // 0x80046764: addiu       $a1, $sp, 0x10
        ctx->r5 = ADD32(ctx->r29, 0X10);
            goto L_80046BFC;
    }
    // 0x80046764: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80046768: jal         0x8006036C
    // 0x8004676C: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006036C_3B76C(rdram, ctx);
        goto after_8;
    // 0x8004676C: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_8:
    // 0x80046770: j           L_80046CC8
    // 0x80046774: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
        goto L_80046CC8;
    // 0x80046774: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
L_80046778:
    // 0x80046778: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x8004677C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80046780: bne         $v1, $v0, L_8004667C
    if (ctx->r3 != ctx->r2) {
        // 0x80046784: addiu       $a0, $a0, 0x18
        ctx->r4 = ADD32(ctx->r4, 0X18);
            goto L_8004667C;
    }
    // 0x80046784: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    // 0x80046788: j           L_80046CC8
    // 0x8004678C: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
        goto L_80046CC8;
    // 0x8004678C: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
L_80046790:
    // 0x80046790: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80046794: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80046798: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8004679C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x800467A0: jal         0x8006FB90
    // 0x800467A4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_9;
    // 0x800467A4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
    // 0x800467A8: j           L_80046CC8
    // 0x800467AC: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
        goto L_80046CC8;
    // 0x800467AC: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
L_800467B0:
    // 0x800467B0: jal         0x800470A0
    // 0x800467B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800470A0_224A0(rdram, ctx);
        goto after_10;
    // 0x800467B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
    // 0x800467B8: beq         $v0, $zero, L_80046CC4
    if (ctx->r2 == 0) {
        // 0x800467BC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80046CC4;
    }
    // 0x800467BC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800467C0: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x800467C4: lw          $s1, 0x6B44($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X6B44);
    // 0x800467C8: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x800467CC: beq         $v1, $v0, L_80046CC4
    if (ctx->r3 == ctx->r2) {
        // 0x800467D0: addiu       $s3, $zero, 0x2
        ctx->r19 = ADD32(0, 0X2);
            goto L_80046CC4;
    }
    // 0x800467D0: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    // 0x800467D4: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x800467D8: addiu       $s2, $s2, 0x47CC
    ctx->r18 = ADD32(ctx->r18, 0X47CC);
    // 0x800467DC: addiu       $s4, $zero, 0x15
    ctx->r20 = ADD32(0, 0X15);
    // 0x800467E0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x800467E4: addiu       $s0, $s1, 0x7
    ctx->r16 = ADD32(ctx->r17, 0X7);
L_800467E8:
    // 0x800467E8: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x800467EC: lh          $v0, 0x1($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1);
    // 0x800467F0: bnel        $v1, $v0, L_80046868
    if (ctx->r3 != ctx->r2) {
        // 0x800467F4: addiu       $s1, $s1, 0x18
        ctx->r17 = ADD32(ctx->r17, 0X18);
            goto L_80046868;
    }
    goto skip_15;
    // 0x800467F4: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    skip_15:
    // 0x800467F8: lh          $v1, 0x12($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X12);
    // 0x800467FC: lh          $v0, 0x3($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3);
    // 0x80046800: bnel        $v1, $v0, L_80046868
    if (ctx->r3 != ctx->r2) {
        // 0x80046804: addiu       $s1, $s1, 0x18
        ctx->r17 = ADD32(ctx->r17, 0X18);
            goto L_80046868;
    }
    goto skip_16;
    // 0x80046804: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    skip_16:
    // 0x80046808: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x8004680C: lh          $v0, 0x5($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X5);
    // 0x80046810: bnel        $v1, $v0, L_80046868
    if (ctx->r3 != ctx->r2) {
        // 0x80046814: addiu       $s1, $s1, 0x18
        ctx->r17 = ADD32(ctx->r17, 0X18);
            goto L_80046868;
    }
    goto skip_17;
    // 0x80046814: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    skip_17:
    // 0x80046818: jal         0x80047110
    // 0x8004681C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80047110_22510(rdram, ctx);
        goto after_11;
    // 0x8004681C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_11:
    // 0x80046820: bne         $v0, $zero, L_80046CC4
    if (ctx->r2 != 0) {
        // 0x80046824: addiu       $a0, $s2, -0xC
        ctx->r4 = ADD32(ctx->r18, -0XC);
            goto L_80046CC4;
    }
    // 0x80046824: addiu       $a0, $s2, -0xC
    ctx->r4 = ADD32(ctx->r18, -0XC);
    // 0x80046828: addiu       $a1, $s1, 0x10
    ctx->r5 = ADD32(ctx->r17, 0X10);
    // 0x8004682C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80046830: jal         0x8009A3B4
    // 0x80046834: sb          $s3, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r19;
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x80046834: sb          $s3, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r19;
    after_12:
    // 0x80046838: lhu         $v0, 0xF($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XF);
    // 0x8004683C: sh          $v0, -0x2($s2)
    MEM_H(-0X2, ctx->r18) = ctx->r2;
    // 0x80046840: lbu         $v0, -0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X1);
    // 0x80046844: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    // 0x80046848: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8004684C: sb          $zero, 0x1($s2)
    MEM_B(0X1, ctx->r18) = 0;
    // 0x80046850: sb          $s4, 0x5($s2)
    MEM_B(0X5, ctx->r18) = ctx->r20;
    // 0x80046854: sb          $s3, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r19;
    // 0x80046858: jal         0x80072E00
    // 0x8004685C: sb          $v0, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r2;
    func_80072E00_4E200(rdram, ctx);
        goto after_13;
    // 0x8004685C: sb          $v0, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r2;
    after_13:
    // 0x80046860: j           L_80046CC8
    // 0x80046864: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
        goto L_80046CC8;
    // 0x80046864: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
L_80046868:
    // 0x80046868: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x8004686C: bne         $v0, $a0, L_800467E8
    if (ctx->r2 != ctx->r4) {
        // 0x80046870: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_800467E8;
    }
    // 0x80046870: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    // 0x80046874: j           L_80046CC8
    // 0x80046878: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
        goto L_80046CC8;
    // 0x80046878: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
L_8004687C:
    // 0x8004687C: lb          $v0, 0x74($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X74);
    // 0x80046880: bne         $v0, $zero, L_80046CC8
    if (ctx->r2 != 0) {
        // 0x80046884: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_80046CC8;
    }
    // 0x80046884: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80046888: jal         0x8006033C
    // 0x8004688C: addiu       $a0, $zero, 0x60F
    ctx->r4 = ADD32(0, 0X60F);
    func_8006033C_3B73C(rdram, ctx);
        goto after_14;
    // 0x8004688C: addiu       $a0, $zero, 0x60F
    ctx->r4 = ADD32(0, 0X60F);
    after_14:
    // 0x80046890: beq         $v0, $zero, L_80046CC8
    if (ctx->r2 == 0) {
        // 0x80046894: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_80046CC8;
    }
    // 0x80046894: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80046898: lhu         $v0, 0x14($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X14);
    // 0x8004689C: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x800468A0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800468A4: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x800468A8: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x800468AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800468B0: j           L_80046CC4
    // 0x800468B4: sw          $v1, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r3;
        goto L_80046CC4;
    // 0x800468B4: sw          $v1, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r3;
L_800468B8:
    // 0x800468B8: jal         0x800470A0
    // 0x800468BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800470A0_224A0(rdram, ctx);
        goto after_15;
    // 0x800468BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_15:
    // 0x800468C0: beq         $v0, $zero, L_800468E8
    if (ctx->r2 == 0) {
        // 0x800468C4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_800468E8;
    }
    // 0x800468C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800468C8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800468CC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800468D0: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x800468D4: lbu         $v0, -0x35BC($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X35BC);
    // 0x800468D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x800468DC: andi        $a3, $s1, 0xF
    ctx->r7 = ctx->r17 & 0XF;
    // 0x800468E0: jal         0x800610AC
    // 0x800468E4: addu        $a3, $v0, $a3
    ctx->r7 = ADD32(ctx->r2, ctx->r7);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_16;
    // 0x800468E4: addu        $a3, $v0, $a3
    ctx->r7 = ADD32(ctx->r2, ctx->r7);
    after_16:
L_800468E8:
    // 0x800468E8: jal         0x800470A0
    // 0x800468EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800470A0_224A0(rdram, ctx);
        goto after_17;
    // 0x800468EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_17:
    // 0x800468F0: beq         $v0, $zero, L_80046CC4
    if (ctx->r2 == 0) {
        // 0x800468F4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80046CC4;
    }
    // 0x800468F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800468F8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x800468FC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80046900: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x80046904: lbu         $v0, -0x35BC($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X35BC);
    // 0x80046908: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8004690C: andi        $a3, $s1, 0xF
    ctx->r7 = ctx->r17 & 0XF;
    // 0x80046910: j           L_80046CBC
    // 0x80046914: addu        $a3, $v0, $a3
    ctx->r7 = ADD32(ctx->r2, ctx->r7);
        goto L_80046CBC;
    // 0x80046914: addu        $a3, $v0, $a3
    ctx->r7 = ADD32(ctx->r2, ctx->r7);
L_80046918:
    // 0x80046918: jal         0x800470A0
    // 0x8004691C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800470A0_224A0(rdram, ctx);
        goto after_18;
    // 0x8004691C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_18:
    // 0x80046920: beq         $v0, $zero, L_80046CC4
    if (ctx->r2 == 0) {
        // 0x80046924: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80046CC4;
    }
    // 0x80046924: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80046928: andi        $v0, $s1, 0xF
    ctx->r2 = ctx->r17 & 0XF;
    // 0x8004692C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80046930: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x80046934: lbu         $a3, -0x35A8($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X35A8);
    // 0x80046938: j           L_80046CB8
    // 0x8004693C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_80046CB8;
    // 0x8004693C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_80046940:
    // 0x80046940: jal         0x800470A0
    // 0x80046944: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800470A0_224A0(rdram, ctx);
        goto after_19;
    // 0x80046944: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_19:
    // 0x80046948: beq         $v0, $zero, L_80046CC4
    if (ctx->r2 == 0) {
        // 0x8004694C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80046CC4;
    }
    // 0x8004694C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80046950: andi        $v0, $s1, 0xF
    ctx->r2 = ctx->r17 & 0XF;
    // 0x80046954: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80046958: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x8004695C: lbu         $a3, -0x35D0($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X35D0);
    // 0x80046960: j           L_80046CB8
    // 0x80046964: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_80046CB8;
    // 0x80046964: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_80046968:
    // 0x80046968: jal         0x800470A0
    // 0x8004696C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800470A0_224A0(rdram, ctx);
        goto after_20;
    // 0x8004696C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_20:
    // 0x80046970: beq         $v0, $zero, L_80046CC4
    if (ctx->r2 == 0) {
        // 0x80046974: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80046CC4;
    }
    // 0x80046974: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80046978: andi        $v0, $s1, 0xF
    ctx->r2 = ctx->r17 & 0XF;
    // 0x8004697C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80046980: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x80046984: lbu         $a3, -0x35B4($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X35B4);
    // 0x80046988: j           L_80046CB8
    // 0x8004698C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_80046CB8;
    // 0x8004698C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_80046990:
    // 0x80046990: jal         0x800470A0
    // 0x80046994: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800470A0_224A0(rdram, ctx);
        goto after_21;
    // 0x80046994: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_21:
    // 0x80046998: beq         $v0, $zero, L_80046CC4
    if (ctx->r2 == 0) {
        // 0x8004699C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80046CC4;
    }
    // 0x8004699C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800469A0: andi        $v0, $s1, 0xF
    ctx->r2 = ctx->r17 & 0XF;
    // 0x800469A4: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x800469A8: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x800469AC: lbu         $a3, -0x35AC($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X35AC);
    // 0x800469B0: j           L_80046CB8
    // 0x800469B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_80046CB8;
    // 0x800469B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_800469B8:
    // 0x800469B8: andi        $s1, $s1, 0xF
    ctx->r17 = ctx->r17 & 0XF;
    // 0x800469BC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800469C0: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x800469C4: lbu         $v0, -0x35C4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X35C4);
    // 0x800469C8: sltiu       $v0, $v0, 0x9
    ctx->r2 = ctx->r2 < 0X9 ? 1 : 0;
    // 0x800469CC: bne         $v0, $zero, L_80046CC8
    if (ctx->r2 != 0) {
        // 0x800469D0: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_80046CC8;
    }
    // 0x800469D0: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x800469D4: jal         0x800470A0
    // 0x800469D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800470A0_224A0(rdram, ctx);
        goto after_22;
    // 0x800469D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_22:
    // 0x800469DC: beq         $v0, $zero, L_80046CC4
    if (ctx->r2 == 0) {
        // 0x800469E0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80046CC4;
    }
    // 0x800469E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800469E4: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x800469E8: addu        $a3, $a3, $s1
    ctx->r7 = ADD32(ctx->r7, ctx->r17);
    // 0x800469EC: lbu         $a3, -0x35C4($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X35C4);
    // 0x800469F0: j           L_80046CB8
    // 0x800469F4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_80046CB8;
    // 0x800469F4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_800469F8:
    // 0x800469F8: jal         0x800470A0
    // 0x800469FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800470A0_224A0(rdram, ctx);
        goto after_23;
    // 0x800469FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_23:
    // 0x80046A00: beq         $v0, $zero, L_80046CC4
    if (ctx->r2 == 0) {
        // 0x80046A04: andi        $v0, $s1, 0xFF
        ctx->r2 = ctx->r17 & 0XFF;
            goto L_80046CC4;
    }
    // 0x80046A04: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x80046A08: bne         $v0, $zero, L_80046A24
    if (ctx->r2 != 0) {
        // 0x80046A0C: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_80046A24;
    }
    // 0x80046A0C: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80046A10: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80046A14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80046A18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80046A1C: j           L_80046CBC
    // 0x80046A20: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
        goto L_80046CBC;
    // 0x80046A20: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
L_80046A24:
    // 0x80046A24: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80046A28: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80046A2C: bne         $v1, $v0, L_80046A54
    if (ctx->r3 != ctx->r2) {
        // 0x80046A30: nop
    
            goto L_80046A54;
    }
    // 0x80046A30: nop

    // 0x80046A34: jal         0x8006033C
    // 0x80046A38: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_8006033C_3B73C(rdram, ctx);
        goto after_24;
    // 0x80046A38: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_24:
    // 0x80046A3C: bne         $v0, $zero, L_80046CC8
    if (ctx->r2 != 0) {
        // 0x80046A40: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_80046CC8;
    }
    // 0x80046A40: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80046A44: jal         0x8006036C
    // 0x80046A48: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_8006036C_3B76C(rdram, ctx);
        goto after_25;
    // 0x80046A48: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_25:
    // 0x80046A4C: j           L_80046CC8
    // 0x80046A50: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
        goto L_80046CC8;
    // 0x80046A50: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
L_80046A54:
    // 0x80046A54: jal         0x8006033C
    // 0x80046A58: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    func_8006033C_3B73C(rdram, ctx);
        goto after_26;
    // 0x80046A58: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    after_26:
    // 0x80046A5C: bne         $v0, $zero, L_80046CC8
    if (ctx->r2 != 0) {
        // 0x80046A60: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_80046CC8;
    }
    // 0x80046A60: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80046A64: jal         0x8006036C
    // 0x80046A68: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    func_8006036C_3B76C(rdram, ctx);
        goto after_27;
    // 0x80046A68: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    after_27:
    // 0x80046A6C: j           L_80046CC8
    // 0x80046A70: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
        goto L_80046CC8;
    // 0x80046A70: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
L_80046A74:
    // 0x80046A74: jal         0x800470A0
    // 0x80046A78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800470A0_224A0(rdram, ctx);
        goto after_28;
    // 0x80046A78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_28:
    // 0x80046A7C: beq         $v0, $zero, L_80046CC4
    if (ctx->r2 == 0) {
        // 0x80046A80: andi        $v0, $s1, 0xFF
        ctx->r2 = ctx->r17 & 0XFF;
            goto L_80046CC4;
    }
    // 0x80046A80: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x80046A84: bne         $v0, $zero, L_80046AB0
    if (ctx->r2 != 0) {
        // 0x80046A88: nop
    
            goto L_80046AB0;
    }
    // 0x80046A88: nop

    // 0x80046A8C: jal         0x8006033C
    // 0x80046A90: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    func_8006033C_3B73C(rdram, ctx);
        goto after_29;
    // 0x80046A90: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    after_29:
    // 0x80046A94: bne         $v0, $zero, L_80046CC8
    if (ctx->r2 != 0) {
        // 0x80046A98: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_80046CC8;
    }
    // 0x80046A98: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80046A9C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80046AA0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80046AA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80046AA8: j           L_80046CBC
    // 0x80046AAC: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
        goto L_80046CBC;
    // 0x80046AAC: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
L_80046AB0:
    // 0x80046AB0: jal         0x8006033C
    // 0x80046AB4: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    func_8006033C_3B73C(rdram, ctx);
        goto after_30;
    // 0x80046AB4: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    after_30:
    // 0x80046AB8: bne         $v0, $zero, L_80046CC8
    if (ctx->r2 != 0) {
        // 0x80046ABC: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_80046CC8;
    }
    // 0x80046ABC: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80046AC0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80046AC4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80046AC8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80046ACC: j           L_80046CBC
    // 0x80046AD0: addiu       $a3, $zero, 0x11
    ctx->r7 = ADD32(0, 0X11);
        goto L_80046CBC;
    // 0x80046AD0: addiu       $a3, $zero, 0x11
    ctx->r7 = ADD32(0, 0X11);
L_80046AD4:
    // 0x80046AD4: jal         0x800470A0
    // 0x80046AD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800470A0_224A0(rdram, ctx);
        goto after_31;
    // 0x80046AD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_31:
    // 0x80046ADC: beq         $v0, $zero, L_80046CC4
    if (ctx->r2 == 0) {
        // 0x80046AE0: andi        $v0, $s1, 0xFF
        ctx->r2 = ctx->r17 & 0XFF;
            goto L_80046CC4;
    }
    // 0x80046AE0: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x80046AE4: bne         $v0, $zero, L_80046CC8
    if (ctx->r2 != 0) {
        // 0x80046AE8: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_80046CC8;
    }
    // 0x80046AE8: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80046AEC: jal         0x8006033C
    // 0x80046AF0: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    func_8006033C_3B73C(rdram, ctx);
        goto after_32;
    // 0x80046AF0: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    after_32:
    // 0x80046AF4: bne         $v0, $zero, L_80046B14
    if (ctx->r2 != 0) {
        // 0x80046AF8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80046B14;
    }
    // 0x80046AF8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80046AFC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80046B00: addiu       $v1, $v1, -0x3A9E
    ctx->r3 = ADD32(ctx->r3, -0X3A9E);
    // 0x80046B04: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80046B08: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80046B0C: j           L_80046CC4
    // 0x80046B10: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
        goto L_80046CC4;
    // 0x80046B10: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_80046B14:
    // 0x80046B14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80046B18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80046B1C: j           L_80046CBC
    // 0x80046B20: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_80046CBC;
    // 0x80046B20: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_80046B24:
    // 0x80046B24: jal         0x800470A0
    // 0x80046B28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800470A0_224A0(rdram, ctx);
        goto after_33;
    // 0x80046B28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_33:
    // 0x80046B2C: beq         $v0, $zero, L_80046CC4
    if (ctx->r2 == 0) {
        // 0x80046B30: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80046CC4;
    }
    // 0x80046B30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80046B34: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80046B38: addiu       $a0, $a0, -0x3AA4
    ctx->r4 = ADD32(ctx->r4, -0X3AA4);
    // 0x80046B3C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80046B40: sllv        $v0, $v0, $s1
    ctx->r2 = S32(ctx->r2 << (ctx->r17 & 31));
    // 0x80046B44: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80046B48: j           L_80046CC4
    // 0x80046B4C: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
        goto L_80046CC4;
    // 0x80046B4C: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
L_80046B50:
    // 0x80046B50: jal         0x800470A0
    // 0x80046B54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800470A0_224A0(rdram, ctx);
        goto after_34;
    // 0x80046B54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_34:
    // 0x80046B58: beq         $v0, $zero, L_80046CC4
    if (ctx->r2 == 0) {
        // 0x80046B5C: andi        $v0, $s1, 0xFF
        ctx->r2 = ctx->r17 & 0XFF;
            goto L_80046CC4;
    }
    // 0x80046B5C: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x80046B60: bne         $v0, $zero, L_80046CC8
    if (ctx->r2 != 0) {
        // 0x80046B64: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_80046CC8;
    }
    // 0x80046B64: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80046B68: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80046B6C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80046B70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80046B74: j           L_80046CBC
    // 0x80046B78: addiu       $a3, $zero, 0x1C
    ctx->r7 = ADD32(0, 0X1C);
        goto L_80046CBC;
    // 0x80046B78: addiu       $a3, $zero, 0x1C
    ctx->r7 = ADD32(0, 0X1C);
L_80046B7C:
    // 0x80046B7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80046B80: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80046B84: lhu         $v0, 0x10($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X10);
    // 0x80046B88: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80046B8C: lhu         $a0, 0x8($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X8);
    // 0x80046B90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80046B94: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80046B98: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80046B9C: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80046BA0: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80046BA4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80046BA8: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x80046BAC: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80046BB0: lhu         $v1, 0x18($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X18);
    // 0x80046BB4: lhu         $a0, 0xC($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XC);
    // 0x80046BB8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80046BBC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80046BC0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80046BC4: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x80046BC8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80046BCC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80046BD0: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x80046BD4: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80046BD8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80046BDC: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80046BE0: lbu         $v0, 0x7($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X7);
    // 0x80046BE4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80046BE8: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80046BEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80046BF0: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80046BF4: j           L_80046CC8
    // 0x80046BF8: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
        goto L_80046CC8;
    // 0x80046BF8: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
L_80046BFC:
    // 0x80046BFC: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80046C00: addiu       $s0, $s0, 0x47B8
    ctx->r16 = ADD32(ctx->r16, 0X47B8);
    // 0x80046C04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80046C08: jal         0x8009A3B4
    // 0x80046C0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_35;
    // 0x80046C0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_35:
    // 0x80046C10: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x80046C14: addiu       $a1, $s1, 0x10
    ctx->r5 = ADD32(ctx->r17, 0X10);
    // 0x80046C18: jal         0x8009A3B4
    // 0x80046C1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_36;
    // 0x80046C1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_36:
    // 0x80046C20: lhu         $v0, 0xE($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XE);
    // 0x80046C24: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80046C28: sh          $v0, 0x47C8($at)
    MEM_H(0X47C8, ctx->r1) = ctx->r2;
    // 0x80046C2C: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x80046C30: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80046C34: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x80046C38: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80046C3C: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x80046C40: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80046C44: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80046C48: lbu         $v1, 0x7($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X7);
    // 0x80046C4C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80046C50: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80046C54: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80046C58: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80046C5C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80046C60: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80046C64: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80046C68: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80046C6C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80046C70: sb          $v1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r3;
    // 0x80046C74: jal         0x8004CB2C
    // 0x80046C78: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_37;
    // 0x80046C78: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_37:
    // 0x80046C7C: jal         0x8006036C
    // 0x80046C80: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006036C_3B76C(rdram, ctx);
        goto after_38;
    // 0x80046C80: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_38:
    // 0x80046C84: jal         0x80072E00
    // 0x80046C88: nop

    func_80072E00_4E200(rdram, ctx);
        goto after_39;
    // 0x80046C88: nop

    after_39:
    // 0x80046C8C: j           L_80046CC8
    // 0x80046C90: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
        goto L_80046CC8;
    // 0x80046C90: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
L_80046C94:
    // 0x80046C94: jal         0x800470A0
    // 0x80046C98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800470A0_224A0(rdram, ctx);
        goto after_40;
    // 0x80046C98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_40:
    // 0x80046C9C: beq         $v0, $zero, L_80046CC4
    if (ctx->r2 == 0) {
        // 0x80046CA0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80046CC4;
    }
    // 0x80046CA0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80046CA4: andi        $v0, $s1, 0xF
    ctx->r2 = ctx->r17 & 0XF;
    // 0x80046CA8: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80046CAC: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x80046CB0: lbu         $a3, -0x35A4($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X35A4);
    // 0x80046CB4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
L_80046CB8:
    // 0x80046CB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80046CBC:
    // 0x80046CBC: jal         0x800610AC
    // 0x80046CC0: nop

    func_800610AC_3C4AC(rdram, ctx);
        goto after_41;
    // 0x80046CC0: nop

    after_41:
L_80046CC4:
    // 0x80046CC4: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
L_80046CC8:
    // 0x80046CC8: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80046CCC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80046CD0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80046CD4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80046CD8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80046CDC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80046CE0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80046CE4: jr          $ra
    // 0x80046CE8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80046CE8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80060798_3BB98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80060798: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8006079C: sw          $zero, -0x5810($at)
    MEM_W(-0X5810, ctx->r1) = 0;
    // 0x800607A0: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x800607A4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800607A8: addiu       $v0, $v0, -0x715C
    ctx->r2 = ADD32(ctx->r2, -0X715C);
L_800607AC:
    // 0x800607AC: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x800607B0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x800607B4: bgez        $v1, L_800607AC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x800607B8: addiu       $v0, $v0, -0x4
        ctx->r2 = ADD32(ctx->r2, -0X4);
            goto L_800607AC;
    }
    // 0x800607B8: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x800607BC: jr          $ra
    // 0x800607C0: nop

    TRACE_RETURN()
    return;
    // 0x800607C0: nop

;}
RECOMP_FUNC void func_80093140_6E540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80093140: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80093144: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80093148: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8009314C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80093150: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80093154: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80093158: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8009315C: jal         0x8009412C
    // 0x80093160: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_8009412C_6F52C(rdram, ctx);
        goto after_0;
    // 0x80093160: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80093164: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x80093168: lui         $s3, 0x801C
    ctx->r19 = S32(0X801C << 16);
    // 0x8009316C: addiu       $s3, $s3, -0x38C8
    ctx->r19 = ADD32(ctx->r19, -0X38C8);
    // 0x80093170: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80093174: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_80093178:
    // 0x80093178: lhu         $s0, 0x0($s1)
    ctx->r16 = MEM_HU(ctx->r17, 0X0);
    // 0x8009317C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80093180: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80093184: jal         0x80099F90
    // 0x80093188: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    bcopy_recomp(rdram, ctx);
        goto after_1;
    // 0x80093188: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
    // 0x8009318C: addiu       $s3, $s3, 0x6
    ctx->r19 = ADD32(ctx->r19, 0X6);
    // 0x80093190: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80093194: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80093198: lhu         $v0, -0x38C8($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X38C8);
    // 0x8009319C: addiu       $s2, $s2, 0x6
    ctx->r18 = ADD32(ctx->r18, 0X6);
    // 0x800931A0: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x800931A4: nor         $s0, $zero, $s0
    ctx->r16 = ~(0 | ctx->r16);
    // 0x800931A8: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x800931AC: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
    // 0x800931B0: sltiu       $v0, $s4, 0x4
    ctx->r2 = ctx->r20 < 0X4 ? 1 : 0;
    // 0x800931B4: bne         $v0, $zero, L_80093178
    if (ctx->r2 != 0) {
        // 0x800931B8: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_80093178;
    }
    // 0x800931B8: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x800931BC: jal         0x80094154
    // 0x800931C0: nop

    func_80094154_6F554(rdram, ctx);
        goto after_2;
    // 0x800931C0: nop

    after_2:
    // 0x800931C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800931C8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x800931CC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x800931D0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x800931D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800931D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800931DC: jr          $ra
    // 0x800931E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x800931E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800931E4: nop

    // 0x800931E8: nop

    // 0x800931EC: nop

;}
RECOMP_FUNC void func_8004C1AC_275AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004C1AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004C1B0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8004C1B4: addiu       $v0, $v0, -0x2100
    ctx->r2 = ADD32(ctx->r2, -0X2100);
    // 0x8004C1B8: addiu       $v1, $v0, 0x2300
    ctx->r3 = ADD32(ctx->r2, 0X2300);
    // 0x8004C1BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004C1C0: sw          $v0, 0x7848($at)
    MEM_W(0X7848, ctx->r1) = ctx->r2;
    // 0x8004C1C4: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8004C1C8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8004C1CC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8004C1D0: beq         $v0, $zero, L_8004C25C
    if (ctx->r2 == 0) {
        // 0x8004C1D4: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8004C25C;
    }
    // 0x8004C1D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8004C1D8: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8004C1DC: addiu       $s1, $s1, 0x2E90
    ctx->r17 = ADD32(ctx->r17, 0X2E90);
    // 0x8004C1E0: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
L_8004C1E4:
    // 0x8004C1E4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8004C1E8: lw          $a0, 0x7848($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7848);
    // 0x8004C1EC: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8004C1F0: lbu         $v1, 0x6($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X6);
    // 0x8004C1F4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8004C1F8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8004C1FC: beq         $v0, $zero, L_8004C23C
    if (ctx->r2 == 0) {
        // 0x8004C200: nop
    
            goto L_8004C23C;
    }
    // 0x8004C200: nop

    // 0x8004C204: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x8004C208: sltiu       $v0, $v1, 0x80
    ctx->r2 = ctx->r3 < 0X80 ? 1 : 0;
    // 0x8004C20C: beq         $v0, $zero, L_8004C22C
    if (ctx->r2 == 0) {
        // 0x8004C210: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8004C22C;
    }
    // 0x8004C210: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8004C214: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x8004C218: lw          $v0, -0x26A8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X26A8);
    // 0x8004C21C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8004C220: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8004C224: j           L_8004C234
    // 0x8004C228: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
        goto L_8004C234;
    // 0x8004C228: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_8004C22C:
    // 0x8004C22C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8004C230: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
L_8004C234:
    // 0x8004C234: jalr        $v0
    // 0x8004C238: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8004C238: nop

    after_0:
L_8004C23C:
    // 0x8004C23C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004C240: lw          $v0, 0x7848($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7848);
    // 0x8004C244: addiu       $v0, $v0, 0x118
    ctx->r2 = ADD32(ctx->r2, 0X118);
    // 0x8004C248: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004C24C: sw          $v0, 0x7848($at)
    MEM_W(0X7848, ctx->r1) = ctx->r2;
    // 0x8004C250: sltu        $v0, $v0, $s0
    ctx->r2 = ctx->r2 < ctx->r16 ? 1 : 0;
    // 0x8004C254: bne         $v0, $zero, L_8004C1E4
    if (ctx->r2 != 0) {
        // 0x8004C258: nop
    
            goto L_8004C1E4;
    }
    // 0x8004C258: nop

L_8004C25C:
    // 0x8004C25C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8004C260: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8004C264: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004C268: jr          $ra
    // 0x8004C26C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8004C26C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80036888_11C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036888: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003688C: addiu       $a0, $zero, 0x300
    ctx->r4 = ADD32(0, 0X300);
    // 0x80036890: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80036894: addiu       $a2, $zero, 0xC0
    ctx->r6 = ADD32(0, 0XC0);
    // 0x80036898: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x8003689C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x800368A0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x800368A4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x800368A8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x800368AC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x800368B0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800368B4: jal         0x8002C764
    // 0x800368B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8002C764_7B64(rdram, ctx);
        goto after_0;
    // 0x800368B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x800368BC: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x800368C0: lui         $s5, 0xFF00
    ctx->r21 = S32(0XFF00 << 16);
    // 0x800368C4: lui         $s4, 0x100
    ctx->r20 = S32(0X100 << 16);
    // 0x800368C8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x800368CC: lui         $s1, 0x8019
    ctx->r17 = S32(0X8019 << 16);
    // 0x800368D0: addiu       $s1, $s1, 0x3C38
    ctx->r17 = ADD32(ctx->r17, 0X3C38);
L_800368D4:
    // 0x800368D4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800368D8: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x800368DC: lw          $v0, -0x3768($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3768);
    // 0x800368E0: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x800368E4: and         $v0, $v0, $s5
    ctx->r2 = ctx->r2 & ctx->r21;
    // 0x800368E8: beql        $v0, $s4, L_80036908
    if (ctx->r2 == ctx->r20) {
        // 0x800368EC: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_80036908;
    }
    goto skip_0;
    // 0x800368EC: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    skip_0:
    // 0x800368F0: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x800368F4: addu        $a1, $s0, $v0
    ctx->r5 = ADD32(ctx->r16, ctx->r2);
    // 0x800368F8: addiu       $a0, $a1, 0x4
    ctx->r4 = ADD32(ctx->r5, 0X4);
    // 0x800368FC: jal         0x8002FDC0
    // 0x80036900: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    func_8002FDC0_B1C0(rdram, ctx);
        goto after_1;
    // 0x80036900: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_1:
    // 0x80036904: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_80036908:
    // 0x80036908: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8003690C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80036910: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80036914: addu        $a1, $s0, $v0
    ctx->r5 = ADD32(ctx->r16, ctx->r2);
    // 0x80036918: addiu       $a0, $a1, 0x4
    ctx->r4 = ADD32(ctx->r5, 0X4);
    // 0x8003691C: jal         0x800870A0
    // 0x80036920: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    func_800870A0_624A0(rdram, ctx);
        goto after_2;
    // 0x80036920: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_2:
    // 0x80036924: slti        $v0, $s3, 0x9
    ctx->r2 = SIGNED(ctx->r19) < 0X9 ? 1 : 0;
    // 0x80036928: bne         $v0, $zero, L_800368D4
    if (ctx->r2 != 0) {
        // 0x8003692C: nop
    
            goto L_800368D4;
    }
    // 0x8003692C: nop

    // 0x80036930: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80036934: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80036938: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8003693C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80036940: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80036944: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80036948: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003694C: jr          $ra
    // 0x80036950: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80036950: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800409D0_1BDD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800409D0: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x800409D4: andi        $v1, $v0, 0xFFF
    ctx->r3 = ctx->r2 & 0XFFF;
    // 0x800409D8: andi        $v0, $a1, 0x300
    ctx->r2 = ctx->r5 & 0X300;
    // 0x800409DC: beq         $v0, $zero, L_80040A20
    if (ctx->r2 == 0) {
        // 0x800409E0: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_80040A20;
    }
    // 0x800409E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x800409E4: andi        $v0, $a1, 0x100
    ctx->r2 = ctx->r5 & 0X100;
    // 0x800409E8: beq         $v0, $zero, L_80040A08
    if (ctx->r2 == 0) {
        // 0x800409EC: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_80040A08;
    }
    // 0x800409EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800409F0: addiu       $v0, $v1, -0x401
    ctx->r2 = ADD32(ctx->r3, -0X401);
    // 0x800409F4: sltiu       $v0, $v0, 0x7FF
    ctx->r2 = ctx->r2 < 0X7FF ? 1 : 0;
    // 0x800409F8: beq         $v0, $zero, L_80040A24
    if (ctx->r2 == 0) {
        // 0x800409FC: andi        $v0, $a1, 0xC00
        ctx->r2 = ctx->r5 & 0XC00;
            goto L_80040A24;
    }
    // 0x800409FC: andi        $v0, $a1, 0xC00
    ctx->r2 = ctx->r5 & 0XC00;
    // 0x80040A00: j           L_80040A1C
    // 0x80040A04: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
        goto L_80040A1C;
    // 0x80040A04: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
L_80040A08:
    // 0x80040A08: addiu       $v0, $v1, -0x400
    ctx->r2 = ADD32(ctx->r3, -0X400);
    // 0x80040A0C: sltiu       $v0, $v0, 0x801
    ctx->r2 = ctx->r2 < 0X801 ? 1 : 0;
    // 0x80040A10: bne         $v0, $zero, L_80040A24
    if (ctx->r2 != 0) {
        // 0x80040A14: andi        $v0, $a1, 0xC00
        ctx->r2 = ctx->r5 & 0XC00;
            goto L_80040A24;
    }
    // 0x80040A14: andi        $v0, $a1, 0xC00
    ctx->r2 = ctx->r5 & 0XC00;
    // 0x80040A18: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
L_80040A1C:
    // 0x80040A1C: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
L_80040A20:
    // 0x80040A20: andi        $v0, $a1, 0xC00
    ctx->r2 = ctx->r5 & 0XC00;
L_80040A24:
    // 0x80040A24: beql        $v0, $zero, L_80040A64
    if (ctx->r2 == 0) {
        // 0x80040A28: sh          $v1, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r3;
            goto L_80040A64;
    }
    goto skip_0;
    // 0x80040A28: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    skip_0:
    // 0x80040A2C: andi        $v0, $a1, 0x400
    ctx->r2 = ctx->r5 & 0X400;
    // 0x80040A30: beq         $v0, $zero, L_80040A4C
    if (ctx->r2 == 0) {
        // 0x80040A34: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_80040A4C;
    }
    // 0x80040A34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80040A38: slti        $v0, $v1, 0x801
    ctx->r2 = SIGNED(ctx->r3) < 0X801 ? 1 : 0;
    // 0x80040A3C: bnel        $v0, $zero, L_80040A64
    if (ctx->r2 != 0) {
        // 0x80040A40: sh          $v1, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r3;
            goto L_80040A64;
    }
    goto skip_1;
    // 0x80040A40: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    skip_1:
    // 0x80040A44: j           L_80040A5C
    // 0x80040A48: addiu       $v0, $zero, 0x1800
    ctx->r2 = ADD32(0, 0X1800);
        goto L_80040A5C;
    // 0x80040A48: addiu       $v0, $zero, 0x1800
    ctx->r2 = ADD32(0, 0X1800);
L_80040A4C:
    // 0x80040A4C: slti        $v0, $v1, 0x800
    ctx->r2 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x80040A50: beql        $v0, $zero, L_80040A64
    if (ctx->r2 == 0) {
        // 0x80040A54: sh          $v1, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r3;
            goto L_80040A64;
    }
    goto skip_2;
    // 0x80040A54: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    skip_2:
    // 0x80040A58: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
L_80040A5C:
    // 0x80040A5C: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x80040A60: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
L_80040A64:
    // 0x80040A64: jr          $ra
    // 0x80040A68: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    TRACE_RETURN()
    return;
    // 0x80040A68: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
;}
RECOMP_FUNC void func_8004C790_27B90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004C790: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8004C794: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8004C798: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x8004C79C: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8004C7A0: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8004C7A4: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8004C7A8: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8004C7AC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8004C7B0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8004C7B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8004C7B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8004C7BC: lb          $v1, 0x0($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X0);
    // 0x8004C7C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8004C7C4: beq         $v1, $v0, L_8004CB00
    if (ctx->r3 == ctx->r2) {
        // 0x8004C7C8: addu        $s7, $a1, $zero
        ctx->r23 = ADD32(ctx->r5, 0);
            goto L_8004CB00;
    }
    // 0x8004C7C8: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x8004C7CC: lui         $s6, 0x801C
    ctx->r22 = S32(0X801C << 16);
    // 0x8004C7D0: addiu       $s6, $s6, -0x3BA0
    ctx->r22 = ADD32(ctx->r22, -0X3BA0);
    // 0x8004C7D4: addiu       $s2, $a0, 0x10
    ctx->r18 = ADD32(ctx->r4, 0X10);
    // 0x8004C7D8: addiu       $s5, $a0, 0xC
    ctx->r21 = ADD32(ctx->r4, 0XC);
L_8004C7DC:
    // 0x8004C7DC: lbu         $v1, -0xF($s2)
    ctx->r3 = MEM_BU(ctx->r18, -0XF);
    // 0x8004C7E0: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8004C7E4: beq         $v1, $v0, L_8004C95C
    if (ctx->r3 == ctx->r2) {
        // 0x8004C7E8: slti        $v0, $v1, 0x61
        ctx->r2 = SIGNED(ctx->r3) < 0X61 ? 1 : 0;
            goto L_8004C95C;
    }
    // 0x8004C7E8: slti        $v0, $v1, 0x61
    ctx->r2 = SIGNED(ctx->r3) < 0X61 ? 1 : 0;
    // 0x8004C7EC: beq         $v0, $zero, L_8004C824
    if (ctx->r2 == 0) {
        // 0x8004C7F0: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_8004C824;
    }
    // 0x8004C7F0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8004C7F4: beq         $v1, $v0, L_8004C93C
    if (ctx->r3 == ctx->r2) {
        // 0x8004C7F8: slti        $v0, $v1, 0x21
        ctx->r2 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
            goto L_8004C93C;
    }
    // 0x8004C7F8: slti        $v0, $v1, 0x21
    ctx->r2 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
    // 0x8004C7FC: beql        $v0, $zero, L_8004C814
    if (ctx->r2 == 0) {
        // 0x8004C800: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_8004C814;
    }
    goto skip_0;
    // 0x8004C800: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    skip_0:
    // 0x8004C804: beq         $v1, $zero, L_8004C85C
    if (ctx->r3 == 0) {
        // 0x8004C808: nop
    
            goto L_8004C85C;
    }
    // 0x8004C808: nop

    // 0x8004C80C: j           L_8004CAEC
    // 0x8004C810: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
        goto L_8004CAEC;
    // 0x8004C810: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
L_8004C814:
    // 0x8004C814: beq         $v1, $v0, L_8004C94C
    if (ctx->r3 == ctx->r2) {
        // 0x8004C818: nop
    
            goto L_8004C94C;
    }
    // 0x8004C818: nop

    // 0x8004C81C: j           L_8004CAEC
    // 0x8004C820: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
        goto L_8004CAEC;
    // 0x8004C820: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
L_8004C824:
    // 0x8004C824: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x8004C828: beq         $v1, $v0, L_8004CA48
    if (ctx->r3 == ctx->r2) {
        // 0x8004C82C: slti        $v0, $v1, 0xC1
        ctx->r2 = SIGNED(ctx->r3) < 0XC1 ? 1 : 0;
            goto L_8004CA48;
    }
    // 0x8004C82C: slti        $v0, $v1, 0xC1
    ctx->r2 = SIGNED(ctx->r3) < 0XC1 ? 1 : 0;
    // 0x8004C830: beq         $v0, $zero, L_8004C848
    if (ctx->r2 == 0) {
        // 0x8004C834: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_8004C848;
    }
    // 0x8004C834: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8004C838: beq         $v1, $v0, L_8004CA38
    if (ctx->r3 == ctx->r2) {
        // 0x8004C83C: nop
    
            goto L_8004CA38;
    }
    // 0x8004C83C: nop

    // 0x8004C840: j           L_8004CAEC
    // 0x8004C844: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
        goto L_8004CAEC;
    // 0x8004C844: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
L_8004C848:
    // 0x8004C848: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8004C84C: beq         $v1, $v0, L_8004CA90
    if (ctx->r3 == ctx->r2) {
        // 0x8004C850: nop
    
            goto L_8004CA90;
    }
    // 0x8004C850: nop

    // 0x8004C854: j           L_8004CAEC
    // 0x8004C858: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
        goto L_8004CAEC;
    // 0x8004C858: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
L_8004C85C:
    // 0x8004C85C: beq         $s7, $zero, L_8004CAE8
    if (ctx->r23 == 0) {
        // 0x8004C860: lui         $v0, 0x8000
        ctx->r2 = S32(0X8000 << 16);
            goto L_8004CAE8;
    }
    // 0x8004C860: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x8004C864: lbu         $a0, -0xD($s2)
    ctx->r4 = MEM_BU(ctx->r18, -0XD);
    // 0x8004C868: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8004C86C: lw          $v1, -0x35A4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X35A4);
    // 0x8004C870: srlv        $v0, $v0, $a0
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r4 & 31));
    // 0x8004C874: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8004C878: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8004C87C: sw          $v1, -0x35A4($at)
    MEM_W(-0X35A4, ctx->r1) = ctx->r3;
    // 0x8004C880: lbu         $v1, -0xD($s2)
    ctx->r3 = MEM_BU(ctx->r18, -0XD);
    // 0x8004C884: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004C888: addiu       $v0, $v0, 0x4FA4
    ctx->r2 = ADD32(ctx->r2, 0X4FA4);
    // 0x8004C88C: addiu       $s1, $v0, 0x58
    ctx->r17 = ADD32(ctx->r2, 0X58);
    // 0x8004C890: bne         $v1, $zero, L_8004C8A0
    if (ctx->r3 != 0) {
        // 0x8004C894: addu        $s3, $v0, $zero
        ctx->r19 = ADD32(ctx->r2, 0);
            goto L_8004C8A0;
    }
    // 0x8004C894: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8004C898: addiu       $s1, $s3, -0x59C
    ctx->r17 = ADD32(ctx->r19, -0X59C);
    // 0x8004C89C: addiu       $s3, $s3, -0x5F4
    ctx->r19 = ADD32(ctx->r19, -0X5F4);
L_8004C8A0:
    // 0x8004C8A0: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8004C8A4: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x8004C8A8: lhu         $v0, -0xE($s2)
    ctx->r2 = MEM_HU(ctx->r18, -0XE);
    // 0x8004C8AC: sh          $v0, -0x56($s1)
    MEM_H(-0X56, ctx->r17) = ctx->r2;
    // 0x8004C8B0: lhu         $v0, -0xC($s2)
    ctx->r2 = MEM_HU(ctx->r18, -0XC);
    // 0x8004C8B4: sh          $v0, -0x54($s1)
    MEM_H(-0X54, ctx->r17) = ctx->r2;
    // 0x8004C8B8: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x8004C8BC: sw          $zero, -0x50($s1)
    MEM_W(-0X50, ctx->r17) = 0;
    // 0x8004C8C0: sw          $v0, -0x4C($s1)
    MEM_W(-0X4C, ctx->r17) = ctx->r2;
    // 0x8004C8C4: lh          $v0, -0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X4);
    // 0x8004C8C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8004C8CC: sw          $v0, -0x24($s1)
    MEM_W(-0X24, ctx->r17) = ctx->r2;
    // 0x8004C8D0: sw          $v0, -0x3C($s1)
    MEM_W(-0X3C, ctx->r17) = ctx->r2;
    // 0x8004C8D4: lh          $v0, -0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X2);
    // 0x8004C8D8: addiu       $s0, $s3, 0x2C
    ctx->r16 = ADD32(ctx->r19, 0X2C);
    // 0x8004C8DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8004C8E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8004C8E4: sw          $v0, -0x20($s1)
    MEM_W(-0X20, ctx->r17) = ctx->r2;
    // 0x8004C8E8: sw          $v0, -0x38($s1)
    MEM_W(-0X38, ctx->r17) = ctx->r2;
    // 0x8004C8EC: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x8004C8F0: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8004C8F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8004C8F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8004C8FC: sw          $v0, -0x1C($s1)
    MEM_W(-0X1C, ctx->r17) = ctx->r2;
    // 0x8004C900: jal         0x8009A3B4
    // 0x8004C904: sw          $v0, -0x34($s1)
    MEM_W(-0X34, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8004C904: sw          $v0, -0x34($s1)
    MEM_W(-0X34, ctx->r17) = ctx->r2;
    after_0:
    // 0x8004C908: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x8004C90C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8004C910: jal         0x8009A3B4
    // 0x8004C914: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8004C914: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8004C918: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
    // 0x8004C91C: sh          $zero, -0x4($s1)
    MEM_H(-0X4, ctx->r17) = 0;
    // 0x8004C920: lbu         $v0, -0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X9);
    // 0x8004C924: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x8004C928: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x8004C92C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8004C930: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
    // 0x8004C934: j           L_8004CAE8
    // 0x8004C938: sh          $v0, -0x2($s1)
    MEM_H(-0X2, ctx->r17) = ctx->r2;
        goto L_8004CAE8;
    // 0x8004C938: sh          $v0, -0x2($s1)
    MEM_H(-0X2, ctx->r17) = ctx->r2;
L_8004C93C:
    // 0x8004C93C: jal         0x8004EEAC
    // 0x8004C940: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_2;
    // 0x8004C940: nop

    after_2:
    // 0x8004C944: j           L_8004C99C
    // 0x8004C948: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
        goto L_8004C99C;
    // 0x8004C948: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_8004C94C:
    // 0x8004C94C: jal         0x8004EF48
    // 0x8004C950: nop

    func_8004EF48_2A348(rdram, ctx);
        goto after_3;
    // 0x8004C950: nop

    after_3:
    // 0x8004C954: j           L_8004C99C
    // 0x8004C958: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
        goto L_8004C99C;
    // 0x8004C958: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_8004C95C:
    // 0x8004C95C: lbu         $v1, -0xE($s2)
    ctx->r3 = MEM_BU(ctx->r18, -0XE);
    // 0x8004C960: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8004C964: bne         $v1, $v0, L_8004C990
    if (ctx->r3 != ctx->r2) {
        // 0x8004C968: nop
    
            goto L_8004C990;
    }
    // 0x8004C968: nop

    // 0x8004C96C: lb          $v0, 0x0($s6)
    ctx->r2 = MEM_B(ctx->r22, 0X0);
    // 0x8004C970: beql        $v0, $zero, L_8004CAEC
    if (ctx->r2 == 0) {
        // 0x8004C974: addiu       $s2, $s2, 0x14
        ctx->r18 = ADD32(ctx->r18, 0X14);
            goto L_8004CAEC;
    }
    goto skip_1;
    // 0x8004C974: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    skip_1:
    // 0x8004C978: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x8004C97C: lh          $v1, -0x28($s6)
    ctx->r3 = MEM_H(ctx->r22, -0X28);
    // 0x8004C980: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8004C984: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8004C988: bnel        $v0, $v1, L_8004CAEC
    if (ctx->r2 != ctx->r3) {
        // 0x8004C98C: addiu       $s2, $s2, 0x14
        ctx->r18 = ADD32(ctx->r18, 0X14);
            goto L_8004CAEC;
    }
    goto skip_2;
    // 0x8004C98C: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    skip_2:
L_8004C990:
    // 0x8004C990: jal         0x8004EFE4
    // 0x8004C994: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_4;
    // 0x8004C994: nop

    after_4:
    // 0x8004C998: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_8004C99C:
    // 0x8004C99C: beq         $s1, $zero, L_8004CAE8
    if (ctx->r17 == 0) {
        // 0x8004C9A0: addiu       $s0, $s1, 0x2C
        ctx->r16 = ADD32(ctx->r17, 0X2C);
            goto L_8004CAE8;
    }
    // 0x8004C9A0: addiu       $s0, $s1, 0x2C
    ctx->r16 = ADD32(ctx->r17, 0X2C);
    // 0x8004C9A4: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8004C9A8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8004C9AC: lhu         $v0, -0xE($s2)
    ctx->r2 = MEM_HU(ctx->r18, -0XE);
    // 0x8004C9B0: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x8004C9B4: lhu         $v0, -0xC($s2)
    ctx->r2 = MEM_HU(ctx->r18, -0XC);
    // 0x8004C9B8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8004C9BC: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x8004C9C0: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x8004C9C4: lh          $v0, -0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X4);
    // 0x8004C9C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8004C9CC: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x8004C9D0: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8004C9D4: lh          $v0, -0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X2);
    // 0x8004C9D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8004C9DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8004C9E0: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x8004C9E4: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8004C9E8: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x8004C9EC: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8004C9F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8004C9F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8004C9F8: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x8004C9FC: jal         0x8009A3B4
    // 0x8004CA00: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8004CA00: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    after_5:
    // 0x8004CA04: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8004CA08: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8004CA0C: jal         0x8009A3B4
    // 0x8004CA10: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8004CA10: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8004CA14: sh          $zero, 0x5C($s1)
    MEM_H(0X5C, ctx->r17) = 0;
    // 0x8004CA18: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x8004CA1C: lbu         $v0, -0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X9);
    // 0x8004CA20: sh          $zero, 0x60($s1)
    MEM_H(0X60, ctx->r17) = 0;
    // 0x8004CA24: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x8004CA28: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8004CA2C: sh          $v0, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r2;
    // 0x8004CA30: j           L_8004CAE8
    // 0x8004CA34: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
        goto L_8004CAE8;
    // 0x8004CA34: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_8004CA38:
    // 0x8004CA38: jal         0x8004F144
    // 0x8004CA3C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_7;
    // 0x8004CA3C: nop

    after_7:
    // 0x8004CA40: j           L_8004CA9C
    // 0x8004CA44: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
        goto L_8004CA9C;
    // 0x8004CA44: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_8004CA48:
    // 0x8004CA48: jal         0x8004F228
    // 0x8004CA4C: nop

    func_8004F228_2A628(rdram, ctx);
        goto after_8;
    // 0x8004CA4C: nop

    after_8:
    // 0x8004CA50: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8004CA54: beq         $v1, $zero, L_8004CAE8
    if (ctx->r3 == 0) {
        // 0x8004CA58: addiu       $a0, $v1, 0x14
        ctx->r4 = ADD32(ctx->r3, 0X14);
            goto L_8004CAE8;
    }
    // 0x8004CA58: addiu       $a0, $v1, 0x14
    ctx->r4 = ADD32(ctx->r3, 0X14);
    // 0x8004CA5C: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8004CA60: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8004CA64: lhu         $v0, -0xE($s2)
    ctx->r2 = MEM_HU(ctx->r18, -0XE);
    // 0x8004CA68: sh          $v0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r2;
    // 0x8004CA6C: lhu         $v0, -0xC($s2)
    ctx->r2 = MEM_HU(ctx->r18, -0XC);
    // 0x8004CA70: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x8004CA74: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x8004CA78: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8004CA7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8004CA80: jal         0x8009A3B4
    // 0x8004CA84: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8004CA84: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    after_9:
    // 0x8004CA88: j           L_8004CAEC
    // 0x8004CA8C: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
        goto L_8004CAEC;
    // 0x8004CA8C: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
L_8004CA90:
    // 0x8004CA90: jal         0x8004F2C4
    // 0x8004CA94: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_10;
    // 0x8004CA94: nop

    after_10:
    // 0x8004CA98: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_8004CA9C:
    // 0x8004CA9C: beq         $s0, $zero, L_8004CAE8
    if (ctx->r16 == 0) {
        // 0x8004CAA0: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_8004CAE8;
    }
    // 0x8004CAA0: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8004CAA4: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8004CAA8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8004CAAC: lhu         $v0, -0xE($s2)
    ctx->r2 = MEM_HU(ctx->r18, -0XE);
    // 0x8004CAB0: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x8004CAB4: lhu         $v0, -0xC($s2)
    ctx->r2 = MEM_HU(ctx->r18, -0XC);
    // 0x8004CAB8: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8004CABC: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x8004CAC0: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8004CAC4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8004CAC8: jal         0x8009A3B4
    // 0x8004CACC: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x8004CACC: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    after_11:
    // 0x8004CAD0: lhu         $v0, -0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, -0X4);
    // 0x8004CAD4: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x8004CAD8: lhu         $v0, -0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, -0X2);
    // 0x8004CADC: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x8004CAE0: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8004CAE4: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
L_8004CAE8:
    // 0x8004CAE8: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
L_8004CAEC:
    // 0x8004CAEC: addiu       $s4, $s4, 0x14
    ctx->r20 = ADD32(ctx->r20, 0X14);
    // 0x8004CAF0: lb          $v1, 0x0($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X0);
    // 0x8004CAF4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8004CAF8: bne         $v1, $v0, L_8004C7DC
    if (ctx->r3 != ctx->r2) {
        // 0x8004CAFC: addiu       $s5, $s5, 0x14
        ctx->r21 = ADD32(ctx->r21, 0X14);
            goto L_8004C7DC;
    }
    // 0x8004CAFC: addiu       $s5, $s5, 0x14
    ctx->r21 = ADD32(ctx->r21, 0X14);
L_8004CB00:
    // 0x8004CB00: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8004CB04: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8004CB08: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8004CB0C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8004CB10: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8004CB14: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8004CB18: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8004CB1C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8004CB20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004CB24: jr          $ra
    // 0x8004CB28: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8004CB28: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
