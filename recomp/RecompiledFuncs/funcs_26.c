#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void __scHandleRetrace(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009AEDC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8009AEE0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8009AEE4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8009AEE8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8009AEEC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8009AEF0: lw          $v0, 0x27C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X27C);
    // 0x8009AEF4: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x8009AEF8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8009AEFC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8009AF00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8009AF04: sw          $v0, 0x27C($s1)
    MEM_W(0X27C, ctx->r17) = ctx->r2;
    // 0x8009AF08: addiu       $a0, $s1, 0x78
    ctx->r4 = ADD32(ctx->r17, 0X78);
L_8009AF0C:
    // 0x8009AF0C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8009AF10: jal         0x8009A5E0
    // 0x8009AF14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8009AF14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8009AF18: beq         $v0, $s0, L_8009AF34
    if (ctx->r2 == ctx->r16) {
        // 0x8009AF1C: nop
    
            goto L_8009AF34;
    }
    // 0x8009AF1C: nop

    // 0x8009AF20: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x8009AF24: jal         0x8009B23C
    // 0x8009AF28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    __scAppendList(rdram, ctx);
        goto after_1;
    // 0x8009AF28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8009AF2C: j           L_8009AF0C
    // 0x8009AF30: addiu       $a0, $s1, 0x78
    ctx->r4 = ADD32(ctx->r17, 0X78);
        goto L_8009AF0C;
    // 0x8009AF30: addiu       $a0, $s1, 0x78
    ctx->r4 = ADD32(ctx->r17, 0X78);
L_8009AF34:
    // 0x8009AF34: lw          $v0, 0x280($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X280);
    // 0x8009AF38: beq         $v0, $zero, L_8009AF5C
    if (ctx->r2 == 0) {
        // 0x8009AF3C: nop
    
            goto L_8009AF5C;
    }
    // 0x8009AF3C: nop

    // 0x8009AF40: lw          $v0, 0x274($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X274);
    // 0x8009AF44: beq         $v0, $zero, L_8009AF60
    if (ctx->r2 == 0) {
        // 0x8009AF48: nop
    
            goto L_8009AF60;
    }
    // 0x8009AF48: nop

    // 0x8009AF4C: jal         0x8009B364
    // 0x8009AF50: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    __scYield(rdram, ctx);
        goto after_2;
    // 0x8009AF50: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8009AF54: j           L_8009AFA0
    // 0x8009AF58: nop

        goto L_8009AFA0;
    // 0x8009AF58: nop

L_8009AF5C:
    // 0x8009AF5C: lw          $v0, 0x274($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X274);
L_8009AF60:
    // 0x8009AF60: lw          $v1, 0x278($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X278);
    // 0x8009AF64: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8009AF68: bne         $v1, $zero, L_8009AF74
    if (ctx->r3 != 0) {
        // 0x8009AF6C: sll         $s0, $v0, 1
        ctx->r16 = S32(ctx->r2 << 1);
            goto L_8009AF74;
    }
    // 0x8009AF6C: sll         $s0, $v0, 1
    ctx->r16 = S32(ctx->r2 << 1);
    // 0x8009AF70: ori         $s0, $s0, 0x1
    ctx->r16 = ctx->r16 | 0X1;
L_8009AF74:
    // 0x8009AF74: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8009AF78: addiu       $a1, $sp, 0x14
    ctx->r5 = ADD32(ctx->r29, 0X14);
    // 0x8009AF7C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x8009AF80: jal         0x8009B39C
    // 0x8009AF84: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    __scSchedule(rdram, ctx);
        goto after_3;
    // 0x8009AF84: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8009AF88: beq         $v0, $s0, L_8009AFA0
    if (ctx->r2 == ctx->r16) {
        // 0x8009AF8C: nop
    
            goto L_8009AFA0;
    }
    // 0x8009AF8C: nop

    // 0x8009AF90: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x8009AF94: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8009AF98: jal         0x8009B294
    // 0x8009AF9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    __scExec(rdram, ctx);
        goto after_4;
    // 0x8009AF9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
L_8009AFA0:
    // 0x8009AFA0: lw          $s0, 0x260($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X260);
    // 0x8009AFA4: beq         $s0, $zero, L_8009AFC8
    if (ctx->r16 == 0) {
        // 0x8009AFA8: nop
    
            goto L_8009AFC8;
    }
    // 0x8009AFA8: nop

L_8009AFAC:
    // 0x8009AFAC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8009AFB0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8009AFB4: jal         0x8009A710
    // 0x8009AFB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x8009AFB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8009AFBC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8009AFC0: bne         $s0, $zero, L_8009AFAC
    if (ctx->r16 != 0) {
        // 0x8009AFC4: nop
    
            goto L_8009AFAC;
    }
    // 0x8009AFC4: nop

L_8009AFC8:
    // 0x8009AFC8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8009AFCC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8009AFD0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8009AFD4: jr          $ra
    // 0x8009AFD8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8009AFD8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8006FAD8_4AED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006FAD8: jr          $ra
    // 0x8006FADC: nop

    TRACE_RETURN()
    return;
    // 0x8006FADC: nop

;}
RECOMP_FUNC void func_8008EFE0_6A3E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008EFE0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008EFE4: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x8008EFE8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8008EFEC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8008EFF0: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8008EFF4: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8008EFF8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8008EFFC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8008F000: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008F004: lw          $s2, 0x34($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X34);
    // 0x8008F008: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x8008F00C: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x8008F010: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x8008F014: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x8008F018: ori         $v0, $v0, 0x7C0
    ctx->r2 = ctx->r2 | 0X7C0;
    // 0x8008F01C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8008F020: addiu       $v0, $zero, 0x2E0
    ctx->r2 = ADD32(0, 0X2E0);
    // 0x8008F024: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x8008F028: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x8008F02C: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8008F030: blez        $v0, L_8008F060
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8008F034: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8008F060;
    }
    // 0x8008F034: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8008F038: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
L_8008F03C:
    // 0x8008F03C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8008F040: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8008F044: jal         0x8008F5A0
    // 0x8008F048: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8008F5A0_6A9A0(rdram, ctx);
        goto after_0;
    // 0x8008F048: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_0:
    // 0x8008F04C: lw          $v1, 0x14($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X14);
    // 0x8008F050: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8008F054: slt         $v1, $s0, $v1
    ctx->r3 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8008F058: bne         $v1, $zero, L_8008F03C
    if (ctx->r3 != 0) {
        // 0x8008F05C: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_8008F03C;
    }
    // 0x8008F05C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
L_8008F060:
    // 0x8008F060: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x8008F064: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8008F068: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8008F06C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8008F070: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8008F074: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008F078: jr          $ra
    // 0x8008F07C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8008F07C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80062FA4_3E3A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80062FA4: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80062FA8: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x80062FAC: lui         $a1, 0x100
    ctx->r5 = S32(0X100 << 16);
    // 0x80062FB0: and         $v0, $a0, $a1
    ctx->r2 = ctx->r4 & ctx->r5;
    // 0x80062FB4: bne         $v0, $zero, L_80062FE4
    if (ctx->r2 != 0) {
        // 0x80062FB8: or          $v0, $a0, $a1
        ctx->r2 = ctx->r4 | ctx->r5;
            goto L_80062FE4;
    }
    // 0x80062FB8: or          $v0, $a0, $a1
    ctx->r2 = ctx->r4 | ctx->r5;
    // 0x80062FBC: lw          $v1, 0x6C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X6C);
    // 0x80062FC0: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x80062FC4: lbu         $v0, 0x3B($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X3B);
    // 0x80062FC8: lbu         $a0, 0x1($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X1);
    // 0x80062FCC: lbu         $v1, 0x2($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2);
    // 0x80062FD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80062FD4: sb          $v0, 0x3B($a3)
    MEM_B(0X3B, ctx->r7) = ctx->r2;
    // 0x80062FD8: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x80062FDC: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x80062FE0: sh          $a0, 0x4($a3)
    MEM_H(0X4, ctx->r7) = ctx->r4;
L_80062FE4:
    // 0x80062FE4: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80062FE8: lb          $a1, 0x3B($a3)
    ctx->r5 = MEM_B(ctx->r7, 0X3B);
    // 0x80062FEC: lhu         $a0, 0x4($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X4);
    // 0x80062FF0: lui         $v0, 0x1000
    ctx->r2 = S32(0X1000 << 16);
    // 0x80062FF4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80062FF8: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80062FFC: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x80063000: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80063004: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x80063008: sh          $a0, 0x4($a3)
    MEM_H(0X4, ctx->r7) = ctx->r4;
    // 0x8006300C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80063010: sra         $v0, $a0, 16
    ctx->r2 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80063014: bgez        $v0, L_8006308C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80063018: sw          $v1, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r3;
            goto L_8006308C;
    }
    // 0x80063018: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x8006301C: lb          $a0, 0x3A($a3)
    ctx->r4 = MEM_B(ctx->r7, 0X3A);
    // 0x80063020: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80063024: mflo        $v0
    ctx->r2 = lo;
    // 0x80063028: negu        $v1, $t0
    ctx->r3 = SUB32(0, ctx->r8);
    // 0x8006302C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80063030: beq         $v0, $zero, L_80063080
    if (ctx->r2 == 0) {
        // 0x80063034: lui         $a1, 0xFEFF
        ctx->r5 = S32(0XFEFF << 16);
            goto L_80063080;
    }
    // 0x80063034: lui         $a1, 0xFEFF
    ctx->r5 = S32(0XFEFF << 16);
    // 0x80063038: lhu         $v0, 0x38($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X38);
    // 0x8006303C: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x80063040: lw          $v1, 0x6C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X6C);
    // 0x80063044: lbu         $a2, 0x3E($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X3E);
    // 0x80063048: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x8006304C: sb          $zero, 0x71($a3)
    MEM_B(0X71, ctx->r7) = 0;
    // 0x80063050: sb          $zero, 0x72($a3)
    MEM_B(0X72, ctx->r7) = 0;
    // 0x80063054: sb          $zero, 0x73($a3)
    MEM_B(0X73, ctx->r7) = 0;
    // 0x80063058: sb          $zero, 0x3B($a3)
    MEM_B(0X3B, ctx->r7) = 0;
    // 0x8006305C: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80063060: and         $a0, $a0, $a1
    ctx->r4 = ctx->r4 & ctx->r5;
    // 0x80063064: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x80063068: sh          $v0, 0x38($a3)
    MEM_H(0X38, ctx->r7) = ctx->r2;
    // 0x8006306C: sw          $a0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r4;
    // 0x80063070: sw          $v1, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->r3;
    // 0x80063074: sw          $v1, 0x48($a3)
    MEM_W(0X48, ctx->r7) = ctx->r3;
    // 0x80063078: j           L_8006308C
    // 0x8006307C: sb          $a2, 0x3C($a3)
    MEM_B(0X3C, ctx->r7) = ctx->r6;
        goto L_8006308C;
    // 0x8006307C: sb          $a2, 0x3C($a3)
    MEM_B(0X3C, ctx->r7) = ctx->r6;
L_80063080:
    // 0x80063080: lhu         $v0, 0x38($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X38);
    // 0x80063084: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80063088: sh          $v0, 0x38($a3)
    MEM_H(0X38, ctx->r7) = ctx->r2;
L_8006308C:
    // 0x8006308C: jr          $ra
    // 0x80063090: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    TRACE_RETURN()
    return;
    // 0x80063090: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_8005471C_2FB1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005471C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80054720: lhu         $v0, -0x232E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X232E);
    // 0x80054724: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80054728: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x8005472C: lw          $s4, 0x98($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X98);
    // 0x80054730: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x80054734: lui         $s3, 0x801B
    ctx->r19 = S32(0X801B << 16);
    // 0x80054738: lhu         $s3, -0x2330($s3)
    ctx->r19 = MEM_HU(ctx->r19, -0X2330);
    // 0x8005473C: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x80054740: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80054744: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x80054748: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8005474C: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x80054750: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x80054754: sw          $ra, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r31;
    // 0x80054758: beq         $v0, $zero, L_80054764
    if (ctx->r2 == 0) {
        // 0x8005475C: sw          $s5, 0x7C($sp)
        MEM_W(0X7C, ctx->r29) = ctx->r21;
            goto L_80054764;
    }
    // 0x8005475C: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x80054760: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
L_80054764:
    // 0x80054764: bne         $s3, $zero, L_80054798
    if (ctx->r19 != 0) {
        // 0x80054768: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80054798;
    }
    // 0x80054768: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005476C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80054770: lbu         $v1, 0xB61($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB61);
    // 0x80054774: beq         $v1, $v0, L_80054794
    if (ctx->r3 == ctx->r2) {
        // 0x80054778: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80054794;
    }
    // 0x80054778: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8005477C: beq         $v0, $zero, L_80054798
    if (ctx->r2 == 0) {
        // 0x80054780: addiu       $s3, $zero, 0x3E4
        ctx->r19 = ADD32(0, 0X3E4);
            goto L_80054798;
    }
    // 0x80054780: addiu       $s3, $zero, 0x3E4
    ctx->r19 = ADD32(0, 0X3E4);
    // 0x80054784: bne         $v1, $zero, L_80054798
    if (ctx->r3 != 0) {
        // 0x80054788: nop
    
            goto L_80054798;
    }
    // 0x80054788: nop

    // 0x8005478C: j           L_80054798
    // 0x80054790: addiu       $s3, $zero, 0x3E0
    ctx->r19 = ADD32(0, 0X3E0);
        goto L_80054798;
    // 0x80054790: addiu       $s3, $zero, 0x3E0
    ctx->r19 = ADD32(0, 0X3E0);
L_80054794:
    // 0x80054794: addiu       $s3, $zero, 0x3E2
    ctx->r19 = ADD32(0, 0X3E2);
L_80054798:
    // 0x80054798: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8005479C: lhu         $v1, -0x2332($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X2332);
    // 0x800547A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800547A4: bnel        $v1, $v0, L_800547F0
    if (ctx->r3 != ctx->r2) {
        // 0x800547A8: sltiu       $v0, $a3, 0x3801
        ctx->r2 = ctx->r7 < 0X3801 ? 1 : 0;
            goto L_800547F0;
    }
    goto skip_0;
    // 0x800547A8: sltiu       $v0, $a3, 0x3801
    ctx->r2 = ctx->r7 < 0X3801 ? 1 : 0;
    skip_0:
    // 0x800547AC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x800547B0: lbu         $v1, 0xB61($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB61);
    // 0x800547B4: beql        $v1, $zero, L_800547BC
    if (ctx->r3 == 0) {
        // 0x800547B8: addiu       $s3, $zero, 0x3CC
        ctx->r19 = ADD32(0, 0X3CC);
            goto L_800547BC;
    }
    goto skip_1;
    // 0x800547B8: addiu       $s3, $zero, 0x3CC
    ctx->r19 = ADD32(0, 0X3CC);
    skip_1:
L_800547BC:
    // 0x800547BC: addiu       $v0, $zero, 0x1900
    ctx->r2 = ADD32(0, 0X1900);
    // 0x800547C0: sllv        $a0, $v0, $v1
    ctx->r4 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x800547C4: sltu        $v0, $a3, $a0
    ctx->r2 = ctx->r7 < ctx->r4 ? 1 : 0;
    // 0x800547C8: beq         $v0, $zero, L_800547DC
    if (ctx->r2 == 0) {
        // 0x800547CC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_800547DC;
    }
    // 0x800547CC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x800547D0: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x800547D4: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800547D8: mflo        $a3
    ctx->r7 = lo;
L_800547DC:
    // 0x800547DC: sltu        $v0, $a0, $a3
    ctx->r2 = ctx->r4 < ctx->r7 ? 1 : 0;
    // 0x800547E0: nop

    // 0x800547E4: bnel        $v0, $zero, L_800547EC
    if (ctx->r2 != 0) {
        // 0x800547E8: addu        $a3, $a0, $zero
        ctx->r7 = ADD32(ctx->r4, 0);
            goto L_800547EC;
    }
    goto skip_2;
    // 0x800547E8: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    skip_2:
L_800547EC:
    // 0x800547EC: sltiu       $v0, $a3, 0x3801
    ctx->r2 = ctx->r7 < 0X3801 ? 1 : 0;
L_800547F0:
    // 0x800547F0: bne         $v0, $zero, L_800547FC
    if (ctx->r2 != 0) {
        // 0x800547F4: addu        $s5, $a3, $zero
        ctx->r21 = ADD32(ctx->r7, 0);
            goto L_800547FC;
    }
    // 0x800547F4: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x800547F8: addiu       $a3, $zero, 0x3800
    ctx->r7 = ADD32(0, 0X3800);
L_800547FC:
    // 0x800547FC: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80054800: lhu         $v1, -0x2332($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X2332);
    // 0x80054804: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80054808: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8005480C: sb          $s0, -0x4980($at)
    MEM_B(-0X4980, ctx->r1) = ctx->r16;
    // 0x80054810: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80054814: sb          $s1, -0x497F($at)
    MEM_B(-0X497F, ctx->r1) = ctx->r17;
    // 0x80054818: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8005481C: sb          $s2, -0x497E($at)
    MEM_B(-0X497E, ctx->r1) = ctx->r18;
    // 0x80054820: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80054824: sh          $a3, -0x497C($at)
    MEM_H(-0X497C, ctx->r1) = ctx->r7;
    // 0x80054828: beq         $v1, $v0, L_80054850
    if (ctx->r3 == ctx->r2) {
        // 0x8005482C: sll         $v0, $s0, 3
        ctx->r2 = S32(ctx->r16 << 3);
            goto L_80054850;
    }
    // 0x8005482C: sll         $v0, $s0, 3
    ctx->r2 = S32(ctx->r16 << 3);
    // 0x80054830: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x80054834: srl         $s0, $v0, 1
    ctx->r16 = S32(U32(ctx->r2) >> 1);
    // 0x80054838: sll         $v0, $s1, 3
    ctx->r2 = S32(ctx->r17 << 3);
    // 0x8005483C: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x80054840: srl         $s1, $v0, 1
    ctx->r17 = S32(U32(ctx->r2) >> 1);
    // 0x80054844: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x80054848: subu        $v0, $v0, $s2
    ctx->r2 = SUB32(ctx->r2, ctx->r18);
    // 0x8005484C: srl         $s2, $v0, 1
    ctx->r18 = S32(U32(ctx->r2) >> 1);
L_80054850:
    // 0x80054850: sltiu       $v0, $s0, 0x100
    ctx->r2 = ctx->r16 < 0X100 ? 1 : 0;
    // 0x80054854: beql        $v0, $zero, L_8005485C
    if (ctx->r2 == 0) {
        // 0x80054858: addiu       $s0, $zero, 0xFF
        ctx->r16 = ADD32(0, 0XFF);
            goto L_8005485C;
    }
    goto skip_3;
    // 0x80054858: addiu       $s0, $zero, 0xFF
    ctx->r16 = ADD32(0, 0XFF);
    skip_3:
L_8005485C:
    // 0x8005485C: sltiu       $v0, $s1, 0x100
    ctx->r2 = ctx->r17 < 0X100 ? 1 : 0;
    // 0x80054860: beql        $v0, $zero, L_80054868
    if (ctx->r2 == 0) {
        // 0x80054864: addiu       $s1, $zero, 0xFF
        ctx->r17 = ADD32(0, 0XFF);
            goto L_80054868;
    }
    goto skip_4;
    // 0x80054864: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
    skip_4:
L_80054868:
    // 0x80054868: sltiu       $v0, $s2, 0x100
    ctx->r2 = ctx->r18 < 0X100 ? 1 : 0;
    // 0x8005486C: beql        $v0, $zero, L_80054874
    if (ctx->r2 == 0) {
        // 0x80054870: addiu       $s2, $zero, 0xFF
        ctx->r18 = ADD32(0, 0XFF);
            goto L_80054874;
    }
    goto skip_5;
    // 0x80054870: addiu       $s2, $zero, 0xFF
    ctx->r18 = ADD32(0, 0XFF);
    skip_5:
L_80054874:
    // 0x80054874: mtc1        $s4, $f2
    ctx->f2.u32l = ctx->r20;
    // 0x80054878: nop

    // 0x8005487C: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x80054880: srl         $v0, $s4, 2
    ctx->r2 = S32(U32(ctx->r20) >> 2);
    // 0x80054884: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80054888: sh          $v0, -0x2790($at)
    MEM_H(-0X2790, ctx->r1) = ctx->r2;
    // 0x8005488C: addiu       $v0, $a3, 0x440
    ctx->r2 = ADD32(ctx->r7, 0X440);
    // 0x80054890: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x80054894: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80054898: sh          $v0, -0x7810($at)
    MEM_H(-0X7810, ctx->r1) = ctx->r2;
    // 0x8005489C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x800548A0: sh          $v0, 0x5412($at)
    MEM_H(0X5412, ctx->r1) = ctx->r2;
    // 0x800548A4: bgez        $s4, L_800548B8
    if (SIGNED(ctx->r20) >= 0) {
        // 0x800548A8: addiu       $a1, $sp, 0x60
        ctx->r5 = ADD32(ctx->r29, 0X60);
            goto L_800548B8;
    }
    // 0x800548A8: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x800548AC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800548B0: ldc1        $f0, 0x2430($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X2430);
    // 0x800548B4: add.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d + ctx->f0.d;
L_800548B8:
    // 0x800548B8: lui         $a2, 0x4216
    ctx->r6 = S32(0X4216 << 16);
    // 0x800548BC: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x800548C0: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x800548C4: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
    // 0x800548C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800548CC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800548D0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x800548D4: andi        $v0, $s5, 0xFFFF
    ctx->r2 = ctx->r21 & 0XFFFF;
    // 0x800548D8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x800548DC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x800548E0: nop

    // 0x800548E4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x800548E8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x800548EC: jal         0x8002C238
    // 0x800548F0: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    func_8002C238_7638(rdram, ctx);
        goto after_0;
    // 0x800548F0: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x800548F4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800548F8: addiu       $a0, $a0, 0x56A8
    ctx->r4 = ADD32(ctx->r4, 0X56A8);
    // 0x800548FC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80054900: jal         0x8009A3B4
    // 0x80054904: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80054904: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_1:
    // 0x80054908: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005490C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80054910: lhu         $v0, 0x60($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X60);
    // 0x80054914: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80054918: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005491C: sh          $s5, 0x56EC($at)
    MEM_H(0X56EC, ctx->r1) = ctx->r21;
    // 0x80054920: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80054924: sh          $s4, 0x56EE($at)
    MEM_H(0X56EE, ctx->r1) = ctx->r20;
    // 0x80054928: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005492C: sh          $s3, 0x56EA($at)
    MEM_H(0X56EA, ctx->r1) = ctx->r19;
    // 0x80054930: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80054934: sb          $s0, 0x56F0($at)
    MEM_B(0X56F0, ctx->r1) = ctx->r16;
    // 0x80054938: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005493C: sb          $s1, 0x56F1($at)
    MEM_B(0X56F1, ctx->r1) = ctx->r17;
    // 0x80054940: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80054944: sb          $s2, 0x56F2($at)
    MEM_B(0X56F2, ctx->r1) = ctx->r18;
    // 0x80054948: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005494C: sh          $v0, 0x56E8($at)
    MEM_H(0X56E8, ctx->r1) = ctx->r2;
    // 0x80054950: jal         0x80028850
    // 0x80054954: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80028850_3C50(rdram, ctx);
        goto after_2;
    // 0x80054954: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80054958: jal         0x80054A30
    // 0x8005495C: nop

    func_80054A30_2FE30(rdram, ctx);
        goto after_3;
    // 0x8005495C: nop

    after_3:
    // 0x80054960: lw          $ra, 0x80($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X80);
    // 0x80054964: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x80054968: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x8005496C: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x80054970: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x80054974: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x80054978: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x8005497C: jr          $ra
    // 0x80054980: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x80054980: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_8007A69C_55A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007A69C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007A6A0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8007A6A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8007A6A8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8007A6AC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8007A6B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007A6B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8007A6B8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007A6BC: lw          $v0, -0x2D90($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2D90);
    // 0x8007A6C0: jalr        $v0
    // 0x8007A6C4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8007A6C4: nop

    after_0:
    // 0x8007A6C8: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8007A6CC: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x8007A6D0: beq         $v0, $zero, L_8007A6F4
    if (ctx->r2 == 0) {
        // 0x8007A6D4: lui         $a1, 0x1000
        ctx->r5 = S32(0X1000 << 16);
            goto L_8007A6F4;
    }
    // 0x8007A6D4: lui         $a1, 0x1000
    ctx->r5 = S32(0X1000 << 16);
    // 0x8007A6D8: ori         $a1, $a1, 0x8
    ctx->r5 = ctx->r5 | 0X8;
    // 0x8007A6DC: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8007A6E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8007A6E4: lhu         $v1, 0x3E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3E);
    // 0x8007A6E8: lbu         $t0, 0x1($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1);
    // 0x8007A6EC: j           L_8007A748
    // 0x8007A6F0: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
        goto L_8007A748;
    // 0x8007A6F0: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
L_8007A6F4:
    // 0x8007A6F4: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x8007A6F8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8007A6FC: bne         $v1, $v0, L_8007A734
    if (ctx->r3 != ctx->r2) {
        // 0x8007A700: ori         $a1, $a1, 0x8
        ctx->r5 = ctx->r5 | 0X8;
            goto L_8007A734;
    }
    // 0x8007A700: ori         $a1, $a1, 0x8
    ctx->r5 = ctx->r5 | 0X8;
    // 0x8007A704: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8007A708: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8007A70C: lhu         $v1, 0x3E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3E);
    // 0x8007A710: lbu         $t0, 0x1($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1);
    // 0x8007A714: ori         $a3, $zero, 0xC000
    ctx->r7 = 0 | 0XC000;
    // 0x8007A718: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007A71C: addiu       $v0, $v0, -0x4500
    ctx->r2 = ADD32(ctx->r2, -0X4500);
    // 0x8007A720: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8007A724: lui         $v0, 0x3000
    ctx->r2 = S32(0X3000 << 16);
    // 0x8007A728: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8007A72C: j           L_8007A75C
    // 0x8007A730: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_8007A75C;
    // 0x8007A730: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_8007A734:
    // 0x8007A734: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8007A738: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8007A73C: lhu         $v1, 0x3E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3E);
    // 0x8007A740: lbu         $t0, 0x1($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1);
    // 0x8007A744: ori         $a3, $zero, 0xC000
    ctx->r7 = 0 | 0XC000;
L_8007A748:
    // 0x8007A748: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007A74C: addiu       $v0, $v0, -0x4500
    ctx->r2 = ADD32(ctx->r2, -0X4500);
    // 0x8007A750: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8007A754: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8007A758: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
L_8007A75C:
    // 0x8007A75C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8007A760: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8007A764: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8007A768: sra         $a1, $v1, 16
    ctx->r5 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8007A76C: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x8007A770: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8007A774: sra         $a1, $a1, 1
    ctx->r5 = S32(SIGNED(ctx->r5) >> 1);
    // 0x8007A778: jal         0x80051E18
    // 0x8007A77C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x8007A77C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_1:
    // 0x8007A780: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A784: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8007A788: jr          $ra
    // 0x8007A78C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8007A78C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80066DE0_421E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80066DE0: lhu         $v0, 0xC0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XC0);
    // 0x80066DE4: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80066DE8: sh          $v1, 0xC0($a0)
    MEM_H(0XC0, ctx->r4) = ctx->r3;
    // 0x80066DEC: lw          $v1, 0x6C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X6C);
    // 0x80066DF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80066DF4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80066DF8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80066DFC: sw          $v1, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r3;
    // 0x80066E00: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80066E04: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x80066E08: lb          $v1, 0x72($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X72);
    // 0x80066E0C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80066E10: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80066E14: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80066E18: lb          $v0, -0x6F91($at)
    ctx->r2 = MEM_B(ctx->r1, -0X6F91);
    // 0x80066E1C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80066E20: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80066E24: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80066E28: lw          $v0, 0x29C4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X29C4);
    // 0x80066E2C: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
    // 0x80066E30: jr          $ra
    // 0x80066E34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x80066E34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8008128C_5C68C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008128C: lui         $a0, 0xD9D0
    ctx->r4 = S32(0XD9D0 << 16);
    // 0x80081290: ori         $a0, $a0, 0xF9FA
    ctx->r4 = ctx->r4 | 0XF9FA;
    // 0x80081294: lui         $a1, 0xE300
    ctx->r5 = S32(0XE300 << 16);
    // 0x80081298: ori         $a1, $a1, 0xA01
    ctx->r5 = ctx->r5 | 0XA01;
    // 0x8008129C: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
    // 0x800812A0: ori         $a2, $a2, 0x1001
    ctx->r6 = ctx->r6 | 0X1001;
    // 0x800812A4: lui         $a3, 0xE300
    ctx->r7 = S32(0XE300 << 16);
    // 0x800812A8: ori         $a3, $a3, 0xC00
    ctx->r7 = ctx->r7 | 0XC00;
    // 0x800812AC: lui         $t0, 0xE300
    ctx->r8 = S32(0XE300 << 16);
    // 0x800812B0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800812B4: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x800812B8: ori         $t0, $t0, 0x1201
    ctx->r8 = ctx->r8 | 0X1201;
    // 0x800812BC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x800812C0: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x800812C4: sw          $v0, 0x3C30($at)
    MEM_W(0X3C30, ctx->r1) = ctx->r2;
    // 0x800812C8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x800812CC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800812D0: sb          $v0, -0x3D7F($at)
    MEM_B(-0X3D7F, ctx->r1) = ctx->r2;
    // 0x800812D4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800812D8: sb          $v0, -0x3D7E($at)
    MEM_B(-0X3D7E, ctx->r1) = ctx->r2;
    // 0x800812DC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800812E0: sb          $v0, -0x3D7D($at)
    MEM_B(-0X3D7D, ctx->r1) = ctx->r2;
    // 0x800812E4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x800812E8: sw          $zero, 0x208($at)
    MEM_W(0X208, ctx->r1) = 0;
    // 0x800812EC: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x800812F0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800812F4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800812F8: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x800812FC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80081300: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80081304: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x80081308: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x8008130C: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x80081310: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80081314: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80081318: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x8008131C: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
    // 0x80081320: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x80081324: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80081328: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8008132C: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
    // 0x80081330: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80081334: addiu       $v0, $v1, 0x28
    ctx->r2 = ADD32(ctx->r3, 0X28);
    // 0x80081338: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008133C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80081340: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x80081344: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80081348: addiu       $v0, $v1, 0x30
    ctx->r2 = ADD32(ctx->r3, 0X30);
    // 0x8008134C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80081350: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80081354: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x80081358: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8008135C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80081360: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x80081364: sw          $a1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r5;
    // 0x80081368: sw          $a2, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r6;
    // 0x8008136C: sw          $a3, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r7;
    // 0x80081370: sw          $t0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r8;
    // 0x80081374: jr          $ra
    // 0x80081378: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80081378: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x8008137C: nop

;}
RECOMP_FUNC void func_8007AB48_55F48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007AB48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007AB4C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8007AB50: jal         0x8004F5C4
    // 0x8007AB54: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8007AB54: nop

    after_0:
    // 0x8007AB58: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8007AB5C: jr          $ra
    // 0x8007AB60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8007AB60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006F99C_4AD9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006F99C: jr          $ra
    // 0x8006F9A0: nop

    TRACE_RETURN()
    return;
    // 0x8006F9A0: nop

;}
RECOMP_FUNC void func_8002D08C_848C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002D08C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8002D090: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8002D094: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8002D098: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8002D09C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8002D0A0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8002D0A4: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x8002D0A8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8002D0AC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8002D0B0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8002D0B4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8002D0B8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8002D0BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002D0C0: lhu         $v1, 0xE($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0XE);
    // 0x8002D0C4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8002D0C8: lhu         $v0, 0x2710($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2710);
    // 0x8002D0CC: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x8002D0D0: beq         $v0, $v1, L_8002D344
    if (ctx->r2 == ctx->r3) {
        // 0x8002D0D4: addu        $s7, $a3, $zero
        ctx->r23 = ADD32(ctx->r7, 0);
            goto L_8002D344;
    }
    // 0x8002D0D4: addu        $s7, $a3, $zero
    ctx->r23 = ADD32(ctx->r7, 0);
    // 0x8002D0D8: beq         $s6, $zero, L_8002D0E4
    if (ctx->r22 == 0) {
        // 0x8002D0DC: addiu       $s5, $zero, 0x10
        ctx->r21 = ADD32(0, 0X10);
            goto L_8002D0E4;
    }
    // 0x8002D0DC: addiu       $s5, $zero, 0x10
    ctx->r21 = ADD32(0, 0X10);
    // 0x8002D0E0: addiu       $s5, $zero, 0x100
    ctx->r21 = ADD32(0, 0X100);
L_8002D0E4:
    // 0x8002D0E4: lhu         $a1, 0xE($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0XE);
    // 0x8002D0E8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002D0EC: sh          $v1, 0x2710($at)
    MEM_H(0X2710, ctx->r1) = ctx->r3;
    // 0x8002D0F0: andi        $a0, $a1, 0x3F
    ctx->r4 = ctx->r5 & 0X3F;
    // 0x8002D0F4: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    // 0x8002D0F8: jal         0x80087248
    // 0x8002D0FC: srl         $a1, $a1, 6
    ctx->r5 = S32(U32(ctx->r5) >> 6);
    func_80087248_62648(rdram, ctx);
        goto after_0;
    // 0x8002D0FC: srl         $a1, $a1, 6
    ctx->r5 = S32(U32(ctx->r5) >> 6);
    after_0:
    // 0x8002D100: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8002D104: andi        $v0, $s0, 0x7
    ctx->r2 = ctx->r16 & 0X7;
    // 0x8002D108: beq         $v0, $zero, L_8002D14C
    if (ctx->r2 == 0) {
        // 0x8002D10C: sll         $s2, $s1, 1
        ctx->r18 = S32(ctx->r17 << 1);
            goto L_8002D14C;
    }
    // 0x8002D10C: sll         $s2, $s1, 1
    ctx->r18 = S32(ctx->r17 << 1);
    // 0x8002D110: jal         0x800281C8
    // 0x8002D114: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_800281C8_35C8(rdram, ctx);
        goto after_1;
    // 0x8002D114: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x8002D118: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8002D11C: beq         $s1, $zero, L_8002D344
    if (ctx->r17 == 0) {
        // 0x8002D120: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_8002D344;
    }
    // 0x8002D120: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x8002D124: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8002D128: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8002D12C: jal         0x8009A3B4
    // 0x8002D130: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8002D130: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_2:
    // 0x8002D134: j           L_8002D150
    // 0x8002D138: nop

        goto L_8002D150;
    // 0x8002D138: nop

L_8002D13C:
    // 0x8002D13C: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8002D140: addu        $s1, $s1, $a0
    ctx->r17 = ADD32(ctx->r17, ctx->r4);
    // 0x8002D144: j           L_8002D270
    // 0x8002D148: lw          $s1, -0x3F44($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3F44);
        goto L_8002D270;
    // 0x8002D148: lw          $s1, -0x3F44($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3F44);
L_8002D14C:
    // 0x8002D14C: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_8002D150:
    // 0x8002D150: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8002D154: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8002D158: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8002D15C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D160: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002D164: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x8002D168: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8002D16C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8002D170: lbu         $v0, 0x7($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X7);
    // 0x8002D174: xori        $v1, $s7, 0x1
    ctx->r3 = ctx->r23 ^ 0X1;
    // 0x8002D178: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8002D17C: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x8002D180: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8002D184: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8002D188: beq         $v0, $zero, L_8002D1C8
    if (ctx->r2 == 0) {
        // 0x8002D18C: nop
    
            goto L_8002D1C8;
    }
    // 0x8002D18C: nop

    // 0x8002D190: jal         0x800281C8
    // 0x8002D194: sll         $a0, $s5, 1
    ctx->r4 = S32(ctx->r21 << 1);
    func_800281C8_35C8(rdram, ctx);
        goto after_3;
    // 0x8002D194: sll         $a0, $s5, 1
    ctx->r4 = S32(ctx->r21 << 1);
    after_3:
    // 0x8002D198: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8002D19C: beq         $s0, $zero, L_8002D1C8
    if (ctx->r16 == 0) {
        // 0x8002D1A0: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_8002D1C8;
    }
    // 0x8002D1A0: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x8002D1A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8002D1A8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8002D1AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8002D1B0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8002D1B4: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x8002D1B8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8002D1BC: jal         0x80084E28
    // 0x8002D1C0: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    func_80084E28_60228(rdram, ctx);
        goto after_4;
    // 0x8002D1C0: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    after_4:
    // 0x8002D1C4: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_8002D1C8:
    // 0x8002D1C8: beq         $s4, $zero, L_8002D270
    if (ctx->r20 == 0) {
        // 0x8002D1CC: nop
    
            goto L_8002D270;
    }
    // 0x8002D1CC: nop

    // 0x8002D1D0: beq         $s1, $zero, L_8002D270
    if (ctx->r17 == 0) {
        // 0x8002D1D4: nop
    
            goto L_8002D270;
    }
    // 0x8002D1D4: nop

    // 0x8002D1D8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8002D1DC: lw          $v0, -0xC94($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XC94);
    // 0x8002D1E0: beq         $v0, $zero, L_8002D214
    if (ctx->r2 == 0) {
        // 0x8002D1E4: sll         $s2, $s5, 1
        ctx->r18 = S32(ctx->r21 << 1);
            goto L_8002D214;
    }
    // 0x8002D1E4: sll         $s2, $s5, 1
    ctx->r18 = S32(ctx->r21 << 1);
    // 0x8002D1E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8002D1EC: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
L_8002D1F0:
    // 0x8002D1F0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8002D1F4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8002D1F8: lw          $v0, -0x3F48($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3F48);
    // 0x8002D1FC: beq         $v0, $s1, L_8002D13C
    if (ctx->r2 == ctx->r17) {
        // 0x8002D200: nop
    
            goto L_8002D13C;
    }
    // 0x8002D200: nop

    // 0x8002D204: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8002D208: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x8002D20C: bne         $v0, $zero, L_8002D1F0
    if (ctx->r2 != 0) {
        // 0x8002D210: nop
    
            goto L_8002D1F0;
    }
    // 0x8002D210: nop

L_8002D214:
    // 0x8002D214: jal         0x800281C8
    // 0x8002D218: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_800281C8_35C8(rdram, ctx);
        goto after_5;
    // 0x8002D218: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
    // 0x8002D21C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8002D220: beq         $s0, $zero, L_8002D234
    if (ctx->r16 == 0) {
        // 0x8002D224: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8002D234;
    }
    // 0x8002D224: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8002D228: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8002D22C: jal         0x8009A3B4
    // 0x8002D230: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8002D230: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_6:
L_8002D234:
    // 0x8002D234: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8002D238: lw          $v1, -0xC94($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XC94);
    // 0x8002D23C: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8002D240: beq         $v0, $zero, L_8002D26C
    if (ctx->r2 == 0) {
        // 0x8002D244: sll         $v0, $v1, 3
        ctx->r2 = S32(ctx->r3 << 3);
            goto L_8002D26C;
    }
    // 0x8002D244: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8002D248: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8002D24C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8002D250: sw          $s1, -0x3F48($at)
    MEM_W(-0X3F48, ctx->r1) = ctx->r17;
    // 0x8002D254: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8002D258: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8002D25C: sw          $s0, -0x3F44($at)
    MEM_W(-0X3F44, ctx->r1) = ctx->r16;
    // 0x8002D260: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8002D264: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8002D268: sw          $v0, -0xC94($at)
    MEM_W(-0XC94, ctx->r1) = ctx->r2;
L_8002D26C:
    // 0x8002D26C: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_8002D270:
    // 0x8002D270: beq         $s6, $zero, L_8002D288
    if (ctx->r22 == 0) {
        // 0x8002D274: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8002D288;
    }
    // 0x8002D274: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002D278: beq         $s6, $v0, L_8002D2A0
    if (ctx->r22 == ctx->r2) {
        // 0x8002D27C: lui         $a0, 0xF500
        ctx->r4 = S32(0XF500 << 16);
            goto L_8002D2A0;
    }
    // 0x8002D27C: lui         $a0, 0xF500
    ctx->r4 = S32(0XF500 << 16);
    // 0x8002D280: j           L_8002D344
    // 0x8002D284: nop

        goto L_8002D344;
    // 0x8002D284: nop

L_8002D288:
    // 0x8002D288: lui         $a0, 0xF500
    ctx->r4 = S32(0XF500 << 16);
    // 0x8002D28C: ori         $a0, $a0, 0x100
    ctx->r4 = ctx->r4 | 0X100;
    // 0x8002D290: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8002D294: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x8002D298: j           L_8002D2B0
    // 0x8002D29C: lui         $a1, 0x703
    ctx->r5 = S32(0X703 << 16);
        goto L_8002D2B0;
    // 0x8002D29C: lui         $a1, 0x703
    ctx->r5 = S32(0X703 << 16);
L_8002D2A0:
    // 0x8002D2A0: ori         $a0, $a0, 0x100
    ctx->r4 = ctx->r4 | 0X100;
    // 0x8002D2A4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8002D2A8: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x8002D2AC: lui         $a1, 0x73F
    ctx->r5 = S32(0X73F << 16);
L_8002D2B0:
    // 0x8002D2B0: ori         $a1, $a1, 0xC000
    ctx->r5 = ctx->r5 | 0XC000;
    // 0x8002D2B4: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x8002D2B8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D2BC: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8002D2C0: lui         $v1, 0xFD10
    ctx->r3 = S32(0XFD10 << 16);
    // 0x8002D2C4: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x8002D2C8: addiu       $v1, $v0, 0x10
    ctx->r3 = ADD32(ctx->r2, 0X10);
    // 0x8002D2CC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D2D0: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8002D2D4: lui         $v1, 0xE800
    ctx->r3 = S32(0XE800 << 16);
    // 0x8002D2D8: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8002D2DC: addiu       $v1, $v0, 0x18
    ctx->r3 = ADD32(ctx->r2, 0X18);
    // 0x8002D2E0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D2E4: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8002D2E8: lui         $v1, 0x700
    ctx->r3 = S32(0X700 << 16);
    // 0x8002D2EC: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x8002D2F0: addiu       $v1, $v0, 0x20
    ctx->r3 = ADD32(ctx->r2, 0X20);
    // 0x8002D2F4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D2F8: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8002D2FC: lui         $v1, 0xE600
    ctx->r3 = S32(0XE600 << 16);
    // 0x8002D300: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x8002D304: addiu       $v1, $v0, 0x28
    ctx->r3 = ADD32(ctx->r2, 0X28);
    // 0x8002D308: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D30C: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8002D310: lui         $v1, 0xF000
    ctx->r3 = S32(0XF000 << 16);
    // 0x8002D314: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x8002D318: addiu       $v1, $v0, 0x30
    ctx->r3 = ADD32(ctx->r2, 0X30);
    // 0x8002D31C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D320: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8002D324: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x8002D328: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x8002D32C: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x8002D330: sw          $a0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r4;
    // 0x8002D334: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x8002D338: sw          $a1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r5;
    // 0x8002D33C: sw          $v1, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r3;
    // 0x8002D340: sw          $zero, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = 0;
L_8002D344:
    // 0x8002D344: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8002D348: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8002D34C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8002D350: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8002D354: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8002D358: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8002D35C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8002D360: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8002D364: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002D368: jr          $ra
    // 0x8002D36C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8002D36C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800567B8_31BB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800567B8: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x800567BC: addu        $t0, $a1, $zero
    ctx->r8 = ADD32(ctx->r5, 0);
    // 0x800567C0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800567C4: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x800567C8: bgez        $t0, L_800567FC
    if (SIGNED(ctx->r8) >= 0) {
        // 0x800567CC: sll         $a2, $t0, 3
        ctx->r6 = S32(ctx->r8 << 3);
            goto L_800567FC;
    }
    // 0x800567CC: sll         $a2, $t0, 3
    ctx->r6 = S32(ctx->r8 << 3);
    // 0x800567D0: sb          $zero, 0x16($a3)
    MEM_B(0X16, ctx->r7) = 0;
    // 0x800567D4: sb          $zero, 0x11($a3)
    MEM_B(0X11, ctx->r7) = 0;
    // 0x800567D8: sb          $zero, 0x1E($a3)
    MEM_B(0X1E, ctx->r7) = 0;
    // 0x800567DC: sb          $zero, 0x19($a3)
    MEM_B(0X19, ctx->r7) = 0;
    // 0x800567E0: sb          $zero, 0x26($a3)
    MEM_B(0X26, ctx->r7) = 0;
    // 0x800567E4: sb          $zero, 0x21($a3)
    MEM_B(0X21, ctx->r7) = 0;
    // 0x800567E8: sb          $zero, 0x2E($a3)
    MEM_B(0X2E, ctx->r7) = 0;
    // 0x800567EC: sb          $zero, 0x29($a3)
    MEM_B(0X29, ctx->r7) = 0;
    // 0x800567F0: sb          $zero, 0x36($a3)
    MEM_B(0X36, ctx->r7) = 0;
    // 0x800567F4: j           L_80056994
    // 0x800567F8: sb          $zero, 0x31($a3)
    MEM_B(0X31, ctx->r7) = 0;
        goto L_80056994;
    // 0x800567F8: sb          $zero, 0x31($a3)
    MEM_B(0X31, ctx->r7) = 0;
L_800567FC:
    // 0x800567FC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80056800: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x80056804: lbu         $v1, -0x1750($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1750);
    // 0x80056808: addu        $a2, $a2, $a0
    ctx->r6 = ADD32(ctx->r6, ctx->r4);
    // 0x8005680C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80056810: addiu       $a1, $a1, -0x1A70
    ctx->r5 = ADD32(ctx->r5, -0X1A70);
    // 0x80056814: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80056818: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005681C: lb          $v1, 0x4F4($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X4F4);
    // 0x80056820: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80056824: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80056828: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005682C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80056830: sb          $v0, 0x11($a3)
    MEM_B(0X11, ctx->r7) = ctx->r2;
    // 0x80056834: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80056838: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x8005683C: lbu         $v1, -0x1750($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1750);
    // 0x80056840: lb          $a0, 0x4F5($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X4F5);
    // 0x80056844: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80056848: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005684C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80056850: addiu       $v1, $a1, 0x4
    ctx->r3 = ADD32(ctx->r5, 0X4);
    // 0x80056854: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80056858: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8005685C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80056860: sb          $v0, 0x19($a3)
    MEM_B(0X19, ctx->r7) = ctx->r2;
    // 0x80056864: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80056868: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x8005686C: lbu         $v1, -0x1750($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1750);
    // 0x80056870: lb          $a0, 0x4F6($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X4F6);
    // 0x80056874: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80056878: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005687C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80056880: addiu       $v1, $a1, 0x8
    ctx->r3 = ADD32(ctx->r5, 0X8);
    // 0x80056884: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80056888: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8005688C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80056890: sb          $v0, 0x21($a3)
    MEM_B(0X21, ctx->r7) = ctx->r2;
    // 0x80056894: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80056898: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x8005689C: lbu         $v1, -0x1750($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1750);
    // 0x800568A0: lb          $a0, 0x4F7($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X4F7);
    // 0x800568A4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800568A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800568AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800568B0: addiu       $v1, $a1, 0xC
    ctx->r3 = ADD32(ctx->r5, 0XC);
    // 0x800568B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800568B8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800568BC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x800568C0: sb          $v0, 0x29($a3)
    MEM_B(0X29, ctx->r7) = ctx->r2;
    // 0x800568C4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800568C8: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x800568CC: lbu         $v1, -0x1750($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1750);
    // 0x800568D0: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x800568D4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800568D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800568DC: lb          $v1, 0x4F8($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X4F8);
    // 0x800568E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800568E4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800568E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800568EC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x800568F0: lbu         $v1, 0x11($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X11);
    // 0x800568F4: sb          $v0, 0x31($a3)
    MEM_B(0X31, ctx->r7) = ctx->r2;
    // 0x800568F8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x800568FC: bnel        $v1, $v0, L_80056914
    if (ctx->r3 != ctx->r2) {
        // 0x80056900: sb          $zero, 0x16($a3)
        MEM_B(0X16, ctx->r7) = 0;
            goto L_80056914;
    }
    goto skip_0;
    // 0x80056900: sb          $zero, 0x16($a3)
    MEM_B(0X16, ctx->r7) = 0;
    skip_0:
    // 0x80056904: addiu       $v0, $zero, 0x58
    ctx->r2 = ADD32(0, 0X58);
    // 0x80056908: sb          $v0, 0x11($a3)
    MEM_B(0X11, ctx->r7) = ctx->r2;
    // 0x8005690C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80056910: sb          $v0, 0x16($a3)
    MEM_B(0X16, ctx->r7) = ctx->r2;
L_80056914:
    // 0x80056914: lbu         $v1, 0x19($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X19);
    // 0x80056918: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8005691C: bnel        $v1, $v0, L_80056934
    if (ctx->r3 != ctx->r2) {
        // 0x80056920: sb          $zero, 0x1E($a3)
        MEM_B(0X1E, ctx->r7) = 0;
            goto L_80056934;
    }
    goto skip_1;
    // 0x80056920: sb          $zero, 0x1E($a3)
    MEM_B(0X1E, ctx->r7) = 0;
    skip_1:
    // 0x80056924: addiu       $v0, $zero, 0x58
    ctx->r2 = ADD32(0, 0X58);
    // 0x80056928: sb          $v0, 0x19($a3)
    MEM_B(0X19, ctx->r7) = ctx->r2;
    // 0x8005692C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80056930: sb          $v0, 0x1E($a3)
    MEM_B(0X1E, ctx->r7) = ctx->r2;
L_80056934:
    // 0x80056934: lbu         $v1, 0x21($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X21);
    // 0x80056938: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8005693C: bnel        $v1, $v0, L_80056954
    if (ctx->r3 != ctx->r2) {
        // 0x80056940: sb          $zero, 0x26($a3)
        MEM_B(0X26, ctx->r7) = 0;
            goto L_80056954;
    }
    goto skip_2;
    // 0x80056940: sb          $zero, 0x26($a3)
    MEM_B(0X26, ctx->r7) = 0;
    skip_2:
    // 0x80056944: addiu       $v0, $zero, 0x58
    ctx->r2 = ADD32(0, 0X58);
    // 0x80056948: sb          $v0, 0x21($a3)
    MEM_B(0X21, ctx->r7) = ctx->r2;
    // 0x8005694C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80056950: sb          $v0, 0x26($a3)
    MEM_B(0X26, ctx->r7) = ctx->r2;
L_80056954:
    // 0x80056954: lbu         $v1, 0x29($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X29);
    // 0x80056958: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8005695C: bnel        $v1, $v0, L_80056974
    if (ctx->r3 != ctx->r2) {
        // 0x80056960: sb          $zero, 0x2E($a3)
        MEM_B(0X2E, ctx->r7) = 0;
            goto L_80056974;
    }
    goto skip_3;
    // 0x80056960: sb          $zero, 0x2E($a3)
    MEM_B(0X2E, ctx->r7) = 0;
    skip_3:
    // 0x80056964: addiu       $v0, $zero, 0x58
    ctx->r2 = ADD32(0, 0X58);
    // 0x80056968: sb          $v0, 0x29($a3)
    MEM_B(0X29, ctx->r7) = ctx->r2;
    // 0x8005696C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80056970: sb          $v0, 0x2E($a3)
    MEM_B(0X2E, ctx->r7) = ctx->r2;
L_80056974:
    // 0x80056974: lbu         $v1, 0x31($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X31);
    // 0x80056978: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8005697C: bnel        $v1, $v0, L_80056994
    if (ctx->r3 != ctx->r2) {
        // 0x80056980: sb          $zero, 0x36($a3)
        MEM_B(0X36, ctx->r7) = 0;
            goto L_80056994;
    }
    goto skip_4;
    // 0x80056980: sb          $zero, 0x36($a3)
    MEM_B(0X36, ctx->r7) = 0;
    skip_4:
    // 0x80056984: addiu       $v0, $zero, 0x58
    ctx->r2 = ADD32(0, 0X58);
    // 0x80056988: sb          $v0, 0x31($a3)
    MEM_B(0X31, ctx->r7) = ctx->r2;
    // 0x8005698C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80056990: sb          $v0, 0x36($a3)
    MEM_B(0X36, ctx->r7) = ctx->r2;
L_80056994:
    // 0x80056994: jr          $ra
    // 0x80056998: nop

    TRACE_RETURN()
    return;
    // 0x80056998: nop

;}
RECOMP_FUNC void func_800480A0_234A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800480A0: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x800480A4: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x800480A8: sw          $fp, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r30;
    // 0x800480AC: addu        $fp, $a2, $zero
    ctx->r30 = ADD32(ctx->r6, 0);
    // 0x800480B0: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x800480B4: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x800480B8: sw          $s6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r22;
    // 0x800480BC: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x800480C0: sw          $s7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r23;
    // 0x800480C4: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x800480C8: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x800480CC: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x800480D0: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x800480D4: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x800480D8: sw          $a0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r4;
    // 0x800480DC: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x800480E0: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x800480E4: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800480E8: sb          $zero, -0x7818($at)
    MEM_B(-0X7818, ctx->r1) = 0;
    // 0x800480EC: bne         $t8, $zero, L_80048148
    if (ctx->r24 != 0) {
        // 0x800480F0: addu        $s6, $zero, $zero
        ctx->r22 = ADD32(0, 0);
            goto L_80048148;
    }
    // 0x800480F0: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x800480F4: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x800480F8: lhu         $v0, 0x54($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0X54);
    // 0x800480FC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80048100: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x80048104: lhu         $v0, 0x56($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0X56);
    // 0x80048108: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8004810C: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x80048110: lhu         $v0, 0x58($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0X58);
    // 0x80048114: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80048118: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8004811C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80048120: jal         0x80031428
    // 0x80048124: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    func_80031428_C828(rdram, ctx);
        goto after_0;
    // 0x80048124: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    after_0:
    // 0x80048128: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x8004812C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80048130: jal         0x8004DD50
    // 0x80048134: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DD50_29150(rdram, ctx);
        goto after_1;
    // 0x80048134: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80048138: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x8004813C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80048140: jal         0x8004DD50
    // 0x80048144: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    func_8004DD50_29150(rdram, ctx);
        goto after_2;
    // 0x80048144: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    after_2:
L_80048148:
    // 0x80048148: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x8004814C: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80048150: jal         0x8004DD04
    // 0x80048154: addiu       $a1, $a1, -0x2340
    ctx->r5 = ADD32(ctx->r5, -0X2340);
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x80048154: addiu       $a1, $a1, -0x2340
    ctx->r5 = ADD32(ctx->r5, -0X2340);
    after_3:
    // 0x80048158: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8004815C: addiu       $a1, $a1, 0x47DC
    ctx->r5 = ADD32(ctx->r5, 0X47DC);
    // 0x80048160: jal         0x8004DD04
    // 0x80048164: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DD04_29104(rdram, ctx);
        goto after_4;
    // 0x80048164: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80048168: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    // 0x8004816C: lui         $s0, 0x801E
    ctx->r16 = S32(0X801E << 16);
    // 0x80048170: addiu       $s0, $s0, -0x7158
    ctx->r16 = ADD32(ctx->r16, -0X7158);
    // 0x80048174: jal         0x8004DD04
    // 0x80048178: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DD04_29104(rdram, ctx);
        goto after_5;
    // 0x80048178: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8004817C: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80048180: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80048184: jal         0x8009A3B4
    // 0x80048188: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80048188: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8004818C: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80048190: sh          $zero, -0x72DC($at)
    MEM_H(-0X72DC, ctx->r1) = 0;
    // 0x80048194: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80048198: sh          $zero, -0x26B8($at)
    MEM_H(-0X26B8, ctx->r1) = 0;
    // 0x8004819C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800481A0: sh          $zero, -0x6F98($at)
    MEM_H(-0X6F98, ctx->r1) = 0;
    // 0x800481A4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x800481A8: sh          $zero, 0x5730($at)
    MEM_H(0X5730, ctx->r1) = 0;
    // 0x800481AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800481B0: sh          $zero, 0x4980($at)
    MEM_H(0X4980, ctx->r1) = 0;
    // 0x800481B4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800481B8: sh          $zero, -0x6F9E($at)
    MEM_H(-0X6F9E, ctx->r1) = 0;
    // 0x800481BC: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x800481C0: sh          $zero, -0x2680($at)
    MEM_H(-0X2680, ctx->r1) = 0;
    // 0x800481C4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800481C8: sh          $zero, -0x39A8($at)
    MEM_H(-0X39A8, ctx->r1) = 0;
    // 0x800481CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800481D0: sh          $zero, 0x784C($at)
    MEM_H(0X784C, ctx->r1) = 0;
    // 0x800481D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800481D8: sh          $zero, 0x599C($at)
    MEM_H(0X599C, ctx->r1) = 0;
    // 0x800481DC: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800481E0: sh          $zero, -0x4230($at)
    MEM_H(-0X4230, ctx->r1) = 0;
    // 0x800481E4: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x800481E8: sh          $zero, -0x2660($at)
    MEM_H(-0X2660, ctx->r1) = 0;
L_800481EC:
    // 0x800481EC: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x800481F0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x800481F4: lhu         $a1, 0x47DC($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X47DC);
    // 0x800481F8: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x800481FC: lhu         $v1, -0x7156($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7156);
    // 0x80048200: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80048204: lhu         $a2, 0x47DE($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X47DE);
    // 0x80048208: lw          $v0, 0x88($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X88);
    // 0x8004820C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80048210: lhu         $a0, -0x7154($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X7154);
    // 0x80048214: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80048218: lhu         $a3, 0x47E0($a3)
    ctx->r7 = MEM_HU(ctx->r7, 0X47E0);
    // 0x8004821C: lw          $s5, 0x0($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X0);
    // 0x80048220: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80048224: lhu         $v0, -0x7158($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X7158);
    // 0x80048228: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x8004822C: subu        $a0, $a0, $a3
    ctx->r4 = SUB32(ctx->r4, ctx->r7);
    // 0x80048230: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80048234: sh          $v1, -0x35B8($at)
    MEM_H(-0X35B8, ctx->r1) = ctx->r3;
    // 0x80048238: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8004823C: sh          $a0, -0x35B6($at)
    MEM_H(-0X35B6, ctx->r1) = ctx->r4;
    // 0x80048240: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80048244: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80048248: sh          $v0, -0x35BA($at)
    MEM_H(-0X35BA, ctx->r1) = ctx->r2;
    // 0x8004824C: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x80048250: beq         $v0, $zero, L_80048354
    if (ctx->r2 == 0) {
        // 0x80048254: nop
    
            goto L_80048354;
    }
    // 0x80048254: nop

    // 0x80048258: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
    // 0x8004825C: addiu       $s1, $s5, 0x8
    ctx->r17 = ADD32(ctx->r21, 0X8);
    // 0x80048260: xori        $s7, $t8, 0x8000
    ctx->r23 = ctx->r24 ^ 0X8000;
L_80048264:
    // 0x80048264: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80048268: lhu         $v1, -0x2340($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X2340);
    // 0x8004826C: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x80048270: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80048274: sh          $v0, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r2;
    // 0x80048278: lhu         $v0, -0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X6);
    // 0x8004827C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80048280: sh          $v1, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r3;
    // 0x80048284: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80048288: lhu         $v1, -0x233C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X233C);
    // 0x8004828C: lhu         $v0, -0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X4);
    // 0x80048290: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80048294: sh          $v0, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r2;
    // 0x80048298: lhu         $v0, -0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X2);
    // 0x8004829C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800482A0: sh          $v1, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r3;
    // 0x800482A4: lw          $s3, 0x0($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X0);
    // 0x800482A8: lhu         $a1, 0x4($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X4);
    // 0x800482AC: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x800482B0: addiu       $t8, $t8, -0x35F0
    ctx->r24 = ADD32(ctx->r24, -0X35F0);
    // 0x800482B4: andi        $v0, $a1, 0xF0
    ctx->r2 = ctx->r5 & 0XF0;
    // 0x800482B8: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x800482BC: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x800482C0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x800482C4: jalr        $v0
    // 0x800482C8: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x800482C8: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_7:
    // 0x800482CC: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x800482D0: bne         $s4, $zero, L_800482E0
    if (ctx->r20 != 0) {
        // 0x800482D4: addiu       $s0, $s3, 0x4
        ctx->r16 = ADD32(ctx->r19, 0X4);
            goto L_800482E0;
    }
    // 0x800482D4: addiu       $s0, $s3, 0x4
    ctx->r16 = ADD32(ctx->r19, 0X4);
    // 0x800482D8: j           L_80048344
    // 0x800482DC: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
        goto L_80048344;
    // 0x800482DC: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
L_800482E0:
    // 0x800482E0: lw          $s2, 0x4($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X4);
L_800482E4:
    // 0x800482E4: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x800482E8: and         $v0, $v0, $s7
    ctx->r2 = ctx->r2 & ctx->r23;
    // 0x800482EC: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x800482F0: bnel        $v0, $zero, L_80048338
    if (ctx->r2 != 0) {
        // 0x800482F4: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_80048338;
    }
    goto skip_0;
    // 0x800482F4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_0:
    // 0x800482F8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800482FC: lhu         $v0, -0x233E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X233E);
    // 0x80048300: lhu         $v1, 0x0($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X0);
    // 0x80048304: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x80048308: sh          $v1, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r3;
    // 0x8004830C: lhu         $v1, -0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, -0X2);
    // 0x80048310: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80048314: sh          $v0, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r2;
    // 0x80048318: lhu         $a1, 0x0($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X0);
    // 0x8004831C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80048320: jal         0x80041910
    // 0x80048324: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_80041910_1CD10(rdram, ctx);
        goto after_8;
    // 0x80048324: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_8:
    // 0x80048328: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    // 0x8004832C: bne         $s6, $zero, L_8004835C
    if (ctx->r22 != 0) {
        // 0x80048330: nop
    
            goto L_8004835C;
    }
    // 0x80048330: nop

    // 0x80048334: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80048338:
    // 0x80048338: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x8004833C: bne         $s2, $zero, L_800482E4
    if (ctx->r18 != 0) {
        // 0x80048340: addiu       $s3, $s3, 0x8
        ctx->r19 = ADD32(ctx->r19, 0X8);
            goto L_800482E4;
    }
    // 0x80048340: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
L_80048344:
    // 0x80048344: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x80048348: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8004834C: bne         $v0, $zero, L_80048264
    if (ctx->r2 != 0) {
        // 0x80048350: addiu       $s5, $s5, 0x10
        ctx->r21 = ADD32(ctx->r21, 0X10);
            goto L_80048264;
    }
    // 0x80048350: addiu       $s5, $s5, 0x10
    ctx->r21 = ADD32(ctx->r21, 0X10);
L_80048354:
    // 0x80048354: beq         $s6, $zero, L_80048464
    if (ctx->r22 == 0) {
        // 0x80048358: nop
    
            goto L_80048464;
    }
    // 0x80048358: nop

L_8004835C:
    // 0x8004835C: lui         $a2, 0x801E
    ctx->r6 = S32(0X801E << 16);
    // 0x80048360: addiu       $a2, $a2, -0x7158
    ctx->r6 = ADD32(ctx->r6, -0X7158);
    // 0x80048364: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x80048368: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x8004836C: lhu         $a3, 0x5730($a3)
    ctx->r7 = MEM_HU(ctx->r7, 0X5730);
    // 0x80048370: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80048374: lhu         $v1, -0x7154($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7154);
    // 0x80048378: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x8004837C: lhu         $t0, -0x6F9E($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X6F9E);
    // 0x80048380: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80048384: lhu         $a0, -0x7156($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X7156);
    // 0x80048388: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x8004838C: lhu         $t1, 0x4980($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X4980);
    // 0x80048390: lui         $t2, 0x801E
    ctx->r10 = S32(0X801E << 16);
    // 0x80048394: lhu         $t2, -0x72DC($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X72DC);
    // 0x80048398: lui         $t3, 0x8022
    ctx->r11 = S32(0X8022 << 16);
    // 0x8004839C: lhu         $t3, -0x26B8($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X26B8);
    // 0x800483A0: lui         $t4, 0x801B
    ctx->r12 = S32(0X801B << 16);
    // 0x800483A4: lhu         $t4, -0x6F98($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X6F98);
    // 0x800483A8: lui         $t5, 0x8022
    ctx->r13 = S32(0X8022 << 16);
    // 0x800483AC: lhu         $t5, -0x2680($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X2680);
    // 0x800483B0: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x800483B4: lhu         $t6, -0x39A8($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X39A8);
    // 0x800483B8: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x800483BC: lhu         $t7, 0x784C($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X784C);
    // 0x800483C0: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x800483C4: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800483C8: sh          $zero, -0x72DC($at)
    MEM_H(-0X72DC, ctx->r1) = 0;
    // 0x800483CC: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x800483D0: sh          $zero, -0x26B8($at)
    MEM_H(-0X26B8, ctx->r1) = 0;
    // 0x800483D4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800483D8: sh          $zero, -0x6F98($at)
    MEM_H(-0X6F98, ctx->r1) = 0;
    // 0x800483DC: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x800483E0: sh          $zero, -0x2680($at)
    MEM_H(-0X2680, ctx->r1) = 0;
    // 0x800483E4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800483E8: sh          $zero, -0x39A8($at)
    MEM_H(-0X39A8, ctx->r1) = 0;
    // 0x800483EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800483F0: sh          $zero, 0x784C($at)
    MEM_H(0X784C, ctx->r1) = 0;
    // 0x800483F4: addu        $t8, $a1, $zero
    ctx->r24 = ADD32(ctx->r5, 0);
    // 0x800483F8: addiu       $t8, $t8, 0x1
    ctx->r24 = ADD32(ctx->r24, 0X1);
    // 0x800483FC: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80048400: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x80048404: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x80048408: slti        $a1, $a1, 0x8
    ctx->r5 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x8004840C: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
    // 0x80048410: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x80048414: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80048418: sh          $v1, -0x7154($at)
    MEM_H(-0X7154, ctx->r1) = ctx->r3;
    // 0x8004841C: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80048420: sh          $a0, -0x7156($at)
    MEM_H(-0X7156, ctx->r1) = ctx->r4;
    // 0x80048424: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80048428: sh          $t2, 0x5730($at)
    MEM_H(0X5730, ctx->r1) = ctx->r10;
    // 0x8004842C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80048430: sh          $t3, 0x4980($at)
    MEM_H(0X4980, ctx->r1) = ctx->r11;
    // 0x80048434: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80048438: sh          $t4, -0x6F9E($at)
    MEM_H(-0X6F9E, ctx->r1) = ctx->r12;
    // 0x8004843C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80048440: sh          $t5, 0x599C($at)
    MEM_H(0X599C, ctx->r1) = ctx->r13;
    // 0x80048444: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80048448: sh          $t6, -0x4230($at)
    MEM_H(-0X4230, ctx->r1) = ctx->r14;
    // 0x8004844C: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80048450: sh          $t7, -0x2660($at)
    MEM_H(-0X2660, ctx->r1) = ctx->r15;
    // 0x80048454: bne         $a1, $zero, L_800481EC
    if (ctx->r5 != 0) {
        // 0x80048458: lui         $v0, 0x8000
        ctx->r2 = S32(0X8000 << 16);
            goto L_800481EC;
    }
    // 0x80048458: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x8004845C: j           L_80048664
    // 0x80048460: nop

        goto L_80048664;
    // 0x80048460: nop

L_80048464:
    // 0x80048464: lh          $a3, 0x38($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X38);
    // 0x80048468: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x8004846C: lh          $a1, -0x7158($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X7158);
    // 0x80048470: lh          $a2, 0x3C($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X3C);
    // 0x80048474: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80048478: lh          $v1, -0x7154($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7154);
    // 0x8004847C: lh          $a0, 0x3A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X3A);
    // 0x80048480: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80048484: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x80048488: subu        $a3, $a3, $a1
    ctx->r7 = SUB32(ctx->r7, ctx->r5);
    // 0x8004848C: subu        $a2, $a2, $v1
    ctx->r6 = SUB32(ctx->r6, ctx->r3);
    // 0x80048490: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80048494: sltiu       $v0, $a3, 0x1
    ctx->r2 = ctx->r7 < 0X1 ? 1 : 0;
    // 0x80048498: sltiu       $v1, $a2, 0x1
    ctx->r3 = ctx->r6 < 0X1 ? 1 : 0;
    // 0x8004849C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800484A0: beq         $v0, $zero, L_800484B0
    if (ctx->r2 == 0) {
        // 0x800484A4: nop
    
            goto L_800484B0;
    }
    // 0x800484A4: nop

    // 0x800484A8: beq         $a0, $zero, L_80048614
    if (ctx->r4 == 0) {
        // 0x800484AC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80048614;
    }
    // 0x800484AC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_800484B0:
    // 0x800484B0: bgez        $a3, L_800484BC
    if (SIGNED(ctx->r7) >= 0) {
        // 0x800484B4: addu        $v1, $a3, $zero
        ctx->r3 = ADD32(ctx->r7, 0);
            goto L_800484BC;
    }
    // 0x800484B4: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x800484B8: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_800484BC:
    // 0x800484BC: bltz        $a2, L_800484D4
    if (SIGNED(ctx->r6) < 0) {
        // 0x800484C0: slt         $v0, $a2, $v1
        ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_800484D4;
    }
    // 0x800484C0: slt         $v0, $a2, $v1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800484C4: beq         $v0, $zero, L_80048528
    if (ctx->r2 == 0) {
        // 0x800484C8: nop
    
            goto L_80048528;
    }
    // 0x800484C8: nop

    // 0x800484CC: j           L_800484F0
    // 0x800484D0: nop

        goto L_800484F0;
    // 0x800484D0: nop

L_800484D4:
    // 0x800484D4: negu        $v0, $a2
    ctx->r2 = SUB32(0, ctx->r6);
    // 0x800484D8: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800484DC: beq         $v0, $zero, L_80048528
    if (ctx->r2 == 0) {
        // 0x800484E0: nop
    
            goto L_80048528;
    }
    // 0x800484E0: nop

    // 0x800484E4: bgez        $a3, L_800484F0
    if (SIGNED(ctx->r7) >= 0) {
        // 0x800484E8: addu        $v1, $a3, $zero
        ctx->r3 = ADD32(ctx->r7, 0);
            goto L_800484F0;
    }
    // 0x800484E8: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x800484EC: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_800484F0:
    // 0x800484F0: bltz        $a0, L_80048508
    if (SIGNED(ctx->r4) < 0) {
        // 0x800484F4: slt         $v0, $a0, $v1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_80048508;
    }
    // 0x800484F4: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800484F8: beq         $v0, $zero, L_8004856C
    if (ctx->r2 == 0) {
        // 0x800484FC: nop
    
            goto L_8004856C;
    }
    // 0x800484FC: nop

    // 0x80048500: j           L_80048518
    // 0x80048504: nop

        goto L_80048518;
    // 0x80048504: nop

L_80048508:
    // 0x80048508: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
    // 0x8004850C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80048510: beq         $v0, $zero, L_8004856C
    if (ctx->r2 == 0) {
        // 0x80048514: nop
    
            goto L_8004856C;
    }
    // 0x80048514: nop

L_80048518:
    // 0x80048518: blez        $a3, L_80048578
    if (SIGNED(ctx->r7) <= 0) {
        // 0x8004851C: addiu       $s0, $zero, 0x2
        ctx->r16 = ADD32(0, 0X2);
            goto L_80048578;
    }
    // 0x8004851C: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x80048520: j           L_80048578
    // 0x80048524: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80048578;
    // 0x80048524: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80048528:
    // 0x80048528: bgez        $a2, L_80048534
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8004852C: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_80048534;
    }
    // 0x8004852C: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x80048530: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_80048534:
    // 0x80048534: bltz        $a0, L_8004854C
    if (SIGNED(ctx->r4) < 0) {
        // 0x80048538: slt         $v0, $a0, $v1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8004854C;
    }
    // 0x80048538: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8004853C: beq         $v0, $zero, L_8004856C
    if (ctx->r2 == 0) {
        // 0x80048540: nop
    
            goto L_8004856C;
    }
    // 0x80048540: nop

    // 0x80048544: j           L_8004855C
    // 0x80048548: nop

        goto L_8004855C;
    // 0x80048548: nop

L_8004854C:
    // 0x8004854C: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
    // 0x80048550: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80048554: beq         $v0, $zero, L_8004856C
    if (ctx->r2 == 0) {
        // 0x80048558: nop
    
            goto L_8004856C;
    }
    // 0x80048558: nop

L_8004855C:
    // 0x8004855C: blez        $a2, L_80048578
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80048560: addiu       $s0, $zero, 0x4
        ctx->r16 = ADD32(0, 0X4);
            goto L_80048578;
    }
    // 0x80048560: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x80048564: j           L_80048578
    // 0x80048568: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
        goto L_80048578;
    // 0x80048568: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
L_8004856C:
    // 0x8004856C: blez        $a0, L_80048578
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80048570: addiu       $s0, $zero, 0x6
        ctx->r16 = ADD32(0, 0X6);
            goto L_80048578;
    }
    // 0x80048570: addiu       $s0, $zero, 0x6
    ctx->r16 = ADD32(0, 0X6);
    // 0x80048574: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
L_80048578:
    // 0x80048578: beq         $a3, $zero, L_800485AC
    if (ctx->r7 == 0) {
        // 0x8004857C: nop
    
            goto L_800485AC;
    }
    // 0x8004857C: nop

    // 0x80048580: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80048584: lh          $v0, -0x7158($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7158);
    // 0x80048588: blezl       $a3, L_80048594
    if (SIGNED(ctx->r7) <= 0) {
        // 0x8004858C: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_80048594;
    }
    goto skip_1;
    // 0x8004858C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    skip_1:
    // 0x80048590: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
L_80048594:
    // 0x80048594: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80048598: blez        $a3, L_800485A8
    if (SIGNED(ctx->r7) <= 0) {
        // 0x8004859C: sw          $v0, 0x0($fp)
        MEM_W(0X0, ctx->r30) = ctx->r2;
            goto L_800485A8;
    }
    // 0x8004859C: sw          $v0, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r2;
    // 0x800485A0: j           L_800485AC
    // 0x800485A4: ori         $s0, $s0, 0x100
    ctx->r16 = ctx->r16 | 0X100;
        goto L_800485AC;
    // 0x800485A4: ori         $s0, $s0, 0x100
    ctx->r16 = ctx->r16 | 0X100;
L_800485A8:
    // 0x800485A8: ori         $s0, $s0, 0x200
    ctx->r16 = ctx->r16 | 0X200;
L_800485AC:
    // 0x800485AC: beq         $a2, $zero, L_800485E0
    if (ctx->r6 == 0) {
        // 0x800485B0: nop
    
            goto L_800485E0;
    }
    // 0x800485B0: nop

    // 0x800485B4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800485B8: lh          $v0, -0x7154($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7154);
    // 0x800485BC: blezl       $a2, L_800485C8
    if (SIGNED(ctx->r6) <= 0) {
        // 0x800485C0: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_800485C8;
    }
    goto skip_2;
    // 0x800485C0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    skip_2:
    // 0x800485C4: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
L_800485C8:
    // 0x800485C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800485CC: blez        $a2, L_800485DC
    if (SIGNED(ctx->r6) <= 0) {
        // 0x800485D0: sw          $v0, 0x8($fp)
        MEM_W(0X8, ctx->r30) = ctx->r2;
            goto L_800485DC;
    }
    // 0x800485D0: sw          $v0, 0x8($fp)
    MEM_W(0X8, ctx->r30) = ctx->r2;
    // 0x800485D4: j           L_800485E0
    // 0x800485D8: ori         $s0, $s0, 0x400
    ctx->r16 = ctx->r16 | 0X400;
        goto L_800485E0;
    // 0x800485D8: ori         $s0, $s0, 0x400
    ctx->r16 = ctx->r16 | 0X400;
L_800485DC:
    // 0x800485DC: ori         $s0, $s0, 0x800
    ctx->r16 = ctx->r16 | 0X800;
L_800485E0:
    // 0x800485E0: beq         $a0, $zero, L_80048614
    if (ctx->r4 == 0) {
        // 0x800485E4: nop
    
            goto L_80048614;
    }
    // 0x800485E4: nop

    // 0x800485E8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800485EC: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x800485F0: blezl       $a0, L_800485FC
    if (SIGNED(ctx->r4) <= 0) {
        // 0x800485F4: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_800485FC;
    }
    goto skip_3;
    // 0x800485F4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    skip_3:
    // 0x800485F8: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
L_800485FC:
    // 0x800485FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80048600: blez        $a0, L_80048610
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80048604: sw          $v0, 0x4($fp)
        MEM_W(0X4, ctx->r30) = ctx->r2;
            goto L_80048610;
    }
    // 0x80048604: sw          $v0, 0x4($fp)
    MEM_W(0X4, ctx->r30) = ctx->r2;
    // 0x80048608: j           L_80048614
    // 0x8004860C: ori         $s0, $s0, 0x1000
    ctx->r16 = ctx->r16 | 0X1000;
        goto L_80048614;
    // 0x8004860C: ori         $s0, $s0, 0x1000
    ctx->r16 = ctx->r16 | 0X1000;
L_80048610:
    // 0x80048610: ori         $s0, $s0, 0x2000
    ctx->r16 = ctx->r16 | 0X2000;
L_80048614:
    // 0x80048614: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x80048618: bne         $t8, $zero, L_80048664
    if (ctx->r24 != 0) {
        // 0x8004861C: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_80048664;
    }
    // 0x8004861C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x80048620: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80048624: lhu         $v0, 0x30($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X30);
    // 0x80048628: lhu         $v1, 0x32($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X32);
    // 0x8004862C: lhu         $a2, 0x34($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X34);
    // 0x80048630: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80048634: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80048638: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x8004863C: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x80048640: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x80048644: sh          $v1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r3;
    // 0x80048648: jal         0x80031600
    // 0x8004864C: sh          $a2, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r6;
    func_80031600_CA00(rdram, ctx);
        goto after_9;
    // 0x8004864C: sh          $a2, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r6;
    after_9:
    // 0x80048650: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x80048654: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80048658: jal         0x8004DD50
    // 0x8004865C: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    func_8004DD50_29150(rdram, ctx);
        goto after_10;
    // 0x8004865C: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    after_10:
    // 0x80048660: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_80048664:
    // 0x80048664: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x80048668: lw          $fp, 0x88($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X88);
    // 0x8004866C: lw          $s7, 0x84($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X84);
    // 0x80048670: lw          $s6, 0x80($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X80);
    // 0x80048674: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x80048678: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x8004867C: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x80048680: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x80048684: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x80048688: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x8004868C: jr          $ra
    // 0x80048690: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    TRACE_RETURN()
    return;
    // 0x80048690: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_8008AEA0_662A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008AEA0: bne         $a0, $zero, L_8008AEB0
    if (ctx->r4 != 0) {
        // 0x8008AEA4: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_8008AEB0;
    }
    // 0x8008AEA4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008AEA8: j           L_8008AF08
    // 0x8008AEAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8008AF08;
    // 0x8008AEAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8008AEB0:
    // 0x8008AEB0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8008AEB4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008AEB8: lw          $v0, 0x4F84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F84);
    // 0x8008AEBC: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008AEC0: lw          $v1, 0x4F8C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4F8C);
    // 0x8008AEC4: blez        $v0, L_8008AF04
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8008AEC8: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_8008AF04;
    }
    // 0x8008AEC8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8008AECC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8008AED0: addiu       $v1, $v1, 0xBE
    ctx->r3 = ADD32(ctx->r3, 0XBE);
L_8008AED4:
    // 0x8008AED4: lw          $v0, -0x7A($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X7A);
    // 0x8008AED8: bne         $v0, $a0, L_8008AEEC
    if (ctx->r2 != ctx->r4) {
        // 0x8008AEDC: nop
    
            goto L_8008AEEC;
    }
    // 0x8008AEDC: nop

    // 0x8008AEE0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8008AEE4: sh          $a1, -0xE($v1)
    MEM_H(-0XE, ctx->r3) = ctx->r5;
    // 0x8008AEE8: sb          $t0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r8;
L_8008AEEC:
    // 0x8008AEEC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008AEF0: lw          $v0, 0x4F84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F84);
    // 0x8008AEF4: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8008AEF8: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8008AEFC: bne         $v0, $zero, L_8008AED4
    if (ctx->r2 != 0) {
        // 0x8008AF00: addiu       $v1, $v1, 0x13C
        ctx->r3 = ADD32(ctx->r3, 0X13C);
            goto L_8008AED4;
    }
    // 0x8008AF00: addiu       $v1, $v1, 0x13C
    ctx->r3 = ADD32(ctx->r3, 0X13C);
L_8008AF04:
    // 0x8008AF04: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
L_8008AF08:
    // 0x8008AF08: jr          $ra
    // 0x8008AF0C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8008AF0C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8003B8FC_16CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B8FC: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8003B900: lhu         $v1, -0x2380($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X2380);
    // 0x8003B904: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B908: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B90C: sltiu       $v0, $v1, 0x100
    ctx->r2 = ctx->r3 < 0X100 ? 1 : 0;
    // 0x8003B910: bne         $v0, $zero, L_8003B920
    if (ctx->r2 != 0) {
        // 0x8003B914: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8003B920;
    }
    // 0x8003B914: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8003B918: j           L_8003B96C
    // 0x8003B91C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
        goto L_8003B96C;
    // 0x8003B91C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_8003B920:
    // 0x8003B920: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x8003B924: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x8003B928: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8003B92C: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8003B930: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8003B934: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8003B938: sw          $s0, 0x480($at)
    MEM_W(0X480, ctx->r1) = ctx->r16;
    // 0x8003B93C: jal         0x8009A2B0
    // 0x8003B940: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x8003B940: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8003B944: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8003B948: lhu         $v1, -0x2380($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X2380);
    // 0x8003B94C: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8003B950: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8003B954: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8003B958: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x8003B95C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8003B960: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8003B964: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8003B968: sh          $v1, -0x2380($at)
    MEM_H(-0X2380, ctx->r1) = ctx->r3;
L_8003B96C:
    // 0x8003B96C: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8003B970: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8003B974: addiu       $v0, $v0, 0x1C
    ctx->r2 = ADD32(ctx->r2, 0X1C);
    // 0x8003B978: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8003B97C: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8003B980: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x8003B984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B988: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003B98C: jr          $ra
    // 0x8003B990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8003B990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006E3E0_497E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006E3E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006E3E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006E3E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006E3EC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8006E3F0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8006E3F4: lhu         $s1, 0x11C($s0)
    ctx->r17 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006E3F8: lhu         $a0, 0x124($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X124);
    // 0x8006E3FC: lhu         $v0, 0x126($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X126);
    // 0x8006E400: lhu         $v1, 0x12C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X12C);
    // 0x8006E404: lhu         $a1, 0x12E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X12E);
    // 0x8006E408: lhu         $a2, 0x132($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X132);
    // 0x8006E40C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8006E410: lhu         $v0, 0x138($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X138);
    // 0x8006E414: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8006E418: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x8006E41C: lhu         $v1, 0x13A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X13A);
    // 0x8006E420: lhu         $a1, 0x13C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X13C);
    // 0x8006E424: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8006E428: lhu         $a0, 0x130($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X130);
    // 0x8006E42C: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8006E430: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8006E434: or          $a0, $a0, $a2
    ctx->r4 = ctx->r4 | ctx->r6;
    // 0x8006E438: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8006E43C: and         $v0, $s1, $v0
    ctx->r2 = ctx->r17 & ctx->r2;
    // 0x8006E440: beq         $v0, $zero, L_8006E578
    if (ctx->r2 == 0) {
        // 0x8006E444: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006E578;
    }
    // 0x8006E444: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006E448: jal         0x8006CC14
    // 0x8006E44C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8006CC14_48014(rdram, ctx);
        goto after_0;
    // 0x8006E44C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x8006E450: bnel        $v0, $zero, L_8006E57C
    if (ctx->r2 != 0) {
        // 0x8006E454: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_8006E57C;
    }
    goto skip_0;
    // 0x8006E454: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_0:
    // 0x8006E458: lhu         $v1, 0x11E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11E);
    // 0x8006E45C: lhu         $v0, 0x138($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X138);
    // 0x8006E460: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006E464: beq         $v0, $zero, L_8006E47C
    if (ctx->r2 == 0) {
        // 0x8006E468: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006E47C;
    }
    // 0x8006E468: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006E46C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8006E470: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006E474: j           L_8006E480
    // 0x8006E478: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8006E480;
    // 0x8006E478: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006E47C:
    // 0x8006E47C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8006E480:
    // 0x8006E480: bne         $v1, $zero, L_8006E580
    if (ctx->r3 != 0) {
        // 0x8006E484: nop
    
            goto L_8006E580;
    }
    // 0x8006E484: nop

    // 0x8006E488: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006E48C: lhu         $v0, 0x124($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X124);
    // 0x8006E490: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006E494: beql        $v0, $zero, L_8006E4C0
    if (ctx->r2 == 0) {
        // 0x8006E498: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8006E4C0;
    }
    goto skip_1;
    // 0x8006E498: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_1:
    // 0x8006E49C: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006E4A0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006E4A4: beq         $v0, $zero, L_8006E4BC
    if (ctx->r2 == 0) {
        // 0x8006E4A8: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006E4BC;
    }
    // 0x8006E4A8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006E4AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006E4B0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006E4B4: j           L_8006E4C0
    // 0x8006E4B8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8006E4C0;
    // 0x8006E4B8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006E4BC:
    // 0x8006E4BC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8006E4C0:
    // 0x8006E4C0: bne         $v1, $zero, L_8006E580
    if (ctx->r3 != 0) {
        // 0x8006E4C4: nop
    
            goto L_8006E580;
    }
    // 0x8006E4C4: nop

    // 0x8006E4C8: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006E4CC: lhu         $v0, 0x126($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X126);
    // 0x8006E4D0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006E4D4: beql        $v0, $zero, L_8006E504
    if (ctx->r2 == 0) {
        // 0x8006E4D8: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8006E504;
    }
    goto skip_2;
    // 0x8006E4D8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_2:
    // 0x8006E4DC: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006E4E0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006E4E4: beq         $v0, $zero, L_8006E500
    if (ctx->r2 == 0) {
        // 0x8006E4E8: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006E500;
    }
    // 0x8006E4E8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006E4EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006E4F0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006E4F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006E4F8: j           L_8006E504
    // 0x8006E4FC: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
        goto L_8006E504;
    // 0x8006E4FC: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
L_8006E500:
    // 0x8006E500: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8006E504:
    // 0x8006E504: bne         $v1, $zero, L_8006E580
    if (ctx->r3 != 0) {
        // 0x8006E508: nop
    
            goto L_8006E580;
    }
    // 0x8006E508: nop

    // 0x8006E50C: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006E510: lhu         $v0, 0x126($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X126);
    // 0x8006E514: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006E518: beq         $v0, $zero, L_8006E548
    if (ctx->r2 == 0) {
        // 0x8006E51C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006E548;
    }
    // 0x8006E51C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006E520: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006E524: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006E528: bne         $v0, $zero, L_8006E548
    if (ctx->r2 != 0) {
        // 0x8006E52C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8006E548;
    }
    // 0x8006E52C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006E530: lbu         $v1, 0x112($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X112);
    // 0x8006E534: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8006E538: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006E53C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006E540: sb          $v0, 0x112($s0)
    MEM_B(0X112, ctx->r16) = ctx->r2;
    // 0x8006E544: sb          $v1, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r3;
L_8006E548:
    // 0x8006E548: bne         $a0, $zero, L_8006E580
    if (ctx->r4 != 0) {
        // 0x8006E54C: nop
    
            goto L_8006E580;
    }
    // 0x8006E54C: nop

    // 0x8006E550: lhu         $v0, 0x130($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X130);
    // 0x8006E554: lhu         $v1, 0x132($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X132);
    // 0x8006E558: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8006E55C: and         $v1, $s1, $v0
    ctx->r3 = ctx->r17 & ctx->r2;
    // 0x8006E560: beql        $v1, $v0, L_8006E57C
    if (ctx->r3 == ctx->r2) {
        // 0x8006E564: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_8006E57C;
    }
    goto skip_3;
    // 0x8006E564: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_3:
    // 0x8006E568: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006E56C: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x8006E570: bne         $v0, $zero, L_8006E580
    if (ctx->r2 != 0) {
        // 0x8006E574: nop
    
            goto L_8006E580;
    }
    // 0x8006E574: nop

L_8006E578:
    // 0x8006E578: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8006E57C:
    // 0x8006E57C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006E580:
    // 0x8006E580: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8006E584: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8006E588: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006E58C: jr          $ra
    // 0x8006E590: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8006E590: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003D128_18528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003D128: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003D12C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8003D130: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8003D134: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003D138: lb          $v1, 0x1($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X1);
    // 0x8003D13C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8003D140: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8003D144: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8003D148: beq         $v0, $zero, L_8003D5FC
    if (ctx->r2 == 0) {
        // 0x8003D14C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8003D5FC;
    }
    // 0x8003D14C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8003D150: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8003D154: addu        $at, $at, $v0
    gpr jr_addend_8003D15C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8003D158: lw          $v0, 0x1E48($at)
    ctx->r2 = ADD32(ctx->r1, 0X1E48);
    // 0x8003D15C: jr          $v0
    // 0x8003D160: nop

    switch (jr_addend_8003D15C >> 2) {
        case 0: goto L_8003D164; break;
        case 1: goto L_8003D2AC; break;
        case 2: goto L_8003D3CC; break;
        case 3: goto L_8003D44C; break;
        case 4: goto L_8003D460; break;
        case 5: goto L_8003D484; break;
        case 6: goto L_8003D564; break;
        case 7: goto L_8003D59C; break;
        default: switch_error(__func__, 0x8003D15C, 0x800D1E48);
    }
    // 0x8003D160: nop

L_8003D164:
    // 0x8003D164: lbu         $v0, 0xBD($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XBD);
    // 0x8003D168: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8003D16C: lbu         $v1, -0x7388($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X7388);
    // 0x8003D170: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D174: sb          $zero, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = 0;
    // 0x8003D178: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D17C: sh          $zero, -0x3E38($at)
    MEM_H(-0X3E38, ctx->r1) = 0;
    // 0x8003D180: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8003D184: bne         $v1, $zero, L_8003D1A8
    if (ctx->r3 != 0) {
        // 0x8003D188: sb          $v0, 0xBD($a0)
        MEM_B(0XBD, ctx->r4) = ctx->r2;
            goto L_8003D1A8;
    }
    // 0x8003D188: sb          $v0, 0xBD($a0)
    MEM_B(0XBD, ctx->r4) = ctx->r2;
    // 0x8003D18C: jal         0x80036E48
    // 0x8003D190: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x8003D190: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_0:
    // 0x8003D194: jal         0x80036B58
    // 0x8003D198: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_1;
    // 0x8003D198: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x8003D19C: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8003D1A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003D1A4: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_8003D1A8:
    // 0x8003D1A8: jal         0x80076A3C
    // 0x8003D1AC: nop

    func_80076A3C_51E3C(rdram, ctx);
        goto after_2;
    // 0x8003D1AC: nop

    after_2:
    // 0x8003D1B0: jal         0x8004C3C0
    // 0x8003D1B4: nop

    func_8004C3C0_277C0(rdram, ctx);
        goto after_3;
    // 0x8003D1B4: nop

    after_3:
    // 0x8003D1B8: jal         0x8006EF7C
    // 0x8003D1BC: nop

    func_8006EF7C_4A37C(rdram, ctx);
        goto after_4;
    // 0x8003D1BC: nop

    after_4:
    // 0x8003D1C0: jal         0x80053CBC
    // 0x8003D1C4: nop

    func_80053CBC_2F0BC(rdram, ctx);
        goto after_5;
    // 0x8003D1C4: nop

    after_5:
    // 0x8003D1C8: jal         0x8004C05C
    // 0x8003D1CC: nop

    func_8004C05C_2745C(rdram, ctx);
        goto after_6;
    // 0x8003D1CC: nop

    after_6:
    // 0x8003D1D0: jal         0x8004BFB0
    // 0x8003D1D4: nop

    func_8004BFB0_273B0(rdram, ctx);
        goto after_7;
    // 0x8003D1D4: nop

    after_7:
    // 0x8003D1D8: jal         0x8004C1AC
    // 0x8003D1DC: nop

    func_8004C1AC_275AC(rdram, ctx);
        goto after_8;
    // 0x8003D1DC: nop

    after_8:
    // 0x8003D1E0: jal         0x8004C270
    // 0x8003D1E4: nop

    func_8004C270_27670(rdram, ctx);
        goto after_9;
    // 0x8003D1E4: nop

    after_9:
    // 0x8003D1E8: jal         0x8004C45C
    // 0x8003D1EC: nop

    func_8004C45C_2785C(rdram, ctx);
        goto after_10;
    // 0x8003D1EC: nop

    after_10:
    // 0x8003D1F0: jal         0x800472F0
    // 0x8003D1F4: nop

    func_800472F0_226F0(rdram, ctx);
        goto after_11;
    // 0x8003D1F4: nop

    after_11:
    // 0x8003D1F8: jal         0x80069D44
    // 0x8003D1FC: nop

    func_80069D44_45144(rdram, ctx);
        goto after_12;
    // 0x8003D1FC: nop

    after_12:
    // 0x8003D200: jal         0x8004C108
    // 0x8003D204: nop

    func_8004C108_27508(rdram, ctx);
        goto after_13;
    // 0x8003D204: nop

    after_13:
    // 0x8003D208: jal         0x8004C314
    // 0x8003D20C: nop

    func_8004C314_27714(rdram, ctx);
        goto after_14;
    // 0x8003D20C: nop

    after_14:
    // 0x8003D210: jal         0x80033950
    // 0x8003D214: nop

    func_80033950_ED50(rdram, ctx);
        goto after_15;
    // 0x8003D214: nop

    after_15:
    // 0x8003D218: jal         0x800521A8
    // 0x8003D21C: nop

    func_800521A8_2D5A8(rdram, ctx);
        goto after_16;
    // 0x8003D21C: nop

    after_16:
    // 0x8003D220: jal         0x800719B4
    // 0x8003D224: nop

    func_800719B4_4CDB4(rdram, ctx);
        goto after_17;
    // 0x8003D224: nop

    after_17:
    // 0x8003D228: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003D22C: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8003D230: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8003D234: bne         $v1, $v0, L_8003D274
    if (ctx->r3 != ctx->r2) {
        // 0x8003D238: lui         $v0, 0xFFFF
        ctx->r2 = S32(0XFFFF << 16);
            goto L_8003D274;
    }
    // 0x8003D238: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8003D23C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003D240: lw          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BC8);
    // 0x8003D244: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8003D248: lui         $v1, 0x302
    ctx->r3 = S32(0X302 << 16);
    // 0x8003D24C: xor         $v1, $a0, $v1
    ctx->r3 = ctx->r4 ^ ctx->r3;
    // 0x8003D250: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x8003D254: lui         $v0, 0x130B
    ctx->r2 = S32(0X130B << 16);
    // 0x8003D258: xor         $v0, $a0, $v0
    ctx->r2 = ctx->r4 ^ ctx->r2;
    // 0x8003D25C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8003D260: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8003D264: beq         $v1, $zero, L_8003D27C
    if (ctx->r3 == 0) {
        // 0x8003D268: lui         $v0, 0x1B06
        ctx->r2 = S32(0X1B06 << 16);
            goto L_8003D27C;
    }
    // 0x8003D268: lui         $v0, 0x1B06
    ctx->r2 = S32(0X1B06 << 16);
    // 0x8003D26C: beq         $a0, $v0, L_8003D27C
    if (ctx->r4 == ctx->r2) {
        // 0x8003D270: nop
    
            goto L_8003D27C;
    }
    // 0x8003D270: nop

L_8003D274:
    // 0x8003D274: jal         0x80048C7C
    // 0x8003D278: nop

    func_80048C7C_2407C(rdram, ctx);
        goto after_18;
    // 0x8003D278: nop

    after_18:
L_8003D27C:
    // 0x8003D27C: jal         0x8004A6B4
    // 0x8003D280: nop

    func_8004A6B4_25AB4(rdram, ctx);
        goto after_19;
    // 0x8003D280: nop

    after_19:
    // 0x8003D284: jal         0x8003912C
    // 0x8003D288: nop

    func_8003912C_1452C(rdram, ctx);
        goto after_20;
    // 0x8003D288: nop

    after_20:
    // 0x8003D28C: jal         0x80037F78
    // 0x8003D290: nop

    func_80037F78_13378(rdram, ctx);
        goto after_21;
    // 0x8003D290: nop

    after_21:
    // 0x8003D294: jal         0x8003A248
    // 0x8003D298: nop

    func_8003A248_15648(rdram, ctx);
        goto after_22;
    // 0x8003D298: nop

    after_22:
    // 0x8003D29C: jal         0x8003A7CC
    // 0x8003D2A0: nop

    func_8003A7CC_15BCC(rdram, ctx);
        goto after_23;
    // 0x8003D2A0: nop

    after_23:
    // 0x8003D2A4: j           L_8003D5FC
    // 0x8003D2A8: nop

        goto L_8003D5FC;
    // 0x8003D2A8: nop

L_8003D2AC:
    // 0x8003D2AC: jal         0x80076A3C
    // 0x8003D2B0: nop

    func_80076A3C_51E3C(rdram, ctx);
        goto after_24;
    // 0x8003D2B0: nop

    after_24:
    // 0x8003D2B4: jal         0x8004C3C0
    // 0x8003D2B8: nop

    func_8004C3C0_277C0(rdram, ctx);
        goto after_25;
    // 0x8003D2B8: nop

    after_25:
    // 0x8003D2BC: jal         0x8006EF7C
    // 0x8003D2C0: nop

    func_8006EF7C_4A37C(rdram, ctx);
        goto after_26;
    // 0x8003D2C0: nop

    after_26:
    // 0x8003D2C4: jal         0x80053CBC
    // 0x8003D2C8: nop

    func_80053CBC_2F0BC(rdram, ctx);
        goto after_27;
    // 0x8003D2C8: nop

    after_27:
    // 0x8003D2CC: jal         0x8004C05C
    // 0x8003D2D0: nop

    func_8004C05C_2745C(rdram, ctx);
        goto after_28;
    // 0x8003D2D0: nop

    after_28:
    // 0x8003D2D4: jal         0x8004BFB0
    // 0x8003D2D8: nop

    func_8004BFB0_273B0(rdram, ctx);
        goto after_29;
    // 0x8003D2D8: nop

    after_29:
    // 0x8003D2DC: jal         0x8004C1AC
    // 0x8003D2E0: nop

    func_8004C1AC_275AC(rdram, ctx);
        goto after_30;
    // 0x8003D2E0: nop

    after_30:
    // 0x8003D2E4: jal         0x8004C270
    // 0x8003D2E8: nop

    func_8004C270_27670(rdram, ctx);
        goto after_31;
    // 0x8003D2E8: nop

    after_31:
    // 0x8003D2EC: jal         0x8004C45C
    // 0x8003D2F0: nop

    func_8004C45C_2785C(rdram, ctx);
        goto after_32;
    // 0x8003D2F0: nop

    after_32:
    // 0x8003D2F4: jal         0x800472F0
    // 0x8003D2F8: nop

    func_800472F0_226F0(rdram, ctx);
        goto after_33;
    // 0x8003D2F8: nop

    after_33:
    // 0x8003D2FC: jal         0x80069D44
    // 0x8003D300: nop

    func_80069D44_45144(rdram, ctx);
        goto after_34;
    // 0x8003D300: nop

    after_34:
    // 0x8003D304: jal         0x8004C108
    // 0x8003D308: nop

    func_8004C108_27508(rdram, ctx);
        goto after_35;
    // 0x8003D308: nop

    after_35:
    // 0x8003D30C: jal         0x8004C314
    // 0x8003D310: nop

    func_8004C314_27714(rdram, ctx);
        goto after_36;
    // 0x8003D310: nop

    after_36:
    // 0x8003D314: jal         0x80033950
    // 0x8003D318: nop

    func_80033950_ED50(rdram, ctx);
        goto after_37;
    // 0x8003D318: nop

    after_37:
    // 0x8003D31C: jal         0x800521A8
    // 0x8003D320: nop

    func_800521A8_2D5A8(rdram, ctx);
        goto after_38;
    // 0x8003D320: nop

    after_38:
    // 0x8003D324: jal         0x800719B4
    // 0x8003D328: nop

    func_800719B4_4CDB4(rdram, ctx);
        goto after_39;
    // 0x8003D328: nop

    after_39:
    // 0x8003D32C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003D330: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8003D334: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8003D338: bne         $v1, $v0, L_8003D380
    if (ctx->r3 != ctx->r2) {
        // 0x8003D33C: nop
    
            goto L_8003D380;
    }
    // 0x8003D33C: nop

    // 0x8003D340: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003D344: lw          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BC8);
    // 0x8003D348: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8003D34C: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8003D350: lui         $v1, 0x302
    ctx->r3 = S32(0X302 << 16);
    // 0x8003D354: xor         $v1, $a0, $v1
    ctx->r3 = ctx->r4 ^ ctx->r3;
    // 0x8003D358: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x8003D35C: lui         $v0, 0x130B
    ctx->r2 = S32(0X130B << 16);
    // 0x8003D360: xor         $v0, $a0, $v0
    ctx->r2 = ctx->r4 ^ ctx->r2;
    // 0x8003D364: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8003D368: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8003D36C: beq         $v1, $zero, L_8003D388
    if (ctx->r3 == 0) {
        // 0x8003D370: nop
    
            goto L_8003D388;
    }
    // 0x8003D370: nop

    // 0x8003D374: lui         $v0, 0x1B06
    ctx->r2 = S32(0X1B06 << 16);
    // 0x8003D378: beq         $a0, $v0, L_8003D388
    if (ctx->r4 == ctx->r2) {
        // 0x8003D37C: nop
    
            goto L_8003D388;
    }
    // 0x8003D37C: nop

L_8003D380:
    // 0x8003D380: jal         0x80048C7C
    // 0x8003D384: nop

    func_80048C7C_2407C(rdram, ctx);
        goto after_40;
    // 0x8003D384: nop

    after_40:
L_8003D388:
    // 0x8003D388: jal         0x8004A6B4
    // 0x8003D38C: nop

    func_8004A6B4_25AB4(rdram, ctx);
        goto after_41;
    // 0x8003D38C: nop

    after_41:
    // 0x8003D390: jal         0x8003912C
    // 0x8003D394: nop

    func_8003912C_1452C(rdram, ctx);
        goto after_42;
    // 0x8003D394: nop

    after_42:
    // 0x8003D398: jal         0x80037F78
    // 0x8003D39C: nop

    func_80037F78_13378(rdram, ctx);
        goto after_43;
    // 0x8003D39C: nop

    after_43:
    // 0x8003D3A0: jal         0x8003A248
    // 0x8003D3A4: nop

    func_8003A248_15648(rdram, ctx);
        goto after_44;
    // 0x8003D3A4: nop

    after_44:
    // 0x8003D3A8: jal         0x8003A7CC
    // 0x8003D3AC: nop

    func_8003A7CC_15BCC(rdram, ctx);
        goto after_45;
    // 0x8003D3AC: nop

    after_45:
    // 0x8003D3B0: jal         0x80029114
    // 0x8003D3B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80029114_4514(rdram, ctx);
        goto after_46;
    // 0x8003D3B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_46:
    // 0x8003D3B8: jal         0x8003E03C
    // 0x8003D3BC: nop

    func_8003E03C_1943C(rdram, ctx);
        goto after_47;
    // 0x8003D3BC: nop

    after_47:
    // 0x8003D3C0: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8003D3C4: j           L_8003D5F8
    // 0x8003D3C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8003D5F8;
    // 0x8003D3C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8003D3CC:
    // 0x8003D3CC: jal         0x8002A4A4
    // 0x8003D3D0: nop

    func_8002A4A4_58A4(rdram, ctx);
        goto after_48;
    // 0x8003D3D0: nop

    after_48:
    // 0x8003D3D4: jal         0x8002A488
    // 0x8003D3D8: nop

    func_8002A488_5888(rdram, ctx);
        goto after_49;
    // 0x8003D3D8: nop

    after_49:
    // 0x8003D3DC: jal         0x80061724
    // 0x8003D3E0: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_50;
    // 0x8003D3E0: nop

    after_50:
    // 0x8003D3E4: jal         0x8004B5B0
    // 0x8003D3E8: nop

    func_8004B5B0_269B0(rdram, ctx);
        goto after_51;
    // 0x8003D3E8: nop

    after_51:
    // 0x8003D3EC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003D3F0: lw          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BC8);
    // 0x8003D3F4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8003D3F8: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8003D3FC: lui         $v1, 0x306
    ctx->r3 = S32(0X306 << 16);
    // 0x8003D400: xor         $v1, $a0, $v1
    ctx->r3 = ctx->r4 ^ ctx->r3;
    // 0x8003D404: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8003D408: lui         $v0, 0x130B
    ctx->r2 = S32(0X130B << 16);
    // 0x8003D40C: xor         $v0, $a0, $v0
    ctx->r2 = ctx->r4 ^ ctx->r2;
    // 0x8003D410: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8003D414: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8003D418: bnel        $v1, $zero, L_8003D430
    if (ctx->r3 != 0) {
        // 0x8003D41C: addiu       $a0, $zero, 0x20
        ctx->r4 = ADD32(0, 0X20);
            goto L_8003D430;
    }
    goto skip_0;
    // 0x8003D41C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    skip_0:
    // 0x8003D420: lui         $v0, 0x1B06
    ctx->r2 = S32(0X1B06 << 16);
    // 0x8003D424: bne         $a0, $v0, L_8003D430
    if (ctx->r4 != ctx->r2) {
        // 0x8003D428: addiu       $a0, $zero, 0x21
        ctx->r4 = ADD32(0, 0X21);
            goto L_8003D430;
    }
    // 0x8003D428: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    // 0x8003D42C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
L_8003D430:
    // 0x8003D430: jal         0x80036340
    // 0x8003D434: addiu       $a1, $zero, -0x2
    ctx->r5 = ADD32(0, -0X2);
    func_80036340_11740(rdram, ctx);
        goto after_52;
    // 0x8003D434: addiu       $a1, $zero, -0x2
    ctx->r5 = ADD32(0, -0X2);
    after_52:
    // 0x8003D438: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D43C: sh          $zero, -0x38AC($at)
    MEM_H(-0X38AC, ctx->r1) = 0;
    // 0x8003D440: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8003D444: j           L_8003D5F8
    // 0x8003D448: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8003D5F8;
    // 0x8003D448: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8003D44C:
    // 0x8003D44C: jal         0x80059320
    // 0x8003D450: nop

    func_80059320_34720(rdram, ctx);
        goto after_53;
    // 0x8003D450: nop

    after_53:
    // 0x8003D454: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8003D458: j           L_8003D5F8
    // 0x8003D45C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8003D5F8;
    // 0x8003D45C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8003D460:
    // 0x8003D460: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003D464: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8003D468: bne         $v0, $zero, L_8003D5FC
    if (ctx->r2 != 0) {
        // 0x8003D46C: nop
    
            goto L_8003D5FC;
    }
    // 0x8003D46C: nop

    // 0x8003D470: jal         0x80036E48
    // 0x8003D474: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80036E48_12248(rdram, ctx);
        goto after_54;
    // 0x8003D474: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_54:
    // 0x8003D478: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8003D47C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003D480: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_8003D484:
    // 0x8003D484: jal         0x80059360
    // 0x8003D488: nop

    func_80059360_34760(rdram, ctx);
        goto after_55;
    // 0x8003D488: nop

    after_55:
    // 0x8003D48C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8003D490: beq         $v1, $zero, L_8003D5FC
    if (ctx->r3 == 0) {
        // 0x8003D494: nop
    
            goto L_8003D5FC;
    }
    // 0x8003D494: nop

    // 0x8003D498: blez        $v1, L_8003D544
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8003D49C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8003D544;
    }
    // 0x8003D49C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8003D4A0: bne         $v1, $v0, L_8003D514
    if (ctx->r3 != ctx->r2) {
        // 0x8003D4A4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8003D514;
    }
    // 0x8003D4A4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8003D4A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003D4AC: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8003D4B0: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8003D4B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003D4B8: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8003D4BC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8003D4C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003D4C4: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x8003D4C8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8003D4CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003D4D0: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8003D4D4: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x8003D4D8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D4DC: sb          $v0, -0x3B9F($at)
    MEM_B(-0X3B9F, ctx->r1) = ctx->r2;
    // 0x8003D4E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003D4E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003D4E8: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x8003D4EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003D4F0: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x8003D4F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003D4F8: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x8003D4FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003D500: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x8003D504: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003D508: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8003D50C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D510: sb          $v0, -0x3B9E($at)
    MEM_B(-0X3B9E, ctx->r1) = ctx->r2;
L_8003D514:
    // 0x8003D514: jal         0x80036B58
    // 0x8003D518: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_56;
    // 0x8003D518: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_56:
    // 0x8003D51C: jal         0x80036E48
    // 0x8003D520: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_80036E48_12248(rdram, ctx);
        goto after_57;
    // 0x8003D520: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_57:
    // 0x8003D524: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8003D528: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003D52C: jal         0x8003E03C
    // 0x8003D530: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    func_8003E03C_1943C(rdram, ctx);
        goto after_58;
    // 0x8003D530: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    after_58:
    // 0x8003D534: jal         0x80054A30
    // 0x8003D538: nop

    func_80054A30_2FE30(rdram, ctx);
        goto after_59;
    // 0x8003D538: nop

    after_59:
    // 0x8003D53C: j           L_8003D54C
    // 0x8003D540: nop

        goto L_8003D54C;
    // 0x8003D540: nop

L_8003D544:
    // 0x8003D544: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8003D548: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_8003D54C:
    // 0x8003D54C: jal         0x8005CC0C
    // 0x8003D550: nop

    func_8005CC0C_3800C(rdram, ctx);
        goto after_60;
    // 0x8003D550: nop

    after_60:
    // 0x8003D554: jal         0x80035698
    // 0x8003D558: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80035698_10A98(rdram, ctx);
        goto after_61;
    // 0x8003D558: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_61:
    // 0x8003D55C: j           L_8003D5FC
    // 0x8003D560: nop

        goto L_8003D5FC;
    // 0x8003D560: nop

L_8003D564:
    // 0x8003D564: jal         0x80061724
    // 0x8003D568: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_62;
    // 0x8003D568: nop

    after_62:
    // 0x8003D56C: jal         0x8004B5E8
    // 0x8003D570: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_63;
    // 0x8003D570: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_63:
    // 0x8003D574: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003D578: jal         0x800357E4
    // 0x8003D57C: lb          $a0, -0x3BC8($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X3BC8);
    func_800357E4_10BE4(rdram, ctx);
        goto after_64;
    // 0x8003D57C: lb          $a0, -0x3BC8($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X3BC8);
    after_64:
    // 0x8003D580: jal         0x80036888
    // 0x8003D584: nop

    func_80036888_11C88(rdram, ctx);
        goto after_65;
    // 0x8003D584: nop

    after_65:
    // 0x8003D588: jal         0x80038550
    // 0x8003D58C: nop

    func_80038550_13950(rdram, ctx);
        goto after_66;
    // 0x8003D58C: nop

    after_66:
    // 0x8003D590: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8003D594: j           L_8003D5F8
    // 0x8003D598: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8003D5F8;
    // 0x8003D598: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8003D59C:
    // 0x8003D59C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003D5A0: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8003D5A4: bne         $v0, $zero, L_8003D5FC
    if (ctx->r2 != 0) {
        // 0x8003D5A8: nop
    
            goto L_8003D5FC;
    }
    // 0x8003D5A8: nop

    // 0x8003D5AC: lbu         $v0, 0xBD($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XBD);
    // 0x8003D5B0: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8003D5B4: jal         0x800336AC
    // 0x8003D5B8: sb          $v0, 0xBD($a0)
    MEM_B(0XBD, ctx->r4) = ctx->r2;
    func_800336AC_EAAC(rdram, ctx);
        goto after_67;
    // 0x8003D5B8: sb          $v0, 0xBD($a0)
    MEM_B(0XBD, ctx->r4) = ctx->r2;
    after_67:
    // 0x8003D5BC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003D5C0: lb          $v0, 0x47CC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X47CC);
    // 0x8003D5C4: bne         $v0, $zero, L_8003D5F0
    if (ctx->r2 != 0) {
        // 0x8003D5C8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8003D5F0;
    }
    // 0x8003D5C8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8003D5CC: jal         0x80036E48
    // 0x8003D5D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80036E48_12248(rdram, ctx);
        goto after_68;
    // 0x8003D5D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_68:
    // 0x8003D5D4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8003D5D8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8003D5DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003D5E0: jal         0x8002A110
    // 0x8003D5E4: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    func_8002A110_5510(rdram, ctx);
        goto after_69;
    // 0x8003D5E4: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    after_69:
    // 0x8003D5E8: j           L_8003D5FC
    // 0x8003D5EC: nop

        goto L_8003D5FC;
    // 0x8003D5EC: nop

L_8003D5F0:
    // 0x8003D5F0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8003D5F4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8003D5F8:
    // 0x8003D5F8: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_8003D5FC:
    // 0x8003D5FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003D600: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003D604: jr          $ra
    // 0x8003D608: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8003D608: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8007CC94_58094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007CC94: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x8007CC98: lhu         $t3, 0xDA($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0XDA);
    // 0x8007CC9C: sw          $s6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r22;
    // 0x8007CCA0: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x8007CCA4: sw          $ra, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r31;
    // 0x8007CCA8: sw          $fp, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r30;
    // 0x8007CCAC: sw          $s7, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r23;
    // 0x8007CCB0: sw          $s5, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r21;
    // 0x8007CCB4: sw          $s4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r20;
    // 0x8007CCB8: sw          $s3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r19;
    // 0x8007CCBC: sw          $s2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r18;
    // 0x8007CCC0: sw          $s1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r17;
    // 0x8007CCC4: sw          $s0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r16;
    // 0x8007CCC8: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x8007CCCC: lw          $s7, 0x8($s6)
    ctx->r23 = MEM_W(ctx->r22, 0X8);
    // 0x8007CCD0: sh          $t3, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r11;
    // 0x8007CCD4: lw          $t3, 0x4($s6)
    ctx->r11 = MEM_W(ctx->r22, 0X4);
    // 0x8007CCD8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8007CCDC: blez        $s7, L_8007D404
    if (SIGNED(ctx->r23) <= 0) {
        // 0x8007CCE0: sw          $t3, 0x84($sp)
        MEM_W(0X84, ctx->r29) = ctx->r11;
            goto L_8007D404;
    }
    // 0x8007CCE0: sw          $t3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r11;
    // 0x8007CCE4: lw          $t3, 0xD0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD0);
    // 0x8007CCE8: sltu        $t3, $zero, $t3
    ctx->r11 = 0 < ctx->r11 ? 1 : 0;
    // 0x8007CCEC: sw          $t3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r11;
    // 0x8007CCF0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8007CCF4: addiu       $s5, $sp, 0x18
    ctx->r21 = ADD32(ctx->r29, 0X18);
    // 0x8007CCF8: addiu       $s4, $zero, 0x4
    ctx->r20 = ADD32(0, 0X4);
    // 0x8007CCFC: addiu       $fp, $zero, 0x3
    ctx->r30 = ADD32(0, 0X3);
L_8007CD00:
    // 0x8007CD00: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x8007CD04: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x8007CD08: addu        $v0, $t3, $v0
    ctx->r2 = ADD32(ctx->r11, ctx->r2);
    // 0x8007CD0C: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x8007CD10: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8007CD14: addu        $s0, $t3, $v0
    ctx->r16 = ADD32(ctx->r11, ctx->r2);
    // 0x8007CD18: lw          $t3, 0xD0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD0);
    // 0x8007CD1C: xori        $v0, $t3, 0x3
    ctx->r2 = ctx->r11 ^ 0X3;
    // 0x8007CD20: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x8007CD24: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8007CD28: and         $v0, $t3, $v0
    ctx->r2 = ctx->r11 & ctx->r2;
    // 0x8007CD2C: bne         $v0, $zero, L_8007D3F4
    if (ctx->r2 != 0) {
        // 0x8007CD30: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8007D3F4;
    }
    // 0x8007CD30: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8007CD34: lw          $t3, 0xD4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD4);
    // 0x8007CD38: beq         $t3, $zero, L_8007CD50
    if (ctx->r11 == 0) {
        // 0x8007CD3C: nop
    
            goto L_8007CD50;
    }
    // 0x8007CD3C: nop

    // 0x8007CD40: beq         $t3, $s1, L_8007CFDC
    if (ctx->r11 == ctx->r17) {
        // 0x8007CD44: addiu       $v0, $sp, 0x6C
        ctx->r2 = ADD32(ctx->r29, 0X6C);
            goto L_8007CFDC;
    }
    // 0x8007CD44: addiu       $v0, $sp, 0x6C
    ctx->r2 = ADD32(ctx->r29, 0X6C);
    // 0x8007CD48: j           L_8007D110
    // 0x8007CD4C: nop

        goto L_8007D110;
    // 0x8007CD4C: nop

L_8007CD50:
    // 0x8007CD50: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x8007CD54: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8007CD58: bnel        $v0, $zero, L_8007D3F8
    if (ctx->r2 != 0) {
        // 0x8007CD5C: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_8007D3F8;
    }
    goto skip_0;
    // 0x8007CD5C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
    // 0x8007CD60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8007CD64: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x8007CD68: lbu         $t0, 0xB61($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0XB61);
    // 0x8007CD6C: lui         $a3, 0x8018
    ctx->r7 = S32(0X8018 << 16);
    // 0x8007CD70: lw          $a3, -0x44F0($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X44F0);
    // 0x8007CD74: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8007CD78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8007CD7C:
    // 0x8007CD7C: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8007CD80: lh          $v1, 0x0($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X0);
    // 0x8007CD84: sllv        $v0, $v0, $t0
    ctx->r2 = S32(ctx->r2 << (ctx->r8 & 31));
    // 0x8007CD88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007CD8C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8007CD90: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    // 0x8007CD94: lh          $v1, 0x2($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X2);
    // 0x8007CD98: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8007CD9C: sllv        $v0, $v0, $t0
    ctx->r2 = S32(ctx->r2 << (ctx->r8 & 31));
    // 0x8007CDA0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007CDA4: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x8007CDA8: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x8007CDAC: lh          $v1, 0x4($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X4);
    // 0x8007CDB0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8007CDB4: sllv        $v0, $v0, $t0
    ctx->r2 = S32(ctx->r2 << (ctx->r8 & 31));
    // 0x8007CDB8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007CDBC: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x8007CDC0: slti        $v0, $a2, 0x4
    ctx->r2 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x8007CDC4: bne         $v0, $zero, L_8007CD7C
    if (ctx->r2 != 0) {
        // 0x8007CDC8: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_8007CD7C;
    }
    // 0x8007CDC8: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x8007CDCC: jal         0x8007C930
    // 0x8007CDD0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_8007C930_57D30(rdram, ctx);
        goto after_0;
    // 0x8007CDD0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x8007CDD4: beql        $v0, $zero, L_8007D3F8
    if (ctx->r2 == 0) {
        // 0x8007CDD8: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_8007D3F8;
    }
    goto skip_1;
    // 0x8007CDD8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_1:
    // 0x8007CDDC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8007CDE0: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x8007CDE4: bne         $v0, $zero, L_8007CE58
    if (ctx->r2 != 0) {
        // 0x8007CDE8: nop
    
            goto L_8007CE58;
    }
    // 0x8007CDE8: nop

    // 0x8007CDEC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8007CDF0: lh          $v0, -0x448($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X448);
    // 0x8007CDF4: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8007CDF8: lw          $v1, -0x41C0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X41C0);
    // 0x8007CDFC: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8007CE00: beq         $v0, $zero, L_8007CE58
    if (ctx->r2 == 0) {
        // 0x8007CE04: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8007CE58;
    }
    // 0x8007CE04: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8007CE08: blez        $v1, L_8007CE58
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8007CE0C: nop
    
            goto L_8007CE58;
    }
    // 0x8007CE0C: nop

    // 0x8007CE10: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007CE14: lw          $v0, -0x41B4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X41B4);
    // 0x8007CE18: slti        $v0, $v0, -0x9
    ctx->r2 = SIGNED(ctx->r2) < -0X9 ? 1 : 0;
    // 0x8007CE1C: bne         $v0, $zero, L_8007CE58
    if (ctx->r2 != 0) {
        // 0x8007CE20: nop
    
            goto L_8007CE58;
    }
    // 0x8007CE20: nop

    // 0x8007CE24: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007CE28: lw          $v0, -0x41B8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X41B8);
    // 0x8007CE2C: slti        $v0, $v0, 0xA
    ctx->r2 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x8007CE30: beq         $v0, $zero, L_8007CE58
    if (ctx->r2 == 0) {
        // 0x8007CE34: nop
    
            goto L_8007CE58;
    }
    // 0x8007CE34: nop

    // 0x8007CE38: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007CE3C: lw          $v0, -0x41C8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X41C8);
    // 0x8007CE40: slti        $v0, $v0, -0x9
    ctx->r2 = SIGNED(ctx->r2) < -0X9 ? 1 : 0;
    // 0x8007CE44: bne         $v0, $zero, L_8007CE58
    if (ctx->r2 != 0) {
        // 0x8007CE48: nop
    
            goto L_8007CE58;
    }
    // 0x8007CE48: nop

    // 0x8007CE4C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007CE50: lw          $v0, -0x41C4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X41C4);
    // 0x8007CE54: slti        $s2, $v0, 0x1B
    ctx->r18 = SIGNED(ctx->r2) < 0X1B ? 1 : 0;
L_8007CE58:
    // 0x8007CE58: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x8007CE5C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8007CE60: beq         $v0, $zero, L_8007CF08
    if (ctx->r2 == 0) {
        // 0x8007CE64: nop
    
            goto L_8007CF08;
    }
    // 0x8007CE64: nop

    // 0x8007CE68: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007CE6C: lw          $v0, -0x44DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X44DC);
    // 0x8007CE70: beq         $v0, $s4, L_8007CEA0
    if (ctx->r2 == ctx->r20) {
        // 0x8007CE74: lui         $a0, 0xD9FF
        ctx->r4 = S32(0XD9FF << 16);
            goto L_8007CEA0;
    }
    // 0x8007CE74: lui         $a0, 0xD9FF
    ctx->r4 = S32(0XD9FF << 16);
    // 0x8007CE78: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8007CE7C: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x8007CE80: ori         $a0, $a0, 0xF9FF
    ctx->r4 = ctx->r4 | 0XF9FF;
    // 0x8007CE84: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007CE88: sw          $s4, -0x44DC($at)
    MEM_W(-0X44DC, ctx->r1) = ctx->r20;
    // 0x8007CE8C: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x8007CE90: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007CE94: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8007CE98: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x8007CE9C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_8007CEA0:
    // 0x8007CEA0: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007CEA4: lw          $v0, -0x44E4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X44E4);
    // 0x8007CEA8: beq         $v0, $fp, L_8007D110
    if (ctx->r2 == ctx->r30) {
        // 0x8007CEAC: addiu       $v0, $sp, 0x6C
        ctx->r2 = ADD32(ctx->r29, 0X6C);
            goto L_8007D110;
    }
    // 0x8007CEAC: addiu       $v0, $sp, 0x6C
    ctx->r2 = ADD32(ctx->r29, 0X6C);
    // 0x8007CEB0: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007CEB4: lbu         $v0, -0x44E0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X44E0);
    // 0x8007CEB8: bne         $v0, $zero, L_8007CEE8
    if (ctx->r2 != 0) {
        // 0x8007CEBC: lui         $a1, 0xE200
        ctx->r5 = S32(0XE200 << 16);
            goto L_8007CEE8;
    }
    // 0x8007CEBC: lui         $a1, 0xE200
    ctx->r5 = S32(0XE200 << 16);
    // 0x8007CEC0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8007CEC4: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x8007CEC8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007CECC: sb          $s1, -0x44E0($at)
    MEM_B(-0X44E0, ctx->r1) = ctx->r17;
    // 0x8007CED0: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x8007CED4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007CED8: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8007CEDC: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x8007CEE0: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x8007CEE4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_8007CEE8:
    // 0x8007CEE8: ori         $a1, $a1, 0x1C
    ctx->r5 = ctx->r5 | 0X1C;
    // 0x8007CEEC: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007CEF0: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007CEF4: lui         $a0, 0xC811
    ctx->r4 = S32(0XC811 << 16);
    // 0x8007CEF8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007CEFC: sw          $fp, -0x44E4($at)
    MEM_W(-0X44E4, ctx->r1) = ctx->r30;
    // 0x8007CF00: j           L_8007CFC4
    // 0x8007CF04: ori         $a0, $a0, 0x3078
    ctx->r4 = ctx->r4 | 0X3078;
        goto L_8007CFC4;
    // 0x8007CF04: ori         $a0, $a0, 0x3078
    ctx->r4 = ctx->r4 | 0X3078;
L_8007CF08:
    // 0x8007CF08: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007CF0C: lw          $v0, -0x44DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X44DC);
    // 0x8007CF10: beq         $v0, $s1, L_8007CF60
    if (ctx->r2 == ctx->r17) {
        // 0x8007CF14: lui         $a0, 0xD9FF
        ctx->r4 = S32(0XD9FF << 16);
            goto L_8007CF60;
    }
    // 0x8007CF14: lui         $a0, 0xD9FF
    ctx->r4 = S32(0XD9FF << 16);
    // 0x8007CF18: ori         $a0, $a0, 0xF9FF
    ctx->r4 = ctx->r4 | 0XF9FF;
    // 0x8007CF1C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007CF20: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007CF24: lui         $a1, 0xD9FF
    ctx->r5 = S32(0XD9FF << 16);
    // 0x8007CF28: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x8007CF2C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007CF30: sw          $s1, -0x44DC($at)
    MEM_W(-0X44DC, ctx->r1) = ctx->r17;
    // 0x8007CF34: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007CF38: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007CF3C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007CF40: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8007CF44: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007CF48: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007CF4C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8007CF50: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8007CF54: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8007CF58: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    // 0x8007CF5C: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
L_8007CF60:
    // 0x8007CF60: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007CF64: lw          $v0, -0x44E4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X44E4);
    // 0x8007CF68: beq         $v0, $s1, L_8007D110
    if (ctx->r2 == ctx->r17) {
        // 0x8007CF6C: addiu       $v0, $sp, 0x6C
        ctx->r2 = ADD32(ctx->r29, 0X6C);
            goto L_8007D110;
    }
    // 0x8007CF6C: addiu       $v0, $sp, 0x6C
    ctx->r2 = ADD32(ctx->r29, 0X6C);
    // 0x8007CF70: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007CF74: lbu         $v0, -0x44E0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X44E0);
    // 0x8007CF78: bne         $v0, $zero, L_8007CFA8
    if (ctx->r2 != 0) {
        // 0x8007CF7C: lui         $a1, 0xE200
        ctx->r5 = S32(0XE200 << 16);
            goto L_8007CFA8;
    }
    // 0x8007CF7C: lui         $a1, 0xE200
    ctx->r5 = S32(0XE200 << 16);
    // 0x8007CF80: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8007CF84: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x8007CF88: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007CF8C: sb          $s1, -0x44E0($at)
    MEM_B(-0X44E0, ctx->r1) = ctx->r17;
    // 0x8007CF90: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x8007CF94: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007CF98: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8007CF9C: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x8007CFA0: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x8007CFA4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_8007CFA8:
    // 0x8007CFA8: ori         $a1, $a1, 0x1C
    ctx->r5 = ctx->r5 | 0X1C;
    // 0x8007CFAC: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007CFB0: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007CFB4: lui         $a0, 0xC811
    ctx->r4 = S32(0XC811 << 16);
    // 0x8007CFB8: ori         $a0, $a0, 0x2038
    ctx->r4 = ctx->r4 | 0X2038;
    // 0x8007CFBC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007CFC0: sw          $s1, -0x44E4($at)
    MEM_W(-0X44E4, ctx->r1) = ctx->r17;
L_8007CFC4:
    // 0x8007CFC4: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007CFC8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007CFCC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007CFD0: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x8007CFD4: j           L_8007D10C
    // 0x8007CFD8: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
        goto L_8007D10C;
    // 0x8007CFD8: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
L_8007CFDC:
    // 0x8007CFDC: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x8007CFE0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8007CFE4: beql        $v0, $zero, L_8007D3F8
    if (ctx->r2 == 0) {
        // 0x8007CFE8: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_8007D3F8;
    }
    goto skip_2;
    // 0x8007CFE8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_2:
    // 0x8007CFEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8007CFF0: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x8007CFF4: lbu         $t0, 0xB61($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0XB61);
    // 0x8007CFF8: lui         $a3, 0x8018
    ctx->r7 = S32(0X8018 << 16);
    // 0x8007CFFC: lw          $a3, -0x44F0($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X44F0);
    // 0x8007D000: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8007D004: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8007D008:
    // 0x8007D008: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8007D00C: lh          $v1, 0x0($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X0);
    // 0x8007D010: sllv        $v0, $v0, $t0
    ctx->r2 = S32(ctx->r2 << (ctx->r8 & 31));
    // 0x8007D014: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007D018: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8007D01C: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    // 0x8007D020: lh          $v1, 0x2($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X2);
    // 0x8007D024: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8007D028: sllv        $v0, $v0, $t0
    ctx->r2 = S32(ctx->r2 << (ctx->r8 & 31));
    // 0x8007D02C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007D030: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x8007D034: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x8007D038: lh          $v1, 0x4($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X4);
    // 0x8007D03C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8007D040: sllv        $v0, $v0, $t0
    ctx->r2 = S32(ctx->r2 << (ctx->r8 & 31));
    // 0x8007D044: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007D048: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x8007D04C: slti        $v0, $a2, 0x4
    ctx->r2 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x8007D050: bne         $v0, $zero, L_8007D008
    if (ctx->r2 != 0) {
        // 0x8007D054: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_8007D008;
    }
    // 0x8007D054: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x8007D058: jal         0x8007C930
    // 0x8007D05C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_8007C930_57D30(rdram, ctx);
        goto after_1;
    // 0x8007D05C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x8007D060: beql        $v0, $zero, L_8007D3F8
    if (ctx->r2 == 0) {
        // 0x8007D064: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_8007D3F8;
    }
    goto skip_3;
    // 0x8007D064: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_3:
    // 0x8007D068: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x8007D06C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8007D070: beq         $v0, $zero, L_8007D0B4
    if (ctx->r2 == 0) {
        // 0x8007D074: nop
    
            goto L_8007D0B4;
    }
    // 0x8007D074: nop

    // 0x8007D078: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007D07C: lw          $v0, -0x44DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X44DC);
    // 0x8007D080: beq         $v0, $s4, L_8007D10C
    if (ctx->r2 == ctx->r20) {
        // 0x8007D084: lui         $a0, 0xD9FF
        ctx->r4 = S32(0XD9FF << 16);
            goto L_8007D10C;
    }
    // 0x8007D084: lui         $a0, 0xD9FF
    ctx->r4 = S32(0XD9FF << 16);
    // 0x8007D088: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8007D08C: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x8007D090: ori         $a0, $a0, 0xF9FF
    ctx->r4 = ctx->r4 | 0XF9FF;
    // 0x8007D094: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007D098: sw          $s4, -0x44DC($at)
    MEM_W(-0X44DC, ctx->r1) = ctx->r20;
    // 0x8007D09C: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x8007D0A0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007D0A4: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8007D0A8: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x8007D0AC: j           L_8007D10C
    // 0x8007D0B0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
        goto L_8007D10C;
    // 0x8007D0B0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_8007D0B4:
    // 0x8007D0B4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007D0B8: lw          $v0, -0x44DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X44DC);
    // 0x8007D0BC: beq         $v0, $s1, L_8007D10C
    if (ctx->r2 == ctx->r17) {
        // 0x8007D0C0: lui         $a0, 0xD9FF
        ctx->r4 = S32(0XD9FF << 16);
            goto L_8007D10C;
    }
    // 0x8007D0C0: lui         $a0, 0xD9FF
    ctx->r4 = S32(0XD9FF << 16);
    // 0x8007D0C4: ori         $a0, $a0, 0xF9FF
    ctx->r4 = ctx->r4 | 0XF9FF;
    // 0x8007D0C8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007D0CC: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007D0D0: lui         $a1, 0xD9FF
    ctx->r5 = S32(0XD9FF << 16);
    // 0x8007D0D4: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x8007D0D8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007D0DC: sw          $s1, -0x44DC($at)
    MEM_W(-0X44DC, ctx->r1) = ctx->r17;
    // 0x8007D0E0: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007D0E4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007D0E8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007D0EC: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8007D0F0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007D0F4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007D0F8: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8007D0FC: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8007D100: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8007D104: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    // 0x8007D108: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
L_8007D10C:
    // 0x8007D10C: addiu       $v0, $sp, 0x6C
    ctx->r2 = ADD32(ctx->r29, 0X6C);
L_8007D110:
    // 0x8007D110: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8007D114: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8007D118: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x8007D11C: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    // 0x8007D120: jal         0x8007C108
    // 0x8007D124: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    func_8007C108_57508(rdram, ctx);
        goto after_2;
    // 0x8007D124: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    after_2:
    // 0x8007D128: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8007D12C: beq         $s0, $zero, L_8007D404
    if (ctx->r16 == 0) {
        // 0x8007D130: nop
    
            goto L_8007D404;
    }
    // 0x8007D130: nop

    // 0x8007D134: beq         $s2, $zero, L_8007D1A0
    if (ctx->r18 == 0) {
        // 0x8007D138: nop
    
            goto L_8007D1A0;
    }
    // 0x8007D138: nop

    // 0x8007D13C: jal         0x800281C8
    // 0x8007D140: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_800281C8_35C8(rdram, ctx);
        goto after_3;
    // 0x8007D140: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_3:
    // 0x8007D144: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8007D148: beql        $a3, $zero, L_8007D3F8
    if (ctx->r7 == 0) {
        // 0x8007D14C: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_8007D3F8;
    }
    goto skip_4;
    // 0x8007D14C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_4:
    // 0x8007D150: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x8007D154: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8007D158: lw          $v1, -0x41CC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X41CC);
    // 0x8007D15C: sb          $v0, 0xC($a3)
    MEM_B(0XC, ctx->r7) = ctx->r2;
    // 0x8007D160: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x8007D164: sb          $v0, 0xD($a3)
    MEM_B(0XD, ctx->r7) = ctx->r2;
    // 0x8007D168: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x8007D16C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8007D170: sb          $v0, 0xE($a3)
    MEM_B(0XE, ctx->r7) = ctx->r2;
    // 0x8007D174: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x8007D178: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8007D17C: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x8007D180: addiu       $a2, $a2, -0x3BB0
    ctx->r6 = ADD32(ctx->r6, -0X3BB0);
    // 0x8007D184: sw          $s6, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r22;
    // 0x8007D188: sw          $s0, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r16;
    // 0x8007D18C: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x8007D190: jal         0x800283A8
    // 0x8007D194: sb          $v0, 0xF($a3)
    MEM_B(0XF, ctx->r7) = ctx->r2;
    func_800283A8_37A8(rdram, ctx);
        goto after_4;
    // 0x8007D194: sb          $v0, 0xF($a3)
    MEM_B(0XF, ctx->r7) = ctx->r2;
    after_4:
    // 0x8007D198: j           L_8007D3F8
    // 0x8007D19C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
        goto L_8007D3F8;
    // 0x8007D19C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_8007D1A0:
    // 0x8007D1A0: lbu         $a1, 0x63($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X63);
    // 0x8007D1A4: lbu         $a2, 0x67($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X67);
    // 0x8007D1A8: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007D1AC: lhu         $v0, -0x44E8($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X44E8);
    // 0x8007D1B0: lhu         $t3, 0x7E($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X7E);
    // 0x8007D1B4: lbu         $v1, 0x6B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X6B);
    // 0x8007D1B8: lbu         $a0, 0x6F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X6F);
    // 0x8007D1BC: bne         $v0, $t3, L_8007D20C
    if (ctx->r2 != ctx->r11) {
        // 0x8007D1C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8007D20C;
    }
    // 0x8007D1C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007D1C4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007D1C8: lbu         $v0, -0x44D8($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X44D8);
    // 0x8007D1CC: bne         $v0, $a1, L_8007D20C
    if (ctx->r2 != ctx->r5) {
        // 0x8007D1D0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8007D20C;
    }
    // 0x8007D1D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007D1D4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007D1D8: lbu         $v0, -0x44D7($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X44D7);
    // 0x8007D1DC: bne         $v0, $a2, L_8007D20C
    if (ctx->r2 != ctx->r6) {
        // 0x8007D1E0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8007D20C;
    }
    // 0x8007D1E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007D1E4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007D1E8: lbu         $v0, -0x44D6($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X44D6);
    // 0x8007D1EC: bne         $v0, $v1, L_8007D20C
    if (ctx->r2 != ctx->r3) {
        // 0x8007D1F0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8007D20C;
    }
    // 0x8007D1F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007D1F4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007D1F8: lbu         $v0, -0x44D5($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X44D5);
    // 0x8007D1FC: bne         $v0, $a0, L_8007D20C
    if (ctx->r2 != ctx->r4) {
        // 0x8007D200: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8007D20C;
    }
    // 0x8007D200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007D204: j           L_8007D22C
    // 0x8007D208: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8007D22C;
    // 0x8007D208: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8007D20C:
    // 0x8007D20C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007D210: sb          $a1, -0x44D8($at)
    MEM_B(-0X44D8, ctx->r1) = ctx->r5;
    // 0x8007D214: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007D218: sb          $a2, -0x44D7($at)
    MEM_B(-0X44D7, ctx->r1) = ctx->r6;
    // 0x8007D21C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007D220: sb          $v1, -0x44D6($at)
    MEM_B(-0X44D6, ctx->r1) = ctx->r3;
    // 0x8007D224: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007D228: sb          $a0, -0x44D5($at)
    MEM_B(-0X44D5, ctx->r1) = ctx->r4;
L_8007D22C:
    // 0x8007D22C: beq         $v0, $zero, L_8007D3AC
    if (ctx->r2 == 0) {
        // 0x8007D230: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_8007D3AC;
    }
    // 0x8007D230: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x8007D234: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007D238: lbu         $v0, -0x44E0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X44E0);
    // 0x8007D23C: bne         $v0, $zero, L_8007D270
    if (ctx->r2 != 0) {
        // 0x8007D240: lui         $v1, 0x708
        ctx->r3 = S32(0X708 << 16);
            goto L_8007D270;
    }
    // 0x8007D240: lui         $v1, 0x708
    ctx->r3 = S32(0X708 << 16);
    // 0x8007D244: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8007D248: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x8007D24C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007D250: sb          $s1, -0x44E0($at)
    MEM_B(-0X44E0, ctx->r1) = ctx->r17;
    // 0x8007D254: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x8007D258: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007D25C: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8007D260: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x8007D264: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x8007D268: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8007D26C: lui         $v1, 0x708
    ctx->r3 = S32(0X708 << 16);
L_8007D270:
    // 0x8007D270: ori         $v1, $v1, 0x200
    ctx->r3 = ctx->r3 | 0X200;
    // 0x8007D274: lui         $t2, 0x8
    ctx->r10 = S32(0X8 << 16);
    // 0x8007D278: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8007D27C: lw          $a1, -0x6F10($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6F10);
    // 0x8007D280: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x8007D284: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x8007D288: ori         $t2, $t2, 0x200
    ctx->r10 = ctx->r10 | 0X200;
    // 0x8007D28C: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x8007D290: subu        $a0, $t0, $a3
    ctx->r4 = SUB32(ctx->r8, ctx->r7);
    // 0x8007D294: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8007D298: sra         $a0, $a0, 1
    ctx->r4 = S32(SIGNED(ctx->r4) >> 1);
    // 0x8007D29C: addiu       $a0, $a0, 0x7
    ctx->r4 = ADD32(ctx->r4, 0X7);
    // 0x8007D2A0: sra         $a0, $a0, 3
    ctx->r4 = S32(SIGNED(ctx->r4) >> 3);
    // 0x8007D2A4: andi        $a0, $a0, 0x1FF
    ctx->r4 = ctx->r4 & 0X1FF;
    // 0x8007D2A8: sll         $a0, $a0, 9
    ctx->r4 = S32(ctx->r4 << 9);
    // 0x8007D2AC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007D2B0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007D2B4: lui         $v0, 0xF548
    ctx->r2 = S32(0XF548 << 16);
    // 0x8007D2B8: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x8007D2BC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8007D2C0: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x8007D2C4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007D2C8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007D2CC: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x8007D2D0: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x8007D2D4: addiu       $v0, $a1, 0x18
    ctx->r2 = ADD32(ctx->r5, 0X18);
    // 0x8007D2D8: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x8007D2DC: sll         $v1, $a3, 1
    ctx->r3 = S32(ctx->r7 << 1);
    // 0x8007D2E0: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    // 0x8007D2E4: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x8007D2E8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8007D2EC: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x8007D2F0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007D2F4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007D2F8: lui         $v0, 0xF400
    ctx->r2 = S32(0XF400 << 16);
    // 0x8007D2FC: sll         $a3, $a3, 2
    ctx->r7 = S32(ctx->r7 << 2);
    // 0x8007D300: andi        $a3, $a3, 0xFFF
    ctx->r7 = ctx->r7 & 0XFFF;
    // 0x8007D304: sll         $a3, $a3, 12
    ctx->r7 = S32(ctx->r7 << 12);
    // 0x8007D308: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x8007D30C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x8007D310: or          $v0, $a2, $v0
    ctx->r2 = ctx->r6 | ctx->r2;
    // 0x8007D314: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8007D318: sw          $v1, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r3;
    // 0x8007D31C: sll         $v1, $t0, 1
    ctx->r3 = S32(ctx->r8 << 1);
    // 0x8007D320: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x8007D324: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8007D328: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x8007D32C: lui         $v0, 0x700
    ctx->r2 = S32(0X700 << 16);
    // 0x8007D330: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8007D334: andi        $t0, $t0, 0xFFF
    ctx->r8 = ctx->r8 & 0XFFF;
    // 0x8007D338: sll         $t0, $t0, 12
    ctx->r8 = S32(ctx->r8 << 12);
    // 0x8007D33C: sw          $zero, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = 0;
    // 0x8007D340: sw          $t2, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r10;
    // 0x8007D344: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8007D348: andi        $t1, $t1, 0xFFF
    ctx->r9 = ctx->r9 & 0XFFF;
    // 0x8007D34C: or          $v0, $t1, $v0
    ctx->r2 = ctx->r9 | ctx->r2;
    // 0x8007D350: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8007D354: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
    // 0x8007D358: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007D35C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007D360: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x8007D364: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x8007D368: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x8007D36C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007D370: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007D374: lui         $v0, 0xF540
    ctx->r2 = S32(0XF540 << 16);
    // 0x8007D378: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8007D37C: addiu       $v0, $a1, 0x30
    ctx->r2 = ADD32(ctx->r5, 0X30);
    // 0x8007D380: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007D384: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007D388: lui         $v0, 0xF200
    ctx->r2 = S32(0XF200 << 16);
    // 0x8007D38C: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x8007D390: or          $a3, $a3, $a2
    ctx->r7 = ctx->r7 | ctx->r6;
    // 0x8007D394: or          $t0, $t0, $t1
    ctx->r8 = ctx->r8 | ctx->r9;
    // 0x8007D398: sw          $v1, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r3;
    // 0x8007D39C: sw          $a0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r4;
    // 0x8007D3A0: sw          $a3, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->r7;
    // 0x8007D3A4: sw          $t0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r8;
    // 0x8007D3A8: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
L_8007D3AC:
    // 0x8007D3AC: ori         $a0, $a0, 0x4008
    ctx->r4 = ctx->r4 | 0X4008;
    // 0x8007D3B0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007D3B4: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007D3B8: lui         $a1, 0x600
    ctx->r5 = S32(0X600 << 16);
    // 0x8007D3BC: ori         $a1, $a1, 0x602
    ctx->r5 = ctx->r5 | 0X602;
    // 0x8007D3C0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007D3C4: sb          $zero, -0x44E0($at)
    MEM_B(-0X44E0, ctx->r1) = 0;
    // 0x8007D3C8: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007D3CC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007D3D0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007D3D4: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8007D3D8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007D3DC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007D3E0: addiu       $v0, $zero, 0x406
    ctx->r2 = ADD32(0, 0X406);
    // 0x8007D3E4: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8007D3E8: sw          $s0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r16;
    // 0x8007D3EC: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    // 0x8007D3F0: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
L_8007D3F4:
    // 0x8007D3F4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_8007D3F8:
    // 0x8007D3F8: slt         $v0, $s3, $s7
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x8007D3FC: bne         $v0, $zero, L_8007CD00
    if (ctx->r2 != 0) {
        // 0x8007D400: nop
    
            goto L_8007CD00;
    }
    // 0x8007D400: nop

L_8007D404:
    // 0x8007D404: lw          $ra, 0xBC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XBC);
    // 0x8007D408: lw          $fp, 0xB8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XB8);
    // 0x8007D40C: lw          $s7, 0xB4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XB4);
    // 0x8007D410: lw          $s6, 0xB0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XB0);
    // 0x8007D414: lw          $s5, 0xAC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XAC);
    // 0x8007D418: lw          $s4, 0xA8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XA8);
    // 0x8007D41C: lw          $s3, 0xA4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XA4);
    // 0x8007D420: lw          $s2, 0xA0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA0);
    // 0x8007D424: lw          $s1, 0x9C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X9C);
    // 0x8007D428: lw          $s0, 0x98($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X98);
    // 0x8007D42C: jr          $ra
    // 0x8007D430: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    TRACE_RETURN()
    return;
    // 0x8007D430: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_800696F0_44AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800696F0: lui         $v0, 0xCCCC
    ctx->r2 = S32(0XCCCC << 16);
    // 0x800696F4: ori         $v0, $v0, 0xCCCD
    ctx->r2 = ctx->r2 | 0XCCCD;
    // 0x800696F8: multu       $a0, $v0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800696FC: mfhi        $a2
    ctx->r6 = hi;
    // 0x80069700: srl         $v1, $a2, 3
    ctx->r3 = S32(U32(ctx->r6) >> 3);
    // 0x80069704: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80069708: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006970C: lbu         $v0, 0x2D98($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2D98);
    // 0x80069710: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80069714: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80069718: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006971C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80069720: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80069724: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80069728: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8006972C: lbu         $v0, 0x2D98($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2D98);
    // 0x80069730: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80069734: sb          $v0, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r2;
    // 0x80069738: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8006973C: lbu         $v0, 0x2D98($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2D98);
    // 0x80069740: bne         $v1, $v0, L_8006974C
    if (ctx->r3 != ctx->r2) {
        // 0x80069744: addiu       $v0, $zero, 0x4F
        ctx->r2 = ADD32(0, 0X4F);
            goto L_8006974C;
    }
    // 0x80069744: addiu       $v0, $zero, 0x4F
    ctx->r2 = ADD32(0, 0X4F);
    // 0x80069748: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
L_8006974C:
    // 0x8006974C: jr          $ra
    // 0x80069750: nop

    TRACE_RETURN()
    return;
    // 0x80069750: nop

;}
RECOMP_FUNC void func_8006F6C4_4AAC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006F6C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006F6C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006F6CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006F6D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006F6D4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006F6D8: bne         $v0, $zero, L_8006F6F8
    if (ctx->r2 != 0) {
        // 0x8006F6DC: addiu       $a1, $zero, 0x34
        ctx->r5 = ADD32(0, 0X34);
            goto L_8006F6F8;
    }
    // 0x8006F6DC: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x8006F6E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006F6E4: jal         0x8006FB90
    // 0x8006F6E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_0;
    // 0x8006F6E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8006F6EC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006F6F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006F6F4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006F6F8:
    // 0x8006F6F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006F6FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006F700: jr          $ra
    // 0x8006F704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006F704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80091EA0_6D2A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80091EA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80091EA4: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80091EA8: lw          $v1, -0xEEC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XEEC);
    // 0x80091EAC: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x80091EB0: ori         $v0, $v0, 0x4E0
    ctx->r2 = ctx->r2 | 0X4E0;
    // 0x80091EB4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80091EB8: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80091EBC: addiu       $v0, $zero, 0x2E0
    ctx->r2 = ADD32(0, 0X2E0);
    // 0x80091EC0: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x80091EC4: lw          $v0, 0x30($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X30);
    // 0x80091EC8: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80091ECC: jalr        $v0
    // 0x80091ED0: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80091ED0: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_0:
    // 0x80091ED4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80091ED8: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80091EDC: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80091EE0: lui         $a2, 0xC00
    ctx->r6 = S32(0XC00 << 16);
    // 0x80091EE4: ori         $a2, $a2, 0x7FFF
    ctx->r6 = ctx->r6 | 0X7FFF;
    // 0x80091EE8: lui         $a0, 0x7C0
    ctx->r4 = S32(0X7C0 << 16);
    // 0x80091EEC: ori         $a0, $a0, 0x4E0
    ctx->r4 = ctx->r4 | 0X4E0;
    // 0x80091EF0: lui         $a3, 0x930
    ctx->r7 = S32(0X930 << 16);
    // 0x80091EF4: ori         $a3, $a3, 0x650
    ctx->r7 = ctx->r7 | 0X650;
    // 0x80091EF8: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80091EFC: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x80091F00: sw          $a0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r4;
    // 0x80091F04: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80091F08: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80091F0C: sw          $a3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r7;
    // 0x80091F10: jr          $ra
    // 0x80091F14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80091F14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80091F18: nop

    // 0x80091F1C: nop

;}
RECOMP_FUNC void func_80034678_FA78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034678: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003467C: lbu         $v0, 0x434E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X434E);
    // 0x80034680: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80034684: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80034688: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8003468C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80034690: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80034694: addiu       $s2, $s2, 0x4348
    ctx->r18 = ADD32(ctx->r18, 0X4348);
    // 0x80034698: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003469C: beq         $v0, $zero, L_800346B0
    if (ctx->r2 == 0) {
        // 0x800346A0: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_800346B0;
    }
    // 0x800346A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800346A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800346A8: j           L_800347F4
    // 0x800346AC: sw          $s1, 0x435C($at)
    MEM_W(0X435C, ctx->r1) = ctx->r17;
        goto L_800347F4;
    // 0x800346AC: sw          $s1, 0x435C($at)
    MEM_W(0X435C, ctx->r1) = ctx->r17;
L_800346B0:
    // 0x800346B0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800346B4: lbu         $v0, 0x4349($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4349);
    // 0x800346B8: bne         $v0, $zero, L_800347F4
    if (ctx->r2 != 0) {
        // 0x800346BC: nop
    
            goto L_800347F4;
    }
    // 0x800346BC: nop

    // 0x800346C0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800346C4: lbu         $v1, 0x4350($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4350);
    // 0x800346C8: bne         $v1, $zero, L_80034794
    if (ctx->r3 != 0) {
        // 0x800346CC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80034794;
    }
    // 0x800346CC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800346D0: addiu       $a0, $s2, 0x68
    ctx->r4 = ADD32(ctx->r18, 0X68);
    // 0x800346D4: addiu       $s0, $s2, 0x48
    ctx->r16 = ADD32(ctx->r18, 0X48);
    // 0x800346D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x800346DC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800346E0: lw          $v1, 0x4354($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4354);
    // 0x800346E4: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x800346E8: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x800346EC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x800346F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800346F4: sb          $v0, 0x4352($at)
    MEM_B(0X4352, ctx->r1) = ctx->r2;
    // 0x800346F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800346FC: sw          $v1, 0x436C($at)
    MEM_W(0X436C, ctx->r1) = ctx->r3;
    // 0x80034700: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034704: sw          $a3, 0x4374($at)
    MEM_W(0X4374, ctx->r1) = ctx->r7;
    // 0x80034708: jal         0x8009A3B4
    // 0x8003470C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8003470C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80034710: addiu       $a0, $s2, 0x88
    ctx->r4 = ADD32(ctx->r18, 0X88);
    // 0x80034714: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80034718: addiu       $v0, $zero, 0x190
    ctx->r2 = ADD32(0, 0X190);
    // 0x8003471C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034720: sw          $v0, 0x4384($at)
    MEM_W(0X4384, ctx->r1) = ctx->r2;
    // 0x80034724: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034728: sw          $s1, 0x438C($at)
    MEM_W(0X438C, ctx->r1) = ctx->r17;
    // 0x8003472C: jal         0x8009A3B4
    // 0x80034730: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80034730: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80034734: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80034738: lh          $v1, 0x49C6($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C6);
    // 0x8003473C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80034740: lw          $a0, 0x4358($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4358);
    // 0x80034744: addiu       $v0, $zero, 0xD2
    ctx->r2 = ADD32(0, 0XD2);
    // 0x80034748: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003474C: sw          $v0, 0x43A4($at)
    MEM_W(0X43A4, ctx->r1) = ctx->r2;
    // 0x80034750: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80034754: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034758: sb          $v0, 0x4350($at)
    MEM_B(0X4350, ctx->r1) = ctx->r2;
    // 0x8003475C: addiu       $v0, $zero, -0x8
    ctx->r2 = ADD32(0, -0X8);
    // 0x80034760: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034764: sb          $v0, 0x4351($at)
    MEM_B(0X4351, ctx->r1) = ctx->r2;
    // 0x80034768: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8003476C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80034770: sw          $v0, -0x725C($at)
    MEM_W(-0X725C, ctx->r1) = ctx->r2;
    // 0x80034774: addiu       $v1, $v1, -0xD2
    ctx->r3 = ADD32(ctx->r3, -0XD2);
    // 0x80034778: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003477C: sw          $v1, 0x43D4($at)
    MEM_W(0X43D4, ctx->r1) = ctx->r3;
    // 0x80034780: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034784: sw          $a0, 0x4388($at)
    MEM_W(0X4388, ctx->r1) = ctx->r4;
    // 0x80034788: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003478C: j           L_800347F4
    // 0x80034790: sw          $a0, 0x4370($at)
    MEM_W(0X4370, ctx->r1) = ctx->r4;
        goto L_800347F4;
    // 0x80034790: sw          $a0, 0x4370($at)
    MEM_W(0X4370, ctx->r1) = ctx->r4;
L_80034794:
    // 0x80034794: bne         $v1, $v0, L_800347F4
    if (ctx->r3 != ctx->r2) {
        // 0x80034798: nop
    
            goto L_800347F4;
    }
    // 0x80034798: nop

    // 0x8003479C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800347A0: lb          $v0, 0x4352($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4352);
    // 0x800347A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800347A8: sw          $s1, 0x435C($at)
    MEM_W(0X435C, ctx->r1) = ctx->r17;
    // 0x800347AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800347B0: bgtz        $v0, L_800347F4
    if (SIGNED(ctx->r2) > 0) {
        // 0x800347B4: sw          $s1, 0x438C($at)
        MEM_W(0X438C, ctx->r1) = ctx->r17;
            goto L_800347F4;
    }
    // 0x800347B4: sw          $s1, 0x438C($at)
    MEM_W(0X438C, ctx->r1) = ctx->r17;
    // 0x800347B8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800347BC: lh          $a0, 0x49C4($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X49C4);
    // 0x800347C0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800347C4: lh          $v0, 0x49C6($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C6);
    // 0x800347C8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800347CC: lw          $v1, 0x43A4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X43A4);
    // 0x800347D0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x800347D4: lh          $a1, 0x49C8($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X49C8);
    // 0x800347D8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800347DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800347E0: sw          $a0, 0x4390($at)
    MEM_W(0X4390, ctx->r1) = ctx->r4;
    // 0x800347E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800347E8: sw          $v0, 0x4394($at)
    MEM_W(0X4394, ctx->r1) = ctx->r2;
    // 0x800347EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800347F0: sw          $a1, 0x4398($at)
    MEM_W(0X4398, ctx->r1) = ctx->r5;
L_800347F4:
    // 0x800347F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800347F8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x800347FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80034800: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80034804: jr          $ra
    // 0x80034808: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80034808: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80077294_52694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80077294: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077298: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8007729C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800772A0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800772A4: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x800772A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800772AC: jal         0x80070050
    // 0x800772B0: nop

    func_80070050_4B450(rdram, ctx);
        goto after_0;
    // 0x800772B0: nop

    after_0:
    // 0x800772B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800772B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800772BC: sw          $zero, 0x49B8($at)
    MEM_W(0X49B8, ctx->r1) = 0;
    // 0x800772C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800772C4: jal         0x80034844
    // 0x800772C8: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_1;
    // 0x800772C8: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_1:
    // 0x800772CC: jal         0x80060590
    // 0x800772D0: addiu       $a0, $zero, 0x7B3
    ctx->r4 = ADD32(0, 0X7B3);
    func_80060590_3B990(rdram, ctx);
        goto after_2;
    // 0x800772D0: addiu       $a0, $zero, 0x7B3
    ctx->r4 = ADD32(0, 0X7B3);
    after_2:
    // 0x800772D4: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x800772D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800772DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800772E0: jr          $ra
    // 0x800772E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800772E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800712C4_4C6C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800712C4: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x800712C8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x800712CC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800712D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800712D4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800712D8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800712DC: jr          $ra
    // 0x800712E0: sh          $zero, 0x5086($at)
    MEM_H(0X5086, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x800712E0: sh          $zero, 0x5086($at)
    MEM_H(0X5086, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80031E84_D284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80031E84: jr          $ra
    // 0x80031E88: nop

    TRACE_RETURN()
    return;
    // 0x80031E88: nop

;}
RECOMP_FUNC void func_80049EDC_252DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80049EDC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80049EE0: jr          $ra
    // 0x80049EE4: sb          $zero, -0x3994($at)
    MEM_B(-0X3994, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80049EE4: sb          $zero, -0x3994($at)
    MEM_B(-0X3994, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8002CC58_8058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002CC58: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8002CC5C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8002CC60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8002CC64: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8002CC68: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x8002CC6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8002CC70: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8002CC74: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x8002CC78: jal         0x8009A3B4
    // 0x8002CC7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8002CC7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8002CC80: lhu         $v0, 0xE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE);
    // 0x8002CC84: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8002CC88: lhu         $v1, -0x77B0($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X77B0);
    // 0x8002CC8C: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x8002CC90: sh          $v1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r3;
    // 0x8002CC94: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8002CC98: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x8002CC9C: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x8002CCA0: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x8002CCA4: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8002CCA8: sb          $v0, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r2;
    // 0x8002CCAC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8002CCB0: sb          $v0, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r2;
    // 0x8002CCB4: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8002CCB8: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8002CCBC: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8002CCC0: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x8002CCC4: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8002CCC8: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8002CCCC: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8002CCD0: sb          $v0, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r2;
    // 0x8002CCD4: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8002CCD8: sb          $v0, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r2;
    // 0x8002CCDC: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8002CCE0: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x8002CCE4: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x8002CCE8: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8002CCEC: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8002CCF0: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8002CCF4: sb          $v0, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r2;
    // 0x8002CCF8: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8002CCFC: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8002CD00: sb          $v0, 0x2D($sp)
    MEM_B(0X2D, ctx->r29) = ctx->r2;
    // 0x8002CD04: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8002CD08: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8002CD0C: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x8002CD10: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x8002CD14: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8002CD18: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x8002CD1C: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8002CD20: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8002CD24: sb          $v0, 0x34($sp)
    MEM_B(0X34, ctx->r29) = ctx->r2;
    // 0x8002CD28: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8002CD2C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8002CD30: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8002CD34: jal         0x8002DFA8
    // 0x8002CD38: sb          $v0, 0x35($sp)
    MEM_B(0X35, ctx->r29) = ctx->r2;
    func_8002DFA8_93A8(rdram, ctx);
        goto after_1;
    // 0x8002CD38: sb          $v0, 0x35($sp)
    MEM_B(0X35, ctx->r29) = ctx->r2;
    after_1:
    // 0x8002CD3C: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x8002CD40: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8002CD44: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8002CD48: jr          $ra
    // 0x8002CD4C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8002CD4C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8008D868_68C68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D868: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D86C: sb          $zero, 0xD2($a0)
    MEM_B(0XD2, ctx->r4) = 0;
    // 0x8008D870: sb          $v0, 0xD3($a0)
    MEM_B(0XD3, ctx->r4) = ctx->r2;
    // 0x8008D874: jr          $ra
    // 0x8008D878: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    TRACE_RETURN()
    return;
    // 0x8008D878: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
;}
RECOMP_FUNC void func_80031BB4_CFB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80031BB4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80031BB8: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x80031BBC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80031BC0: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x80031BC4: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x80031BC8: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x80031BCC: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    // 0x80031BD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80031BD4: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x80031BD8: jal         0x8009A3B4
    // 0x80031BDC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80031BDC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_0:
    // 0x80031BE0: jal         0x80032510
    // 0x80031BE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80032510_D910(rdram, ctx);
        goto after_1;
    // 0x80031BE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80031BE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80031BEC: jal         0x800324D0
    // 0x80031BF0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_800324D0_D8D0(rdram, ctx);
        goto after_2;
    // 0x80031BF0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_2:
    // 0x80031BF4: addu        $t3, $zero, $zero
    ctx->r11 = ADD32(0, 0);
    // 0x80031BF8: addiu       $t1, $sp, 0x10
    ctx->r9 = ADD32(ctx->r29, 0X10);
    // 0x80031BFC: addu        $t2, $s2, $zero
    ctx->r10 = ADD32(ctx->r18, 0);
    // 0x80031C00: negu        $v1, $s0
    ctx->r3 = SUB32(0, ctx->r16);
    // 0x80031C04: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80031C08: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80031C0C: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80031C10: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x80031C14: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    // 0x80031C18: sh          $s0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r16;
    // 0x80031C1C: sh          $zero, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = 0;
    // 0x80031C20: sh          $zero, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = 0;
    // 0x80031C24: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
    // 0x80031C28: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
L_80031C2C:
    // 0x80031C2C: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x80031C30: addu        $a3, $t2, $zero
    ctx->r7 = ADD32(ctx->r10, 0);
    // 0x80031C34: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
L_80031C38:
    // 0x80031C38: lh          $v1, 0x0($t1)
    ctx->r3 = MEM_H(ctx->r9, 0X0);
    // 0x80031C3C: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    // 0x80031C40: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031C44: mflo        $v1
    ctx->r3 = lo;
    // 0x80031C48: lh          $a1, 0x2($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X2);
    // 0x80031C4C: lh          $v0, 0x6($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X6);
    // 0x80031C50: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031C54: mflo        $a1
    ctx->r5 = lo;
    // 0x80031C58: lh          $a0, 0x4($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X4);
    // 0x80031C5C: lh          $v0, 0xC($a2)
    ctx->r2 = MEM_H(ctx->r6, 0XC);
    // 0x80031C60: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031C64: mflo        $a0
    ctx->r4 = lo;
    // 0x80031C68: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80031C6C: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x80031C70: slti        $v0, $t0, 0x3
    ctx->r2 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x80031C74: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80031C78: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80031C7C: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80031C80: sh          $v1, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r3;
    // 0x80031C84: bne         $v0, $zero, L_80031C38
    if (ctx->r2 != 0) {
        // 0x80031C88: addiu       $a3, $a3, 0x2
        ctx->r7 = ADD32(ctx->r7, 0X2);
            goto L_80031C38;
    }
    // 0x80031C88: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x80031C8C: addiu       $t1, $t1, 0x6
    ctx->r9 = ADD32(ctx->r9, 0X6);
    // 0x80031C90: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x80031C94: slti        $v0, $t3, 0x3
    ctx->r2 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x80031C98: bne         $v0, $zero, L_80031C2C
    if (ctx->r2 != 0) {
        // 0x80031C9C: addiu       $t2, $t2, 0x6
        ctx->r10 = ADD32(ctx->r10, 0X6);
            goto L_80031C2C;
    }
    // 0x80031C9C: addiu       $t2, $t2, 0x6
    ctx->r10 = ADD32(ctx->r10, 0X6);
    // 0x80031CA0: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80031CA4: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x80031CA8: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x80031CAC: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x80031CB0: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x80031CB4: jr          $ra
    // 0x80031CB8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80031CB8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80056FF4_323F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80056FF4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80056FF8: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x80056FFC: addiu       $t1, $t1, 0x49B0
    ctx->r9 = ADD32(ctx->r9, 0X49B0);
    // 0x80057000: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80057004: addiu       $t2, $zero, 0x1F
    ctx->r10 = ADD32(0, 0X1F);
    // 0x80057008: subu        $v0, $t2, $a3
    ctx->r2 = SUB32(ctx->r10, ctx->r7);
L_8005700C:
    // 0x8005700C: blez        $v0, L_80057090
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80057010: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80057090;
    }
    // 0x80057010: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80057014: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x80057018: subu        $t0, $v0, $a3
    ctx->r8 = SUB32(ctx->r2, ctx->r7);
    // 0x8005701C: addu        $a1, $t1, $a0
    ctx->r5 = ADD32(ctx->r9, ctx->r4);
L_80057020:
    // 0x80057020: lbu         $v0, 0x455($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X455);
    // 0x80057024: beql        $v0, $zero, L_80057084
    if (ctx->r2 == 0) {
        // 0x80057028: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_80057084;
    }
    goto skip_0;
    // 0x80057028: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x8005702C: lbu         $a2, 0x454($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X454);
    // 0x80057030: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x80057034: beq         $v1, $zero, L_8005706C
    if (ctx->r3 == 0) {
        // 0x80057038: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_8005706C;
    }
    // 0x80057038: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8005703C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80057040: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80057044: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80057048: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005704C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80057050: lb          $v1, -0x1CB5($at)
    ctx->r3 = MEM_B(ctx->r1, -0X1CB5);
    // 0x80057054: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80057058: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005705C: lb          $v0, -0x1CB5($at)
    ctx->r2 = MEM_B(ctx->r1, -0X1CB5);
    // 0x80057060: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80057064: beql        $v1, $zero, L_80057084
    if (ctx->r3 == 0) {
        // 0x80057068: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_80057084;
    }
    goto skip_1;
    // 0x80057068: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_1:
L_8005706C:
    // 0x8005706C: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    // 0x80057070: addu        $v1, $t1, $v1
    ctx->r3 = ADD32(ctx->r9, ctx->r3);
    // 0x80057074: lbu         $v0, 0x454($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X454);
    // 0x80057078: sb          $v0, 0x454($a1)
    MEM_B(0X454, ctx->r5) = ctx->r2;
    // 0x8005707C: sb          $a2, 0x454($v1)
    MEM_B(0X454, ctx->r3) = ctx->r6;
    // 0x80057080: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_80057084:
    // 0x80057084: slt         $v0, $a0, $t0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80057088: bne         $v0, $zero, L_80057020
    if (ctx->r2 != 0) {
        // 0x8005708C: addu        $a1, $t1, $a0
        ctx->r5 = ADD32(ctx->r9, ctx->r4);
            goto L_80057020;
    }
    // 0x8005708C: addu        $a1, $t1, $a0
    ctx->r5 = ADD32(ctx->r9, ctx->r4);
L_80057090:
    // 0x80057090: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80057094: slti        $v0, $a3, 0x1F
    ctx->r2 = SIGNED(ctx->r7) < 0X1F ? 1 : 0;
    // 0x80057098: bne         $v0, $zero, L_8005700C
    if (ctx->r2 != 0) {
        // 0x8005709C: subu        $v0, $t2, $a3
        ctx->r2 = SUB32(ctx->r10, ctx->r7);
            goto L_8005700C;
    }
    // 0x8005709C: subu        $v0, $t2, $a3
    ctx->r2 = SUB32(ctx->r10, ctx->r7);
    // 0x800570A0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x800570A4: jr          $ra
    // 0x800570A8: nop

    TRACE_RETURN()
    return;
    // 0x800570A8: nop

;}
RECOMP_FUNC void func_8006203C_3D43C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006203C: lbu         $v0, 0x3B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3B);
    // 0x80062040: lw          $v1, 0x6C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X6C);
    // 0x80062044: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80062048: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8006204C: sb          $v0, 0x3B($a0)
    MEM_B(0X3B, ctx->r4) = ctx->r2;
    // 0x80062050: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80062054: jr          $ra
    // 0x80062058: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80062058: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_8008ADE8_661E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008ADE8: bne         $a0, $zero, L_8008ADF8
    if (ctx->r4 != 0) {
        // 0x8008ADEC: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_8008ADF8;
    }
    // 0x8008ADEC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008ADF0: j           L_8008AE38
    // 0x8008ADF4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8008AE38;
    // 0x8008ADF4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8008ADF8:
    // 0x8008ADF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8008ADFC: lui         $a3, 0x8018
    ctx->r7 = S32(0X8018 << 16);
    // 0x8008AE00: lw          $a3, 0x4F84($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X4F84);
    // 0x8008AE04: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008AE08: lw          $v1, 0x4F8C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4F8C);
    // 0x8008AE0C: blez        $a3, L_8008AE34
    if (SIGNED(ctx->r7) <= 0) {
        // 0x8008AE10: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8008AE34;
    }
    // 0x8008AE10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8008AE14:
    // 0x8008AE14: lw          $v0, 0x44($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X44);
    // 0x8008AE18: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8008AE1C: xor         $v0, $v0, $a0
    ctx->r2 = ctx->r2 ^ ctx->r4;
    // 0x8008AE20: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8008AE24: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8008AE28: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8008AE2C: bne         $v0, $zero, L_8008AE14
    if (ctx->r2 != 0) {
        // 0x8008AE30: addiu       $v1, $v1, 0x13C
        ctx->r3 = ADD32(ctx->r3, 0X13C);
            goto L_8008AE14;
    }
    // 0x8008AE30: addiu       $v1, $v1, 0x13C
    ctx->r3 = ADD32(ctx->r3, 0X13C);
L_8008AE34:
    // 0x8008AE34: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
L_8008AE38:
    // 0x8008AE38: jr          $ra
    // 0x8008AE3C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8008AE3C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80029F1C_531C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80029F1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80029F20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80029F24: bne         $a0, $zero, L_80029F3C
    if (ctx->r4 != 0) {
        // 0x80029F28: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_80029F3C;
    }
    // 0x80029F28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80029F2C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80029F30: lbu         $v1, -0x3BC7($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3BC7);
    // 0x80029F34: j           L_80029F48
    // 0x80029F38: lui         $v0, 0x5555
    ctx->r2 = S32(0X5555 << 16);
        goto L_80029F48;
    // 0x80029F38: lui         $v0, 0x5555
    ctx->r2 = S32(0X5555 << 16);
L_80029F3C:
    // 0x80029F3C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80029F40: lbu         $v1, 0x47CF($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X47CF);
    // 0x80029F44: lui         $v0, 0x5555
    ctx->r2 = S32(0X5555 << 16);
L_80029F48:
    // 0x80029F48: ori         $v0, $v0, 0x5556
    ctx->r2 = ctx->r2 | 0X5556;
    // 0x80029F4C: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80029F50: sra         $s0, $v1, 24
    ctx->r16 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80029F54: mult        $s0, $v0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80029F58: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80029F5C: mfhi        $a1
    ctx->r5 = hi;
    // 0x80029F60: subu        $v1, $a1, $v1
    ctx->r3 = SUB32(ctx->r5, ctx->r3);
    // 0x80029F64: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80029F68: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80029F6C: subu        $v0, $s0, $v0
    ctx->r2 = SUB32(ctx->r16, ctx->r2);
    // 0x80029F70: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80029F74: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80029F78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80029F7C: beq         $v1, $v0, L_80029FD4
    if (ctx->r3 == ctx->r2) {
        // 0x80029F80: addiu       $a0, $zero, 0x617
        ctx->r4 = ADD32(0, 0X617);
            goto L_80029FD4;
    }
    // 0x80029F80: addiu       $a0, $zero, 0x617
    ctx->r4 = ADD32(0, 0X617);
    // 0x80029F84: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80029F88: beql        $v0, $zero, L_80029FA0
    if (ctx->r2 == 0) {
        // 0x80029F8C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80029FA0;
    }
    goto skip_0;
    // 0x80029F8C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80029F90: beq         $v1, $zero, L_80029FB0
    if (ctx->r3 == 0) {
        // 0x80029F94: addiu       $a0, $zero, 0x616
        ctx->r4 = ADD32(0, 0X616);
            goto L_80029FB0;
    }
    // 0x80029F94: addiu       $a0, $zero, 0x616
    ctx->r4 = ADD32(0, 0X616);
    // 0x80029F98: j           L_8002A01C
    // 0x80029F9C: nop

        goto L_8002A01C;
    // 0x80029F9C: nop

L_80029FA0:
    // 0x80029FA0: beq         $v1, $v0, L_80029FF8
    if (ctx->r3 == ctx->r2) {
        // 0x80029FA4: addiu       $a0, $zero, 0x68
        ctx->r4 = ADD32(0, 0X68);
            goto L_80029FF8;
    }
    // 0x80029FA4: addiu       $a0, $zero, 0x68
    ctx->r4 = ADD32(0, 0X68);
    // 0x80029FA8: j           L_8002A01C
    // 0x80029FAC: nop

        goto L_8002A01C;
    // 0x80029FAC: nop

L_80029FB0:
    // 0x80029FB0: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80029FB4: addiu       $v0, $v0, 0x705C
    ctx->r2 = ADD32(ctx->r2, 0X705C);
    // 0x80029FB8: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x80029FBC: jal         0x8006033C
    // 0x80029FC0: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80029FC0: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x80029FC4: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80029FC8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80029FCC: j           L_8002A018
    // 0x80029FD0: ori         $v0, $v0, 0x3A
    ctx->r2 = ctx->r2 | 0X3A;
        goto L_8002A018;
    // 0x80029FD0: ori         $v0, $v0, 0x3A
    ctx->r2 = ctx->r2 | 0X3A;
L_80029FD4:
    // 0x80029FD4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80029FD8: addiu       $v0, $v0, 0x705C
    ctx->r2 = ADD32(ctx->r2, 0X705C);
    // 0x80029FDC: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x80029FE0: jal         0x8006033C
    // 0x80029FE4: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80029FE4: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_1:
    // 0x80029FE8: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80029FEC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80029FF0: j           L_8002A018
    // 0x80029FF4: ori         $v0, $v0, 0x3B
    ctx->r2 = ctx->r2 | 0X3B;
        goto L_8002A018;
    // 0x80029FF4: ori         $v0, $v0, 0x3B
    ctx->r2 = ctx->r2 | 0X3B;
L_80029FF8:
    // 0x80029FF8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80029FFC: addiu       $v0, $v0, 0x705C
    ctx->r2 = ADD32(ctx->r2, 0X705C);
    // 0x8002A000: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x8002A004: jal         0x8006033C
    // 0x8002A008: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8002A008: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_2:
    // 0x8002A00C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8002A010: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8002A014: ori         $v0, $v0, 0x3C
    ctx->r2 = ctx->r2 | 0X3C;
L_8002A018:
    // 0x8002A018: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_8002A01C:
    // 0x8002A01C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002A020: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8002A024: jr          $ra
    // 0x8002A028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002A028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800512D4_2C6D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800512D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800512D8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x800512DC: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x800512E0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x800512E4: sb          $v0, 0x542($a0)
    MEM_B(0X542, ctx->r4) = ctx->r2;
    // 0x800512E8: sb          $v0, 0x541($a0)
    MEM_B(0X541, ctx->r4) = ctx->r2;
    // 0x800512EC: sb          $v0, 0x540($a0)
    MEM_B(0X540, ctx->r4) = ctx->r2;
L_800512F0:
    // 0x800512F0: sb          $a2, 0x546($v1)
    MEM_B(0X546, ctx->r3) = ctx->r6;
    // 0x800512F4: sb          $a2, 0x545($v1)
    MEM_B(0X545, ctx->r3) = ctx->r6;
    // 0x800512F8: sb          $a2, 0x544($v1)
    MEM_B(0X544, ctx->r3) = ctx->r6;
    // 0x800512FC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80051300: slti        $v0, $a1, 0x18
    ctx->r2 = SIGNED(ctx->r5) < 0X18 ? 1 : 0;
    // 0x80051304: bne         $v0, $zero, L_800512F0
    if (ctx->r2 != 0) {
        // 0x80051308: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_800512F0;
    }
    // 0x80051308: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8005130C: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x80051310: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80051314: jr          $ra
    // 0x80051318: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80051318: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8003B840_16C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B840: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B844: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8003B848: jal         0x80082C70
    // 0x8003B84C: nop

    func_80082C70_5E070(rdram, ctx);
        goto after_0;
    // 0x8003B84C: nop

    after_0:
    // 0x8003B850: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8003B854: jr          $ra
    // 0x8003B858: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8003B858: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004A6B4_25AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A6B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004A6B8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8004A6BC: jal         0x8004A6D8
    // 0x8004A6C0: nop

    func_8004A6D8_25AD8(rdram, ctx);
        goto after_0;
    // 0x8004A6C0: nop

    after_0:
    // 0x8004A6C4: jal         0x8004A81C
    // 0x8004A6C8: nop

    func_8004A81C_25C1C(rdram, ctx);
        goto after_1;
    // 0x8004A6C8: nop

    after_1:
    // 0x8004A6CC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8004A6D0: jr          $ra
    // 0x8004A6D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8004A6D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80026838_1C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80026838: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8002683C: lw          $v0, -0x46DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X46DC);
    // 0x80026840: beq         $v0, $zero, L_80026878
    if (ctx->r2 == 0) {
        // 0x80026844: nop
    
            goto L_80026878;
    }
    // 0x80026844: nop

    // 0x80026848: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_8002684C:
    // 0x8002684C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80026850: beq         $a0, $zero, L_8002686C
    if (ctx->r4 == 0) {
        // 0x80026854: sw          $a1, 0x24($v0)
        MEM_W(0X24, ctx->r2) = ctx->r5;
            goto L_8002686C;
    }
    // 0x80026854: sw          $a1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r5;
    // 0x80026858: lh          $v0, 0x2C($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X2C);
    // 0x8002685C: lh          $v1, 0x2C($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2C);
    // 0x80026860: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80026864: beq         $v0, $zero, L_80026878
    if (ctx->r2 == 0) {
        // 0x80026868: nop
    
            goto L_80026878;
    }
    // 0x80026868: nop

L_8002686C:
    // 0x8002686C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80026870: bne         $v0, $zero, L_8002684C
    if (ctx->r2 != 0) {
        // 0x80026874: nop
    
            goto L_8002684C;
    }
    // 0x80026874: nop

L_80026878:
    // 0x80026878: jr          $ra
    // 0x8002687C: nop

    TRACE_RETURN()
    return;
    // 0x8002687C: nop

;}
RECOMP_FUNC void func_80084DA8_601A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80084DA8: srl         $v1, $a0, 16
    ctx->r3 = S32(U32(ctx->r4) >> 16);
    // 0x80084DAC: andi        $v0, $v1, 0x3F
    ctx->r2 = ctx->r3 & 0X3F;
    // 0x80084DB0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80084DB4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80084DB8: sra         $v1, $v1, 22
    ctx->r3 = S32(SIGNED(ctx->r3) >> 22);
    // 0x80084DBC: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x80084DC0: sll         $v0, $a0, 6
    ctx->r2 = S32(ctx->r4 << 6);
    // 0x80084DC4: andi        $v0, $v0, 0x7C0
    ctx->r2 = ctx->r2 & 0X7C0;
    // 0x80084DC8: sh          $v1, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r3;
    // 0x80084DCC: sll         $v1, $a0, 4
    ctx->r3 = S32(ctx->r4 << 4);
    // 0x80084DD0: andi        $v1, $v1, 0x100
    ctx->r3 = ctx->r3 & 0X100;
    // 0x80084DD4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80084DD8: sh          $v0, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r2;
    // 0x80084DDC: sra         $v0, $a0, 18
    ctx->r2 = S32(SIGNED(ctx->r4) >> 18);
    // 0x80084DE0: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x80084DE4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80084DE8: sra         $v0, $a0, 23
    ctx->r2 = S32(SIGNED(ctx->r4) >> 23);
    // 0x80084DEC: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80084DF0: sra         $a0, $a0, 21
    ctx->r4 = S32(SIGNED(ctx->r4) >> 21);
    // 0x80084DF4: andi        $a0, $a0, 0x3
    ctx->r4 = ctx->r4 & 0X3;
    // 0x80084DF8: sb          $v0, 0x8($a2)
    MEM_B(0X8, ctx->r6) = ctx->r2;
    // 0x80084DFC: srl         $v0, $a1, 8
    ctx->r2 = S32(U32(ctx->r5) >> 8);
    // 0x80084E00: sb          $v0, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r2;
    // 0x80084E04: srl         $v0, $a1, 16
    ctx->r2 = S32(U32(ctx->r5) >> 16);
    // 0x80084E08: sb          $a1, 0xB($a2)
    MEM_B(0XB, ctx->r6) = ctx->r5;
    // 0x80084E0C: srl         $a1, $a1, 25
    ctx->r5 = S32(U32(ctx->r5) >> 25);
    // 0x80084E10: andi        $a1, $a1, 0x1
    ctx->r5 = ctx->r5 & 0X1;
    // 0x80084E14: sh          $v1, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r3;
    // 0x80084E18: sb          $a0, 0xA($a2)
    MEM_B(0XA, ctx->r6) = ctx->r4;
    // 0x80084E1C: sb          $v0, 0xD($a2)
    MEM_B(0XD, ctx->r6) = ctx->r2;
    // 0x80084E20: jr          $ra
    // 0x80084E24: sb          $a1, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80084E24: sb          $a1, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r5;
;}
RECOMP_FUNC void bcmp_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800A0A20: xor         $v0, $a0, $a1
    ctx->r2 = ctx->r4 ^ ctx->r5;
    // 0x800A0A24: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x800A0A28: bne         $at, $zero, L_800A0AFC
    if (ctx->r1 != 0) {
        // 0x800A0A2C: nop
    
            goto L_800A0AFC;
    }
    // 0x800A0A2C: nop

    // 0x800A0A30: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x800A0A34: bne         $v0, $zero, L_800A0A98
    if (ctx->r2 != 0) {
        // 0x800A0A38: negu        $t8, $a0
        ctx->r24 = SUB32(0, ctx->r4);
            goto L_800A0A98;
    }
    // 0x800A0A38: negu        $t8, $a0
    ctx->r24 = SUB32(0, ctx->r4);
    // 0x800A0A3C: andi        $t8, $t8, 0x3
    ctx->r24 = ctx->r24 & 0X3;
    // 0x800A0A40: beq         $t8, $zero, L_800A0A60
    if (ctx->r24 == 0) {
        // 0x800A0A44: subu        $a2, $a2, $t8
        ctx->r6 = SUB32(ctx->r6, ctx->r24);
            goto L_800A0A60;
    }
    // 0x800A0A44: subu        $a2, $a2, $t8
    ctx->r6 = SUB32(ctx->r6, ctx->r24);
    // 0x800A0A48: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x800A0A4C: lwl         $v0, 0x0($a0)
    ctx->r2 = do_lwl(rdram, ctx->r2, ctx->r4, 0X0);
    // 0x800A0A50: lwl         $v1, 0x0($a1)
    ctx->r3 = do_lwl(rdram, ctx->r3, ctx->r5, 0X0);
    // 0x800A0A54: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x800A0A58: bne         $v0, $v1, L_800A0B28
    if (ctx->r2 != ctx->r3) {
        // 0x800A0A5C: addu        $a1, $a1, $t8
        ctx->r5 = ADD32(ctx->r5, ctx->r24);
            goto L_800A0B28;
    }
    // 0x800A0A5C: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
L_800A0A60:
    // 0x800A0A60: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x800A0A64: and         $a3, $a2, $at
    ctx->r7 = ctx->r6 & ctx->r1;
    // 0x800A0A68: beq         $a3, $zero, L_800A0AFC
    if (ctx->r7 == 0) {
        // 0x800A0A6C: subu        $a2, $a2, $a3
        ctx->r6 = SUB32(ctx->r6, ctx->r7);
            goto L_800A0AFC;
    }
    // 0x800A0A6C: subu        $a2, $a2, $a3
    ctx->r6 = SUB32(ctx->r6, ctx->r7);
    // 0x800A0A70: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
L_800A0A74:
    // 0x800A0A74: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800A0A78: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x800A0A7C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800A0A80: bne         $v0, $v1, L_800A0B28
    if (ctx->r2 != ctx->r3) {
        // 0x800A0A84: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_800A0B28;
    }
    // 0x800A0A84: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x800A0A88: bne         $a0, $a3, L_800A0A74
    if (ctx->r4 != ctx->r7) {
        // 0x800A0A8C: nop
    
            goto L_800A0A74;
    }
    // 0x800A0A8C: nop

    // 0x800A0A90: b           L_800A0AFC
    // 0x800A0A94: nop

        goto L_800A0AFC;
    // 0x800A0A94: nop

L_800A0A98:
    // 0x800A0A98: negu        $a3, $a1
    ctx->r7 = SUB32(0, ctx->r5);
    // 0x800A0A9C: andi        $a3, $a3, 0x3
    ctx->r7 = ctx->r7 & 0X3;
    // 0x800A0AA0: beq         $a3, $zero, L_800A0AC8
    if (ctx->r7 == 0) {
        // 0x800A0AA4: subu        $a2, $a2, $a3
        ctx->r6 = SUB32(ctx->r6, ctx->r7);
            goto L_800A0AC8;
    }
    // 0x800A0AA4: subu        $a2, $a2, $a3
    ctx->r6 = SUB32(ctx->r6, ctx->r7);
    // 0x800A0AA8: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
L_800A0AAC:
    // 0x800A0AAC: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x800A0AB0: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x800A0AB4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800A0AB8: bne         $v0, $v1, L_800A0B28
    if (ctx->r2 != ctx->r3) {
        // 0x800A0ABC: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_800A0B28;
    }
    // 0x800A0ABC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800A0AC0: bne         $a0, $a3, L_800A0AAC
    if (ctx->r4 != ctx->r7) {
        // 0x800A0AC4: nop
    
            goto L_800A0AAC;
    }
    // 0x800A0AC4: nop

L_800A0AC8:
    // 0x800A0AC8: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x800A0ACC: and         $a3, $a2, $at
    ctx->r7 = ctx->r6 & ctx->r1;
    // 0x800A0AD0: beq         $a3, $zero, L_800A0AFC
    if (ctx->r7 == 0) {
        // 0x800A0AD4: subu        $a2, $a2, $a3
        ctx->r6 = SUB32(ctx->r6, ctx->r7);
            goto L_800A0AFC;
    }
    // 0x800A0AD4: subu        $a2, $a2, $a3
    ctx->r6 = SUB32(ctx->r6, ctx->r7);
    // 0x800A0AD8: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
L_800A0ADC:
    // 0x800A0ADC: lwl         $v0, 0x0($a0)
    ctx->r2 = do_lwl(rdram, ctx->r2, ctx->r4, 0X0);
    // 0x800A0AE0: lwr         $v0, 0x3($a0)
    ctx->r2 = do_lwr(rdram, ctx->r2, ctx->r4, 0X3);
    // 0x800A0AE4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x800A0AE8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800A0AEC: bne         $v0, $v1, L_800A0B28
    if (ctx->r2 != ctx->r3) {
        // 0x800A0AF0: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_800A0B28;
    }
    // 0x800A0AF0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x800A0AF4: bne         $a0, $a3, L_800A0ADC
    if (ctx->r4 != ctx->r7) {
        // 0x800A0AF8: nop
    
            goto L_800A0ADC;
    }
    // 0x800A0AF8: nop

L_800A0AFC:
    // 0x800A0AFC: blez        $a2, L_800A0B20
    if (SIGNED(ctx->r6) <= 0) {
        // 0x800A0B00: addu        $a3, $a2, $a0
        ctx->r7 = ADD32(ctx->r6, ctx->r4);
            goto L_800A0B20;
    }
    // 0x800A0B00: addu        $a3, $a2, $a0
    ctx->r7 = ADD32(ctx->r6, ctx->r4);
L_800A0B04:
    // 0x800A0B04: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x800A0B08: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x800A0B0C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800A0B10: bne         $v0, $v1, L_800A0B28
    if (ctx->r2 != ctx->r3) {
        // 0x800A0B14: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_800A0B28;
    }
    // 0x800A0B14: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800A0B18: bne         $a0, $a3, L_800A0B04
    if (ctx->r4 != ctx->r7) {
        // 0x800A0B1C: nop
    
            goto L_800A0B04;
    }
    // 0x800A0B1C: nop

L_800A0B20:
    // 0x800A0B20: jr          $ra
    // 0x800A0B24: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    TRACE_RETURN()
    return;
    // 0x800A0B24: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800A0B28:
    // 0x800A0B28: jr          $ra
    // 0x800A0B2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x800A0B2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8008DB80_68F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008DB80: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008DB84: sb          $v0, 0xD4($a0)
    MEM_B(0XD4, ctx->r4) = ctx->r2;
    // 0x8008DB88: jr          $ra
    // 0x8008DB8C: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    TRACE_RETURN()
    return;
    // 0x8008DB8C: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
;}
RECOMP_FUNC void func_8004DEE8_292E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004DEE8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8004DEEC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8004DEF0: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x8004DEF4: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x8004DEF8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004DEFC: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004DF00: mflo        $a2
    ctx->r6 = lo;
    // 0x8004DF04: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8004DF08: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x8004DF0C: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x8004DF10: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004DF14: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004DF18: mflo        $a0
    ctx->r4 = lo;
    // 0x8004DF1C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8004DF20: nop

    // 0x8004DF24: jal         0x80032424
    // 0x8004DF28: addu        $a0, $a2, $a0
    ctx->r4 = ADD32(ctx->r6, ctx->r4);
    func_80032424_D824(rdram, ctx);
        goto after_0;
    // 0x8004DF28: addu        $a0, $a2, $a0
    ctx->r4 = ADD32(ctx->r6, ctx->r4);
    after_0:
    // 0x8004DF2C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8004DF30: jr          $ra
    // 0x8004DF34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8004DF34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8003BD00_17100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003BD00: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8003BD04: blez        $a2, L_8003BD28
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8003BD08: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8003BD28;
    }
    // 0x8003BD08: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8003BD0C:
    // 0x8003BD0C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003BD10: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8003BD14: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8003BD18: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8003BD1C: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8003BD20: bne         $v0, $zero, L_8003BD0C
    if (ctx->r2 != 0) {
        // 0x8003BD24: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_8003BD0C;
    }
    // 0x8003BD24: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_8003BD28:
    // 0x8003BD28: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8003BD2C: jr          $ra
    // 0x8003BD30: nop

    TRACE_RETURN()
    return;
    // 0x8003BD30: nop

;}
RECOMP_FUNC void func_80037244_12644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037244: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80037248: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8003724C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037250: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80037254: beq         $v1, $v0, L_80037264
    if (ctx->r3 == ctx->r2) {
        // 0x80037258: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80037264;
    }
    // 0x80037258: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8003725C: jal         0x80061724
    // 0x80037260: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_0;
    // 0x80037260: nop

    after_0:
L_80037264:
    // 0x80037264: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80037268: addiu       $v1, $v1, -0xC6E
    ctx->r3 = ADD32(ctx->r3, -0XC6E);
    // 0x8003726C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80037270: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80037274: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80037278: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8003727C: jr          $ra
    // 0x80037280: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80037280: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004D5D4_289D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004D5D4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x8004D5D8: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8004D5DC: lw          $a1, -0x267C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X267C);
    // 0x8004D5E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004D5E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8004D5E8: jal         0x8004D64C
    // 0x8004D5EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8004D64C_28A4C(rdram, ctx);
        goto after_0;
    // 0x8004D5EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8004D5F0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8004D5F4: jr          $ra
    // 0x8004D5F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8004D5F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8005F550_3A950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005F550: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8005F554: lbu         $v0, 0x9D3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9D3);
    // 0x8005F558: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8005F55C: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x8005F560: addiu       $a3, $a3, 0x9D0
    ctx->r7 = ADD32(ctx->r7, 0X9D0);
    // 0x8005F564: bne         $v0, $zero, L_8005F5C4
    if (ctx->r2 != 0) {
        // 0x8005F568: sw          $ra, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r31;
            goto L_8005F5C4;
    }
    // 0x8005F568: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8005F56C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8005F570: lw          $v0, 0x9E0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9E0);
    // 0x8005F574: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8005F578: lw          $v1, 0xA70($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XA70);
    // 0x8005F57C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8005F580: lw          $a0, 0xA74($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XA74);
    // 0x8005F584: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005F588: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8005F58C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8005F590: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8005F594: lw          $v0, 0x9E4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9E4);
    // 0x8005F598: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8005F59C: lw          $a1, 0xA78($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XA78);
    // 0x8005F5A0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8005F5A4: lw          $v1, 0x9E8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9E8);
    // 0x8005F5A8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8005F5AC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8005F5B0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8005F5B4: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8005F5B8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8005F5BC: j           L_8005F63C
    // 0x8005F5C0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
        goto L_8005F63C;
    // 0x8005F5C0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
L_8005F5C4:
    // 0x8005F5C4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8005F5C8: lbu         $v0, 0x9D9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9D9);
    // 0x8005F5CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8005F5D0: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8005F5D4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8005F5D8: lw          $a1, -0x3A2C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3A2C);
    // 0x8005F5DC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8005F5E0: lw          $v0, 0xA80($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XA80);
    // 0x8005F5E4: lw          $a0, 0x1C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X1C);
    // 0x8005F5E8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8005F5EC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8005F5F0: sw          $a0, 0x9E0($at)
    MEM_W(0X9E0, ctx->r1) = ctx->r4;
    // 0x8005F5F4: lw          $v1, 0x20($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X20);
    // 0x8005F5F8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8005F5FC: lw          $v0, 0xA84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XA84);
    // 0x8005F600: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005F604: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8005F608: sw          $v1, 0x9E4($at)
    MEM_W(0X9E4, ctx->r1) = ctx->r3;
    // 0x8005F60C: lw          $v0, 0x24($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X24);
    // 0x8005F610: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8005F614: lw          $a1, 0xA88($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XA88);
    // 0x8005F618: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8005F61C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8005F620: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x8005F624: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x8005F628: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8005F62C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8005F630: sw          $v0, 0x9E8($at)
    MEM_W(0X9E8, ctx->r1) = ctx->r2;
    // 0x8005F634: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8005F638: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
L_8005F63C:
    // 0x8005F63C: lbu         $v0, 0x8($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X8);
    // 0x8005F640: bne         $v0, $zero, L_8005F664
    if (ctx->r2 != 0) {
        // 0x8005F644: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8005F664;
    }
    // 0x8005F644: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8005F648: lh          $a1, 0x48($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X48);
    // 0x8005F64C: lh          $a2, 0x40($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X40);
    // 0x8005F650: lh          $a3, 0x44($a3)
    ctx->r7 = MEM_H(ctx->r7, 0X44);
    // 0x8005F654: jal         0x800332EC
    // 0x8005F658: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_800332EC_E6EC(rdram, ctx);
        goto after_0;
    // 0x8005F658: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x8005F65C: j           L_8005F6A8
    // 0x8005F660: nop

        goto L_8005F6A8;
    // 0x8005F660: nop

L_8005F664:
    // 0x8005F664: lw          $v0, 0x70($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X70);
    // 0x8005F668: lw          $v1, 0xA0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XA0);
    // 0x8005F66C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8005F670: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005F674: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8005F678: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8005F67C: lw          $v0, 0x74($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X74);
    // 0x8005F680: lw          $a2, 0xA4($a3)
    ctx->r6 = MEM_W(ctx->r7, 0XA4);
    // 0x8005F684: lw          $v1, 0x78($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X78);
    // 0x8005F688: lw          $a3, 0xA8($a3)
    ctx->r7 = MEM_W(ctx->r7, 0XA8);
    // 0x8005F68C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8005F690: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8005F694: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x8005F698: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8005F69C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8005F6A0: jal         0x80033468
    // 0x8005F6A4: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_80033468_E868(rdram, ctx);
        goto after_1;
    // 0x8005F6A4: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_1:
L_8005F6A8:
    // 0x8005F6A8: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8005F6AC: jr          $ra
    // 0x8005F6B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8005F6B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8008FDDC_6B1DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008FDDC: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x8008FDE0: bne         $v0, $zero, L_8008FE14
    if (ctx->r2 != 0) {
        // 0x8008FDE4: lw          $a1, 0x14($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X14);
            goto L_8008FE14;
    }
    // 0x8008FDE4: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x8008FDE8: c.le.d      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.d <= ctx->f14.d;
    // 0x8008FDEC: nop

    // 0x8008FDF0: nop

    // 0x8008FDF4: bc1f        L_8008FE08
    if (!c1cs) {
        // 0x8008FDF8: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_8008FE08;
    }
    // 0x8008FDF8: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x8008FDFC: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x8008FE00: j           L_8008FF14
    // 0x8008FE04: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
        goto L_8008FF14;
    // 0x8008FE04: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_8008FE08:
    // 0x8008FE08: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x8008FE0C: j           L_8008FF14
    // 0x8008FE10: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
        goto L_8008FF14;
    // 0x8008FE10: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
L_8008FE14:
    // 0x8008FE14: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008FE18: ldc1        $f4, 0x2E78($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X2E78);
    // 0x8008FE1C: c.lt.d      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.d < ctx->f4.d;
    // 0x8008FE20: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x8008FE24: nop

    // 0x8008FE28: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x8008FE2C: bc1f        L_8008FE38
    if (!c1cs) {
        // 0x8008FE30: div.d       $f2, $f4, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = DIV_D(ctx->f4.d, ctx->f0.d);
            goto L_8008FE38;
    }
    // 0x8008FE30: div.d       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x8008FE34: mov.d       $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.d = ctx->f4.d;
L_8008FE38:
    // 0x8008FE38: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8008FE3C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x8008FE40: nop

    // 0x8008FE44: c.le.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d <= ctx->f0.d;
    // 0x8008FE48: nop

    // 0x8008FE4C: nop

    // 0x8008FE50: bc1tl       L_8008FE58
    if (c1cs) {
        // 0x8008FE54: mov.d       $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = ctx->f4.d;
            goto L_8008FE58;
    }
    goto skip_0;
    // 0x8008FE54: mov.d       $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = ctx->f4.d;
    skip_0:
L_8008FE58:
    // 0x8008FE58: sub.d       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = ctx->f14.d - ctx->f12.d;
    // 0x8008FE5C: mul.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f2.d);
    // 0x8008FE60: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008FE64: ldc1        $f2, 0x2E80($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X2E80);
    // 0x8008FE68: mul.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f2.d);
    // 0x8008FE6C: trunc.w.d   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x8008FE70: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x8008FE74: nop

    // 0x8008FE78: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8008FE7C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8008FE80: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x8008FE84: nop

    // 0x8008FE88: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x8008FE8C: sub.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d - ctx->f2.d;
    // 0x8008FE90: add.d       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = ctx->f0.d + ctx->f4.d;
    // 0x8008FE94: trunc.w.d   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x8008FE98: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x8008FE9C: nop

    // 0x8008FEA0: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8008FEA4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8008FEA8: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x8008FEAC: nop

    // 0x8008FEB0: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x8008FEB4: sub.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d - ctx->f2.d;
    // 0x8008FEB8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008FEBC: ldc1        $f2, 0x2E88($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X2E88);
    // 0x8008FEC0: mul.d       $f2, $f0, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = MUL_D(ctx->f0.d, ctx->f2.d);
    // 0x8008FEC4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008FEC8: ldc1        $f0, 0x2E90($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X2E90);
    // 0x8008FECC: c.le.d      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.d <= ctx->f2.d;
    // 0x8008FED0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8008FED4: nop

    // 0x8008FED8: bc1t        L_8008FEF4
    if (c1cs) {
        // 0x8008FEDC: addu        $v1, $v1, $a0
        ctx->r3 = ADD32(ctx->r3, ctx->r4);
            goto L_8008FEF4;
    }
    // 0x8008FEDC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8008FEE0: trunc.w.d   $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.u32l = TRUNC_W_D(ctx->f2.d);
    // 0x8008FEE4: mfc1        $a0, $f0
    ctx->r4 = (int32_t)ctx->f0.u32l;
    // 0x8008FEE8: nop

    // 0x8008FEEC: j           L_8008FF0C
    // 0x8008FEF0: sh          $a0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r4;
        goto L_8008FF0C;
    // 0x8008FEF0: sh          $a0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r4;
L_8008FEF4:
    // 0x8008FEF4: sub.d       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f2.d - ctx->f0.d;
    // 0x8008FEF8: trunc.w.d   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x8008FEFC: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x8008FF00: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x8008FF04: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8008FF08: sh          $a0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r4;
L_8008FF0C:
    // 0x8008FF0C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8008FF10: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
L_8008FF14:
    // 0x8008FF14: jr          $ra
    // 0x8008FF18: nop

    TRACE_RETURN()
    return;
    // 0x8008FF18: nop

;}
RECOMP_FUNC void func_8002B29C_669C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002B29C: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x8002B2A0: addiu       $v0, $v0, -0x26E4
    ctx->r2 = ADD32(ctx->r2, -0X26E4);
    // 0x8002B2A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8002B2A8: sw          $v0, 0x56FC($at)
    MEM_W(0X56FC, ctx->r1) = ctx->r2;
    // 0x8002B2AC: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8002B2B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8002B2B4: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8002B2B8: sw          $v0, -0x26DC($at)
    MEM_W(-0X26DC, ctx->r1) = ctx->r2;
    // 0x8002B2BC: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8002B2C0: jr          $ra
    // 0x8002B2C4: sw          $zero, -0x72D8($at)
    MEM_W(-0X72D8, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x8002B2C4: sw          $zero, -0x72D8($at)
    MEM_W(-0X72D8, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80061090_3C490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80061090: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80061094: sw          $zero, -0x2414($at)
    MEM_W(-0X2414, ctx->r1) = 0;
    // 0x80061098: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8006109C: sw          $zero, -0x2410($at)
    MEM_W(-0X2410, ctx->r1) = 0;
    // 0x800610A0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800610A4: jr          $ra
    // 0x800610A8: sw          $zero, -0x240C($at)
    MEM_W(-0X240C, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x800610A8: sw          $zero, -0x240C($at)
    MEM_W(-0X240C, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8005974C_34B4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005974C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80059750: lw          $v0, -0x3E40($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3E40);
    // 0x80059754: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80059758: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8005975C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80059760: lui         $v1, 0x305
    ctx->r3 = S32(0X305 << 16);
    // 0x80059764: bne         $v0, $v1, L_80059784
    if (ctx->r2 != ctx->r3) {
        // 0x80059768: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80059784;
    }
    // 0x80059768: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8005976C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80059770: lbu         $v0, -0x3E3E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3E3E);
    // 0x80059774: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x80059778: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8005977C: bne         $v0, $zero, L_80059790
    if (ctx->r2 != 0) {
        // 0x80059780: nop
    
            goto L_80059790;
    }
    // 0x80059780: nop

L_80059784:
    // 0x80059784: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80059788: jal         0x8003A2EC
    // 0x8005978C: lw          $a0, -0x4850($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4850);
    func_8003A2EC_156EC(rdram, ctx);
        goto after_0;
    // 0x8005978C: lw          $a0, -0x4850($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4850);
    after_0:
L_80059790:
    // 0x80059790: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80059794: jal         0x8003A2EC
    // 0x80059798: lw          $a0, -0x484C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X484C);
    func_8003A2EC_156EC(rdram, ctx);
        goto after_1;
    // 0x80059798: lw          $a0, -0x484C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X484C);
    after_1:
    // 0x8005979C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800597A0: jr          $ra
    // 0x800597A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800597A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80062EFC_3E2FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80062EFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80062F00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80062F04: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80062F08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80062F0C: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x80062F10: lbu         $a0, 0x2($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X2);
    // 0x80062F14: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x80062F18: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80062F1C: jal         0x8006033C
    // 0x80062F20: or          $a0, $v0, $a0
    ctx->r4 = ctx->r2 | ctx->r4;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80062F20: or          $a0, $v0, $a0
    ctx->r4 = ctx->r2 | ctx->r4;
    after_0:
    // 0x80062F24: beq         $v0, $zero, L_80062F3C
    if (ctx->r2 == 0) {
        // 0x80062F28: nop
    
            goto L_80062F3C;
    }
    // 0x80062F28: nop

    // 0x80062F2C: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x80062F30: lbu         $v1, 0x3($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X3);
    // 0x80062F34: j           L_80062F48
    // 0x80062F38: andi        $a1, $v1, 0xFF
    ctx->r5 = ctx->r3 & 0XFF;
        goto L_80062F48;
    // 0x80062F38: andi        $a1, $v1, 0xFF
    ctx->r5 = ctx->r3 & 0XFF;
L_80062F3C:
    // 0x80062F3C: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x80062F40: lbu         $v1, 0x4($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4);
    // 0x80062F44: andi        $a1, $v1, 0xFF
    ctx->r5 = ctx->r3 & 0XFF;
L_80062F48:
    // 0x80062F48: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80062F4C: bne         $a1, $v0, L_80062F64
    if (ctx->r5 != ctx->r2) {
        // 0x80062F50: sll         $v0, $a1, 1
        ctx->r2 = S32(ctx->r5 << 1);
            goto L_80062F64;
    }
    // 0x80062F50: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x80062F54: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x80062F58: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
    // 0x80062F5C: j           L_80062F90
    // 0x80062F60: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
        goto L_80062F90;
    // 0x80062F60: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
L_80062F64:
    // 0x80062F64: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x80062F68: sh          $v1, 0xC2($s0)
    MEM_H(0XC2, ctx->r16) = ctx->r3;
    // 0x80062F6C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80062F70: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80062F74: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x80062F78: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80062F7C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80062F80: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80062F84: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80062F88: sw          $a0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r4;
    // 0x80062F8C: sw          $a0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r4;
L_80062F90:
    // 0x80062F90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80062F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80062F98: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80062F9C: jr          $ra
    // 0x80062FA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80062FA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
