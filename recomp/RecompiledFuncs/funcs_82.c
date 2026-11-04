#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022D6C4_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D6C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D6C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D6CC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D6D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022D6D4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D6D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D6DC: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8022D6E0: lw          $s2, 0x44($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X44);
    // 0x8022D6E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D6E8: beq         $v1, $v0, L_8022D730
    if (ctx->r3 == ctx->r2) {
        // 0x8022D6EC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022D730;
    }
    // 0x8022D6EC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022D6F0: beql        $v0, $zero, L_8022D708
    if (ctx->r2 == 0) {
        // 0x8022D6F4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022D708;
    }
    goto skip_0;
    // 0x8022D6F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022D6F8: beq         $v1, $zero, L_8022D718
    if (ctx->r3 == 0) {
        // 0x8022D6FC: lui         $v1, 0x20
        ctx->r3 = S32(0X20 << 16);
            goto L_8022D718;
    }
    // 0x8022D6FC: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x8022D700: j           L_8022D85C
    // 0x8022D704: nop

        goto L_8022D85C;
    // 0x8022D704: nop

L_8022D708:
    // 0x8022D708: beq         $v1, $v0, L_8022D764
    if (ctx->r3 == ctx->r2) {
        // 0x8022D70C: nop
    
            goto L_8022D764;
    }
    // 0x8022D70C: nop

    // 0x8022D710: j           L_8022D85C
    // 0x8022D714: nop

        goto L_8022D85C;
    // 0x8022D714: nop

L_8022D718:
    // 0x8022D718: lh          $v0, 0x3A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3A);
    // 0x8022D71C: sw          $v1, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r3;
    // 0x8022D720: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022D724: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
    // 0x8022D728: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D72C: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
L_8022D730:
    // 0x8022D730: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022D734: ori         $v0, $v0, 0xFF00
    ctx->r2 = ctx->r2 | 0XFF00;
    // 0x8022D738: lw          $v1, 0xC($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XC);
    // 0x8022D73C: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x8022D740: ori         $a0, $a0, 0x1000
    ctx->r4 = ctx->r4 | 0X1000;
    // 0x8022D744: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022D748: bne         $v1, $a0, L_8022D758
    if (ctx->r3 != ctx->r4) {
        // 0x8022D74C: nop
    
            goto L_8022D758;
    }
    // 0x8022D74C: nop

    // 0x8022D750: jal         0x8022D8F8
    // 0x8022D754: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8022D8F8_ovl9(rdram, ctx);
        goto after_0;
    // 0x8022D754: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
L_8022D758:
    // 0x8022D758: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8022D75C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D760: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8022D764:
    // 0x8022D764: lw          $v0, 0x4C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4C);
    // 0x8022D768: lw          $a0, 0x50($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X50);
    // 0x8022D76C: lhu         $v1, 0x3A($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X3A);
    // 0x8022D770: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022D774: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
    // 0x8022D778: lw          $v0, 0x50($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X50);
    // 0x8022D77C: lhu         $a1, 0x4C($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X4C);
    // 0x8022D780: lui         $a0, 0xFFFC
    ctx->r4 = S32(0XFFFC << 16);
    // 0x8022D784: addiu       $v1, $v1, -0x50
    ctx->r3 = ADD32(ctx->r3, -0X50);
    // 0x8022D788: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022D78C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022D790: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022D794: sh          $a1, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r5;
    // 0x8022D798: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022D79C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022D7A0: slt         $v1, $v1, $a1
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022D7A4: beq         $v1, $zero, L_8022D814
    if (ctx->r3 == 0) {
        // 0x8022D7A8: sw          $v0, 0x50($s1)
        MEM_W(0X50, ctx->r17) = ctx->r2;
            goto L_8022D814;
    }
    // 0x8022D7A8: sw          $v0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r2;
    // 0x8022D7AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022D7B0: addiu       $a1, $s2, 0x3
    ctx->r5 = ADD32(ctx->r18, 0X3);
    // 0x8022D7B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D7B8: sb          $zero, 0x3($s2)
    MEM_B(0X3, ctx->r18) = 0;
    // 0x8022D7BC: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8022D7C0: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x8022D7C4: sw          $zero, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = 0;
    // 0x8022D7C8: jal         0x8004D5D4
    // 0x8022D7CC: sw          $zero, 0x50($s2)
    MEM_W(0X50, ctx->r18) = 0;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022D7CC: sw          $zero, 0x50($s2)
    MEM_W(0X50, ctx->r18) = 0;
    after_1:
    // 0x8022D7D0: addiu       $s0, $s2, 0x18
    ctx->r16 = ADD32(ctx->r18, 0X18);
    // 0x8022D7D4: jal         0x8002C654
    // 0x8022D7D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_2;
    // 0x8022D7D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022D7DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022D7E0: jal         0x800317C0
    // 0x8022D7E4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800317C0_CBC0(rdram, ctx);
        goto after_3;
    // 0x8022D7E4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022D7E8: lbu         $a0, 0xB($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0XB);
    // 0x8022D7EC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D7F0: jal         0x800319B4
    // 0x8022D7F4: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_4;
    // 0x8022D7F4: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_4:
    // 0x8022D7F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022D7FC: jal         0x80031BB4
    // 0x8022D800: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_5;
    // 0x8022D800: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022D804: jal         0x8004F684
    // 0x8022D808: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_6;
    // 0x8022D808: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x8022D80C: j           L_8022D85C
    // 0x8022D810: nop

        goto L_8022D85C;
    // 0x8022D810: nop

L_8022D814:
    // 0x8022D814: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8022D818: jal         0x8002C654
    // 0x8022D81C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_7;
    // 0x8022D81C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022D820: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x8022D824: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022D828: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022D82C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022D830: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022D834: lh          $a0, 0x970($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X970);
    // 0x8022D838: jal         0x80031BB4
    // 0x8022D83C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_8;
    // 0x8022D83C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8022D840: lb          $a0, 0xF($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XF);
    // 0x8022D844: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D848: jal         0x800319B4
    // 0x8022D84C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_9;
    // 0x8022D84C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_9:
    // 0x8022D850: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x8022D854: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D858: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_8022D85C:
    // 0x8022D85C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D860: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D864: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D868: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D86C: jr          $ra
    // 0x8022D870: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D870: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D658_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D658: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D65C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D660: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D664: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D668: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x8022D66C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D670: jal         0x8002C654
    // 0x8022D674: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8022D674: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8022D678: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022D67C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022D680: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022D684: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022D688: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022D68C: lhu         $a0, 0x970($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X970);
    // 0x8022D690: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D694: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022D698: jal         0x80031BB4
    // 0x8022D69C: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_1;
    // 0x8022D69C: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    after_1:
    // 0x8022D6A0: lbu         $a0, 0xB($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XB);
    // 0x8022D6A4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D6A8: jal         0x800319B4
    // 0x8022D6AC: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x8022D6AC: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_2:
    // 0x8022D6B0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D6B4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D6B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D6BC: jr          $ra
    // 0x8022D6C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D6C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802260F0_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802260F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802260F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802260F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802260FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226100: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226104: bne         $v0, $zero, L_8022611C
    if (ctx->r2 != 0) {
        // 0x80226108: nop
    
            goto L_8022611C;
    }
    // 0x80226108: nop

    // 0x8022610C: jal         0x80226AEC
    // 0x80226110: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80226110: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_0:
    // 0x80226114: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226118: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022611C:
    // 0x8022611C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226120: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226124: jr          $ra
    // 0x80226128: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226128: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E114_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E114: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E118: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E11C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E120: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022E124: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E128: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022E12C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022E130: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022E134: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x8022E138: beq         $v0, $zero, L_8022E244
    if (ctx->r2 == 0) {
        // 0x8022E13C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022E244;
    }
    // 0x8022E13C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022E140: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E144: addu        $at, $at, $v0
    gpr jr_addend_8022E14C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E148: lw          $v0, 0xBF8($at)
    ctx->r2 = ADD32(ctx->r1, 0XBF8);
    // 0x8022E14C: jr          $v0
    // 0x8022E150: nop

    switch (jr_addend_8022E14C >> 2) {
        case 0: goto L_8022E154; break;
        case 1: goto L_8022E174; break;
        case 2: goto L_8022E194; break;
        case 3: goto L_8022E1A0; break;
        case 4: goto L_8022E1BC; break;
        case 5: goto L_8022E1EC; break;
        case 6: goto L_8022E20C; break;
        case 7: goto L_8022E244; break;
        case 8: goto L_8022E244; break;
        default: switch_error(__func__, 0x8022E14C, 0x80230BF8);
    }
    // 0x8022E150: nop

L_8022E154:
    // 0x8022E154: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022E158: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022E15C: lui         $v1, 0xF80
    ctx->r3 = S32(0XF80 << 16);
    // 0x8022E160: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022E164: beq         $v0, $zero, L_8022E238
    if (ctx->r2 == 0) {
        // 0x8022E168: nop
    
            goto L_8022E238;
    }
    // 0x8022E168: nop

    // 0x8022E16C: j           L_8022E244
    // 0x8022E170: nop

        goto L_8022E244;
    // 0x8022E170: nop

L_8022E174:
    // 0x8022E174: jal         0x8006FF84
    // 0x8022E178: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8022E178: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8022E17C: beq         $v0, $zero, L_8022E244
    if (ctx->r2 == 0) {
        // 0x8022E180: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022E244;
    }
    // 0x8022E180: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022E184: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8022E188: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8022E18C: j           L_8022E238
    // 0x8022E190: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
        goto L_8022E238;
    // 0x8022E190: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
L_8022E194:
    // 0x8022E194: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022E198: j           L_8022E238
    // 0x8022E19C: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
        goto L_8022E238;
    // 0x8022E19C: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
L_8022E1A0:
    // 0x8022E1A0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022E1A4: addiu       $a1, $zero, 0xD2
    ctx->r5 = ADD32(0, 0XD2);
    // 0x8022E1A8: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x8022E1AC: jal         0x800616FC
    // 0x8022E1B0: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x8022E1B0: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022E1B4: j           L_8022E238
    // 0x8022E1B8: nop

        goto L_8022E238;
    // 0x8022E1B8: nop

L_8022E1BC:
    // 0x8022E1BC: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x8022E1C0: bgez        $v0, L_8022E244
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022E1C4: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8022E244;
    }
    // 0x8022E1C4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022E1C8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022E1CC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022E1D0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022E1D4: bne         $v0, $zero, L_8022E244
    if (ctx->r2 != 0) {
        // 0x8022E1D8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022E244;
    }
    // 0x8022E1D8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022E1DC: jal         0x800616FC
    // 0x8022E1E0: addiu       $a1, $zero, 0xD3
    ctx->r5 = ADD32(0, 0XD3);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_2;
    // 0x8022E1E0: addiu       $a1, $zero, 0xD3
    ctx->r5 = ADD32(0, 0XD3);
    after_2:
    // 0x8022E1E4: j           L_8022E238
    // 0x8022E1E8: nop

        goto L_8022E238;
    // 0x8022E1E8: nop

L_8022E1EC:
    // 0x8022E1EC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022E1F0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022E1F4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022E1F8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022E1FC: beq         $v0, $zero, L_8022E238
    if (ctx->r2 == 0) {
        // 0x8022E200: nop
    
            goto L_8022E238;
    }
    // 0x8022E200: nop

    // 0x8022E204: j           L_8022E244
    // 0x8022E208: nop

        goto L_8022E244;
    // 0x8022E208: nop

L_8022E20C:
    // 0x8022E20C: jal         0x8003516C
    // 0x8022E210: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_3;
    // 0x8022E210: nop

    after_3:
    // 0x8022E214: bne         $v0, $zero, L_8022E244
    if (ctx->r2 != 0) {
        // 0x8022E218: nop
    
            goto L_8022E244;
    }
    // 0x8022E218: nop

    // 0x8022E21C: jal         0x80070050
    // 0x8022E220: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_4;
    // 0x8022E220: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8022E224: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022E228: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x8022E22C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022E230: jal         0x80060D38
    // 0x8022E234: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_80060D38_3C138(rdram, ctx);
        goto after_5;
    // 0x8022E234: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_5:
L_8022E238:
    // 0x8022E238: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022E23C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E240: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022E244:
    // 0x8022E244: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022E248: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E24C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E250: jr          $ra
    // 0x8022E254: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E254: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E050_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E050: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E054: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E058: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022E05C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E060: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E064: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E068: lw          $v0, 0x9E0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X9E0);
    // 0x8022E06C: jalr        $v0
    // 0x8022E070: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E070: nop

    after_0:
    // 0x8022E074: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E078: jr          $ra
    // 0x8022E07C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E07C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802294A0_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802294A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802294A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802294A8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802294AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802294B0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802294B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802294B8: lw          $v0, 0x690($at)
    ctx->r2 = MEM_W(ctx->r1, 0X690);
    // 0x802294BC: jalr        $v0
    // 0x802294C0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802294C0: nop

    after_0:
    // 0x802294C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802294C8: jr          $ra
    // 0x802294CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802294CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DE6C_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DE6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022DE70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DE74: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DE78: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022DE7C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DE80: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022DE84: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022DE88: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022DE8C: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x8022DE90: beq         $v0, $zero, L_8022E038
    if (ctx->r2 == 0) {
        // 0x8022DE94: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022E038;
    }
    // 0x8022DE94: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022DE98: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022DE9C: addu        $at, $at, $v0
    gpr jr_addend_8022DEA4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DEA0: lw          $v0, 0xBC8($at)
    ctx->r2 = ADD32(ctx->r1, 0XBC8);
    // 0x8022DEA4: jr          $v0
    // 0x8022DEA8: nop

    switch (jr_addend_8022DEA4 >> 2) {
        case 0: goto L_8022DEAC; break;
        case 1: goto L_8022DECC; break;
        case 2: goto L_8022DED8; break;
        case 3: goto L_8022DF08; break;
        case 4: goto L_8022DF58; break;
        case 5: goto L_8022DF70; break;
        case 6: goto L_8022DFC4; break;
        case 7: goto L_8022DFEC; break;
        case 8: goto L_8022E038; break;
        case 9: goto L_8022E038; break;
        case 10: goto L_8022E000; break;
        default: switch_error(__func__, 0x8022DEA4, 0x80230BC8);
    }
    // 0x8022DEA8: nop

L_8022DEAC:
    // 0x8022DEAC: jal         0x8006FF84
    // 0x8022DEB0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8022DEB0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8022DEB4: beq         $v0, $zero, L_8022E038
    if (ctx->r2 == 0) {
        // 0x8022DEB8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022E038;
    }
    // 0x8022DEB8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022DEBC: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8022DEC0: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8022DEC4: j           L_8022DFDC
    // 0x8022DEC8: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
        goto L_8022DFDC;
    // 0x8022DEC8: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
L_8022DECC:
    // 0x8022DECC: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022DED0: j           L_8022DFDC
    // 0x8022DED4: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
        goto L_8022DFDC;
    // 0x8022DED4: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
L_8022DED8:
    // 0x8022DED8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022DEDC: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x8022DEE0: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8022DEE4: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022DEE8: bne         $v0, $zero, L_8022E038
    if (ctx->r2 != 0) {
        // 0x8022DEEC: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_8022E038;
    }
    // 0x8022DEEC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8022DEF0: bne         $v0, $zero, L_8022DFF8
    if (ctx->r2 != 0) {
        // 0x8022DEF4: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022DFF8;
    }
    // 0x8022DEF4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022DEF8: jal         0x80036B58
    // 0x8022DEFC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_1;
    // 0x8022DEFC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x8022DF00: j           L_8022DFDC
    // 0x8022DF04: nop

        goto L_8022DFDC;
    // 0x8022DF04: nop

L_8022DF08:
    // 0x8022DF08: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022DF0C: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x8022DF10: bne         $v0, $zero, L_8022E038
    if (ctx->r2 != 0) {
        // 0x8022DF14: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022E038;
    }
    // 0x8022DF14: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022DF18: jal         0x800616FC
    // 0x8022DF1C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_2;
    // 0x8022DF1C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_2:
    // 0x8022DF20: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022DF24: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022DF28: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DF2C: lbu         $v0, 0x9CC($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X9CC);
    // 0x8022DF30: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022DF34: sh          $v0, -0x3F82($at)
    MEM_H(-0X3F82, ctx->r1) = ctx->r2;
    // 0x8022DF38: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022DF3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DF40: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022DF44: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022DF48: jal         0x80036B1C
    // 0x8022DF4C: lw          $a0, 0x9B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X9B0);
    func_80036B1C_11F1C(rdram, ctx);
        goto after_3;
    // 0x8022DF4C: lw          $a0, 0x9B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X9B0);
    after_3:
    // 0x8022DF50: j           L_8022DFDC
    // 0x8022DF54: nop

        goto L_8022DFDC;
    // 0x8022DF54: nop

L_8022DF58:
    // 0x8022DF58: jal         0x80036B7C
    // 0x8022DF5C: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_4;
    // 0x8022DF5C: nop

    after_4:
    // 0x8022DF60: beq         $v0, $zero, L_8022E038
    if (ctx->r2 == 0) {
        // 0x8022DF64: nop
    
            goto L_8022E038;
    }
    // 0x8022DF64: nop

    // 0x8022DF68: j           L_8022DFDC
    // 0x8022DF6C: nop

        goto L_8022DFDC;
    // 0x8022DF6C: nop

L_8022DF70:
    // 0x8022DF70: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022DF74: lhu         $v0, -0x783E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783E);
    // 0x8022DF78: bne         $v0, $zero, L_8022DFA8
    if (ctx->r2 != 0) {
        // 0x8022DF7C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022DFA8;
    }
    // 0x8022DF7C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022DF80: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022DF84: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022DF88: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022DF8C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022DF90: beq         $v0, $zero, L_8022DFAC
    if (ctx->r2 == 0) {
        // 0x8022DF94: addiu       $v0, $zero, 0x31
        ctx->r2 = ADD32(0, 0X31);
            goto L_8022DFAC;
    }
    // 0x8022DF94: addiu       $v0, $zero, 0x31
    ctx->r2 = ADD32(0, 0X31);
    // 0x8022DF98: jal         0x80036B7C
    // 0x8022DF9C: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_5;
    // 0x8022DF9C: nop

    after_5:
    // 0x8022DFA0: bne         $v0, $zero, L_8022E038
    if (ctx->r2 != 0) {
        // 0x8022DFA4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022E038;
    }
    // 0x8022DFA4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8022DFA8:
    // 0x8022DFA8: addiu       $v0, $zero, 0x31
    ctx->r2 = ADD32(0, 0X31);
L_8022DFAC:
    // 0x8022DFAC: jal         0x80061798
    // 0x8022DFB0: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    func_80061798_3CB98(rdram, ctx);
        goto after_6;
    // 0x8022DFB0: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    after_6:
    // 0x8022DFB4: jal         0x80036B58
    // 0x8022DFB8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_7;
    // 0x8022DFB8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_7:
    // 0x8022DFBC: j           L_8022DFDC
    // 0x8022DFC0: nop

        goto L_8022DFDC;
    // 0x8022DFC0: nop

L_8022DFC4:
    // 0x8022DFC4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022DFC8: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x8022DFCC: bne         $v0, $zero, L_8022E038
    if (ctx->r2 != 0) {
        // 0x8022DFD0: addiu       $v0, $zero, 0x64
        ctx->r2 = ADD32(0, 0X64);
            goto L_8022E038;
    }
    // 0x8022DFD0: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8022DFD4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022DFD8: sh          $v0, -0x3F82($at)
    MEM_H(-0X3F82, ctx->r1) = ctx->r2;
L_8022DFDC:
    // 0x8022DFDC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022DFE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DFE4: j           L_8022E038
    // 0x8022DFE8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022E038;
    // 0x8022DFE8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022DFEC:
    // 0x8022DFEC: jal         0x8002B1D4
    // 0x8022DFF0: nop

    func_8002B1D4_65D4(rdram, ctx);
        goto after_8;
    // 0x8022DFF0: nop

    after_8:
    // 0x8022DFF4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_8022DFF8:
    // 0x8022DFF8: j           L_8022E038
    // 0x8022DFFC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022E038;
    // 0x8022DFFC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022E000:
    // 0x8022E000: jal         0x8003516C
    // 0x8022E004: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_9;
    // 0x8022E004: nop

    after_9:
    // 0x8022E008: bne         $v0, $zero, L_8022E038
    if (ctx->r2 != 0) {
        // 0x8022E00C: nop
    
            goto L_8022E038;
    }
    // 0x8022E00C: nop

    // 0x8022E010: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022E014: jal         0x80070050
    // 0x8022E018: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_10;
    // 0x8022E018: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_10:
    // 0x8022E01C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022E020: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x8022E024: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022E028: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022E02C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E030: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022E034: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022E038:
    // 0x8022E038: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022E03C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E040: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E044: jr          $ra
    // 0x8022E048: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E048: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022E04C: nop

;}
RECOMP_FUNC void func_802282A0_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802282A0: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x802282A4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802282A8: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x802282AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802282B0: bne         $v0, $zero, L_802282BC
    if (ctx->r2 != 0) {
        // 0x802282B4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802282BC;
    }
    // 0x802282B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802282B8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_802282BC:
    // 0x802282BC: jr          $ra
    // 0x802282C0: nop

    TRACE_RETURN()
    return;
    // 0x802282C0: nop

;}
RECOMP_FUNC void func_8022B564_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B564: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B568: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B56C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B570: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B574: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B578: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B57C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B580: beq         $v1, $v0, L_8022B5F8
    if (ctx->r3 == ctx->r2) {
        // 0x8022B584: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022B5F8;
    }
    // 0x8022B584: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022B588: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022B58C: beql        $v0, $zero, L_8022B5A4
    if (ctx->r2 == 0) {
        // 0x8022B590: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022B5A4;
    }
    goto skip_0;
    // 0x8022B590: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022B594: beq         $v1, $zero, L_8022B5BC
    if (ctx->r3 == 0) {
        // 0x8022B598: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022B5BC;
    }
    // 0x8022B598: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022B59C: j           L_8022B7DC
    // 0x8022B5A0: nop

        goto L_8022B7DC;
    // 0x8022B5A0: nop

L_8022B5A4:
    // 0x8022B5A4: beq         $v1, $v0, L_8022B6B4
    if (ctx->r3 == ctx->r2) {
        // 0x8022B5A8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022B6B4;
    }
    // 0x8022B5A8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B5AC: beq         $v1, $v0, L_8022B75C
    if (ctx->r3 == ctx->r2) {
        // 0x8022B5B0: nop
    
            goto L_8022B75C;
    }
    // 0x8022B5B0: nop

    // 0x8022B5B4: j           L_8022B7DC
    // 0x8022B5B8: nop

        goto L_8022B7DC;
    // 0x8022B5B8: nop

L_8022B5BC:
    // 0x8022B5BC: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B5C0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022B5C4: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x8022B5C8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8022B5CC: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022B5D0: andi        $v1, $v1, 0x40
    ctx->r3 = ctx->r3 & 0X40;
    // 0x8022B5D4: beq         $v1, $zero, L_8022B5E4
    if (ctx->r3 == 0) {
        // 0x8022B5D8: sh          $v0, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r2;
            goto L_8022B5E4;
    }
    // 0x8022B5D8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022B5DC: j           L_8022B5E8
    // 0x8022B5E0: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
        goto L_8022B5E8;
    // 0x8022B5E0: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
L_8022B5E4:
    // 0x8022B5E4: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
L_8022B5E8:
    // 0x8022B5E8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B5EC: addiu       $v0, $zero, 0x27
    ctx->r2 = ADD32(0, 0X27);
    // 0x8022B5F0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B5F4: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
L_8022B5F8:
    // 0x8022B5F8: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022B5FC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B600: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B604: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B608: bgez        $v0, L_8022B684
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B60C: nop
    
            goto L_8022B684;
    }
    // 0x8022B60C: nop

    // 0x8022B610: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B614: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022B618: beq         $v0, $zero, L_8022B638
    if (ctx->r2 == 0) {
        // 0x8022B61C: nop
    
            goto L_8022B638;
    }
    // 0x8022B61C: nop

    // 0x8022B620: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B624: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x8022B628: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B62C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022B630: j           L_8022B64C
    // 0x8022B634: addiu       $v0, $zero, 0xE53
    ctx->r2 = ADD32(0, 0XE53);
        goto L_8022B64C;
    // 0x8022B634: addiu       $v0, $zero, 0xE53
    ctx->r2 = ADD32(0, 0XE53);
L_8022B638:
    // 0x8022B638: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B63C: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    // 0x8022B640: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B644: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022B648: addiu       $v0, $zero, 0x1AD
    ctx->r2 = ADD32(0, 0X1AD);
L_8022B64C:
    // 0x8022B64C: sh          $v0, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r2;
    // 0x8022B650: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B654: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B658: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022B65C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B660: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x8022B664: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022B668: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x8022B66C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022B670: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B674: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8022B678: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
    // 0x8022B67C: j           L_8022B6B4
    // 0x8022B680: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022B6B4;
    // 0x8022B680: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022B684:
    // 0x8022B684: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B688: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022B68C: beq         $v0, $zero, L_8022B6A4
    if (ctx->r2 == 0) {
        // 0x8022B690: nop
    
            goto L_8022B6A4;
    }
    // 0x8022B690: nop

    // 0x8022B694: lhu         $v0, 0x3E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3E);
    // 0x8022B698: addiu       $v0, $v0, -0xB
    ctx->r2 = ADD32(ctx->r2, -0XB);
    // 0x8022B69C: j           L_8022B7DC
    // 0x8022B6A0: sh          $v0, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r2;
        goto L_8022B7DC;
    // 0x8022B6A0: sh          $v0, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r2;
L_8022B6A4:
    // 0x8022B6A4: lhu         $v0, 0x3E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3E);
    // 0x8022B6A8: addiu       $v0, $v0, 0xB
    ctx->r2 = ADD32(ctx->r2, 0XB);
    // 0x8022B6AC: j           L_8022B7DC
    // 0x8022B6B0: sh          $v0, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r2;
        goto L_8022B7DC;
    // 0x8022B6B0: sh          $v0, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r2;
L_8022B6B4:
    // 0x8022B6B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B6B8: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022B6BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B6C0: jal         0x8004DA90
    // 0x8022B6C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022B6C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022B6C8: jal         0x80040F30
    // 0x8022B6CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022B6CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022B6D0: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x8022B6D4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022B6D8: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022B6DC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022B6E0: bgez        $v1, L_8022B714
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8022B6E4: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_8022B714;
    }
    // 0x8022B6E4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022B6E8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B6EC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B6F0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B6F4: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022B6F8: bne         $v0, $zero, L_8022B704
    if (ctx->r2 != 0) {
        // 0x8022B6FC: addiu       $v0, $zero, 0x13
        ctx->r2 = ADD32(0, 0X13);
            goto L_8022B704;
    }
    // 0x8022B6FC: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8022B700: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
L_8022B704:
    // 0x8022B704: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B708: addiu       $v0, $zero, 0x27
    ctx->r2 = ADD32(0, 0X27);
    // 0x8022B70C: sh          $zero, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = 0;
    // 0x8022B710: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022B714:
    // 0x8022B714: andi        $v0, $a0, 0xF00
    ctx->r2 = ctx->r4 & 0XF00;
    // 0x8022B718: beq         $v0, $zero, L_8022B7DC
    if (ctx->r2 == 0) {
        // 0x8022B71C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022B7DC;
    }
    // 0x8022B71C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B720: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B724: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B728: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022B72C: beq         $v0, $zero, L_8022B740
    if (ctx->r2 == 0) {
        // 0x8022B730: addiu       $v0, $zero, 0x13
        ctx->r2 = ADD32(0, 0X13);
            goto L_8022B740;
    }
    // 0x8022B730: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8022B734: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B738: j           L_8022B74C
    // 0x8022B73C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022B74C;
    // 0x8022B73C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022B740:
    // 0x8022B740: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8022B744: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B748: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022B74C:
    // 0x8022B74C: sh          $v0, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r2;
    // 0x8022B750: addiu       $v0, $zero, 0x27
    ctx->r2 = ADD32(0, 0X27);
    // 0x8022B754: j           L_8022B7DC
    // 0x8022B758: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022B7DC;
    // 0x8022B758: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022B75C:
    // 0x8022B75C: lhu         $v0, 0x34C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34C);
    // 0x8022B760: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B764: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022B768: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B76C: bgez        $v0, L_8022B7B4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B770: nop
    
            goto L_8022B7B4;
    }
    // 0x8022B770: nop

    // 0x8022B774: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022B778: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022B77C: beq         $v0, $zero, L_8022B790
    if (ctx->r2 == 0) {
        // 0x8022B780: sb          $zero, 0xAC($s0)
        MEM_B(0XAC, ctx->r16) = 0;
            goto L_8022B790;
    }
    // 0x8022B780: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022B784: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B788: j           L_8022B798
    // 0x8022B78C: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
        goto L_8022B798;
    // 0x8022B78C: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
L_8022B790:
    // 0x8022B790: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B794: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
L_8022B798:
    // 0x8022B798: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B79C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022B7A0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B7A4: sh          $zero, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = 0;
    // 0x8022B7A8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022B7AC: j           L_8022B7DC
    // 0x8022B7B0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8022B7DC;
    // 0x8022B7B0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022B7B4:
    // 0x8022B7B4: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022B7B8: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022B7BC: beq         $v0, $zero, L_8022B7D0
    if (ctx->r2 == 0) {
        // 0x8022B7C0: nop
    
            goto L_8022B7D0;
    }
    // 0x8022B7C0: nop

    // 0x8022B7C4: lhu         $v0, 0x386($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X386);
    // 0x8022B7C8: j           L_8022B7D8
    // 0x8022B7CC: addiu       $v0, $v0, 0xB
    ctx->r2 = ADD32(ctx->r2, 0XB);
        goto L_8022B7D8;
    // 0x8022B7CC: addiu       $v0, $v0, 0xB
    ctx->r2 = ADD32(ctx->r2, 0XB);
L_8022B7D0:
    // 0x8022B7D0: lhu         $v0, 0x386($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X386);
    // 0x8022B7D4: addiu       $v0, $v0, -0xB
    ctx->r2 = ADD32(ctx->r2, -0XB);
L_8022B7D8:
    // 0x8022B7D8: sh          $v0, 0x386($s0)
    MEM_H(0X386, ctx->r16) = ctx->r2;
L_8022B7DC:
    // 0x8022B7DC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B7E0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B7E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B7E8: jr          $ra
    // 0x8022B7EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B7EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C424_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C424: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8022C428: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022C42C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022C430: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8022C434: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x8022C438: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x8022C43C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8022C440: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8022C444: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022C448: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022C44C: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022C450: beq         $v1, $zero, L_8022C46C
    if (ctx->r3 == 0) {
        // 0x8022C454: addiu       $s3, $s1, 0xC0
        ctx->r19 = ADD32(ctx->r17, 0XC0);
            goto L_8022C46C;
    }
    // 0x8022C454: addiu       $s3, $s1, 0xC0
    ctx->r19 = ADD32(ctx->r17, 0XC0);
    // 0x8022C458: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C45C: beq         $v1, $v0, L_8022C4C8
    if (ctx->r3 == ctx->r2) {
        // 0x8022C460: nop
    
            goto L_8022C4C8;
    }
    // 0x8022C460: nop

    // 0x8022C464: j           L_8022C6A0
    // 0x8022C468: nop

        goto L_8022C6A0;
    // 0x8022C468: nop

L_8022C46C:
    // 0x8022C46C: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8022C470: lbu         $a0, 0xF($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XF);
    // 0x8022C474: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C478: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022C47C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022C480: sh          $v0, 0xC4($s1)
    MEM_H(0XC4, ctx->r17) = ctx->r2;
    // 0x8022C484: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022C488: andi        $a0, $a0, 0x40
    ctx->r4 = ctx->r4 & 0X40;
    // 0x8022C48C: beq         $a0, $zero, L_8022C4A0
    if (ctx->r4 == 0) {
        // 0x8022C490: sb          $v1, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r3;
            goto L_8022C4A0;
    }
    // 0x8022C490: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x8022C494: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022C498: j           L_8022C4AC
    // 0x8022C49C: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
        goto L_8022C4AC;
    // 0x8022C49C: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
L_8022C4A0:
    // 0x8022C4A0: addiu       $v0, $zero, 0x240
    ctx->r2 = ADD32(0, 0X240);
    // 0x8022C4A4: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022C4A8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022C4AC:
    // 0x8022C4AC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022C4B0: sb          $v0, 0xC60($at)
    MEM_B(0XC60, ctx->r1) = ctx->r2;
    // 0x8022C4B4: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x8022C4B8: sh          $v0, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = ctx->r2;
    // 0x8022C4BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C4C0: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    // 0x8022C4C4: sh          $v0, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r2;
L_8022C4C8:
    // 0x8022C4C8: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x8022C4CC: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022C4D0: beq         $v0, $zero, L_8022C4EC
    if (ctx->r2 == 0) {
        // 0x8022C4D4: nop
    
            goto L_8022C4EC;
    }
    // 0x8022C4D4: nop

    // 0x8022C4D8: lh          $v0, 0x8($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X8);
    // 0x8022C4DC: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022C4E0: addiu       $v1, $v1, 0x840
    ctx->r3 = ADD32(ctx->r3, 0X840);
    // 0x8022C4E4: j           L_8022C4FC
    // 0x8022C4E8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
        goto L_8022C4FC;
    // 0x8022C4E8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
L_8022C4EC:
    // 0x8022C4EC: lh          $v0, 0x8($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X8);
    // 0x8022C4F0: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022C4F4: addiu       $v1, $v1, 0x810
    ctx->r3 = ADD32(ctx->r3, 0X810);
    // 0x8022C4F8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
L_8022C4FC:
    // 0x8022C4FC: addu        $s0, $v0, $v1
    ctx->r16 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C500: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8022C504: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022C508: addiu       $a1, $a1, 0xC50
    ctx->r5 = ADD32(ctx->r5, 0XC50);
    // 0x8022C50C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022C510: sh          $zero, 0xC52($at)
    MEM_H(0XC52, ctx->r1) = 0;
    // 0x8022C514: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x8022C518: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x8022C51C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022C520: sh          $v0, 0xC54($at)
    MEM_H(0XC54, ctx->r1) = ctx->r2;
    // 0x8022C524: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022C528: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022C52C: jal         0x8004F820
    // 0x8022C530: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022C530: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_0:
    // 0x8022C534: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C538: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x8022C53C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C540: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8022C544: sh          $v1, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r3;
    // 0x8022C548: lh          $a3, 0x48($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X48);
    // 0x8022C54C: lhu         $t0, 0x56($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X56);
    // 0x8022C550: sll         $v1, $v0, 19
    ctx->r3 = S32(ctx->r2 << 19);
    // 0x8022C554: srl         $v1, $v1, 20
    ctx->r3 = S32(U32(ctx->r3) >> 20);
    // 0x8022C558: sh          $v1, 0x58($s1)
    MEM_H(0X58, ctx->r17) = ctx->r3;
    // 0x8022C55C: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x8022C560: andi        $t0, $t0, 0xFFF
    ctx->r8 = ctx->r8 & 0XFFF;
    // 0x8022C564: jal         0x8004DA90
    // 0x8022C568: sh          $t0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r8;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022C568: sh          $t0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r8;
    after_1:
    // 0x8022C56C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022C570: lh          $a0, 0x14($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X14);
    // 0x8022C574: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x8022C578: lh          $a1, 0x18($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X18);
    // 0x8022C57C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C580: sra         $a2, $v0, 16
    ctx->r6 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C584: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x8022C588: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022C58C: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x8022C590: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x8022C594: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x8022C598: sltu        $a0, $a0, $a2
    ctx->r4 = ctx->r4 < ctx->r6 ? 1 : 0;
    // 0x8022C59C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C5A0: sra         $a3, $v0, 16
    ctx->r7 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C5A4: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x8022C5A8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022C5AC: beq         $a0, $zero, L_8022C600
    if (ctx->r4 == 0) {
        // 0x8022C5B0: subu        $v0, $a1, $v1
        ctx->r2 = SUB32(ctx->r5, ctx->r3);
            goto L_8022C600;
    }
    // 0x8022C5B0: subu        $v0, $a1, $v1
    ctx->r2 = SUB32(ctx->r5, ctx->r3);
    // 0x8022C5B4: sltu        $v0, $v0, $a3
    ctx->r2 = ctx->r2 < ctx->r7 ? 1 : 0;
    // 0x8022C5B8: beq         $v0, $zero, L_8022C600
    if (ctx->r2 == 0) {
        // 0x8022C5BC: nop
    
            goto L_8022C600;
    }
    // 0x8022C5BC: nop

    // 0x8022C5C0: lh          $v1, 0x8($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X8);
    // 0x8022C5C4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022C5C8: lbu         $v0, 0xC60($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XC60);
    // 0x8022C5CC: bne         $v1, $v0, L_8022C5F4
    if (ctx->r3 != ctx->r2) {
        // 0x8022C5D0: nop
    
            goto L_8022C5F4;
    }
    // 0x8022C5D0: nop

    // 0x8022C5D4: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8022C5D8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022C5DC: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
    // 0x8022C5E0: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x8022C5E4: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    // 0x8022C5E8: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    // 0x8022C5EC: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x8022C5F0: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
L_8022C5F4:
    // 0x8022C5F4: lhu         $v0, 0x8($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X8);
    // 0x8022C5F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C5FC: sh          $v0, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r2;
L_8022C600:
    // 0x8022C600: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022C604: addiu       $a1, $a1, 0xC50
    ctx->r5 = ADD32(ctx->r5, 0XC50);
    // 0x8022C608: lhu         $a0, 0x0($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X0);
    // 0x8022C60C: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8022C610: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8022C614: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x8022C618: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022C61C: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022C620: mflo        $v1
    ctx->r3 = lo;
    // 0x8022C624: sh          $a0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r4;
    // 0x8022C628: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022C62C: lhu         $a0, 0xC54($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XC54);
    // 0x8022C630: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x8022C634: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8022C638: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022C63C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C640: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022C644: mflo        $v0
    ctx->r2 = lo;
    // 0x8022C648: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022C64C: sh          $a0, 0xC54($at)
    MEM_H(0XC54, ctx->r1) = ctx->r4;
    // 0x8022C650: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C654: slti        $v1, $v1, 0x4001
    ctx->r3 = SIGNED(ctx->r3) < 0X4001 ? 1 : 0;
    // 0x8022C658: bne         $v1, $zero, L_8022C680
    if (ctx->r3 != 0) {
        // 0x8022C65C: nop
    
            goto L_8022C680;
    }
    // 0x8022C65C: nop

    // 0x8022C660: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x8022C664: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C668: slti        $v0, $v0, 0x320
    ctx->r2 = SIGNED(ctx->r2) < 0X320 ? 1 : 0;
    // 0x8022C66C: beq         $v0, $zero, L_8022C6A0
    if (ctx->r2 == 0) {
        // 0x8022C670: nop
    
            goto L_8022C6A0;
    }
    // 0x8022C670: nop

    // 0x8022C674: lhu         $v0, 0x4C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4C);
    // 0x8022C678: j           L_8022C69C
    // 0x8022C67C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
        goto L_8022C69C;
    // 0x8022C67C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
L_8022C680:
    // 0x8022C680: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x8022C684: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C688: slti        $v0, $v0, 0x161
    ctx->r2 = SIGNED(ctx->r2) < 0X161 ? 1 : 0;
    // 0x8022C68C: bne         $v0, $zero, L_8022C6A0
    if (ctx->r2 != 0) {
        // 0x8022C690: nop
    
            goto L_8022C6A0;
    }
    // 0x8022C690: nop

    // 0x8022C694: lhu         $v0, 0x4C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4C);
    // 0x8022C698: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
L_8022C69C:
    // 0x8022C69C: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_8022C6A0:
    // 0x8022C6A0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022C6A4: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x8022C6A8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022C6AC: bne         $v0, $zero, L_8022C794
    if (ctx->r2 != 0) {
        // 0x8022C6B0: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8022C794;
    }
    // 0x8022C6B0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022C6B4: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x8022C6B8: lui         $s4, 0x8023
    ctx->r20 = S32(0X8023 << 16);
    // 0x8022C6BC: addiu       $s4, $s4, 0xC58
    ctx->r20 = ADD32(ctx->r20, 0XC58);
    // 0x8022C6C0: lui         $s5, 0x8023
    ctx->r21 = S32(0X8023 << 16);
    // 0x8022C6C4: addiu       $s5, $s5, 0xC40
    ctx->r21 = ADD32(ctx->r21, 0XC40);
L_8022C6C8:
    // 0x8022C6C8: jal         0x8004F144
    // 0x8022C6CC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x8022C6CC: nop

    after_2:
    // 0x8022C6D0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022C6D4: beq         $s0, $zero, L_8022C794
    if (ctx->r16 == 0) {
        // 0x8022C6D8: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_8022C794;
    }
    // 0x8022C6D8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022C6DC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022C6E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C6E4: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x8022C6E8: sb          $s6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r22;
    // 0x8022C6EC: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022C6F0: jal         0x8009A3B4
    // 0x8022C6F4: sb          $s6, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r22;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022C6F4: sb          $s6, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r22;
    after_3:
    // 0x8022C6F8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022C6FC: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022C700: jal         0x8009A3B4
    // 0x8022C704: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022C704: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x8022C708: lhu         $v1, 0x2($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X2);
    // 0x8022C70C: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022C710: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x8022C714: sra         $v0, $v0, 13
    ctx->r2 = S32(SIGNED(ctx->r2) >> 13);
    // 0x8022C718: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x8022C71C: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x8022C720: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C724: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022C728: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C72C: lh          $v1, 0x86A($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X86A);
    // 0x8022C730: lui         $a3, 0x8023
    ctx->r7 = S32(0X8023 << 16);
    // 0x8022C734: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x8022C738: lh          $a3, 0x868($a3)
    ctx->r7 = MEM_H(ctx->r7, 0X868);
    // 0x8022C73C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022C740: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022C744: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C748: lh          $v0, 0x86C($at)
    ctx->r2 = MEM_H(ctx->r1, 0X86C);
    // 0x8022C74C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022C750: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8022C754: jal         0x8004DBA0
    // 0x8022C758: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_5;
    // 0x8022C758: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_5:
    // 0x8022C75C: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x8022C760: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x8022C764: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022C768: lhu         $v0, 0xC5A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XC5A);
    // 0x8022C76C: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x8022C770: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022C774: lhu         $v1, 0xC5C($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XC5C);
    // 0x8022C778: addiu       $v0, $s2, 0x1
    ctx->r2 = ADD32(ctx->r18, 0X1);
    // 0x8022C77C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022C780: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C784: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C788: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8022C78C: bne         $v0, $zero, L_8022C6C8
    if (ctx->r2 != 0) {
        // 0x8022C790: sh          $v1, 0x20($s0)
        MEM_H(0X20, ctx->r16) = ctx->r3;
            goto L_8022C6C8;
    }
    // 0x8022C790: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
L_8022C794:
    // 0x8022C794: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8022C798: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8022C79C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8022C7A0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8022C7A4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8022C7A8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022C7AC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022C7B0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022C7B4: jr          $ra
    // 0x8022C7B8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8022C7B8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8022C7BC: nop

;}
RECOMP_FUNC void func_8022BC70_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BC70: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x8022BC74: addiu       $t1, $t0, 0x348
    ctx->r9 = ADD32(ctx->r8, 0X348);
    // 0x8022BC78: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022BC7C: lhu         $a0, 0x384($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X384);
    // 0x8022BC80: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BC84: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022BC88: addiu       $a1, $a1, 0x7C8
    ctx->r5 = ADD32(ctx->r5, 0X7C8);
    // 0x8022BC8C: lhu         $v1, 0x34A($t0)
    ctx->r3 = MEM_HU(ctx->r8, 0X34A);
    // 0x8022BC90: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8022BC94: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022BC98: addu        $a0, $v0, $a1
    ctx->r4 = ADD32(ctx->r2, ctx->r5);
    // 0x8022BC9C: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x8022BCA0: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
L_8022BCA4:
    // 0x8022BCA4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BCA8: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x8022BCAC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022BCB0: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x8022BCB4: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8022BCB8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BCBC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BCC0: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022BCC4: bne         $v0, $zero, L_8022BCE4
    if (ctx->r2 != 0) {
        // 0x8022BCC8: addiu       $v0, $a2, 0x1
        ctx->r2 = ADD32(ctx->r6, 0X1);
            goto L_8022BCE4;
    }
    // 0x8022BCC8: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    // 0x8022BCCC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022BCD0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BCD4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BCD8: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8022BCDC: bne         $v0, $zero, L_8022BCA4
    if (ctx->r2 != 0) {
        // 0x8022BCE0: sll         $v0, $a2, 16
        ctx->r2 = S32(ctx->r6 << 16);
            goto L_8022BCA4;
    }
    // 0x8022BCE0: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
L_8022BCE4:
    // 0x8022BCE4: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022BCE8: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BCEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BCF0: beq         $v1, $v0, L_8022BD2C
    if (ctx->r3 == ctx->r2) {
        // 0x8022BCF4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022BD2C;
    }
    // 0x8022BCF4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022BCF8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022BCFC: beql        $v0, $zero, L_8022BD14
    if (ctx->r2 == 0) {
        // 0x8022BD00: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022BD14;
    }
    goto skip_0;
    // 0x8022BD00: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022BD04: beql        $v1, $zero, L_8022BD24
    if (ctx->r3 == 0) {
        // 0x8022BD08: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022BD24;
    }
    goto skip_1;
    // 0x8022BD08: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_1:
    // 0x8022BD0C: j           L_8022BD4C
    // 0x8022BD10: nop

        goto L_8022BD4C;
    // 0x8022BD10: nop

L_8022BD14:
    // 0x8022BD14: beql        $v1, $v0, L_8022BD3C
    if (ctx->r3 == ctx->r2) {
        // 0x8022BD18: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022BD3C;
    }
    goto skip_2;
    // 0x8022BD18: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    skip_2:
    // 0x8022BD1C: j           L_8022BD4C
    // 0x8022BD20: nop

        goto L_8022BD4C;
    // 0x8022BD20: nop

L_8022BD24:
    // 0x8022BD24: j           L_8022BD4C
    // 0x8022BD28: sb          $v0, 0x9($t0)
    MEM_B(0X9, ctx->r8) = ctx->r2;
        goto L_8022BD4C;
    // 0x8022BD28: sb          $v0, 0x9($t0)
    MEM_B(0X9, ctx->r8) = ctx->r2;
L_8022BD2C:
    // 0x8022BD2C: sb          $v0, 0x9($t0)
    MEM_B(0X9, ctx->r8) = ctx->r2;
    // 0x8022BD30: lhu         $v0, 0x0($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X0);
    // 0x8022BD34: j           L_8022BD48
    // 0x8022BD38: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
        goto L_8022BD48;
    // 0x8022BD38: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
L_8022BD3C:
    // 0x8022BD3C: sb          $v0, 0x9($t0)
    MEM_B(0X9, ctx->r8) = ctx->r2;
    // 0x8022BD40: lhu         $v0, 0x0($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X0);
    // 0x8022BD44: andi        $v0, $v0, 0xFFBF
    ctx->r2 = ctx->r2 & 0XFFBF;
L_8022BD48:
    // 0x8022BD48: sh          $v0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r2;
L_8022BD4C:
    // 0x8022BD4C: jr          $ra
    // 0x8022BD50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8022BD50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_802293F4_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802293F4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802293F8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802293FC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80229400: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80229404: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80229408: lh          $v0, 0x56($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X56);
    // 0x8022940C: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x80229410: sll         $a2, $a1, 20
    ctx->r6 = S32(ctx->r5 << 20);
    // 0x80229414: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80229418: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022941C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80229420: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80229424: jal         0x8004DC2C
    // 0x80229428: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_8004DC2C_2902C(rdram, ctx);
        goto after_0;
    // 0x80229428: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x8022942C: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x80229430: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x80229434: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80229438: lhu         $v1, 0x49C4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C4);
    // 0x8022943C: lh          $a2, 0x20($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X20);
    // 0x80229440: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80229444: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80229448: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x8022944C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80229450: lhu         $a1, 0x49C8($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X49C8);
    // 0x80229454: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x80229458: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x8022945C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80229460: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80229464: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x80229468: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    // 0x8022946C: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x80229470: slt         $a0, $a0, $s0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80229474: beq         $a0, $zero, L_80229484
    if (ctx->r4 == 0) {
        // 0x80229478: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80229484;
    }
    // 0x80229478: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022947C: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x80229480: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
L_80229484:
    // 0x80229484: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80229488: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022948C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80229490: jr          $ra
    // 0x80229494: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80229494: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80229498: nop

    // 0x8022949C: nop

;}
RECOMP_FUNC void func_80226660_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226660: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226664: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226668: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022666C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226670: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226674: bne         $v0, $zero, L_8022668C
    if (ctx->r2 != 0) {
        // 0x80226678: nop
    
            goto L_8022668C;
    }
    // 0x80226678: nop

    // 0x8022667C: jal         0x80226AEC
    // 0x80226680: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80226680: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_0:
    // 0x80226684: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226688: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022668C:
    // 0x8022668C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226690: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226694: jr          $ra
    // 0x80226698: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226698: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BDA0_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BDA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BDA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BDA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BDAC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022BDB0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022BDB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BDB8: jal         0x8009A3B4
    // 0x8022BDBC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022BDBC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022BDC0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022BDC4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022BDC8: jal         0x8009A3B4
    // 0x8022BDCC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022BDCC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022BDD0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022BDD4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022BDD8: jal         0x8009A3B4
    // 0x8022BDDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022BDDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022BDE0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022BDE4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BDE8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022BDEC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BDF0: lw          $v0, 0x7E0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7E0);
    // 0x8022BDF4: jalr        $v0
    // 0x8022BDF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022BDF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022BDFC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022BE00: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022BE04: beq         $v0, $zero, L_8022BE1C
    if (ctx->r2 == 0) {
        // 0x8022BE08: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022BE1C;
    }
    // 0x8022BE08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BE0C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022BE10: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022BE14: jal         0x8003B564
    // 0x8022BE18: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x8022BE18: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8022BE1C:
    // 0x8022BE1C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BE20: beq         $v0, $zero, L_8022BE38
    if (ctx->r2 == 0) {
        // 0x8022BE24: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8022BE38;
    }
    // 0x8022BE24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BE28: jal         0x8005044C
    // 0x8022BE2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8022BE2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022BE30: j           L_8022BE3C
    // 0x8022BE34: nop

        goto L_8022BE3C;
    // 0x8022BE34: nop

L_8022BE38:
    // 0x8022BE38: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022BE3C:
    // 0x8022BE3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BE40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BE44: jr          $ra
    // 0x8022BE48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BE48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A8CC_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A8CC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022A8D0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022A8D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A8D8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022A8DC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022A8E0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022A8E4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A8E8: lui         $s2, 0x8021
    ctx->r18 = S32(0X8021 << 16);
    // 0x8022A8EC: addiu       $s2, $s2, 0x9D0
    ctx->r18 = ADD32(ctx->r18, 0X9D0);
    // 0x8022A8F0: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022A8F4: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022A8F8: sltiu       $v0, $v0, 0x15
    ctx->r2 = ctx->r2 < 0X15 ? 1 : 0;
    // 0x8022A8FC: bne         $v0, $zero, L_8022A934
    if (ctx->r2 != 0) {
        // 0x8022A900: nop
    
            goto L_8022A934;
    }
    // 0x8022A900: nop

    // 0x8022A904: jal         0x8006072C
    // 0x8022A908: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_0;
    // 0x8022A908: nop

    after_0:
    // 0x8022A90C: beq         $v0, $zero, L_8022A934
    if (ctx->r2 == 0) {
        // 0x8022A910: nop
    
            goto L_8022A934;
    }
    // 0x8022A910: nop

    // 0x8022A914: jal         0x8006036C
    // 0x8022A918: addiu       $a0, $zero, 0x618
    ctx->r4 = ADD32(0, 0X618);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x8022A918: addiu       $a0, $zero, 0x618
    ctx->r4 = ADD32(0, 0X618);
    after_1:
    // 0x8022A91C: jal         0x8006036C
    // 0x8022A920: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x8022A920: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_2:
    // 0x8022A924: jal         0x80061798
    // 0x8022A928: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_3;
    // 0x8022A928: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x8022A92C: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x8022A930: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022A934:
    // 0x8022A934: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A938: sltiu       $v0, $v1, 0x1E
    ctx->r2 = ctx->r3 < 0X1E ? 1 : 0;
    // 0x8022A93C: beq         $v0, $zero, L_8022AC24
    if (ctx->r2 == 0) {
        // 0x8022A940: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022AC24;
    }
    // 0x8022A940: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022A944: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022A948: addu        $at, $at, $v0
    gpr jr_addend_8022A950 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A94C: lw          $v0, 0xAB0($at)
    ctx->r2 = ADD32(ctx->r1, 0XAB0);
    // 0x8022A950: jr          $v0
    // 0x8022A954: nop

    switch (jr_addend_8022A950 >> 2) {
        case 0: goto L_8022A958; break;
        case 1: goto L_8022A968; break;
        case 2: goto L_8022AC24; break;
        case 3: goto L_8022AC24; break;
        case 4: goto L_8022AC24; break;
        case 5: goto L_8022AC24; break;
        case 6: goto L_8022AC24; break;
        case 7: goto L_8022AC24; break;
        case 8: goto L_8022AC24; break;
        case 9: goto L_8022AC24; break;
        case 10: goto L_8022AC24; break;
        case 11: goto L_8022AC24; break;
        case 12: goto L_8022AC24; break;
        case 13: goto L_8022AC24; break;
        case 14: goto L_8022AC24; break;
        case 15: goto L_8022AC24; break;
        case 16: goto L_8022AC24; break;
        case 17: goto L_8022AC24; break;
        case 18: goto L_8022AC24; break;
        case 19: goto L_8022AC24; break;
        case 20: goto L_8022A998; break;
        case 21: goto L_8022AA04; break;
        case 22: goto L_8022AA44; break;
        case 23: goto L_8022AA64; break;
        case 24: goto L_8022AAA4; break;
        case 25: goto L_8022AAB0; break;
        case 26: goto L_8022AB08; break;
        case 27: goto L_8022AB48; break;
        case 28: goto L_8022ABC4; break;
        case 29: goto L_8022ABEC; break;
        default: switch_error(__func__, 0x8022A950, 0x80230AB0);
    }
    // 0x8022A954: nop

L_8022A958:
    // 0x8022A958: jal         0x8022AC3C
    // 0x8022A95C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022AC3C_ovl9(rdram, ctx);
        goto after_4;
    // 0x8022A95C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022A960: j           L_8022ABDC
    // 0x8022A964: nop

        goto L_8022ABDC;
    // 0x8022A964: nop

L_8022A968:
    // 0x8022A968: jal         0x8006033C
    // 0x8022A96C: addiu       $a0, $zero, 0x60F
    ctx->r4 = ADD32(0, 0X60F);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x8022A96C: addiu       $a0, $zero, 0x60F
    ctx->r4 = ADD32(0, 0X60F);
    after_5:
    // 0x8022A970: beq         $v0, $zero, L_8022AC24
    if (ctx->r2 == 0) {
        // 0x8022A974: addiu       $v0, $zero, -0xCB8
        ctx->r2 = ADD32(0, -0XCB8);
            goto L_8022AC24;
    }
    // 0x8022A974: addiu       $v0, $zero, -0xCB8
    ctx->r2 = ADD32(0, -0XCB8);
    // 0x8022A978: sh          $v0, 0xC4($s0)
    MEM_H(0XC4, ctx->r16) = ctx->r2;
    // 0x8022A97C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A980: sh          $v0, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r2;
    // 0x8022A984: addiu       $v0, $zero, 0x111D
    ctx->r2 = ADD32(0, 0X111D);
    // 0x8022A988: sh          $v0, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r2;
    // 0x8022A98C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022A990: j           L_8022AC24
    // 0x8022A994: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022AC24;
    // 0x8022A994: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022A998:
    // 0x8022A998: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022A99C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A9A0: jal         0x8005F6B4
    // 0x8022A9A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_6;
    // 0x8022A9A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x8022A9A8: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022A9AC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022A9B0: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022A9B4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022A9B8: lui         $v0, 0xF218
    ctx->r2 = S32(0XF218 << 16);
    // 0x8022A9BC: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x8022A9C0: lui         $v0, 0xFF38
    ctx->r2 = S32(0XFF38 << 16);
    // 0x8022A9C4: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8022A9C8: lui         $v0, 0xBDB
    ctx->r2 = S32(0XBDB << 16);
    // 0x8022A9CC: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8022A9D0: lui         $v0, 0x180
    ctx->r2 = S32(0X180 << 16);
    // 0x8022A9D4: sw          $v0, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r2;
    // 0x8022A9D8: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x8022A9DC: sw          $zero, 0x40($s2)
    MEM_W(0X40, ctx->r18) = 0;
    // 0x8022A9E0: jal         0x8004F820
    // 0x8022A9E4: sw          $v0, 0x48($s2)
    MEM_W(0X48, ctx->r18) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_7;
    // 0x8022A9E4: sw          $v0, 0x48($s2)
    MEM_W(0X48, ctx->r18) = ctx->r2;
    after_7:
    // 0x8022A9E8: lhu         $v1, 0x442($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X442);
    // 0x8022A9EC: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x8022A9F0: sb          $a0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r4;
    // 0x8022A9F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A9F8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A9FC: j           L_8022ABDC
    // 0x8022AA00: sh          $v1, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r3;
        goto L_8022ABDC;
    // 0x8022AA00: sh          $v1, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r3;
L_8022AA04:
    // 0x8022AA04: jal         0x8003516C
    // 0x8022AA08: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_8;
    // 0x8022AA08: nop

    after_8:
    // 0x8022AA0C: bne         $v0, $zero, L_8022AC24
    if (ctx->r2 != 0) {
        // 0x8022AA10: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022AC24;
    }
    // 0x8022AA10: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022AA14: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022AA18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AA1C: jal         0x800610AC
    // 0x8022AA20: addiu       $a3, $zero, 0x48
    ctx->r7 = ADD32(0, 0X48);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_9;
    // 0x8022AA20: addiu       $a3, $zero, 0x48
    ctx->r7 = ADD32(0, 0X48);
    after_9:
    // 0x8022AA24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AA28: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022AA2C: jal         0x80050294
    // 0x8022AA30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_10;
    // 0x8022AA30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x8022AA34: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022AA38: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022AA3C: j           L_8022ABE0
    // 0x8022AA40: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
        goto L_8022ABE0;
    // 0x8022AA40: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_8022AA44:
    // 0x8022AA44: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022AA48: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022AA4C: bne         $v0, $zero, L_8022AC24
    if (ctx->r2 != 0) {
        // 0x8022AA50: nop
    
            goto L_8022AC24;
    }
    // 0x8022AA50: nop

    // 0x8022AA54: jal         0x8006036C
    // 0x8022AA58: addiu       $a0, $zero, 0x611
    ctx->r4 = ADD32(0, 0X611);
    func_8006036C_3B76C(rdram, ctx);
        goto after_11;
    // 0x8022AA58: addiu       $a0, $zero, 0x611
    ctx->r4 = ADD32(0, 0X611);
    after_11:
    // 0x8022AA5C: j           L_8022ABDC
    // 0x8022AA60: nop

        goto L_8022ABDC;
    // 0x8022AA60: nop

L_8022AA64:
    // 0x8022AA64: jal         0x8006033C
    // 0x8022AA68: addiu       $a0, $zero, 0x615
    ctx->r4 = ADD32(0, 0X615);
    func_8006033C_3B73C(rdram, ctx);
        goto after_12;
    // 0x8022AA68: addiu       $a0, $zero, 0x615
    ctx->r4 = ADD32(0, 0X615);
    after_12:
    // 0x8022AA6C: beq         $v0, $zero, L_8022AC24
    if (ctx->r2 == 0) {
        // 0x8022AA70: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022AC24;
    }
    // 0x8022AA70: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022AA74: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022AA78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AA7C: jal         0x800610AC
    // 0x8022AA80: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_13;
    // 0x8022AA80: addiu       $a3, $zero, 0x4D
    ctx->r7 = ADD32(0, 0X4D);
    after_13:
    // 0x8022AA84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AA88: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022AA8C: jal         0x80050294
    // 0x8022AA90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_14;
    // 0x8022AA90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_14:
    // 0x8022AA94: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022AA98: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022AA9C: j           L_8022ABE0
    // 0x8022AAA0: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
        goto L_8022ABE0;
    // 0x8022AAA0: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_8022AAA4:
    // 0x8022AAA4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022AAA8: j           L_8022ABD4
    // 0x8022AAAC: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
        goto L_8022ABD4;
    // 0x8022AAAC: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
L_8022AAB0:
    // 0x8022AAB0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022AAB4: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022AAB8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022AABC: jal         0x8004F820
    // 0x8022AAC0: addiu       $a1, $s0, 0xC4
    ctx->r5 = ADD32(ctx->r16, 0XC4);
    func_8004F820_2AC20(rdram, ctx);
        goto after_15;
    // 0x8022AAC0: addiu       $a1, $s0, 0xC4
    ctx->r5 = ADD32(ctx->r16, 0XC4);
    after_15:
    // 0x8022AAC4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022AAC8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022AACC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022AAD0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AAD4: bne         $v0, $zero, L_8022AC24
    if (ctx->r2 != 0) {
        // 0x8022AAD8: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022AC24;
    }
    // 0x8022AAD8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022AADC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022AAE0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x8022AAE4: addiu       $v1, $zero, 0x140
    ctx->r3 = ADD32(0, 0X140);
    // 0x8022AAE8: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022AAEC: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x8022AAF0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022AAF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AAF8: jal         0x8006036C
    // 0x8022AAFC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_16;
    // 0x8022AAFC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_16:
    // 0x8022AB00: j           L_8022AC24
    // 0x8022AB04: nop

        goto L_8022AC24;
    // 0x8022AB04: nop

L_8022AB08:
    // 0x8022AB08: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022AB0C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022AB10: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022AB14: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022AB18: bne         $v0, $zero, L_8022AC24
    if (ctx->r2 != 0) {
        // 0x8022AB1C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022AC24;
    }
    // 0x8022AB1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AB20: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022AB24: jal         0x80050294
    // 0x8022AB28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_17;
    // 0x8022AB28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_17:
    // 0x8022AB2C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022AB30: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022AB34: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022AB38: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022AB3C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022AB40: j           L_8022AC24
    // 0x8022AB44: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_8022AC24;
    // 0x8022AB44: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_8022AB48:
    // 0x8022AB48: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022AB4C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022AB50: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022AB54: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022AB58: bne         $v0, $zero, L_8022AB84
    if (ctx->r2 != 0) {
        // 0x8022AB5C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022AB84;
    }
    // 0x8022AB5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AB60: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022AB64: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x8022AB68: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x8022AB6C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022AB70: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022AB74: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022AB78: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022AB7C: j           L_8022AC24
    // 0x8022AB80: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
        goto L_8022AC24;
    // 0x8022AB80: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
L_8022AB84:
    // 0x8022AB84: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022AB88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AB8C: jal         0x8004DA90
    // 0x8022AB90: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_18;
    // 0x8022AB90: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_18:
    // 0x8022AB94: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x8022AB98: xori        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 ^ 0X3;
    // 0x8022AB9C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022ABA0: xori        $v0, $v0, 0xA
    ctx->r2 = ctx->r2 ^ 0XA;
    // 0x8022ABA4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022ABA8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022ABAC: beq         $v1, $zero, L_8022AC24
    if (ctx->r3 == 0) {
        // 0x8022ABB0: addiu       $a0, $zero, 0x10C
        ctx->r4 = ADD32(0, 0X10C);
            goto L_8022AC24;
    }
    // 0x8022ABB0: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    // 0x8022ABB4: jal         0x8002A33C
    // 0x8022ABB8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_19;
    // 0x8022ABB8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_19:
    // 0x8022ABBC: j           L_8022AC24
    // 0x8022ABC0: nop

        goto L_8022AC24;
    // 0x8022ABC0: nop

L_8022ABC4:
    // 0x8022ABC4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022ABC8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022ABCC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022ABD0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
L_8022ABD4:
    // 0x8022ABD4: bne         $v0, $zero, L_8022AC24
    if (ctx->r2 != 0) {
        // 0x8022ABD8: nop
    
            goto L_8022AC24;
    }
    // 0x8022ABD8: nop

L_8022ABDC:
    // 0x8022ABDC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
L_8022ABE0:
    // 0x8022ABE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022ABE4: j           L_8022AC24
    // 0x8022ABE8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022AC24;
    // 0x8022ABE8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022ABEC:
    // 0x8022ABEC: jal         0x8003516C
    // 0x8022ABF0: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_20;
    // 0x8022ABF0: nop

    after_20:
    // 0x8022ABF4: bne         $v0, $zero, L_8022AC24
    if (ctx->r2 != 0) {
        // 0x8022ABF8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022AC24;
    }
    // 0x8022ABF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022ABFC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AC00: jal         0x80034844
    // 0x8022AC04: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_21;
    // 0x8022AC04: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_21:
    // 0x8022AC08: jal         0x80070050
    // 0x8022AC0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_22;
    // 0x8022AC0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_22:
    // 0x8022AC10: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022AC14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AC18: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022AC1C: jal         0x8004F418
    // 0x8022AC20: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004F418_2A818(rdram, ctx);
        goto after_23;
    // 0x8022AC20: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_23:
L_8022AC24:
    // 0x8022AC24: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022AC28: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022AC2C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022AC30: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022AC34: jr          $ra
    // 0x8022AC38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022AC38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80228E04_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228E04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228E08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228E0C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228E10: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80228E14: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80228E18: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228E1C: jal         0x8003516C
    // 0x80228E20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003516C_1056C(rdram, ctx);
        goto after_0;
    // 0x80228E20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80228E24: bne         $v0, $zero, L_80228E48
    if (ctx->r2 != 0) {
        // 0x80228E28: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80228E48;
    }
    // 0x80228E28: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228E2C: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80228E30: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80228E34: jal         0x800610AC
    // 0x80228E38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x80228E38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80228E3C: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80228E40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228E44: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_80228E48:
    // 0x80228E48: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228E4C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80228E50: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228E54: jal         0x8004F820
    // 0x80228E58: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80228E58: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x80228E5C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228E60: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80228E64: sb          $a0, 0x11B($s0)
    MEM_B(0X11B, ctx->r16) = ctx->r4;
    // 0x80228E68: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228E6C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228E70: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80228E74: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228E78: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228E7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228E80: jr          $ra
    // 0x80228E84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228E84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229A3C_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229A3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229A40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229A44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229A48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229A4C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80229A50: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80229A54: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80229A58: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80229A5C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80229A60: jal         0x8004D5D4
    // 0x80229A64: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80229A64: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80229A68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229A6C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80229A70: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80229A74: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80229A78: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80229A7C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80229A80: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80229A84: jal         0x8003E934
    // 0x80229A88: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80229A88: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x80229A8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229A90: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229A94: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229A98: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229A9C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80229AA0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80229AA4: addiu       $v0, $v0, 0x6A8
    ctx->r2 = ADD32(ctx->r2, 0X6A8);
    // 0x80229AA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229AAC: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80229AB0: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80229AB4: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80229AB8: jal         0x80050294
    // 0x80229ABC: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80229ABC: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    after_2:
    // 0x80229AC0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80229AC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229AC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229ACC: jr          $ra
    // 0x80229AD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229AD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AE34_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AE34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AE38: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AE3C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AE40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AE44: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022AE48: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022AE4C: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022AE50: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022AE54: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022AE58: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022AE5C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022AE60: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8022AE64: andi        $v0, $v0, 0xE00
    ctx->r2 = ctx->r2 & 0XE00;
    // 0x8022AE68: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x8022AE6C: jal         0x8004D5D4
    // 0x8022AE70: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022AE70: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022AE74: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    // 0x8022AE78: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AE7C: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x8022AE80: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022AE84: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022AE88: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022AE8C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022AE90: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022AE94: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022AE98: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x8022AE9C: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022AEA0: jal         0x800540BC
    // 0x8022AEA4: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x8022AEA4: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    after_1:
    // 0x8022AEA8: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022AEAC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022AEB0: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022AEB4: sh          $zero, 0x384($s0)
    MEM_H(0X384, ctx->r16) = 0;
    // 0x8022AEB8: sh          $zero, 0x386($s0)
    MEM_H(0X386, ctx->r16) = 0;
    // 0x8022AEBC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AEC0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022AEC4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022AEC8: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8022AECC: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x8022AED0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022AED4: addiu       $v0, $v0, 0x790
    ctx->r2 = ADD32(ctx->r2, 0X790);
    // 0x8022AED8: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022AEDC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022AEE0: addiu       $v0, $v0, 0x79C
    ctx->r2 = ADD32(ctx->r2, 0X79C);
    // 0x8022AEE4: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8022AEE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AEEC: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x8022AEF0: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x8022AEF4: beq         $a0, $v0, L_8022AF40
    if (ctx->r4 == ctx->r2) {
        // 0x8022AEF8: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8022AF40;
    }
    // 0x8022AEF8: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8022AEFC: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8022AF00: beql        $v0, $zero, L_8022AF18
    if (ctx->r2 == 0) {
        // 0x8022AF04: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022AF18;
    }
    goto skip_0;
    // 0x8022AF04: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022AF08: beq         $a0, $zero, L_8022AF28
    if (ctx->r4 == 0) {
        // 0x8022AF0C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022AF28;
    }
    // 0x8022AF0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AF10: j           L_8022AF80
    // 0x8022AF14: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
        goto L_8022AF80;
    // 0x8022AF14: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
L_8022AF18:
    // 0x8022AF18: beq         $a0, $v0, L_8022AF5C
    if (ctx->r4 == ctx->r2) {
        // 0x8022AF1C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022AF5C;
    }
    // 0x8022AF1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AF20: j           L_8022AF80
    // 0x8022AF24: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
        goto L_8022AF80;
    // 0x8022AF24: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
L_8022AF28:
    // 0x8022AF28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022AF2C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AF30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AF34: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022AF38: j           L_8022AF70
    // 0x8022AF3C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022AF70;
    // 0x8022AF3C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022AF40:
    // 0x8022AF40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AF44: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AF48: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AF4C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022AF50: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022AF54: j           L_8022AF74
    // 0x8022AF58: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_8022AF74;
    // 0x8022AF58: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022AF5C:
    // 0x8022AF5C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AF60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AF64: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022AF68: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022AF6C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022AF70:
    // 0x8022AF70: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022AF74:
    // 0x8022AF74: jal         0x80050294
    // 0x8022AF78: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022AF78: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_2:
    // 0x8022AF7C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
L_8022AF80:
    // 0x8022AF80: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022AF84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AF88: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AF8C: jr          $ra
    // 0x8022AF90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AF90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AC3C_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AC3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AC40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AC44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AC48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AC4C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022AC50: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022AC54: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022AC58: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022AC5C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022AC60: jal         0x8004D5D4
    // 0x8022AC64: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022AC64: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022AC68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AC6C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022AC70: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022AC74: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022AC78: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022AC7C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022AC80: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022AC84: jal         0x8003E934
    // 0x8022AC88: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022AC88: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x8022AC8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AC90: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AC94: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022AC98: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AC9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022ACA0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022ACA4: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022ACA8: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022ACAC: jal         0x80050294
    // 0x8022ACB0: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022ACB0: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    after_2:
    // 0x8022ACB4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022ACB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022ACBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022ACC0: jr          $ra
    // 0x8022ACC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022ACC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022ACC8: nop

    // 0x8022ACCC: nop

;}
RECOMP_FUNC void func_8022612C_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022612C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226130: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226134: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226138: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022613C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226140: bne         $v0, $zero, L_80226158
    if (ctx->r2 != 0) {
        // 0x80226144: nop
    
            goto L_80226158;
    }
    // 0x80226144: nop

    // 0x80226148: jal         0x80226AEC
    // 0x8022614C: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x8022614C: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_0:
    // 0x80226150: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226154: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226158:
    // 0x80226158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022615C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226160: jr          $ra
    // 0x80226164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022621C_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022621C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226220: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226224: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226228: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022622C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226230: bne         $v0, $zero, L_80226248
    if (ctx->r2 != 0) {
        // 0x80226234: nop
    
            goto L_80226248;
    }
    // 0x80226234: nop

    // 0x80226238: jal         0x80226AEC
    // 0x8022623C: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x8022623C: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_0:
    // 0x80226240: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226244: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226248:
    // 0x80226248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022624C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226250: jr          $ra
    // 0x80226254: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226254: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802278DC_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802278DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802278E0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802278E4: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802278E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802278EC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802278F0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802278F4: lw          $v0, 0x568($at)
    ctx->r2 = MEM_W(ctx->r1, 0X568);
    // 0x802278F8: jalr        $v0
    // 0x802278FC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802278FC: nop

    after_0:
    // 0x80227900: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227904: jr          $ra
    // 0x80227908: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227908: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022925C_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022925C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80229260: lw          $a1, 0x4B34($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4B34);
    // 0x80229264: bne         $a1, $a0, L_802292B8
    if (ctx->r5 != ctx->r4) {
        // 0x80229268: addiu       $a2, $a0, 0x348
        ctx->r6 = ADD32(ctx->r4, 0X348);
            goto L_802292B8;
    }
    // 0x80229268: addiu       $a2, $a0, 0x348
    ctx->r6 = ADD32(ctx->r4, 0X348);
    // 0x8022926C: lbu         $v1, 0x2($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X2);
    // 0x80229270: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x80229274: bne         $v1, $v0, L_80229284
    if (ctx->r3 != ctx->r2) {
        // 0x80229278: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_80229284;
    }
    // 0x80229278: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022927C: j           L_802292A0
    // 0x80229280: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_802292A0;
    // 0x80229280: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80229284:
    // 0x80229284: bne         $v1, $v0, L_80229294
    if (ctx->r3 != ctx->r2) {
        // 0x80229288: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_80229294;
    }
    // 0x80229288: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022928C: j           L_802292A0
    // 0x80229290: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_802292A0;
    // 0x80229290: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80229294:
    // 0x80229294: bne         $v1, $v0, L_802292A0
    if (ctx->r3 != ctx->r2) {
        // 0x80229298: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802292A0;
    }
    // 0x80229298: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022929C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_802292A0:
    // 0x802292A0: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x802292A4: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x802292A8: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x802292AC: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x802292B0: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x802292B4: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_802292B8:
    // 0x802292B8: jr          $ra
    // 0x802292BC: nop

    TRACE_RETURN()
    return;
    // 0x802292BC: nop

;}
RECOMP_FUNC void func_8022DDE0_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DDE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DDE4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022DDE8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022DDEC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DDF0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022DDF4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DDF8: lw          $v0, 0x9D4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X9D4);
    // 0x8022DDFC: jalr        $v0
    // 0x8022DE00: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022DE00: nop

    after_0:
    // 0x8022DE04: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022DE08: jr          $ra
    // 0x8022DE0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DE0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226168_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226168: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022616C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226170: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226178: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022617C: bne         $v0, $zero, L_80226194
    if (ctx->r2 != 0) {
        // 0x80226180: nop
    
            goto L_80226194;
    }
    // 0x80226180: nop

    // 0x80226184: jal         0x80226AEC
    // 0x80226188: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80226188: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_0:
    // 0x8022618C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226190: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226194:
    // 0x80226194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226198: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022619C: jr          $ra
    // 0x802261A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802261A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D19C_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D19C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D1A0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D1A4: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8022D1A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D1AC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D1B0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D1B4: lw          $v0, 0x958($at)
    ctx->r2 = MEM_W(ctx->r1, 0X958);
    // 0x8022D1B8: jalr        $v0
    // 0x8022D1BC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022D1BC: nop

    after_0:
    // 0x8022D1C0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D1C4: jr          $ra
    // 0x8022D1C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D1C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802254A0_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802254A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802254A4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802254A8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802254AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802254B0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802254B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802254B8: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x802254BC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802254C0: beq         $v1, $v0, L_80225698
    if (ctx->r3 == ctx->r2) {
        // 0x802254C4: slti        $v0, $v1, 0xC
        ctx->r2 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
            goto L_80225698;
    }
    // 0x802254C4: slti        $v0, $v1, 0xC
    ctx->r2 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
    // 0x802254C8: beql        $v0, $zero, L_802254E8
    if (ctx->r2 == 0) {
        // 0x802254CC: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_802254E8;
    }
    goto skip_0;
    // 0x802254CC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    skip_0:
    // 0x802254D0: beq         $v1, $zero, L_802254F8
    if (ctx->r3 == 0) {
        // 0x802254D4: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_802254F8;
    }
    // 0x802254D4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802254D8: beq         $v1, $v0, L_80225668
    if (ctx->r3 == ctx->r2) {
        // 0x802254DC: nop
    
            goto L_80225668;
    }
    // 0x802254DC: nop

    // 0x802254E0: j           L_80225750
    // 0x802254E4: nop

        goto L_80225750;
    // 0x802254E4: nop

L_802254E8:
    // 0x802254E8: beq         $v1, $v0, L_802256F0
    if (ctx->r3 == ctx->r2) {
        // 0x802254EC: nop
    
            goto L_802256F0;
    }
    // 0x802254EC: nop

    // 0x802254F0: j           L_80225750
    // 0x802254F4: nop

        goto L_80225750;
    // 0x802254F4: nop

L_802254F8:
    // 0x802254F8: jal         0x8006036C
    // 0x802254FC: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x802254FC: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_0:
    // 0x80225500: jal         0x80060590
    // 0x80225504: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_80060590_3B990(rdram, ctx);
        goto after_1;
    // 0x80225504: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_1:
    // 0x80225508: jal         0x8006033C
    // 0x8022550C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022550C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_2:
    // 0x80225510: beq         $v0, $zero, L_80225540
    if (ctx->r2 == 0) {
        // 0x80225514: nop
    
            goto L_80225540;
    }
    // 0x80225514: nop

    // 0x80225518: jal         0x8006036C
    // 0x8022551C: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x8022551C: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_3:
    // 0x80225520: jal         0x8006036C
    // 0x80225524: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80225524: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    after_4:
    // 0x80225528: jal         0x8006036C
    // 0x8022552C: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x8022552C: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    after_5:
    // 0x80225530: jal         0x8006036C
    // 0x80225534: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x80225534: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    after_6:
    // 0x80225538: jal         0x8006036C
    // 0x8022553C: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x8022553C: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    after_7:
L_80225540:
    // 0x80225540: jal         0x8006033C
    // 0x80225544: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_8006033C_3B73C(rdram, ctx);
        goto after_8;
    // 0x80225544: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_8:
    // 0x80225548: beq         $v0, $zero, L_80225570
    if (ctx->r2 == 0) {
        // 0x8022554C: nop
    
            goto L_80225570;
    }
    // 0x8022554C: nop

    // 0x80225550: jal         0x80226AEC
    // 0x80225554: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_9;
    // 0x80225554: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_9:
    // 0x80225558: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022555C: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
    // 0x80225560: jal         0x80226D0C
    // 0x80225564: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80226D0C_ovl9(rdram, ctx);
        goto after_10;
    // 0x80225564: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
    // 0x80225568: j           L_80225750
    // 0x8022556C: nop

        goto L_80225750;
    // 0x8022556C: nop

L_80225570:
    // 0x80225570: jal         0x8006033C
    // 0x80225574: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_8006033C_3B73C(rdram, ctx);
        goto after_11;
    // 0x80225574: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_11:
    // 0x80225578: bne         $v0, $zero, L_80225740
    if (ctx->r2 != 0) {
        // 0x8022557C: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80225740;
    }
    // 0x8022557C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80225580: jal         0x8006033C
    // 0x80225584: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8006033C_3B73C(rdram, ctx);
        goto after_12;
    // 0x80225584: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_12:
    // 0x80225588: bne         $v0, $zero, L_80225740
    if (ctx->r2 != 0) {
        // 0x8022558C: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_80225740;
    }
    // 0x8022558C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80225590: jal         0x8006033C
    // 0x80225594: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_13;
    // 0x80225594: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_13:
    // 0x80225598: bne         $v0, $zero, L_80225740
    if (ctx->r2 != 0) {
        // 0x8022559C: addiu       $a0, $zero, 0x21
        ctx->r4 = ADD32(0, 0X21);
            goto L_80225740;
    }
    // 0x8022559C: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    // 0x802255A0: jal         0x8006033C
    // 0x802255A4: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_8006033C_3B73C(rdram, ctx);
        goto after_14;
    // 0x802255A4: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_14:
    // 0x802255A8: beq         $v0, $zero, L_802255D0
    if (ctx->r2 == 0) {
        // 0x802255AC: nop
    
            goto L_802255D0;
    }
    // 0x802255AC: nop

    // 0x802255B0: jal         0x80226AEC
    // 0x802255B4: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_15;
    // 0x802255B4: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_15:
    // 0x802255B8: jal         0x80226D0C
    // 0x802255BC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80226D0C_ovl9(rdram, ctx);
        goto after_16;
    // 0x802255BC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_16:
    // 0x802255C0: jal         0x80226D0C
    // 0x802255C4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80226D0C_ovl9(rdram, ctx);
        goto after_17;
    // 0x802255C4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_17:
    // 0x802255C8: j           L_8022574C
    // 0x802255CC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_8022574C;
    // 0x802255CC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802255D0:
    // 0x802255D0: jal         0x8006033C
    // 0x802255D4: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    func_8006033C_3B73C(rdram, ctx);
        goto after_18;
    // 0x802255D4: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    after_18:
    // 0x802255D8: beq         $v0, $zero, L_80225650
    if (ctx->r2 == 0) {
        // 0x802255DC: nop
    
            goto L_80225650;
    }
    // 0x802255DC: nop

    // 0x802255E0: jal         0x80226AEC
    // 0x802255E4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_19;
    // 0x802255E4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_19:
    // 0x802255E8: jal         0x8006033C
    // 0x802255EC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_8006033C_3B73C(rdram, ctx);
        goto after_20;
    // 0x802255EC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_20:
    // 0x802255F0: bnel        $v0, $zero, L_8022574C
    if (ctx->r2 != 0) {
        // 0x802255F4: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022574C;
    }
    goto skip_1;
    // 0x802255F4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    skip_1:
    // 0x802255F8: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x802255FC: addiu       $s1, $s1, 0x700
    ctx->r17 = ADD32(ctx->r17, 0X700);
    // 0x80225600: jal         0x8005FB30
    // 0x80225604: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_21;
    // 0x80225604: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_21:
    // 0x80225608: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022560C: jal         0x8005FB30
    // 0x80225610: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_22;
    // 0x80225610: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_22:
    // 0x80225614: addiu       $a0, $v0, 0xC4
    ctx->r4 = ADD32(ctx->r2, 0XC4);
    // 0x80225618: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8022561C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80225620: jal         0x8009A3B4
    // 0x80225624: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_23;
    // 0x80225624: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_23:
    // 0x80225628: jal         0x8005FB30
    // 0x8022562C: addiu       $a0, $s1, 0x28
    ctx->r4 = ADD32(ctx->r17, 0X28);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_24;
    // 0x8022562C: addiu       $a0, $s1, 0x28
    ctx->r4 = ADD32(ctx->r17, 0X28);
    after_24:
    // 0x80225630: addiu       $a0, $v0, 0xC4
    ctx->r4 = ADD32(ctx->r2, 0XC4);
    // 0x80225634: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80225638: jal         0x8009A3B4
    // 0x8022563C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_25;
    // 0x8022563C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_25:
    // 0x80225640: jal         0x8005FB30
    // 0x80225644: addiu       $a0, $s1, 0x3C
    ctx->r4 = ADD32(ctx->r17, 0X3C);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_26;
    // 0x80225644: addiu       $a0, $s1, 0x3C
    ctx->r4 = ADD32(ctx->r17, 0X3C);
    after_26:
    // 0x80225648: j           L_8022574C
    // 0x8022564C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_8022574C;
    // 0x8022564C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80225650:
    // 0x80225650: jal         0x8006033C
    // 0x80225654: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_8006033C_3B73C(rdram, ctx);
        goto after_27;
    // 0x80225654: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_27:
    // 0x80225658: beq         $v0, $zero, L_80225740
    if (ctx->r2 == 0) {
        // 0x8022565C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80225740;
    }
    // 0x8022565C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225660: j           L_80225740
    // 0x80225664: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_80225740;
    // 0x80225664: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80225668:
    // 0x80225668: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022566C: lh          $v0, 0x49C8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C8);
    // 0x80225670: slti        $v0, $v0, 0xE00
    ctx->r2 = SIGNED(ctx->r2) < 0XE00 ? 1 : 0;
    // 0x80225674: beq         $v0, $zero, L_80225750
    if (ctx->r2 == 0) {
        // 0x80225678: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80225750;
    }
    // 0x80225678: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022567C: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
    // 0x80225680: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225684: lbu         $v0, 0x49B9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X49B9);
    // 0x80225688: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x8022568C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80225690: j           L_80225750
    // 0x80225694: sb          $v0, 0x5($s2)
    MEM_B(0X5, ctx->r18) = ctx->r2;
        goto L_80225750;
    // 0x80225694: sb          $v0, 0x5($s2)
    MEM_B(0X5, ctx->r18) = ctx->r2;
L_80225698:
    // 0x80225698: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022569C: jal         0x8006FF84
    // 0x802256A0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_28;
    // 0x802256A0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_28:
    // 0x802256A4: beq         $v0, $zero, L_80225750
    if (ctx->r2 == 0) {
        // 0x802256A8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80225750;
    }
    // 0x802256A8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802256AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256B0: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x802256B4: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x802256B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256BC: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x802256C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256C4: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x802256C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256CC: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
    // 0x802256D0: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x802256D4: bne         $v0, $zero, L_802256E0
    if (ctx->r2 != 0) {
        // 0x802256D8: addiu       $a0, $zero, 0x610
        ctx->r4 = ADD32(0, 0X610);
            goto L_802256E0;
    }
    // 0x802256D8: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
    // 0x802256DC: addiu       $a0, $zero, 0x60F
    ctx->r4 = ADD32(0, 0X60F);
L_802256E0:
    // 0x802256E0: jal         0x8006036C
    // 0x802256E4: nop

    func_8006036C_3B76C(rdram, ctx);
        goto after_29;
    // 0x802256E4: nop

    after_29:
    // 0x802256E8: j           L_8022574C
    // 0x802256EC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
        goto L_8022574C;
    // 0x802256EC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_802256F0:
    // 0x802256F0: jal         0x8006033C
    // 0x802256F4: addiu       $a0, $zero, 0x60F
    ctx->r4 = ADD32(0, 0X60F);
    func_8006033C_3B73C(rdram, ctx);
        goto after_30;
    // 0x802256F4: addiu       $a0, $zero, 0x60F
    ctx->r4 = ADD32(0, 0X60F);
    after_30:
    // 0x802256F8: bne         $v0, $zero, L_8022571C
    if (ctx->r2 != 0) {
        // 0x802256FC: nop
    
            goto L_8022571C;
    }
    // 0x802256FC: nop

    // 0x80225700: jal         0x8006033C
    // 0x80225704: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
    func_8006033C_3B73C(rdram, ctx);
        goto after_31;
    // 0x80225704: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
    after_31:
    // 0x80225708: bne         $v0, $zero, L_8022571C
    if (ctx->r2 != 0) {
        // 0x8022570C: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022571C;
    }
    // 0x8022570C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80225710: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
    // 0x80225714: j           L_80225750
    // 0x80225718: sb          $zero, 0x5($s2)
    MEM_B(0X5, ctx->r18) = 0;
        goto L_80225750;
    // 0x80225718: sb          $zero, 0x5($s2)
    MEM_B(0X5, ctx->r18) = 0;
L_8022571C:
    // 0x8022571C: jal         0x8006033C
    // 0x80225720: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_8006033C_3B73C(rdram, ctx);
        goto after_32;
    // 0x80225720: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_32:
    // 0x80225724: beq         $v0, $zero, L_80225750
    if (ctx->r2 == 0) {
        // 0x80225728: nop
    
            goto L_80225750;
    }
    // 0x80225728: nop

    // 0x8022572C: jal         0x80226D0C
    // 0x80225730: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80226D0C_ovl9(rdram, ctx);
        goto after_33;
    // 0x80225730: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_33:
    // 0x80225734: jal         0x80226D0C
    // 0x80225738: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80226D0C_ovl9(rdram, ctx);
        goto after_34;
    // 0x80225738: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_34:
    // 0x8022573C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
L_80225740:
    // 0x80225740: jal         0x80226AEC
    // 0x80225744: nop

    func_80226AEC_ovl9(rdram, ctx);
        goto after_35;
    // 0x80225744: nop

    after_35:
    // 0x80225748: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022574C:
    // 0x8022574C: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80225750:
    // 0x80225750: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80225754: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80225758: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022575C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225760: jr          $ra
    // 0x80225764: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225764: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226810_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226810: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226814: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226818: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x8022681C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226820: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226824: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226828: lw          $v0, -0x133C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X133C);
    // 0x8022682C: jalr        $v0
    // 0x80226830: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226830: nop

    after_0:
    // 0x80226834: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226838: jr          $ra
    // 0x8022683C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022683C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225BF4_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225BF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225BF8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225BFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225C00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225C04: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225C08: bne         $v0, $zero, L_80225C20
    if (ctx->r2 != 0) {
        // 0x80225C0C: nop
    
            goto L_80225C20;
    }
    // 0x80225C0C: nop

    // 0x80225C10: jal         0x80226AEC
    // 0x80225C14: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80225C14: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_0:
    // 0x80225C18: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225C1C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225C20:
    // 0x80225C20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225C24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225C28: jr          $ra
    // 0x80225C2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225C2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225CE4_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225CE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225CE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225CEC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225CF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225CF4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225CF8: bne         $v0, $zero, L_80225D10
    if (ctx->r2 != 0) {
        // 0x80225CFC: nop
    
            goto L_80225D10;
    }
    // 0x80225CFC: nop

    // 0x80225D00: jal         0x80226AEC
    // 0x80225D04: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80225D04: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x80225D08: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225D0C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225D10:
    // 0x80225D10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225D14: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225D18: jr          $ra
    // 0x80225D1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225D1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C3BC_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C3BC: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8022C3C0: beq         $v1, $zero, L_8022C3DC
    if (ctx->r3 == 0) {
        // 0x8022C3C4: addiu       $a1, $a0, 0xC0
        ctx->r5 = ADD32(ctx->r4, 0XC0);
            goto L_8022C3DC;
    }
    // 0x8022C3C4: addiu       $a1, $a0, 0xC0
    ctx->r5 = ADD32(ctx->r4, 0XC0);
    // 0x8022C3C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C3CC: beq         $v1, $v0, L_8022C3F8
    if (ctx->r3 == ctx->r2) {
        // 0x8022C3D0: nop
    
            goto L_8022C3F8;
    }
    // 0x8022C3D0: nop

    // 0x8022C3D4: j           L_8022C41C
    // 0x8022C3D8: nop

        goto L_8022C41C;
    // 0x8022C3D8: nop

L_8022C3DC:
    // 0x8022C3DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C3E0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022C3E4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022C3E8: sh          $v0, 0xC4($a0)
    MEM_H(0XC4, ctx->r4) = ctx->r2;
    // 0x8022C3EC: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
    // 0x8022C3F0: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x8022C3F4: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
L_8022C3F8:
    // 0x8022C3F8: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022C3FC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C400: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022C404: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C408: bgez        $v0, L_8022C41C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C40C: nop
    
            goto L_8022C41C;
    }
    // 0x8022C40C: nop

    // 0x8022C410: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8022C414: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022C418: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_8022C41C:
    // 0x8022C41C: jr          $ra
    // 0x8022C420: nop

    TRACE_RETURN()
    return;
    // 0x8022C420: nop

;}
RECOMP_FUNC void func_8022AF94_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AF94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022AF98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022AF9C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AFA0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022AFA4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022AFA8: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022AFAC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022AFB0: beq         $v0, $zero, L_8022AFC0
    if (ctx->r2 == 0) {
        // 0x8022AFB4: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022AFC0;
    }
    // 0x8022AFB4: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022AFB8: jal         0x8022BD54
    // 0x8022AFBC: nop

    func_8022BD54_ovl9(rdram, ctx);
        goto after_0;
    // 0x8022AFBC: nop

    after_0:
L_8022AFC0:
    // 0x8022AFC0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022AFC4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AFC8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022AFCC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022AFD0: lw          $v0, 0x778($at)
    ctx->r2 = MEM_W(ctx->r1, 0X778);
    // 0x8022AFD4: jalr        $v0
    // 0x8022AFD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022AFD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022AFDC: lh          $v0, 0x352($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X352);
    // 0x8022AFE0: beq         $v0, $zero, L_8022AFF0
    if (ctx->r2 == 0) {
        // 0x8022AFE4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022AFF0;
    }
    // 0x8022AFE4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022AFE8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022AFEC: sh          $v0, 0x352($s0)
    MEM_H(0X352, ctx->r16) = ctx->r2;
L_8022AFF0:
    // 0x8022AFF0: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022AFF4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022AFF8: beq         $v0, $zero, L_8022B060
    if (ctx->r2 == 0) {
        // 0x8022AFFC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B060;
    }
    // 0x8022AFFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B000: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B004: beq         $v1, $v0, L_8022B03C
    if (ctx->r3 == ctx->r2) {
        // 0x8022B008: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022B03C;
    }
    // 0x8022B008: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022B00C: beql        $v0, $zero, L_8022B024
    if (ctx->r2 == 0) {
        // 0x8022B010: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022B024;
    }
    goto skip_0;
    // 0x8022B010: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022B014: beql        $v1, $zero, L_8022B050
    if (ctx->r3 == 0) {
        // 0x8022B018: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_8022B050;
    }
    goto skip_1;
    // 0x8022B018: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_1:
    // 0x8022B01C: j           L_8022B054
    // 0x8022B020: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8022B054;
    // 0x8022B020: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022B024:
    // 0x8022B024: beq         $v1, $v0, L_8022B048
    if (ctx->r3 == ctx->r2) {
        // 0x8022B028: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022B048;
    }
    // 0x8022B028: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B02C: beq         $v1, $v0, L_8022B04C
    if (ctx->r3 == ctx->r2) {
        // 0x8022B030: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022B04C;
    }
    // 0x8022B030: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B034: j           L_8022B054
    // 0x8022B038: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8022B054;
    // 0x8022B038: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022B03C:
    // 0x8022B03C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B040: j           L_8022B050
    // 0x8022B044: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022B050;
    // 0x8022B044: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022B048:
    // 0x8022B048: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022B04C:
    // 0x8022B04C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022B050:
    // 0x8022B050: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022B054:
    // 0x8022B054: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B058: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8022B05C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022B060:
    // 0x8022B060: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022B064: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B068: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B06C: jr          $ra
    // 0x8022B070: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022B070: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802292C0_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802292C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802292C4: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x802292C8: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x802292CC: beq         $a0, $v0, L_80229334
    if (ctx->r4 == ctx->r2) {
        // 0x802292D0: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80229334;
    }
    // 0x802292D0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802292D4: slti        $v0, $a0, 0x2B
    ctx->r2 = SIGNED(ctx->r4) < 0X2B ? 1 : 0;
    // 0x802292D8: beql        $v0, $zero, L_802292F8
    if (ctx->r2 == 0) {
        // 0x802292DC: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_802292F8;
    }
    goto skip_0;
    // 0x802292DC: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    skip_0:
    // 0x802292E0: beq         $a0, $zero, L_8022932C
    if (ctx->r4 == 0) {
        // 0x802292E4: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_8022932C;
    }
    // 0x802292E4: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x802292E8: beq         $a0, $v0, L_8022934C
    if (ctx->r4 == ctx->r2) {
        // 0x802292EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022934C;
    }
    // 0x802292EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802292F0: j           L_8022934C
    // 0x802292F4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022934C;
    // 0x802292F4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_802292F8:
    // 0x802292F8: beq         $a0, $v0, L_8022932C
    if (ctx->r4 == ctx->r2) {
        // 0x802292FC: slti        $v0, $a0, 0x51
        ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
            goto L_8022932C;
    }
    // 0x802292FC: slti        $v0, $a0, 0x51
    ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
    // 0x80229300: beq         $v0, $zero, L_80229318
    if (ctx->r2 == 0) {
        // 0x80229304: addiu       $v0, $zero, 0x39
        ctx->r2 = ADD32(0, 0X39);
            goto L_80229318;
    }
    // 0x80229304: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x80229308: beq         $a0, $v0, L_8022934C
    if (ctx->r4 == ctx->r2) {
        // 0x8022930C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022934C;
    }
    // 0x8022930C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80229310: j           L_8022934C
    // 0x80229314: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022934C;
    // 0x80229314: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80229318:
    // 0x80229318: addiu       $v0, $zero, 0x53
    ctx->r2 = ADD32(0, 0X53);
    // 0x8022931C: beq         $a0, $v0, L_8022933C
    if (ctx->r4 == ctx->r2) {
        // 0x80229320: nop
    
            goto L_8022933C;
    }
    // 0x80229320: nop

    // 0x80229324: j           L_8022934C
    // 0x80229328: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022934C;
    // 0x80229328: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022932C:
    // 0x8022932C: j           L_8022934C
    // 0x80229330: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022934C;
    // 0x80229330: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80229334:
    // 0x80229334: j           L_8022934C
    // 0x80229338: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_8022934C;
    // 0x80229338: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022933C:
    // 0x8022933C: jal         0x800A3450
    // 0x80229340: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80229340: nop

    after_0:
    // 0x80229344: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80229348: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
L_8022934C:
    // 0x8022934C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229350: jr          $ra
    // 0x80229354: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229354: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802251B4_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802251B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802251B8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802251BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802251C0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802251C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802251C8: jal         0x80037D80
    // 0x802251CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80037D80_13180(rdram, ctx);
        goto after_0;
    // 0x802251CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x802251D0: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x802251D4: lb          $t1, -0x3BC7($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X3BC7);
    // 0x802251D8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251DC: addiu       $a0, $a0, 0xCB4
    ctx->r4 = ADD32(ctx->r4, 0XCB4);
    // 0x802251E0: sll         $v0, $t1, 3
    ctx->r2 = S32(ctx->r9 << 3);
    // 0x802251E4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802251E8: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x802251EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802251F0: sh          $v1, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r3;
    // 0x802251F4: lbu         $a1, 0x3($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X3);
    // 0x802251F8: lui         $a3, 0x7FE9
    ctx->r7 = S32(0X7FE9 << 16);
    // 0x802251FC: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80225200: sh          $a1, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r5;
    // 0x80225204: lbu         $a2, 0x0($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X0);
    // 0x80225208: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x8022520C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80225210: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80225214: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225218: sb          $a2, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r6;
    // 0x8022521C: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x80225220: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225224: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x80225228: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8022522C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225230: sb          $v1, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r3;
    // 0x80225234: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80225238: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x8022523C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80225240: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80225244: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225248: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x8022524C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80225250: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x80225254: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x80225258: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022525C: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x80225260: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225264: sb          $t0, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r8;
    // 0x80225268: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8022526C: bne         $t1, $zero, L_802252C8
    if (ctx->r9 != 0) {
        // 0x80225270: sb          $a1, 0x53D4($at)
        MEM_B(0X53D4, ctx->r1) = ctx->r5;
            goto L_802252C8;
    }
    // 0x80225270: sb          $a1, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r5;
    // 0x80225274: jal         0x8006033C
    // 0x80225278: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80225278: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_1:
    // 0x8022527C: beq         $v0, $zero, L_802252A0
    if (ctx->r2 == 0) {
        // 0x80225280: nop
    
            goto L_802252A0;
    }
    // 0x80225280: nop

    // 0x80225284: jal         0x8006033C
    // 0x80225288: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80225288: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    after_2:
    // 0x8022528C: bne         $v0, $zero, L_802252A0
    if (ctx->r2 != 0) {
        // 0x80225290: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802252A0;
    }
    // 0x80225290: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225294: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225298: j           L_802252A8
    // 0x8022529C: sb          $v0, -0x17A1($at)
    MEM_B(-0X17A1, ctx->r1) = ctx->r2;
        goto L_802252A8;
    // 0x8022529C: sb          $v0, -0x17A1($at)
    MEM_B(-0X17A1, ctx->r1) = ctx->r2;
L_802252A0:
    // 0x802252A0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802252A4: sb          $zero, -0x17A1($at)
    MEM_B(-0X17A1, ctx->r1) = 0;
L_802252A8:
    // 0x802252A8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802252AC: lb          $v0, -0x3BC6($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC6);
    // 0x802252B0: slti        $v0, $v0, 0x7
    ctx->r2 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x802252B4: bne         $v0, $zero, L_802252C0
    if (ctx->r2 != 0) {
        // 0x802252B8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802252C0;
    }
    // 0x802252B8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802252BC: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
L_802252C0:
    // 0x802252C0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802252C4: sb          $v0, -0x17BA($at)
    MEM_B(-0X17BA, ctx->r1) = ctx->r2;
L_802252C8:
    // 0x802252C8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802252CC: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x802252D0: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x802252D4: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x802252D8: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802252DC: sb          $zero, 0x44E($s1)
    MEM_B(0X44E, ctx->r17) = 0;
    // 0x802252E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802252E4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802252E8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802252EC: lw          $a0, -0x17D8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X17D8);
    // 0x802252F0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802252F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802252F8: lw          $v0, -0x1610($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1610);
    // 0x802252FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225300: jal         0x8004C790
    // 0x80225304: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_3;
    // 0x80225304: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_3:
    // 0x80225308: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x8022530C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225310: addiu       $a0, $a0, -0x15B0
    ctx->r4 = ADD32(ctx->r4, -0X15B0);
    // 0x80225314: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80225318: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022531C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80225320: lw          $v1, -0x1568($at)
    ctx->r3 = MEM_W(ctx->r1, -0X1568);
    // 0x80225324: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x80225328: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022532C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80225330: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225334: addiu       $v0, $v0, -0x15F8
    ctx->r2 = ADD32(ctx->r2, -0X15F8);
    // 0x80225338: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022533C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80225340: jal         0x80054FB8
    // 0x80225344: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_4;
    // 0x80225344: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_4:
    // 0x80225348: jal         0x8004A614
    // 0x8022534C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004A614_25A14(rdram, ctx);
        goto after_5;
    // 0x8022534C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_5:
    // 0x80225350: jal         0x80225370
    // 0x80225354: nop

    func_80225370_ovl9(rdram, ctx);
        goto after_6;
    // 0x80225354: nop

    after_6:
    // 0x80225358: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022535C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225360: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225364: jr          $ra
    // 0x80225368: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225368: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022536C: nop

;}
RECOMP_FUNC void func_80225890_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225890: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225894: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225898: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022589C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802258A0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802258A4: bne         $v0, $zero, L_802258BC
    if (ctx->r2 != 0) {
        // 0x802258A8: nop
    
            goto L_802258BC;
    }
    // 0x802258A8: nop

    // 0x802258AC: jal         0x80226AEC
    // 0x802258B0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x802258B0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_0:
    // 0x802258B4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802258B8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802258BC:
    // 0x802258BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802258C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802258C4: jr          $ra
    // 0x802258C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802258C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022851C_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022851C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228520: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228524: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228528: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022852C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228530: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80228534: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228538: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022853C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80228540: bne         $v0, $zero, L_8022859C
    if (ctx->r2 != 0) {
        // 0x80228544: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022859C;
    }
    // 0x80228544: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80228548: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022854C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80228550: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228554: jal         0x8004F820
    // 0x80228558: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80228558: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x8022855C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228560: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80228564: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x80228568: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022856C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228570: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x80228574: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x80228578: beq         $a0, $zero, L_8022859C
    if (ctx->r4 == 0) {
        // 0x8022857C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022859C;
    }
    // 0x8022857C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80228580: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80228584: jal         0x802292C0
    // 0x80228588: nop

    func_802292C0_ovl9(rdram, ctx);
        goto after_1;
    // 0x80228588: nop

    after_1:
    // 0x8022858C: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x80228590: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228594: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228598: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_8022859C:
    // 0x8022859C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802285A0: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x802285A4: bne         $v0, $zero, L_802285C8
    if (ctx->r2 != 0) {
        // 0x802285A8: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_802285C8;
    }
    // 0x802285A8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x802285AC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802285B0: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x802285B4: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x802285B8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x802285BC: jal         0x80229358
    // 0x802285C0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80229358_ovl9(rdram, ctx);
        goto after_2;
    // 0x802285C0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x802285C4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802285C8:
    // 0x802285C8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802285CC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802285D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802285D4: jr          $ra
    // 0x802285D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802285D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229CB0_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229CB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229CB4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229CB8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80229CBC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229CC0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229CC4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229CC8: lw          $v0, 0x6D0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6D0);
    // 0x80229CCC: jalr        $v0
    // 0x80229CD0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80229CD0: nop

    after_0:
    // 0x80229CD4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229CD8: jr          $ra
    // 0x80229CDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229CDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DD0C_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DD0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022DD10: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DD14: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022DD18: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022DD1C: jal         0x8004F144
    // 0x8022DD20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022DD20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022DD24: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022DD28: beq         $s0, $zero, L_8022DD68
    if (ctx->r16 == 0) {
        // 0x8022DD2C: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_8022DD68;
    }
    // 0x8022DD2C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8022DD30: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022DD34: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022DD38: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022DD3C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022DD40: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8022DD44: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x8022DD48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022DD4C: jal         0x8009A3B4
    // 0x8022DD50: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022DD50: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022DD54: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x8022DD58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022DD5C: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x8022DD60: jal         0x8004F684
    // 0x8022DD64: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    func_8004F684_2AA84(rdram, ctx);
        goto after_2;
    // 0x8022DD64: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    after_2:
L_8022DD68:
    // 0x8022DD68: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022DD6C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DD70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DD74: jr          $ra
    // 0x8022DD78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DD78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226258_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226258: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022625C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226260: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226264: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226268: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022626C: bne         $v0, $zero, L_80226284
    if (ctx->r2 != 0) {
        // 0x80226270: nop
    
            goto L_80226284;
    }
    // 0x80226270: nop

    // 0x80226274: jal         0x80226AEC
    // 0x80226278: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80226278: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_0:
    // 0x8022627C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226280: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226284:
    // 0x80226284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226288: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022628C: jr          $ra
    // 0x80226290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B1E0_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B1E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B1E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B1E8: jal         0x8004F418
    // 0x8022B1EC: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022B1EC: nop

    after_0:
    // 0x8022B1F0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022B1F4: jr          $ra
    // 0x8022B1F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B1F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226AC8_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226AC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226ACC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226AD0: jal         0x8005FB90
    // 0x80226AD4: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_0;
    // 0x80226AD4: nop

    after_0:
    // 0x80226AD8: jal         0x80060018
    // 0x80226ADC: nop

    func_80060018_3B418(rdram, ctx);
        goto after_1;
    // 0x80226ADC: nop

    after_1:
    // 0x80226AE0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226AE4: jr          $ra
    // 0x80226AE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226AE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229AD4_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229AD4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229AD8: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80229ADC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80229AE0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229AE4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80229AE8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80229AEC: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x80229AF0: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x80229AF4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80229AF8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80229AFC: bne         $v0, $s1, L_80229BE0
    if (ctx->r2 != ctx->r17) {
        // 0x80229B00: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_80229BE0;
    }
    // 0x80229B00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229B04: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80229B08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229B0C: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80229B10: addiu       $s2, $s3, 0x14
    ctx->r18 = ADD32(ctx->r19, 0X14);
    // 0x80229B14: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229B18: jal         0x8004F820
    // 0x80229B1C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80229B1C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_0:
    // 0x80229B20: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229B24: bgez        $v0, L_80229B50
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229B28: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229B50;
    }
    // 0x80229B28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229B2C: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80229B30: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229B34: jal         0x8004F820
    // 0x80229B38: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80229B38: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x80229B3C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229B40: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229B44: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80229B48: j           L_80229B68
    // 0x80229B4C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80229B68;
    // 0x80229B4C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80229B50:
    // 0x80229B50: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80229B54: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229B58: jal         0x8004F820
    // 0x80229B5C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80229B5C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80229B60: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229B64: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80229B68:
    // 0x80229B68: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
    // 0x80229B6C: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80229B70: lbu         $v1, 0xBD($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XBD);
    // 0x80229B74: sw          $zero, 0x184($s3)
    MEM_W(0X184, ctx->r19) = 0;
    // 0x80229B78: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80229B7C: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x80229B80: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x80229B84: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    // 0x80229B88: lh          $v0, 0x180($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X180);
    // 0x80229B8C: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80229B90: addiu       $s0, $s0, 0xC20
    ctx->r16 = ADD32(ctx->r16, 0XC20);
    // 0x80229B94: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80229B98: lh          $v0, 0x182($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X182);
    // 0x80229B9C: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x80229BA0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229BA4: sw          $v0, 0xC24($at)
    MEM_W(0XC24, ctx->r1) = ctx->r2;
    // 0x80229BA8: lh          $v0, 0x184($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X184);
    // 0x80229BAC: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x80229BB0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229BB4: sw          $v0, 0xC28($at)
    MEM_W(0XC28, ctx->r1) = ctx->r2;
    // 0x80229BB8: jal         0x8004EC38
    // 0x80229BBC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x80229BBC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x80229BC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229BC4: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80229BC8: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x80229BCC: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80229BD0: jal         0x80034FCC
    // 0x80229BD4: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_4;
    // 0x80229BD4: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_4:
    // 0x80229BD8: j           L_80229BE4
    // 0x80229BDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80229BE4;
    // 0x80229BDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80229BE0:
    // 0x80229BE0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80229BE4:
    // 0x80229BE4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80229BE8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80229BEC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80229BF0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229BF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229BF8: jr          $ra
    // 0x80229BFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80229BFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022CF88_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CF88: jr          $ra
    // 0x8022CF8C: nop

    TRACE_RETURN()
    return;
    // 0x8022CF8C: nop

;}
RECOMP_FUNC void func_8022D06C_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D06C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022D070: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022D074: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D078: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022D07C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022D080: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022D084: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D088: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D08C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D090: lw          $v0, 0x94C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X94C);
    // 0x8022D094: jalr        $v0
    // 0x8022D098: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022D098: nop

    after_0:
    // 0x8022D09C: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8022D0A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D0A4: beq         $v1, $v0, L_8022D118
    if (ctx->r3 == ctx->r2) {
        // 0x8022D0A8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022D118;
    }
    // 0x8022D0A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D0AC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8022D0B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D0B4: jal         0x80047284
    // 0x8022D0B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_1;
    // 0x8022D0B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022D0BC: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x8022D0C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D0C4: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x8022D0C8: jal         0x8009A3B4
    // 0x8022D0CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022D0CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022D0D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D0D4: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x8022D0D8: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022D0DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D0E0: addiu       $v0, $v0, -0x2D
    ctx->r2 = ADD32(ctx->r2, -0X2D);
    // 0x8022D0E4: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8022D0E8: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8022D0EC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022D0F0: addiu       $v0, $s1, 0x4C
    ctx->r2 = ADD32(ctx->r17, 0X4C);
    // 0x8022D0F4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022D0F8: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8022D0FC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022D100: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022D104: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022D108: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022D10C: jal         0x80051E18
    // 0x8022D110: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x8022D110: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x8022D114: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
L_8022D118:
    // 0x8022D118: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022D11C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022D120: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022D124: jr          $ra
    // 0x8022D128: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022D128: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80225150_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225154: addiu       $v0, $v0, -0x1CD4
    ctx->r2 = ADD32(ctx->r2, -0X1CD4);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225164: addiu       $v0, $v0, -0x1B54
    ctx->r2 = ADD32(ctx->r2, -0X1B54);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225174: addiu       $v0, $v0, -0x1B50
    ctx->r2 = ADD32(ctx->r2, -0X1B50);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225184: addiu       $v0, $v0, -0x1A9C
    ctx->r2 = ADD32(ctx->r2, -0X1A9C);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225194: addiu       $v0, $v0, -0x1A98
    ctx->r2 = ADD32(ctx->r2, -0X1A98);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802251A4: addiu       $v0, $v0, -0x1A3C
    ctx->r2 = ADD32(ctx->r2, -0X1A3C);
    // 0x802251A8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802251AC: jr          $ra
    // 0x802251B0: sw          $v0, -0x2344($at)
    MEM_W(-0X2344, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802251B0: sw          $v0, -0x2344($at)
    MEM_W(-0X2344, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_8022DE1C_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DE1C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022DE20: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022DE24: beq         $v0, $zero, L_8022DE64
    if (ctx->r2 == 0) {
        // 0x8022DE28: nop
    
            goto L_8022DE64;
    }
    // 0x8022DE28: nop

    // 0x8022DE2C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8022DE30: lbu         $v1, -0x240F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X240F);
    // 0x8022DE34: sltiu       $v0, $v1, 0x10
    ctx->r2 = ctx->r3 < 0X10 ? 1 : 0;
    // 0x8022DE38: beq         $v0, $zero, L_8022DE64
    if (ctx->r2 == 0) {
        // 0x8022DE3C: nop
    
            goto L_8022DE64;
    }
    // 0x8022DE3C: nop

    // 0x8022DE40: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022DE44: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022DE48: lbu         $v0, 0x9A0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9A0);
    // 0x8022DE4C: beq         $v0, $zero, L_8022DE64
    if (ctx->r2 == 0) {
        // 0x8022DE50: sb          $v0, 0xC($a0)
        MEM_B(0XC, ctx->r4) = ctx->r2;
            goto L_8022DE64;
    }
    // 0x8022DE50: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8022DE54: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DE58: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x8022DE5C: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8022DE60: sb          $zero, 0xF($a0)
    MEM_B(0XF, ctx->r4) = 0;
L_8022DE64:
    // 0x8022DE64: jr          $ra
    // 0x8022DE68: nop

    TRACE_RETURN()
    return;
    // 0x8022DE68: nop

;}
RECOMP_FUNC void func_80225980_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225980: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80225984: bne         $v0, $zero, L_80225990
    if (ctx->r2 != 0) {
        // 0x80225988: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225990;
    }
    // 0x80225988: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022598C: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
L_80225990:
    // 0x80225990: jr          $ra
    // 0x80225994: nop

    TRACE_RETURN()
    return;
    // 0x80225994: nop

;}
RECOMP_FUNC void func_80226558_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226558: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022655C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226560: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226564: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226568: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022656C: bne         $v0, $zero, L_80226584
    if (ctx->r2 != 0) {
        // 0x80226570: nop
    
            goto L_80226584;
    }
    // 0x80226570: nop

    // 0x80226574: jal         0x80226AEC
    // 0x80226578: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80226578: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    after_0:
    // 0x8022657C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226580: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226584:
    // 0x80226584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226588: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022658C: jr          $ra
    // 0x80226590: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226590: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226BE8_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226BE8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226BEC: lw          $v0, -0x1340($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1340);
    // 0x80226BF0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80226BF4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226BF8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80226BFC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80226C00: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80226C04: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80226C08: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80226C0C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226C10: beq         $v0, $zero, L_80226CE8
    if (ctx->r2 == 0) {
        // 0x80226C14: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_80226CE8;
    }
    // 0x80226C14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226C18: lui         $s4, 0x8000
    ctx->r20 = S32(0X8000 << 16);
    // 0x80226C1C: addiu       $s5, $zero, 0x20
    ctx->r21 = ADD32(0, 0X20);
    // 0x80226C20: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    // 0x80226C24: lui         $s2, 0x8023
    ctx->r18 = S32(0X8023 << 16);
    // 0x80226C28: addiu       $s2, $s2, 0xC80
    ctx->r18 = ADD32(ctx->r18, 0XC80);
    // 0x80226C2C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226C30: lw          $v0, -0x1340($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1340);
L_80226C34:
    // 0x80226C34: srlv        $v1, $s4, $s1
    ctx->r3 = S32(U32(ctx->r20) >> (ctx->r17 & 31));
    // 0x80226C38: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226C3C: beq         $v0, $zero, L_80226CD4
    if (ctx->r2 == 0) {
        // 0x80226C40: nop
    
            goto L_80226CD4;
    }
    // 0x80226C40: nop

    // 0x80226C44: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x80226C48: jal         0x8004DA68
    // 0x80226C4C: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    func_8004DA68_28E68(rdram, ctx);
        goto after_0;
    // 0x80226C4C: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    after_0:
    // 0x80226C50: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226C54: beq         $v1, $s5, L_80226C6C
    if (ctx->r3 == ctx->r21) {
        // 0x80226C58: addiu       $v0, $zero, 0x60
        ctx->r2 = ADD32(0, 0X60);
            goto L_80226C6C;
    }
    // 0x80226C58: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80226C5C: beq         $v1, $v0, L_80226C94
    if (ctx->r3 == ctx->r2) {
        // 0x80226C60: nop
    
            goto L_80226C94;
    }
    // 0x80226C60: nop

    // 0x80226C64: j           L_80226CB8
    // 0x80226C68: nop

        goto L_80226CB8;
    // 0x80226C68: nop

L_80226C6C:
    // 0x80226C6C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80226C70: sb          $s3, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r19;
    // 0x80226C74: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226C78: lw          $v0, 0x4020($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4020);
    // 0x80226C7C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80226C80: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226C84: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226C88: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80226C8C: j           L_80226CA8
    // 0x80226C90: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_80226CA8;
    // 0x80226C90: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80226C94:
    // 0x80226C94: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80226C98: sb          $s3, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r19;
    // 0x80226C9C: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80226CA0: lw          $v1, -0x26A8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X26A8);
    // 0x80226CA4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80226CA8:
    // 0x80226CA8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226CAC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80226CB0: jalr        $v0
    // 0x80226CB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80226CB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80226CB8:
    // 0x80226CB8: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80226CBC: lw          $v1, -0x1340($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1340);
    // 0x80226CC0: srlv        $v0, $s4, $s1
    ctx->r2 = S32(U32(ctx->r20) >> (ctx->r17 & 31));
    // 0x80226CC4: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80226CC8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80226CCC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226CD0: sw          $v1, -0x1340($at)
    MEM_W(-0X1340, ctx->r1) = ctx->r3;
L_80226CD4:
    // 0x80226CD4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226CD8: lw          $v0, -0x1340($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1340);
    // 0x80226CDC: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80226CE0: bne         $v0, $zero, L_80226C34
    if (ctx->r2 != 0) {
        // 0x80226CE4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80226C34;
    }
    // 0x80226CE4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80226CE8:
    // 0x80226CE8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80226CEC: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80226CF0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80226CF4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80226CF8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226CFC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226D00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226D04: jr          $ra
    // 0x80226D08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80226D08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80225C6C_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225C70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225C74: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225C78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225C7C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225C80: bne         $v0, $zero, L_80225C98
    if (ctx->r2 != 0) {
        // 0x80225C84: nop
    
            goto L_80225C98;
    }
    // 0x80225C84: nop

    // 0x80225C88: jal         0x80226AEC
    // 0x80225C8C: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80225C8C: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_0:
    // 0x80225C90: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225C94: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225C98:
    // 0x80225C98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225C9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225CA0: jr          $ra
    // 0x80225CA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225CA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
