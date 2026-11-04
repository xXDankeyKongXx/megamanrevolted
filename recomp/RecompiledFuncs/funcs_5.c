#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80052AEC_2DEEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80052AEC: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x80052AF0: sw          $ra, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r31;
    // 0x80052AF4: sw          $fp, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r30;
    // 0x80052AF8: sw          $s7, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r23;
    // 0x80052AFC: sw          $s6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r22;
    // 0x80052B00: sw          $s5, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r21;
    // 0x80052B04: sw          $s4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r20;
    // 0x80052B08: sw          $s3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r19;
    // 0x80052B0C: sw          $s2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r18;
    // 0x80052B10: sw          $s1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r17;
    // 0x80052B14: jal         0x8005310C
    // 0x80052B18: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    func_8005310C_2E50C(rdram, ctx);
        goto after_0;
    // 0x80052B18: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    after_0:
    // 0x80052B1C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80052B20: lb          $v1, 0x4B20($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X4B20);
    // 0x80052B24: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x80052B28: lw          $t0, -0x11CC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X11CC);
    // 0x80052B2C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80052B30: bne         $v1, $v0, L_80052B48
    if (ctx->r3 != ctx->r2) {
        // 0x80052B34: sw          $t0, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r8;
            goto L_80052B48;
    }
    // 0x80052B34: sw          $t0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r8;
    // 0x80052B38: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80052B3C: lb          $v1, 0x4EE8($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X4EE8);
    // 0x80052B40: j           L_80052B50
    // 0x80052B44: addiu       $fp, $zero, 0xA0
    ctx->r30 = ADD32(0, 0XA0);
        goto L_80052B50;
    // 0x80052B44: addiu       $fp, $zero, 0xA0
    ctx->r30 = ADD32(0, 0XA0);
L_80052B48:
    // 0x80052B48: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x80052B4C: addiu       $fp, $zero, 0xA0
    ctx->r30 = ADD32(0, 0XA0);
L_80052B50:
    // 0x80052B50: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80052B54: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80052B58: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x80052B5C: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x80052B60: addiu       $s3, $s3, 0x4B24
    ctx->r19 = ADD32(ctx->r19, 0X4B24);
    // 0x80052B64: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_80052B68:
    // 0x80052B68: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80052B6C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80052B70: lbu         $v0, 0x49B0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X49B0);
    // 0x80052B74: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80052B78: beq         $v0, $zero, L_80053024
    if (ctx->r2 == 0) {
        // 0x80052B7C: lui         $s5, 0x7FFF
        ctx->r21 = S32(0X7FFF << 16);
            goto L_80053024;
    }
    // 0x80052B7C: lui         $s5, 0x7FFF
    ctx->r21 = S32(0X7FFF << 16);
    // 0x80052B80: ori         $s5, $s5, 0xFFFF
    ctx->r21 = ctx->r21 | 0XFFFF;
    // 0x80052B84: lui         $s4, 0x7FFF
    ctx->r20 = S32(0X7FFF << 16);
    // 0x80052B88: ori         $s4, $s4, 0xFFFF
    ctx->r20 = ctx->r20 | 0XFFFF;
    // 0x80052B8C: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    // 0x80052B90: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x80052B94: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x80052B98: addiu       $s0, $s0, 0x4760
    ctx->r16 = ADD32(ctx->r16, 0X4760);
    // 0x80052B9C: jal         0x80031E5C
    // 0x80052BA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80031E5C_D25C(rdram, ctx);
        goto after_1;
    // 0x80052BA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80052BA4: jal         0x80031E94
    // 0x80052BA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80031E94_D294(rdram, ctx);
        goto after_2;
    // 0x80052BA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80052BAC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80052BB0: addiu       $v0, $v0, 0x4B24
    ctx->r2 = ADD32(ctx->r2, 0X4B24);
    // 0x80052BB4: beq         $s3, $v0, L_80052BC8
    if (ctx->r19 == ctx->r2) {
        // 0x80052BB8: nop
    
            goto L_80052BC8;
    }
    // 0x80052BB8: nop

    // 0x80052BBC: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80052BC0: j           L_80052BD0
    // 0x80052BC4: lbu         $s1, -0x1B6D($s1)
    ctx->r17 = MEM_BU(ctx->r17, -0X1B6D);
        goto L_80052BD0;
    // 0x80052BC4: lbu         $s1, -0x1B6D($s1)
    ctx->r17 = MEM_BU(ctx->r17, -0X1B6D);
L_80052BC8:
    // 0x80052BC8: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80052BCC: lbu         $s1, -0x1B6E($s1)
    ctx->r17 = MEM_BU(ctx->r17, -0X1B6E);
L_80052BD0:
    // 0x80052BD0: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80052BD4: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x80052BD8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80052BDC: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80052BE0: addu        $a1, $s2, $a1
    ctx->r5 = ADD32(ctx->r18, ctx->r5);
    // 0x80052BE4: jal         0x8009A3B4
    // 0x80052BE8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80052BE8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80052BEC: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80052BF0: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x80052BF4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80052BF8: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x80052BFC: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80052C00: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x80052C04: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x80052C08: jal         0x80031F0C
    // 0x80052C0C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_4;
    // 0x80052C0C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_4:
    // 0x80052C10: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80052C14: lw          $v0, -0x3F50($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3F50);
    // 0x80052C18: bltzl       $v0, L_80052C20
    if (SIGNED(ctx->r2) < 0) {
        // 0x80052C1C: addiu       $v0, $v0, 0x3
        ctx->r2 = ADD32(ctx->r2, 0X3);
            goto L_80052C20;
    }
    goto skip_0;
    // 0x80052C1C: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    skip_0:
L_80052C20:
    // 0x80052C20: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x80052C24: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x80052C28: addiu       $v0, $v0, 0x32
    ctx->r2 = ADD32(ctx->r2, 0X32);
    // 0x80052C2C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80052C30: beq         $t0, $zero, L_80052F54
    if (ctx->r8 == 0) {
        // 0x80052C34: sw          $v0, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r2;
            goto L_80052F54;
    }
    // 0x80052C34: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x80052C38: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x80052C3C: andi        $s1, $s1, 0xFF
    ctx->r17 = ctx->r17 & 0XFF;
    // 0x80052C40: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x80052C44: sll         $s1, $t0, 2
    ctx->r17 = S32(ctx->r8 << 2);
    // 0x80052C48: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
L_80052C4C:
    // 0x80052C4C: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80052C50: sll         $a2, $v0, 2
    ctx->r6 = S32(ctx->r2 << 2);
    // 0x80052C54: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x80052C58: addiu       $t0, $t0, -0x2782
    ctx->r8 = ADD32(ctx->r8, -0X2782);
    // 0x80052C5C: addu        $v0, $a2, $t0
    ctx->r2 = ADD32(ctx->r6, ctx->r8);
    // 0x80052C60: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80052C64: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x80052C68: srl         $v0, $v0, 13
    ctx->r2 = S32(U32(ctx->r2) >> 13);
    // 0x80052C6C: sllv        $v0, $t0, $v0
    ctx->r2 = S32(ctx->r8 << (ctx->r2 & 31));
    // 0x80052C70: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80052C74: beq         $v0, $zero, L_80052F40
    if (ctx->r2 == 0) {
        // 0x80052C78: nop
    
            goto L_80052F40;
    }
    // 0x80052C78: nop

    // 0x80052C7C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80052C80: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80052C84: lhu         $v0, -0x2782($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X2782);
    // 0x80052C88: andi        $v0, $v0, 0x600
    ctx->r2 = ctx->r2 & 0X600;
    // 0x80052C8C: beq         $v0, $zero, L_80052D14
    if (ctx->r2 == 0) {
        // 0x80052C90: addiu       $a1, $s0, 0x1
        ctx->r5 = ADD32(ctx->r16, 0X1);
            goto L_80052D14;
    }
    // 0x80052C90: addiu       $a1, $s0, 0x1
    ctx->r5 = ADD32(ctx->r16, 0X1);
    // 0x80052C94: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80052C98: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80052C9C: lh          $v1, -0x2788($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X2788);
    // 0x80052CA0: sll         $a0, $a1, 1
    ctx->r4 = S32(ctx->r5 << 1);
    // 0x80052CA4: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80052CA8: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80052CAC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80052CB0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80052CB4: lh          $v0, -0x2788($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X2788);
    // 0x80052CB8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80052CBC: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80052CC0: sh          $v1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r3;
    // 0x80052CC4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80052CC8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80052CCC: lh          $v0, -0x2786($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X2786);
    // 0x80052CD0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80052CD4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80052CD8: lh          $v1, -0x2786($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X2786);
    // 0x80052CDC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80052CE0: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80052CE4: sh          $v0, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r2;
    // 0x80052CE8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80052CEC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80052CF0: lh          $v0, -0x2784($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X2784);
    // 0x80052CF4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80052CF8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80052CFC: lh          $v1, -0x2784($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X2784);
    // 0x80052D00: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80052D04: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80052D08: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80052D0C: j           L_80052D2C
    // 0x80052D10: sh          $v0, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r2;
        goto L_80052D2C;
    // 0x80052D10: sh          $v0, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r2;
L_80052D14:
    // 0x80052D14: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80052D18: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x80052D1C: addiu       $t0, $t0, -0x2788
    ctx->r8 = ADD32(ctx->r8, -0X2788);
    // 0x80052D20: addu        $a1, $a2, $t0
    ctx->r5 = ADD32(ctx->r6, ctx->r8);
    // 0x80052D24: jal         0x8009A3B4
    // 0x80052D28: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80052D28: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
L_80052D2C:
    // 0x80052D2C: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x80052D30: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80052D34: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80052D38: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80052D3C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80052D40: lw          $v0, -0x2780($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2780);
    // 0x80052D44: lui         $v1, 0x7F
    ctx->r3 = S32(0X7F << 16);
    // 0x80052D48: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80052D4C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80052D50: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x80052D54: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80052D58: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80052D5C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80052D60: bne         $v0, $zero, L_80052F40
    if (ctx->r2 != 0) {
        // 0x80052D64: addiu       $a1, $sp, 0x50
        ctx->r5 = ADD32(ctx->r29, 0X50);
            goto L_80052F40;
    }
    // 0x80052D64: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x80052D68: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80052D6C: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x80052D70: jal         0x8009A3B4
    // 0x80052D74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80052D74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80052D78: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80052D7C: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x80052D80: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80052D84: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x80052D88: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80052D8C: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x80052D90: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x80052D94: jal         0x80031F0C
    // 0x80052D98: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_7;
    // 0x80052D98: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_7:
    // 0x80052D9C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80052DA0: lw          $v0, -0x3F50($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3F50);
    // 0x80052DA4: bltzl       $v0, L_80052DAC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80052DA8: addiu       $v0, $v0, 0x3
        ctx->r2 = ADD32(ctx->r2, 0X3);
            goto L_80052DAC;
    }
    goto skip_1;
    // 0x80052DA8: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    skip_1:
L_80052DAC:
    // 0x80052DAC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80052DB0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80052DB4: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x80052DB8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80052DBC: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x80052DC0: jal         0x8009A3B4
    // 0x80052DC4: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80052DC4: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    after_8:
    // 0x80052DC8: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x80052DCC: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x80052DD0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80052DD4: beq         $v0, $zero, L_80052F40
    if (ctx->r2 == 0) {
        // 0x80052DD8: slti        $v0, $v1, 0x500
        ctx->r2 = SIGNED(ctx->r3) < 0X500 ? 1 : 0;
            goto L_80052F40;
    }
    // 0x80052DD8: slti        $v0, $v1, 0x500
    ctx->r2 = SIGNED(ctx->r3) < 0X500 ? 1 : 0;
    // 0x80052DDC: beq         $v0, $zero, L_80052E64
    if (ctx->r2 == 0) {
        // 0x80052DE0: nop
    
            goto L_80052E64;
    }
    // 0x80052DE0: nop

    // 0x80052DE4: lhu         $v1, 0x38($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X38);
    // 0x80052DE8: addiu       $v0, $v1, -0x83
    ctx->r2 = ADD32(ctx->r3, -0X83);
    // 0x80052DEC: sltiu       $v0, $v0, 0x3B
    ctx->r2 = ctx->r2 < 0X3B ? 1 : 0;
    // 0x80052DF0: beq         $v0, $zero, L_80052E60
    if (ctx->r2 == 0) {
        // 0x80052DF4: nop
    
            goto L_80052E60;
    }
    // 0x80052DF4: nop

    // 0x80052DF8: lhu         $v0, 0x3A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3A);
    // 0x80052DFC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80052E00: sltiu       $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 < 0XEF ? 1 : 0;
    // 0x80052E04: beq         $v0, $zero, L_80052E60
    if (ctx->r2 == 0) {
        // 0x80052E08: subu        $a0, $fp, $s4
        ctx->r4 = SUB32(ctx->r30, ctx->r20);
            goto L_80052E60;
    }
    // 0x80052E08: subu        $a0, $fp, $s4
    ctx->r4 = SUB32(ctx->r30, ctx->r20);
    // 0x80052E0C: bltzl       $a0, L_80052E14
    if (SIGNED(ctx->r4) < 0) {
        // 0x80052E10: addiu       $a0, $s4, -0xA0
        ctx->r4 = ADD32(ctx->r20, -0XA0);
            goto L_80052E14;
    }
    goto skip_2;
    // 0x80052E10: addiu       $a0, $s4, -0xA0
    ctx->r4 = ADD32(ctx->r20, -0XA0);
    skip_2:
L_80052E14:
    // 0x80052E14: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80052E18: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80052E1C: subu        $v0, $fp, $v1
    ctx->r2 = SUB32(ctx->r30, ctx->r3);
    // 0x80052E20: bltz        $v0, L_80052E38
    if (SIGNED(ctx->r2) < 0) {
        // 0x80052E24: slt         $v0, $v0, $a0
        ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_80052E38;
    }
    // 0x80052E24: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80052E28: bnel        $v0, $zero, L_80052E4C
    if (ctx->r2 != 0) {
        // 0x80052E2C: addu        $s6, $s0, $zero
        ctx->r22 = ADD32(ctx->r16, 0);
            goto L_80052E4C;
    }
    goto skip_3;
    // 0x80052E2C: addu        $s6, $s0, $zero
    ctx->r22 = ADD32(ctx->r16, 0);
    skip_3:
    // 0x80052E30: j           L_80052E60
    // 0x80052E34: nop

        goto L_80052E60;
    // 0x80052E34: nop

L_80052E38:
    // 0x80052E38: addiu       $v0, $v1, -0xA0
    ctx->r2 = ADD32(ctx->r3, -0XA0);
    // 0x80052E3C: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80052E40: beq         $v0, $zero, L_80052E60
    if (ctx->r2 == 0) {
        // 0x80052E44: nop
    
            goto L_80052E60;
    }
    // 0x80052E44: nop

    // 0x80052E48: addu        $s6, $s0, $zero
    ctx->r22 = ADD32(ctx->r16, 0);
L_80052E4C:
    // 0x80052E4C: lh          $s4, 0x38($sp)
    ctx->r20 = MEM_H(ctx->r29, 0X38);
    // 0x80052E50: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80052E54: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x80052E58: jal         0x8009A3B4
    // 0x80052E5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80052E5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
L_80052E60:
    // 0x80052E60: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
L_80052E64:
    // 0x80052E64: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x80052E68: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80052E6C: beq         $v0, $zero, L_80052F40
    if (ctx->r2 == 0) {
        // 0x80052E70: nop
    
            goto L_80052F40;
    }
    // 0x80052E70: nop

    // 0x80052E74: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80052E78: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80052E7C: lh          $v0, -0x1B64($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1B64);
    // 0x80052E80: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80052E84: beq         $v0, $zero, L_80052F40
    if (ctx->r2 == 0) {
        // 0x80052E88: nop
    
            goto L_80052F40;
    }
    // 0x80052E88: nop

    // 0x80052E8C: lh          $a0, 0x38($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X38);
    // 0x80052E90: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80052E94: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80052E98: lh          $v0, -0x1B62($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1B62);
    // 0x80052E9C: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80052EA0: beq         $v0, $zero, L_80052F40
    if (ctx->r2 == 0) {
        // 0x80052EA4: nop
    
            goto L_80052F40;
    }
    // 0x80052EA4: nop

    // 0x80052EA8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80052EAC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80052EB0: lh          $v0, -0x1B60($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1B60);
    // 0x80052EB4: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80052EB8: beq         $v0, $zero, L_80052F40
    if (ctx->r2 == 0) {
        // 0x80052EBC: nop
    
            goto L_80052F40;
    }
    // 0x80052EBC: nop

    // 0x80052EC0: lh          $v1, 0x3A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X3A);
    // 0x80052EC4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80052EC8: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80052ECC: lh          $v0, -0x1B5E($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1B5E);
    // 0x80052ED0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80052ED4: beq         $v0, $zero, L_80052F40
    if (ctx->r2 == 0) {
        // 0x80052ED8: nop
    
            goto L_80052F40;
    }
    // 0x80052ED8: nop

    // 0x80052EDC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80052EE0: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80052EE4: lh          $v0, -0x1B5C($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1B5C);
    // 0x80052EE8: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80052EEC: beq         $v0, $zero, L_80052F40
    if (ctx->r2 == 0) {
        // 0x80052EF0: subu        $v1, $fp, $s5
        ctx->r3 = SUB32(ctx->r30, ctx->r21);
            goto L_80052F40;
    }
    // 0x80052EF0: subu        $v1, $fp, $s5
    ctx->r3 = SUB32(ctx->r30, ctx->r21);
    // 0x80052EF4: bltzl       $v1, L_80052EFC
    if (SIGNED(ctx->r3) < 0) {
        // 0x80052EF8: addiu       $v1, $s5, -0xA0
        ctx->r3 = ADD32(ctx->r21, -0XA0);
            goto L_80052EFC;
    }
    goto skip_4;
    // 0x80052EF8: addiu       $v1, $s5, -0xA0
    ctx->r3 = ADD32(ctx->r21, -0XA0);
    skip_4:
L_80052EFC:
    // 0x80052EFC: subu        $v0, $fp, $a0
    ctx->r2 = SUB32(ctx->r30, ctx->r4);
    // 0x80052F00: bltz        $v0, L_80052F18
    if (SIGNED(ctx->r2) < 0) {
        // 0x80052F04: slt         $v0, $v0, $v1
        ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_80052F18;
    }
    // 0x80052F04: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80052F08: bnel        $v0, $zero, L_80052F2C
    if (ctx->r2 != 0) {
        // 0x80052F0C: addu        $s7, $s0, $zero
        ctx->r23 = ADD32(ctx->r16, 0);
            goto L_80052F2C;
    }
    goto skip_5;
    // 0x80052F0C: addu        $s7, $s0, $zero
    ctx->r23 = ADD32(ctx->r16, 0);
    skip_5:
    // 0x80052F10: j           L_80052F40
    // 0x80052F14: nop

        goto L_80052F40;
    // 0x80052F14: nop

L_80052F18:
    // 0x80052F18: addiu       $v0, $a0, -0xA0
    ctx->r2 = ADD32(ctx->r4, -0XA0);
    // 0x80052F1C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80052F20: beq         $v0, $zero, L_80052F40
    if (ctx->r2 == 0) {
        // 0x80052F24: nop
    
            goto L_80052F40;
    }
    // 0x80052F24: nop

    // 0x80052F28: addu        $s7, $s0, $zero
    ctx->r23 = ADD32(ctx->r16, 0);
L_80052F2C:
    // 0x80052F2C: lh          $s5, 0x38($sp)
    ctx->r21 = MEM_H(ctx->r29, 0X38);
    // 0x80052F30: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80052F34: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x80052F38: jal         0x8009A3B4
    // 0x80052F3C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x80052F3C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
L_80052F40:
    // 0x80052F40: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x80052F44: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80052F48: sltu        $v0, $s0, $t0
    ctx->r2 = ctx->r16 < ctx->r8 ? 1 : 0;
    // 0x80052F4C: bne         $v0, $zero, L_80052C4C
    if (ctx->r2 != 0) {
        // 0x80052F50: sll         $v0, $s0, 1
        ctx->r2 = S32(ctx->r16 << 1);
            goto L_80052C4C;
    }
    // 0x80052F50: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
L_80052F54:
    // 0x80052F54: bltz        $s6, L_80052F88
    if (SIGNED(ctx->r22) < 0) {
        // 0x80052F58: nop
    
            goto L_80052F88;
    }
    // 0x80052F58: nop

    // 0x80052F5C: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80052F60: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80052F64: beq         $v0, $zero, L_80052FB8
    if (ctx->r2 == 0) {
        // 0x80052F68: addiu       $a0, $sp, 0x50
        ctx->r4 = ADD32(ctx->r29, 0X50);
            goto L_80052FB8;
    }
    // 0x80052F68: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80052F6C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80052F70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80052F74: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80052F78: addiu       $a2, $a2, 0x49B0
    ctx->r6 = ADD32(ctx->r6, 0X49B0);
    // 0x80052F7C: addu        $a2, $s2, $a2
    ctx->r6 = ADD32(ctx->r18, ctx->r6);
    // 0x80052F80: j           L_80052FB0
    // 0x80052F84: addu        $a3, $s6, $zero
    ctx->r7 = ADD32(ctx->r22, 0);
        goto L_80052FB0;
    // 0x80052F84: addu        $a3, $s6, $zero
    ctx->r7 = ADD32(ctx->r22, 0);
L_80052F88:
    // 0x80052F88: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80052F8C: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80052F90: beq         $v0, $zero, L_80052FB8
    if (ctx->r2 == 0) {
        // 0x80052F94: addiu       $a0, $sp, 0x50
        ctx->r4 = ADD32(ctx->r29, 0X50);
            goto L_80052FB8;
    }
    // 0x80052F94: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80052F98: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80052F9C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80052FA0: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80052FA4: addiu       $a2, $a2, 0x49B0
    ctx->r6 = ADD32(ctx->r6, 0X49B0);
    // 0x80052FA8: addu        $a2, $s2, $a2
    ctx->r6 = ADD32(ctx->r18, ctx->r6);
    // 0x80052FAC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_80052FB0:
    // 0x80052FB0: jal         0x80053318
    // 0x80052FB4: nop

    func_80053318_2E718(rdram, ctx);
        goto after_11;
    // 0x80052FB4: nop

    after_11:
L_80052FB8:
    // 0x80052FB8: bltz        $s7, L_80052FF0
    if (SIGNED(ctx->r23) < 0) {
        // 0x80052FBC: nop
    
            goto L_80052FF0;
    }
    // 0x80052FBC: nop

    // 0x80052FC0: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80052FC4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80052FC8: beq         $v0, $zero, L_80053024
    if (ctx->r2 == 0) {
        // 0x80052FCC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80053024;
    }
    // 0x80052FCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80052FD0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80052FD4: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80052FD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80052FDC: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80052FE0: addiu       $a2, $a2, 0x49B0
    ctx->r6 = ADD32(ctx->r6, 0X49B0);
    // 0x80052FE4: addu        $a2, $s2, $a2
    ctx->r6 = ADD32(ctx->r18, ctx->r6);
    // 0x80052FE8: j           L_8005301C
    // 0x80052FEC: addu        $a3, $s7, $zero
    ctx->r7 = ADD32(ctx->r23, 0);
        goto L_8005301C;
    // 0x80052FEC: addu        $a3, $s7, $zero
    ctx->r7 = ADD32(ctx->r23, 0);
L_80052FF0:
    // 0x80052FF0: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80052FF4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80052FF8: beq         $v0, $zero, L_80053024
    if (ctx->r2 == 0) {
        // 0x80052FFC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80053024;
    }
    // 0x80052FFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80053000: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80053004: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80053008: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8005300C: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80053010: addiu       $a2, $a2, 0x49B0
    ctx->r6 = ADD32(ctx->r6, 0X49B0);
    // 0x80053014: addu        $a2, $s2, $a2
    ctx->r6 = ADD32(ctx->r18, ctx->r6);
    // 0x80053018: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_8005301C:
    // 0x8005301C: jal         0x80053318
    // 0x80053020: nop

    func_80053318_2E718(rdram, ctx);
        goto after_12;
    // 0x80053020: nop

    after_12:
L_80053024:
    // 0x80053024: addiu       $s3, $s3, 0x5F4
    ctx->r19 = ADD32(ctx->r19, 0X5F4);
    // 0x80053028: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005302C: addiu       $v0, $v0, 0x4B24
    ctx->r2 = ADD32(ctx->r2, 0X4B24);
    // 0x80053030: beq         $s3, $v0, L_80052B68
    if (ctx->r19 == ctx->r2) {
        // 0x80053034: addiu       $s2, $s2, 0x5F4
        ctx->r18 = ADD32(ctx->r18, 0X5F4);
            goto L_80052B68;
    }
    // 0x80053034: addiu       $s2, $s2, 0x5F4
    ctx->r18 = ADD32(ctx->r18, 0X5F4);
    // 0x80053038: lw          $ra, 0xA4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA4);
    // 0x8005303C: lw          $fp, 0xA0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XA0);
    // 0x80053040: lw          $s7, 0x9C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X9C);
    // 0x80053044: lw          $s6, 0x98($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X98);
    // 0x80053048: lw          $s5, 0x94($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X94);
    // 0x8005304C: lw          $s4, 0x90($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X90);
    // 0x80053050: lw          $s3, 0x8C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X8C);
    // 0x80053054: lw          $s2, 0x88($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X88);
    // 0x80053058: lw          $s1, 0x84($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X84);
    // 0x8005305C: lw          $s0, 0x80($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X80);
    // 0x80053060: jr          $ra
    // 0x80053064: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    TRACE_RETURN()
    return;
    // 0x80053064: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_8004F488_2A888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004F488: lui         $v1, 0x5A45
    ctx->r3 = S32(0X5A45 << 16);
    // 0x8004F48C: ori         $v1, $v1, 0x1CEB
    ctx->r3 = ctx->r3 | 0X1CEB;
    // 0x8004F490: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004F494: addiu       $v0, $v0, -0x5F40
    ctx->r2 = ADD32(ctx->r2, -0X5F40);
    // 0x8004F498: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x8004F49C: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x8004F4A0: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004F4A4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8004F4A8: lw          $v0, -0x2408($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2408);
    // 0x8004F4AC: lui         $a2, 0x801E
    ctx->r6 = S32(0X801E << 16);
    // 0x8004F4B0: lw          $a2, -0x7798($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X7798);
    // 0x8004F4B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004F4B8: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x8004F4BC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8004F4C0: mfhi        $a3
    ctx->r7 = hi;
    // 0x8004F4C4: srl         $a1, $a3, 7
    ctx->r5 = S32(U32(ctx->r7) >> 7);
    // 0x8004F4C8: srlv        $v1, $v1, $a1
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r5 & 31));
    // 0x8004F4CC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8004F4D0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8004F4D4: sw          $v0, -0x2408($at)
    MEM_W(-0X2408, ctx->r1) = ctx->r2;
    // 0x8004F4D8: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x8004F4DC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8004F4E0: sw          $v0, -0x2408($at)
    MEM_W(-0X2408, ctx->r1) = ctx->r2;
    // 0x8004F4E4: jal         0x80053530
    // 0x8004F4E8: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    func_80053530_2E930(rdram, ctx);
        goto after_0;
    // 0x8004F4E8: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    after_0:
    // 0x8004F4EC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8004F4F0: jr          $ra
    // 0x8004F4F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8004F4F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80068B54_43F54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80068B54: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80068B58: lbu         $v1, 0x7D($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X7D);
    // 0x80068B5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80068B60: beq         $v1, $v0, L_80068BF4
    if (ctx->r3 == ctx->r2) {
        // 0x80068B64: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80068BF4;
    }
    // 0x80068B64: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80068B68: beql        $v0, $zero, L_80068B80
    if (ctx->r2 == 0) {
        // 0x80068B6C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80068B80;
    }
    goto skip_0;
    // 0x80068B6C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80068B70: beq         $v1, $zero, L_80068B90
    if (ctx->r3 == 0) {
        // 0x80068B74: addiu       $v1, $zero, 0x140
        ctx->r3 = ADD32(0, 0X140);
            goto L_80068B90;
    }
    // 0x80068B74: addiu       $v1, $zero, 0x140
    ctx->r3 = ADD32(0, 0X140);
    // 0x80068B78: j           L_80068CC8
    // 0x80068B7C: nop

        goto L_80068CC8;
    // 0x80068B7C: nop

L_80068B80:
    // 0x80068B80: beq         $v1, $v0, L_80068C78
    if (ctx->r3 == ctx->r2) {
        // 0x80068B84: nop
    
            goto L_80068C78;
    }
    // 0x80068B84: nop

    // 0x80068B88: j           L_80068CC8
    // 0x80068B8C: nop

        goto L_80068CC8;
    // 0x80068B8C: nop

L_80068B90:
    // 0x80068B90: lbu         $a1, 0x7D($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0X7D);
    // 0x80068B94: sh          $v1, 0x8C($a3)
    MEM_H(0X8C, ctx->r7) = ctx->r3;
    // 0x80068B98: sh          $v1, 0x94($a3)
    MEM_H(0X94, ctx->r7) = ctx->r3;
    // 0x80068B9C: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80068BA0: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x80068BA4: sh          $v0, 0x92($a3)
    MEM_H(0X92, ctx->r7) = ctx->r2;
    // 0x80068BA8: sh          $v0, 0x96($a3)
    MEM_H(0X96, ctx->r7) = ctx->r2;
    // 0x80068BAC: lui         $v0, 0x1400
    ctx->r2 = S32(0X1400 << 16);
    // 0x80068BB0: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x80068BB4: sb          $zero, 0xB0($a3)
    MEM_B(0XB0, ctx->r7) = 0;
    // 0x80068BB8: sb          $zero, 0xB1($a3)
    MEM_B(0XB1, ctx->r7) = 0;
    // 0x80068BBC: sb          $zero, 0xB2($a3)
    MEM_B(0XB2, ctx->r7) = 0;
    // 0x80068BC0: sh          $zero, 0x88($a3)
    MEM_H(0X88, ctx->r7) = 0;
    // 0x80068BC4: sh          $zero, 0x8A($a3)
    MEM_H(0X8A, ctx->r7) = 0;
    // 0x80068BC8: sh          $zero, 0x8E($a3)
    MEM_H(0X8E, ctx->r7) = 0;
    // 0x80068BCC: sh          $zero, 0x90($a3)
    MEM_H(0X90, ctx->r7) = 0;
    // 0x80068BD0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80068BD4: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x80068BD8: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80068BDC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80068BE0: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x80068BE4: sw          $v1, 0x80($a3)
    MEM_W(0X80, ctx->r7) = ctx->r3;
    // 0x80068BE8: sb          $a1, 0x7D($a3)
    MEM_B(0X7D, ctx->r7) = ctx->r5;
    // 0x80068BEC: j           L_80068CC4
    // 0x80068BF0: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
        goto L_80068CC4;
    // 0x80068BF0: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
L_80068BF4:
    // 0x80068BF4: lbu         $v0, 0xB0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0XB0);
    // 0x80068BF8: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80068BFC: lbu         $a0, 0xB1($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0XB1);
    // 0x80068C00: lbu         $a1, 0xB2($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0XB2);
    // 0x80068C04: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80068C08: sb          $v0, 0xB0($a3)
    MEM_B(0XB0, ctx->r7) = ctx->r2;
    // 0x80068C0C: lbu         $a2, 0xB0($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0XB0);
    // 0x80068C10: lui         $v0, 0x1000
    ctx->r2 = S32(0X1000 << 16);
    // 0x80068C14: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80068C18: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80068C1C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80068C20: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80068C24: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x80068C28: sb          $a0, 0xB1($a3)
    MEM_B(0XB1, ctx->r7) = ctx->r4;
    // 0x80068C2C: bne         $a2, $v0, L_80068CC8
    if (ctx->r6 != ctx->r2) {
        // 0x80068C30: sb          $a1, 0xB2($a3)
        MEM_B(0XB2, ctx->r7) = ctx->r5;
            goto L_80068CC8;
    }
    // 0x80068C30: sb          $a1, 0xB2($a3)
    MEM_B(0XB2, ctx->r7) = ctx->r5;
    // 0x80068C34: lui         $a2, 0xF7FF
    ctx->r6 = S32(0XF7FF << 16);
    // 0x80068C38: lbu         $a1, 0x7D($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0X7D);
    // 0x80068C3C: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80068C40: lui         $v1, 0x1200
    ctx->r3 = S32(0X1200 << 16);
    // 0x80068C44: lw          $a0, 0x80($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X80);
    // 0x80068C48: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80068C4C: lw          $v1, 0x6C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X6C);
    // 0x80068C50: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x80068C54: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80068C58: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x80068C5C: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x80068C60: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80068C64: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x80068C68: sb          $a1, 0x7D($a3)
    MEM_B(0X7D, ctx->r7) = ctx->r5;
    // 0x80068C6C: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x80068C70: j           L_80068CC8
    // 0x80068C74: sw          $v1, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->r3;
        goto L_80068CC8;
    // 0x80068C74: sw          $v1, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->r3;
L_80068C78:
    // 0x80068C78: lbu         $v0, 0xB0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0XB0);
    // 0x80068C7C: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80068C80: lbu         $a0, 0xB1($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0XB1);
    // 0x80068C84: lbu         $a1, 0xB2($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0XB2);
    // 0x80068C88: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x80068C8C: sb          $v0, 0xB0($a3)
    MEM_B(0XB0, ctx->r7) = ctx->r2;
    // 0x80068C90: lbu         $a2, 0xB0($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0XB0);
    // 0x80068C94: lui         $v0, 0x1000
    ctx->r2 = S32(0X1000 << 16);
    // 0x80068C98: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80068C9C: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    // 0x80068CA0: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
    // 0x80068CA4: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x80068CA8: sb          $a0, 0xB1($a3)
    MEM_B(0XB1, ctx->r7) = ctx->r4;
    // 0x80068CAC: bne         $a2, $zero, L_80068CC8
    if (ctx->r6 != 0) {
        // 0x80068CB0: sb          $a1, 0xB2($a3)
        MEM_B(0XB2, ctx->r7) = ctx->r5;
            goto L_80068CC8;
    }
    // 0x80068CB0: sb          $a1, 0xB2($a3)
    MEM_B(0XB2, ctx->r7) = ctx->r5;
    // 0x80068CB4: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80068CB8: lui         $v1, 0xF9FF
    ctx->r3 = S32(0XF9FF << 16);
    // 0x80068CBC: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80068CC0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_80068CC4:
    // 0x80068CC4: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
L_80068CC8:
    // 0x80068CC8: jr          $ra
    // 0x80068CCC: nop

    TRACE_RETURN()
    return;
    // 0x80068CCC: nop

;}
RECOMP_FUNC void func_80081A90_5CE90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80081A90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80081A94: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80081A98: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80081A9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80081AA0: lbu         $a1, 0x2($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X2);
    // 0x80081AA4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80081AA8: bne         $a1, $a2, L_80081B08
    if (ctx->r5 != ctx->r6) {
        // 0x80081AAC: addiu       $a3, $zero, 0x6
        ctx->r7 = ADD32(0, 0X6);
            goto L_80081B08;
    }
    // 0x80081AAC: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x80081AB0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80081AB4: lw          $v1, 0x442C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X442C);
    // 0x80081AB8: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80081ABC: lw          $a0, -0x26E8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X26E8);
    // 0x80081AC0: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x80081AC4: lw          $a1, -0x72A8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X72A8);
    // 0x80081AC8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80081ACC: addiu       $v0, $v0, -0x7C50
    ctx->r2 = ADD32(ctx->r2, -0X7C50);
    // 0x80081AD0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081AD4: sw          $v0, -0x3D38($at)
    MEM_W(-0X3D38, ctx->r1) = ctx->r2;
    // 0x80081AD8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081ADC: sh          $zero, -0x3D60($at)
    MEM_H(-0X3D60, ctx->r1) = 0;
    // 0x80081AE0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081AE4: sh          $zero, -0x3D5E($at)
    MEM_H(-0X3D5E, ctx->r1) = 0;
    // 0x80081AE8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081AEC: sw          $v1, -0x3D40($at)
    MEM_W(-0X3D40, ctx->r1) = ctx->r3;
    // 0x80081AF0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081AF4: sw          $a0, -0x3D3C($at)
    MEM_W(-0X3D3C, ctx->r1) = ctx->r4;
    // 0x80081AF8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081AFC: sw          $a1, -0x3D34($at)
    MEM_W(-0X3D34, ctx->r1) = ctx->r5;
    // 0x80081B00: j           L_80082C5C
    // 0x80081B04: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80082C5C;
    // 0x80081B04: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80081B08:
    // 0x80081B08: bne         $a1, $a3, L_80081EA4
    if (ctx->r5 != ctx->r7) {
        // 0x80081B0C: addiu       $t0, $zero, 0x9
        ctx->r8 = ADD32(0, 0X9);
            goto L_80081EA4;
    }
    // 0x80081B0C: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x80081B10: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081B14: sh          $zero, -0x3D5C($at)
    MEM_H(-0X3D5C, ctx->r1) = 0;
    // 0x80081B18: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081B1C: sh          $zero, -0x3D5A($at)
    MEM_H(-0X3D5A, ctx->r1) = 0;
    // 0x80081B20: lbu         $a0, 0x0($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X0);
    // 0x80081B24: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80081B28: beq         $a0, $v0, L_80081E00
    if (ctx->r4 == ctx->r2) {
        // 0x80081B2C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80081E00;
    }
    // 0x80081B2C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80081B30: bne         $a0, $v0, L_80081BA8
    if (ctx->r4 != ctx->r2) {
        // 0x80081B34: nop
    
            goto L_80081BA8;
    }
    // 0x80081B34: nop

    // 0x80081B38: lui         $s0, 0x4F
    ctx->r16 = S32(0X4F << 16);
    // 0x80081B3C: addiu       $s0, $s0, -0xD70
    ctx->r16 = ADD32(ctx->r16, -0XD70);
    // 0x80081B40: lui         $s1, 0x4F
    ctx->r17 = S32(0X4F << 16);
    // 0x80081B44: addiu       $s1, $s1, 0x2860
    ctx->r17 = ADD32(ctx->r17, 0X2860);
    // 0x80081B48: jal         0x80025E1C
    // 0x80081B4C: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_0;
    // 0x80081B4C: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_0:
    // 0x80081B50: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80081B54: sw          $v0, 0x624C($at)
    MEM_W(0X624C, ctx->r1) = ctx->r2;
    // 0x80081B58: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x80081B5C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x80081B5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80081B60: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80081B64: jal         0x8002724C
    // 0x80081B68: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_1;
    // 0x80081B68: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80081B6C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80081B70: lw          $v1, 0x624C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X624C);
    // 0x80081B74: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80081B78: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081B7C: sh          $v0, -0x3D6E($at)
    MEM_H(-0X3D6E, ctx->r1) = ctx->r2;
    // 0x80081B80: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80081B84: addiu       $v0, $v0, 0x3CCC
    ctx->r2 = ADD32(ctx->r2, 0X3CCC);
    // 0x80081B88: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081B8C: sw          $v0, -0x3D28($at)
    MEM_W(-0X3D28, ctx->r1) = ctx->r2;
    // 0x80081B90: addiu       $v0, $v0, 0xA8
    ctx->r2 = ADD32(ctx->r2, 0XA8);
    // 0x80081B94: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081B98: sw          $v0, -0x3D24($at)
    MEM_W(-0X3D24, ctx->r1) = ctx->r2;
    // 0x80081B9C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80081BA0: j           L_80081E6C
    // 0x80081BA4: addiu       $v0, $v0, -0x11B8
    ctx->r2 = ADD32(ctx->r2, -0X11B8);
        goto L_80081E6C;
    // 0x80081BA4: addiu       $v0, $v0, -0x11B8
    ctx->r2 = ADD32(ctx->r2, -0X11B8);
L_80081BA8:
    // 0x80081BA8: bne         $a0, $a2, L_80081C20
    if (ctx->r4 != ctx->r6) {
        // 0x80081BAC: nop
    
            goto L_80081C20;
    }
    // 0x80081BAC: nop

    // 0x80081BB0: lui         $s0, 0x4F
    ctx->r16 = S32(0X4F << 16);
    // 0x80081BB4: addiu       $s0, $s0, 0x2860
    ctx->r16 = ADD32(ctx->r16, 0X2860);
    // 0x80081BB8: lui         $s1, 0x4F
    ctx->r17 = S32(0X4F << 16);
    // 0x80081BBC: addiu       $s1, $s1, 0x4D40
    ctx->r17 = ADD32(ctx->r17, 0X4D40);
    // 0x80081BC0: jal         0x80025E1C
    // 0x80081BC4: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_2;
    // 0x80081BC4: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_2:
    // 0x80081BC8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80081BCC: sw          $v0, 0x624C($at)
    MEM_W(0X624C, ctx->r1) = ctx->r2;
    // 0x80081BD0: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x80081BD4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x80081BD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80081BD8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80081BDC: jal         0x8002724C
    // 0x80081BE0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_3;
    // 0x80081BE0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
    // 0x80081BE4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80081BE8: lw          $v1, 0x624C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X624C);
    // 0x80081BEC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80081BF0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081BF4: sh          $v0, -0x3D6E($at)
    MEM_H(-0X3D6E, ctx->r1) = ctx->r2;
    // 0x80081BF8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80081BFC: addiu       $v0, $v0, 0x3E1C
    ctx->r2 = ADD32(ctx->r2, 0X3E1C);
    // 0x80081C00: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081C04: sw          $v0, -0x3D28($at)
    MEM_W(-0X3D28, ctx->r1) = ctx->r2;
    // 0x80081C08: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x80081C0C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081C10: sw          $v0, -0x3D24($at)
    MEM_W(-0X3D24, ctx->r1) = ctx->r2;
    // 0x80081C14: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80081C18: j           L_80081E6C
    // 0x80081C1C: addiu       $v0, $v0, -0x1068
    ctx->r2 = ADD32(ctx->r2, -0X1068);
        goto L_80081E6C;
    // 0x80081C1C: addiu       $v0, $v0, -0x1068
    ctx->r2 = ADD32(ctx->r2, -0X1068);
L_80081C20:
    // 0x80081C20: bne         $a0, $a3, L_80081C98
    if (ctx->r4 != ctx->r7) {
        // 0x80081C24: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80081C98;
    }
    // 0x80081C24: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80081C28: lui         $s0, 0x4F
    ctx->r16 = S32(0X4F << 16);
    // 0x80081C2C: addiu       $s0, $s0, 0x4D40
    ctx->r16 = ADD32(ctx->r16, 0X4D40);
    // 0x80081C30: lui         $s1, 0x4F
    ctx->r17 = S32(0X4F << 16);
    // 0x80081C34: addiu       $s1, $s1, 0x6E20
    ctx->r17 = ADD32(ctx->r17, 0X6E20);
    // 0x80081C38: jal         0x80025E1C
    // 0x80081C3C: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_4;
    // 0x80081C3C: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_4:
    // 0x80081C40: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80081C44: sw          $v0, 0x624C($at)
    MEM_W(0X624C, ctx->r1) = ctx->r2;
    // 0x80081C48: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x80081C4C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x80081C4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80081C50: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80081C54: jal         0x8002724C
    // 0x80081C58: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_5;
    // 0x80081C58: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_5:
    // 0x80081C5C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80081C60: lw          $v1, 0x624C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X624C);
    // 0x80081C64: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80081C68: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081C6C: sh          $v0, -0x3D6E($at)
    MEM_H(-0X3D6E, ctx->r1) = ctx->r2;
    // 0x80081C70: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80081C74: addiu       $v0, $v0, 0x3F0C
    ctx->r2 = ADD32(ctx->r2, 0X3F0C);
    // 0x80081C78: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081C7C: sw          $v0, -0x3D28($at)
    MEM_W(-0X3D28, ctx->r1) = ctx->r2;
    // 0x80081C80: addiu       $v0, $v0, 0x70
    ctx->r2 = ADD32(ctx->r2, 0X70);
    // 0x80081C84: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081C88: sw          $v0, -0x3D24($at)
    MEM_W(-0X3D24, ctx->r1) = ctx->r2;
    // 0x80081C8C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80081C90: j           L_80081E6C
    // 0x80081C94: addiu       $v0, $v0, -0xF78
    ctx->r2 = ADD32(ctx->r2, -0XF78);
        goto L_80081E6C;
    // 0x80081C94: addiu       $v0, $v0, -0xF78
    ctx->r2 = ADD32(ctx->r2, -0XF78);
L_80081C98:
    // 0x80081C98: bne         $a0, $v0, L_80081D10
    if (ctx->r4 != ctx->r2) {
        // 0x80081C9C: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80081D10;
    }
    // 0x80081C9C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80081CA0: lui         $s0, 0x4F
    ctx->r16 = S32(0X4F << 16);
    // 0x80081CA4: addiu       $s0, $s0, 0x6E20
    ctx->r16 = ADD32(ctx->r16, 0X6E20);
    // 0x80081CA8: lui         $s1, 0x50
    ctx->r17 = S32(0X50 << 16);
    // 0x80081CAC: addiu       $s1, $s1, -0x5A60
    ctx->r17 = ADD32(ctx->r17, -0X5A60);
    // 0x80081CB0: jal         0x80025E1C
    // 0x80081CB4: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_6;
    // 0x80081CB4: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_6:
    // 0x80081CB8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80081CBC: sw          $v0, 0x624C($at)
    MEM_W(0X624C, ctx->r1) = ctx->r2;
    // 0x80081CC0: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x80081CC4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x80081CC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80081CC8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80081CCC: jal         0x8002724C
    // 0x80081CD0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_7;
    // 0x80081CD0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_7:
    // 0x80081CD4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80081CD8: lw          $v1, 0x624C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X624C);
    // 0x80081CDC: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x80081CE0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081CE4: sh          $v0, -0x3D6E($at)
    MEM_H(-0X3D6E, ctx->r1) = ctx->r2;
    // 0x80081CE8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80081CEC: addiu       $v0, $v0, 0x3FEC
    ctx->r2 = ADD32(ctx->r2, 0X3FEC);
    // 0x80081CF0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081CF4: sw          $v0, -0x3D28($at)
    MEM_W(-0X3D28, ctx->r1) = ctx->r2;
    // 0x80081CF8: addiu       $v0, $v0, 0xB8
    ctx->r2 = ADD32(ctx->r2, 0XB8);
    // 0x80081CFC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081D00: sw          $v0, -0x3D24($at)
    MEM_W(-0X3D24, ctx->r1) = ctx->r2;
    // 0x80081D04: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80081D08: j           L_80081E6C
    // 0x80081D0C: addiu       $v0, $v0, -0xE98
    ctx->r2 = ADD32(ctx->r2, -0XE98);
        goto L_80081E6C;
    // 0x80081D0C: addiu       $v0, $v0, -0xE98
    ctx->r2 = ADD32(ctx->r2, -0XE98);
L_80081D10:
    // 0x80081D10: bne         $a0, $v0, L_80081D88
    if (ctx->r4 != ctx->r2) {
        // 0x80081D14: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80081D88;
    }
    // 0x80081D14: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80081D18: lui         $s0, 0x50
    ctx->r16 = S32(0X50 << 16);
    // 0x80081D1C: addiu       $s0, $s0, -0x5A60
    ctx->r16 = ADD32(ctx->r16, -0X5A60);
    // 0x80081D20: lui         $s1, 0x50
    ctx->r17 = S32(0X50 << 16);
    // 0x80081D24: addiu       $s1, $s1, -0x46E0
    ctx->r17 = ADD32(ctx->r17, -0X46E0);
    // 0x80081D28: jal         0x80025E1C
    // 0x80081D2C: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_8;
    // 0x80081D2C: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_8:
    // 0x80081D30: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80081D34: sw          $v0, 0x624C($at)
    MEM_W(0X624C, ctx->r1) = ctx->r2;
    // 0x80081D38: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x80081D3C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x80081D3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80081D40: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80081D44: jal         0x8002724C
    // 0x80081D48: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_9;
    // 0x80081D48: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_9:
    // 0x80081D4C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80081D50: lw          $v1, 0x624C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X624C);
    // 0x80081D54: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80081D58: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081D5C: sh          $v0, -0x3D6E($at)
    MEM_H(-0X3D6E, ctx->r1) = ctx->r2;
    // 0x80081D60: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80081D64: addiu       $v0, $v0, 0x415C
    ctx->r2 = ADD32(ctx->r2, 0X415C);
    // 0x80081D68: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081D6C: sw          $v0, -0x3D28($at)
    MEM_W(-0X3D28, ctx->r1) = ctx->r2;
    // 0x80081D70: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x80081D74: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081D78: sw          $v0, -0x3D24($at)
    MEM_W(-0X3D24, ctx->r1) = ctx->r2;
    // 0x80081D7C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80081D80: j           L_80081E6C
    // 0x80081D84: addiu       $v0, $v0, -0xD28
    ctx->r2 = ADD32(ctx->r2, -0XD28);
        goto L_80081E6C;
    // 0x80081D84: addiu       $v0, $v0, -0xD28
    ctx->r2 = ADD32(ctx->r2, -0XD28);
L_80081D88:
    // 0x80081D88: bne         $a0, $v0, L_80081E00
    if (ctx->r4 != ctx->r2) {
        // 0x80081D8C: nop
    
            goto L_80081E00;
    }
    // 0x80081D8C: nop

    // 0x80081D90: lui         $s0, 0x50
    ctx->r16 = S32(0X50 << 16);
    // 0x80081D94: addiu       $s0, $s0, -0x46E0
    ctx->r16 = ADD32(ctx->r16, -0X46E0);
    // 0x80081D98: lui         $s1, 0x50
    ctx->r17 = S32(0X50 << 16);
    // 0x80081D9C: addiu       $s1, $s1, -0x13E0
    ctx->r17 = ADD32(ctx->r17, -0X13E0);
    // 0x80081DA0: jal         0x80025E1C
    // 0x80081DA4: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_10;
    // 0x80081DA4: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_10:
    // 0x80081DA8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80081DAC: sw          $v0, 0x624C($at)
    MEM_W(0X624C, ctx->r1) = ctx->r2;
    // 0x80081DB0: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x80081DB4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x80081DB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80081DB8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80081DBC: jal         0x8002724C
    // 0x80081DC0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_11;
    // 0x80081DC0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_11:
    // 0x80081DC4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80081DC8: lw          $v1, 0x624C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X624C);
    // 0x80081DCC: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80081DD0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081DD4: sh          $v0, -0x3D6E($at)
    MEM_H(-0X3D6E, ctx->r1) = ctx->r2;
    // 0x80081DD8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80081DDC: addiu       $v0, $v0, 0x41DC
    ctx->r2 = ADD32(ctx->r2, 0X41DC);
    // 0x80081DE0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081DE4: sw          $v0, -0x3D28($at)
    MEM_W(-0X3D28, ctx->r1) = ctx->r2;
    // 0x80081DE8: addiu       $v0, $v0, 0xA8
    ctx->r2 = ADD32(ctx->r2, 0XA8);
    // 0x80081DEC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081DF0: sw          $v0, -0x3D24($at)
    MEM_W(-0X3D24, ctx->r1) = ctx->r2;
    // 0x80081DF4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80081DF8: j           L_80081E6C
    // 0x80081DFC: addiu       $v0, $v0, -0xCA8
    ctx->r2 = ADD32(ctx->r2, -0XCA8);
        goto L_80081E6C;
    // 0x80081DFC: addiu       $v0, $v0, -0xCA8
    ctx->r2 = ADD32(ctx->r2, -0XCA8);
L_80081E00:
    // 0x80081E00: lui         $s0, 0x4F
    ctx->r16 = S32(0X4F << 16);
    // 0x80081E04: addiu       $s0, $s0, -0x3230
    ctx->r16 = ADD32(ctx->r16, -0X3230);
    // 0x80081E08: lui         $s1, 0x4F
    ctx->r17 = S32(0X4F << 16);
    // 0x80081E0C: addiu       $s1, $s1, -0xD70
    ctx->r17 = ADD32(ctx->r17, -0XD70);
    // 0x80081E10: jal         0x80025E1C
    // 0x80081E14: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_12;
    // 0x80081E14: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_12:
    // 0x80081E18: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80081E1C: sw          $v0, 0x624C($at)
    MEM_W(0X624C, ctx->r1) = ctx->r2;
    // 0x80081E20: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x80081E24: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x80081E24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80081E28: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80081E2C: jal         0x8002724C
    // 0x80081E30: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_13;
    // 0x80081E30: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_13:
    // 0x80081E34: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80081E38: lw          $v1, 0x624C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X624C);
    // 0x80081E3C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80081E40: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081E44: sh          $v0, -0x3D6E($at)
    MEM_H(-0X3D6E, ctx->r1) = ctx->r2;
    // 0x80081E48: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80081E4C: addiu       $v0, $v0, 0x3BDC
    ctx->r2 = ADD32(ctx->r2, 0X3BDC);
    // 0x80081E50: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081E54: sw          $v0, -0x3D28($at)
    MEM_W(-0X3D28, ctx->r1) = ctx->r2;
    // 0x80081E58: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x80081E5C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081E60: sw          $v0, -0x3D24($at)
    MEM_W(-0X3D24, ctx->r1) = ctx->r2;
    // 0x80081E64: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80081E68: addiu       $v0, $v0, -0x12A8
    ctx->r2 = ADD32(ctx->r2, -0X12A8);
L_80081E6C:
    // 0x80081E6C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081E70: sw          $v0, -0x3D1C($at)
    MEM_W(-0X3D1C, ctx->r1) = ctx->r2;
    // 0x80081E74: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081E78: sw          $v1, -0x3D20($at)
    MEM_W(-0X3D20, ctx->r1) = ctx->r3;
    // 0x80081E7C: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80081E80: lhu         $v1, -0x3D6E($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3D6E);
    // 0x80081E84: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80081E88: lw          $v0, 0x624C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X624C);
    // 0x80081E8C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80081E90: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081E94: sh          $v1, -0x3D5C($at)
    MEM_H(-0X3D5C, ctx->r1) = ctx->r3;
    // 0x80081E98: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081E9C: j           L_80082C5C
    // 0x80081EA0: sh          $v1, -0x3D5A($at)
    MEM_H(-0X3D5A, ctx->r1) = ctx->r3;
        goto L_80082C5C;
    // 0x80081EA0: sh          $v1, -0x3D5A($at)
    MEM_H(-0X3D5A, ctx->r1) = ctx->r3;
L_80081EA4:
    // 0x80081EA4: bne         $a1, $t0, L_80082390
    if (ctx->r5 != ctx->r8) {
        // 0x80081EA8: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80082390;
    }
    // 0x80081EA8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80081EAC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081EB0: sh          $zero, -0x3D58($at)
    MEM_H(-0X3D58, ctx->r1) = 0;
    // 0x80081EB4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081EB8: sh          $zero, -0x3D56($at)
    MEM_H(-0X3D56, ctx->r1) = 0;
    // 0x80081EBC: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80081EC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80081EC4: beq         $v1, $v0, L_80082308
    if (ctx->r3 == ctx->r2) {
        // 0x80081EC8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80082308;
    }
    // 0x80081EC8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80081ECC: bne         $v1, $v0, L_80081F44
    if (ctx->r3 != ctx->r2) {
        // 0x80081ED0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80081F44;
    }
    // 0x80081ED0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80081ED4: lui         $s0, 0x50
    ctx->r16 = S32(0X50 << 16);
    // 0x80081ED8: addiu       $s0, $s0, 0x18D0
    ctx->r16 = ADD32(ctx->r16, 0X18D0);
    // 0x80081EDC: lui         $s1, 0x50
    ctx->r17 = S32(0X50 << 16);
    // 0x80081EE0: addiu       $s1, $s1, 0x4930
    ctx->r17 = ADD32(ctx->r17, 0X4930);
    // 0x80081EE4: jal         0x80025E1C
    // 0x80081EE8: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_14;
    // 0x80081EE8: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_14:
    // 0x80081EEC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80081EF0: sw          $v0, 0x6250($at)
    MEM_W(0X6250, ctx->r1) = ctx->r2;
    // 0x80081EF4: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x80081EF8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x80081EF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80081EFC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80081F00: jal         0x8002724C
    // 0x80081F04: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_15;
    // 0x80081F04: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_15:
    // 0x80081F08: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80081F0C: lw          $v1, 0x6250($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6250);
    // 0x80081F10: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80081F14: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081F18: sh          $v0, -0x3D6C($at)
    MEM_H(-0X3D6C, ctx->r1) = ctx->r2;
    // 0x80081F1C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80081F20: addiu       $v0, $v0, 0x446C
    ctx->r2 = ADD32(ctx->r2, 0X446C);
    // 0x80081F24: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081F28: sw          $v0, -0x3D10($at)
    MEM_W(-0X3D10, ctx->r1) = ctx->r2;
    // 0x80081F2C: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x80081F30: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081F34: sw          $v0, -0x3D0C($at)
    MEM_W(-0X3D0C, ctx->r1) = ctx->r2;
    // 0x80081F38: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80081F3C: j           L_80082374
    // 0x80081F40: addiu       $v0, $v0, -0xA18
    ctx->r2 = ADD32(ctx->r2, -0XA18);
        goto L_80082374;
    // 0x80081F40: addiu       $v0, $v0, -0xA18
    ctx->r2 = ADD32(ctx->r2, -0XA18);
L_80081F44:
    // 0x80081F44: bne         $v1, $v0, L_80081FBC
    if (ctx->r3 != ctx->r2) {
        // 0x80081F48: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80081FBC;
    }
    // 0x80081F48: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80081F4C: lui         $s0, 0x50
    ctx->r16 = S32(0X50 << 16);
    // 0x80081F50: addiu       $s0, $s0, 0x4930
    ctx->r16 = ADD32(ctx->r16, 0X4930);
    // 0x80081F54: lui         $s1, 0x50
    ctx->r17 = S32(0X50 << 16);
    // 0x80081F58: addiu       $s1, $s1, 0x5D20
    ctx->r17 = ADD32(ctx->r17, 0X5D20);
    // 0x80081F5C: jal         0x80025E1C
    // 0x80081F60: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_16;
    // 0x80081F60: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_16:
    // 0x80081F64: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80081F68: sw          $v0, 0x6250($at)
    MEM_W(0X6250, ctx->r1) = ctx->r2;
    // 0x80081F6C: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x80081F70: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x80081F70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80081F74: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80081F78: jal         0x8002724C
    // 0x80081F7C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_17;
    // 0x80081F7C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_17:
    // 0x80081F80: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80081F84: lw          $v1, 0x6250($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6250);
    // 0x80081F88: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80081F8C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081F90: sh          $v0, -0x3D6C($at)
    MEM_H(-0X3D6C, ctx->r1) = ctx->r2;
    // 0x80081F94: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80081F98: addiu       $v0, $v0, 0x45AC
    ctx->r2 = ADD32(ctx->r2, 0X45AC);
    // 0x80081F9C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081FA0: sw          $v0, -0x3D10($at)
    MEM_W(-0X3D10, ctx->r1) = ctx->r2;
    // 0x80081FA4: addiu       $v0, $v0, 0x48
    ctx->r2 = ADD32(ctx->r2, 0X48);
    // 0x80081FA8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081FAC: sw          $v0, -0x3D0C($at)
    MEM_W(-0X3D0C, ctx->r1) = ctx->r2;
    // 0x80081FB0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80081FB4: j           L_80082374
    // 0x80081FB8: addiu       $v0, $v0, -0x8D8
    ctx->r2 = ADD32(ctx->r2, -0X8D8);
        goto L_80082374;
    // 0x80081FB8: addiu       $v0, $v0, -0x8D8
    ctx->r2 = ADD32(ctx->r2, -0X8D8);
L_80081FBC:
    // 0x80081FBC: bne         $v1, $v0, L_80082034
    if (ctx->r3 != ctx->r2) {
        // 0x80081FC0: nop
    
            goto L_80082034;
    }
    // 0x80081FC0: nop

    // 0x80081FC4: lui         $s0, 0x50
    ctx->r16 = S32(0X50 << 16);
    // 0x80081FC8: addiu       $s0, $s0, 0x5D20
    ctx->r16 = ADD32(ctx->r16, 0X5D20);
    // 0x80081FCC: lui         $s1, 0x51
    ctx->r17 = S32(0X51 << 16);
    // 0x80081FD0: addiu       $s1, $s1, -0x7530
    ctx->r17 = ADD32(ctx->r17, -0X7530);
    // 0x80081FD4: jal         0x80025E1C
    // 0x80081FD8: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_18;
    // 0x80081FD8: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_18:
    // 0x80081FDC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80081FE0: sw          $v0, 0x6250($at)
    MEM_W(0X6250, ctx->r1) = ctx->r2;
    // 0x80081FE4: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x80081FE8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x80081FE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80081FEC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80081FF0: jal         0x8002724C
    // 0x80081FF4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_19;
    // 0x80081FF4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_19:
    // 0x80081FF8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80081FFC: lw          $v1, 0x6250($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6250);
    // 0x80082000: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x80082004: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082008: sh          $v0, -0x3D6C($at)
    MEM_H(-0X3D6C, ctx->r1) = ctx->r2;
    // 0x8008200C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082010: addiu       $v0, $v0, 0x463C
    ctx->r2 = ADD32(ctx->r2, 0X463C);
    // 0x80082014: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082018: sw          $v0, -0x3D10($at)
    MEM_W(-0X3D10, ctx->r1) = ctx->r2;
    // 0x8008201C: addiu       $v0, $v0, 0x98
    ctx->r2 = ADD32(ctx->r2, 0X98);
    // 0x80082020: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082024: sw          $v0, -0x3D0C($at)
    MEM_W(-0X3D0C, ctx->r1) = ctx->r2;
    // 0x80082028: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8008202C: j           L_80082374
    // 0x80082030: addiu       $v0, $v0, -0x848
    ctx->r2 = ADD32(ctx->r2, -0X848);
        goto L_80082374;
    // 0x80082030: addiu       $v0, $v0, -0x848
    ctx->r2 = ADD32(ctx->r2, -0X848);
L_80082034:
    // 0x80082034: bne         $v1, $a2, L_800820AC
    if (ctx->r3 != ctx->r6) {
        // 0x80082038: nop
    
            goto L_800820AC;
    }
    // 0x80082038: nop

    // 0x8008203C: lui         $s0, 0x51
    ctx->r16 = S32(0X51 << 16);
    // 0x80082040: addiu       $s0, $s0, -0x7530
    ctx->r16 = ADD32(ctx->r16, -0X7530);
    // 0x80082044: lui         $s1, 0x51
    ctx->r17 = S32(0X51 << 16);
    // 0x80082048: addiu       $s1, $s1, -0x4910
    ctx->r17 = ADD32(ctx->r17, -0X4910);
    // 0x8008204C: jal         0x80025E1C
    // 0x80082050: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_20;
    // 0x80082050: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_20:
    // 0x80082054: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80082058: sw          $v0, 0x6250($at)
    MEM_W(0X6250, ctx->r1) = ctx->r2;
    // 0x8008205C: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x80082060: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x80082060: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80082064: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80082068: jal         0x8002724C
    // 0x8008206C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_21;
    // 0x8008206C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_21:
    // 0x80082070: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80082074: lw          $v1, 0x6250($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6250);
    // 0x80082078: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8008207C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082080: sh          $v0, -0x3D6C($at)
    MEM_H(-0X3D6C, ctx->r1) = ctx->r2;
    // 0x80082084: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082088: addiu       $v0, $v0, 0x476C
    ctx->r2 = ADD32(ctx->r2, 0X476C);
    // 0x8008208C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082090: sw          $v0, -0x3D10($at)
    MEM_W(-0X3D10, ctx->r1) = ctx->r2;
    // 0x80082094: addiu       $v0, $v0, 0x98
    ctx->r2 = ADD32(ctx->r2, 0X98);
    // 0x80082098: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008209C: sw          $v0, -0x3D0C($at)
    MEM_W(-0X3D0C, ctx->r1) = ctx->r2;
    // 0x800820A0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800820A4: j           L_80082374
    // 0x800820A8: addiu       $v0, $v0, -0x718
    ctx->r2 = ADD32(ctx->r2, -0X718);
        goto L_80082374;
    // 0x800820A8: addiu       $v0, $v0, -0x718
    ctx->r2 = ADD32(ctx->r2, -0X718);
L_800820AC:
    // 0x800820AC: bne         $v1, $a3, L_80082124
    if (ctx->r3 != ctx->r7) {
        // 0x800820B0: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80082124;
    }
    // 0x800820B0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x800820B4: lui         $s0, 0x51
    ctx->r16 = S32(0X51 << 16);
    // 0x800820B8: addiu       $s0, $s0, -0x4910
    ctx->r16 = ADD32(ctx->r16, -0X4910);
    // 0x800820BC: lui         $s1, 0x51
    ctx->r17 = S32(0X51 << 16);
    // 0x800820C0: addiu       $s1, $s1, -0x2BF0
    ctx->r17 = ADD32(ctx->r17, -0X2BF0);
    // 0x800820C4: jal         0x80025E1C
    // 0x800820C8: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_22;
    // 0x800820C8: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_22:
    // 0x800820CC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x800820D0: sw          $v0, 0x6250($at)
    MEM_W(0X6250, ctx->r1) = ctx->r2;
    // 0x800820D4: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x800820D8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x800820D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800820DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x800820E0: jal         0x8002724C
    // 0x800820E4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_23;
    // 0x800820E4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_23:
    // 0x800820E8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x800820EC: lw          $v1, 0x6250($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6250);
    // 0x800820F0: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x800820F4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800820F8: sh          $v0, -0x3D6C($at)
    MEM_H(-0X3D6C, ctx->r1) = ctx->r2;
    // 0x800820FC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082100: addiu       $v0, $v0, 0x489C
    ctx->r2 = ADD32(ctx->r2, 0X489C);
    // 0x80082104: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082108: sw          $v0, -0x3D10($at)
    MEM_W(-0X3D10, ctx->r1) = ctx->r2;
    // 0x8008210C: addiu       $v0, $v0, 0x68
    ctx->r2 = ADD32(ctx->r2, 0X68);
    // 0x80082110: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082114: sw          $v0, -0x3D0C($at)
    MEM_W(-0X3D0C, ctx->r1) = ctx->r2;
    // 0x80082118: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8008211C: j           L_80082374
    // 0x80082120: addiu       $v0, $v0, -0x5E8
    ctx->r2 = ADD32(ctx->r2, -0X5E8);
        goto L_80082374;
    // 0x80082120: addiu       $v0, $v0, -0x5E8
    ctx->r2 = ADD32(ctx->r2, -0X5E8);
L_80082124:
    // 0x80082124: bne         $v1, $v0, L_8008219C
    if (ctx->r3 != ctx->r2) {
        // 0x80082128: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8008219C;
    }
    // 0x80082128: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8008212C: lui         $s0, 0x51
    ctx->r16 = S32(0X51 << 16);
    // 0x80082130: addiu       $s0, $s0, -0x2BF0
    ctx->r16 = ADD32(ctx->r16, -0X2BF0);
    // 0x80082134: lui         $s1, 0x51
    ctx->r17 = S32(0X51 << 16);
    // 0x80082138: addiu       $s1, $s1, 0x60
    ctx->r17 = ADD32(ctx->r17, 0X60);
    // 0x8008213C: jal         0x80025E1C
    // 0x80082140: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_24;
    // 0x80082140: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_24:
    // 0x80082144: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80082148: sw          $v0, 0x6250($at)
    MEM_W(0X6250, ctx->r1) = ctx->r2;
    // 0x8008214C: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x80082150: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x80082150: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80082154: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80082158: jal         0x8002724C
    // 0x8008215C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_25;
    // 0x8008215C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_25:
    // 0x80082160: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80082164: lw          $v1, 0x6250($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6250);
    // 0x80082168: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8008216C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082170: sh          $v0, -0x3D6C($at)
    MEM_H(-0X3D6C, ctx->r1) = ctx->r2;
    // 0x80082174: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082178: addiu       $v0, $v0, 0x496C
    ctx->r2 = ADD32(ctx->r2, 0X496C);
    // 0x8008217C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082180: sw          $v0, -0x3D10($at)
    MEM_W(-0X3D10, ctx->r1) = ctx->r2;
    // 0x80082184: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x80082188: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008218C: sw          $v0, -0x3D0C($at)
    MEM_W(-0X3D0C, ctx->r1) = ctx->r2;
    // 0x80082190: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082194: j           L_80082374
    // 0x80082198: addiu       $v0, $v0, -0x518
    ctx->r2 = ADD32(ctx->r2, -0X518);
        goto L_80082374;
    // 0x80082198: addiu       $v0, $v0, -0x518
    ctx->r2 = ADD32(ctx->r2, -0X518);
L_8008219C:
    // 0x8008219C: bne         $v1, $v0, L_80082214
    if (ctx->r3 != ctx->r2) {
        // 0x800821A0: nop
    
            goto L_80082214;
    }
    // 0x800821A0: nop

    // 0x800821A4: lui         $s0, 0x51
    ctx->r16 = S32(0X51 << 16);
    // 0x800821A8: addiu       $s0, $s0, 0x60
    ctx->r16 = ADD32(ctx->r16, 0X60);
    // 0x800821AC: lui         $s1, 0x51
    ctx->r17 = S32(0X51 << 16);
    // 0x800821B0: addiu       $s1, $s1, 0x2DF0
    ctx->r17 = ADD32(ctx->r17, 0X2DF0);
    // 0x800821B4: jal         0x80025E1C
    // 0x800821B8: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_26;
    // 0x800821B8: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_26:
    // 0x800821BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x800821C0: sw          $v0, 0x6250($at)
    MEM_W(0X6250, ctx->r1) = ctx->r2;
    // 0x800821C4: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x800821C8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x800821C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800821CC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x800821D0: jal         0x8002724C
    // 0x800821D4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_27;
    // 0x800821D4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_27:
    // 0x800821D8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x800821DC: lw          $v1, 0x6250($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6250);
    // 0x800821E0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x800821E4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800821E8: sh          $v0, -0x3D6C($at)
    MEM_H(-0X3D6C, ctx->r1) = ctx->r2;
    // 0x800821EC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800821F0: addiu       $v0, $v0, 0x4AAC
    ctx->r2 = ADD32(ctx->r2, 0X4AAC);
    // 0x800821F4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800821F8: sw          $v0, -0x3D10($at)
    MEM_W(-0X3D10, ctx->r1) = ctx->r2;
    // 0x800821FC: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x80082200: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082204: sw          $v0, -0x3D0C($at)
    MEM_W(-0X3D0C, ctx->r1) = ctx->r2;
    // 0x80082208: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8008220C: j           L_80082374
    // 0x80082210: addiu       $v0, $v0, -0x3D8
    ctx->r2 = ADD32(ctx->r2, -0X3D8);
        goto L_80082374;
    // 0x80082210: addiu       $v0, $v0, -0x3D8
    ctx->r2 = ADD32(ctx->r2, -0X3D8);
L_80082214:
    // 0x80082214: bne         $v1, $a1, L_8008228C
    if (ctx->r3 != ctx->r5) {
        // 0x80082218: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8008228C;
    }
    // 0x80082218: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8008221C: lui         $s0, 0x51
    ctx->r16 = S32(0X51 << 16);
    // 0x80082220: addiu       $s0, $s0, 0x2DF0
    ctx->r16 = ADD32(ctx->r16, 0X2DF0);
    // 0x80082224: lui         $s1, 0x51
    ctx->r17 = S32(0X51 << 16);
    // 0x80082228: addiu       $s1, $s1, 0x6640
    ctx->r17 = ADD32(ctx->r17, 0X6640);
    // 0x8008222C: jal         0x80025E1C
    // 0x80082230: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_28;
    // 0x80082230: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_28:
    // 0x80082234: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80082238: sw          $v0, 0x6250($at)
    MEM_W(0X6250, ctx->r1) = ctx->r2;
    // 0x8008223C: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x80082240: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x80082240: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80082244: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80082248: jal         0x8002724C
    // 0x8008224C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_29;
    // 0x8008224C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_29:
    // 0x80082250: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80082254: lw          $v1, 0x6250($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6250);
    // 0x80082258: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x8008225C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082260: sh          $v0, -0x3D6C($at)
    MEM_H(-0X3D6C, ctx->r1) = ctx->r2;
    // 0x80082264: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082268: addiu       $v0, $v0, 0x4BEC
    ctx->r2 = ADD32(ctx->r2, 0X4BEC);
    // 0x8008226C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082270: sw          $v0, -0x3D10($at)
    MEM_W(-0X3D10, ctx->r1) = ctx->r2;
    // 0x80082274: addiu       $v0, $v0, 0xC8
    ctx->r2 = ADD32(ctx->r2, 0XC8);
    // 0x80082278: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008227C: sw          $v0, -0x3D0C($at)
    MEM_W(-0X3D0C, ctx->r1) = ctx->r2;
    // 0x80082280: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082284: j           L_80082374
    // 0x80082288: addiu       $v0, $v0, -0x298
    ctx->r2 = ADD32(ctx->r2, -0X298);
        goto L_80082374;
    // 0x80082288: addiu       $v0, $v0, -0x298
    ctx->r2 = ADD32(ctx->r2, -0X298);
L_8008228C:
    // 0x8008228C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80082290: bne         $v1, $v0, L_80082308
    if (ctx->r3 != ctx->r2) {
        // 0x80082294: nop
    
            goto L_80082308;
    }
    // 0x80082294: nop

    // 0x80082298: lui         $s0, 0x51
    ctx->r16 = S32(0X51 << 16);
    // 0x8008229C: addiu       $s0, $s0, 0x6640
    ctx->r16 = ADD32(ctx->r16, 0X6640);
    // 0x800822A0: lui         $s1, 0x52
    ctx->r17 = S32(0X52 << 16);
    // 0x800822A4: addiu       $s1, $s1, -0x7A40
    ctx->r17 = ADD32(ctx->r17, -0X7A40);
    // 0x800822A8: jal         0x80025E1C
    // 0x800822AC: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_30;
    // 0x800822AC: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_30:
    // 0x800822B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x800822B4: sw          $v0, 0x6250($at)
    MEM_W(0X6250, ctx->r1) = ctx->r2;
    // 0x800822B8: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x800822BC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x800822BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800822C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x800822C4: jal         0x8002724C
    // 0x800822C8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_31;
    // 0x800822C8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_31:
    // 0x800822CC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x800822D0: lw          $v1, 0x6250($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6250);
    // 0x800822D4: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x800822D8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800822DC: sh          $v0, -0x3D6C($at)
    MEM_H(-0X3D6C, ctx->r1) = ctx->r2;
    // 0x800822E0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800822E4: addiu       $v0, $v0, 0x4D7C
    ctx->r2 = ADD32(ctx->r2, 0X4D7C);
    // 0x800822E8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800822EC: sw          $v0, -0x3D10($at)
    MEM_W(-0X3D10, ctx->r1) = ctx->r2;
    // 0x800822F0: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x800822F4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800822F8: sw          $v0, -0x3D0C($at)
    MEM_W(-0X3D0C, ctx->r1) = ctx->r2;
    // 0x800822FC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082300: j           L_80082374
    // 0x80082304: addiu       $v0, $v0, -0x108
    ctx->r2 = ADD32(ctx->r2, -0X108);
        goto L_80082374;
    // 0x80082304: addiu       $v0, $v0, -0x108
    ctx->r2 = ADD32(ctx->r2, -0X108);
L_80082308:
    // 0x80082308: lui         $s0, 0x50
    ctx->r16 = S32(0X50 << 16);
    // 0x8008230C: addiu       $s0, $s0, -0x13E0
    ctx->r16 = ADD32(ctx->r16, -0X13E0);
    // 0x80082310: lui         $s1, 0x50
    ctx->r17 = S32(0X50 << 16);
    // 0x80082314: addiu       $s1, $s1, 0x18D0
    ctx->r17 = ADD32(ctx->r17, 0X18D0);
    // 0x80082318: jal         0x80025E1C
    // 0x8008231C: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_32;
    // 0x8008231C: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_32:
    // 0x80082320: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80082324: sw          $v0, 0x6250($at)
    MEM_W(0X6250, ctx->r1) = ctx->r2;
    // 0x80082328: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x8008232C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x8008232C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80082330: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80082334: jal         0x8002724C
    // 0x80082338: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_33;
    // 0x80082338: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_33:
    // 0x8008233C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80082340: lw          $v1, 0x6250($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6250);
    // 0x80082344: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80082348: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008234C: sh          $v0, -0x3D6C($at)
    MEM_H(-0X3D6C, ctx->r1) = ctx->r2;
    // 0x80082350: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082354: addiu       $v0, $v0, 0x432C
    ctx->r2 = ADD32(ctx->r2, 0X432C);
    // 0x80082358: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008235C: sw          $v0, -0x3D10($at)
    MEM_W(-0X3D10, ctx->r1) = ctx->r2;
    // 0x80082360: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x80082364: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082368: sw          $v0, -0x3D0C($at)
    MEM_W(-0X3D0C, ctx->r1) = ctx->r2;
    // 0x8008236C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082370: addiu       $v0, $v0, -0xB58
    ctx->r2 = ADD32(ctx->r2, -0XB58);
L_80082374:
    // 0x80082374: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082378: sw          $v0, -0x3D04($at)
    MEM_W(-0X3D04, ctx->r1) = ctx->r2;
    // 0x8008237C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082380: sw          $v1, -0x3D08($at)
    MEM_W(-0X3D08, ctx->r1) = ctx->r3;
    // 0x80082384: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082388: j           L_80082C5C
    // 0x8008238C: lw          $v0, 0x6250($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6250);
        goto L_80082C5C;
    // 0x8008238C: lw          $v0, 0x6250($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6250);
L_80082390:
    // 0x80082390: bne         $a1, $v0, L_800828E4
    if (ctx->r5 != ctx->r2) {
        // 0x80082394: addiu       $v0, $zero, 0x13
        ctx->r2 = ADD32(0, 0X13);
            goto L_800828E4;
    }
    // 0x80082394: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x80082398: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8008239C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800823A0: bne         $v1, $v0, L_80082418
    if (ctx->r3 != ctx->r2) {
        // 0x800823A4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80082418;
    }
    // 0x800823A4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800823A8: lui         $s0, 0x52
    ctx->r16 = S32(0X52 << 16);
    // 0x800823AC: addiu       $s0, $s0, -0x7A40
    ctx->r16 = ADD32(ctx->r16, -0X7A40);
    // 0x800823B0: lui         $s1, 0x52
    ctx->r17 = S32(0X52 << 16);
    // 0x800823B4: addiu       $s1, $s1, -0x4B00
    ctx->r17 = ADD32(ctx->r17, -0X4B00);
    // 0x800823B8: jal         0x80025E1C
    // 0x800823BC: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_34;
    // 0x800823BC: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_34:
    // 0x800823C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x800823C4: sw          $v0, 0x6254($at)
    MEM_W(0X6254, ctx->r1) = ctx->r2;
    // 0x800823C8: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x800823CC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x800823CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800823D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x800823D4: jal         0x8002724C
    // 0x800823D8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_35;
    // 0x800823D8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_35:
    // 0x800823DC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x800823E0: lw          $v1, 0x6254($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6254);
    // 0x800823E4: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x800823E8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800823EC: sh          $v0, -0x3D6A($at)
    MEM_H(-0X3D6A, ctx->r1) = ctx->r2;
    // 0x800823F0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800823F4: addiu       $v0, $v0, 0x4E6C
    ctx->r2 = ADD32(ctx->r2, 0X4E6C);
    // 0x800823F8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800823FC: sw          $v0, -0x3CF8($at)
    MEM_W(-0X3CF8, ctx->r1) = ctx->r2;
    // 0x80082400: addiu       $v0, $v0, 0xB0
    ctx->r2 = ADD32(ctx->r2, 0XB0);
    // 0x80082404: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082408: sw          $v0, -0x3CF4($at)
    MEM_W(-0X3CF4, ctx->r1) = ctx->r2;
    // 0x8008240C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082410: j           L_800828C8
    // 0x80082414: addiu       $v0, $v0, -0x18
    ctx->r2 = ADD32(ctx->r2, -0X18);
        goto L_800828C8;
    // 0x80082414: addiu       $v0, $v0, -0x18
    ctx->r2 = ADD32(ctx->r2, -0X18);
L_80082418:
    // 0x80082418: beq         $v1, $v0, L_8008285C
    if (ctx->r3 == ctx->r2) {
        // 0x8008241C: nop
    
            goto L_8008285C;
    }
    // 0x8008241C: nop

    // 0x80082420: bne         $v1, $a2, L_80082498
    if (ctx->r3 != ctx->r6) {
        // 0x80082424: nop
    
            goto L_80082498;
    }
    // 0x80082424: nop

    // 0x80082428: lui         $s0, 0x52
    ctx->r16 = S32(0X52 << 16);
    // 0x8008242C: addiu       $s0, $s0, -0x1870
    ctx->r16 = ADD32(ctx->r16, -0X1870);
    // 0x80082430: lui         $s1, 0x52
    ctx->r17 = S32(0X52 << 16);
    // 0x80082434: addiu       $s1, $s1, 0x1520
    ctx->r17 = ADD32(ctx->r17, 0X1520);
    // 0x80082438: jal         0x80025E1C
    // 0x8008243C: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_36;
    // 0x8008243C: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_36:
    // 0x80082440: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80082444: sw          $v0, 0x6254($at)
    MEM_W(0X6254, ctx->r1) = ctx->r2;
    // 0x80082448: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x8008244C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x8008244C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80082450: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80082454: jal         0x8002724C
    // 0x80082458: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_37;
    // 0x80082458: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_37:
    // 0x8008245C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80082460: lw          $v1, 0x6254($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6254);
    // 0x80082464: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80082468: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008246C: sh          $v0, -0x3D6A($at)
    MEM_H(-0X3D6A, ctx->r1) = ctx->r2;
    // 0x80082470: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082474: addiu       $v0, $v0, 0x512C
    ctx->r2 = ADD32(ctx->r2, 0X512C);
    // 0x80082478: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008247C: sw          $v0, -0x3CF8($at)
    MEM_W(-0X3CF8, ctx->r1) = ctx->r2;
    // 0x80082480: addiu       $v0, $v0, 0xA8
    ctx->r2 = ADD32(ctx->r2, 0XA8);
    // 0x80082484: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082488: sw          $v0, -0x3CF4($at)
    MEM_W(-0X3CF4, ctx->r1) = ctx->r2;
    // 0x8008248C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082490: j           L_800828C8
    // 0x80082494: addiu       $v0, $v0, 0x2A8
    ctx->r2 = ADD32(ctx->r2, 0X2A8);
        goto L_800828C8;
    // 0x80082494: addiu       $v0, $v0, 0x2A8
    ctx->r2 = ADD32(ctx->r2, 0X2A8);
L_80082498:
    // 0x80082498: bne         $v1, $a3, L_80082510
    if (ctx->r3 != ctx->r7) {
        // 0x8008249C: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80082510;
    }
    // 0x8008249C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x800824A0: lui         $s0, 0x52
    ctx->r16 = S32(0X52 << 16);
    // 0x800824A4: addiu       $s0, $s0, 0x1520
    ctx->r16 = ADD32(ctx->r16, 0X1520);
    // 0x800824A8: lui         $s1, 0x52
    ctx->r17 = S32(0X52 << 16);
    // 0x800824AC: addiu       $s1, $s1, 0x3C40
    ctx->r17 = ADD32(ctx->r17, 0X3C40);
    // 0x800824B0: jal         0x80025E1C
    // 0x800824B4: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_38;
    // 0x800824B4: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_38:
    // 0x800824B8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x800824BC: sw          $v0, 0x6254($at)
    MEM_W(0X6254, ctx->r1) = ctx->r2;
    // 0x800824C0: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x800824C4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x800824C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800824C8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x800824CC: jal         0x8002724C
    // 0x800824D0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_39;
    // 0x800824D0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_39:
    // 0x800824D4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x800824D8: lw          $v1, 0x6254($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6254);
    // 0x800824DC: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x800824E0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800824E4: sh          $v0, -0x3D6A($at)
    MEM_H(-0X3D6A, ctx->r1) = ctx->r2;
    // 0x800824E8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800824EC: addiu       $v0, $v0, 0x527C
    ctx->r2 = ADD32(ctx->r2, 0X527C);
    // 0x800824F0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800824F4: sw          $v0, -0x3CF8($at)
    MEM_W(-0X3CF8, ctx->r1) = ctx->r2;
    // 0x800824F8: addiu       $v0, $v0, 0x90
    ctx->r2 = ADD32(ctx->r2, 0X90);
    // 0x800824FC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082500: sw          $v0, -0x3CF4($at)
    MEM_W(-0X3CF4, ctx->r1) = ctx->r2;
    // 0x80082504: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082508: j           L_800828C8
    // 0x8008250C: addiu       $v0, $v0, 0x3F8
    ctx->r2 = ADD32(ctx->r2, 0X3F8);
        goto L_800828C8;
    // 0x8008250C: addiu       $v0, $v0, 0x3F8
    ctx->r2 = ADD32(ctx->r2, 0X3F8);
L_80082510:
    // 0x80082510: bne         $v1, $v0, L_80082588
    if (ctx->r3 != ctx->r2) {
        // 0x80082514: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80082588;
    }
    // 0x80082514: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80082518: lui         $s0, 0x52
    ctx->r16 = S32(0X52 << 16);
    // 0x8008251C: addiu       $s0, $s0, 0x3C40
    ctx->r16 = ADD32(ctx->r16, 0X3C40);
    // 0x80082520: lui         $s1, 0x52
    ctx->r17 = S32(0X52 << 16);
    // 0x80082524: addiu       $s1, $s1, 0x6E90
    ctx->r17 = ADD32(ctx->r17, 0X6E90);
    // 0x80082528: jal         0x80025E1C
    // 0x8008252C: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_40;
    // 0x8008252C: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_40:
    // 0x80082530: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80082534: sw          $v0, 0x6254($at)
    MEM_W(0X6254, ctx->r1) = ctx->r2;
    // 0x80082538: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x8008253C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x8008253C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80082540: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80082544: jal         0x8002724C
    // 0x80082548: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_41;
    // 0x80082548: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_41:
    // 0x8008254C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80082550: lw          $v1, 0x6254($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6254);
    // 0x80082554: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80082558: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008255C: sh          $v0, -0x3D6A($at)
    MEM_H(-0X3D6A, ctx->r1) = ctx->r2;
    // 0x80082560: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082564: addiu       $v0, $v0, 0x539C
    ctx->r2 = ADD32(ctx->r2, 0X539C);
    // 0x80082568: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008256C: sw          $v0, -0x3CF8($at)
    MEM_W(-0X3CF8, ctx->r1) = ctx->r2;
    // 0x80082570: addiu       $v0, $v0, 0xB0
    ctx->r2 = ADD32(ctx->r2, 0XB0);
    // 0x80082574: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082578: sw          $v0, -0x3CF4($at)
    MEM_W(-0X3CF4, ctx->r1) = ctx->r2;
    // 0x8008257C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082580: j           L_800828C8
    // 0x80082584: addiu       $v0, $v0, 0x518
    ctx->r2 = ADD32(ctx->r2, 0X518);
        goto L_800828C8;
    // 0x80082584: addiu       $v0, $v0, 0x518
    ctx->r2 = ADD32(ctx->r2, 0X518);
L_80082588:
    // 0x80082588: bne         $v1, $v0, L_80082600
    if (ctx->r3 != ctx->r2) {
        // 0x8008258C: nop
    
            goto L_80082600;
    }
    // 0x8008258C: nop

    // 0x80082590: lui         $s0, 0x52
    ctx->r16 = S32(0X52 << 16);
    // 0x80082594: addiu       $s0, $s0, 0x6E90
    ctx->r16 = ADD32(ctx->r16, 0X6E90);
    // 0x80082598: lui         $s1, 0x53
    ctx->r17 = S32(0X53 << 16);
    // 0x8008259C: addiu       $s1, $s1, -0x6170
    ctx->r17 = ADD32(ctx->r17, -0X6170);
    // 0x800825A0: jal         0x80025E1C
    // 0x800825A4: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_42;
    // 0x800825A4: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_42:
    // 0x800825A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x800825AC: sw          $v0, 0x6254($at)
    MEM_W(0X6254, ctx->r1) = ctx->r2;
    // 0x800825B0: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x800825B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x800825B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800825B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x800825BC: jal         0x8002724C
    // 0x800825C0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_43;
    // 0x800825C0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_43:
    // 0x800825C4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x800825C8: lw          $v1, 0x6254($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6254);
    // 0x800825CC: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x800825D0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800825D4: sh          $v0, -0x3D6A($at)
    MEM_H(-0X3D6A, ctx->r1) = ctx->r2;
    // 0x800825D8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800825DC: addiu       $v0, $v0, 0x54FC
    ctx->r2 = ADD32(ctx->r2, 0X54FC);
    // 0x800825E0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800825E4: sw          $v0, -0x3CF8($at)
    MEM_W(-0X3CF8, ctx->r1) = ctx->r2;
    // 0x800825E8: addiu       $v0, $v0, 0xB0
    ctx->r2 = ADD32(ctx->r2, 0XB0);
    // 0x800825EC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800825F0: sw          $v0, -0x3CF4($at)
    MEM_W(-0X3CF4, ctx->r1) = ctx->r2;
    // 0x800825F4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800825F8: j           L_800828C8
    // 0x800825FC: addiu       $v0, $v0, 0x678
    ctx->r2 = ADD32(ctx->r2, 0X678);
        goto L_800828C8;
    // 0x800825FC: addiu       $v0, $v0, 0x678
    ctx->r2 = ADD32(ctx->r2, 0X678);
L_80082600:
    // 0x80082600: bne         $v1, $t0, L_80082678
    if (ctx->r3 != ctx->r8) {
        // 0x80082604: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80082678;
    }
    // 0x80082604: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80082608: lui         $s0, 0x53
    ctx->r16 = S32(0X53 << 16);
    // 0x8008260C: addiu       $s0, $s0, -0x6170
    ctx->r16 = ADD32(ctx->r16, -0X6170);
    // 0x80082610: lui         $s1, 0x53
    ctx->r17 = S32(0X53 << 16);
    // 0x80082614: addiu       $s1, $s1, -0x31F0
    ctx->r17 = ADD32(ctx->r17, -0X31F0);
    // 0x80082618: jal         0x80025E1C
    // 0x8008261C: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_44;
    // 0x8008261C: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_44:
    // 0x80082620: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80082624: sw          $v0, 0x6254($at)
    MEM_W(0X6254, ctx->r1) = ctx->r2;
    // 0x80082628: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x8008262C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x8008262C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80082630: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80082634: jal         0x8002724C
    // 0x80082638: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_45;
    // 0x80082638: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_45:
    // 0x8008263C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80082640: lw          $v1, 0x6254($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6254);
    // 0x80082644: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80082648: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008264C: sh          $v0, -0x3D6A($at)
    MEM_H(-0X3D6A, ctx->r1) = ctx->r2;
    // 0x80082650: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082654: addiu       $v0, $v0, 0x565C
    ctx->r2 = ADD32(ctx->r2, 0X565C);
    // 0x80082658: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008265C: sw          $v0, -0x3CF8($at)
    MEM_W(-0X3CF8, ctx->r1) = ctx->r2;
    // 0x80082660: addiu       $v0, $v0, 0xB0
    ctx->r2 = ADD32(ctx->r2, 0XB0);
    // 0x80082664: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082668: sw          $v0, -0x3CF4($at)
    MEM_W(-0X3CF4, ctx->r1) = ctx->r2;
    // 0x8008266C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082670: j           L_800828C8
    // 0x80082674: addiu       $v0, $v0, 0x7D8
    ctx->r2 = ADD32(ctx->r2, 0X7D8);
        goto L_800828C8;
    // 0x80082674: addiu       $v0, $v0, 0x7D8
    ctx->r2 = ADD32(ctx->r2, 0X7D8);
L_80082678:
    // 0x80082678: bne         $v1, $v0, L_800826F0
    if (ctx->r3 != ctx->r2) {
        // 0x8008267C: nop
    
            goto L_800826F0;
    }
    // 0x8008267C: nop

    // 0x80082680: lui         $s0, 0x53
    ctx->r16 = S32(0X53 << 16);
    // 0x80082684: addiu       $s0, $s0, -0x31F0
    ctx->r16 = ADD32(ctx->r16, -0X31F0);
    // 0x80082688: lui         $s1, 0x53
    ctx->r17 = S32(0X53 << 16);
    // 0x8008268C: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x80082690: jal         0x80025E1C
    // 0x80082694: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_46;
    // 0x80082694: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_46:
    // 0x80082698: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8008269C: sw          $v0, 0x6254($at)
    MEM_W(0X6254, ctx->r1) = ctx->r2;
    // 0x800826A0: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x800826A4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x800826A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800826A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x800826AC: jal         0x8002724C
    // 0x800826B0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_47;
    // 0x800826B0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_47:
    // 0x800826B4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x800826B8: lw          $v1, 0x6254($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6254);
    // 0x800826BC: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x800826C0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800826C4: sh          $v0, -0x3D6A($at)
    MEM_H(-0X3D6A, ctx->r1) = ctx->r2;
    // 0x800826C8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800826CC: addiu       $v0, $v0, 0x57BC
    ctx->r2 = ADD32(ctx->r2, 0X57BC);
    // 0x800826D0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800826D4: sw          $v0, -0x3CF8($at)
    MEM_W(-0X3CF8, ctx->r1) = ctx->r2;
    // 0x800826D8: addiu       $v0, $v0, 0xB0
    ctx->r2 = ADD32(ctx->r2, 0XB0);
    // 0x800826DC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800826E0: sw          $v0, -0x3CF4($at)
    MEM_W(-0X3CF4, ctx->r1) = ctx->r2;
    // 0x800826E4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800826E8: j           L_800828C8
    // 0x800826EC: addiu       $v0, $v0, 0x938
    ctx->r2 = ADD32(ctx->r2, 0X938);
        goto L_800828C8;
    // 0x800826EC: addiu       $v0, $v0, 0x938
    ctx->r2 = ADD32(ctx->r2, 0X938);
L_800826F0:
    // 0x800826F0: bne         $v1, $a1, L_80082768
    if (ctx->r3 != ctx->r5) {
        // 0x800826F4: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_80082768;
    }
    // 0x800826F4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x800826F8: lui         $s0, 0x53
    ctx->r16 = S32(0X53 << 16);
    // 0x800826FC: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x80082700: lui         $s1, 0x53
    ctx->r17 = S32(0X53 << 16);
    // 0x80082704: addiu       $s1, $s1, 0x2EA0
    ctx->r17 = ADD32(ctx->r17, 0X2EA0);
    // 0x80082708: jal         0x80025E1C
    // 0x8008270C: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_48;
    // 0x8008270C: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_48:
    // 0x80082710: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80082714: sw          $v0, 0x6254($at)
    MEM_W(0X6254, ctx->r1) = ctx->r2;
    // 0x80082718: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x8008271C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x8008271C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80082720: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80082724: jal         0x8002724C
    // 0x80082728: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_49;
    // 0x80082728: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_49:
    // 0x8008272C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80082730: lw          $v1, 0x6254($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6254);
    // 0x80082734: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80082738: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008273C: sh          $v0, -0x3D6A($at)
    MEM_H(-0X3D6A, ctx->r1) = ctx->r2;
    // 0x80082740: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082744: addiu       $v0, $v0, 0x591C
    ctx->r2 = ADD32(ctx->r2, 0X591C);
    // 0x80082748: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008274C: sw          $v0, -0x3CF8($at)
    MEM_W(-0X3CF8, ctx->r1) = ctx->r2;
    // 0x80082750: addiu       $v0, $v0, 0xB0
    ctx->r2 = ADD32(ctx->r2, 0XB0);
    // 0x80082754: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082758: sw          $v0, -0x3CF4($at)
    MEM_W(-0X3CF4, ctx->r1) = ctx->r2;
    // 0x8008275C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082760: j           L_800828C8
    // 0x80082764: addiu       $v0, $v0, 0xA98
    ctx->r2 = ADD32(ctx->r2, 0XA98);
        goto L_800828C8;
    // 0x80082764: addiu       $v0, $v0, 0xA98
    ctx->r2 = ADD32(ctx->r2, 0XA98);
L_80082768:
    // 0x80082768: lbu         $a0, 0x0($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X0);
    // 0x8008276C: bne         $a0, $v0, L_800827E4
    if (ctx->r4 != ctx->r2) {
        // 0x80082770: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_800827E4;
    }
    // 0x80082770: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80082774: lui         $s0, 0x53
    ctx->r16 = S32(0X53 << 16);
    // 0x80082778: addiu       $s0, $s0, 0x2EA0
    ctx->r16 = ADD32(ctx->r16, 0X2EA0);
    // 0x8008277C: lui         $s1, 0x53
    ctx->r17 = S32(0X53 << 16);
    // 0x80082780: addiu       $s1, $s1, 0x5DF0
    ctx->r17 = ADD32(ctx->r17, 0X5DF0);
    // 0x80082784: jal         0x80025E1C
    // 0x80082788: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_50;
    // 0x80082788: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_50:
    // 0x8008278C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80082790: sw          $v0, 0x6254($at)
    MEM_W(0X6254, ctx->r1) = ctx->r2;
    // 0x80082794: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x80082798: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x80082798: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8008279C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x800827A0: jal         0x8002724C
    // 0x800827A4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_51;
    // 0x800827A4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_51:
    // 0x800827A8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x800827AC: lw          $v1, 0x6254($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6254);
    // 0x800827B0: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x800827B4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800827B8: sh          $v0, -0x3D6A($at)
    MEM_H(-0X3D6A, ctx->r1) = ctx->r2;
    // 0x800827BC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800827C0: addiu       $v0, $v0, 0x5A7C
    ctx->r2 = ADD32(ctx->r2, 0X5A7C);
    // 0x800827C4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800827C8: sw          $v0, -0x3CF8($at)
    MEM_W(-0X3CF8, ctx->r1) = ctx->r2;
    // 0x800827CC: addiu       $v0, $v0, 0xB0
    ctx->r2 = ADD32(ctx->r2, 0XB0);
    // 0x800827D0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800827D4: sw          $v0, -0x3CF4($at)
    MEM_W(-0X3CF4, ctx->r1) = ctx->r2;
    // 0x800827D8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800827DC: j           L_800828C8
    // 0x800827E0: addiu       $v0, $v0, 0xBF8
    ctx->r2 = ADD32(ctx->r2, 0XBF8);
        goto L_800828C8;
    // 0x800827E0: addiu       $v0, $v0, 0xBF8
    ctx->r2 = ADD32(ctx->r2, 0XBF8);
L_800827E4:
    // 0x800827E4: bne         $a0, $v0, L_8008285C
    if (ctx->r4 != ctx->r2) {
        // 0x800827E8: nop
    
            goto L_8008285C;
    }
    // 0x800827E8: nop

    // 0x800827EC: lui         $s0, 0x53
    ctx->r16 = S32(0X53 << 16);
    // 0x800827F0: addiu       $s0, $s0, 0x5DF0
    ctx->r16 = ADD32(ctx->r16, 0X5DF0);
    // 0x800827F4: lui         $s1, 0x54
    ctx->r17 = S32(0X54 << 16);
    // 0x800827F8: addiu       $s1, $s1, -0x7200
    ctx->r17 = ADD32(ctx->r17, -0X7200);
    // 0x800827FC: jal         0x80025E1C
    // 0x80082800: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_52;
    // 0x80082800: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_52:
    // 0x80082804: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80082808: sw          $v0, 0x6254($at)
    MEM_W(0X6254, ctx->r1) = ctx->r2;
    // 0x8008280C: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x80082810: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x80082810: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80082814: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80082818: jal         0x8002724C
    // 0x8008281C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_53;
    // 0x8008281C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_53:
    // 0x80082820: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80082824: lw          $v1, 0x6254($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6254);
    // 0x80082828: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x8008282C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082830: sh          $v0, -0x3D6A($at)
    MEM_H(-0X3D6A, ctx->r1) = ctx->r2;
    // 0x80082834: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082838: addiu       $v0, $v0, 0x5BDC
    ctx->r2 = ADD32(ctx->r2, 0X5BDC);
    // 0x8008283C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082840: sw          $v0, -0x3CF8($at)
    MEM_W(-0X3CF8, ctx->r1) = ctx->r2;
    // 0x80082844: addiu       $v0, $v0, 0xB0
    ctx->r2 = ADD32(ctx->r2, 0XB0);
    // 0x80082848: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008284C: sw          $v0, -0x3CF4($at)
    MEM_W(-0X3CF4, ctx->r1) = ctx->r2;
    // 0x80082850: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082854: j           L_800828C8
    // 0x80082858: addiu       $v0, $v0, 0xD58
    ctx->r2 = ADD32(ctx->r2, 0XD58);
        goto L_800828C8;
    // 0x80082858: addiu       $v0, $v0, 0xD58
    ctx->r2 = ADD32(ctx->r2, 0XD58);
L_8008285C:
    // 0x8008285C: lui         $s0, 0x52
    ctx->r16 = S32(0X52 << 16);
    // 0x80082860: addiu       $s0, $s0, -0x4B00
    ctx->r16 = ADD32(ctx->r16, -0X4B00);
    // 0x80082864: lui         $s1, 0x52
    ctx->r17 = S32(0X52 << 16);
    // 0x80082868: addiu       $s1, $s1, -0x1870
    ctx->r17 = ADD32(ctx->r17, -0X1870);
    // 0x8008286C: jal         0x80025E1C
    // 0x80082870: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_54;
    // 0x80082870: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_54:
    // 0x80082874: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80082878: sw          $v0, 0x6254($at)
    MEM_W(0X6254, ctx->r1) = ctx->r2;
    // 0x8008287C: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x80082880: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x80082880: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80082884: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80082888: jal         0x8002724C
    // 0x8008288C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_55;
    // 0x8008288C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_55:
    // 0x80082890: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80082894: lw          $v1, 0x6254($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6254);
    // 0x80082898: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x8008289C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800828A0: sh          $v0, -0x3D6A($at)
    MEM_H(-0X3D6A, ctx->r1) = ctx->r2;
    // 0x800828A4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800828A8: addiu       $v0, $v0, 0x4FCC
    ctx->r2 = ADD32(ctx->r2, 0X4FCC);
    // 0x800828AC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800828B0: sw          $v0, -0x3CF8($at)
    MEM_W(-0X3CF8, ctx->r1) = ctx->r2;
    // 0x800828B4: addiu       $v0, $v0, 0xB0
    ctx->r2 = ADD32(ctx->r2, 0XB0);
    // 0x800828B8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800828BC: sw          $v0, -0x3CF4($at)
    MEM_W(-0X3CF4, ctx->r1) = ctx->r2;
    // 0x800828C0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800828C4: addiu       $v0, $v0, 0x148
    ctx->r2 = ADD32(ctx->r2, 0X148);
L_800828C8:
    // 0x800828C8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800828CC: sw          $v0, -0x3CEC($at)
    MEM_W(-0X3CEC, ctx->r1) = ctx->r2;
    // 0x800828D0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800828D4: sw          $v1, -0x3CF0($at)
    MEM_W(-0X3CF0, ctx->r1) = ctx->r3;
    // 0x800828D8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800828DC: j           L_80082C5C
    // 0x800828E0: lw          $v0, 0x6254($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6254);
        goto L_80082C5C;
    // 0x800828E0: lw          $v0, 0x6254($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6254);
L_800828E4:
    // 0x800828E4: bne         $a1, $v0, L_80082A84
    if (ctx->r5 != ctx->r2) {
        // 0x800828E8: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_80082A84;
    }
    // 0x800828E8: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x800828EC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800828F0: sh          $zero, -0x3D50($at)
    MEM_H(-0X3D50, ctx->r1) = 0;
    // 0x800828F4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800828F8: sh          $zero, -0x3D4E($at)
    MEM_H(-0X3D4E, ctx->r1) = 0;
    // 0x800828FC: lbu         $a0, 0x0($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X0);
    // 0x80082900: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80082904: beq         $a0, $v0, L_800829FC
    if (ctx->r4 == ctx->r2) {
        // 0x80082908: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_800829FC;
    }
    // 0x80082908: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8008290C: bne         $a0, $v0, L_80082984
    if (ctx->r4 != ctx->r2) {
        // 0x80082910: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80082984;
    }
    // 0x80082910: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80082914: lui         $s0, 0x54
    ctx->r16 = S32(0X54 << 16);
    // 0x80082918: addiu       $s0, $s0, -0x48A0
    ctx->r16 = ADD32(ctx->r16, -0X48A0);
    // 0x8008291C: lui         $s1, 0x54
    ctx->r17 = S32(0X54 << 16);
    // 0x80082920: addiu       $s1, $s1, -0x1F50
    ctx->r17 = ADD32(ctx->r17, -0X1F50);
    // 0x80082924: jal         0x80025E1C
    // 0x80082928: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_56;
    // 0x80082928: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_56:
    // 0x8008292C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80082930: sw          $v0, 0x6258($at)
    MEM_W(0X6258, ctx->r1) = ctx->r2;
    // 0x80082934: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x80082938: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x80082938: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8008293C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80082940: jal         0x8002724C
    // 0x80082944: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_57;
    // 0x80082944: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_57:
    // 0x80082948: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x8008294C: lw          $v1, 0x6258($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6258);
    // 0x80082950: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80082954: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082958: sh          $v0, -0x3D68($at)
    MEM_H(-0X3D68, ctx->r1) = ctx->r2;
    // 0x8008295C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082960: addiu       $v0, $v0, 0x5E3C
    ctx->r2 = ADD32(ctx->r2, 0X5E3C);
    // 0x80082964: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082968: sw          $v0, -0x3CE0($at)
    MEM_W(-0X3CE0, ctx->r1) = ctx->r2;
    // 0x8008296C: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x80082970: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082974: sw          $v0, -0x3CDC($at)
    MEM_W(-0X3CDC, ctx->r1) = ctx->r2;
    // 0x80082978: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8008297C: j           L_80082A68
    // 0x80082980: addiu       $v0, $v0, 0xFB8
    ctx->r2 = ADD32(ctx->r2, 0XFB8);
        goto L_80082A68;
    // 0x80082980: addiu       $v0, $v0, 0xFB8
    ctx->r2 = ADD32(ctx->r2, 0XFB8);
L_80082984:
    // 0x80082984: bne         $a0, $v0, L_800829FC
    if (ctx->r4 != ctx->r2) {
        // 0x80082988: nop
    
            goto L_800829FC;
    }
    // 0x80082988: nop

    // 0x8008298C: lui         $s0, 0x54
    ctx->r16 = S32(0X54 << 16);
    // 0x80082990: addiu       $s0, $s0, -0x1F50
    ctx->r16 = ADD32(ctx->r16, -0X1F50);
    // 0x80082994: lui         $s1, 0x54
    ctx->r17 = S32(0X54 << 16);
    // 0x80082998: addiu       $s1, $s1, 0xA50
    ctx->r17 = ADD32(ctx->r17, 0XA50);
    // 0x8008299C: jal         0x80025E1C
    // 0x800829A0: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_58;
    // 0x800829A0: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_58:
    // 0x800829A4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x800829A8: sw          $v0, 0x6258($at)
    MEM_W(0X6258, ctx->r1) = ctx->r2;
    // 0x800829AC: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x800829B0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x800829B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800829B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x800829B8: jal         0x8002724C
    // 0x800829BC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_59;
    // 0x800829BC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_59:
    // 0x800829C0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x800829C4: lw          $v1, 0x6258($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6258);
    // 0x800829C8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x800829CC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800829D0: sh          $v0, -0x3D68($at)
    MEM_H(-0X3D68, ctx->r1) = ctx->r2;
    // 0x800829D4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800829D8: addiu       $v0, $v0, 0x5F3C
    ctx->r2 = ADD32(ctx->r2, 0X5F3C);
    // 0x800829DC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800829E0: sw          $v0, -0x3CE0($at)
    MEM_W(-0X3CE0, ctx->r1) = ctx->r2;
    // 0x800829E4: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x800829E8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800829EC: sw          $v0, -0x3CDC($at)
    MEM_W(-0X3CDC, ctx->r1) = ctx->r2;
    // 0x800829F0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800829F4: j           L_80082A68
    // 0x800829F8: addiu       $v0, $v0, 0x10B8
    ctx->r2 = ADD32(ctx->r2, 0X10B8);
        goto L_80082A68;
    // 0x800829F8: addiu       $v0, $v0, 0x10B8
    ctx->r2 = ADD32(ctx->r2, 0X10B8);
L_800829FC:
    // 0x800829FC: lui         $s0, 0x54
    ctx->r16 = S32(0X54 << 16);
    // 0x80082A00: addiu       $s0, $s0, -0x7200
    ctx->r16 = ADD32(ctx->r16, -0X7200);
    // 0x80082A04: lui         $s1, 0x54
    ctx->r17 = S32(0X54 << 16);
    // 0x80082A08: addiu       $s1, $s1, -0x48A0
    ctx->r17 = ADD32(ctx->r17, -0X48A0);
    // 0x80082A0C: jal         0x80025E1C
    // 0x80082A10: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_60;
    // 0x80082A10: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_60:
    // 0x80082A14: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80082A18: sw          $v0, 0x6258($at)
    MEM_W(0X6258, ctx->r1) = ctx->r2;
    // 0x80082A1C: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x80082A20: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x80082A20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80082A24: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80082A28: jal         0x8002724C
    // 0x80082A2C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_61;
    // 0x80082A2C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_61:
    // 0x80082A30: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80082A34: lw          $v1, 0x6258($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6258);
    // 0x80082A38: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80082A3C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082A40: sh          $v0, -0x3D68($at)
    MEM_H(-0X3D68, ctx->r1) = ctx->r2;
    // 0x80082A44: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082A48: addiu       $v0, $v0, 0x5D3C
    ctx->r2 = ADD32(ctx->r2, 0X5D3C);
    // 0x80082A4C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082A50: sw          $v0, -0x3CE0($at)
    MEM_W(-0X3CE0, ctx->r1) = ctx->r2;
    // 0x80082A54: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x80082A58: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082A5C: sw          $v0, -0x3CDC($at)
    MEM_W(-0X3CDC, ctx->r1) = ctx->r2;
    // 0x80082A60: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082A64: addiu       $v0, $v0, 0xEB8
    ctx->r2 = ADD32(ctx->r2, 0XEB8);
L_80082A68:
    // 0x80082A68: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082A6C: sw          $v0, -0x3CD4($at)
    MEM_W(-0X3CD4, ctx->r1) = ctx->r2;
    // 0x80082A70: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082A74: sw          $v1, -0x3CD8($at)
    MEM_W(-0X3CD8, ctx->r1) = ctx->r3;
    // 0x80082A78: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082A7C: j           L_80082C5C
    // 0x80082A80: lw          $v0, 0x6258($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6258);
        goto L_80082C5C;
    // 0x80082A80: lw          $v0, 0x6258($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6258);
L_80082A84:
    // 0x80082A84: bne         $a1, $v0, L_80082B24
    if (ctx->r5 != ctx->r2) {
        // 0x80082A88: addiu       $v0, $zero, 0x5D
        ctx->r2 = ADD32(0, 0X5D);
            goto L_80082B24;
    }
    // 0x80082A88: addiu       $v0, $zero, 0x5D
    ctx->r2 = ADD32(0, 0X5D);
    // 0x80082A8C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082A90: sh          $zero, -0x3D4C($at)
    MEM_H(-0X3D4C, ctx->r1) = 0;
    // 0x80082A94: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082A98: sh          $zero, -0x3D4A($at)
    MEM_H(-0X3D4A, ctx->r1) = 0;
    // 0x80082A9C: lui         $s0, 0x54
    ctx->r16 = S32(0X54 << 16);
    // 0x80082AA0: addiu       $s0, $s0, 0xA50
    ctx->r16 = ADD32(ctx->r16, 0XA50);
    // 0x80082AA4: lui         $s1, 0x54
    ctx->r17 = S32(0X54 << 16);
    // 0x80082AA8: addiu       $s1, $s1, 0x1A00
    ctx->r17 = ADD32(ctx->r17, 0X1A00);
    // 0x80082AAC: jal         0x80025E1C
    // 0x80082AB0: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_62;
    // 0x80082AB0: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_62:
    // 0x80082AB4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80082AB8: sw          $v0, 0x625C($at)
    MEM_W(0X625C, ctx->r1) = ctx->r2;
    // 0x80082ABC: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x80082AC0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x80082AC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80082AC4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80082AC8: jal         0x8002724C
    // 0x80082ACC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_63;
    // 0x80082ACC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_63:
    // 0x80082AD0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80082AD4: lw          $v1, 0x625C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X625C);
    // 0x80082AD8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80082ADC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082AE0: sh          $v0, -0x3D66($at)
    MEM_H(-0X3D66, ctx->r1) = ctx->r2;
    // 0x80082AE4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082AE8: addiu       $v0, $v0, 0x603C
    ctx->r2 = ADD32(ctx->r2, 0X603C);
    // 0x80082AEC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082AF0: sw          $v0, -0x3CC8($at)
    MEM_W(-0X3CC8, ctx->r1) = ctx->r2;
    // 0x80082AF4: addiu       $v0, $v0, 0x38
    ctx->r2 = ADD32(ctx->r2, 0X38);
    // 0x80082AF8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082AFC: sw          $v0, -0x3CC4($at)
    MEM_W(-0X3CC4, ctx->r1) = ctx->r2;
    // 0x80082B00: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082B04: addiu       $v0, $v0, 0x11B8
    ctx->r2 = ADD32(ctx->r2, 0X11B8);
    // 0x80082B08: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082B0C: sw          $v0, -0x3CBC($at)
    MEM_W(-0X3CBC, ctx->r1) = ctx->r2;
    // 0x80082B10: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082B14: sw          $v1, -0x3CC0($at)
    MEM_W(-0X3CC0, ctx->r1) = ctx->r3;
    // 0x80082B18: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082B1C: j           L_80082C5C
    // 0x80082B20: lw          $v0, 0x625C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X625C);
        goto L_80082C5C;
    // 0x80082B20: lw          $v0, 0x625C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X625C);
L_80082B24:
    // 0x80082B24: bne         $a1, $v0, L_80082BC4
    if (ctx->r5 != ctx->r2) {
        // 0x80082B28: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80082BC4;
    }
    // 0x80082B28: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80082B2C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082B30: sh          $zero, -0x3D48($at)
    MEM_H(-0X3D48, ctx->r1) = 0;
    // 0x80082B34: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082B38: sh          $zero, -0x3D46($at)
    MEM_H(-0X3D46, ctx->r1) = 0;
    // 0x80082B3C: lui         $s0, 0x54
    ctx->r16 = S32(0X54 << 16);
    // 0x80082B40: addiu       $s0, $s0, 0x1A00
    ctx->r16 = ADD32(ctx->r16, 0X1A00);
    // 0x80082B44: lui         $s1, 0x54
    ctx->r17 = S32(0X54 << 16);
    // 0x80082B48: addiu       $s1, $s1, 0x4190
    ctx->r17 = ADD32(ctx->r17, 0X4190);
    // 0x80082B4C: jal         0x80025E1C
    // 0x80082B50: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_64;
    // 0x80082B50: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_64:
    // 0x80082B54: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80082B58: sw          $v0, 0x6260($at)
    MEM_W(0X6260, ctx->r1) = ctx->r2;
    // 0x80082B5C: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x80082B60: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x80082B60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80082B64: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80082B68: jal         0x8002724C
    // 0x80082B6C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_65;
    // 0x80082B6C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_65:
    // 0x80082B70: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80082B74: lw          $v1, 0x6260($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6260);
    // 0x80082B78: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80082B7C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082B80: sh          $v0, -0x3D64($at)
    MEM_H(-0X3D64, ctx->r1) = ctx->r2;
    // 0x80082B84: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082B88: addiu       $v0, $v0, 0x60AC
    ctx->r2 = ADD32(ctx->r2, 0X60AC);
    // 0x80082B8C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082B90: sw          $v0, -0x3CB0($at)
    MEM_W(-0X3CB0, ctx->r1) = ctx->r2;
    // 0x80082B94: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x80082B98: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082B9C: sw          $v0, -0x3CAC($at)
    MEM_W(-0X3CAC, ctx->r1) = ctx->r2;
    // 0x80082BA0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082BA4: addiu       $v0, $v0, 0x1228
    ctx->r2 = ADD32(ctx->r2, 0X1228);
    // 0x80082BA8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082BAC: sw          $v0, -0x3CA4($at)
    MEM_W(-0X3CA4, ctx->r1) = ctx->r2;
    // 0x80082BB0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082BB4: sw          $v1, -0x3CA8($at)
    MEM_W(-0X3CA8, ctx->r1) = ctx->r3;
    // 0x80082BB8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082BBC: j           L_80082C5C
    // 0x80082BC0: lw          $v0, 0x6260($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6260);
        goto L_80082C5C;
    // 0x80082BC0: lw          $v0, 0x6260($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6260);
L_80082BC4:
    // 0x80082BC4: bne         $a1, $v0, L_80082C5C
    if (ctx->r5 != ctx->r2) {
        // 0x80082BC8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80082C5C;
    }
    // 0x80082BC8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80082BCC: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x80082BD0: bne         $v0, $a3, L_80082C5C
    if (ctx->r2 != ctx->r7) {
        // 0x80082BD4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80082C5C;
    }
    // 0x80082BD4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80082BD8: lui         $s0, 0x54
    ctx->r16 = S32(0X54 << 16);
    // 0x80082BDC: addiu       $s0, $s0, 0x4190
    ctx->r16 = ADD32(ctx->r16, 0X4190);
    // 0x80082BE0: lui         $s1, 0x54
    ctx->r17 = S32(0X54 << 16);
    // 0x80082BE4: addiu       $s1, $s1, 0x4E60
    ctx->r17 = ADD32(ctx->r17, 0X4E60);
    // 0x80082BE8: jal         0x80025E1C
    // 0x80082BEC: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    func_80025E1C_121C(rdram, ctx);
        goto after_66;
    // 0x80082BEC: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    after_66:
    // 0x80082BF0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80082BF4: sw          $v0, 0x6264($at)
    MEM_W(0X6264, ctx->r1) = ctx->r2;
    // 0x80082BF8: beq         $v0, $zero, L_80082C58
    if (ctx->r2 == 0) {
        // 0x80082BFC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80082C58;
    }
    // 0x80082BFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80082C00: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80082C04: jal         0x8002724C
    // 0x80082C08: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_67;
    // 0x80082C08: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_67:
    // 0x80082C0C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80082C10: lw          $v0, 0x6264($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6264);
    // 0x80082C14: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80082C18: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082C1C: sh          $v1, -0x3D62($at)
    MEM_H(-0X3D62, ctx->r1) = ctx->r3;
    // 0x80082C20: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80082C24: addiu       $v1, $v1, 0x61EC
    ctx->r3 = ADD32(ctx->r3, 0X61EC);
    // 0x80082C28: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082C2C: sw          $v1, -0x3C98($at)
    MEM_W(-0X3C98, ctx->r1) = ctx->r3;
    // 0x80082C30: addiu       $v1, $v1, 0x30
    ctx->r3 = ADD32(ctx->r3, 0X30);
    // 0x80082C34: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082C38: sw          $v1, -0x3C94($at)
    MEM_W(-0X3C94, ctx->r1) = ctx->r3;
    // 0x80082C3C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80082C40: addiu       $v1, $v1, 0x1368
    ctx->r3 = ADD32(ctx->r3, 0X1368);
    // 0x80082C44: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082C48: sw          $v1, -0x3C8C($at)
    MEM_W(-0X3C8C, ctx->r1) = ctx->r3;
    // 0x80082C4C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082C50: j           L_80082C5C
    // 0x80082C54: sw          $v0, -0x3C90($at)
    MEM_W(-0X3C90, ctx->r1) = ctx->r2;
        goto L_80082C5C;
    // 0x80082C54: sw          $v0, -0x3C90($at)
    MEM_W(-0X3C90, ctx->r1) = ctx->r2;
L_80082C58:
    // 0x80082C58: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80082C5C:
    // 0x80082C5C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80082C60: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80082C64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80082C68: jr          $ra
    // 0x80082C6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80082C6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800786E8_53AE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800786E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800786EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800786F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800786F4: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x800786F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800786FC: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    // 0x80078700: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80078704: jal         0x8003F780
    // 0x80078708: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8003F780_1AB80(rdram, ctx);
        goto after_0;
    // 0x80078708: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8007870C: bne         $v0, $zero, L_800787B4
    if (ctx->r2 != 0) {
        // 0x80078710: lui         $v0, 0x3D48
        ctx->r2 = S32(0X3D48 << 16);
            goto L_800787B4;
    }
    // 0x80078710: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x80078714: lbu         $a1, 0xA($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XA);
    // 0x80078718: ori         $v0, $v0, 0x2E
    ctx->r2 = ctx->r2 | 0X2E;
    // 0x8007871C: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x80078720: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80078724: sll         $a0, $a1, 3
    ctx->r4 = S32(ctx->r5 << 3);
    // 0x80078728: sll         $v0, $a1, 11
    ctx->r2 = S32(ctx->r5 << 11);
    // 0x8007872C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80078730: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80078734: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80078738: sll         $a1, $a1, 19
    ctx->r5 = S32(ctx->r5 << 19);
    // 0x8007873C: or          $a0, $a0, $a1
    ctx->r4 = ctx->r4 | ctx->r5;
    // 0x80078740: sw          $a0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r4;
    // 0x80078744: addiu       $v0, $v1, 0xFF
    ctx->r2 = ADD32(ctx->r3, 0XFF);
    // 0x80078748: beq         $v1, $zero, L_800787B4
    if (ctx->r3 == 0) {
        // 0x8007874C: sb          $v0, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r2;
            goto L_800787B4;
    }
    // 0x8007874C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80078750: lhu         $v0, 0x30($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X30);
    // 0x80078754: lhu         $t1, 0x28($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X28);
    // 0x80078758: lhu         $a0, 0x1C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1C);
    // 0x8007875C: lhu         $v1, 0x32($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X32);
    // 0x80078760: lhu         $t2, 0x2A($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X2A);
    // 0x80078764: lhu         $a2, 0x1E($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X1E);
    // 0x80078768: lhu         $a1, 0x34($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X34);
    // 0x8007876C: lhu         $t3, 0x2C($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X2C);
    // 0x80078770: lhu         $a3, 0x20($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X20);
    // 0x80078774: lhu         $t0, 0x26($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X26);
    // 0x80078778: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x8007877C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80078780: addu        $v1, $v1, $t2
    ctx->r3 = ADD32(ctx->r3, ctx->r10);
    // 0x80078784: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80078788: addu        $a1, $a1, $t3
    ctx->r5 = ADD32(ctx->r5, ctx->r11);
    // 0x8007878C: addu        $a3, $a3, $a1
    ctx->r7 = ADD32(ctx->r7, ctx->r5);
    // 0x80078790: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x80078794: sh          $v0, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r2;
    // 0x80078798: sh          $a0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r4;
    // 0x8007879C: sh          $v1, 0x32($s0)
    MEM_H(0X32, ctx->r16) = ctx->r3;
    // 0x800787A0: sh          $a2, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r6;
    // 0x800787A4: sh          $a1, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r5;
    // 0x800787A8: sh          $a3, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r7;
    // 0x800787AC: j           L_800787C0
    // 0x800787B0: sh          $t0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r8;
        goto L_800787C0;
    // 0x800787B0: sh          $t0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r8;
L_800787B4:
    // 0x800787B4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x800787B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800787BC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_800787C0:
    // 0x800787C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800787C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800787C8: jr          $ra
    // 0x800787CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800787CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003B2B4_166B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B2B4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003B2B8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8003B2BC: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x8003B2C0: lw          $s2, -0x6F9C($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X6F9C);
    // 0x8003B2C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8003B2C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8003B2CC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8003B2D0: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x8003B2D4: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8003B2D8: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x8003B2DC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8003B2E0: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x8003B2E4: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8003B2E8: sltiu       $v0, $s2, 0x40
    ctx->r2 = ctx->r18 < 0X40 ? 1 : 0;
    // 0x8003B2EC: beq         $v0, $zero, L_8003B3D4
    if (ctx->r2 == 0) {
        // 0x8003B2F0: sw          $s1, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r17;
            goto L_8003B3D4;
    }
    // 0x8003B2F0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8003B2F4: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8003B2F8: sll         $s1, $s2, 4
    ctx->r17 = S32(ctx->r18 << 4);
    // 0x8003B2FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B300: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x8003B304: sh          $v0, -0x1140($at)
    MEM_H(-0X1140, ctx->r1) = ctx->r2;
    // 0x8003B308: lb          $v0, 0x76($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X76);
    // 0x8003B30C: beq         $v0, $zero, L_8003B31C
    if (ctx->r2 == 0) {
        // 0x8003B310: nop
    
            goto L_8003B31C;
    }
    // 0x8003B310: nop

    // 0x8003B314: j           L_8003B328
    // 0x8003B318: lh          $a2, 0x16($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X16);
        goto L_8003B328;
    // 0x8003B318: lh          $a2, 0x16($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X16);
L_8003B31C:
    // 0x8003B31C: jal         0x8003E934
    // 0x8003B320: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x8003B320: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8003B324: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
L_8003B328:
    // 0x8003B328: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B32C: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x8003B330: sh          $a2, -0x113E($at)
    MEM_H(-0X113E, ctx->r1) = ctx->r6;
    // 0x8003B334: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8003B338: sll         $a0, $s2, 4
    ctx->r4 = S32(ctx->r18 << 4);
    // 0x8003B33C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B340: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8003B344: sh          $v0, -0x113C($at)
    MEM_H(-0X113C, ctx->r1) = ctx->r2;
    // 0x8003B348: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8003B34C: lhu         $a1, 0x116($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X116);
    // 0x8003B350: sll         $v0, $s3, 14
    ctx->r2 = S32(ctx->r19 << 14);
    // 0x8003B354: or          $v0, $s4, $v0
    ctx->r2 = ctx->r20 | ctx->r2;
    // 0x8003B358: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B35C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8003B360: sh          $v0, -0x1138($at)
    MEM_H(-0X1138, ctx->r1) = ctx->r2;
    // 0x8003B364: sra         $v0, $s5, 6
    ctx->r2 = S32(SIGNED(ctx->r21) >> 6);
    // 0x8003B368: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x8003B36C: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8003B370: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8003B374: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8003B378: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B37C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8003B380: sh          $v1, -0x113A($at)
    MEM_H(-0X113A, ctx->r1) = ctx->r3;
    // 0x8003B384: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8003B388: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
    // 0x8003B38C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B390: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8003B394: sb          $zero, -0x1134($at)
    MEM_B(-0X1134, ctx->r1) = 0;
    // 0x8003B398: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B39C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8003B3A0: sb          $v0, -0x1133($at)
    MEM_B(-0X1133, ctx->r1) = ctx->r2;
    // 0x8003B3A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B3A8: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8003B3AC: sb          $zero, -0x1132($at)
    MEM_B(-0X1132, ctx->r1) = 0;
    // 0x8003B3B0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8003B3B4: lw          $v0, -0x6F9C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F9C);
    // 0x8003B3B8: subu        $v1, $a2, $v1
    ctx->r3 = SUB32(ctx->r6, ctx->r3);
    // 0x8003B3BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003B3C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B3C4: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8003B3C8: sh          $v1, -0x1136($at)
    MEM_H(-0X1136, ctx->r1) = ctx->r3;
    // 0x8003B3CC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8003B3D0: sw          $v0, -0x6F9C($at)
    MEM_W(-0X6F9C, ctx->r1) = ctx->r2;
L_8003B3D4:
    // 0x8003B3D4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8003B3D8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8003B3DC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8003B3E0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8003B3E4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8003B3E8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8003B3EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003B3F0: jr          $ra
    // 0x8003B3F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8003B3F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8008DA14_68E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008DA14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008DA18: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8008DA1C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8008DA20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008DA24: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8008DA28: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8008DA2C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8008DA30: jal         0x8008C984
    // 0x8008DA34: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_8008C984_67D84(rdram, ctx);
        goto after_0;
    // 0x8008DA34: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_0:
    // 0x8008DA38: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8008DA3C: sb          $v1, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r3;
    // 0x8008DA40: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8008DA44: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8008DA48: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8008DA4C: sb          $v1, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r3;
    // 0x8008DA50: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8008DA54: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8008DA58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008DA5C: jr          $ra
    // 0x8008DA60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8008DA60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800793AC_547AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800793AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800793B0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800793B4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x800793B8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x800793BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800793C0: addiu       $s0, $s1, 0x38
    ctx->r16 = ADD32(ctx->r17, 0X38);
    // 0x800793C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x800793C8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x800793CC: jal         0x8009A3B4
    // 0x800793D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x800793D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x800793D4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x800793D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x800793DC: lhu         $v0, 0x2C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2C);
    // 0x800793E0: lhu         $t3, 0x32($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X32);
    // 0x800793E4: lhu         $a3, 0x38($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X38);
    // 0x800793E8: lhu         $v1, 0x2E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2E);
    // 0x800793EC: lhu         $t4, 0x34($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X34);
    // 0x800793F0: lhu         $t1, 0x3A($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X3A);
    // 0x800793F4: lhu         $t0, 0x30($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X30);
    // 0x800793F8: lhu         $t5, 0x36($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X36);
    // 0x800793FC: lhu         $t2, 0x3C($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X3C);
    // 0x80079400: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80079404: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x80079408: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x8007940C: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x80079410: addu        $t1, $t1, $v1
    ctx->r9 = ADD32(ctx->r9, ctx->r3);
    // 0x80079414: addu        $t0, $t0, $t5
    ctx->r8 = ADD32(ctx->r8, ctx->r13);
    // 0x80079418: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x8007941C: sh          $v0, 0x2C($s1)
    MEM_H(0X2C, ctx->r17) = ctx->r2;
    // 0x80079420: sh          $a3, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r7;
    // 0x80079424: sh          $v1, 0x2E($s1)
    MEM_H(0X2E, ctx->r17) = ctx->r3;
    // 0x80079428: sh          $t1, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r9;
    // 0x8007942C: sh          $t0, 0x30($s1)
    MEM_H(0X30, ctx->r17) = ctx->r8;
    // 0x80079430: jal         0x8009A3B4
    // 0x80079434: sh          $t2, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r10;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80079434: sh          $t2, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r10;
    after_1:
    // 0x80079438: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8007943C: beq         $v0, $zero, L_80079454
    if (ctx->r2 == 0) {
        // 0x80079440: nop
    
            goto L_80079454;
    }
    // 0x80079440: nop

    // 0x80079444: jal         0x800799AC
    // 0x80079448: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800799AC_54DAC(rdram, ctx);
        goto after_2;
    // 0x80079448: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8007944C: j           L_80079460
    // 0x80079450: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
        goto L_80079460;
    // 0x80079450: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_80079454:
    // 0x80079454: jal         0x80079A68
    // 0x80079458: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80079A68_54E68(rdram, ctx);
        goto after_3;
    // 0x80079458: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8007945C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_80079460:
    // 0x80079460: lbu         $a3, 0x3($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X3);
    // 0x80079464: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80079468: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8007946C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80079470: sll         $v1, $a3, 1
    ctx->r3 = S32(ctx->r7 << 1);
    // 0x80079474: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x80079478: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8007947C: sll         $a3, $v0, 1
    ctx->r7 = S32(ctx->r2 << 1);
    // 0x80079480: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x80079484: sll         $a3, $a3, 2
    ctx->r7 = S32(ctx->r7 << 2);
    // 0x80079488: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007948C: addiu       $v0, $v0, -0x2ED4
    ctx->r2 = ADD32(ctx->r2, -0X2ED4);
    // 0x80079490: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x80079494: jal         0x800410F0
    // 0x80079498: addu        $a3, $v1, $a3
    ctx->r7 = ADD32(ctx->r3, ctx->r7);
    func_800410F0_1C4F0(rdram, ctx);
        goto after_4;
    // 0x80079498: addu        $a3, $v1, $a3
    ctx->r7 = ADD32(ctx->r3, ctx->r7);
    after_4:
    // 0x8007949C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x800794A0: beq         $s0, $zero, L_80079560
    if (ctx->r16 == 0) {
        // 0x800794A4: nop
    
            goto L_80079560;
    }
    // 0x800794A4: nop

    // 0x800794A8: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x800794AC: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    // 0x800794B0: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x800794B4: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    // 0x800794B8: lhu         $v0, 0x14($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X14);
    // 0x800794BC: sh          $v0, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r2;
    // 0x800794C0: andi        $v0, $s0, 0x1000
    ctx->r2 = ctx->r16 & 0X1000;
    // 0x800794C4: bne         $v0, $zero, L_800794E4
    if (ctx->r2 != 0) {
        // 0x800794C8: nop
    
            goto L_800794E4;
    }
    // 0x800794C8: nop

    // 0x800794CC: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x800794D0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800794D4: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x800794D8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x800794DC: bne         $v0, $zero, L_80079558
    if (ctx->r2 != 0) {
        // 0x800794E0: addiu       $a0, $s1, 0x2C
        ctx->r4 = ADD32(ctx->r17, 0X2C);
            goto L_80079558;
    }
    // 0x800794E0: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
L_800794E4:
    // 0x800794E4: lhu         $v0, 0x2E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2E);
    // 0x800794E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800794EC: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x800794F0: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x800794F4: beq         $v0, $zero, L_80079544
    if (ctx->r2 == 0) {
        // 0x800794F8: addiu       $a1, $s1, 0x18
        ctx->r5 = ADD32(ctx->r17, 0X18);
            goto L_80079544;
    }
    // 0x800794F8: addiu       $a1, $s1, 0x18
    ctx->r5 = ADD32(ctx->r17, 0X18);
    // 0x800794FC: lh          $a0, 0xC($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XC);
    // 0x80079500: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80079504: lhu         $a2, 0x3E($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X3E);
    // 0x80079508: addiu       $v1, $zero, 0x96
    ctx->r3 = ADD32(0, 0X96);
    // 0x8007950C: sh          $zero, 0x2E($s1)
    MEM_H(0X2E, ctx->r17) = 0;
    // 0x80079510: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
    // 0x80079514: sh          $zero, 0x26($s1)
    MEM_H(0X26, ctx->r17) = 0;
    // 0x80079518: sh          $zero, 0x24($s1)
    MEM_H(0X24, ctx->r17) = 0;
    // 0x8007951C: sh          $zero, 0x22($s1)
    MEM_H(0X22, ctx->r17) = 0;
    // 0x80079520: sh          $zero, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = 0;
    // 0x80079524: sh          $zero, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = 0;
    // 0x80079528: sh          $zero, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = 0;
    // 0x8007952C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80079530: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80079534: sh          $a2, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r6;
    // 0x80079538: sh          $a2, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r6;
    // 0x8007953C: jal         0x800319B4
    // 0x80079540: sh          $a2, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r6;
    func_800319B4_CDB4(rdram, ctx);
        goto after_5;
    // 0x80079540: sh          $a2, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r6;
    after_5:
L_80079544:
    // 0x80079544: lhu         $v0, 0x2E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2E);
    // 0x80079548: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8007954C: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80079550: sh          $v0, 0x2E($s1)
    MEM_H(0X2E, ctx->r17) = ctx->r2;
    // 0x80079554: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
L_80079558:
    // 0x80079558: jal         0x80040834
    // 0x8007955C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80040834_1BC34(rdram, ctx);
        goto after_6;
    // 0x8007955C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
L_80079560:
    // 0x80079560: jal         0x80079AC8
    // 0x80079564: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80079AC8_54EC8(rdram, ctx);
        goto after_7;
    // 0x80079564: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x80079568: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8007956C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80079570: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80079574: jr          $ra
    // 0x80079578: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80079578: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8007BD7C_5717C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007BD7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007BD80: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8007BD84: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8007BD88: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8007BD8C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8007BD90: jal         0x8004F144
    // 0x8007BD94: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8007BD94: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8007BD98: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8007BD9C: beq         $a0, $zero, L_8007BDD4
    if (ctx->r4 == 0) {
        // 0x8007BDA0: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8007BDD4;
    }
    // 0x8007BDA0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8007BDA4: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8007BDA8: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x8007BDAC: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8007BDB0: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8007BDB4: sh          $v0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r2;
    // 0x8007BDB8: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8007BDBC: sh          $v0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r2;
    // 0x8007BDC0: lhu         $v1, 0x18($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X18);
    // 0x8007BDC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007BDC8: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x8007BDCC: sb          $s1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r17;
    // 0x8007BDD0: sh          $v1, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r3;
L_8007BDD4:
    // 0x8007BDD4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8007BDD8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8007BDDC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8007BDE0: jr          $ra
    // 0x8007BDE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8007BDE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004B58C_2698C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004B58C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004B590: jr          $ra
    // 0x8004B594: sh          $a0, -0x3982($at)
    MEM_H(-0X3982, ctx->r1) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x8004B594: sh          $a0, -0x3982($at)
    MEM_H(-0X3982, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_80070100_4B500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80070100: lbu         $v0, 0x175($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X175);
    // 0x80070104: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80070108: jr          $ra
    // 0x8007010C: sb          $v0, 0x175($a0)
    MEM_B(0X175, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8007010C: sb          $v0, 0x175($a0)
    MEM_B(0X175, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80084CF0_600F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80084CF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80084CF4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80084CF8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x80084CFC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80084D00: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80084D04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80084D08: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x80084D0C: bltz        $v0, L_80084D28
    if (SIGNED(ctx->r2) < 0) {
        // 0x80084D10: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_80084D28;
    }
    // 0x80084D10: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80084D14: jal         0x800281C8
    // 0x80084D18: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    func_800281C8_35C8(rdram, ctx);
        goto after_0;
    // 0x80084D18: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    after_0:
    // 0x80084D1C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80084D20: bne         $s0, $zero, L_80084D30
    if (ctx->r16 != 0) {
        // 0x80084D24: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80084D30;
    }
    // 0x80084D24: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_80084D28:
    // 0x80084D28: j           L_80084D90
    // 0x80084D2C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80084D90;
    // 0x80084D2C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80084D30:
    // 0x80084D30: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80084D34: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x80084D38: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80084D3C: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
    // 0x80084D40: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x80084D44: sb          $v0, 0x48($s0)
    MEM_B(0X48, ctx->r16) = ctx->r2;
    // 0x80084D48: lbu         $v1, 0xF($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XF);
    // 0x80084D4C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80084D50: sb          $v0, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r2;
    // 0x80084D54: sb          $v0, 0x4B($s0)
    MEM_B(0X4B, ctx->r16) = ctx->r2;
    // 0x80084D58: sb          $v1, 0x49($s0)
    MEM_B(0X49, ctx->r16) = ctx->r3;
    // 0x80084D5C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x80084D60: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80084D64: jal         0x8002C5A4
    // 0x80084D68: sb          $v0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r2;
    func_8002C5A4_79A4(rdram, ctx);
        goto after_1;
    // 0x80084D68: sb          $v0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r2;
    after_1:
    // 0x80084D6C: lhu         $v0, 0x1E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1E);
    // 0x80084D70: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80084D74: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80084D78: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x80084D7C: addiu       $a2, $a2, 0x5404
    ctx->r6 = ADD32(ctx->r6, 0X5404);
    // 0x80084D80: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80084D84: jal         0x80028220
    // 0x80084D88: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80028220_3620(rdram, ctx);
        goto after_2;
    // 0x80084D88: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x80084D8C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_80084D90:
    // 0x80084D90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80084D94: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80084D98: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80084D9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80084DA0: jr          $ra
    // 0x80084DA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80084DA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80069820_44C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80069820: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80069824: jr          $ra
    // 0x80069828: sb          $a0, 0x6B39($at)
    MEM_B(0X6B39, ctx->r1) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x80069828: sb          $a0, 0x6B39($at)
    MEM_B(0X6B39, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800353F8_107F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800353F8: jr          $ra
    // 0x800353FC: nop

    TRACE_RETURN()
    return;
    // 0x800353FC: nop

;}
RECOMP_FUNC void func_80066FF4_423F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80066FF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80066FF8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80066FFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80067000: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80067004: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80067008: lui         $a2, 0x100
    ctx->r6 = S32(0X100 << 16);
    // 0x8006700C: and         $v0, $a1, $a2
    ctx->r2 = ctx->r5 & ctx->r6;
    // 0x80067010: bne         $v0, $zero, L_80067040
    if (ctx->r2 != 0) {
        // 0x80067014: lui         $a0, 0xFFBF
        ctx->r4 = S32(0XFFBF << 16);
            goto L_80067040;
    }
    // 0x80067014: lui         $a0, 0xFFBF
    ctx->r4 = S32(0XFFBF << 16);
    // 0x80067018: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8006701C: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
    // 0x80067020: lbu         $a0, 0x79($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X79);
    // 0x80067024: or          $v0, $a1, $a2
    ctx->r2 = ctx->r5 | ctx->r6;
    // 0x80067028: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006702C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80067030: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80067034: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80067038: sb          $a0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r4;
    // 0x8006703C: lui         $a0, 0xFFBF
    ctx->r4 = S32(0XFFBF << 16);
L_80067040:
    // 0x80067040: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80067044: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x80067048: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8006704C: sb          $v0, 0x78($s0)
    MEM_B(0X78, ctx->r16) = ctx->r2;
    // 0x80067050: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x80067054: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x80067058: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8006705C: lb          $v0, -0x765B($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X765B);
    // 0x80067060: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80067064: lbu         $a0, -0x758F($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X758F);
    // 0x80067068: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8006706C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80067070: lbu         $v1, 0x4E00($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4E00);
    // 0x80067074: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80067078: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x8006707C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80067080: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80067084: sw          $v1, 0x77F0($at)
    MEM_W(0X77F0, ctx->r1) = ctx->r3;
    // 0x80067088: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8006708C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80067090: lbu         $v0, 0x4E04($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X4E04);
    // 0x80067094: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x80067098: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8006709C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800670A0: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x800670A4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800670A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800670AC: sw          $v1, 0x77F0($at)
    MEM_W(0X77F0, ctx->r1) = ctx->r3;
    // 0x800670B0: bgtz        $a0, L_80067178
    if (SIGNED(ctx->r4) > 0) {
        // 0x800670B4: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_80067178;
    }
    // 0x800670B4: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x800670B8: lw          $v0, 0xB8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB8);
    // 0x800670BC: andi        $v0, $v0, 0x8008
    ctx->r2 = ctx->r2 & 0X8008;
    // 0x800670C0: beq         $v0, $zero, L_8006710C
    if (ctx->r2 == 0) {
        // 0x800670C4: addiu       $a0, $zero, 0x83
        ctx->r4 = ADD32(0, 0X83);
            goto L_8006710C;
    }
    // 0x800670C4: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x800670C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800670CC: jal         0x8002A2F8
    // 0x800670D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x800670D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x800670D4: lui         $a2, 0xFEFF
    ctx->r6 = S32(0XFEFF << 16);
    // 0x800670D8: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    // 0x800670DC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800670E0: lbu         $a0, 0x71($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X71);
    // 0x800670E4: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x800670E8: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x800670EC: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x800670F0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800670F4: sb          $a0, 0x79($s0)
    MEM_B(0X79, ctx->r16) = ctx->r4;
    // 0x800670F8: lbu         $a0, 0x3($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X3);
    // 0x800670FC: jal         0x80061510
    // 0x80067100: lbu         $a2, 0x4($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X4);
    func_80061510_3C910(rdram, ctx);
        goto after_1;
    // 0x80067100: lbu         $a2, 0x4($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X4);
    after_1:
    // 0x80067104: j           L_80067184
    // 0x80067108: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80067184;
    // 0x80067108: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8006710C:
    // 0x8006710C: lhu         $v0, 0xBA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XBA);
    // 0x80067110: andi        $v0, $v0, 0x6000
    ctx->r2 = ctx->r2 & 0X6000;
    // 0x80067114: beq         $v0, $zero, L_80067180
    if (ctx->r2 == 0) {
        // 0x80067118: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_80067180;
    }
    // 0x80067118: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x8006711C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80067120: jal         0x8002A2F8
    // 0x80067124: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x80067124: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80067128: lui         $a0, 0xFEFF
    ctx->r4 = S32(0XFEFF << 16);
    // 0x8006712C: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    // 0x80067130: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80067134: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x80067138: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x8006713C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80067140: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80067144: lbu         $a0, 0x1($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X1);
    // 0x80067148: jal         0x80061510
    // 0x8006714C: lbu         $a2, 0x2($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X2);
    func_80061510_3C910(rdram, ctx);
        goto after_3;
    // 0x8006714C: lbu         $a2, 0x2($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X2);
    after_3:
    // 0x80067150: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80067154: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80067158: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x8006715C: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x80067160: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80067164: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80067168: sw          $v0, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r2;
    // 0x8006716C: lbu         $v0, 0x71($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X71);
    // 0x80067170: j           L_80067180
    // 0x80067174: sb          $v0, 0x79($s0)
    MEM_B(0X79, ctx->r16) = ctx->r2;
        goto L_80067180;
    // 0x80067174: sb          $v0, 0x79($s0)
    MEM_B(0X79, ctx->r16) = ctx->r2;
L_80067178:
    // 0x80067178: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8006717C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80067180:
    // 0x80067180: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80067184:
    // 0x80067184: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80067188: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006718C: jr          $ra
    // 0x80067190: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80067190: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80032FC0_E3C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80032FC0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80032FC4: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80032FC8: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80032FCC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80032FD0: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x80032FD4: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80032FD8: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x80032FDC: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80032FE0: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x80032FE4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80032FE8: addiu       $a0, $a0, 0x2830
    ctx->r4 = ADD32(ctx->r4, 0X2830);
    // 0x80032FEC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80032FF0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80032FF4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80032FF8: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x80032FFC: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x80033000: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80033004: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80033008: jal         0x8009A3B4
    // 0x8003300C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8003300C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    after_0:
    // 0x80033010: lui         $fp, 0x8020
    ctx->r30 = S32(0X8020 << 16);
    // 0x80033014: addiu       $fp, $fp, 0x4400
    ctx->r30 = ADD32(ctx->r30, 0X4400);
    // 0x80033018: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    // 0x8003301C: lui         $s5, 0x8021
    ctx->r21 = S32(0X8021 << 16);
    // 0x80033020: addiu       $s5, $s5, 0x990
    ctx->r21 = ADD32(ctx->r21, 0X990);
    // 0x80033024: negu        $v0, $s3
    ctx->r2 = SUB32(0, ctx->r19);
    // 0x80033028: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8003302C: sh          $v0, 0x0($fp)
    MEM_H(0X0, ctx->r30) = ctx->r2;
    // 0x80033030: andi        $v0, $s6, 0xFFF
    ctx->r2 = ctx->r22 & 0XFFF;
    // 0x80033034: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80033038: sw          $s2, 0x2840($at)
    MEM_W(0X2840, ctx->r1) = ctx->r18;
    // 0x8003303C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80033040: sw          $s6, 0x2844($at)
    MEM_W(0X2844, ctx->r1) = ctx->r22;
    // 0x80033044: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80033048: sw          $s3, 0x2848($at)
    MEM_W(0X2848, ctx->r1) = ctx->r19;
    // 0x8003304C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80033050: sh          $v0, 0x4402($at)
    MEM_H(0X4402, ctx->r1) = ctx->r2;
    // 0x80033054: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80033058: sh          $zero, 0x4404($at)
    MEM_H(0X4404, ctx->r1) = 0;
    // 0x8003305C: jal         0x80031600
    // 0x80033060: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_1;
    // 0x80033060: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_1:
    // 0x80033064: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80033068: addiu       $s7, $s5, 0x20
    ctx->r23 = ADD32(ctx->r21, 0X20);
    // 0x8003306C: jal         0x80031E10
    // 0x80033070: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    func_80031E10_D210(rdram, ctx);
        goto after_2;
    // 0x80033070: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    after_2:
    // 0x80033074: lui         $s1, 0x8021
    ctx->r17 = S32(0X8021 << 16);
    // 0x80033078: lbu         $s1, 0xB61($s1)
    ctx->r17 = MEM_BU(ctx->r17, 0XB61);
    // 0x8003307C: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x80033080: jal         0x800324B4
    // 0x80033084: sllv        $s1, $s2, $s1
    ctx->r17 = S32(ctx->r18 << (ctx->r17 & 31));
    func_800324B4_D8B4(rdram, ctx);
        goto after_3;
    // 0x80033084: sllv        $s1, $s2, $s1
    ctx->r17 = S32(ctx->r18 << (ctx->r17 & 31));
    after_3:
    // 0x80033088: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8003308C: jal         0x80032498
    // 0x80033090: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_80032498_D898(rdram, ctx);
        goto after_4;
    // 0x80033090: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_4:
    // 0x80033094: nop

    // 0x80033098: mult        $s1, $s0
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003309C: mflo        $s0
    ctx->r16 = lo;
    // 0x800330A0: sra         $s0, $s0, 12
    ctx->r16 = S32(SIGNED(ctx->r16) >> 12);
    // 0x800330A4: nop

    // 0x800330A8: mult        $s0, $v0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800330AC: mflo        $s0
    ctx->r16 = lo;
    // 0x800330B0: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x800330B4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x800330B8: lbu         $v1, 0xB61($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB61);
    // 0x800330BC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x800330C0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800330C4: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x800330C8: sra         $s0, $s0, 12
    ctx->r16 = S32(SIGNED(ctx->r16) >> 12);
    // 0x800330CC: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x800330D0: jal         0x800324B4
    // 0x800330D4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_5;
    // 0x800330D4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x800330D8: nop

    // 0x800330DC: mult        $s1, $v0
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800330E0: mflo        $v0
    ctx->r2 = lo;
    // 0x800330E4: lw          $v1, 0x4($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X4);
    // 0x800330E8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x800330EC: lbu         $a1, 0xB61($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0XB61);
    // 0x800330F0: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x800330F4: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x800330F8: sllv        $v1, $v1, $a1
    ctx->r3 = S32(ctx->r3 << (ctx->r5 & 31));
    // 0x800330FC: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80033100: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80033104: jal         0x80032498
    // 0x80033108: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_6;
    // 0x80033108: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    after_6:
    // 0x8003310C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80033110: jal         0x80032498
    // 0x80033114: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_80032498_D898(rdram, ctx);
        goto after_7;
    // 0x80033114: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_7:
    // 0x80033118: nop

    // 0x8003311C: mult        $s1, $s0
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033120: mflo        $s1
    ctx->r17 = lo;
    // 0x80033124: sra         $s1, $s1, 12
    ctx->r17 = S32(SIGNED(ctx->r17) >> 12);
    // 0x80033128: nop

    // 0x8003312C: mult        $s1, $v0
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033130: mflo        $s1
    ctx->r17 = lo;
    // 0x80033134: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x80033138: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8003313C: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x80033140: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80033144: lbu         $v1, 0xB61($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB61);
    // 0x80033148: addiu       $a2, $s5, 0x34
    ctx->r6 = ADD32(ctx->r21, 0X34);
    // 0x8003314C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80033150: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x80033154: sra         $s1, $s1, 12
    ctx->r17 = S32(SIGNED(ctx->r17) >> 12);
    // 0x80033158: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8003315C: jal         0x80030AA0
    // 0x80033160: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80030AA0_BEA0(rdram, ctx);
        goto after_8;
    // 0x80033160: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_8:
    // 0x80033164: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x80033168: addiu       $a0, $a0, 0x4760
    ctx->r4 = ADD32(ctx->r4, 0X4760);
    // 0x8003316C: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x80033170: jal         0x8009A3B4
    // 0x80033174: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80033174: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_9:
    // 0x80033178: jal         0x800324B4
    // 0x8003317C: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_10;
    // 0x8003317C: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    after_10:
    // 0x80033180: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80033184: jal         0x80032498
    // 0x80033188: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_80032498_D898(rdram, ctx);
        goto after_11;
    // 0x80033188: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_11:
    // 0x8003318C: nop

    // 0x80033190: mult        $s2, $s0
    result = S64(S32(ctx->r18)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033194: mflo        $s0
    ctx->r16 = lo;
    // 0x80033198: sra         $s0, $s0, 12
    ctx->r16 = S32(SIGNED(ctx->r16) >> 12);
    // 0x8003319C: nop

    // 0x800331A0: mult        $s0, $v0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800331A4: mflo        $s0
    ctx->r16 = lo;
    // 0x800331A8: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x800331AC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x800331B0: sra         $s0, $s0, 12
    ctx->r16 = S32(SIGNED(ctx->r16) >> 12);
    // 0x800331B4: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    // 0x800331B8: jal         0x800324B4
    // 0x800331BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_800324B4_D8B4(rdram, ctx);
        goto after_12;
    // 0x800331BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_12:
    // 0x800331C0: nop

    // 0x800331C4: mult        $s2, $v0
    result = S64(S32(ctx->r18)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800331C8: mflo        $v0
    ctx->r2 = lo;
    // 0x800331CC: lw          $v1, 0x4($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X4);
    // 0x800331D0: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x800331D4: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x800331D8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800331DC: jal         0x80032498
    // 0x800331E0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_13;
    // 0x800331E0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_13:
    // 0x800331E4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x800331E8: jal         0x80032498
    // 0x800331EC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_80032498_D898(rdram, ctx);
        goto after_14;
    // 0x800331EC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_14:
    // 0x800331F0: nop

    // 0x800331F4: mult        $s2, $s0
    result = S64(S32(ctx->r18)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800331F8: mflo        $s2
    ctx->r18 = lo;
    // 0x800331FC: sra         $s2, $s2, 12
    ctx->r18 = S32(SIGNED(ctx->r18) >> 12);
    // 0x80033200: nop

    // 0x80033204: mult        $s2, $v0
    result = S64(S32(ctx->r18)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033208: mflo        $s2
    ctx->r18 = lo;
    // 0x8003320C: addiu       $a0, $fp, -0x10
    ctx->r4 = ADD32(ctx->r30, -0X10);
    // 0x80033210: addiu       $a1, $fp, -0x20
    ctx->r5 = ADD32(ctx->r30, -0X20);
    // 0x80033214: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x80033218: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8003321C: sra         $s2, $s2, 12
    ctx->r18 = S32(SIGNED(ctx->r18) >> 12);
    // 0x80033220: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x80033224: jal         0x8009A3B4
    // 0x80033228: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x80033228: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_15:
    // 0x8003322C: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x80033230: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x80033234: lw          $v1, 0x14($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X14);
    // 0x80033238: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8003323C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80033240: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80033244: sh          $v0, 0x5E90($at)
    MEM_H(0X5E90, ctx->r1) = ctx->r2;
    // 0x80033248: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8003324C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80033250: sw          $v0, -0x20($fp)
    MEM_W(-0X20, ctx->r30) = ctx->r2;
    // 0x80033254: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80033258: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x8003325C: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80033260: sh          $v1, 0x5E92($at)
    MEM_H(0X5E92, ctx->r1) = ctx->r3;
    // 0x80033264: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80033268: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8003326C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80033270: sw          $v1, 0x43E4($at)
    MEM_W(0X43E4, ctx->r1) = ctx->r3;
    // 0x80033274: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80033278: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x8003327C: sh          $v0, 0x5E94($at)
    MEM_H(0X5E94, ctx->r1) = ctx->r2;
    // 0x80033280: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80033284: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80033288: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003328C: sw          $v0, 0x43E8($at)
    MEM_W(0X43E8, ctx->r1) = ctx->r2;
    // 0x80033290: jal         0x80030AA0
    // 0x80033294: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_80030AA0_BEA0(rdram, ctx);
        goto after_16;
    // 0x80033294: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_16:
    // 0x80033298: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8003329C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x800332A0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800332A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800332A8: sw          $v0, 0x6B58($at)
    MEM_W(0X6B58, ctx->r1) = ctx->r2;
    // 0x800332AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800332B0: sw          $v1, 0x6B5C($at)
    MEM_W(0X6B5C, ctx->r1) = ctx->r3;
    // 0x800332B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800332B8: sw          $a0, 0x6B60($at)
    MEM_W(0X6B60, ctx->r1) = ctx->r4;
    // 0x800332BC: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x800332C0: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x800332C4: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x800332C8: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x800332CC: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x800332D0: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x800332D4: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x800332D8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x800332DC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x800332E0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x800332E4: jr          $ra
    // 0x800332E8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x800332E8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8002C654_7A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002C654: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002C658: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8002C65C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8002C660: addiu       $a1, $a1, -0x78E0
    ctx->r5 = ADD32(ctx->r5, -0X78E0);
    // 0x8002C664: jal         0x8009A3B4
    // 0x8002C668: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8002C668: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_0:
    // 0x8002C66C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002C670: jr          $ra
    // 0x8002C674: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002C674: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void bcopy_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80099F90: beq         $a2, $zero, L_8009A000
    if (ctx->r6 == 0) {
        // 0x80099F94: addu        $a3, $a1, $zero
        ctx->r7 = ADD32(ctx->r5, 0);
            goto L_8009A000;
    }
    // 0x80099F94: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x80099F98: beq         $a0, $a1, L_8009A000
    if (ctx->r4 == ctx->r5) {
        // 0x80099F9C: nop
    
            goto L_8009A000;
    }
    // 0x80099F9C: nop

    // 0x80099FA0: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80099FA4: bne         $at, $zero, L_80099FC4
    if (ctx->r1 != 0) {
        // 0x80099FA8: nop
    
            goto L_80099FC4;
    }
    // 0x80099FA8: nop

    // 0x80099FAC: add         $v0, $a0, $a2
    ctx->r2 = ADD32(ctx->r4, ctx->r6);
    // 0x80099FB0: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80099FB4: beq         $at, $zero, L_80099FC4
    if (ctx->r1 == 0) {
        // 0x80099FB8: nop
    
            goto L_80099FC4;
    }
    // 0x80099FB8: nop

    // 0x80099FBC: b           L_8009A130
    // 0x80099FC0: nop

        goto L_8009A130;
    // 0x80099FC0: nop

L_80099FC4:
    // 0x80099FC4: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x80099FC8: bne         $at, $zero, L_80099FE0
    if (ctx->r1 != 0) {
        // 0x80099FCC: nop
    
            goto L_80099FE0;
    }
    // 0x80099FCC: nop

    // 0x80099FD0: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
    // 0x80099FD4: andi        $v1, $a1, 0x3
    ctx->r3 = ctx->r5 & 0X3;
    // 0x80099FD8: beq         $v0, $v1, L_8009A008
    if (ctx->r2 == ctx->r3) {
        // 0x80099FDC: nop
    
            goto L_8009A008;
    }
    // 0x80099FDC: nop

L_80099FE0:
    // 0x80099FE0: beq         $a2, $zero, L_8009A000
    if (ctx->r6 == 0) {
        // 0x80099FE4: nop
    
            goto L_8009A000;
    }
    // 0x80099FE4: nop

    // 0x80099FE8: addu        $v1, $a0, $a2
    ctx->r3 = ADD32(ctx->r4, ctx->r6);
L_80099FEC:
    // 0x80099FEC: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x80099FF0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80099FF4: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80099FF8: bne         $a0, $v1, L_80099FEC
    if (ctx->r4 != ctx->r3) {
        // 0x80099FFC: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_80099FEC;
    }
    // 0x80099FFC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_8009A000:
    // 0x8009A000: jr          $ra
    // 0x8009A004: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    TRACE_RETURN()
    return;
    // 0x8009A004: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
L_8009A008:
    // 0x8009A008: beq         $v0, $zero, L_8009A074
    if (ctx->r2 == 0) {
        // 0x8009A00C: nop
    
            goto L_8009A074;
    }
    // 0x8009A00C: nop

    // 0x8009A010: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009A014: beq         $v0, $at, L_8009A058
    if (ctx->r2 == ctx->r1) {
        // 0x8009A018: nop
    
            goto L_8009A058;
    }
    // 0x8009A018: nop

    // 0x8009A01C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8009A020: beq         $v0, $at, L_8009A040
    if (ctx->r2 == ctx->r1) {
        // 0x8009A024: nop
    
            goto L_8009A040;
    }
    // 0x8009A024: nop

    // 0x8009A028: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8009A02C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8009A030: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8009A034: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8009A038: b           L_8009A074
    // 0x8009A03C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
        goto L_8009A074;
    // 0x8009A03C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_8009A040:
    // 0x8009A040: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8009A044: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8009A048: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x8009A04C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8009A050: b           L_8009A074
    // 0x8009A054: addiu       $a2, $a2, -0x2
    ctx->r6 = ADD32(ctx->r6, -0X2);
        goto L_8009A074;
    // 0x8009A054: addiu       $a2, $a2, -0x2
    ctx->r6 = ADD32(ctx->r6, -0X2);
L_8009A058:
    // 0x8009A058: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8009A05C: lh          $v1, 0x1($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1);
    // 0x8009A060: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x8009A064: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8009A068: sh          $v1, 0x1($a1)
    MEM_H(0X1, ctx->r5) = ctx->r3;
    // 0x8009A06C: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    // 0x8009A070: addiu       $a2, $a2, -0x3
    ctx->r6 = ADD32(ctx->r6, -0X3);
L_8009A074:
    // 0x8009A074: slti        $at, $a2, 0x20
    ctx->r1 = SIGNED(ctx->r6) < 0X20 ? 1 : 0;
    // 0x8009A078: bne         $at, $zero, L_8009A0D0
    if (ctx->r1 != 0) {
        // 0x8009A07C: nop
    
            goto L_8009A0D0;
    }
    // 0x8009A07C: nop

    // 0x8009A080: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8009A084: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x8009A088: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x8009A08C: lw          $t1, 0xC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC);
    // 0x8009A090: lw          $t2, 0x10($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X10);
    // 0x8009A094: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x8009A098: lw          $t4, 0x18($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X18);
    // 0x8009A09C: lw          $t5, 0x1C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X1C);
    // 0x8009A0A0: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x8009A0A4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8009A0A8: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x8009A0AC: sw          $t0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r8;
    // 0x8009A0B0: sw          $t1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r9;
    // 0x8009A0B4: sw          $t2, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r10;
    // 0x8009A0B8: sw          $t3, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r11;
    // 0x8009A0BC: sw          $t4, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r12;
    // 0x8009A0C0: sw          $t5, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r13;
    // 0x8009A0C4: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x8009A0C8: b           L_8009A074
    // 0x8009A0CC: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
        goto L_8009A074;
    // 0x8009A0CC: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
L_8009A0D0:
    // 0x8009A0D0: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x8009A0D4: bne         $at, $zero, L_8009A10C
    if (ctx->r1 != 0) {
        // 0x8009A0D8: nop
    
            goto L_8009A10C;
    }
    // 0x8009A0D8: nop

    // 0x8009A0DC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8009A0E0: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x8009A0E4: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x8009A0E8: lw          $t1, 0xC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC);
    // 0x8009A0EC: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8009A0F0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8009A0F4: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x8009A0F8: sw          $t0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r8;
    // 0x8009A0FC: sw          $t1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r9;
    // 0x8009A100: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x8009A104: b           L_8009A0D0
    // 0x8009A108: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
        goto L_8009A0D0;
    // 0x8009A108: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
L_8009A10C:
    // 0x8009A10C: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x8009A110: bne         $at, $zero, L_80099FE0
    if (ctx->r1 != 0) {
        // 0x8009A114: nop
    
            goto L_80099FE0;
    }
    // 0x8009A114: nop

    // 0x8009A118: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8009A11C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8009A120: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8009A124: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8009A128: b           L_8009A10C
    // 0x8009A12C: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
        goto L_8009A10C;
    // 0x8009A12C: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
L_8009A130:
    // 0x8009A130: add         $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x8009A134: add         $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x8009A138: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x8009A13C: bne         $at, $zero, L_8009A154
    if (ctx->r1 != 0) {
        // 0x8009A140: nop
    
            goto L_8009A154;
    }
    // 0x8009A140: nop

    // 0x8009A144: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
    // 0x8009A148: andi        $v1, $a1, 0x3
    ctx->r3 = ctx->r5 & 0X3;
    // 0x8009A14C: beq         $v0, $v1, L_8009A184
    if (ctx->r2 == ctx->r3) {
        // 0x8009A150: nop
    
            goto L_8009A184;
    }
    // 0x8009A150: nop

L_8009A154:
    // 0x8009A154: beq         $a2, $zero, L_8009A000
    if (ctx->r6 == 0) {
        // 0x8009A158: nop
    
            goto L_8009A000;
    }
    // 0x8009A158: nop

    // 0x8009A15C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8009A160: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8009A164: subu        $v1, $a0, $a2
    ctx->r3 = SUB32(ctx->r4, ctx->r6);
L_8009A168:
    // 0x8009A168: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8009A16C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8009A170: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8009A174: bne         $a0, $v1, L_8009A168
    if (ctx->r4 != ctx->r3) {
        // 0x8009A178: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_8009A168;
    }
    // 0x8009A178: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8009A17C: jr          $ra
    // 0x8009A180: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    TRACE_RETURN()
    return;
    // 0x8009A180: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
L_8009A184:
    // 0x8009A184: beq         $v0, $zero, L_8009A1F0
    if (ctx->r2 == 0) {
        // 0x8009A188: nop
    
            goto L_8009A1F0;
    }
    // 0x8009A188: nop

    // 0x8009A18C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8009A190: beq         $v0, $at, L_8009A1D4
    if (ctx->r2 == ctx->r1) {
        // 0x8009A194: nop
    
            goto L_8009A1D4;
    }
    // 0x8009A194: nop

    // 0x8009A198: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8009A19C: beq         $v0, $at, L_8009A1BC
    if (ctx->r2 == ctx->r1) {
        // 0x8009A1A0: nop
    
            goto L_8009A1BC;
    }
    // 0x8009A1A0: nop

    // 0x8009A1A4: lb          $v0, -0x1($a0)
    ctx->r2 = MEM_B(ctx->r4, -0X1);
    // 0x8009A1A8: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8009A1AC: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
    // 0x8009A1B0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8009A1B4: b           L_8009A1F0
    // 0x8009A1B8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
        goto L_8009A1F0;
    // 0x8009A1B8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_8009A1BC:
    // 0x8009A1BC: lh          $v0, -0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, -0X2);
    // 0x8009A1C0: addiu       $a0, $a0, -0x2
    ctx->r4 = ADD32(ctx->r4, -0X2);
    // 0x8009A1C4: sh          $v0, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r2;
    // 0x8009A1C8: addiu       $a1, $a1, -0x2
    ctx->r5 = ADD32(ctx->r5, -0X2);
    // 0x8009A1CC: b           L_8009A1F0
    // 0x8009A1D0: addiu       $a2, $a2, -0x2
    ctx->r6 = ADD32(ctx->r6, -0X2);
        goto L_8009A1F0;
    // 0x8009A1D0: addiu       $a2, $a2, -0x2
    ctx->r6 = ADD32(ctx->r6, -0X2);
L_8009A1D4:
    // 0x8009A1D4: lb          $v0, -0x1($a0)
    ctx->r2 = MEM_B(ctx->r4, -0X1);
    // 0x8009A1D8: lh          $v1, -0x3($a0)
    ctx->r3 = MEM_H(ctx->r4, -0X3);
    // 0x8009A1DC: addiu       $a0, $a0, -0x3
    ctx->r4 = ADD32(ctx->r4, -0X3);
    // 0x8009A1E0: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
    // 0x8009A1E4: sh          $v1, -0x3($a1)
    MEM_H(-0X3, ctx->r5) = ctx->r3;
    // 0x8009A1E8: addiu       $a1, $a1, -0x3
    ctx->r5 = ADD32(ctx->r5, -0X3);
    // 0x8009A1EC: addiu       $a2, $a2, -0x3
    ctx->r6 = ADD32(ctx->r6, -0X3);
L_8009A1F0:
    // 0x8009A1F0: slti        $at, $a2, 0x20
    ctx->r1 = SIGNED(ctx->r6) < 0X20 ? 1 : 0;
    // 0x8009A1F4: bne         $at, $zero, L_8009A24C
    if (ctx->r1 != 0) {
        // 0x8009A1F8: nop
    
            goto L_8009A24C;
    }
    // 0x8009A1F8: nop

    // 0x8009A1FC: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x8009A200: lw          $v1, -0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X8);
    // 0x8009A204: lw          $t0, -0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, -0XC);
    // 0x8009A208: lw          $t1, -0x10($a0)
    ctx->r9 = MEM_W(ctx->r4, -0X10);
    // 0x8009A20C: lw          $t2, -0x14($a0)
    ctx->r10 = MEM_W(ctx->r4, -0X14);
    // 0x8009A210: lw          $t3, -0x18($a0)
    ctx->r11 = MEM_W(ctx->r4, -0X18);
    // 0x8009A214: lw          $t4, -0x1C($a0)
    ctx->r12 = MEM_W(ctx->r4, -0X1C);
    // 0x8009A218: lw          $t5, -0x20($a0)
    ctx->r13 = MEM_W(ctx->r4, -0X20);
    // 0x8009A21C: addiu       $a0, $a0, -0x20
    ctx->r4 = ADD32(ctx->r4, -0X20);
    // 0x8009A220: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
    // 0x8009A224: sw          $v1, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->r3;
    // 0x8009A228: sw          $t0, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->r8;
    // 0x8009A22C: sw          $t1, -0x10($a1)
    MEM_W(-0X10, ctx->r5) = ctx->r9;
    // 0x8009A230: sw          $t2, -0x14($a1)
    MEM_W(-0X14, ctx->r5) = ctx->r10;
    // 0x8009A234: sw          $t3, -0x18($a1)
    MEM_W(-0X18, ctx->r5) = ctx->r11;
    // 0x8009A238: sw          $t4, -0x1C($a1)
    MEM_W(-0X1C, ctx->r5) = ctx->r12;
    // 0x8009A23C: sw          $t5, -0x20($a1)
    MEM_W(-0X20, ctx->r5) = ctx->r13;
    // 0x8009A240: addiu       $a1, $a1, -0x20
    ctx->r5 = ADD32(ctx->r5, -0X20);
    // 0x8009A244: b           L_8009A1F0
    // 0x8009A248: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
        goto L_8009A1F0;
    // 0x8009A248: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
L_8009A24C:
    // 0x8009A24C: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x8009A250: bne         $at, $zero, L_8009A288
    if (ctx->r1 != 0) {
        // 0x8009A254: nop
    
            goto L_8009A288;
    }
    // 0x8009A254: nop

    // 0x8009A258: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x8009A25C: lw          $v1, -0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X8);
    // 0x8009A260: lw          $t0, -0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, -0XC);
    // 0x8009A264: lw          $t1, -0x10($a0)
    ctx->r9 = MEM_W(ctx->r4, -0X10);
    // 0x8009A268: addiu       $a0, $a0, -0x10
    ctx->r4 = ADD32(ctx->r4, -0X10);
    // 0x8009A26C: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
    // 0x8009A270: sw          $v1, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->r3;
    // 0x8009A274: sw          $t0, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->r8;
    // 0x8009A278: sw          $t1, -0x10($a1)
    MEM_W(-0X10, ctx->r5) = ctx->r9;
    // 0x8009A27C: addiu       $a1, $a1, -0x10
    ctx->r5 = ADD32(ctx->r5, -0X10);
    // 0x8009A280: b           L_8009A24C
    // 0x8009A284: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
        goto L_8009A24C;
    // 0x8009A284: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
L_8009A288:
    // 0x8009A288: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x8009A28C: bne         $at, $zero, L_8009A154
    if (ctx->r1 != 0) {
        // 0x8009A290: nop
    
            goto L_8009A154;
    }
    // 0x8009A290: nop

    // 0x8009A294: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x8009A298: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x8009A29C: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
    // 0x8009A2A0: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x8009A2A4: b           L_8009A288
    // 0x8009A2A8: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
        goto L_8009A288;
    // 0x8009A2A8: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x8009A2AC: nop

;}
RECOMP_FUNC void func_8007F27C_5A67C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007F27C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x8007F280: lw          $a1, -0x2660($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2660);
    // 0x8007F284: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x8007F288: lw          $a2, -0x265C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X265C);
    // 0x8007F28C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007F290: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8007F294: jal         0x8007E8D4
    // 0x8007F298: nop

    func_8007E8D4_59CD4(rdram, ctx);
        goto after_0;
    // 0x8007F298: nop

    after_0:
    // 0x8007F29C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8007F2A0: jr          $ra
    // 0x8007F2A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8007F2A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002A4C0_58C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A4C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A4C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8002A4C8: jal         0x8006033C
    // 0x8002A4CC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8002A4CC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_0:
    // 0x8002A4D0: beq         $v0, $zero, L_8002A4EC
    if (ctx->r2 == 0) {
        // 0x8002A4D4: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_8002A4EC;
    }
    // 0x8002A4D4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x8002A4D8: jal         0x8006033C
    // 0x8002A4DC: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8002A4DC: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    after_1:
    // 0x8002A4E0: bne         $v0, $zero, L_8002A4EC
    if (ctx->r2 != 0) {
        // 0x8002A4E4: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_8002A4EC;
    }
    // 0x8002A4E4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x8002A4E8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_8002A4EC:
    // 0x8002A4EC: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8002A4F0: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x8002A4F4: addiu       $v0, $v0, 0x6F72
    ctx->r2 = ADD32(ctx->r2, 0X6F72);
L_8002A4F8:
    // 0x8002A4F8: sh          $a0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r4;
    // 0x8002A4FC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8002A500: bgez        $v1, L_8002A4F8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8002A504: addiu       $v0, $v0, -0x2
        ctx->r2 = ADD32(ctx->r2, -0X2);
            goto L_8002A4F8;
    }
    // 0x8002A504: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8002A508: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002A50C: jr          $ra
    // 0x8002A510: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002A510: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8005B8B8_36CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005B8B8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005B8BC: lbu         $v1, -0x3E3D($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3E3D);
    // 0x8005B8C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005B8C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8005B8C8: lui         $s0, 0x8018
    ctx->r16 = S32(0X8018 << 16);
    // 0x8005B8CC: lw          $s0, -0x484C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X484C);
    // 0x8005B8D0: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x8005B8D4: beq         $v0, $zero, L_8005BEA0
    if (ctx->r2 == 0) {
        // 0x8005B8D8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8005BEA0;
    }
    // 0x8005B8D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005B8DC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8005B8E0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005B8E4: addu        $at, $at, $v0
    gpr jr_addend_8005B8EC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005B8E8: lw          $v0, 0x2640($at)
    ctx->r2 = ADD32(ctx->r1, 0X2640);
    // 0x8005B8EC: jr          $v0
    // 0x8005B8F0: nop

    switch (jr_addend_8005B8EC >> 2) {
        case 0: goto L_8005B8F4; break;
        case 1: goto L_8005B978; break;
        case 2: goto L_8005B9C4; break;
        case 3: goto L_8005BA4C; break;
        case 4: goto L_8005BAFC; break;
        case 5: goto L_8005BB9C; break;
        case 6: goto L_8005BD3C; break;
        case 7: goto L_8005BC68; break;
        case 8: goto L_8005BC9C; break;
        case 9: goto L_8005BD3C; break;
        case 10: goto L_8005BD8C; break;
        case 11: goto L_8005BE48; break;
        case 12: goto L_8005BE94; break;
        default: switch_error(__func__, 0x8005B8EC, 0x800D2640);
    }
    // 0x8005B8F0: nop

L_8005B8F4:
    // 0x8005B8F4: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8005B8F8: addiu       $a0, $a0, -0x3E18
    ctx->r4 = ADD32(ctx->r4, -0X3E18);
    // 0x8005B8FC: addiu       $a1, $a0, -0x1C
    ctx->r5 = ADD32(ctx->r4, -0X1C);
    // 0x8005B900: jal         0x8009A3B4
    // 0x8005B904: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8005B904: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x8005B908: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005B90C: lw          $v0, -0x3E24($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3E24);
    // 0x8005B910: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8005B914: lw          $a1, -0x3E20($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3E20);
    // 0x8005B918: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8005B91C: lw          $a2, -0x3E1C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3E1C);
    // 0x8005B920: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8005B924: lw          $v1, -0x484C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X484C);
    // 0x8005B928: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005B92C: sw          $v0, -0x3E08($at)
    MEM_W(-0X3E08, ctx->r1) = ctx->r2;
    // 0x8005B930: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005B934: sw          $a1, -0x3E04($at)
    MEM_W(-0X3E04, ctx->r1) = ctx->r5;
    // 0x8005B938: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005B93C: sw          $a2, -0x3E00($at)
    MEM_W(-0X3E00, ctx->r1) = ctx->r6;
    // 0x8005B940: lh          $v0, 0x14($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X14);
    // 0x8005B944: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x8005B948: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005B94C: sw          $v0, -0x3DFC($at)
    MEM_W(-0X3DFC, ctx->r1) = ctx->r2;
    // 0x8005B950: lh          $v0, 0x16($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X16);
    // 0x8005B954: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8005B958: lbu         $a0, -0x3E3D($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X3E3D);
    // 0x8005B95C: addiu       $v0, $v0, -0x76
    ctx->r2 = ADD32(ctx->r2, -0X76);
    // 0x8005B960: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005B964: sw          $v0, -0x3DF8($at)
    MEM_W(-0X3DF8, ctx->r1) = ctx->r2;
    // 0x8005B968: lh          $v1, 0x18($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X18);
    // 0x8005B96C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8005B970: j           L_8005BE10
    // 0x8005B974: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
        goto L_8005BE10;
    // 0x8005B974: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
L_8005B978:
    // 0x8005B978: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005B97C: addiu       $v1, $v1, -0x3E36
    ctx->r3 = ADD32(ctx->r3, -0X3E36);
    // 0x8005B980: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8005B984: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8005B988: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x8005B98C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8005B990: bne         $v0, $zero, L_8005B9AC
    if (ctx->r2 != 0) {
        // 0x8005B994: nop
    
            goto L_8005B9AC;
    }
    // 0x8005B994: nop

    // 0x8005B998: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005B99C: lbu         $v0, -0x3E3D($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3E3D);
    // 0x8005B9A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005B9A4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005B9A8: sb          $v0, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r2;
L_8005B9AC:
    // 0x8005B9AC: jal         0x800597A8
    // 0x8005B9B0: nop

    func_800597A8_34BA8(rdram, ctx);
        goto after_1;
    // 0x8005B9B0: nop

    after_1:
    // 0x8005B9B4: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8005B9B8: addiu       $v0, $v0, 0x24
    ctx->r2 = ADD32(ctx->r2, 0X24);
    // 0x8005B9BC: j           L_8005BEA0
    // 0x8005B9C0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8005BEA0;
    // 0x8005B9C0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8005B9C4:
    // 0x8005B9C4: addiu       $v0, $zero, -0xCF
    ctx->r2 = ADD32(0, -0XCF);
    // 0x8005B9C8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005B9CC: sh          $v0, -0x3DDC($at)
    MEM_H(-0X3DDC, ctx->r1) = ctx->r2;
    // 0x8005B9D0: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8005B9D4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005B9D8: sh          $v0, -0x3DDA($at)
    MEM_H(-0X3DDA, ctx->r1) = ctx->r2;
    // 0x8005B9DC: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8005B9E0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005B9E4: sw          $v0, -0x3DD4($at)
    MEM_W(-0X3DD4, ctx->r1) = ctx->r2;
    // 0x8005B9E8: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8005B9EC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005B9F0: sw          $zero, -0x3DD8($at)
    MEM_W(-0X3DD8, ctx->r1) = 0;
    // 0x8005B9F4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005B9F8: sw          $zero, -0x3DD0($at)
    MEM_W(-0X3DD0, ctx->r1) = 0;
    // 0x8005B9FC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BA00: sw          $v0, -0x3DC8($at)
    MEM_W(-0X3DC8, ctx->r1) = ctx->r2;
    // 0x8005BA04: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BA08: sw          $v0, -0x3DC4($at)
    MEM_W(-0X3DC4, ctx->r1) = ctx->r2;
    // 0x8005BA0C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BA10: sw          $v0, -0x3DC0($at)
    MEM_W(-0X3DC0, ctx->r1) = ctx->r2;
    // 0x8005BA14: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BA18: sh          $zero, -0x3DB4($at)
    MEM_H(-0X3DB4, ctx->r1) = 0;
    // 0x8005BA1C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BA20: sh          $zero, -0x3DB6($at)
    MEM_H(-0X3DB6, ctx->r1) = 0;
    // 0x8005BA24: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BA28: jal         0x8005A2B8
    // 0x8005BA2C: sh          $zero, -0x3DB8($at)
    MEM_H(-0X3DB8, ctx->r1) = 0;
    func_8005A2B8_356B8(rdram, ctx);
        goto after_2;
    // 0x8005BA2C: sh          $zero, -0x3DB8($at)
    MEM_H(-0X3DB8, ctx->r1) = 0;
    after_2:
    // 0x8005BA30: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005BA34: lbu         $v0, -0x3E3D($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3E3D);
    // 0x8005BA38: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8005BA3C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BA40: sh          $v1, -0x3E36($at)
    MEM_H(-0X3E36, ctx->r1) = ctx->r3;
    // 0x8005BA44: j           L_8005BD30
    // 0x8005BA48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8005BD30;
    // 0x8005BA48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8005BA4C:
    // 0x8005BA4C: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8005BA50: addiu       $a1, $a1, -0x3DD8
    ctx->r5 = ADD32(ctx->r5, -0X3DD8);
    // 0x8005BA54: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8005BA58: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8005BA5C: lw          $a0, -0x3DD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3DD0);
    // 0x8005BA60: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005BA64: lhu         $v1, -0x3DDC($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3DDC);
    // 0x8005BA68: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x8005BA6C: addiu       $a0, $a0, 0x100
    ctx->r4 = ADD32(ctx->r4, 0X100);
    // 0x8005BA70: addiu       $v1, $v1, 0xD
    ctx->r3 = ADD32(ctx->r3, 0XD);
    // 0x8005BA74: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8005BA78: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BA7C: sh          $v1, -0x3DDC($at)
    MEM_H(-0X3DDC, ctx->r1) = ctx->r3;
    // 0x8005BA80: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8005BA84: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BA88: blez        $v1, L_8005BAEC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8005BA8C: sw          $a0, -0x3DD0($at)
        MEM_W(-0X3DD0, ctx->r1) = ctx->r4;
            goto L_8005BAEC;
    }
    // 0x8005BA8C: sw          $a0, -0x3DD0($at)
    MEM_W(-0X3DD0, ctx->r1) = ctx->r4;
    // 0x8005BA90: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005BA94: lbu         $v0, -0x3E3D($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3E3D);
    // 0x8005BA98: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8005BA9C: lw          $a0, -0x3DE0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3DE0);
    // 0x8005BAA0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005BAA4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BAA8: jal         0x80069850
    // 0x8005BAAC: sb          $v0, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r2;
    func_80069850_44C50(rdram, ctx);
        goto after_3;
    // 0x8005BAAC: sb          $v0, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r2;
    after_3:
    // 0x8005BAB0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005BAB4: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005BAB8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005BABC: jal         0x80061510
    // 0x8005BAC0: addiu       $a2, $zero, 0x83
    ctx->r6 = ADD32(0, 0X83);
    func_80061510_3C910(rdram, ctx);
        goto after_4;
    // 0x8005BAC0: addiu       $a2, $zero, 0x83
    ctx->r6 = ADD32(0, 0X83);
    after_4:
    // 0x8005BAC4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005BAC8: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005BACC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8005BAD0: jal         0x80061510
    // 0x8005BAD4: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    func_80061510_3C910(rdram, ctx);
        goto after_5;
    // 0x8005BAD4: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    after_5:
    // 0x8005BAD8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8005BADC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BAE0: sh          $v0, -0x3DAC($at)
    MEM_H(-0X3DAC, ctx->r1) = ctx->r2;
    // 0x8005BAE4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BAE8: sh          $zero, -0x3DB0($at)
    MEM_H(-0X3DB0, ctx->r1) = 0;
L_8005BAEC:
    // 0x8005BAEC: jal         0x8005AAA8
    // 0x8005BAF0: nop

    func_8005AAA8_35EA8(rdram, ctx);
        goto after_6;
    // 0x8005BAF0: nop

    after_6:
    // 0x8005BAF4: j           L_8005BEA0
    // 0x8005BAF8: nop

        goto L_8005BEA0;
    // 0x8005BAF8: nop

L_8005BAFC:
    // 0x8005BAFC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005BB00: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005BB04: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8005BB08: jal         0x80061510
    // 0x8005BB0C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80061510_3C910(rdram, ctx);
        goto after_7;
    // 0x8005BB0C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_7:
    // 0x8005BB10: jal         0x8005A630
    // 0x8005BB14: nop

    func_8005A630_35A30(rdram, ctx);
        goto after_8;
    // 0x8005BB14: nop

    after_8:
    // 0x8005BB18: jal         0x8005BEB0
    // 0x8005BB1C: nop

    func_8005BEB0_372B0(rdram, ctx);
        goto after_9;
    // 0x8005BB1C: nop

    after_9:
    // 0x8005BB20: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8005BB24: addiu       $s0, $s0, -0x3DB0
    ctx->r16 = ADD32(ctx->r16, -0X3DB0);
    // 0x8005BB28: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x8005BB2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005BB30: beq         $v1, $v0, L_8005BB50
    if (ctx->r3 == ctx->r2) {
        // 0x8005BB34: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8005BB50;
    }
    // 0x8005BB34: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8005BB38: bne         $v0, $zero, L_8005BEA0
    if (ctx->r2 != 0) {
        // 0x8005BB3C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8005BEA0;
    }
    // 0x8005BB3C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8005BB40: beq         $v1, $v0, L_8005BB8C
    if (ctx->r3 == ctx->r2) {
        // 0x8005BB44: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8005BB8C;
    }
    // 0x8005BB44: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8005BB48: j           L_8005BEA0
    // 0x8005BB4C: nop

        goto L_8005BEA0;
    // 0x8005BB4C: nop

L_8005BB50:
    // 0x8005BB50: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005BB54: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005BB58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8005BB5C: jal         0x80061510
    // 0x8005BB60: addiu       $a2, $zero, 0x84
    ctx->r6 = ADD32(0, 0X84);
    func_80061510_3C910(rdram, ctx);
        goto after_10;
    // 0x8005BB60: addiu       $a2, $zero, 0x84
    ctx->r6 = ADD32(0, 0X84);
    after_10:
    // 0x8005BB64: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8005BB68: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BB6C: sb          $v0, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r2;
    // 0x8005BB70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005BB74: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x8005BB78: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BB7C: sh          $zero, -0x3DAA($at)
    MEM_H(-0X3DAA, ctx->r1) = 0;
    // 0x8005BB80: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BB84: j           L_8005BEA0
    // 0x8005BB88: sh          $v0, -0x3DA4($at)
    MEM_H(-0X3DA4, ctx->r1) = ctx->r2;
        goto L_8005BEA0;
    // 0x8005BB88: sh          $v0, -0x3DA4($at)
    MEM_H(-0X3DA4, ctx->r1) = ctx->r2;
L_8005BB8C:
    // 0x8005BB8C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BB90: sb          $v0, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r2;
    // 0x8005BB94: j           L_8005BEA0
    // 0x8005BB98: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
        goto L_8005BEA0;
    // 0x8005BB98: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
L_8005BB9C:
    // 0x8005BB9C: jal         0x8005A82C
    // 0x8005BBA0: nop

    func_8005A82C_35C2C(rdram, ctx);
        goto after_11;
    // 0x8005BBA0: nop

    after_11:
    // 0x8005BBA4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BBA8: jal         0x8005BEB0
    // 0x8005BBAC: sh          $zero, -0x3DA4($at)
    MEM_H(-0X3DA4, ctx->r1) = 0;
    func_8005BEB0_372B0(rdram, ctx);
        goto after_12;
    // 0x8005BBAC: sh          $zero, -0x3DA4($at)
    MEM_H(-0X3DA4, ctx->r1) = 0;
    after_12:
    // 0x8005BBB0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005BBB4: lh          $v1, -0x3DB0($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X3DB0);
    // 0x8005BBB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005BBBC: beq         $v1, $v0, L_8005BBE4
    if (ctx->r3 == ctx->r2) {
        // 0x8005BBC0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8005BBE4;
    }
    // 0x8005BBC0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8005BBC4: bne         $v0, $zero, L_8005BEA0
    if (ctx->r2 != 0) {
        // 0x8005BBC8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8005BEA0;
    }
    // 0x8005BBC8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8005BBCC: beq         $v1, $v0, L_8005BBF0
    if (ctx->r3 == ctx->r2) {
        // 0x8005BBD0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8005BBF0;
    }
    // 0x8005BBD0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8005BBD4: beq         $v1, $v0, L_8005BC48
    if (ctx->r3 == ctx->r2) {
        // 0x8005BBD8: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8005BC48;
    }
    // 0x8005BBD8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8005BBDC: j           L_8005BEA0
    // 0x8005BBE0: nop

        goto L_8005BEA0;
    // 0x8005BBE0: nop

L_8005BBE4:
    // 0x8005BBE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8005BBE8: j           L_8005BC4C
    // 0x8005BBEC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_8005BC4C;
    // 0x8005BBEC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8005BBF0:
    // 0x8005BBF0: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8005BBF4: jal         0x80069850
    // 0x8005BBF8: lw          $a0, -0x3DE0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3DE0);
    func_80069850_44C50(rdram, ctx);
        goto after_13;
    // 0x8005BBF8: lw          $a0, -0x3DE0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3DE0);
    after_13:
    // 0x8005BBFC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005BC00: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005BC04: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005BC08: jal         0x80061510
    // 0x8005BC0C: addiu       $a2, $zero, 0x83
    ctx->r6 = ADD32(0, 0X83);
    func_80061510_3C910(rdram, ctx);
        goto after_14;
    // 0x8005BC0C: addiu       $a2, $zero, 0x83
    ctx->r6 = ADD32(0, 0X83);
    after_14:
    // 0x8005BC10: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005BC14: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005BC18: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8005BC1C: jal         0x80061510
    // 0x8005BC20: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    func_80061510_3C910(rdram, ctx);
        goto after_15;
    // 0x8005BC20: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    after_15:
    // 0x8005BC24: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8005BC28: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BC2C: sh          $v0, -0x3DAC($at)
    MEM_H(-0X3DAC, ctx->r1) = ctx->r2;
    // 0x8005BC30: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8005BC34: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BC38: sh          $zero, -0x3DB0($at)
    MEM_H(-0X3DB0, ctx->r1) = 0;
    // 0x8005BC3C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BC40: j           L_8005BEA0
    // 0x8005BC44: sb          $v0, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r2;
        goto L_8005BEA0;
    // 0x8005BC44: sb          $v0, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r2;
L_8005BC48:
    // 0x8005BC48: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8005BC4C:
    // 0x8005BC4C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BC50: sh          $zero, -0x3DB0($at)
    MEM_H(-0X3DB0, ctx->r1) = 0;
    // 0x8005BC54: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BC58: jal         0x80061798
    // 0x8005BC5C: sb          $v0, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r2;
    func_80061798_3CB98(rdram, ctx);
        goto after_16;
    // 0x8005BC5C: sb          $v0, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r2;
    after_16:
    // 0x8005BC60: j           L_8005BEA0
    // 0x8005BC64: nop

        goto L_8005BEA0;
    // 0x8005BC64: nop

L_8005BC68:
    // 0x8005BC68: jal         0x8005BEB0
    // 0x8005BC6C: nop

    func_8005BEB0_372B0(rdram, ctx);
        goto after_17;
    // 0x8005BC6C: nop

    after_17:
    // 0x8005BC70: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8005BC74: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x8005BC78: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8005BC7C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8005BC80: bne         $v0, $zero, L_8005BEA0
    if (ctx->r2 != 0) {
        // 0x8005BC84: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_8005BEA0;
    }
    // 0x8005BC84: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8005BC88: bne         $v0, $zero, L_8005BD5C
    if (ctx->r2 != 0) {
        // 0x8005BC8C: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8005BD5C;
    }
    // 0x8005BC8C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8005BC90: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BC94: j           L_8005BEA0
    // 0x8005BC98: sb          $v0, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r2;
        goto L_8005BEA0;
    // 0x8005BC98: sb          $v0, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r2;
L_8005BC9C:
    // 0x8005BC9C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005BCA0: lw          $v0, -0x3DE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3DE0);
    // 0x8005BCA4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8005BCA8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005BCAC: lbu         $v1, -0x14B0($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X14B0);
    // 0x8005BCB0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005BCB4: lh          $v0, -0x3DAA($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3DAA);
    // 0x8005BCB8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005BCBC: addiu       $a0, $a0, 0x4EA4
    ctx->r4 = ADD32(ctx->r4, 0X4EA4);
    // 0x8005BCC0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8005BCC4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005BCC8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8005BCCC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8005BCD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005BCD4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8005BCD8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8005BCDC: lw          $a0, -0x3DA8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3DA8);
    // 0x8005BCE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8005BCE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8005BCE8: jal         0x80070E98
    // 0x8005BCEC: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    func_80070E98_4C298(rdram, ctx);
        goto after_18;
    // 0x8005BCEC: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    after_18:
    // 0x8005BCF0: jal         0x8005BEB0
    // 0x8005BCF4: nop

    func_8005BEB0_372B0(rdram, ctx);
        goto after_19;
    // 0x8005BCF4: nop

    after_19:
    // 0x8005BCF8: jal         0x80071020
    // 0x8005BCFC: nop

    func_80071020_4C420(rdram, ctx);
        goto after_20;
    // 0x8005BCFC: nop

    after_20:
    // 0x8005BD00: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005BD04: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005BD08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005BD0C: jal         0x80061510
    // 0x8005BD10: addiu       $a2, $zero, 0x87
    ctx->r6 = ADD32(0, 0X87);
    func_80061510_3C910(rdram, ctx);
        goto after_21;
    // 0x8005BD10: addiu       $a2, $zero, 0x87
    ctx->r6 = ADD32(0, 0X87);
    after_21:
    // 0x8005BD14: addiu       $a0, $zero, 0x89
    ctx->r4 = ADD32(0, 0X89);
    // 0x8005BD18: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8005BD1C: jal         0x8002A2F8
    // 0x8005BD20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_22;
    // 0x8005BD20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_22:
    // 0x8005BD24: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005BD28: lbu         $v0, -0x3E3D($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3E3D);
    // 0x8005BD2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8005BD30:
    // 0x8005BD30: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BD34: j           L_8005BEA0
    // 0x8005BD38: sb          $v0, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r2;
        goto L_8005BEA0;
    // 0x8005BD38: sb          $v0, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r2;
L_8005BD3C:
    // 0x8005BD3C: jal         0x8005BEB0
    // 0x8005BD40: nop

    func_8005BEB0_372B0(rdram, ctx);
        goto after_23;
    // 0x8005BD40: nop

    after_23:
    // 0x8005BD44: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005BD48: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8005BD4C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8005BD50: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8005BD54: bne         $v0, $zero, L_8005BEA0
    if (ctx->r2 != 0) {
        // 0x8005BD58: nop
    
            goto L_8005BEA0;
    }
    // 0x8005BD58: nop

L_8005BD5C:
    // 0x8005BD5C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005BD60: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005BD64: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8005BD68: jal         0x80061510
    // 0x8005BD6C: addiu       $a2, $zero, 0x84
    ctx->r6 = ADD32(0, 0X84);
    func_80061510_3C910(rdram, ctx);
        goto after_24;
    // 0x8005BD6C: addiu       $a2, $zero, 0x84
    ctx->r6 = ADD32(0, 0X84);
    after_24:
    // 0x8005BD70: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8005BD74: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BD78: sb          $v0, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r2;
    // 0x8005BD7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005BD80: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BD84: j           L_8005BEA0
    // 0x8005BD88: sh          $v0, -0x3DA4($at)
    MEM_H(-0X3DA4, ctx->r1) = ctx->r2;
        goto L_8005BEA0;
    // 0x8005BD88: sh          $v0, -0x3DA4($at)
    MEM_H(-0X3DA4, ctx->r1) = ctx->r2;
L_8005BD8C:
    // 0x8005BD8C: jal         0x80061798
    // 0x8005BD90: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80061798_3CB98(rdram, ctx);
        goto after_25;
    // 0x8005BD90: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_25:
    // 0x8005BD94: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8005BD98: addiu       $a0, $a0, -0x3E18
    ctx->r4 = ADD32(ctx->r4, -0X3E18);
    // 0x8005BD9C: addiu       $a1, $a0, -0x1C
    ctx->r5 = ADD32(ctx->r4, -0X1C);
    // 0x8005BDA0: jal         0x8009A3B4
    // 0x8005BDA4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_26;
    // 0x8005BDA4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_26:
    // 0x8005BDA8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005BDAC: lw          $v0, -0x3E24($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3E24);
    // 0x8005BDB0: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8005BDB4: lw          $a1, -0x3E20($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3E20);
    // 0x8005BDB8: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8005BDBC: lw          $a2, -0x3E1C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3E1C);
    // 0x8005BDC0: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8005BDC4: lw          $v1, -0x484C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X484C);
    // 0x8005BDC8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BDCC: sw          $v0, -0x3E08($at)
    MEM_W(-0X3E08, ctx->r1) = ctx->r2;
    // 0x8005BDD0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BDD4: sw          $a1, -0x3E04($at)
    MEM_W(-0X3E04, ctx->r1) = ctx->r5;
    // 0x8005BDD8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BDDC: sw          $a2, -0x3E00($at)
    MEM_W(-0X3E00, ctx->r1) = ctx->r6;
    // 0x8005BDE0: lh          $v0, 0x14($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X14);
    // 0x8005BDE4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BDE8: sw          $v0, -0x3DFC($at)
    MEM_W(-0X3DFC, ctx->r1) = ctx->r2;
    // 0x8005BDEC: lh          $v0, 0x16($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X16);
    // 0x8005BDF0: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8005BDF4: lbu         $a0, -0x3E3D($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X3E3D);
    // 0x8005BDF8: addiu       $v0, $v0, -0x76
    ctx->r2 = ADD32(ctx->r2, -0X76);
    // 0x8005BDFC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BE00: sw          $v0, -0x3DF8($at)
    MEM_W(-0X3DF8, ctx->r1) = ctx->r2;
    // 0x8005BE04: lh          $v1, 0x18($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X18);
    // 0x8005BE08: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8005BE0C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
L_8005BE10:
    // 0x8005BE10: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BE14: sw          $v0, -0x3DEC($at)
    MEM_W(-0X3DEC, ctx->r1) = ctx->r2;
    // 0x8005BE18: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8005BE1C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BE20: sw          $a1, -0x3DE8($at)
    MEM_W(-0X3DE8, ctx->r1) = ctx->r5;
    // 0x8005BE24: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BE28: sw          $a2, -0x3DE4($at)
    MEM_W(-0X3DE4, ctx->r1) = ctx->r6;
    // 0x8005BE2C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BE30: sh          $v0, -0x3E36($at)
    MEM_H(-0X3E36, ctx->r1) = ctx->r2;
    // 0x8005BE34: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BE38: sb          $a0, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r4;
    // 0x8005BE3C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BE40: j           L_8005BEA0
    // 0x8005BE44: sw          $v1, -0x3DF4($at)
    MEM_W(-0X3DF4, ctx->r1) = ctx->r3;
        goto L_8005BEA0;
    // 0x8005BE44: sw          $v1, -0x3DF4($at)
    MEM_W(-0X3DF4, ctx->r1) = ctx->r3;
L_8005BE48:
    // 0x8005BE48: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005BE4C: addiu       $v1, $v1, -0x3E36
    ctx->r3 = ADD32(ctx->r3, -0X3E36);
    // 0x8005BE50: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8005BE54: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8005BE58: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x8005BE5C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8005BE60: bne         $v0, $zero, L_8005BE7C
    if (ctx->r2 != 0) {
        // 0x8005BE64: nop
    
            goto L_8005BE7C;
    }
    // 0x8005BE64: nop

    // 0x8005BE68: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005BE6C: lbu         $v0, -0x3E3D($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3E3D);
    // 0x8005BE70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005BE74: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BE78: sb          $v0, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r2;
L_8005BE7C:
    // 0x8005BE7C: jal         0x800597A8
    // 0x8005BE80: nop

    func_800597A8_34BA8(rdram, ctx);
        goto after_27;
    // 0x8005BE80: nop

    after_27:
    // 0x8005BE84: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8005BE88: addiu       $v0, $v0, -0x24
    ctx->r2 = ADD32(ctx->r2, -0X24);
    // 0x8005BE8C: j           L_8005BEA0
    // 0x8005BE90: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8005BEA0;
    // 0x8005BE90: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8005BE94:
    // 0x8005BE94: lui         $v0, 0x305
    ctx->r2 = S32(0X305 << 16);
    // 0x8005BE98: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BE9C: sw          $v0, -0x3E40($at)
    MEM_W(-0X3E40, ctx->r1) = ctx->r2;
L_8005BEA0:
    // 0x8005BEA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005BEA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8005BEA8: jr          $ra
    // 0x8005BEAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005BEAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800470A0_224A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800470A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800470A4: beq         $a0, $zero, L_80047100
    if (ctx->r4 == 0) {
        // 0x800470A8: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80047100;
    }
    // 0x800470A8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800470AC: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x800470B0: lbu         $a1, 0x9($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X9);
    // 0x800470B4: lhu         $a2, 0x11E($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X11E);
    // 0x800470B8: bne         $v0, $zero, L_80047104
    if (ctx->r2 != 0) {
        // 0x800470BC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80047104;
    }
    // 0x800470BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800470C0: sltiu       $v1, $a1, 0x2
    ctx->r3 = ctx->r5 < 0X2 ? 1 : 0;
    // 0x800470C4: xori        $v0, $a1, 0x4
    ctx->r2 = ctx->r5 ^ 0X4;
    // 0x800470C8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800470CC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800470D0: beq         $v1, $zero, L_80047104
    if (ctx->r3 == 0) {
        // 0x800470D4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80047104;
    }
    // 0x800470D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800470D8: lhu         $v0, 0x136($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X136);
    // 0x800470DC: and         $v0, $a2, $v0
    ctx->r2 = ctx->r6 & ctx->r2;
    // 0x800470E0: beq         $v0, $zero, L_80047104
    if (ctx->r2 == 0) {
        // 0x800470E4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80047104;
    }
    // 0x800470E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800470E8: jal         0x80070E54
    // 0x800470EC: nop

    func_80070E54_4C254(rdram, ctx);
        goto after_0;
    // 0x800470EC: nop

    after_0:
    // 0x800470F0: bne         $v0, $zero, L_80047104
    if (ctx->r2 != 0) {
        // 0x800470F4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80047104;
    }
    // 0x800470F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800470F8: j           L_80047104
    // 0x800470FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80047104;
    // 0x800470FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80047100:
    // 0x80047100: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80047104:
    // 0x80047104: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80047108: jr          $ra
    // 0x8004710C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8004710C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006423C_3F63C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006423C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80064240: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80064244: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80064248: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8006424C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80064250: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80064254: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80064258: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x8006425C: addiu       $v1, $zero, 0xED
    ctx->r3 = ADD32(0, 0XED);
    // 0x80064260: sb          $v1, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r3;
    // 0x80064264: lb          $a1, 0x71($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X71);
    // 0x80064268: lb          $v0, 0x73($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X73);
    // 0x8006426C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80064270: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x80064274: bne         $a1, $v0, L_800645F4
    if (ctx->r5 != ctx->r2) {
        // 0x80064278: sb          $zero, 0x78($s0)
        MEM_B(0X78, ctx->r16) = 0;
            goto L_800645F4;
    }
    // 0x80064278: sb          $zero, 0x78($s0)
    MEM_B(0X78, ctx->r16) = 0;
    // 0x8006427C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80064280: lui         $v1, 0xC0
    ctx->r3 = S32(0XC0 << 16);
    // 0x80064284: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80064288: bne         $v0, $zero, L_800645F4
    if (ctx->r2 != 0) {
        // 0x8006428C: nop
    
            goto L_800645F4;
    }
    // 0x8006428C: nop

    // 0x80064290: lhu         $a0, 0xBA($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XBA);
    // 0x80064294: andi        $v0, $a0, 0x6000
    ctx->r2 = ctx->r4 & 0X6000;
    // 0x80064298: bne         $v0, $zero, L_80064518
    if (ctx->r2 != 0) {
        // 0x8006429C: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_80064518;
    }
    // 0x8006429C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x800642A0: andi        $v0, $a0, 0x8000
    ctx->r2 = ctx->r4 & 0X8000;
    // 0x800642A4: beq         $v0, $zero, L_800642CC
    if (ctx->r2 == 0) {
        // 0x800642A8: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_800642CC;
    }
    // 0x800642A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800642AC: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x800642B0: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x800642B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x800642B8: sh          $zero, 0xB8($s0)
    MEM_H(0XB8, ctx->r16) = 0;
    // 0x800642BC: jal         0x8002A2F8
    // 0x800642C0: sh          $zero, 0xBA($s0)
    MEM_H(0XBA, ctx->r16) = 0;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x800642C0: sh          $zero, 0xBA($s0)
    MEM_H(0XBA, ctx->r16) = 0;
    after_0:
    // 0x800642C4: j           L_80064518
    // 0x800642C8: nop

        goto L_80064518;
    // 0x800642C8: nop

L_800642CC:
    // 0x800642CC: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x800642D0: beq         $v0, $zero, L_80064308
    if (ctx->r2 == 0) {
        // 0x800642D4: lui         $v0, 0x10
        ctx->r2 = S32(0X10 << 16);
            goto L_80064308;
    }
    // 0x800642D4: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x800642D8: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x800642DC: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x800642E0: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x800642E4: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
    // 0x800642E8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800642EC: lw          $v0, 0x56F8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X56F8);
    // 0x800642F0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x800642F4: sltiu       $v0, $v0, 0x6
    ctx->r2 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x800642F8: bne         $v0, $zero, L_80064518
    if (ctx->r2 != 0) {
        // 0x800642FC: sh          $zero, 0xBC($s0)
        MEM_H(0XBC, ctx->r16) = 0;
            goto L_80064518;
    }
    // 0x800642FC: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
    // 0x80064300: j           L_8006435C
    // 0x80064304: nop

        goto L_8006435C;
    // 0x80064304: nop

L_80064308:
    // 0x80064308: lw          $a1, 0xB8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XB8);
    // 0x8006430C: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80064310: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x80064314: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x80064318: bne         $v0, $v1, L_800643A4
    if (ctx->r2 != ctx->r3) {
        // 0x8006431C: andi        $v0, $a0, 0x40
        ctx->r2 = ctx->r4 & 0X40;
            goto L_800643A4;
    }
    // 0x8006431C: andi        $v0, $a0, 0x40
    ctx->r2 = ctx->r4 & 0X40;
    // 0x80064320: lhu         $v1, 0xBC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XBC);
    // 0x80064324: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x80064328: bne         $v0, $zero, L_80064514
    if (ctx->r2 != 0) {
        // 0x8006432C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80064514;
    }
    // 0x8006432C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80064330: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80064334: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x80064338: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x8006433C: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
    // 0x80064340: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80064344: lw          $v1, 0x56F8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X56F8);
    // 0x80064348: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8006434C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80064350: sltiu       $v1, $v1, 0x6
    ctx->r3 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80064354: bne         $v1, $zero, L_80064518
    if (ctx->r3 != 0) {
        // 0x80064358: sh          $v0, 0xBC($s0)
        MEM_H(0XBC, ctx->r16) = ctx->r2;
            goto L_80064518;
    }
    // 0x80064358: sh          $v0, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r2;
L_8006435C:
    // 0x8006435C: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x80064360: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80064364: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80064368: bne         $v0, $v1, L_80064518
    if (ctx->r2 != ctx->r3) {
        // 0x8006436C: nop
    
            goto L_80064518;
    }
    // 0x8006436C: nop

    // 0x80064370: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80064374: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x80064378: beq         $v0, $zero, L_80064518
    if (ctx->r2 == 0) {
        // 0x8006437C: addiu       $a0, $zero, 0x81
        ctx->r4 = ADD32(0, 0X81);
            goto L_80064518;
    }
    // 0x8006437C: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x80064380: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80064384: jal         0x8002A2F8
    // 0x80064388: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_1;
    // 0x80064388: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8006438C: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80064390: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x80064394: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80064398: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8006439C: j           L_80064518
    // 0x800643A0: sb          $v0, 0x5410($at)
    MEM_B(0X5410, ctx->r1) = ctx->r2;
        goto L_80064518;
    // 0x800643A0: sb          $v0, 0x5410($at)
    MEM_B(0X5410, ctx->r1) = ctx->r2;
L_800643A4:
    // 0x800643A4: beq         $v0, $zero, L_800643CC
    if (ctx->r2 == 0) {
        // 0x800643A8: lui         $v0, 0x40
        ctx->r2 = S32(0X40 << 16);
            goto L_800643CC;
    }
    // 0x800643A8: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x800643AC: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x800643B0: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x800643B4: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x800643B8: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
    // 0x800643BC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800643C0: lw          $a0, 0x56F8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X56F8);
    // 0x800643C4: j           L_80064410
    // 0x800643C8: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
        goto L_80064410;
    // 0x800643C8: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
L_800643CC:
    // 0x800643CC: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x800643D0: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x800643D4: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x800643D8: bne         $v0, $v1, L_80064464
    if (ctx->r2 != ctx->r3) {
        // 0x800643DC: andi        $v0, $a0, 0x80
        ctx->r2 = ctx->r4 & 0X80;
            goto L_80064464;
    }
    // 0x800643DC: andi        $v0, $a0, 0x80
    ctx->r2 = ctx->r4 & 0X80;
    // 0x800643E0: lhu         $v1, 0xBC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XBC);
    // 0x800643E4: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x800643E8: bne         $v0, $zero, L_80064514
    if (ctx->r2 != 0) {
        // 0x800643EC: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80064514;
    }
    // 0x800643EC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x800643F0: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x800643F4: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x800643F8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x800643FC: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
    // 0x80064400: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80064404: lw          $a0, 0x56F8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X56F8);
    // 0x80064408: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8006440C: sh          $v0, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r2;
L_80064410:
    // 0x80064410: sltiu       $v0, $a0, 0x6
    ctx->r2 = ctx->r4 < 0X6 ? 1 : 0;
    // 0x80064414: bne         $v0, $zero, L_80064518
    if (ctx->r2 != 0) {
        // 0x80064418: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_80064518;
    }
    // 0x80064418: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8006441C: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x80064420: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80064424: bne         $v0, $v1, L_80064518
    if (ctx->r2 != ctx->r3) {
        // 0x80064428: addiu       $v1, $a0, -0x5
        ctx->r3 = ADD32(ctx->r4, -0X5);
            goto L_80064518;
    }
    // 0x80064428: addiu       $v1, $a0, -0x5
    ctx->r3 = ADD32(ctx->r4, -0X5);
    // 0x8006442C: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80064430: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x80064434: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80064438: beq         $v0, $zero, L_80064518
    if (ctx->r2 == 0) {
        // 0x8006443C: addiu       $a0, $zero, 0x81
        ctx->r4 = ADD32(0, 0X81);
            goto L_80064518;
    }
    // 0x8006443C: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x80064440: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80064444: jal         0x8002A2F8
    // 0x80064448: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x80064448: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8006444C: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80064450: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x80064454: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80064458: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8006445C: j           L_80064518
    // 0x80064460: sb          $v0, 0x5410($at)
    MEM_B(0X5410, ctx->r1) = ctx->r2;
        goto L_80064518;
    // 0x80064460: sb          $v0, 0x5410($at)
    MEM_B(0X5410, ctx->r1) = ctx->r2;
L_80064464:
    // 0x80064464: beq         $v0, $zero, L_8006447C
    if (ctx->r2 == 0) {
        // 0x80064468: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_8006447C;
    }
    // 0x80064468: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8006446C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80064470: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x80064474: j           L_800644B0
    // 0x80064478: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
        goto L_800644B0;
    // 0x80064478: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
L_8006447C:
    // 0x8006447C: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80064480: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x80064484: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80064488: bne         $v0, $v1, L_800644BC
    if (ctx->r2 != ctx->r3) {
        // 0x8006448C: andi        $v0, $a0, 0x20
        ctx->r2 = ctx->r4 & 0X20;
            goto L_800644BC;
    }
    // 0x8006448C: andi        $v0, $a0, 0x20
    ctx->r2 = ctx->r4 & 0X20;
    // 0x80064490: lhu         $v1, 0xBC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XBC);
    // 0x80064494: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x80064498: bne         $v0, $zero, L_80064514
    if (ctx->r2 != 0) {
        // 0x8006449C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80064514;
    }
    // 0x8006449C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x800644A0: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x800644A4: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x800644A8: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x800644AC: sh          $v1, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r3;
L_800644B0:
    // 0x800644B0: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x800644B4: j           L_80064518
    // 0x800644B8: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
        goto L_80064518;
    // 0x800644B8: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
L_800644BC:
    // 0x800644BC: beq         $v0, $zero, L_800644D4
    if (ctx->r2 == 0) {
        // 0x800644C0: lui         $v0, 0x20
        ctx->r2 = S32(0X20 << 16);
            goto L_800644D4;
    }
    // 0x800644C0: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x800644C4: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x800644C8: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x800644CC: j           L_80064508
    // 0x800644D0: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
        goto L_80064508;
    // 0x800644D0: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
L_800644D4:
    // 0x800644D4: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x800644D8: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x800644DC: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x800644E0: bne         $v0, $v1, L_80064518
    if (ctx->r2 != ctx->r3) {
        // 0x800644E4: nop
    
            goto L_80064518;
    }
    // 0x800644E4: nop

    // 0x800644E8: lhu         $v1, 0xBC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XBC);
    // 0x800644EC: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x800644F0: bne         $v0, $zero, L_80064514
    if (ctx->r2 != 0) {
        // 0x800644F4: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80064514;
    }
    // 0x800644F4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x800644F8: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x800644FC: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x80064500: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x80064504: sh          $v1, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r3;
L_80064508:
    // 0x80064508: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8006450C: j           L_80064518
    // 0x80064510: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
        goto L_80064518;
    // 0x80064510: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
L_80064514:
    // 0x80064514: sh          $v0, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r2;
L_80064518:
    // 0x80064518: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x8006451C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80064520: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80064524: sw          $v0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r2;
    // 0x80064528: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8006452C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80064530: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x80064534: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x80064538: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8006453C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80064540: beq         $v0, $v1, L_80064554
    if (ctx->r2 == ctx->r3) {
        // 0x80064544: addiu       $a0, $zero, 0x81
        ctx->r4 = ADD32(0, 0X81);
            goto L_80064554;
    }
    // 0x80064544: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x80064548: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8006454C: jal         0x8002A2F8
    // 0x80064550: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_3;
    // 0x80064550: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
L_80064554:
    // 0x80064554: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80064558: lw          $v0, 0x56F8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X56F8);
    // 0x8006455C: sltiu       $v0, $v0, 0x6
    ctx->r2 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x80064560: bne         $v0, $zero, L_800645F4
    if (ctx->r2 != 0) {
        // 0x80064564: nop
    
            goto L_800645F4;
    }
    // 0x80064564: nop

    // 0x80064568: jal         0x8004B5E8
    // 0x8006456C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_4;
    // 0x8006456C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x80064570: jal         0x8004B5E8
    // 0x80064574: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_5;
    // 0x80064574: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x80064578: bne         $s3, $zero, L_800645F4
    if (ctx->r19 != 0) {
        // 0x8006457C: nop
    
            goto L_800645F4;
    }
    // 0x8006457C: nop

    // 0x80064580: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80064584: lbu         $v1, 0x5410($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X5410);
    // 0x80064588: beq         $v1, $zero, L_800645C8
    if (ctx->r3 == 0) {
        // 0x8006458C: nop
    
            goto L_800645C8;
    }
    // 0x8006458C: nop

    // 0x80064590: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80064594: lw          $v0, 0x56F8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X56F8);
    // 0x80064598: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x8006459C: beq         $v0, $v1, L_800645B8
    if (ctx->r2 == ctx->r3) {
        // 0x800645A0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_800645B8;
    }
    // 0x800645A0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800645A4: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x800645A8: jal         0x8004B6A0
    // 0x800645AC: ori         $a1, $a1, 0x3
    ctx->r5 = ctx->r5 | 0X3;
    func_8004B6A0_26AA0(rdram, ctx);
        goto after_6;
    // 0x800645AC: ori         $a1, $a1, 0x3
    ctx->r5 = ctx->r5 | 0X3;
    after_6:
    // 0x800645B0: j           L_800645E4
    // 0x800645B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_800645E4;
    // 0x800645B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_800645B8:
    // 0x800645B8: beq         $v0, $zero, L_800645C8
    if (ctx->r2 == 0) {
        // 0x800645BC: lui         $a1, 0x2
        ctx->r5 = S32(0X2 << 16);
            goto L_800645C8;
    }
    // 0x800645BC: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x800645C0: j           L_800645EC
    // 0x800645C4: ori         $a1, $a1, 0x3
    ctx->r5 = ctx->r5 | 0X3;
        goto L_800645EC;
    // 0x800645C4: ori         $a1, $a1, 0x3
    ctx->r5 = ctx->r5 | 0X3;
L_800645C8:
    // 0x800645C8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800645CC: lw          $v0, 0x56F8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X56F8);
    // 0x800645D0: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x800645D4: lbu         $v1, 0x5410($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X5410);
    // 0x800645D8: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x800645DC: beq         $v0, $v1, L_800645F4
    if (ctx->r2 == ctx->r3) {
        // 0x800645E0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_800645F4;
    }
    // 0x800645E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_800645E4:
    // 0x800645E4: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x800645E8: ori         $a1, $a1, 0x4
    ctx->r5 = ctx->r5 | 0X4;
L_800645EC:
    // 0x800645EC: jal         0x8004B6A0
    // 0x800645F0: nop

    func_8004B6A0_26AA0(rdram, ctx);
        goto after_7;
    // 0x800645F0: nop

    after_7:
L_800645F4:
    // 0x800645F4: lb          $v0, 0x71($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X71);
    // 0x800645F8: lb          $v1, 0x73($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X73);
    // 0x800645FC: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x80064600: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80064604: or          $v0, $s2, $v0
    ctx->r2 = ctx->r18 | ctx->r2;
    // 0x80064608: beq         $v0, $zero, L_80064628
    if (ctx->r2 == 0) {
        // 0x8006460C: nop
    
            goto L_80064628;
    }
    // 0x8006460C: nop

    // 0x80064610: lbu         $v0, 0x78($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X78);
    // 0x80064614: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x80064618: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x8006461C: sb          $v0, 0x78($s0)
    MEM_B(0X78, ctx->r16) = ctx->r2;
    // 0x80064620: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80064624: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
L_80064628:
    // 0x80064628: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8006462C: lbu         $v0, 0x297($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X297);
    // 0x80064630: bne         $v0, $zero, L_80064658
    if (ctx->r2 != 0) {
        // 0x80064634: nop
    
            goto L_80064658;
    }
    // 0x80064634: nop

    // 0x80064638: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8006463C: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x80064640: lb          $v1, 0x73($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X73);
    // 0x80064644: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80064648: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8006464C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80064650: j           L_80064678
    // 0x80064654: lbu         $v0, -0x6F90($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6F90);
        goto L_80064678;
    // 0x80064654: lbu         $v0, -0x6F90($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6F90);
L_80064658:
    // 0x80064658: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8006465C: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x80064660: lb          $v1, 0x73($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X73);
    // 0x80064664: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80064668: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8006466C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80064670: lbu         $v0, -0x6F90($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6F90);
    // 0x80064674: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
L_80064678:
    // 0x80064678: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8006467C: sb          $v0, 0x6B39($at)
    MEM_B(0X6B39, ctx->r1) = ctx->r2;
    // 0x80064680: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x80064684: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80064688: lbu         $v0, 0x204($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X204);
    // 0x8006468C: sb          $v0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r2;
    // 0x80064690: lbu         $v1, 0x73($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X73);
    // 0x80064694: lbu         $v0, 0x78($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X78);
    // 0x80064698: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x8006469C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800646A0: addiu       $v0, $v0, 0x50
    ctx->r2 = ADD32(ctx->r2, 0X50);
    // 0x800646A4: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x800646A8: sb          $v0, 0x78($s0)
    MEM_B(0X78, ctx->r16) = ctx->r2;
    // 0x800646AC: sb          $v1, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r3;
    // 0x800646B0: beq         $s3, $zero, L_80064700
    if (ctx->r19 == 0) {
        // 0x800646B4: sw          $a0, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r4;
            goto L_80064700;
    }
    // 0x800646B4: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    // 0x800646B8: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    // 0x800646BC: beq         $a1, $zero, L_800646D8
    if (ctx->r5 == 0) {
        // 0x800646C0: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_800646D8;
    }
    // 0x800646C0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x800646C4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x800646C8: lbu         $a0, 0x294($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X294);
    // 0x800646CC: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x800646D0: j           L_800646F8
    // 0x800646D4: lbu         $a2, 0x295($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X295);
        goto L_800646F8;
    // 0x800646D4: lbu         $a2, 0x295($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X295);
L_800646D8:
    // 0x800646D8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x800646DC: lbu         $v0, 0x295($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X295);
    // 0x800646E0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x800646E4: lbu         $a0, 0x294($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X294);
    // 0x800646E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800646EC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800646F0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x800646F4: lw          $a1, 0x27EC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X27EC);
L_800646F8:
    // 0x800646F8: jal         0x80061510
    // 0x800646FC: nop

    func_80061510_3C910(rdram, ctx);
        goto after_8;
    // 0x800646FC: nop

    after_8:
L_80064700:
    // 0x80064700: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80064704: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80064708: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8006470C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80064710: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80064714: jr          $ra
    // 0x80064718: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80064718: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8005F7D4_3ABD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005F7D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005F7D8: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8005F7DC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8005F7E0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8005F7E4: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8005F7E8: subu        $a2, $a2, $a0
    ctx->r6 = SUB32(ctx->r6, ctx->r4);
    // 0x8005F7EC: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8005F7F0: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8005F7F4: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8005F7F8: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8005F7FC: subu        $a3, $a3, $a1
    ctx->r7 = SUB32(ctx->r7, ctx->r5);
    // 0x8005F800: sll         $a0, $a3, 12
    ctx->r4 = S32(ctx->r7 << 12);
    // 0x8005F804: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8005F808: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8005F80C: bgez        $a2, L_8005F81C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8005F810: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8005F81C;
    }
    // 0x8005F810: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005F814: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x8005F818: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
L_8005F81C:
    // 0x8005F81C: bgez        $a0, L_8005F82C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8005F820: nop
    
            goto L_8005F82C;
    }
    // 0x8005F820: nop

    // 0x8005F824: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x8005F828: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8005F82C:
    // 0x8005F82C: bne         $a2, $zero, L_8005F844
    if (ctx->r6 != 0) {
        // 0x8005F830: sltiu       $v1, $s0, 0x1
        ctx->r3 = ctx->r16 < 0X1 ? 1 : 0;
            goto L_8005F844;
    }
    // 0x8005F830: sltiu       $v1, $s0, 0x1
    ctx->r3 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x8005F834: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005F838: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x8005F83C: j           L_8005F8EC
    // 0x8005F840: sll         $v0, $v0, 11
    ctx->r2 = S32(ctx->r2 << 11);
        goto L_8005F8EC;
    // 0x8005F840: sll         $v0, $v0, 11
    ctx->r2 = S32(ctx->r2 << 11);
L_8005F844:
    // 0x8005F844: xori        $v0, $s0, 0x3
    ctx->r2 = ctx->r16 ^ 0X3;
    // 0x8005F848: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8005F84C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8005F850: bne         $v1, $zero, L_8005F8A4
    if (ctx->r3 != 0) {
        // 0x8005F854: nop
    
            goto L_8005F8A4;
    }
    // 0x8005F854: nop

    // 0x8005F858: div         $zero, $a0, $a2
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r6)));
    // 0x8005F85C: bne         $a2, $zero, L_8005F868
    if (ctx->r6 != 0) {
        // 0x8005F860: nop
    
            goto L_8005F868;
    }
    // 0x8005F860: nop

    // 0x8005F864: break       7
    do_break(2147874916);
L_8005F868:
    // 0x8005F868: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005F86C: bne         $a2, $at, L_8005F880
    if (ctx->r6 != ctx->r1) {
        // 0x8005F870: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8005F880;
    }
    // 0x8005F870: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005F874: bne         $a0, $at, L_8005F880
    if (ctx->r4 != ctx->r1) {
        // 0x8005F878: nop
    
            goto L_8005F880;
    }
    // 0x8005F878: nop

    // 0x8005F87C: break       6
    do_break(2147874940);
L_8005F880:
    // 0x8005F880: mflo        $a0
    ctx->r4 = lo;
    // 0x8005F884: jal         0x80032554
    // 0x8005F888: nop

    func_80032554_D954(rdram, ctx);
        goto after_0;
    // 0x8005F888: nop

    after_0:
    // 0x8005F88C: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x8005F890: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005F894: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8005F898: lw          $v1, 0x4E0($at)
    ctx->r3 = MEM_W(ctx->r1, 0X4E0);
    // 0x8005F89C: j           L_8005F8EC
    // 0x8005F8A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_8005F8EC;
    // 0x8005F8A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_8005F8A4:
    // 0x8005F8A4: div         $zero, $a0, $a2
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r6)));
    // 0x8005F8A8: bne         $a2, $zero, L_8005F8B4
    if (ctx->r6 != 0) {
        // 0x8005F8AC: nop
    
            goto L_8005F8B4;
    }
    // 0x8005F8AC: nop

    // 0x8005F8B0: break       7
    do_break(2147874992);
L_8005F8B4:
    // 0x8005F8B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005F8B8: bne         $a2, $at, L_8005F8CC
    if (ctx->r6 != ctx->r1) {
        // 0x8005F8BC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8005F8CC;
    }
    // 0x8005F8BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005F8C0: bne         $a0, $at, L_8005F8CC
    if (ctx->r4 != ctx->r1) {
        // 0x8005F8C4: nop
    
            goto L_8005F8CC;
    }
    // 0x8005F8C4: nop

    // 0x8005F8C8: break       6
    do_break(2147875016);
L_8005F8CC:
    // 0x8005F8CC: mflo        $a0
    ctx->r4 = lo;
    // 0x8005F8D0: jal         0x80032554
    // 0x8005F8D4: nop

    func_80032554_D954(rdram, ctx);
        goto after_1;
    // 0x8005F8D4: nop

    after_1:
    // 0x8005F8D8: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x8005F8DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005F8E0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8005F8E4: lw          $v1, 0x4E0($at)
    ctx->r3 = MEM_W(ctx->r1, 0X4E0);
    // 0x8005F8E8: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
L_8005F8EC:
    // 0x8005F8EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005F8F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8005F8F4: jr          $ra
    // 0x8005F8F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005F8F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800633BC_3E7BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800633BC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800633C0: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x800633C4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x800633C8: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x800633CC: lui         $s3, 0x801B
    ctx->r19 = S32(0X801B << 16);
    // 0x800633D0: addiu       $s3, $s3, -0x2414
    ctx->r19 = ADD32(ctx->r19, -0X2414);
    // 0x800633D4: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x800633D8: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x800633DC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x800633E0: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x800633E4: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x800633E8: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x800633EC: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x800633F0: and         $v0, $v1, $a0
    ctx->r2 = ctx->r3 & ctx->r4;
    // 0x800633F4: bne         $v0, $zero, L_80063548
    if (ctx->r2 != 0) {
        // 0x800633F8: or          $v0, $v1, $a0
        ctx->r2 = ctx->r3 | ctx->r4;
            goto L_80063548;
    }
    // 0x800633F8: or          $v0, $v1, $a0
    ctx->r2 = ctx->r3 | ctx->r4;
    // 0x800633FC: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x80063400: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80063404: lw          $a1, -0x240C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X240C);
    // 0x80063408: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x8006340C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80063410: jal         0x8009A3B4
    // 0x80063414: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80063414: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80063418: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8006341C: lw          $a0, -0x240C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X240C);
    // 0x80063420: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x80063424: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80063428: lw          $v0, 0x6C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X6C);
    // 0x8006342C: lbu         $v1, 0xA($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XA);
    // 0x80063430: lbu         $v0, 0x9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9);
    // 0x80063434: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x80063438: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006343C: lh          $v1, 0x2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2);
    // 0x80063440: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80063444: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80063448: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006344C: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x80063450: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x80063454: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80063458: lbu         $v1, -0x3A50($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A50);
    // 0x8006345C: bne         $v1, $zero, L_800634CC
    if (ctx->r3 != 0) {
        // 0x80063460: sw          $v0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r2;
            goto L_800634CC;
    }
    // 0x80063460: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80063464: lw          $v1, 0x6C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X6C);
    // 0x80063468: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006346C: lbu         $v0, 0x4($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4);
    // 0x80063470: lbu         $s0, 0x3($v1)
    ctx->r16 = MEM_BU(ctx->r3, 0X3);
    // 0x80063474: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80063478: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8006347C: jal         0x8004EC38
    // 0x80063480: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x80063480: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    after_1:
    // 0x80063484: lw          $a3, 0x6C($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X6C);
    // 0x80063488: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8006348C: lbu         $v1, 0x6($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X6);
    // 0x80063490: lbu         $a2, 0x5($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X5);
    // 0x80063494: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80063498: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x8006349C: or          $a2, $a2, $v1
    ctx->r6 = ctx->r6 | ctx->r3;
    // 0x800634A0: addu        $a2, $v0, $a2
    ctx->r6 = ADD32(ctx->r2, ctx->r6);
    // 0x800634A4: lbu         $v0, 0x8($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X8);
    // 0x800634A8: lbu         $a3, 0x7($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X7);
    // 0x800634AC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800634B0: lw          $v1, 0x435C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X435C);
    // 0x800634B4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x800634B8: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x800634BC: jal         0x80034FCC
    // 0x800634C0: addu        $a3, $v1, $a3
    ctx->r7 = ADD32(ctx->r3, ctx->r7);
    func_80034FCC_103CC(rdram, ctx);
        goto after_2;
    // 0x800634C0: addu        $a3, $v1, $a3
    ctx->r7 = ADD32(ctx->r3, ctx->r7);
    after_2:
    // 0x800634C4: j           L_8006352C
    // 0x800634C8: nop

        goto L_8006352C;
    // 0x800634C8: nop

L_800634CC:
    // 0x800634CC: lw          $v1, 0x6C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X6C);
    // 0x800634D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800634D4: lbu         $v0, 0x4($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4);
    // 0x800634D8: lbu         $s0, 0x3($v1)
    ctx->r16 = MEM_BU(ctx->r3, 0X3);
    // 0x800634DC: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x800634E0: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x800634E4: jal         0x8004EC38
    // 0x800634E8: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x800634E8: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    after_3:
    // 0x800634EC: lw          $a3, 0x6C($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X6C);
    // 0x800634F0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x800634F4: lbu         $v1, 0x6($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X6);
    // 0x800634F8: lbu         $a2, 0x5($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X5);
    // 0x800634FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80063500: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x80063504: or          $a2, $a2, $v1
    ctx->r6 = ctx->r6 | ctx->r3;
    // 0x80063508: addu        $a2, $v0, $a2
    ctx->r6 = ADD32(ctx->r2, ctx->r6);
    // 0x8006350C: lbu         $v0, 0x8($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X8);
    // 0x80063510: lbu         $a3, 0x7($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X7);
    // 0x80063514: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80063518: lw          $v1, 0x435C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X435C);
    // 0x8006351C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80063520: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x80063524: jal         0x8003501C
    // 0x80063528: addu        $a3, $v1, $a3
    ctx->r7 = ADD32(ctx->r3, ctx->r7);
    func_8003501C_1041C(rdram, ctx);
        goto after_4;
    // 0x80063528: addu        $a3, $v1, $a3
    ctx->r7 = ADD32(ctx->r3, ctx->r7);
    after_4:
L_8006352C:
    // 0x8006352C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80063530: lw          $a0, 0x6C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X6C);
    // 0x80063534: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x80063538: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8006353C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x80063540: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x80063544: sb          $v0, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r2;
L_80063548:
    // 0x80063548: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8006354C: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x80063550: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80063554: jal         0x8003516C
    // 0x80063558: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    func_8003516C_1056C(rdram, ctx);
        goto after_5;
    // 0x80063558: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    after_5:
    // 0x8006355C: bne         $v0, $zero, L_80063588
    if (ctx->r2 != 0) {
        // 0x80063560: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80063588;
    }
    // 0x80063560: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80063564: lui         $v1, 0xEEFF
    ctx->r3 = S32(0XEEFF << 16);
    // 0x80063568: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8006356C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80063570: lw          $a1, 0x6C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X6C);
    // 0x80063574: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80063578: and         $a0, $a0, $v1
    ctx->r4 = ctx->r4 & ctx->r3;
    // 0x8006357C: addiu       $a1, $a1, 0xB
    ctx->r5 = ADD32(ctx->r5, 0XB);
    // 0x80063580: sw          $a0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r4;
    // 0x80063584: sw          $a1, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->r5;
L_80063588:
    // 0x80063588: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x8006358C: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80063590: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80063594: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80063598: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8006359C: jr          $ra
    // 0x800635A0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x800635A0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80036BCC_11FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036BCC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80036BD0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80036BD4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80036BD8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80036BDC: lui         $s4, 0x8020
    ctx->r20 = S32(0X8020 << 16);
    // 0x80036BE0: addiu       $s4, $s4, 0x4A38
    ctx->r20 = ADD32(ctx->r20, 0X4A38);
    // 0x80036BE4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80036BE8: lui         $s3, 0x801C
    ctx->r19 = S32(0X801C << 16);
    // 0x80036BEC: addiu       $s3, $s3, -0x3BB8
    ctx->r19 = ADD32(ctx->r19, -0X3BB8);
    // 0x80036BF0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80036BF4: lui         $s2, 0x801A
    ctx->r18 = S32(0X801A << 16);
    // 0x80036BF8: addiu       $s2, $s2, -0x5850
    ctx->r18 = ADD32(ctx->r18, -0X5850);
    // 0x80036BFC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80036C00: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
L_80036C04:
    // 0x80036C04: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x80036C08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80036C0C: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x80036C10: andi        $a2, $s1, 0xFFFF
    ctx->r6 = ctx->r17 & 0XFFFF;
    // 0x80036C14: jal         0x8007FBC0
    // 0x80036C18: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_8007FBC0_5AFC0(rdram, ctx);
        goto after_0;
    // 0x80036C18: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x80036C1C: beq         $s0, $zero, L_80036D04
    if (ctx->r16 == 0) {
        // 0x80036C20: addu        $t2, $v0, $zero
        ctx->r10 = ADD32(ctx->r2, 0);
            goto L_80036D04;
    }
    // 0x80036C20: addu        $t2, $v0, $zero
    ctx->r10 = ADD32(ctx->r2, 0);
    // 0x80036C24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80036C28: bne         $s1, $v0, L_80036C3C
    if (ctx->r17 != ctx->r2) {
        // 0x80036C2C: nop
    
            goto L_80036C3C;
    }
    // 0x80036C2C: nop

    // 0x80036C30: lb          $v0, 0xE2($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XE2);
    // 0x80036C34: beql        $v0, $zero, L_80036D08
    if (ctx->r2 == 0) {
        // 0x80036C38: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80036D08;
    }
    goto skip_0;
    // 0x80036C38: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
L_80036C3C:
    // 0x80036C3C: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x80036C40: blez        $v0, L_80036D04
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80036C44: addu        $t1, $zero, $zero
        ctx->r9 = ADD32(0, 0);
            goto L_80036D04;
    }
    // 0x80036C44: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x80036C48: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
L_80036C4C:
    // 0x80036C4C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80036C50: lh          $a0, 0x0($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X0);
    // 0x80036C54: srl         $a2, $v0, 11
    ctx->r6 = S32(U32(ctx->r2) >> 11);
    // 0x80036C58: srl         $v1, $v0, 6
    ctx->r3 = S32(U32(ctx->r2) >> 6);
    // 0x80036C5C: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80036C60: andi        $a1, $v0, 0x1F
    ctx->r5 = ctx->r2 & 0X1F;
    // 0x80036C64: slti        $v0, $a0, 0x41
    ctx->r2 = SIGNED(ctx->r4) < 0X41 ? 1 : 0;
    // 0x80036C68: bne         $v0, $zero, L_80036C78
    if (ctx->r2 != 0) {
        // 0x80036C6C: andi        $a3, $v1, 0x1F
        ctx->r7 = ctx->r3 & 0X1F;
            goto L_80036C78;
    }
    // 0x80036C6C: andi        $a3, $v1, 0x1F
    ctx->r7 = ctx->r3 & 0X1F;
    // 0x80036C70: j           L_80036C88
    // 0x80036C74: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
        goto L_80036C88;
    // 0x80036C74: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_80036C78:
    // 0x80036C78: slti        $v0, $a0, 0x21
    ctx->r2 = SIGNED(ctx->r4) < 0X21 ? 1 : 0;
    // 0x80036C7C: bne         $v0, $zero, L_80036C88
    if (ctx->r2 != 0) {
        // 0x80036C80: addiu       $v1, $zero, -0x12
        ctx->r3 = ADD32(0, -0X12);
            goto L_80036C88;
    }
    // 0x80036C80: addiu       $v1, $zero, -0x12
    ctx->r3 = ADD32(0, -0X12);
    // 0x80036C84: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
L_80036C88:
    // 0x80036C88: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80036C8C: addu        $a3, $a3, $v1
    ctx->r7 = ADD32(ctx->r7, ctx->r3);
    // 0x80036C90: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80036C94: nor         $v0, $zero, $a2
    ctx->r2 = ~(0 | ctx->r6);
    // 0x80036C98: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80036C9C: and         $a2, $a2, $v0
    ctx->r6 = ctx->r6 & ctx->r2;
    // 0x80036CA0: nor         $v0, $zero, $a3
    ctx->r2 = ~(0 | ctx->r7);
    // 0x80036CA4: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80036CA8: and         $a3, $a3, $v0
    ctx->r7 = ctx->r7 & ctx->r2;
    // 0x80036CAC: nor         $v0, $zero, $a1
    ctx->r2 = ~(0 | ctx->r5);
    // 0x80036CB0: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80036CB4: and         $a1, $a1, $v0
    ctx->r5 = ctx->r5 & ctx->r2;
    // 0x80036CB8: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x80036CBC: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x80036CC0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80036CC4: sll         $v0, $a2, 11
    ctx->r2 = S32(ctx->r6 << 11);
    // 0x80036CC8: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x80036CCC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80036CD0: sll         $v0, $a3, 6
    ctx->r2 = S32(ctx->r7 << 6);
    // 0x80036CD4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80036CD8: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x80036CDC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80036CE0: sh          $v1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r3;
    // 0x80036CE4: slti        $v0, $t0, 0x10
    ctx->r2 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x80036CE8: bne         $v0, $zero, L_80036C4C
    if (ctx->r2 != 0) {
        // 0x80036CEC: addiu       $t2, $t2, 0x2
        ctx->r10 = ADD32(ctx->r10, 0X2);
            goto L_80036C4C;
    }
    // 0x80036CEC: addiu       $t2, $t2, 0x2
    ctx->r10 = ADD32(ctx->r10, 0X2);
    // 0x80036CF0: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x80036CF4: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80036CF8: slt         $v0, $t1, $v0
    ctx->r2 = SIGNED(ctx->r9) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80036CFC: bnel        $v0, $zero, L_80036C4C
    if (ctx->r2 != 0) {
        // 0x80036D00: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_80036C4C;
    }
    goto skip_1;
    // 0x80036D00: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    skip_1:
L_80036D04:
    // 0x80036D04: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80036D08:
    // 0x80036D08: slti        $v0, $s1, 0xF
    ctx->r2 = SIGNED(ctx->r17) < 0XF ? 1 : 0;
    // 0x80036D0C: bne         $v0, $zero, L_80036C04
    if (ctx->r2 != 0) {
        // 0x80036D10: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_80036C04;
    }
    // 0x80036D10: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80036D14: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80036D18: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80036D1C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80036D20: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80036D24: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80036D28: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80036D2C: jr          $ra
    // 0x80036D30: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80036D30: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006811C_4351C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006811C: addu        $t5, $a0, $zero
    ctx->r13 = ADD32(ctx->r4, 0);
    // 0x80068120: lbu         $v1, 0x7D($t5)
    ctx->r3 = MEM_BU(ctx->r13, 0X7D);
    // 0x80068124: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80068128: beq         $v1, $v0, L_80068244
    if (ctx->r3 == ctx->r2) {
        // 0x8006812C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80068244;
    }
    // 0x8006812C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80068130: beql        $v0, $zero, L_80068148
    if (ctx->r2 == 0) {
        // 0x80068134: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80068148;
    }
    goto skip_0;
    // 0x80068134: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80068138: beq         $v1, $zero, L_80068158
    if (ctx->r3 == 0) {
        // 0x8006813C: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80068158;
    }
    // 0x8006813C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80068140: j           L_80068420
    // 0x80068144: nop

        goto L_80068420;
    // 0x80068144: nop

L_80068148:
    // 0x80068148: beq         $v1, $v0, L_800683AC
    if (ctx->r3 == ctx->r2) {
        // 0x8006814C: nop
    
            goto L_800683AC;
    }
    // 0x8006814C: nop

    // 0x80068150: j           L_80068420
    // 0x80068154: nop

        goto L_80068420;
    // 0x80068154: nop

L_80068158:
    // 0x80068158: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x8006815C: lw          $a1, 0x6C($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X6C);
    // 0x80068160: sb          $v0, 0x85($t5)
    MEM_B(0X85, ctx->r13) = ctx->r2;
    // 0x80068164: lui         $v0, 0x1400
    ctx->r2 = S32(0X1400 << 16);
    // 0x80068168: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8006816C: sw          $v1, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r3;
    // 0x80068170: lw          $v0, 0x0($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X0);
    // 0x80068174: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x80068178: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x8006817C: sw          $v1, 0x80($t5)
    MEM_W(0X80, ctx->r13) = ctx->r3;
    // 0x80068180: lbu         $v1, 0x7F($t5)
    ctx->r3 = MEM_BU(ctx->r13, 0X7F);
    // 0x80068184: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80068188: sw          $v0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r2;
    // 0x8006818C: lbu         $a2, 0x2($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X2);
    // 0x80068190: lbu         $v0, 0x7D($t5)
    ctx->r2 = MEM_BU(ctx->r13, 0X7D);
    // 0x80068194: lbu         $a0, 0x7F($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X7F);
    // 0x80068198: lbu         $a1, 0x7E($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X7E);
    // 0x8006819C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800681A0: sb          $v0, 0x7D($t5)
    MEM_B(0X7D, ctx->r13) = ctx->r2;
    // 0x800681A4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x800681A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800681AC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800681B0: sh          $v0, 0x8A($t5)
    MEM_H(0X8A, ctx->r13) = ctx->r2;
    // 0x800681B4: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x800681B8: lbu         $v1, 0x7F($t5)
    ctx->r3 = MEM_BU(ctx->r13, 0X7F);
    // 0x800681BC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800681C0: lbu         $a0, 0x7F($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X7F);
    // 0x800681C4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800681C8: sh          $v0, 0x8E($t5)
    MEM_H(0X8E, ctx->r13) = ctx->r2;
    // 0x800681CC: sh          $a2, 0xB4($t5)
    MEM_H(0XB4, ctx->r13) = ctx->r6;
    // 0x800681D0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x800681D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800681D8: lhu         $v1, 0xB4($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0XB4);
    // 0x800681DC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800681E0: sh          $v0, 0x92($t5)
    MEM_H(0X92, ctx->r13) = ctx->r2;
    // 0x800681E4: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x800681E8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800681EC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800681F0: sh          $v0, 0x96($t5)
    MEM_H(0X96, ctx->r13) = ctx->r2;
    // 0x800681F4: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x800681F8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800681FC: lhu         $a0, 0xB4($t5)
    ctx->r4 = MEM_HU(ctx->r13, 0XB4);
    // 0x80068200: lbu         $a1, 0x7E($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X7E);
    // 0x80068204: sh          $a2, 0xB6($t5)
    MEM_H(0XB6, ctx->r13) = ctx->r6;
    // 0x80068208: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x8006820C: sh          $v1, 0x88($t5)
    MEM_H(0X88, ctx->r13) = ctx->r3;
    // 0x80068210: lhu         $v1, 0xB4($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0XB4);
    // 0x80068214: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80068218: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x8006821C: sh          $a0, 0x90($t5)
    MEM_H(0X90, ctx->r13) = ctx->r4;
    // 0x80068220: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80068224: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x80068228: sh          $v1, 0x8C($t5)
    MEM_H(0X8C, ctx->r13) = ctx->r3;
    // 0x8006822C: lhu         $v1, 0xB4($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0XB4);
    // 0x80068230: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80068234: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80068238: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006823C: j           L_80068420
    // 0x80068240: sh          $v1, 0x94($t5)
    MEM_H(0X94, ctx->r13) = ctx->r3;
        goto L_80068420;
    // 0x80068240: sh          $v1, 0x94($t5)
    MEM_H(0X94, ctx->r13) = ctx->r3;
L_80068244:
    // 0x80068244: lbu         $v1, 0x85($t5)
    ctx->r3 = MEM_BU(ctx->r13, 0X85);
    // 0x80068248: lhu         $v0, 0x8A($t5)
    ctx->r2 = MEM_HU(ctx->r13, 0X8A);
    // 0x8006824C: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x80068250: lbu         $t2, 0x85($t5)
    ctx->r10 = MEM_BU(ctx->r13, 0X85);
    // 0x80068254: lhu         $a1, 0x8E($t5)
    ctx->r5 = MEM_HU(ctx->r13, 0X8E);
    // 0x80068258: lbu         $t3, 0x85($t5)
    ctx->r11 = MEM_BU(ctx->r13, 0X85);
    // 0x8006825C: lhu         $a2, 0x92($t5)
    ctx->r6 = MEM_HU(ctx->r13, 0X92);
    // 0x80068260: lbu         $t4, 0x85($t5)
    ctx->r12 = MEM_BU(ctx->r13, 0X85);
    // 0x80068264: lhu         $a3, 0x96($t5)
    ctx->r7 = MEM_HU(ctx->r13, 0X96);
    // 0x80068268: lhu         $t1, 0xB6($t5)
    ctx->r9 = MEM_HU(ctx->r13, 0XB6);
    // 0x8006826C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80068270: lh          $v1, 0xA($t5)
    ctx->r3 = MEM_H(ctx->r13, 0XA);
    // 0x80068274: sh          $v0, 0x8A($t5)
    MEM_H(0X8A, ctx->r13) = ctx->r2;
    // 0x80068278: lh          $t0, 0x8A($t5)
    ctx->r8 = MEM_H(ctx->r13, 0X8A);
    // 0x8006827C: lui         $v0, 0x1000
    ctx->r2 = S32(0X1000 << 16);
    // 0x80068280: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80068284: subu        $a1, $a1, $t2
    ctx->r5 = SUB32(ctx->r5, ctx->r10);
    // 0x80068288: addu        $a2, $a2, $t3
    ctx->r6 = ADD32(ctx->r6, ctx->r11);
    // 0x8006828C: addu        $a3, $a3, $t4
    ctx->r7 = ADD32(ctx->r7, ctx->r12);
    // 0x80068290: sw          $a0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r4;
    // 0x80068294: sh          $a1, 0x8E($t5)
    MEM_H(0X8E, ctx->r13) = ctx->r5;
    // 0x80068298: sh          $a2, 0x92($t5)
    MEM_H(0X92, ctx->r13) = ctx->r6;
    // 0x8006829C: addu        $t0, $v1, $t0
    ctx->r8 = ADD32(ctx->r3, ctx->r8);
    // 0x800682A0: subu        $v1, $v1, $t1
    ctx->r3 = SUB32(ctx->r3, ctx->r9);
    // 0x800682A4: slt         $v1, $v1, $t0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800682A8: bne         $v1, $zero, L_80068420
    if (ctx->r3 != 0) {
        // 0x800682AC: sh          $a3, 0x96($t5)
        MEM_H(0X96, ctx->r13) = ctx->r7;
            goto L_80068420;
    }
    // 0x800682AC: sh          $a3, 0x96($t5)
    MEM_H(0X96, ctx->r13) = ctx->r7;
    // 0x800682B0: lui         $t1, 0xF7FF
    ctx->r9 = S32(0XF7FF << 16);
    // 0x800682B4: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x800682B8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800682BC: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x800682C0: lhu         $a1, 0xB4($t5)
    ctx->r5 = MEM_HU(ctx->r13, 0XB4);
    // 0x800682C4: lhu         $a2, 0xB6($t5)
    ctx->r6 = MEM_HU(ctx->r13, 0XB6);
    // 0x800682C8: lhu         $a3, 0xB6($t5)
    ctx->r7 = MEM_HU(ctx->r13, 0XB6);
    // 0x800682CC: lhu         $t0, 0xB4($t5)
    ctx->r8 = MEM_HU(ctx->r13, 0XB4);
    // 0x800682D0: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x800682D4: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x800682D8: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x800682DC: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x800682E0: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x800682E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800682E8: sw          $a0, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r4;
    // 0x800682EC: sh          $a1, 0x88($t5)
    MEM_H(0X88, ctx->r13) = ctx->r5;
    // 0x800682F0: lbu         $a1, 0x7E($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X7E);
    // 0x800682F4: lui         $v0, 0x1200
    ctx->r2 = S32(0X1200 << 16);
    // 0x800682F8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800682FC: sh          $a2, 0x8A($t5)
    MEM_H(0X8A, ctx->r13) = ctx->r6;
    // 0x80068300: lbu         $a2, 0x7D($t5)
    ctx->r6 = MEM_BU(ctx->r13, 0X7D);
    // 0x80068304: lw          $a0, 0x80($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X80);
    // 0x80068308: lw          $v0, 0x6C($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X6C);
    // 0x8006830C: negu        $a3, $a3
    ctx->r7 = SUB32(0, ctx->r7);
    // 0x80068310: negu        $t0, $t0
    ctx->r8 = SUB32(0, ctx->r8);
    // 0x80068314: sw          $v1, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r3;
    // 0x80068318: and         $v1, $v1, $t1
    ctx->r3 = ctx->r3 & ctx->r9;
    // 0x8006831C: sh          $a3, 0x8E($t5)
    MEM_H(0X8E, ctx->r13) = ctx->r7;
    // 0x80068320: sh          $t0, 0x90($t5)
    MEM_H(0X90, ctx->r13) = ctx->r8;
    // 0x80068324: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80068328: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x8006832C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80068330: sw          $v0, 0x6C($t5)
    MEM_W(0X6C, ctx->r13) = ctx->r2;
    // 0x80068334: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x80068338: sw          $v1, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r3;
    // 0x8006833C: lhu         $v1, 0xB4($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0XB4);
    // 0x80068340: lbu         $a0, 0x7F($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X7F);
    // 0x80068344: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80068348: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8006834C: sb          $a2, 0x7D($t5)
    MEM_B(0X7D, ctx->r13) = ctx->r6;
    // 0x80068350: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80068354: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80068358: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8006835C: sh          $v1, 0x8C($t5)
    MEM_H(0X8C, ctx->r13) = ctx->r3;
    // 0x80068360: lhu         $v1, 0xB6($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0XB6);
    // 0x80068364: lbu         $a0, 0x7E($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X7E);
    // 0x80068368: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8006836C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80068370: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80068374: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80068378: sh          $v1, 0x92($t5)
    MEM_H(0X92, ctx->r13) = ctx->r3;
    // 0x8006837C: lhu         $v1, 0xB4($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0XB4);
    // 0x80068380: lbu         $a0, 0x7F($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X7F);
    // 0x80068384: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80068388: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006838C: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80068390: sh          $v1, 0x94($t5)
    MEM_H(0X94, ctx->r13) = ctx->r3;
    // 0x80068394: lhu         $v1, 0xB6($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0XB6);
    // 0x80068398: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8006839C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800683A0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800683A4: j           L_80068420
    // 0x800683A8: sh          $v1, 0x96($t5)
    MEM_H(0X96, ctx->r13) = ctx->r3;
        goto L_80068420;
    // 0x800683A8: sh          $v1, 0x96($t5)
    MEM_H(0X96, ctx->r13) = ctx->r3;
L_800683AC:
    // 0x800683AC: lbu         $a0, 0x85($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X85);
    // 0x800683B0: lhu         $v0, 0x8A($t5)
    ctx->r2 = MEM_HU(ctx->r13, 0X8A);
    // 0x800683B4: lbu         $a1, 0x85($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X85);
    // 0x800683B8: lhu         $v1, 0x92($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0X92);
    // 0x800683BC: lbu         $a3, 0x85($t5)
    ctx->r7 = MEM_BU(ctx->r13, 0X85);
    // 0x800683C0: lbu         $t0, 0x85($t5)
    ctx->r8 = MEM_BU(ctx->r13, 0X85);
    // 0x800683C4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800683C8: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x800683CC: sh          $v1, 0x92($t5)
    MEM_H(0X92, ctx->r13) = ctx->r3;
    // 0x800683D0: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x800683D4: lhu         $a0, 0x8E($t5)
    ctx->r4 = MEM_HU(ctx->r13, 0X8E);
    // 0x800683D8: lhu         $a1, 0x96($t5)
    ctx->r5 = MEM_HU(ctx->r13, 0X96);
    // 0x800683DC: sh          $v0, 0x8A($t5)
    MEM_H(0X8A, ctx->r13) = ctx->r2;
    // 0x800683E0: lh          $t1, 0x8A($t5)
    ctx->r9 = MEM_H(ctx->r13, 0X8A);
    // 0x800683E4: lh          $a2, 0x92($t5)
    ctx->r6 = MEM_H(ctx->r13, 0X92);
    // 0x800683E8: lui         $v0, 0x1000
    ctx->r2 = S32(0X1000 << 16);
    // 0x800683EC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800683F0: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x800683F4: subu        $a1, $a1, $t0
    ctx->r5 = SUB32(ctx->r5, ctx->r8);
    // 0x800683F8: slt         $a2, $a2, $t1
    ctx->r6 = SIGNED(ctx->r6) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800683FC: sw          $v1, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r3;
    // 0x80068400: sh          $a0, 0x8E($t5)
    MEM_H(0X8E, ctx->r13) = ctx->r4;
    // 0x80068404: beq         $a2, $zero, L_80068420
    if (ctx->r6 == 0) {
        // 0x80068408: sh          $a1, 0x96($t5)
        MEM_H(0X96, ctx->r13) = ctx->r5;
            goto L_80068420;
    }
    // 0x80068408: sh          $a1, 0x96($t5)
    MEM_H(0X96, ctx->r13) = ctx->r5;
    // 0x8006840C: lw          $v0, 0x0($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X0);
    // 0x80068410: lui         $v1, 0xF9FF
    ctx->r3 = S32(0XF9FF << 16);
    // 0x80068414: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80068418: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006841C: sw          $v0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r2;
L_80068420:
    // 0x80068420: jr          $ra
    // 0x80068424: nop

    TRACE_RETURN()
    return;
    // 0x80068424: nop

;}
RECOMP_FUNC void func_8003EF5C_1A35C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003EF5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003EF60: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8003EF64: lw          $a1, 0x78($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X78);
    // 0x8003EF68: lbu         $a2, 0x1($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X1);
    // 0x8003EF6C: jal         0x8003EF80
    // 0x8003EF70: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_8003EF80_1A380(rdram, ctx);
        goto after_0;
    // 0x8003EF70: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_0:
    // 0x8003EF74: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8003EF78: jr          $ra
    // 0x8003EF7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8003EF7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80031F00_D300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80031F00: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80031F04: jr          $ra
    // 0x80031F08: sw          $a0, 0x5470($at)
    MEM_W(0X5470, ctx->r1) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x80031F08: sw          $a0, 0x5470($at)
    MEM_W(0X5470, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8002CA30_7E30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002CA30: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8002CA34: lw          $v1, 0x2704($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2704);
    // 0x8002CA38: beq         $v1, $zero, L_8002CABC
    if (ctx->r3 == 0) {
        // 0x8002CA3C: nop
    
            goto L_8002CABC;
    }
    // 0x8002CA3C: nop

    // 0x8002CA40: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8002CA44: sra         $t0, $v0, 16
    ctx->r8 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002CA48: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8002CA4C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002CA50: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x8002CA54: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8002CA58: sra         $a2, $v0, 16
    ctx->r6 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002CA5C: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8002CA60: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002CA64: addu        $a3, $a2, $v0
    ctx->r7 = ADD32(ctx->r6, ctx->r2);
L_8002CA68:
    // 0x8002CA68: lh          $a0, 0x8($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X8);
    // 0x8002CA6C: slt         $v0, $t0, $a0
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8002CA70: bne         $v0, $zero, L_8002CAB0
    if (ctx->r2 != 0) {
        // 0x8002CA74: nop
    
            goto L_8002CAB0;
    }
    // 0x8002CA74: nop

    // 0x8002CA78: lh          $a1, 0xA($v1)
    ctx->r5 = MEM_H(ctx->r3, 0XA);
    // 0x8002CA7C: slt         $v0, $a2, $a1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8002CA80: bne         $v0, $zero, L_8002CAB0
    if (ctx->r2 != 0) {
        // 0x8002CA84: nop
    
            goto L_8002CAB0;
    }
    // 0x8002CA84: nop

    // 0x8002CA88: lh          $v0, 0xC($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XC);
    // 0x8002CA8C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x8002CA90: slt         $v0, $v0, $t1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8002CA94: bne         $v0, $zero, L_8002CAB0
    if (ctx->r2 != 0) {
        // 0x8002CA98: nop
    
            goto L_8002CAB0;
    }
    // 0x8002CA98: nop

    // 0x8002CA9C: lh          $v0, 0xE($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XE);
    // 0x8002CAA0: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8002CAA4: slt         $v0, $v0, $a3
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8002CAA8: beq         $v0, $zero, L_8002CABC
    if (ctx->r2 == 0) {
        // 0x8002CAAC: nop
    
            goto L_8002CABC;
    }
    // 0x8002CAAC: nop

L_8002CAB0:
    // 0x8002CAB0: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8002CAB4: bne         $v1, $zero, L_8002CA68
    if (ctx->r3 != 0) {
        // 0x8002CAB8: nop
    
            goto L_8002CA68;
    }
    // 0x8002CAB8: nop

L_8002CABC:
    // 0x8002CABC: jr          $ra
    // 0x8002CAC0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    TRACE_RETURN()
    return;
    // 0x8002CAC0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8002CAC4: nop

    // 0x8002CAC8: nop

    // 0x8002CACC: nop

;}
RECOMP_FUNC void func_800936CC_6EACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800936CC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800936D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800936D4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x800936D8: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x800936DC: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x800936E0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x800936E4: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x800936E8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x800936EC: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x800936F0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x800936F4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x800936F8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x800936FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_80093700:
    // 0x80093700: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80093704: addiu       $v0, $v0, -0x3C40
    ctx->r2 = ADD32(ctx->r2, -0X3C40);
    // 0x80093708: addu        $s0, $s2, $v0
    ctx->r16 = ADD32(ctx->r18, ctx->r2);
    // 0x8009370C: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x80093710: beq         $v1, $s4, L_80093768
    if (ctx->r3 == ctx->r20) {
        // 0x80093714: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_80093768;
    }
    // 0x80093714: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x80093718: beql        $v0, $zero, L_80093738
    if (ctx->r2 == 0) {
        // 0x8009371C: slti        $v0, $v1, 0x83
        ctx->r2 = SIGNED(ctx->r3) < 0X83 ? 1 : 0;
            goto L_80093738;
    }
    goto skip_0;
    // 0x8009371C: slti        $v0, $v1, 0x83
    ctx->r2 = SIGNED(ctx->r3) < 0X83 ? 1 : 0;
    skip_0:
    // 0x80093720: beql        $v1, $zero, L_80093814
    if (ctx->r3 == 0) {
        // 0x80093724: addiu       $s3, $s3, 0x68
        ctx->r19 = ADD32(ctx->r19, 0X68);
            goto L_80093814;
    }
    goto skip_1;
    // 0x80093724: addiu       $s3, $s3, 0x68
    ctx->r19 = ADD32(ctx->r19, 0X68);
    skip_1:
    // 0x80093728: beq         $v1, $s5, L_80093750
    if (ctx->r3 == ctx->r21) {
        // 0x8009372C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80093750;
    }
    // 0x8009372C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80093730: j           L_80093814
    // 0x80093734: addiu       $s3, $s3, 0x68
    ctx->r19 = ADD32(ctx->r19, 0X68);
        goto L_80093814;
    // 0x80093734: addiu       $s3, $s3, 0x68
    ctx->r19 = ADD32(ctx->r19, 0X68);
L_80093738:
    // 0x80093738: beq         $v0, $zero, L_80093810
    if (ctx->r2 == 0) {
        // 0x8009373C: slti        $v0, $v1, 0x81
        ctx->r2 = SIGNED(ctx->r3) < 0X81 ? 1 : 0;
            goto L_80093810;
    }
    // 0x8009373C: slti        $v0, $v1, 0x81
    ctx->r2 = SIGNED(ctx->r3) < 0X81 ? 1 : 0;
    // 0x80093740: bnel        $v0, $zero, L_80093814
    if (ctx->r2 != 0) {
        // 0x80093744: addiu       $s3, $s3, 0x68
        ctx->r19 = ADD32(ctx->r19, 0X68);
            goto L_80093814;
    }
    goto skip_2;
    // 0x80093744: addiu       $s3, $s3, 0x68
    ctx->r19 = ADD32(ctx->r19, 0X68);
    skip_2:
    // 0x80093748: j           L_800937F8
    // 0x8009374C: nop

        goto L_800937F8;
    // 0x8009374C: nop

L_80093750:
    // 0x80093750: jal         0x800934E0
    // 0x80093754: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_800934E0_6E8E0(rdram, ctx);
        goto after_0;
    // 0x80093754: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80093758: bnel        $v0, $zero, L_80093810
    if (ctx->r2 != 0) {
        // 0x8009375C: sb          $zero, 0x7($s0)
        MEM_B(0X7, ctx->r16) = 0;
            goto L_80093810;
    }
    goto skip_3;
    // 0x8009375C: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    skip_3:
    // 0x80093760: j           L_80093814
    // 0x80093764: addiu       $s3, $s3, 0x68
    ctx->r19 = ADD32(ctx->r19, 0X68);
        goto L_80093814;
    // 0x80093764: addiu       $s3, $s3, 0x68
    ctx->r19 = ADD32(ctx->r19, 0X68);
L_80093768:
    // 0x80093768: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8009376C: bne         $v0, $zero, L_800937D8
    if (ctx->r2 != 0) {
        // 0x80093770: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_800937D8;
    }
    // 0x80093770: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80093774: lhu         $v1, 0x4($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4);
    // 0x80093778: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8009377C: lw          $v0, -0xE50($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XE50);
    // 0x80093780: divu        $zero, $v1, $v0
    lo = S32(U32(ctx->r3) / U32(ctx->r2)); hi = S32(U32(ctx->r3) % U32(ctx->r2));
    // 0x80093784: bne         $v0, $zero, L_80093790
    if (ctx->r2 != 0) {
        // 0x80093788: nop
    
            goto L_80093790;
    }
    // 0x80093788: nop

    // 0x8009378C: break       7
    do_break(2148087692);
L_80093790:
    // 0x80093790: mfhi        $v0
    ctx->r2 = hi;
    // 0x80093794: bne         $v0, $zero, L_800937C8
    if (ctx->r2 != 0) {
        // 0x80093798: nop
    
            goto L_800937C8;
    }
    // 0x80093798: nop

    // 0x8009379C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x800937A0: addiu       $a0, $a0, 0x58F8
    ctx->r4 = ADD32(ctx->r4, 0X58F8);
    // 0x800937A4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x800937A8: addiu       $a1, $a1, 0x5750
    ctx->r5 = ADD32(ctx->r5, 0X5750);
    // 0x800937AC: addu        $a1, $s3, $a1
    ctx->r5 = ADD32(ctx->r19, ctx->r5);
    // 0x800937B0: jal         0x8009CEC4
    // 0x800937B4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    osMotorInit_recomp(rdram, ctx);
        goto after_1;
    // 0x800937B4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
    // 0x800937B8: bne         $v0, $zero, L_800937C8
    if (ctx->r2 != 0) {
        // 0x800937BC: nop
    
            goto L_800937C8;
    }
    // 0x800937BC: nop

    // 0x800937C0: sb          $s5, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r21;
    // 0x800937C4: sb          $s4, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r20;
L_800937C8:
    // 0x800937C8: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x800937CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800937D0: j           L_80093810
    // 0x800937D4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_80093810;
    // 0x800937D4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_800937D8:
    // 0x800937D8: jal         0x800934E0
    // 0x800937DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_800934E0_6E8E0(rdram, ctx);
        goto after_2;
    // 0x800937DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x800937E0: beql        $v0, $zero, L_80093814
    if (ctx->r2 == 0) {
        // 0x800937E4: addiu       $s3, $s3, 0x68
        ctx->r19 = ADD32(ctx->r19, 0X68);
            goto L_80093814;
    }
    goto skip_4;
    // 0x800937E4: addiu       $s3, $s3, 0x68
    ctx->r19 = ADD32(ctx->r19, 0X68);
    skip_4:
    // 0x800937E8: sh          $s1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r17;
    // 0x800937EC: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    // 0x800937F0: j           L_80093810
    // 0x800937F4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_80093810;
    // 0x800937F4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_800937F8:
    // 0x800937F8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x800937FC: bnel        $v0, $s4, L_80093814
    if (ctx->r2 != ctx->r20) {
        // 0x80093800: addiu       $s3, $s3, 0x68
        ctx->r19 = ADD32(ctx->r19, 0X68);
            goto L_80093814;
    }
    goto skip_5;
    // 0x80093800: addiu       $s3, $s3, 0x68
    ctx->r19 = ADD32(ctx->r19, 0X68);
    skip_5:
    // 0x80093804: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80093808: jal         0x800934E0
    // 0x8009380C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_800934E0_6E8E0(rdram, ctx);
        goto after_3;
    // 0x8009380C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
L_80093810:
    // 0x80093810: addiu       $s3, $s3, 0x68
    ctx->r19 = ADD32(ctx->r19, 0X68);
L_80093814:
    // 0x80093814: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80093818: sltiu       $v0, $s1, 0x4
    ctx->r2 = ctx->r17 < 0X4 ? 1 : 0;
    // 0x8009381C: bne         $v0, $zero, L_80093700
    if (ctx->r2 != 0) {
        // 0x80093820: addiu       $s2, $s2, 0xA
        ctx->r18 = ADD32(ctx->r18, 0XA);
            goto L_80093700;
    }
    // 0x80093820: addiu       $s2, $s2, 0xA
    ctx->r18 = ADD32(ctx->r18, 0XA);
    // 0x80093824: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80093828: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8009382C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80093830: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80093834: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80093838: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8009383C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80093840: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80093844: jr          $ra
    // 0x80093848: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80093848: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8008D898_68C98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D898: lbu         $a2, 0x0($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D89C: slti        $v0, $a2, 0x80
    ctx->r2 = SIGNED(ctx->r6) < 0X80 ? 1 : 0;
    // 0x8008D8A0: bne         $v0, $zero, L_8008D8BC
    if (ctx->r2 != 0) {
        // 0x8008D8A4: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_8008D8BC;
    }
    // 0x8008D8A4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D8A8: andi        $a2, $a2, 0x7F
    ctx->r6 = ctx->r6 & 0X7F;
    // 0x8008D8AC: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D8B0: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x8008D8B4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D8B8: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
L_8008D8BC:
    // 0x8008D8BC: lw          $v0, 0x74($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X74);
    // 0x8008D8C0: sll         $v1, $a2, 1
    ctx->r3 = S32(ctx->r6 << 1);
    // 0x8008D8C4: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
    // 0x8008D8C8: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8008D8CC: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8008D8D0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8008D8D4: sw          $v0, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r2;
    // 0x8008D8D8: jr          $ra
    // 0x8008D8DC: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    TRACE_RETURN()
    return;
    // 0x8008D8DC: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_80064CBC_400BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80064CBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80064CC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80064CC4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80064CC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80064CCC: jal         0x8006033C
    // 0x80064CD0: addiu       $a0, $zero, 0x2EE
    ctx->r4 = ADD32(0, 0X2EE);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80064CD0: addiu       $a0, $zero, 0x2EE
    ctx->r4 = ADD32(0, 0X2EE);
    after_0:
    // 0x80064CD4: beq         $v0, $zero, L_80064D20
    if (ctx->r2 == 0) {
        // 0x80064CD8: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80064D20;
    }
    // 0x80064CD8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80064CDC: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80064CE0: lbu         $v0, 0x5218($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5218);
    // 0x80064CE4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80064CE8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80064CEC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80064CF0: lhu         $a0, -0x1DE0($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X1DE0);
    // 0x80064CF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80064CF8: jal         0x80070E98
    // 0x80064CFC: srl         $a0, $a0, 2
    ctx->r4 = S32(U32(ctx->r4) >> 2);
    func_80070E98_4C298(rdram, ctx);
        goto after_1;
    // 0x80064CFC: srl         $a0, $a0, 2
    ctx->r4 = S32(U32(ctx->r4) >> 2);
    after_1:
    // 0x80064D00: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80064D04: lbu         $a0, 0x5218($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X5218);
    // 0x80064D08: jal         0x80060590
    // 0x80064D0C: ori         $a0, $a0, 0x500
    ctx->r4 = ctx->r4 | 0X500;
    func_80060590_3B990(rdram, ctx);
        goto after_2;
    // 0x80064D0C: ori         $a0, $a0, 0x500
    ctx->r4 = ctx->r4 | 0X500;
    after_2:
    // 0x80064D10: jal         0x800570AC
    // 0x80064D14: nop

    func_800570AC_324AC(rdram, ctx);
        goto after_3;
    // 0x80064D14: nop

    after_3:
    // 0x80064D18: j           L_80064DD8
    // 0x80064D1C: nop

        goto L_80064DD8;
    // 0x80064D1C: nop

L_80064D20:
    // 0x80064D20: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80064D24: lbu         $v0, 0x5218($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5218);
    // 0x80064D28: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80064D2C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80064D30: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80064D34: lhu         $a0, -0x1DE0($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X1DE0);
    // 0x80064D38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80064D3C: jal         0x80070E98
    // 0x80064D40: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    func_80070E98_4C298(rdram, ctx);
        goto after_4;
    // 0x80064D40: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    after_4:
    // 0x80064D44: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80064D48: lbu         $v1, 0x5218($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X5218);
    // 0x80064D4C: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x80064D50: bne         $v1, $v0, L_80064D84
    if (ctx->r3 != ctx->r2) {
        // 0x80064D54: addiu       $v0, $zero, 0x24
        ctx->r2 = ADD32(0, 0X24);
            goto L_80064D84;
    }
    // 0x80064D54: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
    // 0x80064D58: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80064D5C: lhu         $v0, 0x4A60($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A60);
    // 0x80064D60: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80064D64: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80064D68: sh          $v0, 0x4A60($at)
    MEM_H(0X4A60, ctx->r1) = ctx->r2;
    // 0x80064D6C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80064D70: sh          $v0, 0x4A1E($at)
    MEM_H(0X4A1E, ctx->r1) = ctx->r2;
    // 0x80064D74: jal         0x8004A49C
    // 0x80064D78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8004A49C_2589C(rdram, ctx);
        goto after_5;
    // 0x80064D78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x80064D7C: j           L_80064DC8
    // 0x80064D80: nop

        goto L_80064DC8;
    // 0x80064D80: nop

L_80064D84:
    // 0x80064D84: bne         $v1, $v0, L_80064DA4
    if (ctx->r3 != ctx->r2) {
        // 0x80064D88: addiu       $v0, $zero, 0x25
        ctx->r2 = ADD32(0, 0X25);
            goto L_80064DA4;
    }
    // 0x80064D88: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
    // 0x80064D8C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80064D90: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80064D94: sb          $v0, -0x3B9C($at)
    MEM_B(-0X3B9C, ctx->r1) = ctx->r2;
    // 0x80064D98: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80064D9C: j           L_80064DC8
    // 0x80064DA0: sb          $v0, -0x3B9B($at)
    MEM_B(-0X3B9B, ctx->r1) = ctx->r2;
        goto L_80064DC8;
    // 0x80064DA0: sb          $v0, -0x3B9B($at)
    MEM_B(-0X3B9B, ctx->r1) = ctx->r2;
L_80064DA4:
    // 0x80064DA4: bne         $v1, $v0, L_80064DC8
    if (ctx->r3 != ctx->r2) {
        // 0x80064DA8: nop
    
            goto L_80064DC8;
    }
    // 0x80064DA8: nop

    // 0x80064DAC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80064DB0: addiu       $v1, $v1, -0x3B9B
    ctx->r3 = ADD32(ctx->r3, -0X3B9B);
    // 0x80064DB4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80064DB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80064DBC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80064DC0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80064DC4: sb          $v0, -0x3B9C($at)
    MEM_B(-0X3B9C, ctx->r1) = ctx->r2;
L_80064DC8:
    // 0x80064DC8: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80064DCC: lbu         $a0, 0x5218($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X5218);
    // 0x80064DD0: jal         0x8006036C
    // 0x80064DD4: ori         $a0, $a0, 0x500
    ctx->r4 = ctx->r4 | 0X500;
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x80064DD4: ori         $a0, $a0, 0x500
    ctx->r4 = ctx->r4 | 0X500;
    after_6:
L_80064DD8:
    // 0x80064DD8: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x80064DDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80064DE0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80064DE4: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
    // 0x80064DE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80064DEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80064DF0: jr          $ra
    // 0x80064DF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80064DF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80075D78_51178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80075D78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075D7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80075D80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80075D84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075D88: lb          $v1, 0x6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X6);
    // 0x80075D8C: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80075D90: beq         $v0, $zero, L_80075F64
    if (ctx->r2 == 0) {
        // 0x80075D94: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80075F64;
    }
    // 0x80075D94: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80075D98: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80075D9C: addu        $at, $at, $v0
    gpr jr_addend_80075DA4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80075DA0: lw          $v0, 0x2B58($at)
    ctx->r2 = ADD32(ctx->r1, 0X2B58);
    // 0x80075DA4: jr          $v0
    // 0x80075DA8: nop

    switch (jr_addend_80075DA4 >> 2) {
        case 0: goto L_80075DAC; break;
        case 1: goto L_80075E2C; break;
        case 2: goto L_80075EB4; break;
        case 3: goto L_80075EE4; break;
        case 4: goto L_80075F08; break;
        case 5: goto L_80075F2C; break;
        default: switch_error(__func__, 0x80075DA4, 0x800D2B58);
    }
    // 0x80075DA8: nop

L_80075DAC:
    // 0x80075DAC: jal         0x80061724
    // 0x80075DB0: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_0;
    // 0x80075DB0: nop

    after_0:
    // 0x80075DB4: lb          $v1, 0x4($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X4);
    // 0x80075DB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80075DBC: bne         $v1, $v0, L_80075DF4
    if (ctx->r3 != ctx->r2) {
        // 0x80075DC0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80075DF4;
    }
    // 0x80075DC0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80075DC4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80075DC8: lw          $a1, 0x280C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X280C);
    // 0x80075DCC: jal         0x80061510
    // 0x80075DD0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_1;
    // 0x80075DD0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_1:
    // 0x80075DD4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80075DD8: lw          $a1, 0x2830($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2830);
    // 0x80075DDC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80075DE0: jal         0x80061510
    // 0x80075DE4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_2;
    // 0x80075DE4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_2:
    // 0x80075DE8: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80075DEC: j           L_80075E1C
    // 0x80075DF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80075E1C;
    // 0x80075DF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80075DF4:
    // 0x80075DF4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80075DF8: lw          $a1, 0x2860($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2860);
    // 0x80075DFC: jal         0x80061510
    // 0x80075E00: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_3;
    // 0x80075E00: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_3:
    // 0x80075E04: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80075E08: lw          $a1, 0x287C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X287C);
    // 0x80075E0C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80075E10: jal         0x80061510
    // 0x80075E14: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_4;
    // 0x80075E14: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_4:
    // 0x80075E18: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80075E1C:
    // 0x80075E1C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x80075E20: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80075E24: j           L_80075F64
    // 0x80075E28: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
        goto L_80075F64;
    // 0x80075E28: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
L_80075E2C:
    // 0x80075E2C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80075E30: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x80075E34: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
    // 0x80075E38: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80075E3C: beq         $v0, $zero, L_80075E78
    if (ctx->r2 == 0) {
        // 0x80075E40: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_80075E78;
    }
    // 0x80075E40: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x80075E44: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80075E48: sh          $v0, -0x4710($at)
    MEM_H(-0X4710, ctx->r1) = ctx->r2;
    // 0x80075E4C: bne         $v0, $zero, L_80075F5C
    if (ctx->r2 != 0) {
        // 0x80075E50: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80075F5C;
    }
    // 0x80075E50: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80075E54: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80075E58: lw          $a1, 0x2834($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2834);
    // 0x80075E5C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80075E60: jal         0x80061510
    // 0x80075E64: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_5;
    // 0x80075E64: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_5:
    // 0x80075E68: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80075E6C: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x80075E70: j           L_80075F20
    // 0x80075E74: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
        goto L_80075F20;
    // 0x80075E74: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
L_80075E78:
    // 0x80075E78: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80075E7C: beq         $v0, $zero, L_80075E8C
    if (ctx->r2 == 0) {
        // 0x80075E80: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80075E8C;
    }
    // 0x80075E80: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80075E84: j           L_80075F64
    // 0x80075E88: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
        goto L_80075F64;
    // 0x80075E88: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
L_80075E8C:
    // 0x80075E8C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80075E90: lbu         $a0, 0x469E($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X469E);
    // 0x80075E94: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80075E98: jal         0x80073F80
    // 0x80075E9C: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    func_80073F80_4F380(rdram, ctx);
        goto after_6;
    // 0x80075E9C: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    after_6:
    // 0x80075EA0: bne         $v0, $zero, L_80075F68
    if (ctx->r2 != 0) {
        // 0x80075EA4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80075F68;
    }
    // 0x80075EA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80075EA8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80075EAC: j           L_80075F60
    // 0x80075EB0: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80075F60;
    // 0x80075EB0: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80075EB4:
    // 0x80075EB4: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80075EB8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80075EBC: bne         $v0, $zero, L_80075F64
    if (ctx->r2 != 0) {
        // 0x80075EC0: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_80075F64;
    }
    // 0x80075EC0: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x80075EC4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80075EC8: jal         0x800740A0
    // 0x80075ECC: lbu         $a0, 0x469E($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X469E);
    func_800740A0_4F4A0(rdram, ctx);
        goto after_7;
    // 0x80075ECC: lbu         $a0, 0x469E($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X469E);
    after_7:
    // 0x80075ED0: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80075ED4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80075ED8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80075EDC: j           L_80075F64
    // 0x80075EE0: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
        goto L_80075F64;
    // 0x80075EE0: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
L_80075EE4:
    // 0x80075EE4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80075EE8: lw          $a1, 0x283C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X283C);
    // 0x80075EEC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80075EF0: jal         0x80061510
    // 0x80075EF4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_8;
    // 0x80075EF4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_8:
    // 0x80075EF8: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80075EFC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80075F00: j           L_80075F64
    // 0x80075F04: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_80075F64;
    // 0x80075F04: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80075F08:
    // 0x80075F08: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80075F0C: lw          $a1, 0x2838($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2838);
    // 0x80075F10: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80075F14: jal         0x80061510
    // 0x80075F18: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_9;
    // 0x80075F18: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_9:
    // 0x80075F1C: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
L_80075F20:
    // 0x80075F20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80075F24: j           L_80075F64
    // 0x80075F28: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_80075F64;
    // 0x80075F28: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80075F2C:
    // 0x80075F2C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80075F30: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80075F34: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x80075F38: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80075F3C: beq         $v0, $zero, L_80075F64
    if (ctx->r2 == 0) {
        // 0x80075F40: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80075F64;
    }
    // 0x80075F40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80075F44: lb          $v1, 0x4($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X4);
    // 0x80075F48: bne         $v1, $v0, L_80075F5C
    if (ctx->r3 != ctx->r2) {
        // 0x80075F4C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80075F5C;
    }
    // 0x80075F4C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80075F50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80075F54: j           L_80075F60
    // 0x80075F58: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80075F60;
    // 0x80075F58: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80075F5C:
    // 0x80075F5C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80075F60:
    // 0x80075F60: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
L_80075F64:
    // 0x80075F64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80075F68:
    // 0x80075F68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80075F6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80075F70: jr          $ra
    // 0x80075F74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80075F74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80094410_6F810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80094410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80094414: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80094418: jal         0x80094460
    // 0x8009441C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x8009441C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80094420: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80094424: sw          $zero, -0x2368($at)
    MEM_W(-0X2368, ctx->r1) = 0;
    // 0x80094428: jal         0x80094460
    // 0x8009442C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x8009442C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80094430: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80094434: jr          $ra
    // 0x80094438: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80094438: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009443C: nop

;}
RECOMP_FUNC void func_80065108_40508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80065108: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8006510C: lbu         $v1, -0x3B9B($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3B9B);
    // 0x80065110: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80065114: lbu         $v0, -0x3B9C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3B9C);
    // 0x80065118: bne         $v1, $v0, L_80065130
    if (ctx->r3 != ctx->r2) {
        // 0x8006511C: nop
    
            goto L_80065130;
    }
    // 0x8006511C: nop

    // 0x80065120: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x80065124: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x80065128: j           L_8006513C
    // 0x8006512C: andi        $a1, $v1, 0xFF
    ctx->r5 = ctx->r3 & 0XFF;
        goto L_8006513C;
    // 0x8006512C: andi        $a1, $v1, 0xFF
    ctx->r5 = ctx->r3 & 0XFF;
L_80065130:
    // 0x80065130: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x80065134: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x80065138: andi        $a1, $v1, 0xFF
    ctx->r5 = ctx->r3 & 0XFF;
L_8006513C:
    // 0x8006513C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80065140: bne         $a1, $v0, L_80065158
    if (ctx->r5 != ctx->r2) {
        // 0x80065144: nop
    
            goto L_80065158;
    }
    // 0x80065144: nop

    // 0x80065148: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x8006514C: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80065150: j           L_800651B4
    // 0x80065154: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
        goto L_800651B4;
    // 0x80065154: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
L_80065158:
    // 0x80065158: lw          $a2, 0x44($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X44);
    // 0x8006515C: beq         $a2, $zero, L_80065190
    if (ctx->r6 == 0) {
        // 0x80065160: sh          $v1, 0xC2($a0)
        MEM_H(0XC2, ctx->r4) = ctx->r3;
            goto L_80065190;
    }
    // 0x80065160: sh          $v1, 0xC2($a0)
    MEM_H(0XC2, ctx->r4) = ctx->r3;
    // 0x80065164: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x80065168: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8006516C: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80065170: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x80065174: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80065178: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8006517C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80065180: addu        $v1, $a2, $v1
    ctx->r3 = ADD32(ctx->r6, ctx->r3);
    // 0x80065184: sw          $v1, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r3;
    // 0x80065188: j           L_800651A8
    // 0x8006518C: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
        goto L_800651A8;
    // 0x8006518C: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
L_80065190:
    // 0x80065190: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x80065194: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80065198: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8006519C: lw          $v0, 0x27EC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X27EC);
    // 0x800651A0: sw          $v0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r2;
    // 0x800651A4: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
L_800651A8:
    // 0x800651A8: sb          $zero, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = 0;
    // 0x800651AC: sb          $zero, 0x3C($a0)
    MEM_B(0X3C, ctx->r4) = 0;
    // 0x800651B0: sb          $zero, 0x72($a0)
    MEM_B(0X72, ctx->r4) = 0;
L_800651B4:
    // 0x800651B4: jr          $ra
    // 0x800651B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x800651B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8008B404_66804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B404: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008B408: jr          $ra
    // 0x8008B40C: sw          $a0, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x8008B40C: sw          $a0, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void alAuxBusNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80096150: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80096154: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80096158: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8009615C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80096160: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x80096164: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80096168: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x8009616C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80096170: addiu       $a1, $a1, 0x6D60
    ctx->r5 = ADD32(ctx->r5, 0X6D60);
    // 0x80096174: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80096178: addiu       $a2, $a2, 0x6E3C
    ctx->r6 = ADD32(ctx->r6, 0X6E3C);
    // 0x8009617C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80096180: jal         0x80097B20
    // 0x80096184: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x80096184: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x80096188: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x8009618C: sw          $s1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r17;
    // 0x80096190: sw          $s2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r18;
    // 0x80096194: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80096198: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8009619C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800961A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800961A4: jr          $ra
    // 0x800961A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800961A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800503D0_2B7D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800503D0: lbu         $v0, 0x101($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X101);
    // 0x800503D4: sh          $a1, 0x106($a0)
    MEM_H(0X106, ctx->r4) = ctx->r5;
    // 0x800503D8: lw          $a1, 0xFC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XFC);
    // 0x800503DC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800503E0: sb          $v0, 0x101($a0)
    MEM_B(0X101, ctx->r4) = ctx->r2;
    // 0x800503E4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x800503E8: bne         $v0, $zero, L_80050444
    if (ctx->r2 != 0) {
        // 0x800503EC: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_80050444;
    }
    // 0x800503EC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800503F0: lb          $a2, 0x3($a1)
    ctx->r6 = MEM_B(ctx->r5, 0X3);
    // 0x800503F4: bgez        $a2, L_80050430
    if (SIGNED(ctx->r6) >= 0) {
        // 0x800503F8: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_80050430;
    }
    // 0x800503F8: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x800503FC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80050400: bne         $a2, $v0, L_80050414
    if (ctx->r6 != ctx->r2) {
        // 0x80050404: andi        $v1, $v1, 0x7F
        ctx->r3 = ctx->r3 & 0X7F;
            goto L_80050414;
    }
    // 0x80050404: andi        $v1, $v1, 0x7F
    ctx->r3 = ctx->r3 & 0X7F;
    // 0x80050408: lbu         $v0, 0x1($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X1);
    // 0x8005040C: j           L_80050444
    // 0x80050410: sb          $v0, 0x101($a0)
    MEM_B(0X101, ctx->r4) = ctx->r2;
        goto L_80050444;
    // 0x80050410: sb          $v0, 0x101($a0)
    MEM_B(0X101, ctx->r4) = ctx->r2;
L_80050414:
    // 0x80050414: lw          $v0, 0xF8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF8);
    // 0x80050418: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8005041C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80050420: sw          $v0, 0xFC($a0)
    MEM_W(0XFC, ctx->r4) = ctx->r2;
    // 0x80050424: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80050428: j           L_80050444
    // 0x8005042C: sw          $v0, 0x100($a0)
    MEM_W(0X100, ctx->r4) = ctx->r2;
        goto L_80050444;
    // 0x8005042C: sw          $v0, 0x100($a0)
    MEM_W(0X100, ctx->r4) = ctx->r2;
L_80050430:
    // 0x80050430: lw          $v0, 0xFC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XFC);
    // 0x80050434: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x80050438: sw          $v1, 0xFC($a0)
    MEM_W(0XFC, ctx->r4) = ctx->r3;
    // 0x8005043C: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x80050440: sw          $v0, 0x100($a0)
    MEM_W(0X100, ctx->r4) = ctx->r2;
L_80050444:
    // 0x80050444: jr          $ra
    // 0x80050448: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80050448: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80055150_30550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80055150: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80055154: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80055158: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8005515C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80055160: lb          $v1, 0x2($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X2);
    // 0x80055164: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80055168: beq         $v1, $v0, L_80055254
    if (ctx->r3 == ctx->r2) {
        // 0x8005516C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80055254;
    }
    // 0x8005516C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80055170: beql        $v0, $zero, L_80055188
    if (ctx->r2 == 0) {
        // 0x80055174: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80055188;
    }
    goto skip_0;
    // 0x80055174: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80055178: beq         $v1, $zero, L_80055198
    if (ctx->r3 == 0) {
        // 0x8005517C: nop
    
            goto L_80055198;
    }
    // 0x8005517C: nop

    // 0x80055180: j           L_80055358
    // 0x80055184: nop

        goto L_80055358;
    // 0x80055184: nop

L_80055188:
    // 0x80055188: beq         $v1, $v0, L_8005533C
    if (ctx->r3 == ctx->r2) {
        // 0x8005518C: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8005533C;
    }
    // 0x8005518C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80055190: j           L_80055358
    // 0x80055194: nop

        goto L_80055358;
    // 0x80055194: nop

L_80055198:
    // 0x80055198: jal         0x8006033C
    // 0x8005519C: addiu       $a0, $zero, 0x524
    ctx->r4 = ADD32(0, 0X524);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8005519C: addiu       $a0, $zero, 0x524
    ctx->r4 = ADD32(0, 0X524);
    after_0:
    // 0x800551A0: bne         $v0, $zero, L_800551BC
    if (ctx->r2 != 0) {
        // 0x800551A4: addiu       $a0, $zero, 0x83
        ctx->r4 = ADD32(0, 0X83);
            goto L_800551BC;
    }
    // 0x800551A4: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x800551A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800551AC: jal         0x8002A2F8
    // 0x800551B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_1;
    // 0x800551B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x800551B4: j           L_8005522C
    // 0x800551B8: nop

        goto L_8005522C;
    // 0x800551B8: nop

L_800551BC:
    // 0x800551BC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800551C0: lh          $v1, 0x4A1E($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A1E);
    // 0x800551C4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800551C8: lh          $v0, 0x4A60($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A60);
    // 0x800551CC: bne         $v1, $v0, L_800551F4
    if (ctx->r3 != ctx->r2) {
        // 0x800551D0: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_800551F4;
    }
    // 0x800551D0: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x800551D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800551D8: jal         0x8002A2F8
    // 0x800551DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x800551DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x800551E0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x800551E4: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x800551E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800551EC: j           L_80055224
    // 0x800551F0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
        goto L_80055224;
    // 0x800551F0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
L_800551F4:
    // 0x800551F4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800551F8: lbu         $v0, -0x3B9C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3B9C);
    // 0x800551FC: bne         $v0, $zero, L_8005523C
    if (ctx->r2 != 0) {
        // 0x80055200: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8005523C;
    }
    // 0x80055200: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80055204: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x80055208: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005520C: jal         0x8002A2F8
    // 0x80055210: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_3;
    // 0x80055210: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80055214: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80055218: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005521C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80055220: addiu       $a2, $zero, 0x41
    ctx->r6 = ADD32(0, 0X41);
L_80055224:
    // 0x80055224: jal         0x80061510
    // 0x80055228: nop

    func_80061510_3C910(rdram, ctx);
        goto after_4;
    // 0x80055228: nop

    after_4:
L_8005522C:
    // 0x8005522C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80055230: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80055234: j           L_80055358
    // 0x80055238: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
        goto L_80055358;
    // 0x80055238: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
L_8005523C:
    // 0x8005523C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80055240: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x80055244: jal         0x80061510
    // 0x80055248: addiu       $a2, $zero, 0x42
    ctx->r6 = ADD32(0, 0X42);
    func_80061510_3C910(rdram, ctx);
        goto after_5;
    // 0x80055248: addiu       $a2, $zero, 0x42
    ctx->r6 = ADD32(0, 0X42);
    after_5:
    // 0x8005524C: j           L_8005532C
    // 0x80055250: nop

        goto L_8005532C;
    // 0x80055250: nop

L_80055254:
    // 0x80055254: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80055258: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x8005525C: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
    // 0x80055260: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80055264: beq         $v0, $zero, L_80055358
    if (ctx->r2 == 0) {
        // 0x80055268: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_80055358;
    }
    // 0x80055268: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8005526C: bne         $v0, $zero, L_8005532C
    if (ctx->r2 != 0) {
        // 0x80055270: nop
    
            goto L_8005532C;
    }
    // 0x80055270: nop

    // 0x80055274: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80055278: lhu         $v0, 0x4A1E($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A1E);
    // 0x8005527C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80055280: lh          $v1, 0x4A60($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A60);
    // 0x80055284: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80055288: lbu         $a0, -0x3B9C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X3B9C);
    // 0x8005528C: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x80055290: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80055294: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x80055298: slt         $a0, $a0, $v1
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8005529C: beq         $a0, $zero, L_800552E4
    if (ctx->r4 == 0) {
        // 0x800552A0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_800552E4;
    }
    // 0x800552A0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800552A4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x800552A8: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x800552AC: jal         0x80061510
    // 0x800552B0: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    func_80061510_3C910(rdram, ctx);
        goto after_6;
    // 0x800552B0: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    after_6:
    // 0x800552B4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800552B8: lhu         $v0, 0x4A1E($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A1E);
    // 0x800552BC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800552C0: lbu         $v1, -0x3B9C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3B9C);
    // 0x800552C4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800552C8: sb          $zero, -0x3B9C($at)
    MEM_B(-0X3B9C, ctx->r1) = 0;
    // 0x800552CC: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x800552D0: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x800552D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800552D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800552DC: j           L_8005532C
    // 0x800552E0: sh          $v0, 0x4A1E($at)
    MEM_H(0X4A1E, ctx->r1) = ctx->r2;
        goto L_8005532C;
    // 0x800552E0: sh          $v0, 0x4A1E($at)
    MEM_H(0X4A1E, ctx->r1) = ctx->r2;
L_800552E4:
    // 0x800552E4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x800552E8: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x800552EC: jal         0x80061510
    // 0x800552F0: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    func_80061510_3C910(rdram, ctx);
        goto after_7;
    // 0x800552F0: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    after_7:
    // 0x800552F4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800552F8: lhu         $v0, 0x4A1E($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A1E);
    // 0x800552FC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80055300: lh          $a0, 0x4A60($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4A60);
    // 0x80055304: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80055308: lbu         $v1, -0x3B9C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3B9C);
    // 0x8005530C: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x80055310: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80055314: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80055318: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8005531C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80055320: sb          $v1, -0x3B9C($at)
    MEM_B(-0X3B9C, ctx->r1) = ctx->r3;
    // 0x80055324: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80055328: sh          $a0, 0x4A1E($at)
    MEM_H(0X4A1E, ctx->r1) = ctx->r4;
L_8005532C:
    // 0x8005532C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80055330: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80055334: j           L_80055358
    // 0x80055338: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
        goto L_80055358;
    // 0x80055338: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
L_8005533C:
    // 0x8005533C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80055340: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80055344: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80055348: bne         $v0, $zero, L_80055358
    if (ctx->r2 != 0) {
        // 0x8005534C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80055358;
    }
    // 0x8005534C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80055350: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    // 0x80055354: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
L_80055358:
    // 0x80055358: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005535C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80055360: jr          $ra
    // 0x80055364: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80055364: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003A94C_15D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003A94C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003A950: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8003A954: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8003A958: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8003A95C: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8003A960: addiu       $s2, $s2, -0x3680
    ctx->r18 = ADD32(ctx->r18, -0X3680);
    // 0x8003A964: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8003A968: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x8003A96C: addiu       $s0, $s0, -0x2290
    ctx->r16 = ADD32(ctx->r16, -0X2290);
    // 0x8003A970: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
L_8003A974:
    // 0x8003A974: lb          $a1, 0x0($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X0);
    // 0x8003A978: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8003A97C: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x8003A980: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8003A984: beq         $v0, $zero, L_8003A99C
    if (ctx->r2 == 0) {
        // 0x8003A988: andi        $v0, $a1, 0x1C
        ctx->r2 = ctx->r5 & 0X1C;
            goto L_8003A99C;
    }
    // 0x8003A988: andi        $v0, $a1, 0x1C
    ctx->r2 = ctx->r5 & 0X1C;
    // 0x8003A98C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8003A990: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8003A994: jalr        $v0
    // 0x8003A998: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8003A998: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
L_8003A99C:
    // 0x8003A99C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8003A9A0: sltiu       $v0, $s1, 0x40
    ctx->r2 = ctx->r17 < 0X40 ? 1 : 0;
    // 0x8003A9A4: bne         $v0, $zero, L_8003A974
    if (ctx->r2 != 0) {
        // 0x8003A9A8: addiu       $s0, $s0, 0x58
        ctx->r16 = ADD32(ctx->r16, 0X58);
            goto L_8003A974;
    }
    // 0x8003A9A8: addiu       $s0, $s0, 0x58
    ctx->r16 = ADD32(ctx->r16, 0X58);
    // 0x8003A9AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003A9B0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8003A9B4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8003A9B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003A9BC: jr          $ra
    // 0x8003A9C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8003A9C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80063B6C_3EF6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80063B6C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80063B70: lw          $a0, 0x14($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X14);
    // 0x80063B74: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x80063B78: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80063B7C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80063B80: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80063B84: lw          $v0, 0x2E6C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2E6C);
    // 0x80063B88: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80063B8C: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x80063B90: bne         $v1, $v0, L_80063B9C
    if (ctx->r3 != ctx->r2) {
        // 0x80063B94: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_80063B9C;
    }
    // 0x80063B94: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80063B98: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_80063B9C:
    // 0x80063B9C: sb          $v0, 0x78($a1)
    MEM_B(0X78, ctx->r5) = ctx->r2;
    // 0x80063BA0: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x80063BA4: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80063BA8: jr          $ra
    // 0x80063BAC: sw          $v0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80063BAC: sw          $v0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_8003E3E4_197E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E3E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003E3E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8003E3EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8003E3F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E3F4: lb          $v1, 0x1($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X1);
    // 0x8003E3F8: beq         $v1, $zero, L_8003E410
    if (ctx->r3 == 0) {
        // 0x8003E3FC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8003E410;
    }
    // 0x8003E3FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003E400: beq         $v1, $v0, L_8003E428
    if (ctx->r3 == ctx->r2) {
        // 0x8003E404: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8003E428;
    }
    // 0x8003E404: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8003E408: j           L_8003E434
    // 0x8003E40C: nop

        goto L_8003E434;
    // 0x8003E40C: nop

L_8003E410:
    // 0x8003E410: jal         0x800755D4
    // 0x8003E414: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800755D4_509D4(rdram, ctx);
        goto after_0;
    // 0x8003E414: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8003E418: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8003E41C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003E420: j           L_8003E434
    // 0x8003E424: sb          $v1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r3;
        goto L_8003E434;
    // 0x8003E424: sb          $v1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r3;
L_8003E428:
    // 0x8003E428: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8003E42C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8003E430: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_8003E434:
    // 0x8003E434: jal         0x80076A3C
    // 0x8003E438: nop

    func_80076A3C_51E3C(rdram, ctx);
        goto after_1;
    // 0x8003E438: nop

    after_1:
    // 0x8003E43C: jal         0x8004C3C0
    // 0x8003E440: nop

    func_8004C3C0_277C0(rdram, ctx);
        goto after_2;
    // 0x8003E440: nop

    after_2:
    // 0x8003E444: jal         0x8006EF7C
    // 0x8003E448: nop

    func_8006EF7C_4A37C(rdram, ctx);
        goto after_3;
    // 0x8003E448: nop

    after_3:
    // 0x8003E44C: jal         0x80053CBC
    // 0x8003E450: nop

    func_80053CBC_2F0BC(rdram, ctx);
        goto after_4;
    // 0x8003E450: nop

    after_4:
    // 0x8003E454: jal         0x8004C05C
    // 0x8003E458: nop

    func_8004C05C_2745C(rdram, ctx);
        goto after_5;
    // 0x8003E458: nop

    after_5:
    // 0x8003E45C: jal         0x8004BFB0
    // 0x8003E460: nop

    func_8004BFB0_273B0(rdram, ctx);
        goto after_6;
    // 0x8003E460: nop

    after_6:
    // 0x8003E464: jal         0x8004C1AC
    // 0x8003E468: nop

    func_8004C1AC_275AC(rdram, ctx);
        goto after_7;
    // 0x8003E468: nop

    after_7:
    // 0x8003E46C: jal         0x8004C270
    // 0x8003E470: nop

    func_8004C270_27670(rdram, ctx);
        goto after_8;
    // 0x8003E470: nop

    after_8:
    // 0x8003E474: jal         0x8004C45C
    // 0x8003E478: nop

    func_8004C45C_2785C(rdram, ctx);
        goto after_9;
    // 0x8003E478: nop

    after_9:
    // 0x8003E47C: jal         0x800472F0
    // 0x8003E480: nop

    func_800472F0_226F0(rdram, ctx);
        goto after_10;
    // 0x8003E480: nop

    after_10:
    // 0x8003E484: jal         0x80069D44
    // 0x8003E488: nop

    func_80069D44_45144(rdram, ctx);
        goto after_11;
    // 0x8003E488: nop

    after_11:
    // 0x8003E48C: jal         0x8004C108
    // 0x8003E490: nop

    func_8004C108_27508(rdram, ctx);
        goto after_12;
    // 0x8003E490: nop

    after_12:
    // 0x8003E494: jal         0x8004C314
    // 0x8003E498: nop

    func_8004C314_27714(rdram, ctx);
        goto after_13;
    // 0x8003E498: nop

    after_13:
    // 0x8003E49C: jal         0x80033950
    // 0x8003E4A0: nop

    func_80033950_ED50(rdram, ctx);
        goto after_14;
    // 0x8003E4A0: nop

    after_14:
    // 0x8003E4A4: jal         0x800521A8
    // 0x8003E4A8: nop

    func_800521A8_2D5A8(rdram, ctx);
        goto after_15;
    // 0x8003E4A8: nop

    after_15:
    // 0x8003E4AC: jal         0x800719B4
    // 0x8003E4B0: nop

    func_800719B4_4CDB4(rdram, ctx);
        goto after_16;
    // 0x8003E4B0: nop

    after_16:
    // 0x8003E4B4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003E4B8: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8003E4BC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8003E4C0: bne         $v1, $v0, L_8003E500
    if (ctx->r3 != ctx->r2) {
        // 0x8003E4C4: lui         $v0, 0xFFFF
        ctx->r2 = S32(0XFFFF << 16);
            goto L_8003E500;
    }
    // 0x8003E4C4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8003E4C8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003E4CC: lw          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BC8);
    // 0x8003E4D0: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8003E4D4: lui         $v1, 0x302
    ctx->r3 = S32(0X302 << 16);
    // 0x8003E4D8: xor         $v1, $a0, $v1
    ctx->r3 = ctx->r4 ^ ctx->r3;
    // 0x8003E4DC: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x8003E4E0: lui         $v0, 0x130B
    ctx->r2 = S32(0X130B << 16);
    // 0x8003E4E4: xor         $v0, $a0, $v0
    ctx->r2 = ctx->r4 ^ ctx->r2;
    // 0x8003E4E8: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8003E4EC: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8003E4F0: beq         $v1, $zero, L_8003E508
    if (ctx->r3 == 0) {
        // 0x8003E4F4: lui         $v0, 0x1B06
        ctx->r2 = S32(0X1B06 << 16);
            goto L_8003E508;
    }
    // 0x8003E4F4: lui         $v0, 0x1B06
    ctx->r2 = S32(0X1B06 << 16);
    // 0x8003E4F8: beq         $a0, $v0, L_8003E508
    if (ctx->r4 == ctx->r2) {
        // 0x8003E4FC: nop
    
            goto L_8003E508;
    }
    // 0x8003E4FC: nop

L_8003E500:
    // 0x8003E500: jal         0x80048C7C
    // 0x8003E504: nop

    func_80048C7C_2407C(rdram, ctx);
        goto after_17;
    // 0x8003E504: nop

    after_17:
L_8003E508:
    // 0x8003E508: jal         0x8004A6B4
    // 0x8003E50C: nop

    func_8004A6B4_25AB4(rdram, ctx);
        goto after_18;
    // 0x8003E50C: nop

    after_18:
    // 0x8003E510: jal         0x8003912C
    // 0x8003E514: nop

    func_8003912C_1452C(rdram, ctx);
        goto after_19;
    // 0x8003E514: nop

    after_19:
    // 0x8003E518: jal         0x80037F78
    // 0x8003E51C: nop

    func_80037F78_13378(rdram, ctx);
        goto after_20;
    // 0x8003E51C: nop

    after_20:
    // 0x8003E520: jal         0x8003A248
    // 0x8003E524: nop

    func_8003A248_15648(rdram, ctx);
        goto after_21;
    // 0x8003E524: nop

    after_21:
    // 0x8003E528: jal         0x8003A7CC
    // 0x8003E52C: nop

    func_8003A7CC_15BCC(rdram, ctx);
        goto after_22;
    // 0x8003E52C: nop

    after_22:
    // 0x8003E530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003E534: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003E538: jr          $ra
    // 0x8003E53C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8003E53C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800616FC_3CAFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800616FC: andi        $a2, $a1, 0xFF
    ctx->r6 = ctx->r5 & 0XFF;
    // 0x80061700: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80061704: lw          $a1, -0x26EC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X26EC);
    // 0x80061708: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006170C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80061710: jal         0x80061510
    // 0x80061714: nop

    func_80061510_3C910(rdram, ctx);
        goto after_0;
    // 0x80061714: nop

    after_0:
    // 0x80061718: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8006171C: jr          $ra
    // 0x80061720: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80061720: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void osEPiLinkHandle(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800A0890: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A0894: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800A0898: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A089C: jal         0x800A02E0
    // 0x800A08A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    __osDisableInt_recomp(rdram, ctx);
        goto after_0;
    // 0x800A08A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x800A08A4: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x800A08A8: lw          $v1, -0xDC4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XDC4);
    // 0x800A08AC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x800A08B0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A08B4: sw          $s0, -0xDC4($at)
    MEM_W(-0XDC4, ctx->r1) = ctx->r16;
    // 0x800A08B8: jal         0x800A0350
    // 0x800A08BC: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    __osRestoreInt_recomp(rdram, ctx);
        goto after_1;
    // 0x800A08BC: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    after_1:
    // 0x800A08C0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800A08C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A08C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800A08CC: jr          $ra
    // 0x800A08D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800A08D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80053318_2E718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80053318: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005331C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80053320: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80053324: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80053328: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x8005332C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80053330: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80053334: jal         0x8004F094
    // 0x80053338: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    func_8004F094_2A494(rdram, ctx);
        goto after_0;
    // 0x80053338: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    after_0:
    // 0x8005333C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80053340: beq         $a2, $zero, L_80053510
    if (ctx->r6 == 0) {
        // 0x80053344: nop
    
            goto L_80053510;
    }
    // 0x80053344: nop

    // 0x80053348: bltz        $s0, L_800533FC
    if (SIGNED(ctx->r16) < 0) {
        // 0x8005334C: sb          $zero, 0x3($a2)
        MEM_B(0X3, ctx->r6) = 0;
            goto L_800533FC;
    }
    // 0x8005334C: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x80053350: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x80053354: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80053358: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8005335C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80053360: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80053364: lw          $v1, -0x2780($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2780);
    // 0x80053368: lui         $v0, 0x7F
    ctx->r2 = S32(0X7F << 16);
    // 0x8005336C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80053370: and         $a3, $v1, $v0
    ctx->r7 = ctx->r3 & ctx->r2;
    // 0x80053374: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80053378: lw          $v1, -0x41B0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X41B0);
    // 0x8005337C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x80053380: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x80053384: sltiu       $v0, $v1, -0x100
    ctx->r2 = ctx->r3 < -0X100 ? 1 : 0;
    // 0x80053388: bne         $v0, $zero, L_800533C4
    if (ctx->r2 != 0) {
        // 0x8005338C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_800533C4;
    }
    // 0x8005338C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80053390: j           L_800533E8
    // 0x80053394: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_800533E8;
    // 0x80053394: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
L_80053398:
    // 0x80053398: lw          $v0, 0x4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X4);
    // 0x8005339C: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800533A0: sw          $v1, -0x41B0($at)
    MEM_W(-0X41B0, ctx->r1) = ctx->r3;
    // 0x800533A4: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x800533A8: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
    // 0x800533AC: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x800533B0: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800533B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800533B8: sw          $a2, -0x21A0($at)
    MEM_W(-0X21A0, ctx->r1) = ctx->r6;
    // 0x800533BC: j           L_800533EC
    // 0x800533C0: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
        goto L_800533EC;
    // 0x800533C0: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
L_800533C4:
    // 0x800533C4: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
L_800533C8:
    // 0x800533C8: and         $v0, $v1, $a1
    ctx->r2 = ctx->r3 & ctx->r5;
    // 0x800533CC: beql        $v0, $zero, L_80053398
    if (ctx->r2 == 0) {
        // 0x800533D0: or          $v1, $v1, $a1
        ctx->r3 = ctx->r3 | ctx->r5;
            goto L_80053398;
    }
    goto skip_0;
    // 0x800533D0: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    skip_0:
    // 0x800533D4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800533D8: slti        $v0, $a0, 0x18
    ctx->r2 = SIGNED(ctx->r4) < 0X18 ? 1 : 0;
    // 0x800533DC: bne         $v0, $zero, L_800533C8
    if (ctx->r2 != 0) {
        // 0x800533E0: srl         $a1, $a1, 1
        ctx->r5 = S32(U32(ctx->r5) >> 1);
            goto L_800533C8;
    }
    // 0x800533E0: srl         $a1, $a1, 1
    ctx->r5 = S32(U32(ctx->r5) >> 1);
    // 0x800533E4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
L_800533E8:
    // 0x800533E8: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
L_800533EC:
    // 0x800533EC: bltz        $v0, L_800533FC
    if (SIGNED(ctx->r2) < 0) {
        // 0x800533F0: sb          $a0, 0xD($a2)
        MEM_B(0XD, ctx->r6) = ctx->r4;
            goto L_800533FC;
    }
    // 0x800533F0: sb          $a0, 0xD($a2)
    MEM_B(0XD, ctx->r6) = ctx->r4;
    // 0x800533F4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x800533F8: sb          $v0, 0x3($a2)
    MEM_B(0X3, ctx->r6) = ctx->r2;
L_800533FC:
    // 0x800533FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80053400: beq         $s2, $zero, L_80053454
    if (ctx->r18 == 0) {
        // 0x80053404: sb          $v0, 0x0($a2)
        MEM_B(0X0, ctx->r6) = ctx->r2;
            goto L_80053454;
    }
    // 0x80053404: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x80053408: lb          $a0, 0x170($s1)
    ctx->r4 = MEM_B(ctx->r17, 0X170);
    // 0x8005340C: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80053410: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80053414: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80053418: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005341C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80053420: lbu         $v0, 0x30FB($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X30FB);
    // 0x80053424: sb          $v0, 0x2($a2)
    MEM_B(0X2, ctx->r6) = ctx->r2;
    // 0x80053428: lhu         $v0, 0x3C8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3C8);
    // 0x8005342C: sh          $v0, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r2;
    // 0x80053430: lhu         $v0, 0x3CA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3CA);
    // 0x80053434: sh          $v0, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r2;
    // 0x80053438: lhu         $v0, 0x3CC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3CC);
    // 0x8005343C: sh          $v0, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r2;
    // 0x80053440: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x80053444: addu        $a3, $s1, $v0
    ctx->r7 = ADD32(ctx->r17, ctx->r2);
    // 0x80053448: lh          $v1, 0x4FA($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X4FA);
    // 0x8005344C: j           L_8005349C
    // 0x80053450: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
        goto L_8005349C;
    // 0x80053450: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_80053454:
    // 0x80053454: lb          $a0, 0x171($s1)
    ctx->r4 = MEM_B(ctx->r17, 0X171);
    // 0x80053458: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8005345C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80053460: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80053464: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80053468: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005346C: lbu         $v0, 0x30FB($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X30FB);
    // 0x80053470: sb          $v0, 0x2($a2)
    MEM_B(0X2, ctx->r6) = ctx->r2;
    // 0x80053474: lhu         $v0, 0x3E0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3E0);
    // 0x80053478: sh          $v0, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r2;
    // 0x8005347C: lhu         $v0, 0x3E2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3E2);
    // 0x80053480: sh          $v0, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r2;
    // 0x80053484: lhu         $v0, 0x3E4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3E4);
    // 0x80053488: sh          $v0, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r2;
    // 0x8005348C: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x80053490: addu        $a3, $s1, $v0
    ctx->r7 = ADD32(ctx->r17, ctx->r2);
    // 0x80053494: lh          $v1, 0x4FA($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X4FA);
    // 0x80053498: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_8005349C:
    // 0x8005349C: beq         $v1, $v0, L_800534D8
    if (ctx->r3 == ctx->r2) {
        // 0x800534A0: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_800534D8;
    }
    // 0x800534A0: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x800534A4: xori        $v1, $a0, 0x4
    ctx->r3 = ctx->r4 ^ 0X4;
    // 0x800534A8: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x800534AC: xori        $v0, $a0, 0x7
    ctx->r2 = ctx->r4 ^ 0X7;
    // 0x800534B0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800534B4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800534B8: bnel        $v1, $zero, L_800534DC
    if (ctx->r3 != 0) {
        // 0x800534BC: sh          $s2, 0x1A($a2)
        MEM_H(0X1A, ctx->r6) = ctx->r18;
            goto L_800534DC;
    }
    goto skip_1;
    // 0x800534BC: sh          $s2, 0x1A($a2)
    MEM_H(0X1A, ctx->r6) = ctx->r18;
    skip_1:
    // 0x800534C0: addiu       $v0, $a0, -0xC
    ctx->r2 = ADD32(ctx->r4, -0XC);
    // 0x800534C4: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x800534C8: bnel        $v0, $zero, L_800534DC
    if (ctx->r2 != 0) {
        // 0x800534CC: sh          $s2, 0x1A($a2)
        MEM_H(0X1A, ctx->r6) = ctx->r18;
            goto L_800534DC;
    }
    goto skip_2;
    // 0x800534CC: sh          $s2, 0x1A($a2)
    MEM_H(0X1A, ctx->r6) = ctx->r18;
    skip_2:
    // 0x800534D0: addiu       $v0, $a1, -0x1
    ctx->r2 = ADD32(ctx->r5, -0X1);
    // 0x800534D4: sh          $v0, 0x4FA($a3)
    MEM_H(0X4FA, ctx->r7) = ctx->r2;
L_800534D8:
    // 0x800534D8: sh          $s2, 0x1A($a2)
    MEM_H(0X1A, ctx->r6) = ctx->r18;
L_800534DC:
    // 0x800534DC: lbu         $a1, 0x1($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X1);
    // 0x800534E0: lh          $v0, 0x14($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X14);
    // 0x800534E4: lh          $v1, 0x16($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X16);
    // 0x800534E8: lh          $a0, 0x18($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X18);
    // 0x800534EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800534F0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x800534F4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x800534F8: sb          $a1, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r5;
    // 0x800534FC: sw          $v0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r2;
    // 0x80053500: sw          $v1, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r3;
    // 0x80053504: sw          $a0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r4;
    // 0x80053508: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8005350C: sh          $v0, 0x64($a2)
    MEM_H(0X64, ctx->r6) = ctx->r2;
L_80053510:
    // 0x80053510: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80053514: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80053518: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8005351C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80053520: jr          $ra
    // 0x80053524: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80053524: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800892B0_646B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800892B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800892B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800892B8: lui         $a0, 0x71
    ctx->r4 = S32(0X71 << 16);
    // 0x800892BC: addiu       $a0, $a0, 0x7380
    ctx->r4 = ADD32(ctx->r4, 0X7380);
    // 0x800892C0: lui         $a1, 0x71
    ctx->r5 = S32(0X71 << 16);
    // 0x800892C4: addiu       $a1, $a1, 0x7480
    ctx->r5 = ADD32(ctx->r5, 0X7480);
    // 0x800892C8: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x800892CC: jal         0x80027334
    // 0x800892D0: addiu       $a2, $a2, 0xA60
    ctx->r6 = ADD32(ctx->r6, 0XA60);
    func_80027334_2734(rdram, ctx);
        goto after_0;
    // 0x800892D0: addiu       $a2, $a2, 0xA60
    ctx->r6 = ADD32(ctx->r6, 0XA60);
    after_0:
    // 0x800892D4: lui         $a0, 0x71
    ctx->r4 = S32(0X71 << 16);
    // 0x800892D8: addiu       $a0, $a0, 0x7480
    ctx->r4 = ADD32(ctx->r4, 0X7480);
    // 0x800892DC: lui         $a1, 0x71
    ctx->r5 = S32(0X71 << 16);
    // 0x800892E0: addiu       $a1, $a1, 0x74A0
    ctx->r5 = ADD32(ctx->r5, 0X74A0);
    // 0x800892E4: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x800892E8: jal         0x8002724C
    // 0x800892EC: addiu       $a2, $a2, 0xBC0
    ctx->r6 = ADD32(ctx->r6, 0XBC0);
    func_8002724C_264C(rdram, ctx);
        goto after_1;
    // 0x800892EC: addiu       $a2, $a2, 0xBC0
    ctx->r6 = ADD32(ctx->r6, 0XBC0);
    after_1:
    // 0x800892F0: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
    // 0x800892F4: addiu       $t3, $zero, -0x20
    ctx->r11 = ADD32(0, -0X20);
    // 0x800892F8: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
L_800892FC:
    // 0x800892FC: sll         $t0, $t2, 6
    ctx->r8 = S32(ctx->r10 << 6);
L_80089300:
    // 0x80089300: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80089304: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80089308: sh          $t3, 0xBE8($at)
    MEM_H(0XBE8, ctx->r1) = ctx->r11;
    // 0x8008930C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80089310: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80089314: lhu         $v0, 0xBE8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBE8);
    // 0x80089318: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008931C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80089320: sh          $t3, 0xBEA($at)
    MEM_H(0XBEA, ctx->r1) = ctx->r11;
    // 0x80089324: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x80089328: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x8008932C: lhu         $a2, 0xBEA($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0XBEA);
    // 0x80089330: lui         $a3, 0x8018
    ctx->r7 = S32(0X8018 << 16);
    // 0x80089334: addu        $a3, $a3, $t0
    ctx->r7 = ADD32(ctx->r7, ctx->r8);
    // 0x80089338: lhu         $a3, 0xBE8($a3)
    ctx->r7 = MEM_HU(ctx->r7, 0XBE8);
    // 0x8008933C: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80089340: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x80089344: lhu         $v1, 0xBEA($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XBEA);
    // 0x80089348: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008934C: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x80089350: lhu         $a0, 0xBE8($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XBE8);
    // 0x80089354: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80089358: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x8008935C: lhu         $a1, 0xBEA($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0XBEA);
    // 0x80089360: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80089364: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x80089368: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    // 0x8008936C: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    // 0x80089370: addiu       $a1, $a1, 0x400
    ctx->r5 = ADD32(ctx->r5, 0X400);
    // 0x80089374: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80089378: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8008937C: sh          $v0, 0xBF8($at)
    MEM_H(0XBF8, ctx->r1) = ctx->r2;
    // 0x80089380: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80089384: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80089388: sh          $a2, 0xBFA($at)
    MEM_H(0XBFA, ctx->r1) = ctx->r6;
    // 0x8008938C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80089390: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80089394: sh          $a3, 0xC08($at)
    MEM_H(0XC08, ctx->r1) = ctx->r7;
    // 0x80089398: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008939C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800893A0: sh          $v1, 0xC0A($at)
    MEM_H(0XC0A, ctx->r1) = ctx->r3;
    // 0x800893A4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800893A8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800893AC: sh          $a0, 0xC18($at)
    MEM_H(0XC18, ctx->r1) = ctx->r4;
    // 0x800893B0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800893B4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800893B8: sh          $a1, 0xC1A($at)
    MEM_H(0XC1A, ctx->r1) = ctx->r5;
    // 0x800893BC: slti        $v0, $t1, 0x40
    ctx->r2 = SIGNED(ctx->r9) < 0X40 ? 1 : 0;
    // 0x800893C0: bne         $v0, $zero, L_80089300
    if (ctx->r2 != 0) {
        // 0x800893C4: addiu       $t0, $t0, 0x80
        ctx->r8 = ADD32(ctx->r8, 0X80);
            goto L_80089300;
    }
    // 0x800893C4: addiu       $t0, $t0, 0x80
    ctx->r8 = ADD32(ctx->r8, 0X80);
    // 0x800893C8: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x800893CC: slti        $v0, $t2, 0x2
    ctx->r2 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x800893D0: bne         $v0, $zero, L_800892FC
    if (ctx->r2 != 0) {
        // 0x800893D4: addu        $t1, $zero, $zero
        ctx->r9 = ADD32(0, 0);
            goto L_800892FC;
    }
    // 0x800893D4: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x800893D8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800893DC: jr          $ra
    // 0x800893E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800893E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80035698_10A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035698: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003569C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800356A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800356A4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x800356A8: addu        $s3, $s0, $zero
    ctx->r19 = ADD32(ctx->r16, 0);
    // 0x800356AC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x800356B0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x800356B4: jal         0x80092EB0
    // 0x800356B8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_80092EB0_6E2B0(rdram, ctx);
        goto after_0;
    // 0x800356B8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x800356BC: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x800356C0: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x800356C4: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x800356C8: sll         $v0, $s0, 6
    ctx->r2 = S32(ctx->r16 << 6);
    // 0x800356CC: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x800356D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800356D4: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x800356D8: addiu       $v1, $v1, -0x7148
    ctx->r3 = ADD32(ctx->r3, -0X7148);
    // 0x800356DC: addu        $s2, $v0, $v1
    ctx->r18 = ADD32(ctx->r2, ctx->r3);
    // 0x800356E0: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_800356E4:
    // 0x800356E4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800356E8: beq         $a0, $zero, L_800356F8
    if (ctx->r4 == 0) {
        // 0x800356EC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800356F8;
    }
    // 0x800356EC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800356F0: jal         0x80025FF8
    // 0x800356F4: nop

    func_80025FF8_13F8(rdram, ctx);
        goto after_1;
    // 0x800356F4: nop

    after_1:
L_800356F8:
    // 0x800356F8: slti        $v0, $s1, 0x40
    ctx->r2 = SIGNED(ctx->r17) < 0X40 ? 1 : 0;
    // 0x800356FC: bne         $v0, $zero, L_800356E4
    if (ctx->r2 != 0) {
        // 0x80035700: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800356E4;
    }
    // 0x80035700: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80035704: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80035708: jal         0x8009A2B0
    // 0x8003570C: addiu       $a1, $zero, 0x104
    ctx->r5 = ADD32(0, 0X104);
    bzero_recomp(rdram, ctx);
        goto after_2;
    // 0x8003570C: addiu       $a1, $zero, 0x104
    ctx->r5 = ADD32(0, 0X104);
    after_2:
    // 0x80035710: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x80035714: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80035718: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8003571C: bne         $v0, $v1, L_80035744
    if (ctx->r2 != ctx->r3) {
        // 0x80035720: nop
    
            goto L_80035744;
    }
    // 0x80035720: nop

    // 0x80035724: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x80035728: lw          $a0, 0x478C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X478C);
    // 0x8003572C: beq         $a0, $zero, L_8003573C
    if (ctx->r4 == 0) {
        // 0x80035730: nop
    
            goto L_8003573C;
    }
    // 0x80035730: nop

    // 0x80035734: jal         0x80025FF8
    // 0x80035738: nop

    func_80025FF8_13F8(rdram, ctx);
        goto after_3;
    // 0x80035738: nop

    after_3:
L_8003573C:
    // 0x8003573C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x80035740: sw          $zero, 0x478C($at)
    MEM_W(0X478C, ctx->r1) = 0;
L_80035744:
    // 0x80035744: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80035748: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8003574C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80035750: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80035754: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80035758: jr          $ra
    // 0x8003575C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8003575C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8003BDCC_171CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003BDCC: sltu        $v0, $a1, $a0
    ctx->r2 = ctx->r5 < ctx->r4 ? 1 : 0;
    // 0x8003BDD0: bne         $v0, $zero, L_8003BDF0
    if (ctx->r2 != 0) {
        // 0x8003BDD4: nop
    
            goto L_8003BDF0;
    }
    // 0x8003BDD4: nop

    // 0x8003BDD8: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8003BDDC: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
L_8003BDE0:
    // 0x8003BDE0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8003BDE4: sltu        $v0, $a1, $a0
    ctx->r2 = ctx->r5 < ctx->r4 ? 1 : 0;
    // 0x8003BDE8: beql        $v0, $zero, L_8003BDE0
    if (ctx->r2 == 0) {
        // 0x8003BDEC: sw          $v1, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r3;
            goto L_8003BDE0;
    }
    goto skip_0;
    // 0x8003BDEC: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    skip_0:
L_8003BDF0:
    // 0x8003BDF0: jr          $ra
    // 0x8003BDF4: nop

    TRACE_RETURN()
    return;
    // 0x8003BDF4: nop

;}
RECOMP_FUNC void func_800928F8_6DCF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800928F8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800928FC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80092900: lui         $s0, 0x801E
    ctx->r16 = S32(0X801E << 16);
    // 0x80092904: addiu       $s0, $s0, -0x7808
    ctx->r16 = ADD32(ctx->r16, -0X7808);
    // 0x80092908: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8009290C: lui         $a1, 0x8019
    ctx->r5 = S32(0X8019 << 16);
    // 0x80092910: addiu       $a1, $a1, -0x4DF0
    ctx->r5 = ADD32(ctx->r5, -0X4DF0);
    // 0x80092914: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80092918: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8009291C: jal         0x8009A470
    // 0x80092920: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x80092920: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    after_0:
    // 0x80092924: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80092928: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8009292C: jal         0x800922D0
    // 0x80092930: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800922D0_6D6D0(rdram, ctx);
        goto after_1;
    // 0x80092930: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x80092934: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80092938: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
L_8009293C:
    // 0x8009293C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80092940: addiu       $a0, $a0, -0x7808
    ctx->r4 = ADD32(ctx->r4, -0X7808);
    // 0x80092944: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80092948: jal         0x8009A5E0
    // 0x8009294C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x8009294C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80092950: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80092954: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x80092958: beq         $v0, $s1, L_80092970
    if (ctx->r2 == ctx->r17) {
        // 0x8009295C: nop
    
            goto L_80092970;
    }
    // 0x8009295C: nop

    // 0x80092960: beq         $v0, $s0, L_80092994
    if (ctx->r2 == ctx->r16) {
        // 0x80092964: nop
    
            goto L_80092994;
    }
    // 0x80092964: nop

    // 0x80092968: j           L_8009293C
    // 0x8009296C: nop

        goto L_8009293C;
    // 0x8009296C: nop

L_80092970:
    // 0x80092970: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80092974: lw          $v0, -0xEC0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEC0);
    // 0x80092978: beq         $v0, $zero, L_8009293C
    if (ctx->r2 == 0) {
        // 0x8009297C: nop
    
            goto L_8009293C;
    }
    // 0x8009297C: nop

    // 0x80092980: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80092984: jalr        $v0
    // 0x80092988: lw          $a0, -0x450($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X450);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80092988: lw          $a0, -0x450($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X450);
    after_3:
    // 0x8009298C: j           L_8009293C
    // 0x80092990: nop

        goto L_8009293C;
    // 0x80092990: nop

L_80092994:
    // 0x80092994: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80092998: lw          $v0, -0xEBC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEBC);
    // 0x8009299C: beq         $v0, $zero, L_8009293C
    if (ctx->r2 == 0) {
        // 0x800929A0: nop
    
            goto L_8009293C;
    }
    // 0x800929A0: nop

    // 0x800929A4: jalr        $v0
    // 0x800929A8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x800929A8: nop

    after_4:
    // 0x800929AC: j           L_8009293C
    // 0x800929B0: nop

        goto L_8009293C;
    // 0x800929B0: nop

    // 0x800929B4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x800929B8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x800929BC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800929C0: jr          $ra
    // 0x800929C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x800929C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800929C8: nop

    // 0x800929CC: nop

;}
