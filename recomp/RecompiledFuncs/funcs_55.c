#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8023C4F0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C4F0: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8023C4F4: sw          $s2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r18;
    // 0x8023C4F8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023C4FC: sw          $ra, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r31;
    // 0x8023C500: sw          $s1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r17;
    // 0x8023C504: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    // 0x8023C508: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8023C50C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023C510: bne         $v1, $v0, L_8023C530
    if (ctx->r3 != ctx->r2) {
        // 0x8023C514: nop
    
            goto L_8023C530;
    }
    // 0x8023C514: nop

    // 0x8023C518: jal         0x8023CAFC
    // 0x8023C51C: nop

    func_8023CAFC_ovl4(rdram, ctx);
        goto after_0;
    // 0x8023C51C: nop

    after_0:
    // 0x8023C520: jal         0x8004F684
    // 0x8023C524: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_1;
    // 0x8023C524: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x8023C528: j           L_8023C7E0
    // 0x8023C52C: nop

        goto L_8023C7E0;
    // 0x8023C52C: nop

L_8023C530:
    // 0x8023C530: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x8023C534: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023C538: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023C53C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023C540: lw          $v0, 0x1440($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1440);
    // 0x8023C544: jalr        $v0
    // 0x8023C548: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8023C548: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x8023C54C: jal         0x8006033C
    // 0x8023C550: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x8023C550: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_3:
    // 0x8023C554: bne         $v0, $zero, L_8023C7D8
    if (ctx->r2 != 0) {
        // 0x8023C558: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_8023C7D8;
    }
    // 0x8023C558: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023C55C: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x8023C560: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C564: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x8023C568: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x8023C56C: sh          $zero, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = 0;
    // 0x8023C570: jal         0x8002C678
    // 0x8023C574: sh          $zero, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = 0;
    func_8002C678_7A78(rdram, ctx);
        goto after_4;
    // 0x8023C574: sh          $zero, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = 0;
    after_4:
    // 0x8023C578: lb          $a0, 0xC($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XC);
    // 0x8023C57C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023C580: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8023C584: jal         0x800319B4
    // 0x8023C588: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800319B4_CDB4(rdram, ctx);
        goto after_5;
    // 0x8023C588: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_5:
    // 0x8023C58C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C590: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x8023C594: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C598: jal         0x800308E8
    // 0x8023C59C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_800308E8_BCE8(rdram, ctx);
        goto after_6;
    // 0x8023C59C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_6:
    // 0x8023C5A0: lh          $v1, 0x38($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X38);
    // 0x8023C5A4: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x8023C5A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C5AC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8023C5B0: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x8023C5B4: lh          $v1, 0x3A($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X3A);
    // 0x8023C5B8: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x8023C5BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C5C0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8023C5C4: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8023C5C8: lh          $v1, 0x3C($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X3C);
    // 0x8023C5CC: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x8023C5D0: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x8023C5D4: addiu       $s0, $s0, 0x4760
    ctx->r16 = ADD32(ctx->r16, 0X4760);
    // 0x8023C5D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C5DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C5E0: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8023C5E4: jal         0x80031E5C
    // 0x8023C5E8: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    func_80031E5C_D25C(rdram, ctx);
        goto after_7;
    // 0x8023C5E8: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    after_7:
    // 0x8023C5EC: jal         0x80031E94
    // 0x8023C5F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80031E94_D294(rdram, ctx);
        goto after_8;
    // 0x8023C5F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8023C5F4: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8023C5F8: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8023C5FC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023C600: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8023C604: jal         0x8009A3B4
    // 0x8023C608: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8023C608: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x8023C60C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8023C610: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8023C614: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023C618: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8023C61C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8023C620: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x8023C624: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x8023C628: jal         0x80031F0C
    // 0x8023C62C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_10;
    // 0x8023C62C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_10:
    // 0x8023C630: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8023C634: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8023C638: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x8023C63C: jal         0x8009A3B4
    // 0x8023C640: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x8023C640: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_11:
    // 0x8023C644: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023C648: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023C64C: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8023C650: jal         0x8009A3B4
    // 0x8023C654: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x8023C654: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_12:
    // 0x8023C658: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8023C65C: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8023C660: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C664: jal         0x8009A3B4
    // 0x8023C668: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x8023C668: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_13:
    // 0x8023C66C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8023C670: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8023C674: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023C678: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8023C67C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8023C680: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x8023C684: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x8023C688: jal         0x80031F0C
    // 0x8023C68C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_14;
    // 0x8023C68C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_14:
    // 0x8023C690: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x8023C694: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8023C698: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x8023C69C: jal         0x8009A3B4
    // 0x8023C6A0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x8023C6A0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_15:
    // 0x8023C6A4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8023C6A8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023C6AC: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8023C6B0: jal         0x8009A3B4
    // 0x8023C6B4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_16;
    // 0x8023C6B4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_16:
    // 0x8023C6B8: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8023C6BC: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8023C6C0: addiu       $a1, $s2, 0x38
    ctx->r5 = ADD32(ctx->r18, 0X38);
    // 0x8023C6C4: jal         0x8009A3B4
    // 0x8023C6C8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_17;
    // 0x8023C6C8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_17:
    // 0x8023C6CC: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8023C6D0: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8023C6D4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023C6D8: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8023C6DC: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8023C6E0: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x8023C6E4: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x8023C6E8: jal         0x80031F0C
    // 0x8023C6EC: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_18;
    // 0x8023C6EC: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_18:
    // 0x8023C6F0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8023C6F4: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8023C6F8: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x8023C6FC: jal         0x8009A3B4
    // 0x8023C700: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_19;
    // 0x8023C700: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_19:
    // 0x8023C704: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x8023C708: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023C70C: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8023C710: jal         0x8009A3B4
    // 0x8023C714: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_20;
    // 0x8023C714: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_20:
    // 0x8023C718: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x8023C71C: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x8023C720: beq         $a2, $a1, L_8023C7D8
    if (ctx->r6 == ctx->r5) {
        // 0x8023C724: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_8023C7D8;
    }
    // 0x8023C724: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023C728: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x8023C72C: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8023C730: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x8023C734: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8023C738: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8023C73C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023C740: mflo        $v0
    ctx->r2 = lo;
    // 0x8023C744: subu        $v1, $a2, $a1
    ctx->r3 = SUB32(ctx->r6, ctx->r5);
    // 0x8023C748: nop

    // 0x8023C74C: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x8023C750: bne         $v1, $zero, L_8023C75C
    if (ctx->r3 != 0) {
        // 0x8023C754: nop
    
            goto L_8023C75C;
    }
    // 0x8023C754: nop

    // 0x8023C758: break       7
    do_break(2149828440);
L_8023C75C:
    // 0x8023C75C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023C760: bne         $v1, $at, L_8023C774
    if (ctx->r3 != ctx->r1) {
        // 0x8023C764: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023C774;
    }
    // 0x8023C764: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023C768: bne         $v0, $at, L_8023C774
    if (ctx->r2 != ctx->r1) {
        // 0x8023C76C: nop
    
            goto L_8023C774;
    }
    // 0x8023C76C: nop

    // 0x8023C770: break       6
    do_break(2149828464);
L_8023C774:
    // 0x8023C774: mflo        $v0
    ctx->r2 = lo;
    // 0x8023C778: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x8023C77C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023C780: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023C784: beq         $v0, $zero, L_8023C7D8
    if (ctx->r2 == 0) {
        // 0x8023C788: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_8023C7D8;
    }
    // 0x8023C788: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023C78C: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x8023C790: lh          $a0, 0x18($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X18);
    // 0x8023C794: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8023C798: beq         $v0, $zero, L_8023C7B4
    if (ctx->r2 == 0) {
        // 0x8023C79C: slt         $v0, $a0, $v1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8023C7B4;
    }
    // 0x8023C79C: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023C7A0: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x8023C7A4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023C7A8: bne         $v0, $zero, L_8023C7CC
    if (ctx->r2 != 0) {
        // 0x8023C7AC: lui         $v0, 0x240
        ctx->r2 = S32(0X240 << 16);
            goto L_8023C7CC;
    }
    // 0x8023C7AC: lui         $v0, 0x240
    ctx->r2 = S32(0X240 << 16);
    // 0x8023C7B0: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
L_8023C7B4:
    // 0x8023C7B4: beq         $v0, $zero, L_8023C7D8
    if (ctx->r2 == 0) {
        // 0x8023C7B8: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_8023C7D8;
    }
    // 0x8023C7B8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023C7BC: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x8023C7C0: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023C7C4: beq         $v0, $zero, L_8023C7D4
    if (ctx->r2 == 0) {
        // 0x8023C7C8: lui         $v0, 0x240
        ctx->r2 = S32(0X240 << 16);
            goto L_8023C7D4;
    }
    // 0x8023C7C8: lui         $v0, 0x240
    ctx->r2 = S32(0X240 << 16);
L_8023C7CC:
    // 0x8023C7CC: j           L_8023C7DC
    // 0x8023C7D0: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
        goto L_8023C7DC;
    // 0x8023C7D0: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
L_8023C7D4:
    // 0x8023C7D4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_8023C7D8:
    // 0x8023C7D8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_8023C7DC:
    // 0x8023C7DC: sw          $v0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r2;
L_8023C7E0:
    // 0x8023C7E0: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    // 0x8023C7E4: lw          $s2, 0x98($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X98);
    // 0x8023C7E8: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
    // 0x8023C7EC: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x8023C7F0: jr          $ra
    // 0x8023C7F4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    TRACE_RETURN()
    return;
    // 0x8023C7F4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_80235594_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235594: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80235598: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023559C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802355A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802355A4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802355A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802355AC: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x802355B0: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802355B4: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x802355B8: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802355BC: beq         $v0, $zero, L_80235898
    if (ctx->r2 == 0) {
        // 0x802355C0: addiu       $s0, $s1, 0x4E0
        ctx->r16 = ADD32(ctx->r17, 0X4E0);
            goto L_80235898;
    }
    // 0x802355C0: addiu       $s0, $s1, 0x4E0
    ctx->r16 = ADD32(ctx->r17, 0X4E0);
    // 0x802355C4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802355C8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802355CC: addu        $at, $at, $v0
    gpr jr_addend_802355D4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802355D0: lw          $v0, 0x16B8($at)
    ctx->r2 = ADD32(ctx->r1, 0X16B8);
    // 0x802355D4: jr          $v0
    // 0x802355D8: nop

    switch (jr_addend_802355D4 >> 2) {
        case 0: goto L_802355DC; break;
        case 1: goto L_80235610; break;
        case 2: goto L_802356EC; break;
        case 3: goto L_80235774; break;
        case 4: goto L_80235828; break;
        default: switch_error(__func__, 0x802355D4, 0x802416B8);
    }
    // 0x802355D8: nop

L_802355DC:
    // 0x802355DC: addiu       $a0, $zero, 0xC3
    ctx->r4 = ADD32(0, 0XC3);
    // 0x802355E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802355E4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x802355E8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802355EC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x802355F0: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x802355F4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x802355F8: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x802355FC: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80235600: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x80235604: andi        $v1, $v1, 0xFFFB
    ctx->r3 = ctx->r3 & 0XFFFB;
    // 0x80235608: jal         0x8002A33C
    // 0x8023560C: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8023560C: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
    after_0:
L_80235610:
    // 0x80235610: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80235614: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80235618: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8023561C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235620: bgez        $v0, L_80235648
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80235624: addiu       $a0, $s1, 0x1C
        ctx->r4 = ADD32(ctx->r17, 0X1C);
            goto L_80235648;
    }
    // 0x80235624: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x80235628: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x8023562C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80235630: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x80235634: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235638: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8023563C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80235640: j           L_802356EC
    // 0x80235644: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_802356EC;
    // 0x80235644: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80235648:
    // 0x80235648: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x8023564C: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x80235650: lh          $v1, 0x56($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X56);
    // 0x80235654: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x80235658: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8023565C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80235660: jal         0x8004FAEC
    // 0x80235664: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_1;
    // 0x80235664: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x80235668: bne         $v0, $zero, L_8023568C
    if (ctx->r2 != 0) {
        // 0x8023566C: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8023568C;
    }
    // 0x8023566C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80235670: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80235674: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80235678: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8023567C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80235680: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80235684: j           L_80235898
    // 0x80235688: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_80235898;
    // 0x80235688: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8023568C:
    // 0x8023568C: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
    // 0x80235690: bne         $v1, $v0, L_80235898
    if (ctx->r3 != ctx->r2) {
        // 0x80235694: nop
    
            goto L_80235898;
    }
    // 0x80235694: nop

    // 0x80235698: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x8023569C: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x802356A0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802356A4: bne         $v0, $zero, L_802356B0
    if (ctx->r2 != 0) {
        // 0x802356A8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802356B0;
    }
    // 0x802356A8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802356AC: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
L_802356B0:
    // 0x802356B0: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x802356B4: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x802356B8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802356BC: bne         $v0, $zero, L_802356C8
    if (ctx->r2 != 0) {
        // 0x802356C0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802356C8;
    }
    // 0x802356C0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802356C4: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
L_802356C8:
    // 0x802356C8: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x802356CC: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x802356D0: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x802356D4: addiu       $a0, $zero, 0xC4
    ctx->r4 = ADD32(0, 0XC4);
    // 0x802356D8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x802356DC: jal         0x8002A33C
    // 0x802356E0: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x802356E0: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    after_2:
    // 0x802356E4: j           L_80235898
    // 0x802356E8: nop

        goto L_80235898;
    // 0x802356E8: nop

L_802356EC:
    // 0x802356EC: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x802356F0: bne         $v0, $zero, L_802357F4
    if (ctx->r2 != 0) {
        // 0x802356F4: nop
    
            goto L_802357F4;
    }
    // 0x802356F4: nop

    // 0x802356F8: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x802356FC: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x80235700: andi        $v0, $v0, 0x5
    ctx->r2 = ctx->r2 & 0X5;
    // 0x80235704: beq         $v0, $zero, L_80235760
    if (ctx->r2 == 0) {
        // 0x80235708: nop
    
            goto L_80235760;
    }
    // 0x80235708: nop

    // 0x8023570C: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x80235710: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x80235714: andi        $v0, $v0, 0x5
    ctx->r2 = ctx->r2 & 0X5;
    // 0x80235718: beq         $v0, $zero, L_80235760
    if (ctx->r2 == 0) {
        // 0x8023571C: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80235760;
    }
    // 0x8023571C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80235720: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x80235724: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x80235728: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023572C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80235730: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x80235734: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80235738: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8023573C: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x80235740: addiu       $a0, $zero, -0x5
    ctx->r4 = ADD32(0, -0X5);
    // 0x80235744: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80235748: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x8023574C: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x80235750: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x80235754: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80235758: j           L_80235774
    // 0x8023575C: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
        goto L_80235774;
    // 0x8023575C: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_80235760:
    // 0x80235760: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x80235764: beq         $v0, $zero, L_80235898
    if (ctx->r2 == 0) {
        // 0x80235768: nop
    
            goto L_80235898;
    }
    // 0x80235768: nop

    // 0x8023576C: j           L_802357F4
    // 0x80235770: nop

        goto L_802357F4;
    // 0x80235770: nop

L_80235774:
    // 0x80235774: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x80235778: bne         $v0, $zero, L_802357F4
    if (ctx->r2 != 0) {
        // 0x8023577C: nop
    
            goto L_802357F4;
    }
    // 0x8023577C: nop

    // 0x80235780: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x80235784: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x80235788: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023578C: beq         $v0, $zero, L_802357E8
    if (ctx->r2 == 0) {
        // 0x80235790: nop
    
            goto L_802357E8;
    }
    // 0x80235790: nop

    // 0x80235794: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x80235798: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x8023579C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802357A0: beq         $v0, $zero, L_802357E8
    if (ctx->r2 == 0) {
        // 0x802357A4: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_802357E8;
    }
    // 0x802357A4: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x802357A8: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x802357AC: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x802357B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802357B4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x802357B8: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x802357BC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802357C0: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x802357C4: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x802357C8: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
    // 0x802357CC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x802357D0: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x802357D4: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x802357D8: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x802357DC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x802357E0: j           L_80235828
    // 0x802357E4: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
        goto L_80235828;
    // 0x802357E4: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_802357E8:
    // 0x802357E8: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x802357EC: beq         $v0, $zero, L_80235804
    if (ctx->r2 == 0) {
        // 0x802357F0: nop
    
            goto L_80235804;
    }
    // 0x802357F0: nop

L_802357F4:
    // 0x802357F4: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x802357F8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802357FC: j           L_80235898
    // 0x80235800: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_80235898;
    // 0x80235800: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80235804:
    // 0x80235804: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x80235808: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x8023580C: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x80235810: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80235814: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x80235818: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x8023581C: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x80235820: j           L_80235898
    // 0x80235824: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
        goto L_80235898;
    // 0x80235824: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_80235828:
    // 0x80235828: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8023582C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80235830: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80235834: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235838: bgez        $v0, L_80235898
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023583C: addiu       $a0, $s1, 0x1C
        ctx->r4 = ADD32(ctx->r17, 0X1C);
            goto L_80235898;
    }
    // 0x8023583C: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x80235840: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x80235844: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x80235848: lh          $v1, 0x56($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X56);
    // 0x8023584C: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x80235850: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80235854: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80235858: jal         0x8004FAEC
    // 0x8023585C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_3;
    // 0x8023585C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x80235860: beq         $v0, $zero, L_80235870
    if (ctx->r2 == 0) {
        // 0x80235864: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80235870;
    }
    // 0x80235864: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80235868: j           L_80235880
    // 0x8023586C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80235880;
    // 0x8023586C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80235870:
    // 0x80235870: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80235874: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80235878: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023587C: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
L_80235880:
    // 0x80235880: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x80235884: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80235888: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x8023588C: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x80235890: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80235894: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_80235898:
    // 0x80235898: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023589C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802358A0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802358A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802358A8: jr          $ra
    // 0x802358AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802358AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80232968_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232968: lhu         $v0, 0x348($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X348);
    // 0x8023296C: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80232970: beq         $v0, $zero, L_80232980
    if (ctx->r2 == 0) {
        // 0x80232974: addiu       $v1, $a0, 0x348
        ctx->r3 = ADD32(ctx->r4, 0X348);
            goto L_80232980;
    }
    // 0x80232974: addiu       $v1, $a0, 0x348
    ctx->r3 = ADD32(ctx->r4, 0X348);
    // 0x80232978: j           L_80232984
    // 0x8023297C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
        goto L_80232984;
    // 0x8023297C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_80232980:
    // 0x80232980: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80232984:
    // 0x80232984: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80232988: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023298C: sb          $v0, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r2;
    // 0x80232990: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
    // 0x80232994: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
    // 0x80232998: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8023299C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802329A0: jr          $ra
    // 0x802329A4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802329A4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80239F10_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239F10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239F14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239F18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239F1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80239F20: jal         0x80071A70
    // 0x80239F24: lui         $a0, 0x5
    ctx->r4 = S32(0X5 << 16);
    func_80071A70_4CE70(rdram, ctx);
        goto after_0;
    // 0x80239F24: lui         $a0, 0x5
    ctx->r4 = S32(0X5 << 16);
    after_0:
    // 0x80239F28: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80239F2C: bne         $a1, $zero, L_80239F44
    if (ctx->r5 != 0) {
        // 0x80239F30: lui         $v1, 0xFF
        ctx->r3 = S32(0XFF << 16);
            goto L_80239F44;
    }
    // 0x80239F30: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80239F34: jal         0x8004F62C
    // 0x80239F38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x80239F38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80239F3C: j           L_80239F88
    // 0x80239F40: nop

        goto L_80239F88;
    // 0x80239F40: nop

L_80239F44:
    // 0x80239F44: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80239F48: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80239F4C: and         $a1, $a1, $v1
    ctx->r5 = ctx->r5 & ctx->r3;
    // 0x80239F50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239F54: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80239F58: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x80239F5C: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x80239F60: lw          $a0, 0x1C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X1C);
    // 0x80239F64: lw          $v0, 0x24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X24);
    // 0x80239F68: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80239F6C: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x80239F70: lw          $v0, 0x24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X24);
    // 0x80239F74: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239F78: sw          $v1, 0x1880($at)
    MEM_W(0X1880, ctx->r1) = ctx->r3;
    // 0x80239F7C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239F80: sw          $a0, 0x1884($at)
    MEM_W(0X1884, ctx->r1) = ctx->r4;
    // 0x80239F84: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80239F88:
    // 0x80239F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80239F8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239F90: jr          $ra
    // 0x80239F94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239F94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C31C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C31C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C320: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022C324: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C328: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C32C: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C330: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x8022C334: addiu       $t2, $t2, 0x49B0
    ctx->r10 = ADD32(ctx->r10, 0X49B0);
    // 0x8022C338: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C33C: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022C340: beq         $v1, $v0, L_8022C370
    if (ctx->r3 == ctx->r2) {
        // 0x8022C344: addiu       $a3, $s0, 0x348
        ctx->r7 = ADD32(ctx->r16, 0X348);
            goto L_8022C370;
    }
    // 0x8022C344: addiu       $a3, $s0, 0x348
    ctx->r7 = ADD32(ctx->r16, 0X348);
    // 0x8022C348: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022C34C: beq         $v0, $zero, L_8022C5AC
    if (ctx->r2 == 0) {
        // 0x8022C350: nop
    
            goto L_8022C5AC;
    }
    // 0x8022C350: nop

    // 0x8022C354: bne         $v1, $zero, L_8022C5AC
    if (ctx->r3 != 0) {
        // 0x8022C358: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022C5AC;
    }
    // 0x8022C358: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022C35C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C360: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022C364: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C368: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022C36C: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
L_8022C370:
    // 0x8022C370: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C374: lui         $t4, 0x8000
    ctx->r12 = S32(0X8000 << 16);
    // 0x8022C378: lui         $t1, 0x801E
    ctx->r9 = S32(0X801E << 16);
    // 0x8022C37C: lw          $t1, -0x714C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X714C);
    // 0x8022C380: addiu       $t3, $zero, 0x13
    ctx->r11 = ADD32(0, 0X13);
    // 0x8022C384: lui         $t0, 0x8024
    ctx->r8 = S32(0X8024 << 16);
    // 0x8022C388: addiu       $t0, $t0, 0x9F0
    ctx->r8 = ADD32(ctx->r8, 0X9F0);
    // 0x8022C38C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022C390: addiu       $a1, $a1, -0x408
    ctx->r5 = ADD32(ctx->r5, -0X408);
L_8022C394:
    // 0x8022C394: srlv        $v0, $t4, $a2
    ctx->r2 = S32(U32(ctx->r12) >> (ctx->r6 & 31));
    // 0x8022C398: and         $v0, $t1, $v0
    ctx->r2 = ctx->r9 & ctx->r2;
    // 0x8022C39C: beq         $v0, $zero, L_8022C400
    if (ctx->r2 == 0) {
        // 0x8022C3A0: addiu       $v0, $a2, 0x1
        ctx->r2 = ADD32(ctx->r6, 0X1);
            goto L_8022C400;
    }
    // 0x8022C3A0: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    // 0x8022C3A4: lbu         $v0, -0x16($a1)
    ctx->r2 = MEM_BU(ctx->r5, -0X16);
    // 0x8022C3A8: beq         $v0, $t3, L_8022C400
    if (ctx->r2 == ctx->r11) {
        // 0x8022C3AC: addiu       $v0, $a2, 0x1
        ctx->r2 = ADD32(ctx->r6, 0X1);
            goto L_8022C400;
    }
    // 0x8022C3AC: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    // 0x8022C3B0: lhu         $v0, -0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, -0X4);
    // 0x8022C3B4: lbu         $v1, 0x0($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X0);
    // 0x8022C3B8: lbu         $a0, 0x2($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X2);
    // 0x8022C3BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C3C0: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8022C3C4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022C3C8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022C3CC: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x8022C3D0: beq         $v0, $zero, L_8022C400
    if (ctx->r2 == 0) {
        // 0x8022C3D4: addiu       $v0, $a2, 0x1
        ctx->r2 = ADD32(ctx->r6, 0X1);
            goto L_8022C400;
    }
    // 0x8022C3D4: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    // 0x8022C3D8: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8022C3DC: lbu         $v1, 0x1($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X1);
    // 0x8022C3E0: lbu         $a0, 0x3($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X3);
    // 0x8022C3E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C3E8: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8022C3EC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022C3F0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022C3F4: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x8022C3F8: bne         $v0, $zero, L_8022C418
    if (ctx->r2 != 0) {
        // 0x8022C3FC: addiu       $v0, $a2, 0x1
        ctx->r2 = ADD32(ctx->r6, 0X1);
            goto L_8022C418;
    }
    // 0x8022C3FC: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
L_8022C400:
    // 0x8022C400: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022C404: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C408: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C40C: slti        $v0, $v0, 0x12
    ctx->r2 = SIGNED(ctx->r2) < 0X12 ? 1 : 0;
    // 0x8022C410: bne         $v0, $zero, L_8022C394
    if (ctx->r2 != 0) {
        // 0x8022C414: addiu       $a1, $a1, 0x3C8
        ctx->r5 = ADD32(ctx->r5, 0X3C8);
            goto L_8022C394;
    }
    // 0x8022C414: addiu       $a1, $a1, 0x3C8
    ctx->r5 = ADD32(ctx->r5, 0X3C8);
L_8022C418:
    // 0x8022C418: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022C41C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C420: addiu       $v1, $zero, 0x12
    ctx->r3 = ADD32(0, 0X12);
    // 0x8022C424: bne         $v0, $v1, L_8022C438
    if (ctx->r2 != ctx->r3) {
        // 0x8022C428: nop
    
            goto L_8022C438;
    }
    // 0x8022C428: nop

    // 0x8022C42C: lhu         $v0, 0x0($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X0);
    // 0x8022C430: j           L_8022C440
    // 0x8022C434: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
        goto L_8022C440;
    // 0x8022C434: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
L_8022C438:
    // 0x8022C438: lhu         $v0, 0x0($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X0);
    // 0x8022C43C: andi        $v0, $v0, 0xFFF7
    ctx->r2 = ctx->r2 & 0XFFF7;
L_8022C440:
    // 0x8022C440: sh          $v0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r2;
    // 0x8022C444: lh          $v0, 0x4($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X4);
    // 0x8022C448: beq         $v0, $zero, L_8022C458
    if (ctx->r2 == 0) {
        // 0x8022C44C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022C458;
    }
    // 0x8022C44C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C450: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022C454: sh          $v0, 0x4($a3)
    MEM_H(0X4, ctx->r7) = ctx->r2;
L_8022C458:
    // 0x8022C458: lhu         $v0, 0x14($t2)
    ctx->r2 = MEM_HU(ctx->r10, 0X14);
    // 0x8022C45C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022C460: lb          $a0, 0x9F0($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X9F0);
    // 0x8022C464: lhu         $v1, 0x18($t2)
    ctx->r3 = MEM_HU(ctx->r10, 0X18);
    // 0x8022C468: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C46C: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8022C470: subu        $a2, $v0, $a0
    ctx->r6 = SUB32(ctx->r2, ctx->r4);
    // 0x8022C474: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022C478: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C47C: lb          $v0, 0x9F1($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X9F1);
    // 0x8022C480: lw          $a0, 0x184($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X184);
    // 0x8022C484: sra         $v1, $v1, 25
    ctx->r3 = S32(SIGNED(ctx->r3) >> 25);
    // 0x8022C488: bne         $a0, $s0, L_8022C4F0
    if (ctx->r4 != ctx->r16) {
        // 0x8022C48C: subu        $a1, $v1, $v0
        ctx->r5 = SUB32(ctx->r3, ctx->r2);
            goto L_8022C4F0;
    }
    // 0x8022C48C: subu        $a1, $v1, $v0
    ctx->r5 = SUB32(ctx->r3, ctx->r2);
    // 0x8022C490: sw          $zero, 0x184($t2)
    MEM_W(0X184, ctx->r10) = 0;
    // 0x8022C494: lhu         $v0, 0x0($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X0);
    // 0x8022C498: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022C49C: beq         $v0, $zero, L_8022C4C8
    if (ctx->r2 == 0) {
        // 0x8022C4A0: nop
    
            goto L_8022C4C8;
    }
    // 0x8022C4A0: nop

    // 0x8022C4A4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022C4A8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022C4AC: bltz        $v0, L_8022C5AC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022C4B0: nop
    
            goto L_8022C5AC;
    }
    // 0x8022C4B0: nop

    // 0x8022C4B4: jal         0x8006036C
    // 0x8022C4B8: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x8022C4B8: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    after_0:
    // 0x8022C4BC: addiu       $v0, $zero, 0x5D4
    ctx->r2 = ADD32(0, 0X5D4);
    // 0x8022C4C0: j           L_8022C5AC
    // 0x8022C4C4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8022C5AC;
    // 0x8022C4C4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022C4C8:
    // 0x8022C4C8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022C4CC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022C4D0: bltz        $v0, L_8022C5AC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022C4D4: addiu       $v0, $zero, 0x1C2
        ctx->r2 = ADD32(0, 0X1C2);
            goto L_8022C5AC;
    }
    // 0x8022C4D4: addiu       $v0, $zero, 0x1C2
    ctx->r2 = ADD32(0, 0X1C2);
    // 0x8022C4D8: sh          $v0, 0x4($a3)
    MEM_H(0X4, ctx->r7) = ctx->r2;
    // 0x8022C4DC: lbu         $a1, 0xC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XC);
    // 0x8022C4E0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8022C4E4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8022C4E8: j           L_8022C5A4
    // 0x8022C4EC: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
        goto L_8022C5A4;
    // 0x8022C4EC: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
L_8022C4F0:
    // 0x8022C4F0: lw          $v0, 0x14($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X14);
    // 0x8022C4F4: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8022C4F8: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8022C4FC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022C500: beq         $v0, $zero, L_8022C530
    if (ctx->r2 == 0) {
        // 0x8022C504: nop
    
            goto L_8022C530;
    }
    // 0x8022C504: nop

    // 0x8022C508: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022C50C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022C510: bltz        $v0, L_8022C5AC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022C514: addiu       $v0, $zero, 0x1C2
        ctx->r2 = ADD32(0, 0X1C2);
            goto L_8022C5AC;
    }
    // 0x8022C514: addiu       $v0, $zero, 0x1C2
    ctx->r2 = ADD32(0, 0X1C2);
    // 0x8022C518: sh          $v0, 0x4($a3)
    MEM_H(0X4, ctx->r7) = ctx->r2;
    // 0x8022C51C: lbu         $a1, 0xC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XC);
    // 0x8022C520: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8022C524: addiu       $a1, $a1, 0x5
    ctx->r5 = ADD32(ctx->r5, 0X5);
    // 0x8022C528: j           L_8022C5A4
    // 0x8022C52C: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
        goto L_8022C5A4;
    // 0x8022C52C: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
L_8022C530:
    // 0x8022C530: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C534: lbu         $v0, 0x9F2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9F2);
    // 0x8022C538: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x8022C53C: beq         $v0, $zero, L_8022C558
    if (ctx->r2 == 0) {
        // 0x8022C540: nop
    
            goto L_8022C558;
    }
    // 0x8022C540: nop

    // 0x8022C544: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C548: lbu         $v0, 0x9F3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9F3);
    // 0x8022C54C: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8022C550: bne         $v0, $zero, L_8022C578
    if (ctx->r2 != 0) {
        // 0x8022C554: nop
    
            goto L_8022C578;
    }
    // 0x8022C554: nop

L_8022C558:
    // 0x8022C558: lh          $v0, 0x4($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X4);
    // 0x8022C55C: bne         $v0, $zero, L_8022C5AC
    if (ctx->r2 != 0) {
        // 0x8022C560: addiu       $v1, $zero, 0x1C2
        ctx->r3 = ADD32(0, 0X1C2);
            goto L_8022C5AC;
    }
    // 0x8022C560: addiu       $v1, $zero, 0x1C2
    ctx->r3 = ADD32(0, 0X1C2);
    // 0x8022C564: lhu         $v0, 0x0($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X0);
    // 0x8022C568: sh          $v1, 0x4($a3)
    MEM_H(0X4, ctx->r7) = ctx->r3;
    // 0x8022C56C: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022C570: j           L_8022C59C
    // 0x8022C574: sh          $v0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r2;
        goto L_8022C59C;
    // 0x8022C574: sh          $v0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r2;
L_8022C578:
    // 0x8022C578: lhu         $v1, 0x0($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X0);
    // 0x8022C57C: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x8022C580: bne         $v0, $zero, L_8022C5AC
    if (ctx->r2 != 0) {
        // 0x8022C584: addiu       $a0, $zero, 0x60A
        ctx->r4 = ADD32(0, 0X60A);
            goto L_8022C5AC;
    }
    // 0x8022C584: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    // 0x8022C588: ori         $v0, $v1, 0x4
    ctx->r2 = ctx->r3 | 0X4;
    // 0x8022C58C: jal         0x80060590
    // 0x8022C590: sh          $v0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r2;
    func_80060590_3B990(rdram, ctx);
        goto after_1;
    // 0x8022C590: sh          $v0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r2;
    after_1:
    // 0x8022C594: jal         0x80060590
    // 0x8022C598: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    func_80060590_3B990(rdram, ctx);
        goto after_2;
    // 0x8022C598: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    after_2:
L_8022C59C:
    // 0x8022C59C: lbu         $a1, 0xC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XC);
    // 0x8022C5A0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_8022C5A4:
    // 0x8022C5A4: jal         0x800616FC
    // 0x8022C5A8: nop

    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x8022C5A8: nop

    after_3:
L_8022C5AC:
    // 0x8022C5AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C5B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022C5B4: jr          $ra
    // 0x8022C5B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C5B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023A550_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A554: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A558: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A55C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023A560: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8023A564: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8023A568: addiu       $a1, $a1, -0x3BC8
    ctx->r5 = ADD32(ctx->r5, -0X3BC8);
    // 0x8023A56C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023A570: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8023A574: sb          $a0, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r4;
    // 0x8023A578: sb          $a0, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r4;
    // 0x8023A57C: lb          $v1, 0x0($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X0);
    // 0x8023A580: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8023A584: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x8023A588: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8023A58C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023A590: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8023A594: lw          $v1, 0xF30($at)
    ctx->r3 = MEM_W(ctx->r1, 0XF30);
    // 0x8023A598: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023A59C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023A5A0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023A5A4: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x8023A5A8: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x8023A5AC: lb          $v1, 0x0($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X0);
    // 0x8023A5B0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023A5B4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023A5B8: sb          $a0, 0x18A0($at)
    MEM_B(0X18A0, ctx->r1) = ctx->r4;
    // 0x8023A5BC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023A5C0: sb          $v0, 0x18A1($at)
    MEM_B(0X18A1, ctx->r1) = ctx->r2;
    // 0x8023A5C4: sltiu       $v0, $v1, 0x1E
    ctx->r2 = ctx->r3 < 0X1E ? 1 : 0;
    // 0x8023A5C8: beq         $v0, $zero, L_8023A620
    if (ctx->r2 == 0) {
        // 0x8023A5CC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8023A620;
    }
    // 0x8023A5CC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023A5D0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023A5D4: addu        $at, $at, $v0
    gpr jr_addend_8023A5DC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023A5D8: lw          $v0, 0x1730($at)
    ctx->r2 = ADD32(ctx->r1, 0X1730);
    // 0x8023A5DC: jr          $v0
    // 0x8023A5E0: nop

    switch (jr_addend_8023A5DC >> 2) {
        case 0: goto L_8023A5E4; break;
        case 1: goto L_8023A620; break;
        case 2: goto L_8023A620; break;
        case 3: goto L_8023A620; break;
        case 4: goto L_8023A620; break;
        case 5: goto L_8023A620; break;
        case 6: goto L_8023A620; break;
        case 7: goto L_8023A620; break;
        case 8: goto L_8023A620; break;
        case 9: goto L_8023A5EC; break;
        case 10: goto L_8023A620; break;
        case 11: goto L_8023A620; break;
        case 12: goto L_8023A620; break;
        case 13: goto L_8023A620; break;
        case 14: goto L_8023A5F4; break;
        case 15: goto L_8023A620; break;
        case 16: goto L_8023A620; break;
        case 17: goto L_8023A620; break;
        case 18: goto L_8023A620; break;
        case 19: goto L_8023A5FC; break;
        case 20: goto L_8023A604; break;
        case 21: goto L_8023A620; break;
        case 22: goto L_8023A620; break;
        case 23: goto L_8023A620; break;
        case 24: goto L_8023A620; break;
        case 25: goto L_8023A620; break;
        case 26: goto L_8023A60C; break;
        case 27: goto L_8023A620; break;
        case 28: goto L_8023A620; break;
        case 29: goto L_8023A614; break;
        default: switch_error(__func__, 0x8023A5DC, 0x80241730);
    }
    // 0x8023A5E0: nop

L_8023A5E4:
    // 0x8023A5E4: j           L_8023A618
    // 0x8023A5E8: addiu       $a0, $zero, 0x630
    ctx->r4 = ADD32(0, 0X630);
        goto L_8023A618;
    // 0x8023A5E8: addiu       $a0, $zero, 0x630
    ctx->r4 = ADD32(0, 0X630);
L_8023A5EC:
    // 0x8023A5EC: j           L_8023A618
    // 0x8023A5F0: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
        goto L_8023A618;
    // 0x8023A5F0: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
L_8023A5F4:
    // 0x8023A5F4: j           L_8023A618
    // 0x8023A5F8: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
        goto L_8023A618;
    // 0x8023A5F8: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
L_8023A5FC:
    // 0x8023A5FC: j           L_8023A618
    // 0x8023A600: addiu       $a0, $zero, 0x620
    ctx->r4 = ADD32(0, 0X620);
        goto L_8023A618;
    // 0x8023A600: addiu       $a0, $zero, 0x620
    ctx->r4 = ADD32(0, 0X620);
L_8023A604:
    // 0x8023A604: j           L_8023A618
    // 0x8023A608: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
        goto L_8023A618;
    // 0x8023A608: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
L_8023A60C:
    // 0x8023A60C: j           L_8023A618
    // 0x8023A610: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
        goto L_8023A618;
    // 0x8023A610: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
L_8023A614:
    // 0x8023A614: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
L_8023A618:
    // 0x8023A618: jal         0x80060590
    // 0x8023A61C: nop

    func_80060590_3B990(rdram, ctx);
        goto after_0;
    // 0x8023A61C: nop

    after_0:
L_8023A620:
    // 0x8023A620: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023A624: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023A628: jal         0x8023A640
    // 0x8023A62C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023A640_ovl4(rdram, ctx);
        goto after_1;
    // 0x8023A62C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023A630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023A634: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A638: jr          $ra
    // 0x8023A63C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A63C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802310C0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802310C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802310C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802310C8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802310CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802310D0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802310D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802310D8: lw          $v0, 0xB50($at)
    ctx->r2 = MEM_W(ctx->r1, 0XB50);
    // 0x802310DC: jalr        $v0
    // 0x802310E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802310E0: nop

    after_0:
    // 0x802310E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802310E8: jr          $ra
    // 0x802310EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802310EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023C930_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C930: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023C934: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023C938: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023C93C: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    // 0x8023C940: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023C944: jal         0x8006033C
    // 0x8023C948: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8023C948: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023C94C: beq         $v0, $zero, L_8023C9BC
    if (ctx->r2 == 0) {
        // 0x8023C950: nop
    
            goto L_8023C9BC;
    }
    // 0x8023C950: nop

    // 0x8023C954: jal         0x8006033C
    // 0x8023C958: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8023C958: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_1:
    // 0x8023C95C: bne         $v0, $zero, L_8023CA2C
    if (ctx->r2 != 0) {
        // 0x8023C960: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_8023CA2C;
    }
    // 0x8023C960: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8023C964: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8023C968: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C96C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023C970: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8023C974: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023C978: jal         0x8002C678
    // 0x8023C97C: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    func_8002C678_7A78(rdram, ctx);
        goto after_2;
    // 0x8023C97C: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    after_2:
    // 0x8023C980: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8023C984: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023C988: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x8023C98C: jal         0x800319B4
    // 0x8023C990: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_3;
    // 0x8023C990: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_3:
    // 0x8023C994: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8023C998: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    // 0x8023C99C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023C9A0: jal         0x8006036C
    // 0x8023C9A4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x8023C9A4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_4:
    // 0x8023C9A8: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x8023C9AC: jal         0x8002A33C
    // 0x8023C9B0: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8023C9B0: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_5:
    // 0x8023C9B4: j           L_8023CA2C
    // 0x8023C9B8: nop

        goto L_8023CA2C;
    // 0x8023C9B8: nop

L_8023C9BC:
    // 0x8023C9BC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023C9C0: jal         0x8003E6BC
    // 0x8023C9C4: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_6;
    // 0x8023C9C4: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    after_6:
    // 0x8023C9C8: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x8023C9CC: beq         $v1, $v0, L_8023CA2C
    if (ctx->r3 == ctx->r2) {
        // 0x8023C9D0: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_8023CA2C;
    }
    // 0x8023C9D0: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8023C9D4: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8023C9D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C9DC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023C9E0: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8023C9E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023C9E8: jal         0x8002C678
    // 0x8023C9EC: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    func_8002C678_7A78(rdram, ctx);
        goto after_7;
    // 0x8023C9EC: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    after_7:
    // 0x8023C9F0: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8023C9F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023C9F8: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x8023C9FC: jal         0x800319B4
    // 0x8023CA00: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_8;
    // 0x8023CA00: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_8:
    // 0x8023CA04: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8023CA08: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    // 0x8023CA0C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023CA10: jal         0x8006036C
    // 0x8023CA14: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x8023CA14: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_9:
    // 0x8023CA18: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x8023CA1C: jal         0x8002A33C
    // 0x8023CA20: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x8023CA20: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_10:
    // 0x8023CA24: jal         0x80060590
    // 0x8023CA28: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_80060590_3B990(rdram, ctx);
        goto after_11;
    // 0x8023CA28: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_11:
L_8023CA2C:
    // 0x8023CA2C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023CA30: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023CA34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023CA38: jr          $ra
    // 0x8023CA3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023CA3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233B34_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233B34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233B38: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233B3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233B40: jal         0x8004F488
    // 0x80233B44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x80233B44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80233B48: lw          $a0, 0x514($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X514);
    // 0x80233B4C: jal         0x8004F4F8
    // 0x80233B50: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_1;
    // 0x80233B50: nop

    after_1:
    // 0x80233B54: jal         0x8004F4F8
    // 0x80233B58: lw          $a0, 0x518($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X518);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x80233B58: lw          $a0, 0x518($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X518);
    after_2:
    // 0x80233B5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233B60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233B64: jr          $ra
    // 0x80233B68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233B68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227EA0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227EA0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80227EA4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80227EA8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227EAC: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80227EB0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80227EB4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80227EB8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80227EBC: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x80227EC0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80227EC4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80227EC8: jal         0x8009A3B4
    // 0x80227ECC: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80227ECC: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    after_0:
    // 0x80227ED0: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80227ED4: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80227ED8: jal         0x8009A3B4
    // 0x80227EDC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80227EDC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80227EE0: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x80227EE4: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x80227EE8: jal         0x8009A3B4
    // 0x80227EEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80227EEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80227EF0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227EF4: jal         0x800A3450
    // 0x80227EF8: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80227EF8: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    after_3:
    // 0x80227EFC: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80227F00: sh          $v0, 0x32A($s1)
    MEM_H(0X32A, ctx->r17) = ctx->r2;
    // 0x80227F04: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80227F08: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227F0C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227F10: lw          $v0, 0x780($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X780);
    // 0x80227F14: jalr        $v0
    // 0x80227F18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80227F18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80227F1C: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x80227F20: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x80227F24: beq         $v0, $a1, L_80227F40
    if (ctx->r2 == ctx->r5) {
        // 0x80227F28: addiu       $s2, $s1, 0x328
        ctx->r18 = ADD32(ctx->r17, 0X328);
            goto L_80227F40;
    }
    // 0x80227F28: addiu       $s2, $s1, 0x328
    ctx->r18 = ADD32(ctx->r17, 0X328);
    // 0x80227F2C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227F30: jal         0x80050294
    // 0x80227F34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80227F34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80227F38: j           L_80227F48
    // 0x80227F3C: nop

        goto L_80227F48;
    // 0x80227F3C: nop

L_80227F40:
    // 0x80227F40: jal         0x8005044C
    // 0x80227F44: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x80227F44: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_80227F48:
    // 0x80227F48: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80227F4C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80227F50: beq         $v0, $zero, L_80227F68
    if (ctx->r2 == 0) {
        // 0x80227F54: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80227F68;
    }
    // 0x80227F54: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227F58: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80227F5C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80227F60: jal         0x8003B564
    // 0x80227F64: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x80227F64: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
L_80227F68:
    // 0x80227F68: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80227F6C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80227F70: beql        $v0, $zero, L_80227FDC
    if (ctx->r2 == 0) {
        // 0x80227F74: sw          $zero, 0x14($s2)
        MEM_W(0X14, ctx->r18) = 0;
            goto L_80227FDC;
    }
    goto skip_0;
    // 0x80227F74: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
    skip_0:
    // 0x80227F78: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80227F7C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80227F80: beq         $v0, $zero, L_80227FD8
    if (ctx->r2 == 0) {
        // 0x80227F84: addiu       $s0, $s2, 0xC
        ctx->r16 = ADD32(ctx->r18, 0XC);
            goto L_80227FD8;
    }
    // 0x80227F84: addiu       $s0, $s2, 0xC
    ctx->r16 = ADD32(ctx->r18, 0XC);
    // 0x80227F88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227F8C: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x80227F90: jal         0x8009A3B4
    // 0x80227F94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80227F94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x80227F98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227F9C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80227FA0: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80227FA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227FA8: addiu       $v0, $s2, 0x14
    ctx->r2 = ADD32(ctx->r18, 0X14);
    // 0x80227FAC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80227FB0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80227FB4: lhu         $v1, 0x8($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8);
    // 0x80227FB8: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80227FBC: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80227FC0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80227FC4: lui         $v0, 0x488
    ctx->r2 = S32(0X488 << 16);
    // 0x80227FC8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80227FCC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80227FD0: jal         0x80051E18
    // 0x80227FD4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_9;
    // 0x80227FD4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_9:
L_80227FD8:
    // 0x80227FD8: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
L_80227FDC:
    // 0x80227FDC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80227FE0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80227FE4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80227FE8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80227FEC: jr          $ra
    // 0x80227FF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80227FF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022BFD0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BFD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BFD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BFD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BFDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BFE0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022BFE4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BFE8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022BFEC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BFF0: lw          $v0, 0x9C0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X9C0);
    // 0x8022BFF4: jalr        $v0
    // 0x8022BFF8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022BFF8: nop

    after_0:
    // 0x8022BFFC: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    // 0x8022C000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C004: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C008: jr          $ra
    // 0x8022C00C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C00C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802302F0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802302F0: lbu         $v0, 0x395($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X395);
    // 0x802302F4: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x802302F8: sb          $v0, 0x395($a0)
    MEM_B(0X395, ctx->r4) = ctx->r2;
    // 0x802302FC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80230300: sltiu       $v0, $v0, 0x21
    ctx->r2 = ctx->r2 < 0X21 ? 1 : 0;
    // 0x80230304: beq         $v0, $zero, L_8023031C
    if (ctx->r2 == 0) {
        // 0x80230308: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_8023031C;
    }
    // 0x80230308: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8023030C: lbu         $v0, 0xCA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XCA);
    // 0x80230310: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    // 0x80230314: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80230318: sb          $v0, 0xCA($a0)
    MEM_B(0XCA, ctx->r4) = ctx->r2;
L_8023031C:
    // 0x8023031C: jr          $ra
    // 0x80230320: nop

    TRACE_RETURN()
    return;
    // 0x80230320: nop

;}
RECOMP_FUNC void func_8023B6B0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B6B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023B6B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B6B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B6BC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023B6C0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023B6C4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023B6C8: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x8023B6CC: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8023B6D0: jal         0x8002C654
    // 0x8023B6D4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8023B6D4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023B6D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B6DC: jal         0x8004D5D4
    // 0x8023B6E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8023B6E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x8023B6E4: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023B6E8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023B6EC: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8023B6F0: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x8023B6F4: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8023B6F8: sh          $v0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r2;
    // 0x8023B6FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B700: addiu       $s1, $s0, 0x2C
    ctx->r17 = ADD32(ctx->r16, 0X2C);
    // 0x8023B704: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023B708: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023B70C: andi        $v1, $v1, 0xF0
    ctx->r3 = ctx->r3 & 0XF0;
    // 0x8023B710: beq         $v1, $zero, L_8023B720
    if (ctx->r3 == 0) {
        // 0x8023B714: sh          $zero, 0xA($s0)
        MEM_H(0XA, ctx->r16) = 0;
            goto L_8023B720;
    }
    // 0x8023B714: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8023B718: j           L_8023B724
    // 0x8023B71C: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
        goto L_8023B724;
    // 0x8023B71C: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
L_8023B720:
    // 0x8023B720: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
L_8023B724:
    // 0x8023B724: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8023B728: lhu         $v0, 0x3E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3E);
    // 0x8023B72C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B730: sh          $v0, 0x46($a0)
    MEM_H(0X46, ctx->r4) = ctx->r2;
    // 0x8023B734: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x8023B738: jal         0x8023B754
    // 0x8023B73C: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    func_8023B754_ovl4(rdram, ctx);
        goto after_2;
    // 0x8023B73C: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    after_2:
    // 0x8023B740: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023B744: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023B748: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B74C: jr          $ra
    // 0x8023B750: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023B750: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80239CF4_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239CF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239CF8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80239CFC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80239D00: lbu         $v0, 0xB($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XB);
    // 0x80239D04: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80239D08: sb          $v0, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r2;
    // 0x80239D0C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80239D10: bne         $v0, $zero, L_80239D28
    if (ctx->r2 != 0) {
        // 0x80239D14: lui         $v0, 0xFFDF
        ctx->r2 = S32(0XFFDF << 16);
            goto L_80239D28;
    }
    // 0x80239D14: lui         $v0, 0xFFDF
    ctx->r2 = S32(0XFFDF << 16);
    // 0x80239D18: jal         0x8004F5C4
    // 0x80239D1C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80239D1C: nop

    after_0:
    // 0x80239D20: j           L_80239D44
    // 0x80239D24: nop

        goto L_80239D44;
    // 0x80239D24: nop

L_80239D28:
    // 0x80239D28: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x80239D2C: lhu         $a0, 0x24($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X24);
    // 0x80239D30: ori         $v0, $v0, 0xDFE0
    ctx->r2 = ctx->r2 | 0XDFE0;
    // 0x80239D34: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80239D38: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80239D3C: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x80239D40: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
L_80239D44:
    // 0x80239D44: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80239D48: jr          $ra
    // 0x80239D4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239D4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A010_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A010: jr          $ra
    // 0x8023A014: nop

    TRACE_RETURN()
    return;
    // 0x8023A014: nop

;}
RECOMP_FUNC void func_8023A520_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A520: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A524: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023A528: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023A52C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023A530: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023A534: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023A538: lw          $v0, 0xFB0($at)
    ctx->r2 = MEM_W(ctx->r1, 0XFB0);
    // 0x8023A53C: jalr        $v0
    // 0x8023A540: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023A540: nop

    after_0:
    // 0x8023A544: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023A548: jr          $ra
    // 0x8023A54C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A54C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BF18_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BF18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BF1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BF20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BF24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BF28: lw          $v1, 0x33C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X33C);
    // 0x8022BF2C: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022BF30: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022BF34: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8022BF38: beq         $a0, $zero, L_8022BFB0
    if (ctx->r4 == 0) {
        // 0x8022BF3C: lui         $v0, 0x3800
        ctx->r2 = S32(0X3800 << 16);
            goto L_8022BFB0;
    }
    // 0x8022BF3C: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x8022BF40: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022BF44: beql        $v0, $zero, L_8022BFA8
    if (ctx->r2 == 0) {
        // 0x8022BF48: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_8022BFA8;
    }
    goto skip_0;
    // 0x8022BF48: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x8022BF4C: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022BF50: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022BF54: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022BF58: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8022BF5C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BF60: bgtz        $v0, L_8022BF8C
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022BF64: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8022BF8C;
    }
    // 0x8022BF64: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8022BF68: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8022BF6C: lhu         $v1, 0x328($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X328);
    // 0x8022BF70: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022BF74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BF78: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022BF7C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022BF80: andi        $v1, $v1, 0xFFFD
    ctx->r3 = ctx->r3 & 0XFFFD;
    // 0x8022BF84: j           L_8022BF94
    // 0x8022BF88: sh          $v1, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r3;
        goto L_8022BF94;
    // 0x8022BF88: sh          $v1, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r3;
L_8022BF8C:
    // 0x8022BF8C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8022BF90: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
L_8022BF94:
    // 0x8022BF94: jal         0x8002A33C
    // 0x8022BF98: nop

    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022BF98: nop

    after_0:
    // 0x8022BF9C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022BFA0: j           L_8022BFB0
    // 0x8022BFA4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
        goto L_8022BFB0;
    // 0x8022BFA4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8022BFA8:
    // 0x8022BFA8: jal         0x8002A33C
    // 0x8022BFAC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022BFAC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
L_8022BFB0:
    // 0x8022BFB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BFB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BFB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BFBC: jr          $ra
    // 0x8022BFC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BFC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022BFC4: nop

    // 0x8022BFC8: nop

    // 0x8022BFCC: nop

;}
RECOMP_FUNC void func_8022BB68_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BB68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BB6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BB70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BB74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BB78: lhu         $v0, 0x36E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X36E);
    // 0x8022BB7C: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x8022BB80: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x8022BB84: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022BB88: jal         0x8003E934
    // 0x8022BB8C: sh          $v0, 0x36E($s0)
    MEM_H(0X36E, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x8022BB8C: sh          $v0, 0x36E($s0)
    MEM_H(0X36E, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022BB90: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022BB94: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BB98: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022BB9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BBA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BBA4: jr          $ra
    // 0x8022BBA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BBA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232938_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232938: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023293C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232940: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80232944: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232948: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023294C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232950: lw          $v0, 0xBF0($at)
    ctx->r2 = MEM_W(ctx->r1, 0XBF0);
    // 0x80232954: jalr        $v0
    // 0x80232958: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80232958: nop

    after_0:
    // 0x8023295C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80232960: jr          $ra
    // 0x80232964: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232964: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D2AC_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D2AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022D2B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022D2B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D2B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022D2BC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022D2C0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022D2C4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D2C8: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022D2CC: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022D2D0: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022D2D4: beq         $v0, $zero, L_8022D59C
    if (ctx->r2 == 0) {
        // 0x8022D2D8: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022D59C;
    }
    // 0x8022D2D8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022D2DC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022D2E0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D2E4: addu        $at, $at, $v0
    gpr jr_addend_8022D2EC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D2E8: lw          $v0, 0x15B8($at)
    ctx->r2 = ADD32(ctx->r1, 0X15B8);
    // 0x8022D2EC: jr          $v0
    // 0x8022D2F0: nop

    switch (jr_addend_8022D2EC >> 2) {
        case 0: goto L_8022D2F4; break;
        case 1: goto L_8022D318; break;
        case 2: goto L_8022D3F0; break;
        case 3: goto L_8022D474; break;
        case 4: goto L_8022D4F8; break;
        default: switch_error(__func__, 0x8022D2EC, 0x802415B8);
    }
    // 0x8022D2F0: nop

L_8022D2F4:
    // 0x8022D2F4: addiu       $a0, $s1, 0x24
    ctx->r4 = ADD32(ctx->r17, 0X24);
    // 0x8022D2F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D2FC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D300: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022D304: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D308: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022D30C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D310: jal         0x800540B4
    // 0x8022D314: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    func_800540B4_2F4B4(rdram, ctx);
        goto after_0;
    // 0x8022D314: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    after_0:
L_8022D318:
    // 0x8022D318: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022D31C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D320: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D324: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D328: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D32C: bgez        $v0, L_8022D364
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D330: slti        $v0, $v0, 0x3
        ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
            goto L_8022D364;
    }
    // 0x8022D330: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8022D334: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D338: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D33C: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022D340: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022D344: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x8022D348: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D34C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022D350: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022D354: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022D358: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8022D35C: j           L_8022D3F0
    // 0x8022D360: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8022D3F0;
    // 0x8022D360: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022D364:
    // 0x8022D364: bne         $v0, $zero, L_8022D59C
    if (ctx->r2 != 0) {
        // 0x8022D368: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D59C;
    }
    // 0x8022D368: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D36C: addiu       $a1, $zero, -0x50
    ctx->r5 = ADD32(0, -0X50);
    // 0x8022D370: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D374: jal         0x8004DA90
    // 0x8022D378: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022D378: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022D37C: jal         0x80040F30
    // 0x8022D380: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022D380: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022D384: jal         0x8003E934
    // 0x8022D388: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022D388: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022D38C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022D390: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022D394: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022D398: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D39C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022D3A0: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022D3A4: bltz        $v0, L_8022D3BC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022D3A8: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022D3BC;
    }
    // 0x8022D3A8: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022D3AC: beq         $v0, $zero, L_8022D3CC
    if (ctx->r2 == 0) {
        // 0x8022D3B0: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022D3CC;
    }
    // 0x8022D3B0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D3B4: j           L_8022D59C
    // 0x8022D3B8: nop

        goto L_8022D59C;
    // 0x8022D3B8: nop

L_8022D3BC:
    // 0x8022D3BC: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022D3C0: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022D3C4: bne         $v0, $zero, L_8022D59C
    if (ctx->r2 != 0) {
        // 0x8022D3C8: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022D59C;
    }
    // 0x8022D3C8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022D3CC:
    // 0x8022D3CC: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022D3D0: jal         0x8009A3B4
    // 0x8022D3D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022D3D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022D3D8: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022D3DC: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022D3E0: jal         0x8009A3B4
    // 0x8022D3E4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022D3E4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x8022D3E8: j           L_8022D59C
    // 0x8022D3EC: nop

        goto L_8022D59C;
    // 0x8022D3EC: nop

L_8022D3F0:
    // 0x8022D3F0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022D3F4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D3F8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D3FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D400: bgez        $v0, L_8022D59C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D404: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022D59C;
    }
    // 0x8022D404: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022D408: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D40C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022D410: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022D414: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D418: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x8022D41C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022D420: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8022D424: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022D428: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8022D42C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D430: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022D434: lh          $v1, 0x56($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X56);
    // 0x8022D438: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x8022D43C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022D440: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022D444: jal         0x8004FAEC
    // 0x8022D448: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_6;
    // 0x8022D448: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_6:
    // 0x8022D44C: beq         $v0, $zero, L_8022D464
    if (ctx->r2 == 0) {
        // 0x8022D450: nop
    
            goto L_8022D464;
    }
    // 0x8022D450: nop

    // 0x8022D454: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x8022D458: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022D45C: j           L_8022D470
    // 0x8022D460: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022D470;
    // 0x8022D460: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022D464:
    // 0x8022D464: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x8022D468: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022D46C: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
L_8022D470:
    // 0x8022D470: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
L_8022D474:
    // 0x8022D474: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022D478: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D47C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D480: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D484: bgez        $v0, L_8022D4E0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D488: nop
    
            goto L_8022D4E0;
    }
    // 0x8022D488: nop

    // 0x8022D48C: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x8022D490: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D494: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
    // 0x8022D498: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D49C: bgez        $v0, L_8022D4C0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D4A0: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_8022D4C0;
    }
    // 0x8022D4A0: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8022D4A4: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D4A8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022D4AC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022D4B0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D4B4: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022D4B8: j           L_8022D4F8
    // 0x8022D4BC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022D4F8;
    // 0x8022D4BC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022D4C0:
    // 0x8022D4C0: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D4C4: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x8022D4C8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D4CC: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x8022D4D0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022D4D4: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8022D4D8: j           L_8022D59C
    // 0x8022D4DC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022D59C;
    // 0x8022D4DC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022D4E0:
    // 0x8022D4E0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022D4E4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022D4E8: bnel        $v0, $zero, L_8022D59C
    if (ctx->r2 != 0) {
        // 0x8022D4EC: sh          $zero, 0x6($s1)
        MEM_H(0X6, ctx->r17) = 0;
            goto L_8022D59C;
    }
    goto skip_0;
    // 0x8022D4EC: sh          $zero, 0x6($s1)
    MEM_H(0X6, ctx->r17) = 0;
    skip_0:
    // 0x8022D4F0: j           L_8022D59C
    // 0x8022D4F4: nop

        goto L_8022D59C;
    // 0x8022D4F4: nop

L_8022D4F8:
    // 0x8022D4F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D4FC: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8022D500: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D504: jal         0x8004DA90
    // 0x8022D508: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_7;
    // 0x8022D508: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
    // 0x8022D50C: jal         0x80040F30
    // 0x8022D510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_8;
    // 0x8022D510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8022D514: jal         0x8003E934
    // 0x8022D518: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_9;
    // 0x8022D518: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8022D51C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022D520: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022D524: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022D528: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D52C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022D530: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022D534: bltz        $v0, L_8022D54C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022D538: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022D54C;
    }
    // 0x8022D538: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022D53C: beq         $v0, $zero, L_8022D55C
    if (ctx->r2 == 0) {
        // 0x8022D540: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022D55C;
    }
    // 0x8022D540: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D544: j           L_8022D578
    // 0x8022D548: nop

        goto L_8022D578;
    // 0x8022D548: nop

L_8022D54C:
    // 0x8022D54C: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022D550: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022D554: bne         $v0, $zero, L_8022D578
    if (ctx->r2 != 0) {
        // 0x8022D558: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022D578;
    }
    // 0x8022D558: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022D55C:
    // 0x8022D55C: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022D560: jal         0x8009A3B4
    // 0x8022D564: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x8022D564: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x8022D568: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022D56C: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022D570: jal         0x8009A3B4
    // 0x8022D574: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x8022D574: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_11:
L_8022D578:
    // 0x8022D578: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022D57C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D580: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D584: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D588: bgez        $v0, L_8022D59C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D58C: nop
    
            goto L_8022D59C;
    }
    // 0x8022D58C: nop

    // 0x8022D590: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022D594: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022D598: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022D59C:
    // 0x8022D59C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022D5A0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022D5A4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D5A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022D5AC: jr          $ra
    // 0x8022D5B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022D5B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022DDC0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DDC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DDC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DDC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DDCC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022DDD0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022DDD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DDD8: jal         0x8009A3B4
    // 0x8022DDDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022DDDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022DDE0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022DDE4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022DDE8: jal         0x8009A3B4
    // 0x8022DDEC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022DDEC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022DDF0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022DDF4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022DDF8: jal         0x8009A3B4
    // 0x8022DDFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022DDFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022DE00: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022DE04: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DE08: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022DE0C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DE10: lw          $v0, 0xA60($at)
    ctx->r2 = MEM_W(ctx->r1, 0XA60);
    // 0x8022DE14: jalr        $v0
    // 0x8022DE18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022DE18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022DE1C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DE20: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022DE24: beq         $v0, $zero, L_8022DE3C
    if (ctx->r2 == 0) {
        // 0x8022DE28: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022DE3C;
    }
    // 0x8022DE28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DE2C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8022DE30: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022DE34: jal         0x8003B564
    // 0x8022DE38: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x8022DE38: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8022DE3C:
    // 0x8022DE3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DE40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DE44: jr          $ra
    // 0x8022DE48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DE48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023009C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023009C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802300A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802300A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802300A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802300AC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802300B0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802300B4: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x802300B8: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x802300BC: bne         $v0, $zero, L_802300D0
    if (ctx->r2 != 0) {
        // 0x802300C0: addiu       $s1, $s0, 0xC4
        ctx->r17 = ADD32(ctx->r16, 0XC4);
            goto L_802300D0;
    }
    // 0x802300C0: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    // 0x802300C4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802300C8: jal         0x8022FAB4
    // 0x802300CC: sh          $v0, 0x382($s0)
    MEM_H(0X382, ctx->r16) = ctx->r2;
    func_8022FAB4_ovl4(rdram, ctx);
        goto after_0;
    // 0x802300CC: sh          $v0, 0x382($s0)
    MEM_H(0X382, ctx->r16) = ctx->r2;
    after_0:
L_802300D0:
    // 0x802300D0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802300D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802300D8: bne         $v1, $v0, L_80230168
    if (ctx->r3 != ctx->r2) {
        // 0x802300DC: nop
    
            goto L_80230168;
    }
    // 0x802300DC: nop

    // 0x802300E0: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x802300E4: lbu         $v1, 0x65($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X65);
    // 0x802300E8: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x802300EC: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x802300F0: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x802300F4: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x802300F8: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x802300FC: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80230100: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80230104: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80230108: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8023010C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80230110: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x80230114: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80230118: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x8023011C: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x80230120: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x80230124: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x80230128: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x8023012C: bne         $v1, $zero, L_80230168
    if (ctx->r3 != 0) {
        // 0x80230130: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_80230168;
    }
    // 0x80230130: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80230134: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x80230138: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x8023013C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80230140: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80230144: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80230148: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023014C: beq         $v1, $v0, L_80230168
    if (ctx->r3 == ctx->r2) {
        // 0x80230150: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_80230168;
    }
    // 0x80230150: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80230154: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x80230158: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x8023015C: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x80230160: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80230164: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_80230168:
    // 0x80230168: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8023016C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230170: bne         $v1, $v0, L_802301C8
    if (ctx->r3 != ctx->r2) {
        // 0x80230174: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802301C8;
    }
    // 0x80230174: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230178: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023017C: beq         $v1, $v0, L_802301C0
    if (ctx->r3 == ctx->r2) {
        // 0x80230180: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_802301C0;
    }
    // 0x80230180: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80230184: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80230188: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8023018C: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x80230190: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80230194: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80230198: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023019C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802301A0: sh          $v0, 0x3A($s2)
    MEM_H(0X3A, ctx->r18) = ctx->r2;
    // 0x802301A4: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802301A8: sb          $v0, 0x3E($s2)
    MEM_B(0X3E, ctx->r18) = ctx->r2;
    // 0x802301AC: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802301B0: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
    // 0x802301B4: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x802301B8: j           L_802301C8
    // 0x802301BC: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
        goto L_802301C8;
    // 0x802301BC: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_802301C0:
    // 0x802301C0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802301C4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_802301C8:
    // 0x802301C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802301CC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802301D0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802301D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802301D8: jr          $ra
    // 0x802301DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802301DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80230850_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230850: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230854: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230858: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023085C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230860: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80230864: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80230868: jal         0x8004DA90
    // 0x8023086C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8023086C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80230870: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80230874: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x80230878: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023087C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80230880: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230884: bltz        $v0, L_802308C8
    if (SIGNED(ctx->r2) < 0) {
        // 0x80230888: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802308C8;
    }
    // 0x80230888: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023088C: lbu         $v1, 0x1DC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1DC);
    // 0x80230890: bne         $v1, $v0, L_802308BC
    if (ctx->r3 != ctx->r2) {
        // 0x80230894: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802308BC;
    }
    // 0x80230894: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80230898: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023089C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802308A0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802308A4: jal         0x8004F820
    // 0x802308A8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x802308A8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_1:
    // 0x802308AC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802308B0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802308B4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802308B8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_802308BC:
    // 0x802308BC: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x802308C0: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x802308C4: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
L_802308C8:
    // 0x802308C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802308CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802308D0: jr          $ra
    // 0x802308D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802308D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232BB0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232BB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80232BB4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80232BB8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80232BBC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80232BC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80232BC4: lh          $s0, 0x34C($s1)
    ctx->r16 = MEM_H(ctx->r17, 0X34C);
    // 0x80232BC8: slti        $v0, $s0, 0xE
    ctx->r2 = SIGNED(ctx->r16) < 0XE ? 1 : 0;
    // 0x80232BCC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80232BD0: andi        $a1, $v0, 0xA
    ctx->r5 = ctx->r2 & 0XA;
    // 0x80232BD4: slti        $v0, $s0, 0xB
    ctx->r2 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
    // 0x80232BD8: beq         $v0, $zero, L_80232BE4
    if (ctx->r2 == 0) {
        // 0x80232BDC: addu        $v1, $s0, $zero
        ctx->r3 = ADD32(ctx->r16, 0);
            goto L_80232BE4;
    }
    // 0x80232BDC: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x80232BE0: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
L_80232BE4:
    // 0x80232BE4: lw          $a0, 0x354($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X354);
    // 0x80232BE8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80232BEC: slti        $s0, $s0, 0x5
    ctx->r16 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x80232BF0: xori        $s0, $s0, 0x1
    ctx->r16 = ctx->r16 ^ 0X1;
    // 0x80232BF4: negu        $s0, $s0
    ctx->r16 = SUB32(0, ctx->r16);
    // 0x80232BF8: and         $s0, $a1, $s0
    ctx->r16 = ctx->r5 & ctx->r16;
    // 0x80232BFC: jal         0x800324B4
    // 0x80232C00: sh          $v0, 0x34C($s1)
    MEM_H(0X34C, ctx->r17) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80232C00: sh          $v0, 0x34C($s1)
    MEM_H(0X34C, ctx->r17) = ctx->r2;
    after_0:
    // 0x80232C04: nop

    // 0x80232C08: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80232C0C: mflo        $v0
    ctx->r2 = lo;
    // 0x80232C10: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x80232C14: lw          $a0, 0x354($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X354);
    // 0x80232C18: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80232C1C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232C20: jal         0x80032498
    // 0x80232C24: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80232C24: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    after_1:
    // 0x80232C28: nop

    // 0x80232C2C: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80232C30: mflo        $v0
    ctx->r2 = lo;
    // 0x80232C34: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x80232C38: lb          $a0, 0xA7($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XA7);
    // 0x80232C3C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80232C40: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232C44: bgez        $a0, L_80232C64
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80232C48: sh          $v1, 0x18($s1)
        MEM_H(0X18, ctx->r17) = ctx->r3;
            goto L_80232C64;
    }
    // 0x80232C48: sh          $v1, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r3;
    // 0x80232C4C: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80232C50: bne         $v0, $zero, L_80232C5C
    if (ctx->r2 != 0) {
        // 0x80232C54: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80232C5C;
    }
    // 0x80232C54: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80232C58: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80232C5C:
    // 0x80232C5C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80232C60: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80232C64:
    // 0x80232C64: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80232C68: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80232C6C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80232C70: jr          $ra
    // 0x80232C74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80232C74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80236770_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236770: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80236774: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80236778: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023677C: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x80236780: ori         $v1, $v1, 0xE
    ctx->r3 = ctx->r3 | 0XE;
    // 0x80236784: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x80236788: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8023678C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80236790: addiu       $s0, $s2, 0x1C
    ctx->r16 = ADD32(ctx->r18, 0X1C);
    // 0x80236794: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236798: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8023679C: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x802367A0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802367A4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802367A8: sw          $v1, 0x88($s2)
    MEM_W(0X88, ctx->r18) = ctx->r3;
    // 0x802367AC: sw          $v0, 0x8C($s2)
    MEM_W(0X8C, ctx->r18) = ctx->r2;
    // 0x802367B0: sh          $zero, 0x7C($s2)
    MEM_H(0X7C, ctx->r18) = 0;
    // 0x802367B4: jal         0x8004DD04
    // 0x802367B8: sb          $zero, 0x76($s2)
    MEM_B(0X76, ctx->r18) = 0;
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x802367B8: sb          $zero, 0x76($s2)
    MEM_B(0X76, ctx->r18) = 0;
    after_0:
    // 0x802367BC: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x802367C0: lhu         $v1, 0x14($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X14);
    // 0x802367C4: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x802367C8: lhu         $a3, 0x18($s2)
    ctx->r7 = MEM_HU(ctx->r18, 0X18);
    // 0x802367CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802367D0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x802367D4: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x802367D8: sh          $v1, 0x90($s2)
    MEM_H(0X90, ctx->r18) = ctx->r3;
    // 0x802367DC: sh          $v0, 0x92($s2)
    MEM_H(0X92, ctx->r18) = ctx->r2;
    // 0x802367E0: jal         0x8009A3B4
    // 0x802367E4: sh          $a3, 0x94($s2)
    MEM_H(0X94, ctx->r18) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802367E4: sh          $a3, 0x94($s2)
    MEM_H(0X94, ctx->r18) = ctx->r7;
    after_1:
    // 0x802367E8: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x802367EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802367F0: jal         0x8009A3B4
    // 0x802367F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802367F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802367F8: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x802367FC: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80236800: beq         $v0, $zero, L_8023683C
    if (ctx->r2 == 0) {
        // 0x80236804: nop
    
            goto L_8023683C;
    }
    // 0x80236804: nop

    // 0x80236808: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x8023680C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236810: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80236814: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236818: lhu         $v1, 0xD58($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XD58);
    // 0x8023681C: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x80236820: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236824: sb          $v1, 0x96($s2)
    MEM_B(0X96, ctx->r18) = ctx->r3;
    // 0x80236828: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023682C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236830: lhu         $v0, 0xD5A($at)
    ctx->r2 = MEM_HU(ctx->r1, 0XD5A);
    // 0x80236834: j           L_8023686C
    // 0x80236838: sb          $v0, 0x97($s2)
    MEM_B(0X97, ctx->r18) = ctx->r2;
        goto L_8023686C;
    // 0x80236838: sb          $v0, 0x97($s2)
    MEM_B(0X97, ctx->r18) = ctx->r2;
L_8023683C:
    // 0x8023683C: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x80236840: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236844: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80236848: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023684C: lhu         $v1, 0xD40($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XD40);
    // 0x80236850: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x80236854: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236858: sb          $v1, 0x96($s2)
    MEM_B(0X96, ctx->r18) = ctx->r3;
    // 0x8023685C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236860: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236864: lhu         $v0, 0xD42($at)
    ctx->r2 = MEM_HU(ctx->r1, 0XD42);
    // 0x80236868: sb          $v0, 0x97($s2)
    MEM_B(0X97, ctx->r18) = ctx->r2;
L_8023686C:
    // 0x8023686C: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80236870: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x80236874: sh          $v1, 0x98($s2)
    MEM_H(0X98, ctx->r18) = ctx->r3;
    // 0x80236878: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023687C: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80236880: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80236884: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80236888: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023688C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80236890: jr          $ra
    // 0x80236894: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80236894: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8023960C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023960C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80239610: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80239614: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239618: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023961C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80239620: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80239624: lw          $v1, 0xF0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XF0);
    // 0x80239628: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8023962C: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80239630: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80239634: beq         $v0, $zero, L_8023964C
    if (ctx->r2 == 0) {
        // 0x80239638: addiu       $s1, $s0, 0xD0
        ctx->r17 = ADD32(ctx->r16, 0XD0);
            goto L_8023964C;
    }
    // 0x80239638: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x8023963C: jal         0x80239204
    // 0x80239640: nop

    func_80239204_ovl4(rdram, ctx);
        goto after_0;
    // 0x80239640: nop

    after_0:
    // 0x80239644: j           L_80239664
    // 0x80239648: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80239664;
    // 0x80239648: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023964C:
    // 0x8023964C: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x80239650: beq         $v0, $zero, L_80239664
    if (ctx->r2 == 0) {
        // 0x80239654: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80239664;
    }
    // 0x80239654: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80239658: jal         0x80239260
    // 0x8023965C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80239260_ovl4(rdram, ctx);
        goto after_1;
    // 0x8023965C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80239660: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80239664:
    // 0x80239664: bne         $v0, $zero, L_802397B8
    if (ctx->r2 != 0) {
        // 0x80239668: nop
    
            goto L_802397B8;
    }
    // 0x80239668: nop

    // 0x8023966C: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x80239670: lhu         $v1, 0x3E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3E);
    // 0x80239674: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80239678: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x8023967C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80239680: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80239684: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x80239688: bne         $v0, $v1, L_80239694
    if (ctx->r2 != ctx->r3) {
        // 0x8023968C: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80239694;
    }
    // 0x8023968C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80239690: sh          $v0, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r2;
L_80239694:
    // 0x80239694: lh          $v1, 0x54($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X54);
    // 0x80239698: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x8023969C: bne         $v1, $v0, L_802396A8
    if (ctx->r3 != ctx->r2) {
        // 0x802396A0: addiu       $v0, $zero, -0x20
        ctx->r2 = ADD32(0, -0X20);
            goto L_802396A8;
    }
    // 0x802396A0: addiu       $v0, $zero, -0x20
    ctx->r2 = ADD32(0, -0X20);
    // 0x802396A4: sh          $v0, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r2;
L_802396A8:
    // 0x802396A8: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x802396AC: beq         $v0, $zero, L_802397A4
    if (ctx->r2 == 0) {
        // 0x802396B0: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_802397A4;
    }
    // 0x802396B0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802396B4: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
    // 0x802396B8: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802396BC: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x802396C0: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x802396C4: jal         0x8004DA90
    // 0x802396C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x802396C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802396CC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x802396D0: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x802396D4: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802396D8: lh          $v1, 0x56($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X56);
    // 0x802396DC: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x802396E0: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802396E4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802396E8: jal         0x8004FAEC
    // 0x802396EC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_3;
    // 0x802396EC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x802396F0: beq         $v0, $zero, L_8023978C
    if (ctx->r2 == 0) {
        // 0x802396F4: ori         $v0, $zero, 0x9C40
        ctx->r2 = 0 | 0X9C40;
            goto L_8023978C;
    }
    // 0x802396F4: ori         $v0, $zero, 0x9C40
    ctx->r2 = 0 | 0X9C40;
    // 0x802396F8: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x802396FC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80239700: bne         $v0, $zero, L_802397B8
    if (ctx->r2 != 0) {
        // 0x80239704: addiu       $a0, $zero, 0x15C
        ctx->r4 = ADD32(0, 0X15C);
            goto L_802397B8;
    }
    // 0x80239704: addiu       $a0, $zero, 0x15C
    ctx->r4 = ADD32(0, 0X15C);
    // 0x80239708: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023970C: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x80239710: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80239714: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x80239718: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8023971C: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80239720: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x80239724: addiu       $v0, $zero, 0xE80
    ctx->r2 = ADD32(0, 0XE80);
    // 0x80239728: jal         0x8002A33C
    // 0x8023972C: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8023972C: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    after_4:
    // 0x80239730: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80239734: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80239738: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8023973C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239740: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239744: jal         0x8004DA90
    // 0x80239748: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x80239748: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    after_5:
    // 0x8023974C: lhu         $v1, 0x46($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X46);
    // 0x80239750: lhu         $a0, 0x4E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4E);
    // 0x80239754: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80239758: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x8023975C: lw          $a1, -0x14F0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X14F0);
    // 0x80239760: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80239764: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239768: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8023976C: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x80239770: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80239774: lbu         $v1, 0xA($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XA);
    // 0x80239778: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023977C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80239780: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80239784: j           L_802397B8
    // 0x80239788: sh          $v1, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = ctx->r3;
        goto L_802397B8;
    // 0x80239788: sh          $v1, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = ctx->r3;
L_8023978C:
    // 0x8023978C: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80239790: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x80239794: ori         $v0, $v0, 0xD08F
    ctx->r2 = ctx->r2 | 0XD08F;
    // 0x80239798: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8023979C: beq         $v0, $zero, L_802397B8
    if (ctx->r2 == 0) {
        // 0x802397A0: nop
    
            goto L_802397B8;
    }
    // 0x802397A0: nop

L_802397A4:
    // 0x802397A4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802397A8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802397AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802397B0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802397B4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_802397B8:
    // 0x802397B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802397BC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802397C0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802397C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802397C8: jr          $ra
    // 0x802397CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802397CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80228518_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228518: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022851C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228520: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228524: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80228528: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022852C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228530: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228534: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228538: beq         $v1, $zero, L_80228554
    if (ctx->r3 == 0) {
        // 0x8022853C: addiu       $s2, $s0, 0x328
        ctx->r18 = ADD32(ctx->r16, 0X328);
            goto L_80228554;
    }
    // 0x8022853C: addiu       $s2, $s0, 0x328
    ctx->r18 = ADD32(ctx->r16, 0X328);
    // 0x80228540: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228544: beq         $v1, $v0, L_802285D8
    if (ctx->r3 == ctx->r2) {
        // 0x80228548: nop
    
            goto L_802285D8;
    }
    // 0x80228548: nop

    // 0x8022854C: j           L_80228628
    // 0x80228550: nop

        goto L_80228628;
    // 0x80228550: nop

L_80228554:
    // 0x80228554: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80228558: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022855C: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x80228560: addiu       $s3, $s3, 0x49C4
    ctx->r19 = ADD32(ctx->r19, 0X49C4);
    // 0x80228564: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80228568: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022856C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80228570: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228574: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228578: jal         0x8004F820
    // 0x8022857C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022857C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80228580: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228584: bgez        $v0, L_802285B0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228588: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802285B0;
    }
    // 0x80228588: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022858C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228590: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80228594: jal         0x8004F820
    // 0x80228598: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80228598: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x8022859C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802285A0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802285A4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802285A8: j           L_802285C8
    // 0x802285AC: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_802285C8;
    // 0x802285AC: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_802285B0:
    // 0x802285B0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802285B4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x802285B8: jal         0x8004F820
    // 0x802285BC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x802285BC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x802285C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802285C4: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_802285C8:
    // 0x802285C8: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x802285CC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802285D0: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x802285D4: sh          $zero, 0x8($s2)
    MEM_H(0X8, ctx->r18) = 0;
L_802285D8:
    // 0x802285D8: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x802285DC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802285E0: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x802285E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802285E8: bgez        $v0, L_802285FC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802285EC: nop
    
            goto L_802285FC;
    }
    // 0x802285EC: nop

    // 0x802285F0: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802285F4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802285F8: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_802285FC:
    // 0x802285FC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228600: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x80228604: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228608: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022860C: jal         0x8004F820
    // 0x80228610: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80228610: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x80228614: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x80228618: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022861C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228620: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228624: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80228628:
    // 0x80228628: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022862C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80228630: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228634: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228638: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022863C: jr          $ra
    // 0x80228640: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228640: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80230324_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230324: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230328: addiu       $a2, $a0, 0x348
    ctx->r6 = ADD32(ctx->r4, 0X348);
    // 0x8023032C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230330: lb          $v1, 0xA7($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XA7);
    // 0x80230334: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230338: bne         $v1, $v0, L_802303AC
    if (ctx->r3 != ctx->r2) {
        // 0x8023033C: addiu       $a1, $a0, 0xC4
        ctx->r5 = ADD32(ctx->r4, 0XC4);
            goto L_802303AC;
    }
    // 0x8023033C: addiu       $a1, $a0, 0xC4
    ctx->r5 = ADD32(ctx->r4, 0XC4);
    // 0x80230340: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80230344: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x80230348: sb          $v1, 0x386($a0)
    MEM_B(0X386, ctx->r4) = ctx->r3;
    // 0x8023034C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80230350: beq         $v0, $v1, L_80230364
    if (ctx->r2 == ctx->r3) {
        // 0x80230354: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80230364;
    }
    // 0x80230354: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80230358: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8023035C: j           L_80230370
    // 0x80230360: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
        goto L_80230370;
    // 0x80230360: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80230364:
    // 0x80230364: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80230368: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8023036C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
L_80230370:
    // 0x80230370: lbu         $v0, 0x6($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X6);
    // 0x80230374: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80230378: beq         $v0, $zero, L_80230394
    if (ctx->r2 == 0) {
        // 0x8023037C: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80230394;
    }
    // 0x8023037C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80230380: lbu         $v0, 0x6($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X6);
    // 0x80230384: sb          $zero, 0x7($a1)
    MEM_B(0X7, ctx->r5) = 0;
    // 0x80230388: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8023038C: sb          $v0, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r2;
    // 0x80230390: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_80230394:
    // 0x80230394: sh          $v0, 0x3A($a2)
    MEM_H(0X3A, ctx->r6) = ctx->r2;
    // 0x80230398: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023039C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802303A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802303A4: jal         0x80050294
    // 0x802303A8: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802303A8: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    after_0:
L_802303AC:
    // 0x802303AC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802303B0: jr          $ra
    // 0x802303B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802303B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229908_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229908: lhu         $v0, 0x32A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X32A);
    // 0x8022990C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229910: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x80229914: andi        $a2, $v0, 0xF
    ctx->r6 = ctx->r2 & 0XF;
    // 0x80229918: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_8022991C:
    // 0x8022991C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229920: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80229924: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229928: lbu         $v0, 0x7E8($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X7E8);
    // 0x8022992C: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80229930: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80229934: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229938: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022993C: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80229940: bne         $v0, $zero, L_80229960
    if (ctx->r2 != 0) {
        // 0x80229944: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80229960;
    }
    // 0x80229944: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80229948: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022994C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229950: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229954: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x80229958: bne         $v0, $zero, L_8022991C
    if (ctx->r2 != 0) {
        // 0x8022995C: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8022991C;
    }
    // 0x8022995C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_80229960:
    // 0x80229960: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229964: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80229968: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022996C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229970: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229974: beq         $v1, $v0, L_802299A8
    if (ctx->r3 == ctx->r2) {
        // 0x80229978: sh          $zero, 0xA($a0)
        MEM_H(0XA, ctx->r4) = 0;
            goto L_802299A8;
    }
    // 0x80229978: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
    // 0x8022997C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80229980: beql        $v0, $zero, L_80229998
    if (ctx->r2 == 0) {
        // 0x80229984: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229998;
    }
    goto skip_0;
    // 0x80229984: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80229988: beql        $v1, $zero, L_802299B8
    if (ctx->r3 == 0) {
        // 0x8022998C: sh          $zero, 0x66($a0)
        MEM_H(0X66, ctx->r4) = 0;
            goto L_802299B8;
    }
    goto skip_1;
    // 0x8022998C: sh          $zero, 0x66($a0)
    MEM_H(0X66, ctx->r4) = 0;
    skip_1:
    // 0x80229990: j           L_802299B8
    // 0x80229994: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
        goto L_802299B8;
    // 0x80229994: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_80229998:
    // 0x80229998: beql        $v1, $v0, L_802299B4
    if (ctx->r3 == ctx->r2) {
        // 0x8022999C: addiu       $v0, $zero, -0x10
        ctx->r2 = ADD32(0, -0X10);
            goto L_802299B4;
    }
    goto skip_2;
    // 0x8022999C: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    skip_2:
    // 0x802299A0: j           L_802299B8
    // 0x802299A4: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
        goto L_802299B8;
    // 0x802299A4: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_802299A8:
    // 0x802299A8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802299AC: j           L_802299B8
    // 0x802299B0: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
        goto L_802299B8;
    // 0x802299B0: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
L_802299B4:
    // 0x802299B4: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
L_802299B8:
    // 0x802299B8: jr          $ra
    // 0x802299BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x802299BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_802279C8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802279C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802279CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802279D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802279D4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802279D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802279DC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802279E0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802279E4: addiu       $v0, $v0, 0x49B0
    ctx->r2 = ADD32(ctx->r2, 0X49B0);
    // 0x802279E8: sw          $v0, 0x380($s0)
    MEM_W(0X380, ctx->r16) = ctx->r2;
    // 0x802279EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802279F0: beq         $v1, $v0, L_80227A58
    if (ctx->r3 == ctx->r2) {
        // 0x802279F4: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80227A58;
    }
    // 0x802279F4: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x802279F8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802279FC: beql        $v0, $zero, L_80227A14
    if (ctx->r2 == 0) {
        // 0x80227A00: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227A14;
    }
    goto skip_0;
    // 0x80227A00: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80227A04: beq         $v1, $zero, L_80227A2C
    if (ctx->r3 == 0) {
        // 0x80227A08: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80227A2C;
    }
    // 0x80227A08: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80227A0C: j           L_80227BDC
    // 0x80227A10: nop

        goto L_80227BDC;
    // 0x80227A10: nop

L_80227A14:
    // 0x80227A14: beq         $v1, $v0, L_80227B24
    if (ctx->r3 == ctx->r2) {
        // 0x80227A18: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80227B24;
    }
    // 0x80227A18: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227A1C: beq         $v1, $v0, L_80227B84
    if (ctx->r3 == ctx->r2) {
        // 0x80227A20: nop
    
            goto L_80227B84;
    }
    // 0x80227A20: nop

    // 0x80227A24: j           L_80227BDC
    // 0x80227A28: nop

        goto L_80227BDC;
    // 0x80227A28: nop

L_80227A2C:
    // 0x80227A2C: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x80227A30: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80227A34: beq         $v0, $zero, L_80227A44
    if (ctx->r2 == 0) {
        // 0x80227A38: sb          $v1, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r3;
            goto L_80227A44;
    }
    // 0x80227A38: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80227A3C: j           L_80227A48
    // 0x80227A40: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
        goto L_80227A48;
    // 0x80227A40: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
L_80227A44:
    // 0x80227A44: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
L_80227A48:
    // 0x80227A48: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227A4C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80227A50: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80227A54: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
L_80227A58:
    // 0x80227A58: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80227A5C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227A60: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80227A64: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227A68: bgez        $v0, L_80227A84
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227A6C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227A84;
    }
    // 0x80227A6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227A70: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227A74: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227A78: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227A7C: j           L_80227B24
    // 0x80227A80: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80227B24;
    // 0x80227A80: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80227A84:
    // 0x80227A84: addiu       $a1, $zero, 0x180
    ctx->r5 = ADD32(0, 0X180);
    // 0x80227A88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227A8C: jal         0x8004DA90
    // 0x80227A90: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80227A90: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80227A94: jal         0x80040F30
    // 0x80227A98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x80227A98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80227A9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227AA0: jal         0x8003E934
    // 0x80227AA4: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x80227AA4: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    after_2:
    // 0x80227AA8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80227AAC: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80227AB0: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80227AB4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227AB8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80227ABC: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80227AC0: bltz        $v0, L_80227AD8
    if (SIGNED(ctx->r2) < 0) {
        // 0x80227AC4: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_80227AD8;
    }
    // 0x80227AC4: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80227AC8: beq         $v0, $zero, L_80227AE8
    if (ctx->r2 == 0) {
        // 0x80227ACC: nop
    
            goto L_80227AE8;
    }
    // 0x80227ACC: nop

    // 0x80227AD0: j           L_80227B08
    // 0x80227AD4: nop

        goto L_80227B08;
    // 0x80227AD4: nop

L_80227AD8:
    // 0x80227AD8: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x80227ADC: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80227AE0: bne         $v0, $zero, L_80227B08
    if (ctx->r2 != 0) {
        // 0x80227AE4: nop
    
            goto L_80227B08;
    }
    // 0x80227AE4: nop

L_80227AE8:
    // 0x80227AE8: lhu         $v0, 0x2E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2E);
    // 0x80227AEC: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x80227AF0: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x80227AF4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x80227AF8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80227AFC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80227B00: j           L_80227BDC
    // 0x80227B04: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
        goto L_80227BDC;
    // 0x80227B04: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
L_80227B08:
    // 0x80227B08: lw          $v0, 0x5C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X5C);
    // 0x80227B0C: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80227B10: beq         $v0, $zero, L_80227BDC
    if (ctx->r2 == 0) {
        // 0x80227B14: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80227BDC;
    }
    // 0x80227B14: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80227B18: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80227B1C: j           L_80227BDC
    // 0x80227B20: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80227BDC;
    // 0x80227B20: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80227B24:
    // 0x80227B24: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80227B28: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227B2C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80227B30: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227B34: bgez        $v0, L_80227BDC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227B38: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80227BDC;
    }
    // 0x80227B38: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227B3C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227B40: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227B44: lw          $a1, 0x58($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X58);
    // 0x80227B48: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227B4C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80227B50: jal         0x8004F820
    // 0x80227B54: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80227B54: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_3:
    // 0x80227B58: lui         $a0, 0x5555
    ctx->r4 = S32(0X5555 << 16);
    // 0x80227B5C: ori         $a0, $a0, 0x5556
    ctx->r4 = ctx->r4 | 0X5556;
    // 0x80227B60: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227B64: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227B68: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80227B6C: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80227B70: mfhi        $t0
    ctx->r8 = hi;
    // 0x80227B74: subu        $v0, $t0, $v0
    ctx->r2 = SUB32(ctx->r8, ctx->r2);
    // 0x80227B78: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x80227B7C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227B80: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80227B84:
    // 0x80227B84: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80227B88: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227B8C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80227B90: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227B94: bgez        $v0, L_80227BA8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227B98: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80227BA8;
    }
    // 0x80227B98: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227B9C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80227BA0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80227BA4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80227BA8:
    // 0x80227BA8: lw          $a1, 0x58($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X58);
    // 0x80227BAC: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x80227BB0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227BB4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x80227BB8: bltzl       $a3, L_80227BC0
    if (SIGNED(ctx->r7) < 0) {
        // 0x80227BBC: negu        $a3, $a3
        ctx->r7 = SUB32(0, ctx->r7);
            goto L_80227BC0;
    }
    goto skip_1;
    // 0x80227BBC: negu        $a3, $a3
    ctx->r7 = SUB32(0, ctx->r7);
    skip_1:
L_80227BC0:
    // 0x80227BC0: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80227BC4: jal         0x8004F820
    // 0x80227BC8: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x80227BC8: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    after_4:
    // 0x80227BCC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227BD0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227BD4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80227BD8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80227BDC:
    // 0x80227BDC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227BE0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227BE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227BE8: jr          $ra
    // 0x80227BEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227BEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022EC18_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EC18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EC1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EC20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EC24: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022EC28: jal         0x8005131C
    // 0x8022EC2C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_8005131C_2C71C(rdram, ctx);
        goto after_0;
    // 0x8022EC2C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022EC30: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022EC34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EC38: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022EC3C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022EC40: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022EC44: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022EC48: jal         0x8004D5D4
    // 0x8022EC4C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022EC4C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022EC50: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022EC54: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022EC58: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x8022EC5C: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x8022EC60: sb          $zero, 0x386($s0)
    MEM_B(0X386, ctx->r16) = 0;
    // 0x8022EC64: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8022EC68: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x8022EC6C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8022EC70: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022EC74: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022EC78: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022EC7C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022EC80: addiu       $v0, $v0, 0xAA0
    ctx->r2 = ADD32(ctx->r2, 0XAA0);
    // 0x8022EC84: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022EC88: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022EC8C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022EC90: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8022EC94: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x8022EC98: sb          $v0, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r2;
    // 0x8022EC9C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022ECA0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022ECA4: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022ECA8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022ECAC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022ECB0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022ECB4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8022ECB8: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x8022ECBC: lbu         $v1, 0xB($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XB);
    // 0x8022ECC0: addiu       $a0, $s0, 0x368
    ctx->r4 = ADD32(ctx->r16, 0X368);
    // 0x8022ECC4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022ECC8: sb          $zero, 0x1DC($s0)
    MEM_B(0X1DC, ctx->r16) = 0;
    // 0x8022ECCC: sh          $zero, 0x1D8($s0)
    MEM_H(0X1D8, ctx->r16) = 0;
    // 0x8022ECD0: sb          $v0, 0x1DD($s0)
    MEM_B(0X1DD, ctx->r16) = ctx->r2;
    // 0x8022ECD4: sb          $zero, 0x67($s0)
    MEM_B(0X67, ctx->r16) = 0;
    // 0x8022ECD8: sb          $zero, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = 0;
    // 0x8022ECDC: jal         0x800540BC
    // 0x8022ECE0: sh          $v1, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r3;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_2;
    // 0x8022ECE0: sh          $v1, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022ECE4: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022ECE8: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022ECEC: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022ECF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022ECF4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022ECF8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022ECFC: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022ED00: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x8022ED04: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022ED08: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022ED0C: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
    // 0x8022ED10: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022ED14: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8022ED18: sh          $v0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r2;
    // 0x8022ED1C: bne         $v1, $zero, L_8022ED44
    if (ctx->r3 != 0) {
        // 0x8022ED20: sh          $v0, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r2;
            goto L_8022ED44;
    }
    // 0x8022ED20: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x8022ED24: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8022ED28: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022ED2C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022ED30: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022ED34: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022ED38: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8022ED3C: j           L_8022ED5C
    // 0x8022ED40: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
        goto L_8022ED5C;
    // 0x8022ED40: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
L_8022ED44:
    // 0x8022ED44: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022ED48: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022ED4C: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
    // 0x8022ED50: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022ED54: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022ED58: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
L_8022ED5C:
    // 0x8022ED5C: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x8022ED60: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x8022ED64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022ED68: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022ED6C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022ED70: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022ED74: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022ED78: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022ED7C: jal         0x80050294
    // 0x8022ED80: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022ED80: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022ED84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022ED88: jal         0x8022EDA4
    // 0x8022ED8C: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    func_8022EDA4_ovl4(rdram, ctx);
        goto after_4;
    // 0x8022ED8C: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    after_4:
    // 0x8022ED90: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022ED94: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022ED98: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022ED9C: jr          $ra
    // 0x8022EDA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022EDA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023B8AC_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B8AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023B8B0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023B8B4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023B8B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023B8BC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023B8C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B8C4: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8023B8C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B8CC: beq         $v1, $v0, L_8023B96C
    if (ctx->r3 == ctx->r2) {
        // 0x8023B8D0: addiu       $s2, $s1, 0x2C
        ctx->r18 = ADD32(ctx->r17, 0X2C);
            goto L_8023B96C;
    }
    // 0x8023B8D0: addiu       $s2, $s1, 0x2C
    ctx->r18 = ADD32(ctx->r17, 0X2C);
    // 0x8023B8D4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023B8D8: beql        $v0, $zero, L_8023B8F0
    if (ctx->r2 == 0) {
        // 0x8023B8DC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023B8F0;
    }
    goto skip_0;
    // 0x8023B8DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023B8E0: beq         $v1, $zero, L_8023B900
    if (ctx->r3 == 0) {
        // 0x8023B8E4: lui         $a1, 0x80
        ctx->r5 = S32(0X80 << 16);
            goto L_8023B900;
    }
    // 0x8023B8E4: lui         $a1, 0x80
    ctx->r5 = S32(0X80 << 16);
    // 0x8023B8E8: j           L_8023BA74
    // 0x8023B8EC: nop

        goto L_8023BA74;
    // 0x8023B8EC: nop

L_8023B8F0:
    // 0x8023B8F0: beq         $v1, $v0, L_8023B99C
    if (ctx->r3 == ctx->r2) {
        // 0x8023B8F4: nop
    
            goto L_8023B99C;
    }
    // 0x8023B8F4: nop

    // 0x8023B8F8: j           L_8023BA74
    // 0x8023B8FC: nop

        goto L_8023BA74;
    // 0x8023B8FC: nop

L_8023B900:
    // 0x8023B900: ori         $a1, $a1, 0x8080
    ctx->r5 = ctx->r5 | 0X8080;
    // 0x8023B904: lhu         $v1, 0x2C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2C);
    // 0x8023B908: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023B90C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B910: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8023B914: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x8023B918: sw          $a1, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r5;
    // 0x8023B91C: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x8023B920: jal         0x80047B3C
    // 0x8023B924: sh          $v1, 0x2C($s1)
    MEM_H(0X2C, ctx->r17) = ctx->r3;
    func_80047B3C_22F3C(rdram, ctx);
        goto after_0;
    // 0x8023B924: sh          $v1, 0x2C($s1)
    MEM_H(0X2C, ctx->r17) = ctx->r3;
    after_0:
    // 0x8023B928: jal         0x8004F144
    // 0x8023B92C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x8023B92C: nop

    after_1:
    // 0x8023B930: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023B934: beq         $s0, $zero, L_8023B96C
    if (ctx->r16 == 0) {
        // 0x8023B938: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_8023B96C;
    }
    // 0x8023B938: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8023B93C: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x8023B940: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023B944: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023B948: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8023B94C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023B950: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8023B954: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x8023B958: jal         0x8009A3B4
    // 0x8023B95C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023B95C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_2:
    // 0x8023B960: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
    // 0x8023B964: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x8023B968: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
L_8023B96C:
    // 0x8023B96C: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x8023B970: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023B974: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x8023B978: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023B97C: bne         $v0, $zero, L_8023BA74
    if (ctx->r2 != 0) {
        // 0x8023B980: lui         $v0, 0x2E80
        ctx->r2 = S32(0X2E80 << 16);
            goto L_8023BA74;
    }
    // 0x8023B980: lui         $v0, 0x2E80
    ctx->r2 = S32(0X2E80 << 16);
    // 0x8023B984: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8023B988: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8023B98C: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x8023B990: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8023B994: sb          $v1, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r3;
    // 0x8023B998: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
L_8023B99C:
    // 0x8023B99C: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x8023B9A0: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8023B9A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B9A8: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x8023B9AC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023B9B0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8023B9B4: bne         $v0, $v1, L_8023BA28
    if (ctx->r2 != ctx->r3) {
        // 0x8023B9B8: lui         $v1, 0xFFDF
        ctx->r3 = S32(0XFFDF << 16);
            goto L_8023BA28;
    }
    // 0x8023B9B8: lui         $v1, 0xFFDF
    ctx->r3 = S32(0XFFDF << 16);
    // 0x8023B9BC: jal         0x8004F684
    // 0x8023B9C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_3;
    // 0x8023B9C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8023B9C4: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8023B9C8: andi        $v1, $v0, 0xF
    ctx->r3 = ctx->r2 & 0XF;
    // 0x8023B9CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B9D0: bne         $v1, $v0, L_8023B9FC
    if (ctx->r3 != ctx->r2) {
        // 0x8023B9D4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023B9FC;
    }
    // 0x8023B9D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023B9D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023B9DC: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x8023B9E0: jal         0x8007A290
    // 0x8023B9E4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8007A290_55690(rdram, ctx);
        goto after_4;
    // 0x8023B9E4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_4:
    // 0x8023B9E8: lh          $a0, 0x46($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X46);
    // 0x8023B9EC: jal         0x8006036C
    // 0x8023B9F0: nop

    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x8023B9F0: nop

    after_5:
    // 0x8023B9F4: j           L_8023BA74
    // 0x8023B9F8: nop

        goto L_8023BA74;
    // 0x8023B9F8: nop

L_8023B9FC:
    // 0x8023B9FC: bne         $v1, $v0, L_8023BA0C
    if (ctx->r3 != ctx->r2) {
        // 0x8023BA00: nop
    
            goto L_8023BA0C;
    }
    // 0x8023BA00: nop

    // 0x8023BA04: jal         0x8006036C
    // 0x8023BA08: lh          $a0, 0x46($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X46);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x8023BA08: lh          $a0, 0x46($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X46);
    after_6:
L_8023BA0C:
    // 0x8023BA0C: lhu         $a2, 0x2($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X2);
    // 0x8023BA10: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023BA14: addiu       $a1, $a0, 0x38
    ctx->r5 = ADD32(ctx->r4, 0X38);
    // 0x8023BA18: jal         0x8007A290
    // 0x8023BA1C: andi        $a2, $a2, 0x1
    ctx->r6 = ctx->r6 & 0X1;
    func_8007A290_55690(rdram, ctx);
        goto after_7;
    // 0x8023BA1C: andi        $a2, $a2, 0x1
    ctx->r6 = ctx->r6 & 0X1;
    after_7:
    // 0x8023BA20: j           L_8023BA74
    // 0x8023BA24: nop

        goto L_8023BA74;
    // 0x8023BA24: nop

L_8023BA28:
    // 0x8023BA28: ori         $v1, $v1, 0xDFE0
    ctx->r3 = ctx->r3 | 0XDFE0;
    // 0x8023BA2C: lw          $v0, 0x40($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X40);
    // 0x8023BA30: lb          $a2, 0xC($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XC);
    // 0x8023BA34: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023BA38: addiu       $a1, $a1, 0x1014
    ctx->r5 = ADD32(ctx->r5, 0X1014);
    // 0x8023BA3C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023BA40: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x8023BA44: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x8023BA48: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8023BA4C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8023BA50: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023BA54: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023BA58: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x8023BA5C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023BA60: sw          $v1, 0x101C($at)
    MEM_W(0X101C, ctx->r1) = ctx->r3;
    // 0x8023BA64: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023BA68: sw          $v1, 0x1018($at)
    MEM_W(0X1018, ctx->r1) = ctx->r3;
    // 0x8023BA6C: jal         0x80031DA8
    // 0x8023BA70: addiu       $a0, $s1, 0x18
    ctx->r4 = ADD32(ctx->r17, 0X18);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_8;
    // 0x8023BA70: addiu       $a0, $s1, 0x18
    ctx->r4 = ADD32(ctx->r17, 0X18);
    after_8:
L_8023BA74:
    // 0x8023BA74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023BA78: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023BA7C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023BA80: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023BA84: jr          $ra
    // 0x8023BA88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023BA88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802358B0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802358B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802358B4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802358B8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802358BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802358C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802358C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802358C8: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x802358CC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802358D0: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x802358D4: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802358D8: beq         $v0, $zero, L_80235B88
    if (ctx->r2 == 0) {
        // 0x802358DC: addiu       $s0, $s1, 0x4E0
        ctx->r16 = ADD32(ctx->r17, 0X4E0);
            goto L_80235B88;
    }
    // 0x802358DC: addiu       $s0, $s1, 0x4E0
    ctx->r16 = ADD32(ctx->r17, 0X4E0);
    // 0x802358E0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802358E4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802358E8: addu        $at, $at, $v0
    gpr jr_addend_802358F0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802358EC: lw          $v0, 0x16D0($at)
    ctx->r2 = ADD32(ctx->r1, 0X16D0);
    // 0x802358F0: jr          $v0
    // 0x802358F4: nop

    switch (jr_addend_802358F0 >> 2) {
        case 0: goto L_802358F8; break;
        case 1: goto L_8023592C; break;
        case 2: goto L_80235A08; break;
        case 3: goto L_80235A90; break;
        case 4: goto L_80235B44; break;
        default: switch_error(__func__, 0x802358F0, 0x802416D0);
    }
    // 0x802358F4: nop

L_802358F8:
    // 0x802358F8: addiu       $a0, $zero, 0xC3
    ctx->r4 = ADD32(0, 0XC3);
    // 0x802358FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235900: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80235904: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80235908: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8023590C: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x80235910: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80235914: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80235918: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8023591C: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x80235920: andi        $v1, $v1, 0xFFFB
    ctx->r3 = ctx->r3 & 0XFFFB;
    // 0x80235924: jal         0x8002A33C
    // 0x80235928: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80235928: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
    after_0:
L_8023592C:
    // 0x8023592C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80235930: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80235934: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80235938: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023593C: bgez        $v0, L_80235964
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80235940: addiu       $a0, $s1, 0x1C
        ctx->r4 = ADD32(ctx->r17, 0X1C);
            goto L_80235964;
    }
    // 0x80235940: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x80235944: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x80235948: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8023594C: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x80235950: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235954: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80235958: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8023595C: j           L_80235A08
    // 0x80235960: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_80235A08;
    // 0x80235960: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80235964:
    // 0x80235964: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x80235968: lh          $v1, 0x56($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X56);
    // 0x8023596C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80235970: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x80235974: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x80235978: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023597C: jal         0x8004FAEC
    // 0x80235980: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_1;
    // 0x80235980: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x80235984: bne         $v0, $zero, L_802359A8
    if (ctx->r2 != 0) {
        // 0x80235988: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_802359A8;
    }
    // 0x80235988: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023598C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80235990: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80235994: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80235998: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8023599C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802359A0: j           L_80235B88
    // 0x802359A4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_80235B88;
    // 0x802359A4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_802359A8:
    // 0x802359A8: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
    // 0x802359AC: bne         $v1, $v0, L_80235B88
    if (ctx->r3 != ctx->r2) {
        // 0x802359B0: nop
    
            goto L_80235B88;
    }
    // 0x802359B0: nop

    // 0x802359B4: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x802359B8: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x802359BC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802359C0: bne         $v0, $zero, L_802359CC
    if (ctx->r2 != 0) {
        // 0x802359C4: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802359CC;
    }
    // 0x802359C4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802359C8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
L_802359CC:
    // 0x802359CC: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x802359D0: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x802359D4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802359D8: bne         $v0, $zero, L_802359E4
    if (ctx->r2 != 0) {
        // 0x802359DC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802359E4;
    }
    // 0x802359DC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802359E0: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
L_802359E4:
    // 0x802359E4: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x802359E8: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x802359EC: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x802359F0: addiu       $a0, $zero, 0xC4
    ctx->r4 = ADD32(0, 0XC4);
    // 0x802359F4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x802359F8: jal         0x8002A33C
    // 0x802359FC: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x802359FC: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    after_2:
    // 0x80235A00: j           L_80235B88
    // 0x80235A04: nop

        goto L_80235B88;
    // 0x80235A04: nop

L_80235A08:
    // 0x80235A08: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x80235A0C: bne         $v0, $zero, L_80235B10
    if (ctx->r2 != 0) {
        // 0x80235A10: nop
    
            goto L_80235B10;
    }
    // 0x80235A10: nop

    // 0x80235A14: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x80235A18: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x80235A1C: andi        $v0, $v0, 0x5
    ctx->r2 = ctx->r2 & 0X5;
    // 0x80235A20: beq         $v0, $zero, L_80235A7C
    if (ctx->r2 == 0) {
        // 0x80235A24: nop
    
            goto L_80235A7C;
    }
    // 0x80235A24: nop

    // 0x80235A28: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x80235A2C: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x80235A30: andi        $v0, $v0, 0x5
    ctx->r2 = ctx->r2 & 0X5;
    // 0x80235A34: beq         $v0, $zero, L_80235A7C
    if (ctx->r2 == 0) {
        // 0x80235A38: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80235A7C;
    }
    // 0x80235A38: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80235A3C: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x80235A40: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x80235A44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235A48: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80235A4C: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x80235A50: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80235A54: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80235A58: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x80235A5C: addiu       $a0, $zero, -0x5
    ctx->r4 = ADD32(0, -0X5);
    // 0x80235A60: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80235A64: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80235A68: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x80235A6C: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x80235A70: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80235A74: j           L_80235A90
    // 0x80235A78: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
        goto L_80235A90;
    // 0x80235A78: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_80235A7C:
    // 0x80235A7C: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x80235A80: beq         $v0, $zero, L_80235B88
    if (ctx->r2 == 0) {
        // 0x80235A84: nop
    
            goto L_80235B88;
    }
    // 0x80235A84: nop

    // 0x80235A88: j           L_80235B10
    // 0x80235A8C: nop

        goto L_80235B10;
    // 0x80235A8C: nop

L_80235A90:
    // 0x80235A90: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x80235A94: bne         $v0, $zero, L_80235B10
    if (ctx->r2 != 0) {
        // 0x80235A98: nop
    
            goto L_80235B10;
    }
    // 0x80235A98: nop

    // 0x80235A9C: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x80235AA0: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x80235AA4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80235AA8: beq         $v0, $zero, L_80235B04
    if (ctx->r2 == 0) {
        // 0x80235AAC: nop
    
            goto L_80235B04;
    }
    // 0x80235AAC: nop

    // 0x80235AB0: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x80235AB4: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x80235AB8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80235ABC: beq         $v0, $zero, L_80235B04
    if (ctx->r2 == 0) {
        // 0x80235AC0: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_80235B04;
    }
    // 0x80235AC0: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80235AC4: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x80235AC8: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x80235ACC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235AD0: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80235AD4: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x80235AD8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80235ADC: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80235AE0: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x80235AE4: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
    // 0x80235AE8: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80235AEC: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80235AF0: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x80235AF4: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x80235AF8: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80235AFC: j           L_80235B44
    // 0x80235B00: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
        goto L_80235B44;
    // 0x80235B00: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_80235B04:
    // 0x80235B04: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x80235B08: beq         $v0, $zero, L_80235B20
    if (ctx->r2 == 0) {
        // 0x80235B0C: nop
    
            goto L_80235B20;
    }
    // 0x80235B0C: nop

L_80235B10:
    // 0x80235B10: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80235B14: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80235B18: j           L_80235B88
    // 0x80235B1C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_80235B88;
    // 0x80235B1C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80235B20:
    // 0x80235B20: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x80235B24: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x80235B28: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x80235B2C: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80235B30: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x80235B34: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x80235B38: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x80235B3C: j           L_80235B88
    // 0x80235B40: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
        goto L_80235B88;
    // 0x80235B40: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_80235B44:
    // 0x80235B44: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80235B48: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80235B4C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80235B50: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235B54: bgez        $v0, L_80235B88
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80235B58: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80235B88;
    }
    // 0x80235B58: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80235B5C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80235B60: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80235B64: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x80235B68: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x80235B6C: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x80235B70: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80235B74: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x80235B78: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80235B7C: sh          $v0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r2;
    // 0x80235B80: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x80235B84: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
L_80235B88:
    // 0x80235B88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80235B8C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80235B90: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80235B94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80235B98: jr          $ra
    // 0x80235B9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80235B9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80234854_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234854: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80234858: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023485C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234860: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80234864: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80234868: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023486C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80234870: addiu       $a3, $a3, 0x49B0
    ctx->r7 = ADD32(ctx->r7, 0X49B0);
    // 0x80234874: beq         $v1, $zero, L_80234890
    if (ctx->r3 == 0) {
        // 0x80234878: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80234890;
    }
    // 0x80234878: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8023487C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234880: beq         $v1, $v0, L_802349FC
    if (ctx->r3 == ctx->r2) {
        // 0x80234884: nop
    
            goto L_802349FC;
    }
    // 0x80234884: nop

    // 0x80234888: j           L_80234A64
    // 0x8023488C: nop

        goto L_80234A64;
    // 0x8023488C: nop

L_80234890:
    // 0x80234890: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80234894: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234898: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023489C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802348A0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802348A4: slti        $v0, $a1, 0x801
    ctx->r2 = SIGNED(ctx->r5) < 0X801 ? 1 : 0;
    // 0x802348A8: bne         $v0, $zero, L_80234910
    if (ctx->r2 != 0) {
        // 0x802348AC: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_80234910;
    }
    // 0x802348AC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x802348B0: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x802348B4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802348B8: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x802348BC: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x802348C0: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802348C4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802348C8: jal         0x8004FAEC
    // 0x802348CC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_0;
    // 0x802348CC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x802348D0: bne         $v0, $zero, L_80234970
    if (ctx->r2 != 0) {
        // 0x802348D4: nop
    
            goto L_80234970;
    }
    // 0x802348D4: nop

    // 0x802348D8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802348DC: lhu         $v0, 0xCB0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XCB0);
    // 0x802348E0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802348E4: lhu         $v1, 0xCAC($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XCAC);
    // 0x802348E8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802348EC: lhu         $a0, 0xCB2($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XCB2);
    // 0x802348F0: sh          $zero, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = 0;
    // 0x802348F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802348F8: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x802348FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234900: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234904: lhu         $v0, 0xCAE($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XCAE);
    // 0x80234908: j           L_802349A4
    // 0x8023490C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
        goto L_802349A4;
    // 0x8023490C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
L_80234910:
    // 0x80234910: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x80234914: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80234918: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x8023491C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80234920: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80234924: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80234928: jal         0x8004FAEC
    // 0x8023492C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_1;
    // 0x8023492C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x80234930: beq         $v0, $zero, L_80234970
    if (ctx->r2 == 0) {
        // 0x80234934: nop
    
            goto L_80234970;
    }
    // 0x80234934: nop

    // 0x80234938: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023493C: lhu         $v0, 0xCB0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XCB0);
    // 0x80234940: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234944: lhu         $v1, 0xCAC($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XCAC);
    // 0x80234948: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023494C: lhu         $a0, 0xCB2($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XCB2);
    // 0x80234950: sh          $zero, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = 0;
    // 0x80234954: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234958: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x8023495C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234960: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234964: lhu         $v0, 0xCAE($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XCAE);
    // 0x80234968: j           L_802349A4
    // 0x8023496C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
        goto L_802349A4;
    // 0x8023496C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
L_80234970:
    // 0x80234970: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234974: lhu         $v0, 0xC8C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XC8C);
    // 0x80234978: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023497C: lhu         $v1, 0xC88($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XC88);
    // 0x80234980: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80234984: lhu         $a0, 0xC8E($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XC8E);
    // 0x80234988: sh          $zero, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = 0;
    // 0x8023498C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234990: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80234994: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234998: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023499C: lhu         $v0, 0xC8A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XC8A);
    // 0x802349A0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
L_802349A4:
    // 0x802349A4: sra         $a0, $a0, 17
    ctx->r4 = S32(SIGNED(ctx->r4) >> 17);
    // 0x802349A8: sh          $v1, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r3;
    // 0x802349AC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802349B0: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x802349B4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802349B8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802349BC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x802349C0: jal         0x8004F820
    // 0x802349C4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x802349C4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x802349C8: lui         $a0, 0x2AAA
    ctx->r4 = S32(0X2AAA << 16);
    // 0x802349CC: ori         $a0, $a0, 0xAAAB
    ctx->r4 = ctx->r4 | 0XAAAB;
    // 0x802349D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802349D4: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802349D8: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802349DC: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x802349E0: mfhi        $t0
    ctx->r8 = hi;
    // 0x802349E4: sra         $v1, $t0, 1
    ctx->r3 = S32(SIGNED(ctx->r8) >> 1);
    // 0x802349E8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802349EC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x802349F0: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
    // 0x802349F4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802349F8: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
L_802349FC:
    // 0x802349FC: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80234A00: lhu         $a0, 0x66($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X66);
    // 0x80234A04: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x80234A08: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80234A0C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80234A10: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x80234A14: beq         $v1, $zero, L_80234A28
    if (ctx->r3 == 0) {
        // 0x80234A18: sh          $v0, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r2;
            goto L_80234A28;
    }
    // 0x80234A18: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80234A1C: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    // 0x80234A20: jal         0x8002A33C
    // 0x80234A24: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80234A24: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
L_80234A28:
    // 0x80234A28: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80234A2C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80234A30: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80234A34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234A38: bgtz        $v0, L_80234A64
    if (SIGNED(ctx->r2) > 0) {
        // 0x80234A3C: nop
    
            goto L_80234A64;
    }
    // 0x80234A3C: nop

    // 0x80234A40: lh          $v0, 0x56($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X56);
    // 0x80234A44: slti        $v0, $v0, 0x801
    ctx->r2 = SIGNED(ctx->r2) < 0X801 ? 1 : 0;
    // 0x80234A48: bne         $v0, $zero, L_80234A54
    if (ctx->r2 != 0) {
        // 0x80234A4C: addiu       $v0, $zero, 0x400
        ctx->r2 = ADD32(0, 0X400);
            goto L_80234A54;
    }
    // 0x80234A4C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80234A50: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
L_80234A54:
    // 0x80234A54: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80234A58: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80234A5C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80234A60: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80234A64:
    // 0x80234A64: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80234A68: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80234A6C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80234A70: jr          $ra
    // 0x80234A74: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80234A74: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80233400_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233400: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80233404: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80233408: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023340C: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80233410: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80233414: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80233418: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8023341C: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x80233420: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80233424: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80233428: jal         0x8009A3B4
    // 0x8023342C: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023342C: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    after_0:
    // 0x80233430: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80233434: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80233438: jal         0x8009A3B4
    // 0x8023343C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023343C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80233440: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x80233444: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x80233448: jal         0x8009A3B4
    // 0x8023344C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023344C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80233450: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80233454: jal         0x800A3450
    // 0x80233458: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80233458: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    after_3:
    // 0x8023345C: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80233460: sh          $v0, 0x4E2($s1)
    MEM_H(0X4E2, ctx->r17) = ctx->r2;
    // 0x80233464: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80233468: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023346C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233470: lw          $v0, 0xC10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC10);
    // 0x80233474: jalr        $v0
    // 0x80233478: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80233478: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8023347C: lhu         $v0, 0x4E0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4E0);
    // 0x80233480: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80233484: beq         $v0, $zero, L_802334BC
    if (ctx->r2 == 0) {
        // 0x80233488: addiu       $s2, $s1, 0x4E0
        ctx->r18 = ADD32(ctx->r17, 0X4E0);
            goto L_802334BC;
    }
    // 0x80233488: addiu       $s2, $s1, 0x4E0
    ctx->r18 = ADD32(ctx->r17, 0X4E0);
    // 0x8023348C: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x80233490: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x80233494: beq         $v0, $a1, L_802334AC
    if (ctx->r2 == ctx->r5) {
        // 0x80233498: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802334AC;
    }
    // 0x80233498: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023349C: jal         0x80050294
    // 0x802334A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x802334A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x802334A4: j           L_802334CC
    // 0x802334A8: nop

        goto L_802334CC;
    // 0x802334A8: nop

L_802334AC:
    // 0x802334AC: jal         0x8005044C
    // 0x802334B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x802334B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x802334B4: j           L_802334CC
    // 0x802334B8: nop

        goto L_802334CC;
    // 0x802334B8: nop

L_802334BC:
    // 0x802334BC: jal         0x80051770
    // 0x802334C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_7;
    // 0x802334C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x802334C4: jal         0x80051248
    // 0x802334C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_8;
    // 0x802334C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
L_802334CC:
    // 0x802334CC: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802334D0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802334D4: beq         $v0, $zero, L_802334EC
    if (ctx->r2 == 0) {
        // 0x802334D8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802334EC;
    }
    // 0x802334D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802334DC: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x802334E0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802334E4: jal         0x8003B564
    // 0x802334E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x802334E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
L_802334EC:
    // 0x802334EC: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802334F0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802334F4: beql        $v0, $zero, L_80233564
    if (ctx->r2 == 0) {
        // 0x802334F8: sw          $zero, 0x14($s2)
        MEM_W(0X14, ctx->r18) = 0;
            goto L_80233564;
    }
    goto skip_0;
    // 0x802334F8: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
    skip_0:
    // 0x802334FC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80233500: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80233504: beq         $v0, $zero, L_80233560
    if (ctx->r2 == 0) {
        // 0x80233508: addiu       $s0, $s2, 0xC
        ctx->r16 = ADD32(ctx->r18, 0XC);
            goto L_80233560;
    }
    // 0x80233508: addiu       $s0, $s2, 0xC
    ctx->r16 = ADD32(ctx->r18, 0XC);
    // 0x8023350C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233510: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x80233514: jal         0x8009A3B4
    // 0x80233518: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x80233518: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x8023351C: lui         $t0, 0x488
    ctx->r8 = S32(0X488 << 16);
    // 0x80233520: ori         $t0, $t0, 0x8
    ctx->r8 = ctx->r8 | 0X8;
    // 0x80233524: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233528: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    // 0x8023352C: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80233530: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233534: addiu       $v0, $s2, 0x14
    ctx->r2 = ADD32(ctx->r18, 0X14);
    // 0x80233538: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023353C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80233540: lhu         $v1, 0x8($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8);
    // 0x80233544: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80233548: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023354C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80233550: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80233554: or          $v1, $v1, $t0
    ctx->r3 = ctx->r3 | ctx->r8;
    // 0x80233558: jal         0x80051E18
    // 0x8023355C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_11;
    // 0x8023355C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_11:
L_80233560:
    // 0x80233560: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
L_80233564:
    // 0x80233564: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80233568: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8023356C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80233570: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80233574: jr          $ra
    // 0x80233578: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80233578: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80231A68_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231A68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231A6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231A70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231A74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80231A78: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80231A7C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231A80: lw          $v0, 0x35C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X35C);
    // 0x80231A84: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80231A88: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80231A8C: beq         $v0, $zero, L_80231AB8
    if (ctx->r2 == 0) {
        // 0x80231A90: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80231AB8;
    }
    // 0x80231A90: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80231A94: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80231A98: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80231A9C: beq         $v0, $zero, L_80231AB8
    if (ctx->r2 == 0) {
        // 0x80231AA0: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_80231AB8;
    }
    // 0x80231AA0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80231AA4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x80231AA8: addiu       $a1, $zero, 0x3E8
    ctx->r5 = ADD32(0, 0X3E8);
    // 0x80231AAC: addiu       $a2, $zero, 0x1388
    ctx->r6 = ADD32(0, 0X1388);
    // 0x80231AB0: jal         0x8003491C
    // 0x80231AB4: addiu       $a3, $s0, 0x14
    ctx->r7 = ADD32(ctx->r16, 0X14);
    func_8003491C_FD1C(rdram, ctx);
        goto after_0;
    // 0x80231AB4: addiu       $a3, $s0, 0x14
    ctx->r7 = ADD32(ctx->r16, 0X14);
    after_0:
L_80231AB8:
    // 0x80231AB8: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x80231ABC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80231AC0: bne         $v1, $v0, L_80231ACC
    if (ctx->r3 != ctx->r2) {
        // 0x80231AC4: sltiu       $a0, $v1, 0x1
        ctx->r4 = ctx->r3 < 0X1 ? 1 : 0;
            goto L_80231ACC;
    }
    // 0x80231AC4: sltiu       $a0, $v1, 0x1
    ctx->r4 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80231AC8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80231ACC:
    // 0x80231ACC: beq         $a0, $zero, L_80231ADC
    if (ctx->r4 == 0) {
        // 0x80231AD0: addiu       $a0, $zero, 0x196
        ctx->r4 = ADD32(0, 0X196);
            goto L_80231ADC;
    }
    // 0x80231AD0: addiu       $a0, $zero, 0x196
    ctx->r4 = ADD32(0, 0X196);
    // 0x80231AD4: jal         0x8002A33C
    // 0x80231AD8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80231AD8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
L_80231ADC:
    // 0x80231ADC: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x80231AE0: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80231AE4: bnel        $v0, $zero, L_80231AEC
    if (ctx->r2 != 0) {
        // 0x80231AE8: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_80231AEC;
    }
    goto skip_0;
    // 0x80231AE8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_0:
L_80231AEC:
    // 0x80231AEC: lhu         $v0, 0x38($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X38);
    // 0x80231AF0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231AF4: sh          $v0, 0x38($s2)
    MEM_H(0X38, ctx->r18) = ctx->r2;
    // 0x80231AF8: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80231AFC: beql        $v0, $zero, L_80231B04
    if (ctx->r2 == 0) {
        // 0x80231B00: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_80231B04;
    }
    goto skip_1;
    // 0x80231B00: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_1:
L_80231B04:
    // 0x80231B04: beq         $s1, $zero, L_80231B50
    if (ctx->r17 == 0) {
        // 0x80231B08: nop
    
            goto L_80231B50;
    }
    // 0x80231B08: nop

    // 0x80231B0C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80231B10: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80231B14: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80231B18: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80231B1C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231B20: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231B24: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80231B28: lbu         $v1, 0xB($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XB);
    // 0x80231B2C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80231B30: sh          $v0, 0x38($s2)
    MEM_H(0X38, ctx->r18) = ctx->r2;
    // 0x80231B34: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x80231B38: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80231B3C: sw          $v1, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->r3;
    // 0x80231B40: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231B44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231B48: j           L_80231B64
    // 0x80231B4C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80231B64;
    // 0x80231B4C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80231B50:
    // 0x80231B50: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80231B54: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80231B58: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80231B5C: jal         0x8004DA90
    // 0x80231B60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80231B60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_80231B64:
    // 0x80231B64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80231B68: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80231B6C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231B70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231B74: jr          $ra
    // 0x80231B78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231B78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F8D4_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F8D4: lb          $v0, 0xE($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XE);
    // 0x8022F8D8: bne         $v0, $zero, L_8022F900
    if (ctx->r2 != 0) {
        // 0x8022F8DC: addiu       $sp, $sp, -0x10
        ctx->r29 = ADD32(ctx->r29, -0X10);
            goto L_8022F900;
    }
    // 0x8022F8DC: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8022F8E0: lh          $v1, 0x56($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X56);
    // 0x8022F8E4: lh          $v0, 0x380($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X380);
    // 0x8022F8E8: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    // 0x8022F8EC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022F8F0: beq         $v1, $v0, L_8022F918
    if (ctx->r3 == ctx->r2) {
        // 0x8022F8F4: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8022F918;
    }
    // 0x8022F8F4: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8022F8F8: j           L_8022F930
    // 0x8022F8FC: addiu       $v0, $a1, -0x40
    ctx->r2 = ADD32(ctx->r5, -0X40);
        goto L_8022F930;
    // 0x8022F8FC: addiu       $v0, $a1, -0x40
    ctx->r2 = ADD32(ctx->r5, -0X40);
L_8022F900:
    // 0x8022F900: lh          $v1, 0x56($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X56);
    // 0x8022F904: lh          $v0, 0x380($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X380);
    // 0x8022F908: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x8022F90C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022F910: bne         $v1, $v0, L_8022F92C
    if (ctx->r3 != ctx->r2) {
        // 0x8022F914: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8022F92C;
    }
    // 0x8022F914: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_8022F918:
    // 0x8022F918: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F91C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022F920: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022F924: j           L_8022F934
    // 0x8022F928: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
        goto L_8022F934;
    // 0x8022F928: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
L_8022F92C:
    // 0x8022F92C: addiu       $v0, $a1, 0x40
    ctx->r2 = ADD32(ctx->r5, 0X40);
L_8022F930:
    // 0x8022F930: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
L_8022F934:
    // 0x8022F934: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x8022F938: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022F93C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x8022F940: jr          $ra
    // 0x8022F944: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8022F944: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_802299C0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802299C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802299C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802299C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802299CC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802299D0: jal         0x8004EFE4
    // 0x802299D4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x802299D4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x802299D8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802299DC: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x802299E0: beq         $v1, $zero, L_80229ACC
    if (ctx->r3 == 0) {
        // 0x802299E4: sw          $v1, 0x374($s0)
        MEM_W(0X374, ctx->r16) = ctx->r3;
            goto L_80229ACC;
    }
    // 0x802299E4: sw          $v1, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->r3;
    // 0x802299E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802299EC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802299F0: lh          $v0, 0x32E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X32E);
    // 0x802299F4: bne         $v0, $zero, L_80229A50
    if (ctx->r2 != 0) {
        // 0x802299F8: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80229A50;
    }
    // 0x802299F8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802299FC: lw          $v1, 0x374($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X374);
    // 0x80229A00: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80229A04: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80229A08: lw          $v0, 0x374($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X374);
    // 0x80229A0C: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x80229A10: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x80229A14: lw          $a0, 0x374($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X374);
    // 0x80229A18: lui         $v1, 0xFFC4
    ctx->r3 = S32(0XFFC4 << 16);
    // 0x80229A1C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229A20: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x80229A24: lw          $v1, 0x374($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X374);
    // 0x80229A28: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80229A2C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80229A30: sw          $v0, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->r2;
    // 0x80229A34: lw          $v1, 0x374($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X374);
    // 0x80229A38: addiu       $a0, $zero, 0xB2
    ctx->r4 = ADD32(0, 0XB2);
    // 0x80229A3C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80229A40: jal         0x8002A33C
    // 0x80229A44: sw          $v0, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80229A44: sw          $v0, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r2;
    after_1:
    // 0x80229A48: j           L_80229A78
    // 0x80229A4C: nop

        goto L_80229A78;
    // 0x80229A4C: nop

L_80229A50:
    // 0x80229A50: lw          $v1, 0x374($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X374);
    // 0x80229A54: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80229A58: lw          $v1, 0x374($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X374);
    // 0x80229A5C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229A60: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80229A64: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x80229A68: lw          $a0, 0x374($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X374);
    // 0x80229A6C: lui         $v1, 0xFFB0
    ctx->r3 = S32(0XFFB0 << 16);
    // 0x80229A70: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229A74: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_80229A78:
    // 0x80229A78: lw          $v1, 0x4C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4C);
    // 0x80229A7C: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80229A80: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80229A84: lw          $v1, 0x4C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4C);
    // 0x80229A88: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80229A8C: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80229A90: lw          $v1, 0x4C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4C);
    // 0x80229A94: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80229A98: sh          $v0, 0x64($v1)
    MEM_H(0X64, ctx->r3) = ctx->r2;
    // 0x80229A9C: lw          $a1, 0x4C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4C);
    // 0x80229AA0: addiu       $a0, $a1, 0x1C
    ctx->r4 = ADD32(ctx->r5, 0X1C);
    // 0x80229AA4: jal         0x8004DD04
    // 0x80229AA8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x80229AA8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_2:
    // 0x80229AAC: lw          $a1, 0x4C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4C);
    // 0x80229AB0: addiu       $a3, $zero, 0x6E0
    ctx->r7 = ADD32(0, 0X6E0);
    // 0x80229AB4: lh          $a2, 0x64($a1)
    ctx->r6 = MEM_H(ctx->r5, 0X64);
    // 0x80229AB8: addiu       $a0, $a1, 0x14
    ctx->r4 = ADD32(ctx->r5, 0X14);
    // 0x80229ABC: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    // 0x80229AC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80229AC4: jal         0x8004DBA0
    // 0x80229AC8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x80229AC8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
L_80229ACC:
    // 0x80229ACC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80229AD0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80229AD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80229AD8: jr          $ra
    // 0x80229ADC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80229ADC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80231CEC_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231CEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231CF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231CF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231CF8: jal         0x80231D54
    // 0x80231CFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80231D54_ovl4(rdram, ctx);
        goto after_0;
    // 0x80231CFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80231D00: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x80231D04: bne         $v0, $zero, L_80231D3C
    if (ctx->r2 != 0) {
        // 0x80231D08: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80231D3C;
    }
    // 0x80231D08: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80231D0C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80231D10: bne         $v1, $v0, L_80231D2C
    if (ctx->r3 != ctx->r2) {
        // 0x80231D14: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80231D2C;
    }
    // 0x80231D14: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80231D18: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80231D1C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80231D20: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80231D24: j           L_80231D44
    // 0x80231D28: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_80231D44;
    // 0x80231D28: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80231D2C:
    // 0x80231D2C: jal         0x80231E08
    // 0x80231D30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80231E08_ovl4(rdram, ctx);
        goto after_1;
    // 0x80231D30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80231D34: j           L_80231D44
    // 0x80231D38: nop

        goto L_80231D44;
    // 0x80231D38: nop

L_80231D3C:
    // 0x80231D3C: jal         0x80231D74
    // 0x80231D40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80231D74_ovl4(rdram, ctx);
        goto after_2;
    // 0x80231D40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_80231D44:
    // 0x80231D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231D48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231D4C: jr          $ra
    // 0x80231D50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231D50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023BB40_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BB40: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8023BB44: sw          $s2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r18;
    // 0x8023BB48: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023BB4C: sw          $ra, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r31;
    // 0x8023BB50: sw          $s1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r17;
    // 0x8023BB54: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    // 0x8023BB58: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8023BB5C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023BB60: bne         $v1, $v0, L_8023BB80
    if (ctx->r3 != ctx->r2) {
        // 0x8023BB64: nop
    
            goto L_8023BB80;
    }
    // 0x8023BB64: nop

    // 0x8023BB68: jal         0x8023C184
    // 0x8023BB6C: nop

    func_8023C184_ovl4(rdram, ctx);
        goto after_0;
    // 0x8023BB6C: nop

    after_0:
    // 0x8023BB70: jal         0x8004F684
    // 0x8023BB74: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_1;
    // 0x8023BB74: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x8023BB78: j           L_8023BE3C
    // 0x8023BB7C: nop

        goto L_8023BE3C;
    // 0x8023BB7C: nop

L_8023BB80:
    // 0x8023BB80: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x8023BB84: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023BB88: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023BB8C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023BB90: lw          $v0, 0x10F0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X10F0);
    // 0x8023BB94: jalr        $v0
    // 0x8023BB98: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8023BB98: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x8023BB9C: jal         0x8006033C
    // 0x8023BBA0: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x8023BBA0: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_3:
    // 0x8023BBA4: bne         $v0, $zero, L_8023BE34
    if (ctx->r2 != 0) {
        // 0x8023BBA8: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_8023BE34;
    }
    // 0x8023BBA8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023BBAC: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x8023BBB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BBB4: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8023BBB8: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x8023BBBC: sh          $zero, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = 0;
    // 0x8023BBC0: jal         0x8002C678
    // 0x8023BBC4: sh          $zero, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = 0;
    func_8002C678_7A78(rdram, ctx);
        goto after_4;
    // 0x8023BBC4: sh          $zero, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = 0;
    after_4:
    // 0x8023BBC8: lb          $v0, 0xC($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC);
    // 0x8023BBCC: lbu         $a0, 0x3($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X3);
    // 0x8023BBD0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023BBD4: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x8023BBD8: sll         $a0, $a0, 11
    ctx->r4 = S32(ctx->r4 << 11);
    // 0x8023BBDC: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x8023BBE0: jal         0x800319B4
    // 0x8023BBE4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800319B4_CDB4(rdram, ctx);
        goto after_5;
    // 0x8023BBE4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_5:
    // 0x8023BBE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BBEC: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x8023BBF0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023BBF4: jal         0x800308E8
    // 0x8023BBF8: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_800308E8_BCE8(rdram, ctx);
        goto after_6;
    // 0x8023BBF8: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_6:
    // 0x8023BBFC: lh          $v1, 0x38($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X38);
    // 0x8023BC00: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x8023BC04: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023BC08: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8023BC0C: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x8023BC10: lh          $v1, 0x3A($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X3A);
    // 0x8023BC14: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x8023BC18: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023BC1C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8023BC20: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8023BC24: lh          $v1, 0x3C($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X3C);
    // 0x8023BC28: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x8023BC2C: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x8023BC30: addiu       $s0, $s0, 0x4760
    ctx->r16 = ADD32(ctx->r16, 0X4760);
    // 0x8023BC34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BC38: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023BC3C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8023BC40: jal         0x80031E5C
    // 0x8023BC44: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    func_80031E5C_D25C(rdram, ctx);
        goto after_7;
    // 0x8023BC44: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    after_7:
    // 0x8023BC48: jal         0x80031E94
    // 0x8023BC4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80031E94_D294(rdram, ctx);
        goto after_8;
    // 0x8023BC4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8023BC50: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8023BC54: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8023BC58: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023BC5C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8023BC60: jal         0x8009A3B4
    // 0x8023BC64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8023BC64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x8023BC68: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8023BC6C: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8023BC70: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023BC74: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8023BC78: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8023BC7C: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x8023BC80: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x8023BC84: jal         0x80031F0C
    // 0x8023BC88: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_10;
    // 0x8023BC88: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_10:
    // 0x8023BC8C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8023BC90: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8023BC94: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x8023BC98: jal         0x8009A3B4
    // 0x8023BC9C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x8023BC9C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_11:
    // 0x8023BCA0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023BCA4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023BCA8: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8023BCAC: jal         0x8009A3B4
    // 0x8023BCB0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x8023BCB0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_12:
    // 0x8023BCB4: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8023BCB8: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8023BCBC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023BCC0: jal         0x8009A3B4
    // 0x8023BCC4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x8023BCC4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_13:
    // 0x8023BCC8: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8023BCCC: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8023BCD0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023BCD4: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8023BCD8: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8023BCDC: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x8023BCE0: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x8023BCE4: jal         0x80031F0C
    // 0x8023BCE8: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_14;
    // 0x8023BCE8: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_14:
    // 0x8023BCEC: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x8023BCF0: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8023BCF4: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x8023BCF8: jal         0x8009A3B4
    // 0x8023BCFC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x8023BCFC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_15:
    // 0x8023BD00: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8023BD04: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023BD08: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8023BD0C: jal         0x8009A3B4
    // 0x8023BD10: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_16;
    // 0x8023BD10: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_16:
    // 0x8023BD14: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8023BD18: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8023BD1C: addiu       $a1, $s2, 0x38
    ctx->r5 = ADD32(ctx->r18, 0X38);
    // 0x8023BD20: jal         0x8009A3B4
    // 0x8023BD24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_17;
    // 0x8023BD24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_17:
    // 0x8023BD28: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8023BD2C: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8023BD30: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023BD34: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8023BD38: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8023BD3C: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x8023BD40: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x8023BD44: jal         0x80031F0C
    // 0x8023BD48: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_18;
    // 0x8023BD48: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_18:
    // 0x8023BD4C: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8023BD50: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8023BD54: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x8023BD58: jal         0x8009A3B4
    // 0x8023BD5C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_19;
    // 0x8023BD5C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_19:
    // 0x8023BD60: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x8023BD64: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023BD68: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8023BD6C: jal         0x8009A3B4
    // 0x8023BD70: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_20;
    // 0x8023BD70: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_20:
    // 0x8023BD74: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x8023BD78: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x8023BD7C: beq         $a2, $a1, L_8023BE34
    if (ctx->r6 == ctx->r5) {
        // 0x8023BD80: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_8023BE34;
    }
    // 0x8023BD80: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023BD84: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x8023BD88: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8023BD8C: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x8023BD90: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8023BD94: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8023BD98: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023BD9C: mflo        $v0
    ctx->r2 = lo;
    // 0x8023BDA0: subu        $v1, $a2, $a1
    ctx->r3 = SUB32(ctx->r6, ctx->r5);
    // 0x8023BDA4: nop

    // 0x8023BDA8: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x8023BDAC: bne         $v1, $zero, L_8023BDB8
    if (ctx->r3 != 0) {
        // 0x8023BDB0: nop
    
            goto L_8023BDB8;
    }
    // 0x8023BDB0: nop

    // 0x8023BDB4: break       7
    do_break(2149825972);
L_8023BDB8:
    // 0x8023BDB8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023BDBC: bne         $v1, $at, L_8023BDD0
    if (ctx->r3 != ctx->r1) {
        // 0x8023BDC0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023BDD0;
    }
    // 0x8023BDC0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023BDC4: bne         $v0, $at, L_8023BDD0
    if (ctx->r2 != ctx->r1) {
        // 0x8023BDC8: nop
    
            goto L_8023BDD0;
    }
    // 0x8023BDC8: nop

    // 0x8023BDCC: break       6
    do_break(2149825996);
L_8023BDD0:
    // 0x8023BDD0: mflo        $v0
    ctx->r2 = lo;
    // 0x8023BDD4: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x8023BDD8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023BDDC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023BDE0: beq         $v0, $zero, L_8023BE34
    if (ctx->r2 == 0) {
        // 0x8023BDE4: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_8023BE34;
    }
    // 0x8023BDE4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023BDE8: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x8023BDEC: lh          $a0, 0x18($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X18);
    // 0x8023BDF0: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8023BDF4: beq         $v0, $zero, L_8023BE10
    if (ctx->r2 == 0) {
        // 0x8023BDF8: slt         $v0, $a0, $v1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8023BE10;
    }
    // 0x8023BDF8: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023BDFC: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x8023BE00: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023BE04: bne         $v0, $zero, L_8023BE28
    if (ctx->r2 != 0) {
        // 0x8023BE08: lui         $v0, 0x240
        ctx->r2 = S32(0X240 << 16);
            goto L_8023BE28;
    }
    // 0x8023BE08: lui         $v0, 0x240
    ctx->r2 = S32(0X240 << 16);
    // 0x8023BE0C: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
L_8023BE10:
    // 0x8023BE10: beq         $v0, $zero, L_8023BE34
    if (ctx->r2 == 0) {
        // 0x8023BE14: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_8023BE34;
    }
    // 0x8023BE14: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023BE18: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x8023BE1C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023BE20: beq         $v0, $zero, L_8023BE30
    if (ctx->r2 == 0) {
        // 0x8023BE24: lui         $v0, 0x240
        ctx->r2 = S32(0X240 << 16);
            goto L_8023BE30;
    }
    // 0x8023BE24: lui         $v0, 0x240
    ctx->r2 = S32(0X240 << 16);
L_8023BE28:
    // 0x8023BE28: j           L_8023BE38
    // 0x8023BE2C: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
        goto L_8023BE38;
    // 0x8023BE2C: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
L_8023BE30:
    // 0x8023BE30: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_8023BE34:
    // 0x8023BE34: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_8023BE38:
    // 0x8023BE38: sw          $v0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r2;
L_8023BE3C:
    // 0x8023BE3C: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    // 0x8023BE40: lw          $s2, 0x98($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X98);
    // 0x8023BE44: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
    // 0x8023BE48: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x8023BE4C: jr          $ra
    // 0x8023BE50: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    TRACE_RETURN()
    return;
    // 0x8023BE50: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_8023C87C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C87C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023C880: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023C884: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023C888: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023C88C: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8023C890: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023C894: jal         0x8002C678
    // 0x8023C898: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x8023C898: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8023C89C: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8023C8A0: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8023C8A4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023C8A8: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8023C8AC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023C8B0: jal         0x800319B4
    // 0x8023C8B4: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8023C8B4: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    after_1:
    // 0x8023C8B8: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8023C8BC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023C8C0: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8023C8C4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023C8C8: bne         $v0, $zero, L_8023C91C
    if (ctx->r2 != 0) {
        // 0x8023C8CC: addiu       $a0, $zero, 0x185
        ctx->r4 = ADD32(0, 0X185);
            goto L_8023C91C;
    }
    // 0x8023C8CC: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    // 0x8023C8D0: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8023C8D4: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8023C8D8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023C8DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023C8E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023C8E4: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8023C8E8: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8023C8EC: jal         0x8002A2F8
    // 0x8023C8F0: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x8023C8F0: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    after_2:
    // 0x8023C8F4: jal         0x80060590
    // 0x8023C8F8: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x8023C8F8: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    after_3:
    // 0x8023C8FC: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x8023C900: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    // 0x8023C904: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023C908: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C90C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023C910: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C914: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023C918: sw          $a0, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = ctx->r4;
L_8023C91C:
    // 0x8023C91C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023C920: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023C924: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023C928: jr          $ra
    // 0x8023C92C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023C92C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80238AC0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238AC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238AC4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80238AC8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80238ACC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80238AD0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238AD4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238AD8: lw          $v0, 0xDF0($at)
    ctx->r2 = MEM_W(ctx->r1, 0XDF0);
    // 0x80238ADC: jalr        $v0
    // 0x80238AE0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80238AE0: nop

    after_0:
    // 0x80238AE4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80238AE8: jr          $ra
    // 0x80238AEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238AEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B5B0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B5B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023B5B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023B5B8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023B5BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B5C0: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8023B5C4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023B5C8: jal         0x8002C678
    // 0x8023B5CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x8023B5CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8023B5D0: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8023B5D4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023B5D8: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x8023B5DC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023B5E0: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8023B5E4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023B5E8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023B5EC: jal         0x800319B4
    // 0x8023B5F0: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8023B5F0: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    after_1:
    // 0x8023B5F4: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8023B5F8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023B5FC: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8023B600: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023B604: bne         $v0, $zero, L_8023B62C
    if (ctx->r2 != 0) {
        // 0x8023B608: addiu       $a0, $zero, 0x186
        ctx->r4 = ADD32(0, 0X186);
            goto L_8023B62C;
    }
    // 0x8023B608: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    // 0x8023B60C: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8023B610: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023B614: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023B618: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B61C: jal         0x8002A2F8
    // 0x8023B620: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x8023B620: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    after_2:
    // 0x8023B624: jal         0x80060590
    // 0x8023B628: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x8023B628: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    after_3:
L_8023B62C:
    // 0x8023B62C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023B630: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023B634: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B638: jr          $ra
    // 0x8023B63C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023B63C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226E04_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E04: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226E08: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80226E0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226E10: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80226E14: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80226E18: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226E1C: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80226E20: beq         $v0, $zero, L_80226FF8
    if (ctx->r2 == 0) {
        // 0x80226E24: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80226FF8;
    }
    // 0x80226E24: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80226E28: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226E2C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226E30: addu        $at, $at, $v0
    gpr jr_addend_80226E38 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226E34: lw          $v0, 0x14B0($at)
    ctx->r2 = ADD32(ctx->r1, 0X14B0);
    // 0x80226E38: jr          $v0
    // 0x80226E3C: nop

    switch (jr_addend_80226E38 >> 2) {
        case 0: goto L_80226E40; break;
        case 1: goto L_80226E90; break;
        case 2: goto L_80226ED0; break;
        case 3: goto L_80226EF4; break;
        case 4: goto L_80226F58; break;
        case 5: goto L_80226FD4; break;
        default: switch_error(__func__, 0x80226E38, 0x802414B0);
    }
    // 0x80226E3C: nop

L_80226E40:
    // 0x80226E40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226E44: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226E48: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80226E4C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226E50: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80226E54: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x80226E58: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
    // 0x80226E5C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80226E60: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80226E64: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x80226E68: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226E6C: bgtz        $v1, L_80226E80
    if (SIGNED(ctx->r3) > 0) {
        // 0x80226E70: sh          $v0, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r2;
            goto L_80226E80;
    }
    // 0x80226E70: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80226E74: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80226E78: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80226E7C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80226E80:
    // 0x80226E80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226E84: addiu       $a1, $zero, 0x460
    ctx->r5 = ADD32(0, 0X460);
    // 0x80226E88: j           L_80226EB8
    // 0x80226E8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_80226EB8;
    // 0x80226E8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80226E90:
    // 0x80226E90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226E94: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226E98: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226E9C: addiu       $v0, $zero, 0x190
    ctx->r2 = ADD32(0, 0X190);
    // 0x80226EA0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80226EA4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226EA8: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80226EAC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80226EB0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80226EB4: addiu       $a2, $zero, -0x960
    ctx->r6 = ADD32(0, -0X960);
L_80226EB8:
    // 0x80226EB8: jal         0x8004DA90
    // 0x80226EBC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80226EBC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80226EC0: jal         0x80040F30
    // 0x80226EC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x80226EC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80226EC8: j           L_80226FF8
    // 0x80226ECC: nop

        goto L_80226FF8;
    // 0x80226ECC: nop

L_80226ED0:
    // 0x80226ED0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80226ED4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226ED8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80226EDC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226EE0: bgez        $v0, L_80226EF4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226EE4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80226EF4;
    }
    // 0x80226EE4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226EE8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226EEC: addiu       $v0, $zero, 0x158
    ctx->r2 = ADD32(0, 0X158);
    // 0x80226EF0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_80226EF4:
    // 0x80226EF4: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80226EF8: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80226EFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226F00: jal         0x8004DA90
    // 0x80226F04: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80226F04: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80226F08: jal         0x80040F30
    // 0x80226F0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x80226F0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80226F10: beq         $v0, $zero, L_80226FF8
    if (ctx->r2 == 0) {
        // 0x80226F14: sw          $v0, 0x5C($s1)
        MEM_W(0X5C, ctx->r17) = ctx->r2;
            goto L_80226FF8;
    }
    // 0x80226F14: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    // 0x80226F18: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80226F1C: bnel        $v0, $zero, L_80226F24
    if (ctx->r2 != 0) {
        // 0x80226F20: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_80226F24;
    }
    goto skip_0;
    // 0x80226F20: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_80226F24:
    // 0x80226F24: lw          $v0, 0x5C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X5C);
    // 0x80226F28: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x80226F2C: beq         $v0, $zero, L_80226FF8
    if (ctx->r2 == 0) {
        // 0x80226F30: addiu       $v0, $zero, 0x1F
        ctx->r2 = ADD32(0, 0X1F);
            goto L_80226FF8;
    }
    // 0x80226F30: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x80226F34: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226F38: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226F3C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226F40: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x80226F44: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80226F48: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80226F4C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80226F50: j           L_80226FF8
    // 0x80226F54: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80226FF8;
    // 0x80226F54: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80226F58:
    // 0x80226F58: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x80226F5C: beq         $v0, $zero, L_80226F6C
    if (ctx->r2 == 0) {
        // 0x80226F60: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80226F6C;
    }
    // 0x80226F60: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226F64: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80226F68: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80226F6C:
    // 0x80226F6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226F70: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80226F74: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80226F78: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80226F7C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80226F80: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80226F84: sll         $a2, $v1, 24
    ctx->r6 = S32(ctx->r3 << 24);
    // 0x80226F88: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80226F8C: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80226F90: jal         0x8004DA90
    // 0x80226F94: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x80226F94: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    after_4:
    // 0x80226F98: jal         0x80040F30
    // 0x80226F9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x80226F9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80226FA0: beq         $v0, $zero, L_80226FF8
    if (ctx->r2 == 0) {
        // 0x80226FA4: sw          $v0, 0x5C($s1)
        MEM_W(0X5C, ctx->r17) = ctx->r2;
            goto L_80226FF8;
    }
    // 0x80226FA4: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    // 0x80226FA8: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80226FAC: bnel        $v0, $zero, L_80226FB4
    if (ctx->r2 != 0) {
        // 0x80226FB0: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_80226FB4;
    }
    goto skip_1;
    // 0x80226FB0: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_80226FB4:
    // 0x80226FB4: lw          $v0, 0x5C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X5C);
    // 0x80226FB8: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x80226FBC: beq         $v0, $zero, L_80226FF8
    if (ctx->r2 == 0) {
        // 0x80226FC0: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80226FF8;
    }
    // 0x80226FC0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226FC4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226FC8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80226FCC: j           L_80226FF8
    // 0x80226FD0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80226FF8;
    // 0x80226FD0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80226FD4:
    // 0x80226FD4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80226FD8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226FDC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80226FE0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226FE4: bgez        $v0, L_80226FF8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226FE8: nop
    
            goto L_80226FF8;
    }
    // 0x80226FE8: nop

    // 0x80226FEC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80226FF0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80226FF4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80226FF8:
    // 0x80226FF8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80226FFC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80227000: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80227004: jr          $ra
    // 0x80227008: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80227008: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80234A78_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234A78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234A7C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80234A80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234A84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234A88: lbu         $v1, 0xA($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XA);
    // 0x80234A8C: beq         $v1, $zero, L_80234AA8
    if (ctx->r3 == 0) {
        // 0x80234A90: addiu       $s0, $a1, 0x4E0
        ctx->r16 = ADD32(ctx->r5, 0X4E0);
            goto L_80234AA8;
    }
    // 0x80234A90: addiu       $s0, $a1, 0x4E0
    ctx->r16 = ADD32(ctx->r5, 0X4E0);
    // 0x80234A94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234A98: beq         $v1, $v0, L_80234AC4
    if (ctx->r3 == ctx->r2) {
        // 0x80234A9C: nop
    
            goto L_80234AC4;
    }
    // 0x80234A9C: nop

    // 0x80234AA0: j           L_80234B10
    // 0x80234AA4: nop

        goto L_80234B10;
    // 0x80234AA4: nop

L_80234AA8:
    // 0x80234AA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234AAC: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
    // 0x80234AB0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80234AB4: sb          $v0, 0xAC($a1)
    MEM_B(0XAC, ctx->r5) = ctx->r2;
    // 0x80234AB8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80234ABC: sh          $v0, 0x4E4($a1)
    MEM_H(0X4E4, ctx->r5) = ctx->r2;
    // 0x80234AC0: sh          $zero, 0x4E8($a1)
    MEM_H(0X4E8, ctx->r5) = 0;
L_80234AC4:
    // 0x80234AC4: lhu         $v0, 0x56($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X56);
    // 0x80234AC8: lbu         $v1, 0xA4($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XA4);
    // 0x80234ACC: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x80234AD0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80234AD4: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x80234AD8: beq         $v1, $zero, L_80234AEC
    if (ctx->r3 == 0) {
        // 0x80234ADC: sh          $v0, 0x56($a1)
        MEM_H(0X56, ctx->r5) = ctx->r2;
            goto L_80234AEC;
    }
    // 0x80234ADC: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x80234AE0: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    // 0x80234AE4: jal         0x8002A33C
    // 0x80234AE8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80234AE8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
L_80234AEC:
    // 0x80234AEC: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80234AF0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80234AF4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80234AF8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234AFC: bgtz        $v0, L_80234B10
    if (SIGNED(ctx->r2) > 0) {
        // 0x80234B00: nop
    
            goto L_80234B10;
    }
    // 0x80234B00: nop

    // 0x80234B04: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80234B08: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80234B0C: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_80234B10:
    // 0x80234B10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234B14: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234B18: jr          $ra
    // 0x80234B1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234B1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FAB4_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FAB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FAB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FABC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FAC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FAC4: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022FAC8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022FACC: bne         $v1, $v0, L_8022FB68
    if (ctx->r3 != ctx->r2) {
        // 0x8022FAD0: addiu       $a0, $s0, 0x348
        ctx->r4 = ADD32(ctx->r16, 0X348);
            goto L_8022FB68;
    }
    // 0x8022FAD0: addiu       $a0, $s0, 0x348
    ctx->r4 = ADD32(ctx->r16, 0X348);
    // 0x8022FAD4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8022FAD8: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8022FADC: ori         $v1, $v1, 0xFF00
    ctx->r3 = ctx->r3 | 0XFF00;
    // 0x8022FAE0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022FAE4: addiu       $v1, $zero, 0x600
    ctx->r3 = ADD32(0, 0X600);
    // 0x8022FAE8: bne         $v0, $v1, L_8022FB68
    if (ctx->r2 != ctx->r3) {
        // 0x8022FAEC: nop
    
            goto L_8022FB68;
    }
    // 0x8022FAEC: nop

    // 0x8022FAF0: lbu         $v0, 0xCB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCB);
    // 0x8022FAF4: sltiu       $v0, $v0, 0xB4
    ctx->r2 = ctx->r2 < 0XB4 ? 1 : 0;
    // 0x8022FAF8: beq         $v0, $zero, L_8022FB4C
    if (ctx->r2 == 0) {
        // 0x8022FAFC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022FB4C;
    }
    // 0x8022FAFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FB00: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022FB04: lh          $a3, 0x382($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X382);
    // 0x8022FB08: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022FB0C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022FB10: jal         0x8004F820
    // 0x8022FB14: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022FB14: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022FB18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FB1C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022FB20: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FB24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FB28: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022FB2C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FB30: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022FB34: jal         0x8004DA90
    // 0x8022FB38: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022FB38: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_1:
    // 0x8022FB3C: lbu         $v0, 0xCB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCB);
    // 0x8022FB40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FB44: j           L_8022FBA4
    // 0x8022FB48: sb          $v0, 0xCB($s0)
    MEM_B(0XCB, ctx->r16) = ctx->r2;
        goto L_8022FBA4;
    // 0x8022FB48: sb          $v0, 0xCB($s0)
    MEM_B(0XCB, ctx->r16) = ctx->r2;
L_8022FB4C:
    // 0x8022FB4C: lbu         $v1, 0xCA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022FB50: sb          $zero, 0xCB($s0)
    MEM_B(0XCB, ctx->r16) = 0;
    // 0x8022FB54: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022FB58: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022FB5C: andi        $v1, $v1, 0x7F
    ctx->r3 = ctx->r3 & 0X7F;
    // 0x8022FB60: j           L_8022FBA4
    // 0x8022FB64: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
        goto L_8022FBA4;
    // 0x8022FB64: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
L_8022FB68:
    // 0x8022FB68: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022FB6C: lh          $a3, 0x3A($a0)
    ctx->r7 = MEM_H(ctx->r4, 0X3A);
    // 0x8022FB70: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022FB74: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022FB78: jal         0x8004F820
    // 0x8022FB7C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022FB7C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8022FB80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FB84: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x8022FB88: lhu         $v1, 0x56($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X56);
    // 0x8022FB8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FB90: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022FB94: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FB98: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022FB9C: jal         0x8004DA90
    // 0x8022FBA0: sh          $v1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022FBA0: sh          $v1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r3;
    after_3:
L_8022FBA4:
    // 0x8022FBA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FBA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FBAC: jr          $ra
    // 0x8022FBB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FBB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A10C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A10C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A110: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A114: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A118: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023A11C: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    // 0x8023A120: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023A124: jal         0x8003E6BC
    // 0x8023A128: nop

    func_8003E6BC_19ABC(rdram, ctx);
        goto after_0;
    // 0x8023A128: nop

    after_0:
    // 0x8023A12C: lhu         $v1, 0xC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XC);
    // 0x8023A130: bne         $v0, $v1, L_8023A144
    if (ctx->r2 != ctx->r3) {
        // 0x8023A134: nop
    
            goto L_8023A144;
    }
    // 0x8023A134: nop

    // 0x8023A138: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8023A13C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A140: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8023A144:
    // 0x8023A144: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023A148: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A14C: jr          $ra
    // 0x8023A150: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A150: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239428_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239428: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023942C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80239430: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239434: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80239438: lh          $v0, 0x54($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X54);
    // 0x8023943C: addiu       $a0, $s0, 0xD0
    ctx->r4 = ADD32(ctx->r16, 0XD0);
    // 0x80239440: beq         $v0, $zero, L_80239468
    if (ctx->r2 == 0) {
        // 0x80239444: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80239468;
    }
    // 0x80239444: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80239448: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8023944C: bne         $v0, $zero, L_80239458
    if (ctx->r2 != 0) {
        // 0x80239450: addiu       $v0, $v1, -0x20
        ctx->r2 = ADD32(ctx->r3, -0X20);
            goto L_80239458;
    }
    // 0x80239450: addiu       $v0, $v1, -0x20
    ctx->r2 = ADD32(ctx->r3, -0X20);
    // 0x80239454: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
L_80239458:
    // 0x80239458: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x8023945C: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x80239460: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80239464: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
L_80239468:
    // 0x80239468: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x8023946C: bne         $v0, $zero, L_8023950C
    if (ctx->r2 != 0) {
        // 0x80239470: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8023950C;
    }
    // 0x80239470: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80239474: jal         0x800A3450
    // 0x80239478: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80239478: nop

    after_0:
    // 0x8023947C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80239480: slti        $v0, $v0, 0xE
    ctx->r2 = SIGNED(ctx->r2) < 0XE ? 1 : 0;
    // 0x80239484: beq         $v0, $zero, L_802394D0
    if (ctx->r2 == 0) {
        // 0x80239488: nop
    
            goto L_802394D0;
    }
    // 0x80239488: nop

    // 0x8023948C: jal         0x800A3450
    // 0x80239490: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80239490: nop

    after_1:
    // 0x80239494: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80239498: sb          $v0, 0xD1($s0)
    MEM_B(0XD1, ctx->r16) = ctx->r2;
    // 0x8023949C: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x802394A0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802394A4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802394A8: jal         0x800A3450
    // 0x802394AC: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x802394AC: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    after_2:
    // 0x802394B0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x802394B4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802394B8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802394BC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802394C0: lhu         $v0, 0xE64($at)
    ctx->r2 = MEM_HU(ctx->r1, 0XE64);
    // 0x802394C4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802394C8: j           L_802394F8
    // 0x802394CC: sh          $v0, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r2;
        goto L_802394F8;
    // 0x802394CC: sh          $v0, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r2;
L_802394D0:
    // 0x802394D0: jal         0x800A3450
    // 0x802394D4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x802394D4: nop

    after_3:
    // 0x802394D8: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x802394DC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802394E0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802394E4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802394E8: lhu         $v1, 0xE64($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XE64);
    // 0x802394EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802394F0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802394F4: sh          $v1, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r3;
L_802394F8:
    // 0x802394F8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802394FC: jal         0x80238B98
    // 0x80239500: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80238B98_ovl4(rdram, ctx);
        goto after_4;
    // 0x80239500: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80239504: j           L_8023955C
    // 0x80239508: nop

        goto L_8023955C;
    // 0x80239508: nop

L_8023950C:
    // 0x8023950C: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x80239510: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80239514: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80239518: bne         $v1, $v0, L_8023955C
    if (ctx->r3 != ctx->r2) {
        // 0x8023951C: nop
    
            goto L_8023955C;
    }
    // 0x8023951C: nop

    // 0x80239520: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    // 0x80239524: beq         $v0, $zero, L_8023955C
    if (ctx->r2 == 0) {
        // 0x80239528: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_8023955C;
    }
    // 0x80239528: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8023952C: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x80239530: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x80239534: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80239538: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023953C: sh          $v0, 0x10E($s0)
    MEM_H(0X10E, ctx->r16) = ctx->r2;
    // 0x80239540: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80239544: sh          $v0, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = ctx->r2;
    // 0x80239548: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023954C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80239550: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80239554: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80239558: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8023955C:
    // 0x8023955C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80239560: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80239564: jr          $ra
    // 0x80239568: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80239568: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233B6C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233B6C: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80233B70: beq         $v1, $zero, L_80233B8C
    if (ctx->r3 == 0) {
        // 0x80233B74: addiu       $a1, $a0, 0x4E0
        ctx->r5 = ADD32(ctx->r4, 0X4E0);
            goto L_80233B8C;
    }
    // 0x80233B74: addiu       $a1, $a0, 0x4E0
    ctx->r5 = ADD32(ctx->r4, 0X4E0);
    // 0x80233B78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233B7C: beq         $v1, $v0, L_80233B9C
    if (ctx->r3 == ctx->r2) {
        // 0x80233B80: nop
    
            goto L_80233B9C;
    }
    // 0x80233B80: nop

    // 0x80233B84: j           L_80233BC8
    // 0x80233B88: nop

        goto L_80233BC8;
    // 0x80233B88: nop

L_80233B8C:
    // 0x80233B8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233B90: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80233B94: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x80233B98: sh          $zero, 0x4E8($a0)
    MEM_H(0X4E8, ctx->r4) = 0;
L_80233B9C:
    // 0x80233B9C: lhu         $a0, 0x0($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X0);
    // 0x80233BA0: andi        $v0, $a0, 0x20
    ctx->r2 = ctx->r4 & 0X20;
    // 0x80233BA4: bne         $v0, $zero, L_80233BC4
    if (ctx->r2 != 0) {
        // 0x80233BA8: ori         $v0, $a0, 0x1
        ctx->r2 = ctx->r4 | 0X1;
            goto L_80233BC4;
    }
    // 0x80233BA8: ori         $v0, $a0, 0x1
    ctx->r2 = ctx->r4 | 0X1;
    // 0x80233BAC: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x80233BB0: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80233BB4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80233BB8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80233BBC: beq         $v0, $zero, L_80233BC8
    if (ctx->r2 == 0) {
        // 0x80233BC0: ori         $v0, $a0, 0x1
        ctx->r2 = ctx->r4 | 0X1;
            goto L_80233BC8;
    }
    // 0x80233BC0: ori         $v0, $a0, 0x1
    ctx->r2 = ctx->r4 | 0X1;
L_80233BC4:
    // 0x80233BC4: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80233BC8:
    // 0x80233BC8: jr          $ra
    // 0x80233BCC: nop

    TRACE_RETURN()
    return;
    // 0x80233BCC: nop

;}
RECOMP_FUNC void func_8023A020_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A020: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A024: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023A028: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023A02C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023A030: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023A034: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023A038: lw          $v0, 0xEB0($at)
    ctx->r2 = MEM_W(ctx->r1, 0XEB0);
    // 0x8023A03C: jalr        $v0
    // 0x8023A040: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023A040: nop

    after_0:
    // 0x8023A044: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023A048: jr          $ra
    // 0x8023A04C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A04C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
